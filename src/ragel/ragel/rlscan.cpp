#line 1 "rlscan.rl"
/*
 *  Copyright 2006-2007 Adrian Thurston <thurston@cs.queensu.ca>
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

#include <iostream>
#include <fstream>
#include <string.h>

#include "ragel.h"
#include "rlscan.h"

//#define LOG_TOKENS

using std::ifstream;
using std::istream;
using std::ostream;
using std::cout;
using std::cerr;
using std::endl;

enum InlineBlockType
{
	CurlyDelimited,
	SemiTerminated
};


/*
 * The Scanner for Importing
 */

#line 117 "rlscan.rl"



#line 55 "rlscan.cpp"
static const int inline_token_scan_start = 2;
static const int inline_token_scan_first_final = 2;
static const int inline_token_scan_error = -1;

static const int inline_token_scan_en_main = 2;

#line 120 "rlscan.rl"

void Scanner::flushImport()
{
	int *p = token_data;
	int *pe = token_data + cur_token;

	
#line 70 "rlscan.cpp"
	{
	 tok_cs = inline_token_scan_start;
	 tok_tokstart = 0;
	 tok_tokend = 0;
	 tok_act = 0;
	}
#line 127 "rlscan.rl"
	
#line 79 "rlscan.cpp"
	{
	if ( p == pe )
		goto _out;
	switch (  tok_cs )
	{
tr0:
#line 115 "rlscan.rl"
	{{p = (( tok_tokend))-1;}}
	goto st2;
tr1:
#line 101 "rlscan.rl"
	{ tok_tokend = p+1;{ 
			int base = tok_tokstart - token_data;
			int nameOff = 0;
			int litOff = 2;

			directToParser( inclToParser, fileName, line, column, TK_Word, 
					token_strings[base+nameOff], token_lens[base+nameOff] );
			directToParser( inclToParser, fileName, line, column, '=', 0, 0 );
			directToParser( inclToParser, fileName, line, column, TK_Literal,
					token_strings[base+litOff], token_lens[base+litOff] );
			directToParser( inclToParser, fileName, line, column, ';', 0, 0 );
		}}
	goto st2;
tr2:
#line 73 "rlscan.rl"
	{ tok_tokend = p+1;{ 
			int base = tok_tokstart - token_data;
			int nameOff = 0;
			int numOff = 2;

			directToParser( inclToParser, fileName, line, column, TK_Word, 
					token_strings[base+nameOff], token_lens[base+nameOff] );
			directToParser( inclToParser, fileName, line, column, '=', 0, 0 );
			directToParser( inclToParser, fileName, line, column, TK_UInt,
					token_strings[base+numOff], token_lens[base+numOff] );
			directToParser( inclToParser, fileName, line, column, ';', 0, 0 );
		}}
	goto st2;
tr3:
#line 87 "rlscan.rl"
	{ tok_tokend = p+1;{ 
			int base = tok_tokstart - token_data;
			int nameOff = 1;
			int litOff = 2;

			directToParser( inclToParser, fileName, line, column, TK_Word, 
					token_strings[base+nameOff], token_lens[base+nameOff] );
			directToParser( inclToParser, fileName, line, column, '=', 0, 0 );
			directToParser( inclToParser, fileName, line, column, TK_Literal,
					token_strings[base+litOff], token_lens[base+litOff] );
			directToParser( inclToParser, fileName, line, column, ';', 0, 0 );
		}}
	goto st2;
tr4:
#line 59 "rlscan.rl"
	{ tok_tokend = p+1;{ 
			int base = tok_tokstart - token_data;
			int nameOff = 1;
			int numOff = 2;

			directToParser( inclToParser, fileName, line, column, TK_Word, 
					token_strings[base+nameOff], token_lens[base+nameOff] );
			directToParser( inclToParser, fileName, line, column, '=', 0, 0 );
			directToParser( inclToParser, fileName, line, column, TK_UInt,
					token_strings[base+numOff], token_lens[base+numOff] );
			directToParser( inclToParser, fileName, line, column, ';', 0, 0 );
		}}
	goto st2;
tr5:
#line 115 "rlscan.rl"
	{ tok_tokend = p+1;}
	goto st2;
tr8:
#line 115 "rlscan.rl"
	{ tok_tokend = p;p--;}
	goto st2;
st2:
#line 1 "rlscan.rl"
	{ tok_tokstart = 0;}
	if ( ++p == pe )
		goto _out2;
case 2:
#line 1 "rlscan.rl"
	{ tok_tokstart = p;}
#line 165 "rlscan.cpp"
	switch( (*p) ) {
		case 128: goto tr6;
		case 131: goto tr7;
	}
	goto tr5;
tr6:
#line 1 "rlscan.rl"
	{ tok_tokend = p+1;}
	goto st3;
st3:
	if ( ++p == pe )
		goto _out3;
case 3:
#line 179 "rlscan.cpp"
	if ( (*p) == 61 )
		goto st0;
	goto tr8;
st0:
	if ( ++p == pe )
		goto _out0;
case 0:
	switch( (*p) ) {
		case 129: goto tr1;
		case 130: goto tr2;
	}
	goto tr0;
tr7:
#line 1 "rlscan.rl"
	{ tok_tokend = p+1;}
	goto st4;
st4:
	if ( ++p == pe )
		goto _out4;
case 4:
#line 200 "rlscan.cpp"
	if ( (*p) == 128 )
		goto st1;
	goto tr8;
st1:
	if ( ++p == pe )
		goto _out1;
case 1:
	switch( (*p) ) {
		case 129: goto tr3;
		case 130: goto tr4;
	}
	goto tr0;
	}
	_out2:  tok_cs = 2; goto _out; 
	_out3:  tok_cs = 3; goto _out; 
	_out0:  tok_cs = 0; goto _out; 
	_out4:  tok_cs = 4; goto _out; 
	_out1:  tok_cs = 1; goto _out; 

	_out: {}
	}
#line 128 "rlscan.rl"

	if ( tok_tokstart == 0 )
		cur_token = 0;
	else {
		cur_token = pe - tok_tokstart;
		int ts_offset = tok_tokstart - token_data;
		memmove( token_data, token_data+ts_offset, cur_token*sizeof(token_data[0]) );
		memmove( token_strings, token_strings+ts_offset, cur_token*sizeof(token_strings[0]) );
		memmove( token_lens, token_lens+ts_offset, cur_token*sizeof(token_lens[0]) );
	}
}

void Scanner::directToParser( Parser *toParser, char *tokFileName, int tokLine, 
		int tokColumn, int type, char *tokdata, int toklen )
{
	InputLoc loc;

	#ifdef LOG_TOKENS
	cerr << "scanner:" << tokLine << ":" << tokColumn << 
			": sending token to the parser " << Parser_lelNames[type];
	cerr << " " << toklen;
	if ( tokdata != 0 )
		cerr << " " << tokdata;
	cerr << endl;
	#endif

	loc.fileName = tokFileName;
	loc.line = tokLine;
	loc.col = tokColumn;

	toParser->token( loc, type, tokdata, toklen );
}

void Scanner::importToken( int token, char *start, char *end )
{
	if ( cur_token == max_tokens )
		flushImport();

	token_data[cur_token] = token;
	if ( start == 0 ) {
		token_strings[cur_token] = 0;
		token_lens[cur_token] = 0;
	}
	else {
		int toklen = end-start;
		token_lens[cur_token] = toklen;
		token_strings[cur_token] = new char[toklen+1];
		memcpy( token_strings[cur_token], start, toklen );
		token_strings[cur_token][toklen] = 0;
	}
	cur_token++;
}

void Scanner::pass( int token, char *start, char *end )
{
	if ( importMachines )
		importToken( token, start, end );
	pass();
}

void Scanner::pass()
{
	updateCol();

	/* If no errors and we are at the bottom of the include stack (the
	 * source file listed on the command line) then write out the data. */
	if ( includeDepth == 0 && machineSpec == 0 && machineName == 0 )
		xmlEscapeHost( output, tokstart, tokend-tokstart );
}

/*
 * The scanner for processing sections, includes, imports, etc.
 */


#line 298 "rlscan.cpp"
static const int section_parse_start = 10;
static const int section_parse_first_final = 10;
static const int section_parse_error = 0;

static const int section_parse_en_main = 10;

#line 206 "rlscan.rl"



void Scanner::init( )
{
	
#line 312 "rlscan.cpp"
	{
	cs = section_parse_start;
	}
#line 212 "rlscan.rl"
}

bool Scanner::active()
{
	if ( ignoreSection )
		return false;

	if ( parser == 0 && ! parserExistsError ) {
		scan_error() << "this specification has no name, nor does any previous"
			" specification" << endl;
		parserExistsError = true;
	}

	if ( parser == 0 )
		return false;

	return true;
}

ostream &Scanner::scan_error()
{
	/* Maintain the error count. */
	gblErrorCount += 1;
	cerr << fileName << ":" << line << ":" << column << ": ";
	return cerr;
}

bool Scanner::recursiveInclude( char *inclFileName, char *inclSectionName )
{
	for ( IncludeStack::Iter si = includeStack; si.lte(); si++ ) {
		if ( strcmp( si->fileName, inclFileName ) == 0 &&
				strcmp( si->sectionName, inclSectionName ) == 0 )
		{
			return true;
		}
	}
	return false;	
}

void Scanner::updateCol()
{
	char *from = lastnl;
	if ( from == 0 )
		from = tokstart;
	//cerr << "adding " << tokend - from << " to column" << endl;
	column += tokend - from;
	lastnl = 0;
}

#line 430 "rlscan.rl"


void Scanner::token( int type, char c )
{
	token( type, &c, &c + 1 );
}

void Scanner::token( int type )
{
	token( type, 0, 0 );
}

void Scanner::token( int type, char *start, char *end )
{
	char *tokdata = 0;
	int toklen = 0;
	if ( start != 0 ) {
		toklen = end-start;
		tokdata = new char[toklen+1];
		memcpy( tokdata, start, toklen );
		tokdata[toklen] = 0;
	}

	processToken( type, tokdata, toklen );
}

void Scanner::processToken( int type, char *tokdata, int toklen )
{
	int *p = &type;
	int *pe = &type + 1;

	
#line 399 "rlscan.cpp"
	{
	if ( p == pe )
		goto _out;
	switch ( cs )
	{
tr2:
#line 277 "rlscan.rl"
	{
		/* Assign a name to the machine. */
		char *machine = word;

		if ( !importMachines && inclSectionTarg == 0 ) {
			ignoreSection = false;

			ParserDictEl *pdEl = parserDict.find( machine );
			if ( pdEl == 0 ) {
				pdEl = new ParserDictEl( machine );
				pdEl->value = new Parser( fileName, machine, sectionLoc );
				pdEl->value->init();
				parserDict.insert( pdEl );
			}

			parser = pdEl->value;
		}
		else if ( !importMachines && strcmp( inclSectionTarg, machine ) == 0 ) {
			/* found include target */
			ignoreSection = false;
			parser = inclToParser;
		}
		else {
			/* ignoring section */
			ignoreSection = true;
			parser = 0;
		}
	}
	goto st10;
tr6:
#line 311 "rlscan.rl"
	{
		if ( active() ) {
			char *inclSectionName = word;
			char *inclFileName = 0;

			/* Implement defaults for the input file and section name. */
			if ( inclSectionName == 0 )
				inclSectionName = parser->sectionName;

			if ( lit != 0 ) 
				inclFileName = prepareFileName( lit, lit_len );
			else
				inclFileName = fileName;

			/* Check for a recursive include structure. Add the current file/section
			 * name then check if what we are including is already in the stack. */
			includeStack.append( IncludeStackItem( fileName, parser->sectionName ) );

			if ( recursiveInclude( inclFileName, inclSectionName ) )
				scan_error() << "include: this is a recursive include operation" << endl;
			else {
				/* Open the input file for reading. */
				ifstream *inFile = new ifstream( inclFileName );
				if ( ! inFile->is_open() ) {
					scan_error() << "include: could not open " << 
							inclFileName << " for reading" << endl;
				}

				Scanner scanner( inclFileName, *inFile, output, parser,
						inclSectionName, includeDepth+1, false );
				scanner.do_scan( );
				delete inFile;
			}

			/* Remove the last element (len-1) */
			includeStack.remove( -1 );
		}
	}
	goto st10;
tr10:
#line 360 "rlscan.rl"
	{
		if ( active() ) {
			char *importFileName = prepareFileName( lit, lit_len );

			/* Open the input file for reading. */
			ifstream *inFile = new ifstream( importFileName );
			if ( ! inFile->is_open() ) {
				scan_error() << "import: could not open " << 
						importFileName << " for reading" << endl;
			}

			Scanner scanner( importFileName, *inFile, output, parser,
					0, includeDepth+1, true );
			scanner.do_scan( );
			scanner.importToken( 0, 0, 0 );
			scanner.flushImport();
			delete inFile;
		}
	}
	goto st10;
tr13:
#line 402 "rlscan.rl"
	{
		if ( active() && machineSpec == 0 && machineName == 0 )
			output << "</write>\n";
	}
	goto st10;
tr14:
#line 413 "rlscan.rl"
	{
		/* Send the token off to the parser. */
		if ( active() )
			directToParser( parser, fileName, line, column, type, tokdata, toklen );
	}
	goto st10;
st10:
	if ( ++p == pe )
		goto _out10;
case 10:
#line 518 "rlscan.cpp"
	switch( (*p) ) {
		case 191: goto st1;
		case 192: goto st3;
		case 193: goto st6;
		case 194: goto tr18;
	}
	goto tr14;
st1:
	if ( ++p == pe )
		goto _out1;
case 1:
	if ( (*p) == 128 )
		goto tr1;
	goto tr0;
tr0:
#line 271 "rlscan.rl"
	{ scan_error() << "bad machine statement" << endl; }
	goto st0;
tr3:
#line 272 "rlscan.rl"
	{ scan_error() << "bad include statement" << endl; }
	goto st0;
tr8:
#line 273 "rlscan.rl"
	{ scan_error() << "bad import statement" << endl; }
	goto st0;
tr11:
#line 274 "rlscan.rl"
	{ scan_error() << "bad write statement" << endl; }
	goto st0;
#line 549 "rlscan.cpp"
st0:
	goto _out0;
tr1:
#line 268 "rlscan.rl"
	{ word = tokdata; word_len = toklen; }
	goto st2;
st2:
	if ( ++p == pe )
		goto _out2;
case 2:
#line 560 "rlscan.cpp"
	if ( (*p) == 59 )
		goto tr2;
	goto tr0;
st3:
	if ( ++p == pe )
		goto _out3;
case 3:
	switch( (*p) ) {
		case 128: goto tr4;
		case 129: goto tr5;
	}
	goto tr3;
tr4:
#line 267 "rlscan.rl"
	{ word = lit = 0; word_len = lit_len = 0; }
#line 268 "rlscan.rl"
	{ word = tokdata; word_len = toklen; }
	goto st4;
st4:
	if ( ++p == pe )
		goto _out4;
case 4:
#line 583 "rlscan.cpp"
	switch( (*p) ) {
		case 59: goto tr6;
		case 129: goto tr7;
	}
	goto tr3;
tr5:
#line 267 "rlscan.rl"
	{ word = lit = 0; word_len = lit_len = 0; }
#line 269 "rlscan.rl"
	{ lit = tokdata; lit_len = toklen; }
	goto st5;
tr7:
#line 269 "rlscan.rl"
	{ lit = tokdata; lit_len = toklen; }
	goto st5;
st5:
	if ( ++p == pe )
		goto _out5;
case 5:
#line 603 "rlscan.cpp"
	if ( (*p) == 59 )
		goto tr6;
	goto tr3;
st6:
	if ( ++p == pe )
		goto _out6;
case 6:
	if ( (*p) == 129 )
		goto tr9;
	goto tr8;
tr9:
#line 269 "rlscan.rl"
	{ lit = tokdata; lit_len = toklen; }
	goto st7;
st7:
	if ( ++p == pe )
		goto _out7;
case 7:
#line 622 "rlscan.cpp"
	if ( (*p) == 59 )
		goto tr10;
	goto tr8;
tr18:
#line 385 "rlscan.rl"
	{
		if ( active() && machineSpec == 0 && machineName == 0 ) {
			output << "<write"
					" def_name=\"" << parser->sectionName << "\""
					" line=\"" << line << "\""
					" col=\"" << column << "\""
					">";
		}
	}
	goto st8;
st8:
	if ( ++p == pe )
		goto _out8;
case 8:
#line 642 "rlscan.cpp"
	if ( (*p) == 128 )
		goto tr12;
	goto tr11;
tr12:
#line 396 "rlscan.rl"
	{
		if ( active() && machineSpec == 0 && machineName == 0 )
			output << "<arg>" << tokdata << "</arg>";
	}
	goto st9;
st9:
	if ( ++p == pe )
		goto _out9;
case 9:
#line 657 "rlscan.cpp"
	switch( (*p) ) {
		case 59: goto tr13;
		case 128: goto tr12;
	}
	goto tr11;
	}
	_out10: cs = 10; goto _out; 
	_out1: cs = 1; goto _out; 
	_out0: cs = 0; goto _out; 
	_out2: cs = 2; goto _out; 
	_out3: cs = 3; goto _out; 
	_out4: cs = 4; goto _out; 
	_out5: cs = 5; goto _out; 
	_out6: cs = 6; goto _out; 
	_out7: cs = 7; goto _out; 
	_out8: cs = 8; goto _out; 
	_out9: cs = 9; goto _out; 

	_out: {}
	}
#line 464 "rlscan.rl"


	updateCol();

	/* Record the last token for use in controlling the scan of subsequent
	 * tokens. */
	lastToken = type;
}

