/* Automatically generated by Kelbt from "xmlparse.kh".
 *
 * Parts of this file are copied from Kelbt source covered by the GNU
 * GPL. As a special exception, you may use the parts of this file copied
 * from Kelbt source without restriction. The remainder is derived from
 * "xmlparse.kh" and inherits the copyright status of that file.
 */

#line 1 "xmlparse.kh"
/*
 *  Copyright 2001-2007 Adrian Thurston <thurston@cs.queensu.ca>
 */

/*  This file is part of Ragel.
 *
 *  Ragel is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 * 
 *  Ragel is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 * 
 *  You should have received a copy of the GNU General Public License
 *  along with Ragel; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA 
 */
#ifndef _XMLPARSE_H
#define _XMLPARSE_H

#include "vector.h"
#include "gendata.h"
#include <iostream>

using std::ostream;

struct AttrMarker
{
	char *id;
	int idLen;
	char *value;
	int valueLen;
};

struct Attribute
{
	char *id;
	char *value;
};

typedef Vector<AttrMarker> AttrMkList;
typedef Vector<Attribute> AttrList;
struct XMLTagHashPair;

struct XMLTag
{
	enum TagType { Open, Close };

	XMLTag( XMLTagHashPair *tagId, TagType type ) : 
		tagId(tagId), type(type), 
		content(0), attrList(0) {}
	
	Attribute *findAttr( char *id )
	{
		if ( attrList != 0 ) {
			for ( AttrList::Iter attr = *attrList; attr.lte(); attr++ ) {
				if ( strcmp( id, attr->id ) == 0 )
					return attr;
			}
		}
		return 0;
	}

	XMLTagHashPair *tagId;
	TagType type;

	/* Content is associtated with closing tags. */
	char *content;

	/* Attribute lists are associated with opening tags. */
	AttrList *attrList;
};


struct XMLTagHashPair
{
    char *name;
    int id;
};

struct Token
{
	XMLTag *tag;
	InputLoc loc;
};

struct InlineItem;
struct InlineList;

struct LmSwitchVect;
struct LmSwitchAction;

struct Parser
{
	#line 121 "xmlparse.kh"


	#line 111 "xmlparse.h"
	struct Parser_Block *block;
	struct Parser_LangEl *freshEl;
	int freshPos;
	struct Parser_LangEl *pool;
	int numRetry;
	int numNodes;
	struct Parser_LangEl *stackTop;
	struct Parser_LangEl *lastFinal;
	int errCount;
	int curs;
#line 124 "xmlparse.kh"

	void init();
	int parseLangEl( int type, const Token *token );

	Parser( char *fileName, bool outputActive, bool wantComplete ) : 
		fileName(fileName), sourceFileName(0), outStream(0),
		outputActive(outputActive), wantComplete(wantComplete),
		cgd(0) { }

	int token( int tokenId, Token &token );
	int token( int tokenId, int col, int line );
	int token( XMLTag *tag, int col, int line );

	/* Report an error encountered by the parser. */
	ostream &warning( const InputLoc &loc );
	ostream &error();
	ostream &error( const InputLoc &loc );
	ostream &parser_error( int tokId, Token &token );
	ostream &source_error( const InputLoc &loc );

	/* The name of the root section, this does not change during an include. */
	char *fileName;
	char *sourceFileName;
	ostream *outStream;
	bool outputActive;
	bool wantComplete;

	/* Collected during parsing. */
	char *attrKey;
	char *attrValue;
	int curAction;
	int curActionTable;
	int curTrans;
	int curState;
	int curCondSpace;
	int curStateCond;

	CodeGenData *cgd;
	CodeGenMap codeGenMap;

	Vector <char*> writeOptions;
};

#line 166 "xmlparse.h"
#define TAG_unknown 128
#define TAG_ragel 129
#define TAG_ragel_def 130
#define TAG_host 131
#define TAG_state_list 132
#define TAG_state 133
#define TAG_trans_list 134
#define TAG_t 135
#define TAG_machine 136
#define TAG_start_state 137
#define TAG_error_state 138
#define TAG_action_list 139
#define TAG_action_table_list 140
#define TAG_action 141
#define TAG_action_table 142
#define TAG_alphtype 143
#define TAG_element 144
#define TAG_getkey 145
#define TAG_state_actions 146
#define TAG_entry_points 147
#define TAG_sub_action 148
#define TAG_cond_space_list 149
#define TAG_cond_space 150
#define TAG_cond_list 151
#define TAG_c 152
#define TAG_exports 153
#define TAG_ex 154
#define TAG_text 155
#define TAG_goto 156
#define TAG_call 157
#define TAG_next 158
#define TAG_goto_expr 159
#define TAG_call_expr 160
#define TAG_next_expr 161
#define TAG_ret 162
#define TAG_pchar 163
#define TAG_char 164
#define TAG_hold 165
#define TAG_exec 166
#define TAG_curs 167
#define TAG_targs 168
#define TAG_entry 169
#define TAG_data 170
#define TAG_lm_switch 171
#define TAG_init_act 172
#define TAG_set_act 173
#define TAG_set_tokend 174
#define TAG_get_tokend 175
#define TAG_init_tokstart 176
#define TAG_set_tokstart 177
#define TAG_write 178
#define TAG_access 179
#define TAG_break 180
#define TAG_arg 181
#define TAG_cs_expr 182
#define TAG_p_expr 183
#define TAG_pe_expr 184
#define TAG_top_expr 185
#define TAG_stack_expr 186
#define TAG_act_expr 187
#define TAG_tokstart_expr 188
#define TAG_tokend_expr 189
#define TAG_data_expr 190
#define TAG_prepush 191
#define TAG_postpop 192
#define _eof 193

#line 168 "xmlparse.kh"

int xml_parse( std::istream &input, char *fileName, 
		bool outputActive, bool wantComplete );

#endif /* _XMLPARSE_H */