void Scanner::startSection( )
{
	parserExistsError = false;

	if ( includeDepth == 0 ) {
		if ( machineSpec == 0 && machineName == 0 )
			output << "</host>\n";
	}

	sectionLoc.fileName = fileName;
	sectionLoc.line = line;
	sectionLoc.col = 0;
}

void Scanner::endSection( )
{
	/* Execute the eof actions for the section parser. */
	
#line 706 "rlscan.cpp"
	{
	switch ( cs ) {
	case 1: 
	case 2: 
#line 271 "rlscan.rl"
	{ scan_error() << "bad machine statement" << endl; }
	break;
	case 3: 
	case 4: 
	case 5: 
#line 272 "rlscan.rl"
	{ scan_error() << "bad include statement" << endl; }
	break;
	case 6: 
	case 7: 
#line 273 "rlscan.rl"
	{ scan_error() << "bad import statement" << endl; }
	break;
	case 8: 
	case 9: 
#line 274 "rlscan.rl"
	{ scan_error() << "bad write statement" << endl; }
	break;
#line 730 "rlscan.cpp"
	}
	}

#line 493 "rlscan.rl"


	/* Close off the section with the parser. */
	if ( active() ) {
		InputLoc loc;
		loc.fileName = fileName;
		loc.line = line;
		loc.col = 0;

		parser->token( loc, TK_EndSection, 0, 0 );
	}

	if ( includeDepth == 0 ) {
		if ( machineSpec == 0 && machineName == 0 ) {
			/* The end section may include a newline on the end, so
			 * we use the last line, which will count the newline. */
			output << "<host line=\"" << line << "\">";
		}
	}
}

#line 1051 "rlscan.rl"



#line 760 "rlscan.cpp"
static const int rlscan_start = 38;
static const int rlscan_first_final = 38;
static const int rlscan_error = 0;

static const int rlscan_en_inline_code_ruby = 52;
static const int rlscan_en_inline_code = 95;
static const int rlscan_en_or_literal = 137;
static const int rlscan_en_ragel_re_literal = 139;
static const int rlscan_en_write_statement = 143;
static const int rlscan_en_parser_def = 146;
static const int rlscan_en_main_ruby = 253;
static const int rlscan_en_main = 38;

#line 1054 "rlscan.rl"

void Scanner::do_scan()
{
	int bufsize = 8;
	char *buf = new char[bufsize];
	const char last_char = 0;
	int cs, act, have = 0;
	int top;

	/* The stack is two deep, one level for going into ragel defs from the main
	 * machines which process outside code, and another for going into or literals
	 * from either a ragel spec, or a regular expression. */
	int stack[2];
	int curly_count = 0;
	bool execute = true;
	bool singleLineSpec = false;
	InlineBlockType inlineBlockType = CurlyDelimited;

	/* Init the section parser and the character scanner. */
	init();
	
#line 796 "rlscan.cpp"
	{
	cs = rlscan_start;
	top = 0;
	tokstart = 0;
	tokend = 0;
	act = 0;
	}
#line 1075 "rlscan.rl"

	/* Set up the start state. FIXME: After 5.20 is released the nocs write
	 * init option should be used, the main machine eliminated and this statement moved
	 * above the write init. */
	if ( hostLang->lang == HostLang::Ruby )
		cs = rlscan_en_main_ruby;
	else
		cs = rlscan_en_main;
	
	while ( execute ) {
		char *p = buf + have;
		int space = bufsize - have;

		if ( space == 0 ) {
			/* We filled up the buffer trying to scan a token. Grow it. */
			bufsize = bufsize * 2;
			char *newbuf = new char[bufsize];

			/* Recompute p and space. */
			p = newbuf + have;
			space = bufsize - have;

			/* Patch up pointers possibly in use. */
			if ( tokstart != 0 )
				tokstart = newbuf + ( tokstart - buf );
			tokend = newbuf + ( tokend - buf );

			/* Copy the new buffer in. */
			memcpy( newbuf, buf, have );
			delete[] buf;
			buf = newbuf;
		}

		input.read( p, space );
		int len = input.gcount();

		/* If we see eof then append the EOF char. */
	 	if ( len == 0 ) {
			p[0] = last_char, len = 1;
			execute = false;
		}

		char *pe = p + len;
		
#line 849 "rlscan.cpp"
	{
	if ( p == pe )
		goto _out;
	goto _resume;

_again:
	switch ( cs ) {
		case 38: goto st38;
		case 39: goto st39;
		case 40: goto st40;
		case 1: goto st1;
		case 2: goto st2;
		case 41: goto st41;
		case 42: goto st42;
		case 43: goto st43;
		case 3: goto st3;
		case 4: goto st4;
		case 44: goto st44;
		case 5: goto st5;
		case 6: goto st6;
		case 7: goto st7;
		case 45: goto st45;
		case 46: goto st46;
		case 47: goto st47;
		case 48: goto st48;
		case 49: goto st49;
		case 50: goto st50;
		case 51: goto st51;
		case 52: goto st52;
		case 53: goto st53;
		case 54: goto st54;
		case 8: goto st8;
		case 9: goto st9;
		case 55: goto st55;
		case 10: goto st10;
		case 56: goto st56;
		case 11: goto st11;
		case 12: goto st12;
		case 57: goto st57;
		case 13: goto st13;
		case 14: goto st14;
		case 58: goto st58;
		case 59: goto st59;
		case 15: goto st15;
		case 60: goto st60;
		case 61: goto st61;
		case 62: goto st62;
		case 63: goto st63;
		case 64: goto st64;
		case 65: goto st65;
		case 66: goto st66;
		case 67: goto st67;
		case 68: goto st68;
		case 69: goto st69;
		case 70: goto st70;
		case 71: goto st71;
		case 72: goto st72;
		case 73: goto st73;
		case 74: goto st74;
		case 75: goto st75;
		case 76: goto st76;
		case 77: goto st77;
		case 78: goto st78;
		case 79: goto st79;
		case 80: goto st80;
		case 81: goto st81;
		case 82: goto st82;
		case 83: goto st83;
		case 84: goto st84;
		case 85: goto st85;
		case 86: goto st86;
		case 87: goto st87;
		case 88: goto st88;
		case 89: goto st89;
		case 90: goto st90;
		case 91: goto st91;
		case 92: goto st92;
		case 93: goto st93;
		case 94: goto st94;
		case 95: goto st95;
		case 96: goto st96;
		case 97: goto st97;
		case 16: goto st16;
		case 17: goto st17;
		case 98: goto st98;
		case 18: goto st18;
		case 19: goto st19;
		case 99: goto st99;
		case 20: goto st20;
		case 21: goto st21;
		case 22: goto st22;
		case 100: goto st100;
		case 101: goto st101;
		case 23: goto st23;
		case 102: goto st102;
		case 103: goto st103;
		case 104: goto st104;
		case 105: goto st105;
		case 106: goto st106;
		case 107: goto st107;
		case 108: goto st108;
		case 109: goto st109;
		case 110: goto st110;
		case 111: goto st111;
		case 112: goto st112;
		case 113: goto st113;
		case 114: goto st114;
		case 115: goto st115;
		case 116: goto st116;
		case 117: goto st117;
		case 118: goto st118;
		case 119: goto st119;
		case 120: goto st120;
		case 121: goto st121;
		case 122: goto st122;
		case 123: goto st123;
		case 124: goto st124;
		case 125: goto st125;
		case 126: goto st126;
		case 127: goto st127;
		case 128: goto st128;
		case 129: goto st129;
		case 130: goto st130;
		case 131: goto st131;
		case 132: goto st132;
		case 133: goto st133;
		case 134: goto st134;
		case 135: goto st135;
		case 136: goto st136;
		case 137: goto st137;
		case 138: goto st138;
		case 139: goto st139;
		case 140: goto st140;
		case 141: goto st141;
		case 142: goto st142;
		case 143: goto st143;
		case 0: goto st0;
		case 144: goto st144;
		case 145: goto st145;
		case 146: goto st146;
		case 147: goto st147;
		case 148: goto st148;
		case 24: goto st24;
		case 149: goto st149;
		case 25: goto st25;
		case 150: goto st150;
		case 26: goto st26;
		case 151: goto st151;
		case 152: goto st152;
		case 153: goto st153;
		case 27: goto st27;
		case 28: goto st28;
		case 154: goto st154;
		case 155: goto st155;
		case 156: goto st156;
		case 157: goto st157;
		case 158: goto st158;
		case 29: goto st29;
		case 159: goto st159;
		case 160: goto st160;
		case 161: goto st161;
		case 162: goto st162;
		case 163: goto st163;
		case 164: goto st164;
		case 165: goto st165;
		case 166: goto st166;
		case 167: goto st167;
		case 168: goto st168;
		case 169: goto st169;
		case 170: goto st170;
		case 171: goto st171;
		case 172: goto st172;
		case 173: goto st173;
		case 174: goto st174;
		case 175: goto st175;
		case 176: goto st176;
		case 177: goto st177;
		case 178: goto st178;
		case 179: goto st179;
		case 180: goto st180;
		case 181: goto st181;
		case 182: goto st182;
		case 183: goto st183;
		case 184: goto st184;
		case 185: goto st185;
		case 186: goto st186;
		case 187: goto st187;
		case 188: goto st188;
		case 189: goto st189;
		case 190: goto st190;
		case 191: goto st191;
		case 192: goto st192;
		case 193: goto st193;
		case 194: goto st194;
		case 195: goto st195;
		case 196: goto st196;
		case 197: goto st197;
		case 198: goto st198;
		case 199: goto st199;
		case 200: goto st200;
		case 201: goto st201;
		case 202: goto st202;
		case 203: goto st203;
		case 204: goto st204;
		case 205: goto st205;
		case 206: goto st206;
		case 207: goto st207;
		case 208: goto st208;
		case 209: goto st209;
		case 210: goto st210;
		case 211: goto st211;
		case 212: goto st212;
		case 213: goto st213;
		case 214: goto st214;
		case 215: goto st215;
		case 216: goto st216;
		case 217: goto st217;
		case 218: goto st218;
		case 219: goto st219;
		case 220: goto st220;
		case 221: goto st221;
		case 222: goto st222;
		case 223: goto st223;
		case 224: goto st224;
		case 225: goto st225;
		case 226: goto st226;
		case 227: goto st227;
		case 228: goto st228;
		case 229: goto st229;
		case 230: goto st230;
		case 231: goto st231;
		case 232: goto st232;
		case 233: goto st233;
		case 234: goto st234;
		case 235: goto st235;
		case 236: goto st236;
		case 237: goto st237;
		case 238: goto st238;
		case 239: goto st239;
		case 240: goto st240;
		case 241: goto st241;
		case 242: goto st242;
		case 243: goto st243;
		case 244: goto st244;
		case 245: goto st245;
		case 246: goto st246;
		case 247: goto st247;
		case 248: goto st248;
		case 249: goto st249;
		case 250: goto st250;
		case 251: goto st251;
		case 252: goto st252;
		case 30: goto st30;
		case 253: goto st253;
		case 254: goto st254;
		case 255: goto st255;
		case 31: goto st31;
		case 32: goto st32;
		case 256: goto st256;
		case 33: goto st33;
		case 257: goto st257;
		case 258: goto st258;
		case 259: goto st259;
		case 34: goto st34;
		case 35: goto st35;
		case 260: goto st260;
		case 36: goto st36;
		case 37: goto st37;
		case 261: goto st261;
		case 262: goto st262;
	default: break;
	}

	if ( ++p == pe )
		goto _out;
_resume:
	switch ( cs )
	{
tr2:
#line 1033 "rlscan.rl"
	{tokend = p+1;{ pass( IMP_Literal, tokstart, tokend ); }}
	goto st38;
tr10:
#line 1032 "rlscan.rl"
	{tokend = p+1;{ pass(); }}
	goto st38;
tr12:
#line 520 "rlscan.rl"
	{ 
		lastnl = p; 
		column = 0;
		line++;
	}
#line 1032 "rlscan.rl"
	{tokend = p+1;{ pass(); }}
	goto st38;
tr67:
#line 1049 "rlscan.rl"
	{tokend = p+1;{ pass( *tokstart, 0, 0 ); }}
	goto st38;
tr68:
#line 1048 "rlscan.rl"
	{tokend = p+1;}
	goto st38;
tr78:
#line 1047 "rlscan.rl"
	{tokend = p;p--;{ pass(); }}
	goto st38;
tr79:
#line 1049 "rlscan.rl"
	{tokend = p;p--;{ pass( *tokstart, 0, 0 ); }}
	goto st38;
tr81:
#line 1041 "rlscan.rl"
	{tokend = p;p--;{ 
			updateCol();
			singleLineSpec = true;
			startSection();
			{stack[top++] = 38; goto st146;}
		}}
	goto st38;
tr82:
#line 1035 "rlscan.rl"
	{tokend = p+1;{ 
			updateCol();
			singleLineSpec = false;
			startSection();
			{stack[top++] = 38; goto st146;}
		}}
	goto st38;
tr83:
#line 1031 "rlscan.rl"
	{tokend = p;p--;{ pass( IMP_UInt, tokstart, tokend ); }}
	goto st38;
tr84:
#line 1 "rlscan.rl"
	{	switch( act ) {
	case 176:
	{{p = ((tokend))-1;} pass( IMP_Define, 0, 0 ); }
	break;
	case 177:
	{{p = ((tokend))-1;} pass( IMP_Word, tokstart, tokend ); }
	break;
	default: break;
	}
	}
	goto st38;
tr85:
#line 1030 "rlscan.rl"
	{tokend = p;p--;{ pass( IMP_Word, tokstart, tokend ); }}
	goto st38;
st38:
#line 1 "rlscan.rl"
	{tokstart = 0;}
	if ( ++p == pe )
		goto _out38;
case 38:
#line 1 "rlscan.rl"
	{tokstart = p;}
#line 1209 "rlscan.cpp"
	switch( (*p) ) {
		case 0: goto tr68;
		case 9: goto st39;
		case 10: goto tr70;
		case 32: goto st39;
		case 34: goto tr71;
		case 37: goto st41;
		case 39: goto tr73;
		case 47: goto tr74;
		case 95: goto tr76;
		case 100: goto st47;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st45;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr76;
	} else
		goto tr76;
	goto tr67;
tr70:
#line 520 "rlscan.rl"
	{ 
		lastnl = p; 
		column = 0;
		line++;
	}
	goto st39;
st39:
	if ( ++p == pe )
		goto _out39;
case 39:
#line 1243 "rlscan.cpp"
	switch( (*p) ) {
		case 9: goto st39;
		case 10: goto tr70;
		case 32: goto st39;
	}
	goto tr78;
tr71:
#line 1 "rlscan.rl"
	{tokend = p+1;}
	goto st40;
st40:
	if ( ++p == pe )
		goto _out40;
case 40:
#line 1258 "rlscan.cpp"
	switch( (*p) ) {
		case 10: goto tr1;
		case 34: goto tr2;
		case 92: goto st2;
	}
	goto st1;
tr1:
#line 520 "rlscan.rl"
	{ 
		lastnl = p; 
		column = 0;
		line++;
	}
	goto st1;
st1:
	if ( ++p == pe )
		goto _out1;
case 1:
#line 1277 "rlscan.cpp"
	switch( (*p) ) {
		case 10: goto tr1;
		case 34: goto tr2;
		case 92: goto st2;
	}
	goto st1;
st2:
	if ( ++p == pe )
		goto _out2;
case 2:
	if ( (*p) == 10 )
		goto tr1;
	goto st1;
st41:
	if ( ++p == pe )
		goto _out41;
case 41:
	if ( (*p) == 37 )
		goto st42;
	goto tr79;
st42:
	if ( ++p == pe )
		goto _out42;
case 42:
	if ( (*p) == 123 )
		goto tr82;
	goto tr81;
tr73:
#line 1 "rlscan.rl"
	{tokend = p+1;}
	goto st43;
st43:
	if ( ++p == pe )
		goto _out43;
case 43:
#line 1313 "rlscan.cpp"
	switch( (*p) ) {
		case 10: goto tr5;
		case 39: goto tr2;
		case 92: goto st4;
	}
	goto st3;
tr5:
#line 520 "rlscan.rl"
	{ 
		lastnl = p; 
		column = 0;
		line++;
	}
	goto st3;
st3:
	if ( ++p == pe )
		goto _out3;
case 3:
#line 1332 "rlscan.cpp"
	switch( (*p) ) {
		case 10: goto tr5;
		case 39: goto tr2;
		case 92: goto st4;
	}
	goto st3;
st4:
	if ( ++p == pe )
		goto _out4;
case 4:
	if ( (*p) == 10 )
		goto tr5;
	goto st3;
tr74:
#line 1 "rlscan.rl"
	{tokend = p+1;}
	goto st44;
st44:
	if ( ++p == pe )
		goto _out44;
case 44:
#line 1354 "rlscan.cpp"
	switch( (*p) ) {
		case 42: goto st5;
		case 47: goto st7;
	}
	goto tr79;
tr8:
#line 520 "rlscan.rl"
	{ 
		lastnl = p; 
		column = 0;
		line++;
	}
	goto st5;
st5:
	if ( ++p == pe )
		goto _out5;
case 5:
#line 1372 "rlscan.cpp"
	switch( (*p) ) {
		case 10: goto tr8;
		case 42: goto st6;
	}
	goto st5;
st6:
	if ( ++p == pe )
		goto _out6;
case 6:
	switch( (*p) ) {
		case 10: goto tr8;
		case 42: goto st6;
		case 47: goto tr10;
	}
	goto st5;
st7:
	if ( ++p == pe )
		goto _out7;
case 7:
	if ( (*p) == 10 )
		goto tr12;
	goto st7;
st45:
	if ( ++p == pe )
		goto _out45;
case 45:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto st45;
	goto tr83;
tr76:
#line 1 "rlscan.rl"
	{tokend = p+1;}
#line 1030 "rlscan.rl"
	{act = 177;}
	goto st46;
tr90:
#line 1 "rlscan.rl"
	{tokend = p+1;}
#line 1029 "rlscan.rl"
	{act = 176;}
	goto st46;
st46:
	if ( ++p == pe )
		goto _out46;
case 46:
#line 1418 "rlscan.cpp"
	if ( (*p) == 95 )
		goto tr76;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr76;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr76;
	} else
		goto tr76;
	goto tr84;
st47:
	if ( ++p == pe )
		goto _out47;
case 47:
	switch( (*p) ) {
		case 95: goto tr76;
		case 101: goto st48;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr76;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr76;
	} else
		goto tr76;
	goto tr85;
st48:
	if ( ++p == pe )
		goto _out48;
case 48:
	switch( (*p) ) {
		case 95: goto tr76;
		case 102: goto st49;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr76;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr76;
	} else
		goto tr76;
	goto tr85;
st49:
	if ( ++p == pe )
		goto _out49;
case 49:
	switch( (*p) ) {
		case 95: goto tr76;
		case 105: goto st50;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr76;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr76;
	} else
		goto tr76;
	goto tr85;
st50:
	if ( ++p == pe )
		goto _out50;
case 50:
	switch( (*p) ) {
		case 95: goto tr76;
		case 110: goto st51;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr76;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr76;
	} else
		goto tr76;
	goto tr85;
st51:
	if ( ++p == pe )
		goto _out51;
case 51:
	switch( (*p) ) {
		case 95: goto tr76;
		case 101: goto tr90;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr76;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr76;
	} else
		goto tr76;
	goto tr85;
tr15:
#line 595 "rlscan.rl"
	{tokend = p+1;{ token( IL_Literal, tokstart, tokend ); }}
	goto st52;
tr18:
#line 520 "rlscan.rl"
	{ 
		lastnl = p; 
		column = 0;
		line++;
	}
#line 602 "rlscan.rl"
	{tokend = p+1;{ token( IL_Comment, tokstart, tokend ); }}
	goto st52;
tr25:
#line 591 "rlscan.rl"
	{{p = ((tokend))-1;}{ token( TK_UInt, tokstart, tokend ); }}
	goto st52;
tr91:
#line 649 "rlscan.rl"
	{tokend = p+1;{ token( IL_Symbol, tokstart, tokend ); }}
	goto st52;
tr92:
#line 644 "rlscan.rl"
	{tokend = p+1;{
			scan_error() << "unterminated code block" << endl;
		}}
	goto st52;
tr98:
#line 624 "rlscan.rl"
	{tokend = p+1;{ token( *tokstart, tokstart, tokend ); }}
	goto st52;
tr99:
#line 619 "rlscan.rl"
	{tokend = p+1;{ 
			whitespaceOn = true;
			token( *tokstart, tokstart, tokend );
		}}
	goto st52;
tr104:
#line 612 "rlscan.rl"
	{tokend = p+1;{
			whitespaceOn = true;
			token( *tokstart, tokstart, tokend );
			if ( inlineBlockType == SemiTerminated )
				{cs = stack[--top]; goto _again;}
		}}
	goto st52;
tr107:
#line 626 "rlscan.rl"
	{tokend = p+1;{ 
			token( IL_Symbol, tokstart, tokend );
			curly_count += 1; 
		}}
	goto st52;
tr108:
#line 631 "rlscan.rl"
	{tokend = p+1;{ 
			if ( --curly_count == 0 && inlineBlockType == CurlyDelimited ) {
				/* Inline code block ends. */
				token( '}' );
				{cs = stack[--top]; goto _again;}
			}
			else {
				/* Either a semi terminated inline block or only the closing
				 * brace of some inner scope, not the block's closing brace. */
				token( IL_Symbol, tokstart, tokend );
			}
		}}
	goto st52;
tr109:
#line 597 "rlscan.rl"
	{tokend = p;p--;{ 
			if ( whitespaceOn ) 
				token( IL_WhiteSpace, tokstart, tokend );
		}}
	goto st52;
tr110:
#line 591 "rlscan.rl"
	{tokend = p;p--;{ token( TK_UInt, tokstart, tokend ); }}
	goto st52;
tr112:
#line 592 "rlscan.rl"
	{tokend = p;p--;{ token( TK_Hex, tokstart, tokend ); }}
	goto st52;
tr113:
#line 649 "rlscan.rl"
	{tokend = p;p--;{ token( IL_Symbol, tokstart, tokend ); }}
	goto st52;
tr114:
#line 604 "rlscan.rl"
	{tokend = p+1;{ token( TK_NameSep, tokstart, tokend ); }}
	goto st52;
tr115:
#line 1 "rlscan.rl"
	{	switch( act ) {
	case 1:
	{{p = ((tokend))-1;} token( KW_PChar ); }
	break;
	case 3:
	{{p = ((tokend))-1;} token( KW_CurState ); }
	break;
	case 4:
	{{p = ((tokend))-1;} token( KW_TargState ); }
	break;
	case 5:
	{{p = ((tokend))-1;} 
			whitespaceOn = false; 
			token( KW_Entry );
		}
	break;
	case 6:
	{{p = ((tokend))-1;} 
			whitespaceOn = false; 
			token( KW_Hold );
		}
	break;
	case 7:
	{{p = ((tokend))-1;} token( KW_Exec, 0, 0 ); }
	break;
	case 8:
	{{p = ((tokend))-1;} 
			whitespaceOn = false; 
			token( KW_Goto );
		}
	break;
	case 9:
	{{p = ((tokend))-1;} 
			whitespaceOn = false; 
			token( KW_Next );
		}
	break;
	case 10:
	{{p = ((tokend))-1;} 
			whitespaceOn = false; 
			token( KW_Call );
		}
	break;
	case 11:
	{{p = ((tokend))-1;} 
			whitespaceOn = false; 
			token( KW_Ret );
		}
	break;
	case 12:
	{{p = ((tokend))-1;} 
			whitespaceOn = false; 
			token( KW_Break );
		}
	break;
	case 13:
	{{p = ((tokend))-1;} token( TK_Word, tokstart, tokend ); }
	break;
	default: break;
	}
	}
	goto st52;
tr116:
#line 589 "rlscan.rl"
	{tokend = p;p--;{ token( TK_Word, tokstart, tokend ); }}
	goto st52;
tr130:
#line 554 "rlscan.rl"
	{tokend = p;p--;{ token( KW_Char ); }}
	goto st52;
st52:
#line 1 "rlscan.rl"
	{tokstart = 0;}
	if ( ++p == pe )
		goto _out52;
case 52:
#line 1 "rlscan.rl"
	{tokstart = p;}
#line 1688 "rlscan.cpp"
	switch( (*p) ) {
		case 0: goto tr92;
		case 9: goto st53;
		case 10: goto tr94;
		case 32: goto st53;
		case 34: goto tr95;
		case 35: goto tr96;
		case 39: goto tr97;
		case 40: goto tr98;
		case 44: goto tr98;
		case 47: goto tr100;
		case 48: goto tr101;
		case 58: goto st61;
		case 59: goto tr104;
		case 95: goto tr105;
		case 102: goto st63;
		case 123: goto tr107;
		case 125: goto tr108;
	}
	if ( (*p) < 49 ) {
		if ( 41 <= (*p) && (*p) <= 42 )
			goto tr99;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr105;
		} else if ( (*p) >= 65 )
			goto tr105;
	} else
		goto st59;
	goto tr91;
tr94:
#line 520 "rlscan.rl"
	{ 
		lastnl = p; 
		column = 0;
		line++;
	}
	goto st53;
st53:
	if ( ++p == pe )
		goto _out53;
case 53:
#line 1732 "rlscan.cpp"
	switch( (*p) ) {
		case 9: goto st53;
		case 10: goto tr94;
		case 32: goto st53;
	}
	goto tr109;
tr95:
#line 1 "rlscan.rl"
	{tokend = p+1;}
	goto st54;
st54:
	if ( ++p == pe )
		goto _out54;
case 54:
#line 1747 "rlscan.cpp"
	switch( (*p) ) {
		case 10: goto tr14;
		case 34: goto tr15;
		case 92: goto st9;
	}
	goto st8;
tr14:
#line 520 "rlscan.rl"
	{ 
		lastnl = p; 
		column = 0;
		line++;
	}
	goto st8;
st8:
	if ( ++p == pe )
		goto _out8;
case 8:
#line 1766 "rlscan.cpp"
	switch( (*p) ) {
		case 10: goto tr14;
		case 34: goto tr15;
		case 92: goto st9;
	}
	goto st8;
st9:
	if ( ++p == pe )
		goto _out9;
case 9:
	if ( (*p) == 10 )
		goto tr14;
	goto st8;
tr96:
#line 1 "rlscan.rl"
	{tokend = p+1;}
	goto st55;
st55:
	if ( ++p == pe )
		goto _out55;
case 55:
#line 1788 "rlscan.cpp"
	if ( (*p) == 10 )
		goto tr18;
	goto st10;
st10:
	if ( ++p == pe )
		goto _out10;
case 10:
	if ( (*p) == 10 )
		goto tr18;
	goto st10;
tr97:
#line 1 "rlscan.rl"
	{tokend = p+1;}
	goto st56;
st56:
	if ( ++p == pe )
		goto _out56;
case 56:
#line 1807 "rlscan.cpp"
	switch( (*p) ) {
		case 10: goto tr20;
		case 39: goto tr15;
		case 92: goto st12;
	}
	goto st11;
tr20:
#line 520 "rlscan.rl"
	{ 
		lastnl = p; 
		column = 0;
		line++;
	}
	goto st11;
st11:
	if ( ++p == pe )
		goto _out11;
case 11:
#line 1826 "rlscan.cpp"
	switch( (*p) ) {
		case 10: goto tr20;
		case 39: goto tr15;
		case 92: goto st12;
	}
	goto st11;
st12:
	if ( ++p == pe )
		goto _out12;
case 12:
	if ( (*p) == 10 )
		goto tr20;
	goto st11;
tr100:
#line 1 "rlscan.rl"
	{tokend = p+1;}
	goto st57;
st57:
	if ( ++p == pe )
		goto _out57;
case 57:
#line 1848 "rlscan.cpp"
	switch( (*p) ) {
		case 10: goto tr23;
		case 47: goto tr15;
		case 92: goto st14;
	}
	goto st13;
tr23:
#line 520 "rlscan.rl"
	{ 
		lastnl = p; 
		column = 0;
		line++;
	}
	goto st13;
st13:
	if ( ++p == pe )
		goto _out13;
case 13:
#line 1867 "rlscan.cpp"
	switch( (*p) ) {
		case 10: goto tr23;
		case 47: goto tr15;
		case 92: goto st14;
	}
	goto st13;
st14:
	if ( ++p == pe )
		goto _out14;
case 14:
	if ( (*p) == 10 )
		goto tr23;
	goto st13;
tr101:
#line 1 "rlscan.rl"
	{tokend = p+1;}
	goto st58;
st58:
	if ( ++p == pe )
		goto _out58;
case 58:
#line 1889 "rlscan.cpp"
	if ( (*p) == 120 )
		goto st15;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto st59;
	goto tr110;
st59:
	if ( ++p == pe )
		goto _out59;
case 59:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto st59;
	goto tr110;
st15:
	if ( ++p == pe )
		goto _out15;
case 15:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st60;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st60;
	} else
		goto st60;
	goto tr25;
st60:
	if ( ++p == pe )
		goto _out60;
case 60:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st60;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st60;
	} else
		goto st60;
	goto tr112;
st61:
	if ( ++p == pe )
		goto _out61;
case 61:
	if ( (*p) == 58 )
		goto tr114;
	goto tr113;
tr105:
#line 1 "rlscan.rl"
	{tokend = p+1;}
#line 589 "rlscan.rl"
	{act = 13;}
	goto st62;
tr129:
#line 1 "rlscan.rl"
	{tokend = p+1;}
#line 584 "rlscan.rl"
	{act = 12;}
	goto st62;
tr134:
#line 1 "rlscan.rl"
	{tokend = p+1;}
#line 576 "rlscan.rl"
	{act = 10;}
	goto st62;
tr136:
#line 1 "rlscan.rl"
	{tokend = p+1;}
#line 555 "rlscan.rl"
	{act = 3;}
	goto st62;
tr141:
#line 1 "rlscan.rl"
	{tokend = p+1;}
#line 557 "rlscan.rl"
	{act = 5;}
	goto st62;
tr143:
#line 1 "rlscan.rl"
	{tokend = p+1;}
#line 567 "rlscan.rl"
	{act = 7;}
	goto st62;
tr146:
#line 1 "rlscan.rl"
	{tokend = p+1;}
#line 568 "rlscan.rl"
	{act = 8;}
	goto st62;
tr149:
#line 1 "rlscan.rl"
	{tokend = p+1;}
#line 563 "rlscan.rl"
	{act = 6;}
	goto st62;
tr152:
#line 1 "rlscan.rl"
	{tokend = p+1;}
#line 572 "rlscan.rl"
	{act = 9;}
	goto st62;
tr153:
#line 1 "rlscan.rl"
	{tokend = p+1;}
#line 553 "rlscan.rl"
	{act = 1;}
	goto st62;
tr155:
#line 1 "rlscan.rl"
	{tokend = p+1;}
#line 580 "rlscan.rl"
	{act = 11;}
	goto st62;
tr159:
#line 1 "rlscan.rl"
	{tokend = p+1;}
#line 556 "rlscan.rl"
	{act = 4;}
	goto st62;
st62:
	if ( ++p == pe )
		goto _out62;
case 62:
#line 2011 "rlscan.cpp"
	if ( (*p) == 95 )
		goto tr105;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr105;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr105;
	} else
		goto tr105;
	goto tr115;
st63:
	if ( ++p == pe )
		goto _out63;
case 63:
	switch( (*p) ) {
		case 95: goto tr105;
		case 98: goto st64;
		case 99: goto st68;
		case 101: goto st73;
		case 103: goto st79;
		case 104: goto st82;
		case 110: goto st85;
		case 112: goto st88;
		case 114: goto st89;
		case 116: goto st91;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr105;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr105;
	} else
		goto tr105;
	goto tr116;
st64:
	if ( ++p == pe )
		goto _out64;
case 64:
	switch( (*p) ) {
		case 95: goto tr105;
		case 114: goto st65;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr105;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr105;
	} else
		goto tr105;
	goto tr116;
st65:
	if ( ++p == pe )
		goto _out65;
case 65:
	switch( (*p) ) {
		case 95: goto tr105;
		case 101: goto st66;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr105;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr105;
	} else
		goto tr105;
	goto tr116;
st66:
	if ( ++p == pe )
		goto _out66;
case 66:
	switch( (*p) ) {
		case 95: goto tr105;
		case 97: goto st67;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr105;
	} else if ( (*p) > 90 ) {
		if ( 98 <= (*p) && (*p) <= 122 )
			goto tr105;
	} else
		goto tr105;
	goto tr116;
st67:
	if ( ++p == pe )
		goto _out67;
case 67:
	switch( (*p) ) {
		case 95: goto tr105;
		case 107: goto tr129;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr105;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr105;
	} else
		goto tr105;
	goto tr116;
st68:
	if ( ++p == pe )
		goto _out68;
case 68:
	switch( (*p) ) {
		case 95: goto tr105;
		case 97: goto st69;
		case 117: goto st71;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr105;
	} else if ( (*p) > 90 ) {
		if ( 98 <= (*p) && (*p) <= 122 )
			goto tr105;
	} else
		goto tr105;
	goto tr130;
st69:
	if ( ++p == pe )
		goto _out69;
case 69:
	switch( (*p) ) {
		case 95: goto tr105;
		case 108: goto st70;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr105;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr105;
	} else
		goto tr105;
	goto tr116;
st70:
	if ( ++p == pe )
		goto _out70;
case 70:
	switch( (*p) ) {
		case 95: goto tr105;
		case 108: goto tr134;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr105;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr105;
	} else
		goto tr105;
	goto tr116;
st71:
	if ( ++p == pe )
		goto _out71;
case 71:
	switch( (*p) ) {
		case 95: goto tr105;
		case 114: goto st72;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr105;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr105;
	} else
		goto tr105;
	goto tr116;
st72:
	if ( ++p == pe )
		goto _out72;
case 72:
	switch( (*p) ) {
		case 95: goto tr105;
		case 115: goto tr136;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr105;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr105;
	} else
		goto tr105;
	goto tr116;
st73:
	if ( ++p == pe )
		goto _out73;
case 73:
	switch( (*p) ) {
		case 95: goto tr105;
		case 110: goto st74;
		case 120: goto st77;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr105;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr105;
	} else
		goto tr105;
	goto tr116;
st74:
	if ( ++p == pe )
		goto _out74;
case 74:
	switch( (*p) ) {
		case 95: goto tr105;
		case 116: goto st75;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr105;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr105;
	} else
		goto tr105;
	goto tr116;
st75:
	if ( ++p == pe )
		goto _out75;
case 75:
	switch( (*p) ) {
		case 95: goto tr105;
		case 114: goto st76;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr105;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr105;
	} else
		goto tr105;
	goto tr116;
st76:
	if ( ++p == pe )
		goto _out76;
case 76:
	switch( (*p) ) {
		case 95: goto tr105;
		case 121: goto tr141;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr105;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr105;
	} else
		goto tr105;
	goto tr116;
st77:
	if ( ++p == pe )
		goto _out77;
case 77:
	switch( (*p) ) {
		case 95: goto tr105;
		case 101: goto st78;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr105;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr105;
	} else
		goto tr105;
	goto tr116;
st78:
	if ( ++p == pe )
		goto _out78;
case 78:
	switch( (*p) ) {
		case 95: goto tr105;
		case 99: goto tr143;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr105;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr105;
	} else
		goto tr105;
	goto tr116;
st79:
	if ( ++p == pe )
		goto _out79;
case 79:
	switch( (*p) ) {
		case 95: goto tr105;
		case 111: goto st80;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr105;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr105;
	} else
		goto tr105;
	goto tr116;
st80:
	if ( ++p == pe )
		goto _out80;
case 80:
	switch( (*p) ) {
		case 95: goto tr105;
		case 116: goto st81;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr105;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr105;
	} else
		goto tr105;
	goto tr116;
st81:
	if ( ++p == pe )
		goto _out81;
case 81:
	switch( (*p) ) {
		case 95: goto tr105;
		case 111: goto tr146;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr105;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr105;
	} else
		goto tr105;
	goto tr116;
st82:
	if ( ++p == pe )
		goto _out82;
case 82:
	switch( (*p) ) {
		case 95: goto tr105;
		case 111: goto st83;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr105;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr105;
	} else
		goto tr105;
	goto tr116;
st83:
	if ( ++p == pe )
		goto _out83;
case 83:
	switch( (*p) ) {
		case 95: goto tr105;
		case 108: goto st84;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr105;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr105;
	} else
		goto tr105;
	goto tr116;
st84:
	if ( ++p == pe )
		goto _out84;
case 84:
	switch( (*p) ) {
		case 95: goto tr105;
		case 100: goto tr149;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr105;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr105;
	} else
		goto tr105;
	goto tr116;
st85:
	if ( ++p == pe )
		goto _out85;
case 85:
	switch( (*p) ) {
		case 95: goto tr105;
		case 101: goto st86;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr105;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr105;
	} else
		goto tr105;
	goto tr116;
st86:
	if ( ++p == pe )
		goto _out86;
case 86:
	switch( (*p) ) {
		case 95: goto tr105;
		case 120: goto st87;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr105;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr105;
	} else
		goto tr105;
	goto tr116;
st87:
	if ( ++p == pe )
		goto _out87;
case 87:
	switch( (*p) ) {
		case 95: goto tr105;
		case 116: goto tr152;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr105;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr105;
	} else
		goto tr105;
	goto tr116;
st88:
	if ( ++p == pe )
		goto _out88;
case 88:
	switch( (*p) ) {
		case 95: goto tr105;
		case 99: goto tr153;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr105;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr105;
	} else
		goto tr105;
	goto tr116;
st89:
	if ( ++p == pe )
		goto _out89;
case 89:
	switch( (*p) ) {
		case 95: goto tr105;
		case 101: goto st90;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr105;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr105;
	} else
		goto tr105;
	goto tr116;
st90:
	if ( ++p == pe )
		goto _out90;
case 90:
	switch( (*p) ) {
		case 95: goto tr105;
		case 116: goto tr155;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr105;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr105;
	} else
		goto tr105;
	goto tr116;
st91:
	if ( ++p == pe )
		goto _out91;
case 91:
	switch( (*p) ) {
		case 95: goto tr105;
		case 97: goto st92;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr105;
	} else if ( (*p) > 90 ) {
		if ( 98 <= (*p) && (*p) <= 122 )
			goto tr105;
	} else
		goto tr105;
	goto tr116;
st92:
	if ( ++p == pe )
		goto _out92;
case 92:
	switch( (*p) ) {
		case 95: goto tr105;
		case 114: goto st93;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr105;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr105;
	} else
		goto tr105;
	goto tr116;
st93:
	if ( ++p == pe )
		goto _out93;
case 93:
	switch( (*p) ) {
		case 95: goto tr105;
		case 103: goto st94;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr105;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr105;
	} else
		goto tr105;
	goto tr116;
st94:
	if ( ++p == pe )
		goto _out94;
case 94:
	switch( (*p) ) {
		case 95: goto tr105;
		case 115: goto tr159;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr105;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr105;
	} else
		goto tr105;
	goto tr116;
tr29:
#line 698 "rlscan.rl"
	{tokend = p+1;{ token( IL_Literal, tokstart, tokend ); }}
	goto st95;
tr37:
#line 705 "rlscan.rl"
	{tokend = p+1;{ token( IL_Comment, tokstart, tokend ); }}
	goto st95;
tr39:
#line 520 "rlscan.rl"
	{ 
		lastnl = p; 
		column = 0;
		line++;
	}
#line 705 "rlscan.rl"
	{tokend = p+1;{ token( IL_Comment, tokstart, tokend ); }}
	goto st95;
tr40:
#line 694 "rlscan.rl"
	{{p = ((tokend))-1;}{ token( TK_UInt, tokstart, tokend ); }}
	goto st95;
tr160:
#line 752 "rlscan.rl"
	{tokend = p+1;{ token( IL_Symbol, tokstart, tokend ); }}
	goto st95;
tr161:
#line 747 "rlscan.rl"
	{tokend = p+1;{
			scan_error() << "unterminated code block" << endl;
		}}
	goto st95;
tr166:
#line 727 "rlscan.rl"
	{tokend = p+1;{ token( *tokstart, tokstart, tokend ); }}
	goto st95;
tr167:
#line 722 "rlscan.rl"
	{tokend = p+1;{ 
			whitespaceOn = true;
			token( *tokstart, tokstart, tokend );
		}}
	goto st95;
tr172:
#line 715 "rlscan.rl"
	{tokend = p+1;{
			whitespaceOn = true;
			token( *tokstart, tokstart, tokend );
			if ( inlineBlockType == SemiTerminated )
				{cs = stack[--top]; goto _again;}
		}}
	goto st95;
tr175:
#line 729 "rlscan.rl"
	{tokend = p+1;{ 
			token( IL_Symbol, tokstart, tokend );
			curly_count += 1; 
		}}
	goto st95;
tr176:
#line 734 "rlscan.rl"
	{tokend = p+1;{ 
			if ( --curly_count == 0 && inlineBlockType == CurlyDelimited ) {
				/* Inline code block ends. */
				token( '}' );
				{cs = stack[--top]; goto _again;}
			}
			else {
				/* Either a semi terminated inline block or only the closing
				 * brace of some inner scope, not the block's closing brace. */
				token( IL_Symbol, tokstart, tokend );
			}
		}}
	goto st95;
tr177:
#line 700 "rlscan.rl"
	{tokend = p;p--;{ 
			if ( whitespaceOn ) 
				token( IL_WhiteSpace, tokstart, tokend );
		}}
	goto st95;
tr178:
#line 752 "rlscan.rl"
	{tokend = p;p--;{ token( IL_Symbol, tokstart, tokend ); }}
	goto st95;
tr179:
#line 694 "rlscan.rl"
	{tokend = p;p--;{ token( TK_UInt, tokstart, tokend ); }}
	goto st95;
tr181:
#line 695 "rlscan.rl"
	{tokend = p;p--;{ token( TK_Hex, tokstart, tokend ); }}
	goto st95;
tr182:
#line 707 "rlscan.rl"
	{tokend = p+1;{ token( TK_NameSep, tokstart, tokend ); }}
	goto st95;
tr183:
#line 1 "rlscan.rl"
	{	switch( act ) {
	case 27:
	{{p = ((tokend))-1;} token( KW_PChar ); }
	break;
	case 29:
	{{p = ((tokend))-1;} token( KW_CurState ); }
	break;
	case 30:
	{{p = ((tokend))-1;} token( KW_TargState ); }
	break;
	case 31:
	{{p = ((tokend))-1;} 
			whitespaceOn = false; 
			token( KW_Entry );
		}
	break;
	case 32:
	{{p = ((tokend))-1;} 
			whitespaceOn = false; 
			token( KW_Hold );
		}
	break;
	case 33:
	{{p = ((tokend))-1;} token( KW_Exec, 0, 0 ); }
	break;
	case 34:
	{{p = ((tokend))-1;} 
			whitespaceOn = false; 
			token( KW_Goto );
		}
	break;
	case 35:
	{{p = ((tokend))-1;} 
			whitespaceOn = false; 
			token( KW_Next );
		}
	break;
	case 36:
	{{p = ((tokend))-1;} 
			whitespaceOn = false; 
			token( KW_Call );
		}
	break;
	case 37:
	{{p = ((tokend))-1;} 
			whitespaceOn = false; 
			token( KW_Ret );
		}
	break;
	case 38:
	{{p = ((tokend))-1;} 
			whitespaceOn = false; 
			token( KW_Break );
		}
	break;
	case 39:
	{{p = ((tokend))-1;} token( TK_Word, tokstart, tokend ); }
	break;
	default: break;
	}
	}
	goto st95;
tr184:
#line 692 "rlscan.rl"
	{tokend = p;p--;{ token( TK_Word, tokstart, tokend ); }}
	goto st95;
tr198:
#line 657 "rlscan.rl"
	{tokend = p;p--;{ token( KW_Char ); }}
	goto st95;
st95:
#line 1 "rlscan.rl"
	{tokstart = 0;}
	if ( ++p == pe )
		goto _out95;
case 95:
#line 1 "rlscan.rl"
	{tokstart = p;}
#line 2754 "rlscan.cpp"
	switch( (*p) ) {
		case 0: goto tr161;
		case 9: goto st96;
		case 10: goto tr163;
		case 32: goto st96;
		case 34: goto tr164;
		case 39: goto tr165;
		case 40: goto tr166;
		case 44: goto tr166;
		case 47: goto tr168;
		case 48: goto tr169;
		case 58: goto st103;
		case 59: goto tr172;
		case 95: goto tr173;
		case 102: goto st105;
		case 123: goto tr175;
		case 125: goto tr176;
	}
	if ( (*p) < 49 ) {
		if ( 41 <= (*p) && (*p) <= 42 )
			goto tr167;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr173;
		} else if ( (*p) >= 65 )
			goto tr173;
	} else
		goto st101;
	goto tr160;
tr163:
#line 520 "rlscan.rl"
	{ 
		lastnl = p; 
		column = 0;
		line++;
	}
	goto st96;
st96:
	if ( ++p == pe )
		goto _out96;
case 96:
#line 2797 "rlscan.cpp"
	switch( (*p) ) {
		case 9: goto st96;
		case 10: goto tr163;
		case 32: goto st96;
	}
	goto tr177;
tr164:
#line 1 "rlscan.rl"
	{tokend = p+1;}
	goto st97;
st97:
	if ( ++p == pe )
		goto _out97;
case 97:
#line 2812 "rlscan.cpp"
	switch( (*p) ) {
		case 10: goto tr28;
		case 34: goto tr29;
		case 92: goto st17;
	}
	goto st16;
tr28:
#line 520 "rlscan.rl"
	{ 
		lastnl = p; 
		column = 0;
		line++;
	}
	goto st16;
st16:
	if ( ++p == pe )
		goto _out16;
case 16:
#line 2831 "rlscan.cpp"
	switch( (*p) ) {
		case 10: goto tr28;
		case 34: goto tr29;
		case 92: goto st17;
	}
	goto st16;
st17:
	if ( ++p == pe )
		goto _out17;
case 17:
	if ( (*p) == 10 )
		goto tr28;
	goto st16;
tr165:
#line 1 "rlscan.rl"
	{tokend = p+1;}
	goto st98;
st98:
	if ( ++p == pe )
		goto _out98;
case 98:
#line 2853 "rlscan.cpp"
	switch( (*p) ) {
		case 10: goto tr32;
		case 39: goto tr29;
		case 92: goto st19;
	}
	goto st18;
tr32:
#line 520 "rlscan.rl"
	{ 
		lastnl = p; 
		column = 0;
		line++;
	}
	goto st18;
st18:
	if ( ++p == pe )
		goto _out18;
case 18:
#line 2872 "rlscan.cpp"
	switch( (*p) ) {
		case 10: goto tr32;
		case 39: goto tr29;
		case 92: goto st19;
	}
	goto st18;
st19:
	if ( ++p == pe )
		goto _out19;
case 19:
	if ( (*p) == 10 )
		goto tr32;
	goto st18;
tr168:
#line 1 "rlscan.rl"
	{tokend = p+1;}
	goto st99;
st99:
	if ( ++p == pe )
		goto _out99;
case 99:
#line 2894 "rlscan.cpp"
	switch( (*p) ) {
		case 42: goto st20;
		case 47: goto st22;
	}
	goto tr178;
tr35:
#line 520 "rlscan.rl"
	{ 
		lastnl = p; 
		column = 0;
		line++;
	}
	goto st20;
st20:
	if ( ++p == pe )
		goto _out20;
case 20:
#line 2912 "rlscan.cpp"
	switch( (*p) ) {
		case 10: goto tr35;
		case 42: goto st21;
	}
	goto st20;
st21:
	if ( ++p == pe )
		goto _out21;
case 21:
	switch( (*p) ) {
		case 10: goto tr35;
		case 42: goto st21;
		case 47: goto tr37;
	}
	goto st20;
st22:
	if ( ++p == pe )
		goto _out22;
case 22:
	if ( (*p) == 10 )
		goto tr39;
	goto st22;
tr169:
#line 1 "rlscan.rl"
	{tokend = p+1;}
	goto st100;
st100:
	if ( ++p == pe )
		goto _out100;
case 100:
#line 2943 "rlscan.cpp"
	if ( (*p) == 120 )
		goto st23;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto st101;
	goto tr179;
st101:
	if ( ++p == pe )
		goto _out101;
case 101:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto st101;
	goto tr179;
st23:
	if ( ++p == pe )
		goto _out23;
case 23:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st102;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st102;
	} else
		goto st102;
	goto tr40;
st102:
	if ( ++p == pe )
		goto _out102;
case 102:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st102;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st102;
	} else
		goto st102;
	goto tr181;
st103:
	if ( ++p == pe )
		goto _out103;
case 103:
	if ( (*p) == 58 )
		goto tr182;
	goto tr178;
tr173:
#line 1 "rlscan.rl"
	{tokend = p+1;}
#line 692 "rlscan.rl"
	{act = 39;}
	goto st104;
tr197:
#line 1 "rlscan.rl"
	{tokend = p+1;}
#line 687 "rlscan.rl"
	{act = 38;}
	goto st104;
tr202:
#line 1 "rlscan.rl"
	{tokend = p+1;}
#line 679 "rlscan.rl"
	{act = 36;}
	goto st104;
tr204:
#line 1 "rlscan.rl"
	{tokend = p+1;}
#line 658 "rlscan.rl"
	{act = 29;}
	goto st104;
tr209:
#line 1 "rlscan.rl"
	{tokend = p+1;}
#line 660 "rlscan.rl"
	{act = 31;}
	goto st104;
tr211:
#line 1 "rlscan.rl"
	{tokend = p+1;}
#line 670 "rlscan.rl"
	{act = 33;}
	goto st104;
tr214:
#line 1 "rlscan.rl"
	{tokend = p+1;}
#line 671 "rlscan.rl"
	{act = 34;}
	goto st104;
tr217:
#line 1 "rlscan.rl"
	{tokend = p+1;}
#line 666 "rlscan.rl"
	{act = 32;}
	goto st104;
tr220:
#line 1 "rlscan.rl"
	{tokend = p+1;}
#line 675 "rlscan.rl"
	{act = 35;}
	goto st104;
tr221:
#line 1 "rlscan.rl"
	{tokend = p+1;}
#line 656 "rlscan.rl"
	{act = 27;}
	goto st104;
tr223:
#line 1 "rlscan.rl"
	{tokend = p+1;}
#line 683 "rlscan.rl"
	{act = 37;}
	goto st104;
tr227:
#line 1 "rlscan.rl"
	{tokend = p+1;}
#line 659 "rlscan.rl"
	{act = 30;}
	goto st104;
st104:
	if ( ++p == pe )
		goto _out104;
case 104:
#line 3065 "rlscan.cpp"
	if ( (*p) == 95 )
		goto tr173;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr173;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr173;
	} else
		goto tr173;
	goto tr183;
st105:
	if ( ++p == pe )
		goto _out105;
case 105:
	switch( (*p) ) {
		case 95: goto tr173;
		case 98: goto st106;
		case 99: goto st110;
		case 101: goto st115;
		case 103: goto st121;
		case 104: goto st124;
		case 110: goto st127;
		case 112: goto st130;
		case 114: goto st131;
		case 116: goto st133;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr173;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr173;
	} else
		goto tr173;
	goto tr184;
st106:
	if ( ++p == pe )
		goto _out106;
case 106:
	switch( (*p) ) {
		case 95: goto tr173;
		case 114: goto st107;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr173;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr173;
	} else
		goto tr173;
	goto tr184;
st107:
	if ( ++p == pe )
		goto _out107;
case 107:
	switch( (*p) ) {
		case 95: goto tr173;
		case 101: goto st108;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr173;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr173;
	} else
		goto tr173;
	goto tr184;
st108:
	if ( ++p == pe )
		goto _out108;
case 108:
	switch( (*p) ) {
		case 95: goto tr173;
		case 97: goto st109;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr173;
	} else if ( (*p) > 90 ) {
		if ( 98 <= (*p) && (*p) <= 122 )
			goto tr173;
	} else
		goto tr173;
	goto tr184;
st109:
	if ( ++p == pe )
		goto _out109;
case 109:
	switch( (*p) ) {
		case 95: goto tr173;
		case 107: goto tr197;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr173;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr173;
	} else
		goto tr173;
	goto tr184;
st110:
	if ( ++p == pe )
		goto _out110;
case 110:
	switch( (*p) ) {
		case 95: goto tr173;
		case 97: goto st111;
		case 117: goto st113;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr173;
	} else if ( (*p) > 90 ) {
		if ( 98 <= (*p) && (*p) <= 122 )
			goto tr173;
	} else
		goto tr173;
	goto tr198;
st111:
	if ( ++p == pe )
		goto _out111;
case 111:
	switch( (*p) ) {
		case 95: goto tr173;
		case 108: goto st112;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr173;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr173;
	} else
		goto tr173;
	goto tr184;
st112:
	if ( ++p == pe )
		goto _out112;
case 112:
	switch( (*p) ) {
		case 95: goto tr173;
		case 108: goto tr202;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr173;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr173;
	} else
		goto tr173;
	goto tr184;
st113:
	if ( ++p == pe )
		goto _out113;
case 113:
	switch( (*p) ) {
		case 95: goto tr173;
		case 114: goto st114;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr173;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr173;
	} else
		goto tr173;
	goto tr184;
st114:
	if ( ++p == pe )
		goto _out114;
case 114:
	switch( (*p) ) {
		case 95: goto tr173;
		case 115: goto tr204;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr173;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr173;
	} else
		goto tr173;
	goto tr184;
st115:
	if ( ++p == pe )
		goto _out115;
case 115:
	switch( (*p) ) {
		case 95: goto tr173;
		case 110: goto st116;
		case 120: goto st119;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr173;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr173;
	} else
		goto tr173;
	goto tr184;
st116:
	if ( ++p == pe )
		goto _out116;
case 116:
	switch( (*p) ) {
		case 95: goto tr173;
		case 116: goto st117;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr173;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr173;
	} else
		goto tr173;
	goto tr184;
st117:
	if ( ++p == pe )
		goto _out117;
case 117:
	switch( (*p) ) {
		case 95: goto tr173;
		case 114: goto st118;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr173;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr173;
	} else
		goto tr173;
	goto tr184;
st118:
	if ( ++p == pe )
		goto _out118;
case 118:
	switch( (*p) ) {
		case 95: goto tr173;
		case 121: goto tr209;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr173;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr173;
	} else
		goto tr173;
	goto tr184;
st119:
	if ( ++p == pe )
		goto _out119;
case 119:
	switch( (*p) ) {
		case 95: goto tr173;
		case 101: goto st120;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr173;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr173;
	} else
		goto tr173;
	goto tr184;
st120:
	if ( ++p == pe )
		goto _out120;
case 120:
	switch( (*p) ) {
		case 95: goto tr173;
		case 99: goto tr211;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr173;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr173;
	} else
		goto tr173;
	goto tr184;
st121:
	if ( ++p == pe )
		goto _out121;
case 121:
	switch( (*p) ) {
		case 95: goto tr173;
		case 111: goto st122;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr173;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr173;
	} else
		goto tr173;
	goto tr184;
st122:
	if ( ++p == pe )
		goto _out122;
case 122:
	switch( (*p) ) {
		case 95: goto tr173;
		case 116: goto st123;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr173;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr173;
	} else
		goto tr173;
	goto tr184;
st123:
	if ( ++p == pe )
		goto _out123;
case 123:
	switch( (*p) ) {
		case 95: goto tr173;
		case 111: goto tr214;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr173;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr173;
	} else
		goto tr173;
	goto tr184;
st124:
	if ( ++p == pe )
		goto _out124;
case 124:
	switch( (*p) ) {
		case 95: goto tr173;
		case 111: goto st125;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr173;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr173;
	} else
		goto tr173;
	goto tr184;
st125:
	if ( ++p == pe )
		goto _out125;
case 125:
	switch( (*p) ) {
		case 95: goto tr173;
		case 108: goto st126;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr173;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr173;
	} else
		goto tr173;
	goto tr184;
st126:
	if ( ++p == pe )
		goto _out126;
case 126:
	switch( (*p) ) {
		case 95: goto tr173;
		case 100: goto tr217;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr173;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr173;
	} else
		goto tr173;
	goto tr184;
st127:
	if ( ++p == pe )
		goto _out127;
case 127:
	switch( (*p) ) {
		case 95: goto tr173;
		case 101: goto st128;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr173;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr173;
	} else
		goto tr173;
	goto tr184;
st128:
	if ( ++p == pe )
		goto _out128;
case 128:
	switch( (*p) ) {
		case 95: goto tr173;
		case 120: goto st129;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr173;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr173;
	} else
		goto tr173;
	goto tr184;
st129:
	if ( ++p == pe )
		goto _out129;
case 129:
	switch( (*p) ) {
		case 95: goto tr173;
		case 116: goto tr220;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr173;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr173;
	} else
		goto tr173;
	goto tr184;
st130:
	if ( ++p == pe )
		goto _out130;
case 130:
	switch( (*p) ) {
		case 95: goto tr173;
		case 99: goto tr221;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr173;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr173;
	} else
		goto tr173;
	goto tr184;
st131:
	if ( ++p == pe )
		goto _out131;
case 131:
	switch( (*p) ) {
		case 95: goto tr173;
		case 101: goto st132;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr173;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr173;
	} else
		goto tr173;
	goto tr184;
st132:
	if ( ++p == pe )
		goto _out132;
case 132:
	switch( (*p) ) {
		case 95: goto tr173;
		case 116: goto tr223;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr173;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr173;
	} else
		goto tr173;
	goto tr184;
st133:
	if ( ++p == pe )
		goto _out133;
case 133:
	switch( (*p) ) {
		case 95: goto tr173;
		case 97: goto st134;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr173;
	} else if ( (*p) > 90 ) {
		if ( 98 <= (*p) && (*p) <= 122 )
			goto tr173;
	} else
		goto tr173;
	goto tr184;
st134:
	if ( ++p == pe )
		goto _out134;
case 134:
	switch( (*p) ) {
		case 95: goto tr173;
		case 114: goto st135;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr173;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr173;
	} else
		goto tr173;
	goto tr184;
st135:
	if ( ++p == pe )
		goto _out135;
case 135:
	switch( (*p) ) {
		case 95: goto tr173;
		case 103: goto st136;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr173;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr173;
	} else
		goto tr173;
	goto tr184;
st136:
	if ( ++p == pe )
		goto _out136;
case 136:
	switch( (*p) ) {
		case 95: goto tr173;
		case 115: goto tr227;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr173;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr173;
	} else
		goto tr173;
	goto tr184;
tr228:
#line 779 "rlscan.rl"
	{tokend = p+1;{ token( RE_Char, tokstart, tokend ); }}
	goto st137;
tr229:
#line 774 "rlscan.rl"
	{tokend = p+1;{
			scan_error() << "unterminated OR literal" << endl;
		}}
	goto st137;
tr230:
#line 769 "rlscan.rl"
	{tokend = p+1;{ token( RE_Dash, 0, 0 ); }}
	goto st137;
tr232:
#line 772 "rlscan.rl"
	{tokend = p+1;{ token( RE_SqClose ); {cs = stack[--top]; goto _again;} }}
	goto st137;
tr233:
#line 766 "rlscan.rl"
	{tokend = p+1;{ token( RE_Char, tokstart+1, tokend ); }}
	goto st137;
tr234:
#line 765 "rlscan.rl"
	{tokend = p+1;{ updateCol(); }}
	goto st137;
tr235:
#line 757 "rlscan.rl"
	{tokend = p+1;{ token( RE_Char, '\0' ); }}
	goto st137;
tr236:
#line 758 "rlscan.rl"
	{tokend = p+1;{ token( RE_Char, '\a' ); }}
	goto st137;
tr237:
#line 759 "rlscan.rl"
	{tokend = p+1;{ token( RE_Char, '\b' ); }}
	goto st137;
tr238:
#line 763 "rlscan.rl"
	{tokend = p+1;{ token( RE_Char, '\f' ); }}
	goto st137;
tr239:
#line 761 "rlscan.rl"
	{tokend = p+1;{ token( RE_Char, '\n' ); }}
	goto st137;
tr240:
#line 764 "rlscan.rl"
	{tokend = p+1;{ token( RE_Char, '\r' ); }}
	goto st137;
tr241:
#line 760 "rlscan.rl"
	{tokend = p+1;{ token( RE_Char, '\t' ); }}
	goto st137;
tr242:
#line 762 "rlscan.rl"
	{tokend = p+1;{ token( RE_Char, '\v' ); }}
	goto st137;
st137:
#line 1 "rlscan.rl"
	{tokstart = 0;}
	if ( ++p == pe )
		goto _out137;
case 137:
#line 1 "rlscan.rl"
	{tokstart = p;}
#line 3697 "rlscan.cpp"
	switch( (*p) ) {
		case 0: goto tr229;
		case 45: goto tr230;
		case 92: goto st138;
		case 93: goto tr232;
	}
	goto tr228;
st138:
	if ( ++p == pe )
		goto _out138;
case 138:
	switch( (*p) ) {
		case 10: goto tr234;
		case 48: goto tr235;
		case 97: goto tr236;
		case 98: goto tr237;
		case 102: goto tr238;
		case 110: goto tr239;
		case 114: goto tr240;
		case 116: goto tr241;
		case 118: goto tr242;
	}
	goto tr233;
tr243:
#line 814 "rlscan.rl"
	{tokend = p+1;{ token( RE_Char, tokstart, tokend ); }}
	goto st139;
tr244:
#line 809 "rlscan.rl"
	{tokend = p+1;{
			scan_error() << "unterminated regular expression" << endl;
		}}
	goto st139;
tr245:
#line 804 "rlscan.rl"
	{tokend = p+1;{ token( RE_Star ); }}
	goto st139;
tr246:
#line 803 "rlscan.rl"
	{tokend = p+1;{ token( RE_Dot ); }}
	goto st139;
tr250:
#line 797 "rlscan.rl"
	{tokend = p;p--;{ 
			token( RE_Slash, tokstart, tokend ); 
			{goto st146;}
		}}
	goto st139;
tr251:
#line 797 "rlscan.rl"
	{tokend = p+1;{ 
			token( RE_Slash, tokstart, tokend ); 
			{goto st146;}
		}}
	goto st139;
tr252:
#line 806 "rlscan.rl"
	{tokend = p;p--;{ token( RE_SqOpen ); {stack[top++] = 139; goto st137;} }}
	goto st139;
tr253:
#line 807 "rlscan.rl"
	{tokend = p+1;{ token( RE_SqOpenNeg ); {stack[top++] = 139; goto st137;} }}
	goto st139;
tr254:
#line 794 "rlscan.rl"
	{tokend = p+1;{ token( RE_Char, tokstart+1, tokend ); }}
	goto st139;
tr255:
#line 793 "rlscan.rl"
	{tokend = p+1;{ updateCol(); }}
	goto st139;
tr256:
#line 785 "rlscan.rl"
	{tokend = p+1;{ token( RE_Char, '\0' ); }}
	goto st139;
tr257:
#line 786 "rlscan.rl"
	{tokend = p+1;{ token( RE_Char, '\a' ); }}
	goto st139;
tr258:
#line 787 "rlscan.rl"
	{tokend = p+1;{ token( RE_Char, '\b' ); }}
	goto st139;
tr259:
#line 791 "rlscan.rl"
	{tokend = p+1;{ token( RE_Char, '\f' ); }}
	goto st139;
tr260:
#line 789 "rlscan.rl"
	{tokend = p+1;{ token( RE_Char, '\n' ); }}
	goto st139;
tr261:
#line 792 "rlscan.rl"
	{tokend = p+1;{ token( RE_Char, '\r' ); }}
	goto st139;
tr262:
#line 788 "rlscan.rl"
	{tokend = p+1;{ token( RE_Char, '\t' ); }}
	goto st139;
tr263:
#line 790 "rlscan.rl"
	{tokend = p+1;{ token( RE_Char, '\v' ); }}
	goto st139;
st139:
#line 1 "rlscan.rl"
	{tokstart = 0;}
	if ( ++p == pe )
		goto _out139;
case 139:
#line 1 "rlscan.rl"
	{tokstart = p;}
#line 3809 "rlscan.cpp"
	switch( (*p) ) {
		case 0: goto tr244;
		case 42: goto tr245;
		case 46: goto tr246;
		case 47: goto st140;
		case 91: goto st141;
		case 92: goto st142;
	}
	goto tr243;
st140:
	if ( ++p == pe )
		goto _out140;
case 140:
	if ( (*p) == 105 )
		goto tr251;
	goto tr250;
st141:
	if ( ++p == pe )
		goto _out141;
case 141:
	if ( (*p) == 94 )
		goto tr253;
	goto tr252;
st142:
	if ( ++p == pe )
		goto _out142;
case 142:
	switch( (*p) ) {
		case 10: goto tr255;
		case 48: goto tr256;
		case 97: goto tr257;
		case 98: goto tr258;
		case 102: goto tr259;
		case 110: goto tr260;
		case 114: goto tr261;
		case 116: goto tr262;
		case 118: goto tr263;
	}
	goto tr254;
tr264:
#line 823 "rlscan.rl"
	{tokend = p+1;{
			scan_error() << "unterminated write statement" << endl;
		}}
	goto st143;
tr267:
#line 821 "rlscan.rl"
	{tokend = p+1;{ token( ';' ); {goto st146;} }}
	goto st143;
tr269:
#line 820 "rlscan.rl"
	{tokend = p;p--;{ updateCol(); }}
	goto st143;
tr270:
#line 819 "rlscan.rl"
	{tokend = p;p--;{ token( TK_Word, tokstart, tokend ); }}
	goto st143;
st143:
#line 1 "rlscan.rl"
	{tokstart = 0;}
	if ( ++p == pe )
		goto _out143;
case 143:
#line 1 "rlscan.rl"
	{tokstart = p;}
#line 3875 "rlscan.cpp"
	switch( (*p) ) {
		case 0: goto tr264;
		case 32: goto st144;
		case 59: goto tr267;
		case 95: goto st145;
	}
	if ( (*p) < 65 ) {
		if ( 9 <= (*p) && (*p) <= 10 )
			goto st144;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto st145;
	} else
		goto st145;
	goto st0;
st0:
	goto _out0;
st144:
	if ( ++p == pe )
		goto _out144;
case 144:
	if ( (*p) == 32 )
		goto st144;
	if ( 9 <= (*p) && (*p) <= 10 )
		goto st144;
	goto tr269;
st145:
	if ( ++p == pe )
		goto _out145;
case 145:
	if ( (*p) == 95 )
		goto st145;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st145;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto st145;
	} else
		goto st145;
	goto tr270;
tr47:
#line 520 "rlscan.rl"
	{ 
		lastnl = p; 
		column = 0;
		line++;
	}
#line 896 "rlscan.rl"
	{tokend = p+1;{ updateCol(); }}
	goto st146;
tr51:
#line 883 "rlscan.rl"
	{{p = ((tokend))-1;}{ token( TK_UInt, tokstart, tokend ); }}
	goto st146;
tr53:
#line 999 "rlscan.rl"
	{{p = ((tokend))-1;}{ token( *tokstart ); }}
	goto st146;
tr54:
#line 964 "rlscan.rl"
	{tokend = p+1;{ 
			updateCol();
			endSection();
			{cs = stack[--top]; goto _again;}
		}}
	goto st146;
tr271:
#line 999 "rlscan.rl"
	{tokend = p+1;{ token( *tokstart ); }}
	goto st146;
tr272:
#line 995 "rlscan.rl"
	{tokend = p+1;{
			scan_error() << "unterminated ragel section" << endl;
		}}
	goto st146;
tr274:
#line 520 "rlscan.rl"
	{ 
		lastnl = p; 
		column = 0;
		line++;
	}
#line 973 "rlscan.rl"
	{tokend = p+1;{
			updateCol();
			if ( singleLineSpec ) {
				endSection();
				{cs = stack[--top]; goto _again;}
			}
		}}
	goto st146;
tr283:
#line 893 "rlscan.rl"
	{tokend = p+1;{ token( RE_Slash ); {goto st139;} }}
	goto st146;
tr305:
#line 981 "rlscan.rl"
	{tokend = p+1;{ 
			if ( lastToken == KW_Export || lastToken == KW_Entry )
				token( '{' );
			else {
				token( '{' );
				curly_count = 1; 
				inlineBlockType = CurlyDelimited;
				if ( hostLang->lang == HostLang::Ruby )
					{stack[top++] = 146; goto st52;}
				else
					{stack[top++] = 146; goto st95;}
			}
		}}
	goto st146;
tr308:
#line 970 "rlscan.rl"
	{tokend = p;p--;{ updateCol(); }}
	goto st146;
tr309:
#line 888 "rlscan.rl"
	{tokend = p;p--;{ token( TK_Literal, tokstart, tokend ); }}
	goto st146;
tr310:
#line 888 "rlscan.rl"
	{tokend = p+1;{ token( TK_Literal, tokstart, tokend ); }}
	goto st146;
tr311:
#line 999 "rlscan.rl"
	{tokend = p;p--;{ token( *tokstart ); }}
	goto st146;
tr312:
#line 926 "rlscan.rl"
	{tokend = p+1;{ token( TK_AllGblError ); }}
	goto st146;
tr313:
#line 910 "rlscan.rl"
	{tokend = p+1;{ token( TK_AllFromState ); }}
	goto st146;
tr314:
#line 918 "rlscan.rl"
	{tokend = p+1;{ token( TK_AllEOF ); }}
	goto st146;
tr315:
#line 945 "rlscan.rl"
	{tokend = p+1;{ token( TK_AllCond ); }}
	goto st146;
tr316:
#line 934 "rlscan.rl"
	{tokend = p+1;{ token( TK_AllLocalError ); }}
	goto st146;
tr317:
#line 902 "rlscan.rl"
	{tokend = p+1;{ token( TK_AllToState ); }}
	goto st146;
tr318:
#line 927 "rlscan.rl"
	{tokend = p+1;{ token( TK_FinalGblError ); }}
	goto st146;
tr319:
#line 911 "rlscan.rl"
	{tokend = p+1;{ token( TK_FinalFromState ); }}
	goto st146;
tr320:
#line 919 "rlscan.rl"
	{tokend = p+1;{ token( TK_FinalEOF ); }}
	goto st146;
tr321:
#line 946 "rlscan.rl"
	{tokend = p+1;{ token( TK_LeavingCond ); }}
	goto st146;
tr322:
#line 935 "rlscan.rl"
	{tokend = p+1;{ token( TK_FinalLocalError ); }}
	goto st146;
tr323:
#line 903 "rlscan.rl"
	{tokend = p+1;{ token( TK_FinalToState ); }}
	goto st146;
tr324:
#line 949 "rlscan.rl"
	{tokend = p+1;{ token( TK_StarStar ); }}
	goto st146;
tr325:
#line 950 "rlscan.rl"
	{tokend = p+1;{ token( TK_DashDash ); }}
	goto st146;
tr326:
#line 951 "rlscan.rl"
	{tokend = p+1;{ token( TK_Arrow ); }}
	goto st146;
tr327:
#line 948 "rlscan.rl"
	{tokend = p+1;{ token( TK_DotDot ); }}
	goto st146;
tr328:
#line 883 "rlscan.rl"
	{tokend = p;p--;{ token( TK_UInt, tokstart, tokend ); }}
	goto st146;
tr330:
#line 884 "rlscan.rl"
	{tokend = p;p--;{ token( TK_Hex, tokstart, tokend ); }}
	goto st146;
tr331:
#line 962 "rlscan.rl"
	{tokend = p+1;{ token( TK_NameSep, tokstart, tokend ); }}
	goto st146;
tr332:
#line 898 "rlscan.rl"
	{tokend = p+1;{ token( TK_ColonEquals ); }}
	goto st146;
tr334:
#line 954 "rlscan.rl"
	{tokend = p;p--;{ token( TK_ColonGt ); }}
	goto st146;
tr335:
#line 955 "rlscan.rl"
	{tokend = p+1;{ token( TK_ColonGtGt ); }}
	goto st146;
tr336:
#line 928 "rlscan.rl"
	{tokend = p+1;{ token( TK_NotStartGblError ); }}
	goto st146;
tr337:
#line 912 "rlscan.rl"
	{tokend = p+1;{ token( TK_NotStartFromState ); }}
	goto st146;
tr338:
#line 920 "rlscan.rl"
	{tokend = p+1;{ token( TK_NotStartEOF ); }}
	goto st146;
tr339:
#line 956 "rlscan.rl"
	{tokend = p+1;{ token( TK_LtColon ); }}
	goto st146;
tr341:
#line 936 "rlscan.rl"
	{tokend = p+1;{ token( TK_NotStartLocalError ); }}
	goto st146;
tr342:
#line 904 "rlscan.rl"
	{tokend = p+1;{ token( TK_NotStartToState ); }}
	goto st146;
tr343:
#line 941 "rlscan.rl"
	{tokend = p;p--;{ token( TK_Middle ); }}
	goto st146;
tr344:
#line 930 "rlscan.rl"
	{tokend = p+1;{ token( TK_MiddleGblError ); }}
	goto st146;
tr345:
#line 914 "rlscan.rl"
	{tokend = p+1;{ token( TK_MiddleFromState ); }}
	goto st146;
tr346:
#line 922 "rlscan.rl"
	{tokend = p+1;{ token( TK_MiddleEOF ); }}
	goto st146;
tr347:
#line 938 "rlscan.rl"
	{tokend = p+1;{ token( TK_MiddleLocalError ); }}
	goto st146;
tr348:
#line 906 "rlscan.rl"
	{tokend = p+1;{ token( TK_MiddleToState ); }}
	goto st146;
tr349:
#line 952 "rlscan.rl"
	{tokend = p+1;{ token( TK_DoubleArrow ); }}
	goto st146;
tr350:
#line 925 "rlscan.rl"
	{tokend = p+1;{ token( TK_StartGblError ); }}
	goto st146;
tr351:
#line 909 "rlscan.rl"
	{tokend = p+1;{ token( TK_StartFromState ); }}
	goto st146;
tr352:
#line 917 "rlscan.rl"
	{tokend = p+1;{ token( TK_StartEOF ); }}
	goto st146;
tr353:
#line 944 "rlscan.rl"
	{tokend = p+1;{ token( TK_StartCond ); }}
	goto st146;
tr354:
#line 933 "rlscan.rl"
	{tokend = p+1;{ token( TK_StartLocalError ); }}
	goto st146;
tr355:
#line 901 "rlscan.rl"
	{tokend = p+1;{ token( TK_StartToState ); }}
	goto st146;
tr356:
#line 929 "rlscan.rl"
	{tokend = p+1;{ token( TK_NotFinalGblError ); }}
	goto st146;
tr357:
#line 913 "rlscan.rl"
	{tokend = p+1;{ token( TK_NotFinalFromState ); }}
	goto st146;
tr358:
#line 921 "rlscan.rl"
	{tokend = p+1;{ token( TK_NotFinalEOF ); }}
	goto st146;
tr359:
#line 937 "rlscan.rl"
	{tokend = p+1;{ token( TK_NotFinalLocalError ); }}
	goto st146;
tr360:
#line 905 "rlscan.rl"
	{tokend = p+1;{ token( TK_NotFinalToState ); }}
	goto st146;
tr361:
#line 1 "rlscan.rl"
	{	switch( act ) {
	case 88:
	{{p = ((tokend))-1;} token( KW_Machine ); }
	break;
	case 89:
	{{p = ((tokend))-1;} token( KW_Include ); }
	break;
	case 90:
	{{p = ((tokend))-1;} token( KW_Import ); }
	break;
	case 91:
	{{p = ((tokend))-1;} 
			token( KW_Write );
			{goto st143;}
		}
	break;
	case 92:
	{{p = ((tokend))-1;} token( KW_Action ); }
	break;
	case 93:
	{{p = ((tokend))-1;} token( KW_AlphType ); }
	break;
	case 94:
	{{p = ((tokend))-1;} token( KW_PrePush ); }
	break;
	case 95:
	{{p = ((tokend))-1;} token( KW_PostPop ); }
	break;
	case 96:
	{{p = ((tokend))-1;} 
			token( KW_GetKey );
			inlineBlockType = SemiTerminated;
			if ( hostLang->lang == HostLang::Ruby )
				{stack[top++] = 146; goto st52;}
			else
				{stack[top++] = 146; goto st95;}
		}
	break;
	case 97:
	{{p = ((tokend))-1;} 
			token( KW_Access );
			inlineBlockType = SemiTerminated;
			if ( hostLang->lang == HostLang::Ruby )
				{stack[top++] = 146; goto st52;}
			else
				{stack[top++] = 146; goto st95;}
		}
	break;
	case 98:
	{{p = ((tokend))-1;} 
			token( KW_Variable );
			inlineBlockType = SemiTerminated;
			if ( hostLang->lang == HostLang::Ruby )
				{stack[top++] = 146; goto st52;}
			else
				{stack[top++] = 146; goto st95;}
		}
	break;
	case 99:
	{{p = ((tokend))-1;} token( KW_When ); }
	break;
	case 100:
	{{p = ((tokend))-1;} token( KW_InWhen ); }
	break;
	case 101:
	{{p = ((tokend))-1;} token( KW_OutWhen ); }
	break;
	case 102:
	{{p = ((tokend))-1;} token( KW_Eof ); }
	break;
	case 103:
	{{p = ((tokend))-1;} token( KW_Err ); }
	break;
	case 104:
	{{p = ((tokend))-1;} token( KW_Lerr ); }
	break;
	case 105:
	{{p = ((tokend))-1;} token( KW_To ); }
	break;
	case 106:
	{{p = ((tokend))-1;} token( KW_From ); }
	break;
	case 107:
	{{p = ((tokend))-1;} token( KW_Export ); }
	break;
	case 108:
	{{p = ((tokend))-1;} token( TK_Word, tokstart, tokend ); }
	break;
	default: break;
	}
	}
	goto st146;
tr362:
#line 890 "rlscan.rl"
	{tokend = p;p--;{ token( RE_SqOpen ); {stack[top++] = 146; goto st137;} }}
	goto st146;
tr363:
#line 891 "rlscan.rl"
	{tokend = p+1;{ token( RE_SqOpenNeg ); {stack[top++] = 146; goto st137;} }}
	goto st146;
tr364:
#line 880 "rlscan.rl"
	{tokend = p;p--;{ token( TK_Word, tokstart, tokend ); }}
	goto st146;
tr455:
#line 959 "rlscan.rl"
	{tokend = p+1;{ token( TK_BarStar ); }}
	goto st146;
st146:
#line 1 "rlscan.rl"
	{tokstart = 0;}
	if ( ++p == pe )
		goto _out146;
case 146:
#line 1 "rlscan.rl"
	{tokstart = p;}
#line 4307 "rlscan.cpp"
	switch( (*p) ) {
		case 0: goto tr272;
		case 9: goto st147;
		case 10: goto tr274;
		case 13: goto st147;
		case 32: goto st147;
		case 34: goto tr275;
		case 35: goto tr276;
		case 36: goto st151;
		case 37: goto st152;
		case 39: goto tr279;
		case 42: goto st154;
		case 45: goto st155;
		case 46: goto st156;
		case 47: goto tr283;
		case 48: goto tr284;
		case 58: goto st160;
		case 60: goto st162;
		case 61: goto st164;
		case 62: goto st165;
		case 64: goto st166;
		case 91: goto st168;
		case 95: goto tr291;
		case 97: goto st169;
		case 101: goto st183;
		case 102: goto st190;
		case 103: goto st193;
		case 105: goto st198;
		case 108: goto st211;
		case 109: goto st214;
		case 111: goto st220;
		case 112: goto st226;
		case 116: goto st237;
		case 118: goto st238;
		case 119: goto st245;
		case 123: goto tr305;
		case 124: goto st251;
		case 125: goto tr307;
	}
	if ( (*p) < 65 ) {
		if ( 49 <= (*p) && (*p) <= 57 )
			goto st158;
	} else if ( (*p) > 90 ) {
		if ( 98 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr271;
st147:
	if ( ++p == pe )
		goto _out147;
case 147:
	switch( (*p) ) {
		case 9: goto st147;
		case 13: goto st147;
		case 32: goto st147;
	}
	goto tr308;
tr275:
#line 1 "rlscan.rl"
	{tokend = p+1;}
	goto st148;
st148:
	if ( ++p == pe )
		goto _out148;
case 148:
#line 4374 "rlscan.cpp"
	switch( (*p) ) {
		case 10: goto tr43;
		case 34: goto st149;
		case 92: goto st25;
	}
	goto st24;
tr43:
#line 520 "rlscan.rl"
	{ 
		lastnl = p; 
		column = 0;
		line++;
	}
	goto st24;
st24:
	if ( ++p == pe )
		goto _out24;
case 24:
#line 4393 "rlscan.cpp"
	switch( (*p) ) {
		case 10: goto tr43;
		case 34: goto st149;
		case 92: goto st25;
	}
	goto st24;
st149:
	if ( ++p == pe )
		goto _out149;
case 149:
	if ( (*p) == 105 )
		goto tr310;
	goto tr309;
st25:
	if ( ++p == pe )
		goto _out25;
case 25:
	if ( (*p) == 10 )
		goto tr43;
	goto st24;
tr276:
#line 1 "rlscan.rl"
	{tokend = p+1;}
	goto st150;
st150:
	if ( ++p == pe )
		goto _out150;
case 150:
#line 4422 "rlscan.cpp"
	if ( (*p) == 10 )
		goto tr47;
	goto st26;
st26:
	if ( ++p == pe )
		goto _out26;
case 26:
	if ( (*p) == 10 )
		goto tr47;
	goto st26;
st151:
	if ( ++p == pe )
		goto _out151;
case 151:
	switch( (*p) ) {
		case 33: goto tr312;
		case 42: goto tr313;
		case 47: goto tr314;
		case 63: goto tr315;
		case 94: goto tr316;
		case 126: goto tr317;
	}
	goto tr311;
st152:
	if ( ++p == pe )
		goto _out152;
case 152:
	switch( (*p) ) {
		case 33: goto tr318;
		case 42: goto tr319;
		case 47: goto tr320;
		case 63: goto tr321;
		case 94: goto tr322;
		case 126: goto tr323;
	}
	goto tr311;
tr279:
#line 1 "rlscan.rl"
	{tokend = p+1;}
	goto st153;
st153:
	if ( ++p == pe )
		goto _out153;
case 153:
#line 4467 "rlscan.cpp"
	switch( (*p) ) {
		case 10: goto tr49;
		case 39: goto st149;
		case 92: goto st28;
	}
	goto st27;
tr49:
#line 520 "rlscan.rl"
	{ 
		lastnl = p; 
		column = 0;
		line++;
	}
	goto st27;
st27:
	if ( ++p == pe )
		goto _out27;
case 27:
#line 4486 "rlscan.cpp"
	switch( (*p) ) {
		case 10: goto tr49;
		case 39: goto st149;
		case 92: goto st28;
	}
	goto st27;
st28:
	if ( ++p == pe )
		goto _out28;
case 28:
	if ( (*p) == 10 )
		goto tr49;
	goto st27;
st154:
	if ( ++p == pe )
		goto _out154;
case 154:
	if ( (*p) == 42 )
		goto tr324;
	goto tr311;
st155:
	if ( ++p == pe )
		goto _out155;
case 155:
	switch( (*p) ) {
		case 45: goto tr325;
		case 62: goto tr326;
	}
	goto tr311;
st156:
	if ( ++p == pe )
		goto _out156;
case 156:
	if ( (*p) == 46 )
		goto tr327;
	goto tr311;
tr284:
#line 1 "rlscan.rl"
	{tokend = p+1;}
	goto st157;
st157:
	if ( ++p == pe )
		goto _out157;
case 157:
#line 4531 "rlscan.cpp"
	if ( (*p) == 120 )
		goto st29;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto st158;
	goto tr328;
st158:
	if ( ++p == pe )
		goto _out158;
case 158:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto st158;
	goto tr328;
st29:
	if ( ++p == pe )
		goto _out29;
case 29:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st159;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st159;
	} else
		goto st159;
	goto tr51;
st159:
	if ( ++p == pe )
		goto _out159;
case 159:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st159;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st159;
	} else
		goto st159;
	goto tr330;
st160:
	if ( ++p == pe )
		goto _out160;
case 160:
	switch( (*p) ) {
		case 58: goto tr331;
		case 61: goto tr332;
		case 62: goto st161;
	}
	goto tr311;
st161:
	if ( ++p == pe )
		goto _out161;
case 161:
	if ( (*p) == 62 )
		goto tr335;
	goto tr334;
st162:
	if ( ++p == pe )
		goto _out162;
case 162:
	switch( (*p) ) {
		case 33: goto tr336;
		case 42: goto tr337;
		case 47: goto tr338;
		case 58: goto tr339;
		case 62: goto st163;
		case 94: goto tr341;
		case 126: goto tr342;
	}
	goto tr311;
st163:
	if ( ++p == pe )
		goto _out163;
case 163:
	switch( (*p) ) {
		case 33: goto tr344;
		case 42: goto tr345;
		case 47: goto tr346;
		case 94: goto tr347;
		case 126: goto tr348;
	}
	goto tr343;
st164:
	if ( ++p == pe )
		goto _out164;
case 164:
	if ( (*p) == 62 )
		goto tr349;
	goto tr311;
st165:
	if ( ++p == pe )
		goto _out165;
case 165:
	switch( (*p) ) {
		case 33: goto tr350;
		case 42: goto tr351;
		case 47: goto tr352;
		case 63: goto tr353;
		case 94: goto tr354;
		case 126: goto tr355;
	}
	goto tr311;
st166:
	if ( ++p == pe )
		goto _out166;
case 166:
	switch( (*p) ) {
		case 33: goto tr356;
		case 42: goto tr357;
		case 47: goto tr358;
		case 94: goto tr359;
		case 126: goto tr360;
	}
	goto tr311;
tr291:
#line 1 "rlscan.rl"
	{tokend = p+1;}
#line 880 "rlscan.rl"
	{act = 108;}
	goto st167;
tr371:
#line 1 "rlscan.rl"
	{tokend = p+1;}
#line 853 "rlscan.rl"
	{act = 97;}
	goto st167;
tr374:
#line 1 "rlscan.rl"
	{tokend = p+1;}
#line 837 "rlscan.rl"
	{act = 92;}
	goto st167;
tr380:
#line 1 "rlscan.rl"
	{tokend = p+1;}
#line 838 "rlscan.rl"
	{act = 93;}
	goto st167;
tr384:
#line 1 "rlscan.rl"
	{tokend = p+1;}
#line 872 "rlscan.rl"
	{act = 102;}
	goto st167;
tr385:
#line 1 "rlscan.rl"
	{tokend = p+1;}
#line 873 "rlscan.rl"
	{act = 103;}
	goto st167;
tr389:
#line 1 "rlscan.rl"
	{tokend = p+1;}
#line 877 "rlscan.rl"
	{act = 107;}
	goto st167;
tr392:
#line 1 "rlscan.rl"
	{tokend = p+1;}
#line 876 "rlscan.rl"
	{act = 106;}
	goto st167;
tr397:
#line 1 "rlscan.rl"
	{tokend = p+1;}
#line 845 "rlscan.rl"
	{act = 96;}
	goto st167;
tr403:
#line 1 "rlscan.rl"
	{tokend = p+1;}
#line 832 "rlscan.rl"
	{act = 90;}
	goto st167;
tr409:
#line 1 "rlscan.rl"
	{tokend = p+1;}
#line 831 "rlscan.rl"
	{act = 89;}
	goto st167;
tr412:
#line 1 "rlscan.rl"
	{tokend = p+1;}
#line 870 "rlscan.rl"
	{act = 100;}
	goto st167;
tr415:
#line 1 "rlscan.rl"
	{tokend = p+1;}
#line 874 "rlscan.rl"
	{act = 104;}
	goto st167;
tr421:
#line 1 "rlscan.rl"
	{tokend = p+1;}
#line 830 "rlscan.rl"
	{act = 88;}
	goto st167;
tr427:
#line 1 "rlscan.rl"
	{tokend = p+1;}
#line 871 "rlscan.rl"
	{act = 101;}
	goto st167;
tr434:
#line 1 "rlscan.rl"
	{tokend = p+1;}
#line 840 "rlscan.rl"
	{act = 95;}
	goto st167;
tr439:
#line 1 "rlscan.rl"
	{tokend = p+1;}
#line 839 "rlscan.rl"
	{act = 94;}
	goto st167;
tr440:
#line 1 "rlscan.rl"
	{tokend = p+1;}
#line 875 "rlscan.rl"
	{act = 105;}
	goto st167;
tr447:
#line 1 "rlscan.rl"
	{tokend = p+1;}
#line 861 "rlscan.rl"
	{act = 98;}
	goto st167;
tr451:
#line 1 "rlscan.rl"
	{tokend = p+1;}
#line 869 "rlscan.rl"
	{act = 99;}
	goto st167;
tr454:
#line 1 "rlscan.rl"
	{tokend = p+1;}
#line 833 "rlscan.rl"
	{act = 91;}
	goto st167;
st167:
	if ( ++p == pe )
		goto _out167;
case 167:
#line 4775 "rlscan.cpp"
	if ( (*p) == 95 )
		goto tr291;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr361;
st168:
	if ( ++p == pe )
		goto _out168;
case 168:
	if ( (*p) == 94 )
		goto tr363;
	goto tr362;
st169:
	if ( ++p == pe )
		goto _out169;
case 169:
	switch( (*p) ) {
		case 95: goto tr291;
		case 99: goto st170;
		case 108: goto st177;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st170:
	if ( ++p == pe )
		goto _out170;
case 170:
	switch( (*p) ) {
		case 95: goto tr291;
		case 99: goto st171;
		case 116: goto st174;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st171:
	if ( ++p == pe )
		goto _out171;
case 171:
	switch( (*p) ) {
		case 95: goto tr291;
		case 101: goto st172;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st172:
	if ( ++p == pe )
		goto _out172;
case 172:
	switch( (*p) ) {
		case 95: goto tr291;
		case 115: goto st173;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st173:
	if ( ++p == pe )
		goto _out173;
case 173:
	switch( (*p) ) {
		case 95: goto tr291;
		case 115: goto tr371;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st174:
	if ( ++p == pe )
		goto _out174;
case 174:
	switch( (*p) ) {
		case 95: goto tr291;
		case 105: goto st175;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st175:
	if ( ++p == pe )
		goto _out175;
case 175:
	switch( (*p) ) {
		case 95: goto tr291;
		case 111: goto st176;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st176:
	if ( ++p == pe )
		goto _out176;
case 176:
	switch( (*p) ) {
		case 95: goto tr291;
		case 110: goto tr374;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st177:
	if ( ++p == pe )
		goto _out177;
case 177:
	switch( (*p) ) {
		case 95: goto tr291;
		case 112: goto st178;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st178:
	if ( ++p == pe )
		goto _out178;
case 178:
	switch( (*p) ) {
		case 95: goto tr291;
		case 104: goto st179;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st179:
	if ( ++p == pe )
		goto _out179;
case 179:
	switch( (*p) ) {
		case 95: goto tr291;
		case 116: goto st180;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st180:
	if ( ++p == pe )
		goto _out180;
case 180:
	switch( (*p) ) {
		case 95: goto tr291;
		case 121: goto st181;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st181:
	if ( ++p == pe )
		goto _out181;
case 181:
	switch( (*p) ) {
		case 95: goto tr291;
		case 112: goto st182;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st182:
	if ( ++p == pe )
		goto _out182;
case 182:
	switch( (*p) ) {
		case 95: goto tr291;
		case 101: goto tr380;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st183:
	if ( ++p == pe )
		goto _out183;
case 183:
	switch( (*p) ) {
		case 95: goto tr291;
		case 111: goto st184;
		case 114: goto st185;
		case 120: goto st186;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st184:
	if ( ++p == pe )
		goto _out184;
case 184:
	switch( (*p) ) {
		case 95: goto tr291;
		case 102: goto tr384;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st185:
	if ( ++p == pe )
		goto _out185;
case 185:
	switch( (*p) ) {
		case 95: goto tr291;
		case 114: goto tr385;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st186:
	if ( ++p == pe )
		goto _out186;
case 186:
	switch( (*p) ) {
		case 95: goto tr291;
		case 112: goto st187;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st187:
	if ( ++p == pe )
		goto _out187;
case 187:
	switch( (*p) ) {
		case 95: goto tr291;
		case 111: goto st188;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st188:
	if ( ++p == pe )
		goto _out188;
case 188:
	switch( (*p) ) {
		case 95: goto tr291;
		case 114: goto st189;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st189:
	if ( ++p == pe )
		goto _out189;
case 189:
	switch( (*p) ) {
		case 95: goto tr291;
		case 116: goto tr389;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st190:
	if ( ++p == pe )
		goto _out190;
case 190:
	switch( (*p) ) {
		case 95: goto tr291;
		case 114: goto st191;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st191:
	if ( ++p == pe )
		goto _out191;
case 191:
	switch( (*p) ) {
		case 95: goto tr291;
		case 111: goto st192;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st192:
	if ( ++p == pe )
		goto _out192;
case 192:
	switch( (*p) ) {
		case 95: goto tr291;
		case 109: goto tr392;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st193:
	if ( ++p == pe )
		goto _out193;
case 193:
	switch( (*p) ) {
		case 95: goto tr291;
		case 101: goto st194;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st194:
	if ( ++p == pe )
		goto _out194;
case 194:
	switch( (*p) ) {
		case 95: goto tr291;
		case 116: goto st195;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st195:
	if ( ++p == pe )
		goto _out195;
case 195:
	switch( (*p) ) {
		case 95: goto tr291;
		case 107: goto st196;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st196:
	if ( ++p == pe )
		goto _out196;
case 196:
	switch( (*p) ) {
		case 95: goto tr291;
		case 101: goto st197;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st197:
	if ( ++p == pe )
		goto _out197;
case 197:
	switch( (*p) ) {
		case 95: goto tr291;
		case 121: goto tr397;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st198:
	if ( ++p == pe )
		goto _out198;
case 198:
	switch( (*p) ) {
		case 95: goto tr291;
		case 109: goto st199;
		case 110: goto st203;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st199:
	if ( ++p == pe )
		goto _out199;
case 199:
	switch( (*p) ) {
		case 95: goto tr291;
		case 112: goto st200;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st200:
	if ( ++p == pe )
		goto _out200;
case 200:
	switch( (*p) ) {
		case 95: goto tr291;
		case 111: goto st201;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st201:
	if ( ++p == pe )
		goto _out201;
case 201:
	switch( (*p) ) {
		case 95: goto tr291;
		case 114: goto st202;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st202:
	if ( ++p == pe )
		goto _out202;
case 202:
	switch( (*p) ) {
		case 95: goto tr291;
		case 116: goto tr403;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st203:
	if ( ++p == pe )
		goto _out203;
case 203:
	switch( (*p) ) {
		case 95: goto tr291;
		case 99: goto st204;
		case 119: goto st208;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st204:
	if ( ++p == pe )
		goto _out204;
case 204:
	switch( (*p) ) {
		case 95: goto tr291;
		case 108: goto st205;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st205:
	if ( ++p == pe )
		goto _out205;
case 205:
	switch( (*p) ) {
		case 95: goto tr291;
		case 117: goto st206;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st206:
	if ( ++p == pe )
		goto _out206;
case 206:
	switch( (*p) ) {
		case 95: goto tr291;
		case 100: goto st207;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st207:
	if ( ++p == pe )
		goto _out207;
case 207:
	switch( (*p) ) {
		case 95: goto tr291;
		case 101: goto tr409;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st208:
	if ( ++p == pe )
		goto _out208;
case 208:
	switch( (*p) ) {
		case 95: goto tr291;
		case 104: goto st209;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st209:
	if ( ++p == pe )
		goto _out209;
case 209:
	switch( (*p) ) {
		case 95: goto tr291;
		case 101: goto st210;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st210:
	if ( ++p == pe )
		goto _out210;
case 210:
	switch( (*p) ) {
		case 95: goto tr291;
		case 110: goto tr412;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st211:
	if ( ++p == pe )
		goto _out211;
case 211:
	switch( (*p) ) {
		case 95: goto tr291;
		case 101: goto st212;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st212:
	if ( ++p == pe )
		goto _out212;
case 212:
	switch( (*p) ) {
		case 95: goto tr291;
		case 114: goto st213;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st213:
	if ( ++p == pe )
		goto _out213;
case 213:
	switch( (*p) ) {
		case 95: goto tr291;
		case 114: goto tr415;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st214:
	if ( ++p == pe )
		goto _out214;
case 214:
	switch( (*p) ) {
		case 95: goto tr291;
		case 97: goto st215;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 98 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st215:
	if ( ++p == pe )
		goto _out215;
case 215:
	switch( (*p) ) {
		case 95: goto tr291;
		case 99: goto st216;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st216:
	if ( ++p == pe )
		goto _out216;
case 216:
	switch( (*p) ) {
		case 95: goto tr291;
		case 104: goto st217;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st217:
	if ( ++p == pe )
		goto _out217;
case 217:
	switch( (*p) ) {
		case 95: goto tr291;
		case 105: goto st218;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st218:
	if ( ++p == pe )
		goto _out218;
case 218:
	switch( (*p) ) {
		case 95: goto tr291;
		case 110: goto st219;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st219:
	if ( ++p == pe )
		goto _out219;
case 219:
	switch( (*p) ) {
		case 95: goto tr291;
		case 101: goto tr421;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st220:
	if ( ++p == pe )
		goto _out220;
case 220:
	switch( (*p) ) {
		case 95: goto tr291;
		case 117: goto st221;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st221:
	if ( ++p == pe )
		goto _out221;
case 221:
	switch( (*p) ) {
		case 95: goto tr291;
		case 116: goto st222;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st222:
	if ( ++p == pe )
		goto _out222;
case 222:
	switch( (*p) ) {
		case 95: goto tr291;
		case 119: goto st223;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st223:
	if ( ++p == pe )
		goto _out223;
case 223:
	switch( (*p) ) {
		case 95: goto tr291;
		case 104: goto st224;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st224:
	if ( ++p == pe )
		goto _out224;
case 224:
	switch( (*p) ) {
		case 95: goto tr291;
		case 101: goto st225;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st225:
	if ( ++p == pe )
		goto _out225;
case 225:
	switch( (*p) ) {
		case 95: goto tr291;
		case 110: goto tr427;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st226:
	if ( ++p == pe )
		goto _out226;
case 226:
	switch( (*p) ) {
		case 95: goto tr291;
		case 111: goto st227;
		case 114: goto st232;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st227:
	if ( ++p == pe )
		goto _out227;
case 227:
	switch( (*p) ) {
		case 95: goto tr291;
		case 115: goto st228;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st228:
	if ( ++p == pe )
		goto _out228;
case 228:
	switch( (*p) ) {
		case 95: goto tr291;
		case 116: goto st229;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st229:
	if ( ++p == pe )
		goto _out229;
case 229:
	switch( (*p) ) {
		case 95: goto tr291;
		case 112: goto st230;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st230:
	if ( ++p == pe )
		goto _out230;
case 230:
	switch( (*p) ) {
		case 95: goto tr291;
		case 111: goto st231;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st231:
	if ( ++p == pe )
		goto _out231;
case 231:
	switch( (*p) ) {
		case 95: goto tr291;
		case 112: goto tr434;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st232:
	if ( ++p == pe )
		goto _out232;
case 232:
	switch( (*p) ) {
		case 95: goto tr291;
		case 101: goto st233;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st233:
	if ( ++p == pe )
		goto _out233;
case 233:
	switch( (*p) ) {
		case 95: goto tr291;
		case 112: goto st234;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st234:
	if ( ++p == pe )
		goto _out234;
case 234:
	switch( (*p) ) {
		case 95: goto tr291;
		case 117: goto st235;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st235:
	if ( ++p == pe )
		goto _out235;
case 235:
	switch( (*p) ) {
		case 95: goto tr291;
		case 115: goto st236;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st236:
	if ( ++p == pe )
		goto _out236;
case 236:
	switch( (*p) ) {
		case 95: goto tr291;
		case 104: goto tr439;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st237:
	if ( ++p == pe )
		goto _out237;
case 237:
	switch( (*p) ) {
		case 95: goto tr291;
		case 111: goto tr440;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st238:
	if ( ++p == pe )
		goto _out238;
case 238:
	switch( (*p) ) {
		case 95: goto tr291;
		case 97: goto st239;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 98 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st239:
	if ( ++p == pe )
		goto _out239;
case 239:
	switch( (*p) ) {
		case 95: goto tr291;
		case 114: goto st240;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st240:
	if ( ++p == pe )
		goto _out240;
case 240:
	switch( (*p) ) {
		case 95: goto tr291;
		case 105: goto st241;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st241:
	if ( ++p == pe )
		goto _out241;
case 241:
	switch( (*p) ) {
		case 95: goto tr291;
		case 97: goto st242;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 98 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st242:
	if ( ++p == pe )
		goto _out242;
case 242:
	switch( (*p) ) {
		case 95: goto tr291;
		case 98: goto st243;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st243:
	if ( ++p == pe )
		goto _out243;
case 243:
	switch( (*p) ) {
		case 95: goto tr291;
		case 108: goto st244;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st244:
	if ( ++p == pe )
		goto _out244;
case 244:
	switch( (*p) ) {
		case 95: goto tr291;
		case 101: goto tr447;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st245:
	if ( ++p == pe )
		goto _out245;
case 245:
	switch( (*p) ) {
		case 95: goto tr291;
		case 104: goto st246;
		case 114: goto st248;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st246:
	if ( ++p == pe )
		goto _out246;
case 246:
	switch( (*p) ) {
		case 95: goto tr291;
		case 101: goto st247;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st247:
	if ( ++p == pe )
		goto _out247;
case 247:
	switch( (*p) ) {
		case 95: goto tr291;
		case 110: goto tr451;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st248:
	if ( ++p == pe )
		goto _out248;
case 248:
	switch( (*p) ) {
		case 95: goto tr291;
		case 105: goto st249;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st249:
	if ( ++p == pe )
		goto _out249;
case 249:
	switch( (*p) ) {
		case 95: goto tr291;
		case 116: goto st250;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st250:
	if ( ++p == pe )
		goto _out250;
case 250:
	switch( (*p) ) {
		case 95: goto tr291;
		case 101: goto tr454;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr291;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr291;
	} else
		goto tr291;
	goto tr364;
st251:
	if ( ++p == pe )
		goto _out251;
case 251:
	if ( (*p) == 42 )
		goto tr455;
	goto tr311;
tr307:
#line 1 "rlscan.rl"
	{tokend = p+1;}
	goto st252;
st252:
	if ( ++p == pe )
		goto _out252;
case 252:
#line 6211 "rlscan.cpp"
	if ( (*p) == 37 )
		goto st30;
	goto tr311;
st30:
	if ( ++p == pe )
		goto _out30;
case 30:
	if ( (*p) == 37 )
		goto tr54;
	goto tr53;
tr57:
#line 1008 "rlscan.rl"
	{tokend = p+1;{ pass( IMP_Literal, tokstart, tokend ); }}
	goto st253;
tr60:
#line 520 "rlscan.rl"
	{ 
		lastnl = p; 
		column = 0;
		line++;
	}
#line 1006 "rlscan.rl"
	{tokend = p+1;{ pass(); }}
	goto st253;
tr457:
#line 1024 "rlscan.rl"
	{tokend = p+1;{ pass( *tokstart, 0, 0 ); }}
	goto st253;
tr458:
#line 1023 "rlscan.rl"
	{tokend = p+1;}
	goto st253;
tr468:
#line 1022 "rlscan.rl"
	{tokend = p;p--;{ pass(); }}
	goto st253;
tr469:
#line 1024 "rlscan.rl"
	{tokend = p;p--;{ pass( *tokstart, 0, 0 ); }}
	goto st253;
tr471:
#line 1016 "rlscan.rl"
	{tokend = p;p--;{ 
			updateCol();
			singleLineSpec = true;
			startSection();
			{stack[top++] = 253; goto st146;}
		}}
	goto st253;
tr472:
#line 1010 "rlscan.rl"
	{tokend = p+1;{ 
			updateCol();
			singleLineSpec = false;
			startSection();
			{stack[top++] = 253; goto st146;}
		}}
	goto st253;
tr473:
#line 1005 "rlscan.rl"
	{tokend = p;p--;{ pass( IMP_UInt, tokstart, tokend ); }}
	goto st253;
tr474:
#line 1004 "rlscan.rl"
	{tokend = p;p--;{ pass( IMP_Word, tokstart, tokend ); }}
	goto st253;
st253:
#line 1 "rlscan.rl"
	{tokstart = 0;}
	if ( ++p == pe )
		goto _out253;
case 253:
#line 1 "rlscan.rl"
	{tokstart = p;}
#line 6286 "rlscan.cpp"
	switch( (*p) ) {
		case 0: goto tr458;
		case 9: goto st254;
		case 10: goto tr460;
		case 32: goto st254;
		case 34: goto tr461;
		case 35: goto tr462;
		case 37: goto st257;
		case 39: goto tr464;
		case 47: goto tr465;
		case 95: goto st262;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st261;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto st262;
	} else
		goto st262;
	goto tr457;
tr460:
#line 520 "rlscan.rl"
	{ 
		lastnl = p; 
		column = 0;
		line++;
	}
	goto st254;
st254:
	if ( ++p == pe )
		goto _out254;
case 254:
#line 6320 "rlscan.cpp"
	switch( (*p) ) {
		case 9: goto st254;
		case 10: goto tr460;
		case 32: goto st254;
	}
	goto tr468;
tr461:
#line 1 "rlscan.rl"
	{tokend = p+1;}
	goto st255;
st255:
	if ( ++p == pe )
		goto _out255;
case 255:
#line 6335 "rlscan.cpp"
	switch( (*p) ) {
		case 10: goto tr56;
		case 34: goto tr57;
		case 92: goto st32;
	}
	goto st31;
tr56:
#line 520 "rlscan.rl"
	{ 
		lastnl = p; 
		column = 0;
		line++;
	}
	goto st31;
st31:
	if ( ++p == pe )
		goto _out31;
case 31:
#line 6354 "rlscan.cpp"
	switch( (*p) ) {
		case 10: goto tr56;
		case 34: goto tr57;
		case 92: goto st32;
	}
	goto st31;
st32:
	if ( ++p == pe )
		goto _out32;
case 32:
	if ( (*p) == 10 )
		goto tr56;
	goto st31;
tr462:
#line 1 "rlscan.rl"
	{tokend = p+1;}
	goto st256;
st256:
	if ( ++p == pe )
		goto _out256;
case 256:
#line 6376 "rlscan.cpp"
	if ( (*p) == 10 )
		goto tr60;
	goto st33;
st33:
	if ( ++p == pe )
		goto _out33;
case 33:
	if ( (*p) == 10 )
		goto tr60;
	goto st33;
st257:
	if ( ++p == pe )
		goto _out257;
case 257:
	if ( (*p) == 37 )
		goto st258;
	goto tr469;
st258:
	if ( ++p == pe )
		goto _out258;
case 258:
	if ( (*p) == 123 )
		goto tr472;
	goto tr471;
tr464:
#line 1 "rlscan.rl"
	{tokend = p+1;}
	goto st259;
st259:
	if ( ++p == pe )
		goto _out259;
case 259:
#line 6409 "rlscan.cpp"
	switch( (*p) ) {
		case 10: goto tr62;
		case 39: goto tr57;
		case 92: goto st35;
	}
	goto st34;
tr62:
#line 520 "rlscan.rl"
	{ 
		lastnl = p; 
		column = 0;
		line++;
	}
	goto st34;
st34:
	if ( ++p == pe )
		goto _out34;
case 34:
#line 6428 "rlscan.cpp"
	switch( (*p) ) {
		case 10: goto tr62;
		case 39: goto tr57;
		case 92: goto st35;
	}
	goto st34;
st35:
	if ( ++p == pe )
		goto _out35;
case 35:
	if ( (*p) == 10 )
		goto tr62;
	goto st34;
tr465:
#line 1 "rlscan.rl"
	{tokend = p+1;}
	goto st260;
st260:
	if ( ++p == pe )
		goto _out260;
case 260:
#line 6450 "rlscan.cpp"
	switch( (*p) ) {
		case 10: goto tr65;
		case 47: goto tr57;
		case 92: goto st37;
	}
	goto st36;
tr65:
#line 520 "rlscan.rl"
	{ 
		lastnl = p; 
		column = 0;
		line++;
	}
	goto st36;
st36:
	if ( ++p == pe )
		goto _out36;
case 36:
#line 6469 "rlscan.cpp"
	switch( (*p) ) {
		case 10: goto tr65;
		case 47: goto tr57;
		case 92: goto st37;
	}
	goto st36;
st37:
	if ( ++p == pe )
		goto _out37;
case 37:
	if ( (*p) == 10 )
		goto tr65;
	goto st36;
st261:
	if ( ++p == pe )
		goto _out261;
case 261:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto st261;
	goto tr473;
st262:
	if ( ++p == pe )
		goto _out262;
case 262:
	if ( (*p) == 95 )
		goto st262;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st262;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto st262;
	} else
		goto st262;
	goto tr474;
	}
	_out38: cs = 38; goto _out; 
	_out39: cs = 39; goto _out; 
	_out40: cs = 40; goto _out; 
	_out1: cs = 1; goto _out; 
	_out2: cs = 2; goto _out; 
	_out41: cs = 41; goto _out; 
	_out42: cs = 42; goto _out; 
	_out43: cs = 43; goto _out; 
	_out3: cs = 3; goto _out; 
	_out4: cs = 4; goto _out; 
	_out44: cs = 44; goto _out; 
	_out5: cs = 5; goto _out; 
	_out6: cs = 6; goto _out; 
	_out7: cs = 7; goto _out; 
	_out45: cs = 45; goto _out; 
	_out46: cs = 46; goto _out; 
	_out47: cs = 47; goto _out; 
	_out48: cs = 48; goto _out; 
	_out49: cs = 49; goto _out; 
	_out50: cs = 50; goto _out; 
	_out51: cs = 51; goto _out; 
	_out52: cs = 52; goto _out; 
	_out53: cs = 53; goto _out; 
	_out54: cs = 54; goto _out; 
	_out8: cs = 8; goto _out; 
	_out9: cs = 9; goto _out; 
	_out55: cs = 55; goto _out; 
	_out10: cs = 10; goto _out; 
	_out56: cs = 56; goto _out; 
	_out11: cs = 11; goto _out; 
	_out12: cs = 12; goto _out; 
	_out57: cs = 57; goto _out; 
	_out13: cs = 13; goto _out; 
	_out14: cs = 14; goto _out; 
	_out58: cs = 58; goto _out; 
	_out59: cs = 59; goto _out; 
	_out15: cs = 15; goto _out; 
	_out60: cs = 60; goto _out; 
	_out61: cs = 61; goto _out; 
	_out62: cs = 62; goto _out; 
	_out63: cs = 63; goto _out; 
	_out64: cs = 64; goto _out; 
	_out65: cs = 65; goto _out; 
	_out66: cs = 66; goto _out; 
	_out67: cs = 67; goto _out; 
	_out68: cs = 68; goto _out; 
	_out69: cs = 69; goto _out; 
	_out70: cs = 70; goto _out; 
	_out71: cs = 71; goto _out; 
	_out72: cs = 72; goto _out; 
	_out73: cs = 73; goto _out; 
	_out74: cs = 74; goto _out; 
	_out75: cs = 75; goto _out; 
	_out76: cs = 76; goto _out; 
	_out77: cs = 77; goto _out; 
	_out78: cs = 78; goto _out; 
	_out79: cs = 79; goto _out; 
	_out80: cs = 80; goto _out; 
	_out81: cs = 81; goto _out; 
	_out82: cs = 82; goto _out; 
	_out83: cs = 83; goto _out; 
	_out84: cs = 84; goto _out; 
	_out85: cs = 85; goto _out; 
	_out86: cs = 86; goto _out; 
	_out87: cs = 87; goto _out; 
	_out88: cs = 88; goto _out; 
	_out89: cs = 89; goto _out; 
	_out90: cs = 90; goto _out; 
	_out91: cs = 91; goto _out; 
	_out92: cs = 92; goto _out; 
	_out93: cs = 93; goto _out; 
	_out94: cs = 94; goto _out; 
	_out95: cs = 95; goto _out; 
	_out96: cs = 96; goto _out; 
	_out97: cs = 97; goto _out; 
	_out16: cs = 16; goto _out; 
	_out17: cs = 17; goto _out; 
	_out98: cs = 98; goto _out; 
	_out18: cs = 18; goto _out; 
	_out19: cs = 19; goto _out; 
	_out99: cs = 99; goto _out; 
	_out20: cs = 20; goto _out; 
	_out21: cs = 21; goto _out; 
	_out22: cs = 22; goto _out; 
	_out100: cs = 100; goto _out; 
	_out101: cs = 101; goto _out; 
	_out23: cs = 23; goto _out; 
	_out102: cs = 102; goto _out; 
	_out103: cs = 103; goto _out; 
	_out104: cs = 104; goto _out; 
	_out105: cs = 105; goto _out; 
	_out106: cs = 106; goto _out; 
	_out107: cs = 107; goto _out; 
	_out108: cs = 108; goto _out; 
	_out109: cs = 109; goto _out; 
	_out110: cs = 110; goto _out; 
	_out111: cs = 111; goto _out; 
	_out112: cs = 112; goto _out; 
	_out113: cs = 113; goto _out; 
	_out114: cs = 114; goto _out; 
	_out115: cs = 115; goto _out; 
	_out116: cs = 116; goto _out; 
	_out117: cs = 117; goto _out; 
	_out118: cs = 118; goto _out; 
	_out119: cs = 119; goto _out; 
	_out120: cs = 120; goto _out; 
	_out121: cs = 121; goto _out; 
	_out122: cs = 122; goto _out; 
	_out123: cs = 123; goto _out; 
	_out124: cs = 124; goto _out; 
	_out125: cs = 125; goto _out; 
	_out126: cs = 126; goto _out; 
	_out127: cs = 127; goto _out; 
	_out128: cs = 128; goto _out; 
	_out129: cs = 129; goto _out; 
	_out130: cs = 130; goto _out; 
	_out131: cs = 131; goto _out; 
	_out132: cs = 132; goto _out; 
	_out133: cs = 133; goto _out; 
	_out134: cs = 134; goto _out; 
	_out135: cs = 135; goto _out; 
	_out136: cs = 136; goto _out; 
	_out137: cs = 137; goto _out; 
	_out138: cs = 138; goto _out; 
	_out139: cs = 139; goto _out; 
	_out140: cs = 140; goto _out; 
	_out141: cs = 141; goto _out; 
	_out142: cs = 142; goto _out; 
	_out143: cs = 143; goto _out; 
	_out0: cs = 0; goto _out; 
	_out144: cs = 144; goto _out; 
	_out145: cs = 145; goto _out; 
	_out146: cs = 146; goto _out; 
	_out147: cs = 147; goto _out; 
	_out148: cs = 148; goto _out; 
	_out24: cs = 24; goto _out; 
	_out149: cs = 149; goto _out; 
	_out25: cs = 25; goto _out; 
	_out150: cs = 150; goto _out; 
	_out26: cs = 26; goto _out; 
	_out151: cs = 151; goto _out; 
	_out152: cs = 152; goto _out; 
	_out153: cs = 153; goto _out; 
	_out27: cs = 27; goto _out; 
	_out28: cs = 28; goto _out; 
	_out154: cs = 154; goto _out; 
	_out155: cs = 155; goto _out; 
	_out156: cs = 156; goto _out; 
	_out157: cs = 157; goto _out; 
	_out158: cs = 158; goto _out; 
	_out29: cs = 29; goto _out; 
	_out159: cs = 159; goto _out; 
	_out160: cs = 160; goto _out; 
	_out161: cs = 161; goto _out; 
	_out162: cs = 162; goto _out; 
	_out163: cs = 163; goto _out; 
	_out164: cs = 164; goto _out; 
	_out165: cs = 165; goto _out; 
	_out166: cs = 166; goto _out; 
	_out167: cs = 167; goto _out; 
	_out168: cs = 168; goto _out; 
	_out169: cs = 169; goto _out; 
	_out170: cs = 170; goto _out; 
	_out171: cs = 171; goto _out; 
	_out172: cs = 172; goto _out; 
	_out173: cs = 173; goto _out; 
	_out174: cs = 174; goto _out; 
	_out175: cs = 175; goto _out; 
	_out176: cs = 176; goto _out; 
	_out177: cs = 177; goto _out; 
	_out178: cs = 178; goto _out; 
	_out179: cs = 179; goto _out; 
	_out180: cs = 180; goto _out; 
	_out181: cs = 181; goto _out; 
	_out182: cs = 182; goto _out; 
	_out183: cs = 183; goto _out; 
	_out184: cs = 184; goto _out; 
	_out185: cs = 185; goto _out; 
	_out186: cs = 186; goto _out; 
	_out187: cs = 187; goto _out; 
	_out188: cs = 188; goto _out; 
	_out189: cs = 189; goto _out; 
	_out190: cs = 190; goto _out; 
	_out191: cs = 191; goto _out; 
	_out192: cs = 192; goto _out; 
	_out193: cs = 193; goto _out; 
	_out194: cs = 194; goto _out; 
	_out195: cs = 195; goto _out; 
	_out196: cs = 196; goto _out; 
	_out197: cs = 197; goto _out; 
	_out198: cs = 198; goto _out; 
	_out199: cs = 199; goto _out; 
	_out200: cs = 200; goto _out; 
	_out201: cs = 201; goto _out; 
	_out202: cs = 202; goto _out; 
	_out203: cs = 203; goto _out; 
	_out204: cs = 204; goto _out; 
	_out205: cs = 205; goto _out; 
	_out206: cs = 206; goto _out; 
	_out207: cs = 207; goto _out; 
	_out208: cs = 208; goto _out; 
	_out209: cs = 209; goto _out; 
	_out210: cs = 210; goto _out; 
	_out211: cs = 211; goto _out; 
	_out212: cs = 212; goto _out; 
	_out213: cs = 213; goto _out; 
	_out214: cs = 214; goto _out; 
	_out215: cs = 215; goto _out; 
	_out216: cs = 216; goto _out; 
	_out217: cs = 217; goto _out; 
	_out218: cs = 218; goto _out; 
	_out219: cs = 219; goto _out; 
	_out220: cs = 220; goto _out; 
	_out221: cs = 221; goto _out; 
	_out222: cs = 222; goto _out; 
	_out223: cs = 223; goto _out; 
	_out224: cs = 224; goto _out; 
	_out225: cs = 225; goto _out; 
	_out226: cs = 226; goto _out; 
	_out227: cs = 227; goto _out; 
	_out228: cs = 228; goto _out; 
	_out229: cs = 229; goto _out; 
	_out230: cs = 230; goto _out; 
	_out231: cs = 231; goto _out; 
	_out232: cs = 232; goto _out; 
	_out233: cs = 233; goto _out; 
	_out234: cs = 234; goto _out; 
	_out235: cs = 235; goto _out; 
	_out236: cs = 236; goto _out; 
	_out237: cs = 237; goto _out; 
	_out238: cs = 238; goto _out; 
	_out239: cs = 239; goto _out; 
	_out240: cs = 240; goto _out; 
	_out241: cs = 241; goto _out; 
	_out242: cs = 242; goto _out; 
	_out243: cs = 243; goto _out; 
	_out244: cs = 244; goto _out; 
	_out245: cs = 245; goto _out; 
	_out246: cs = 246; goto _out; 
	_out247: cs = 247; goto _out; 
	_out248: cs = 248; goto _out; 
	_out249: cs = 249; goto _out; 
	_out250: cs = 250; goto _out; 
	_out251: cs = 251; goto _out; 
	_out252: cs = 252; goto _out; 
	_out30: cs = 30; goto _out; 
	_out253: cs = 253; goto _out; 
	_out254: cs = 254; goto _out; 
	_out255: cs = 255; goto _out; 
	_out31: cs = 31; goto _out; 
	_out32: cs = 32; goto _out; 
	_out256: cs = 256; goto _out; 
	_out33: cs = 33; goto _out; 
	_out257: cs = 257; goto _out; 
	_out258: cs = 258; goto _out; 
	_out259: cs = 259; goto _out; 
	_out34: cs = 34; goto _out; 
	_out35: cs = 35; goto _out; 
	_out260: cs = 260; goto _out; 
	_out36: cs = 36; goto _out; 
	_out37: cs = 37; goto _out; 
	_out261: cs = 261; goto _out; 
	_out262: cs = 262; goto _out; 

	_out: {}
	}
#line 1119 "rlscan.rl"

		/* Check if we failed. */
		if ( cs == rlscan_error ) {
			/* Machine failed before finding a token. I'm not yet sure if this
			 * is reachable. */
			scan_error() << "scanner error" << endl;
			exit(1);
		}

		/* Decide if we need to preserve anything. */
		char *preserve = tokstart;

		/* Now set up the prefix. */
		if ( preserve == 0 )
			have = 0;
		else {
			/* There is data that needs to be shifted over. */
			have = pe - preserve;
			memmove( buf, preserve, have );
			unsigned int shiftback = preserve - buf;
			if ( tokstart != 0 )
				tokstart -= shiftback;
			tokend -= shiftback;

			preserve = buf;
		}
	}

	delete[] buf;
}
