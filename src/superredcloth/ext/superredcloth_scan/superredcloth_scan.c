#line 1 "superredcloth_scan.rl"
/*
 * superredcloth_scan.rl
 *
 * $Author: why $
 * $Date$
 *
 * Copyright (C) 2007 why the lucky stiff
 */
#define superredcloth_scan_c

#include <ruby.h>
#include "superredcloth.h"

VALUE super_ParseError, super_RedCloth, super_HTML;

#line 93 "superredcloth_scan.rl"



#line 22 "superredcloth_scan.c"
static const int superredcloth_scan_start = 697;
static const int superredcloth_scan_error = 0;

static const int superredcloth_scan_en_pre = 724;
static const int superredcloth_scan_en_notextile = 726;
static const int superredcloth_scan_en_block = 728;
static const int superredcloth_scan_en_footnote = 731;
static const int superredcloth_scan_en_list = 734;
static const int superredcloth_scan_en_main = 697;

#line 96 "superredcloth_scan.rl"

VALUE
superredcloth_transform(rb_formatter, p, pe)
  VALUE rb_formatter;
  char *p, *pe;
{
  int cs, act, nest;
  char *tokstart = NULL, *tokend = NULL, *reg = NULL;
  VALUE html = rb_str_new2("");
  VALUE table = rb_str_new2("");
  VALUE block = rb_str_new2("");
  VALUE regs = rb_hash_new();
  VALUE list_layout = Qnil;
  char *list_type = NULL;
  VALUE plain_block = rb_str_new2("p");

  
#line 51 "superredcloth_scan.c"
	{
	cs = superredcloth_scan_start;
	tokstart = 0;
	tokend = 0;
	act = 0;
	}
#line 113 "superredcloth_scan.rl"

  
#line 61 "superredcloth_scan.c"
	{
	if ( p == pe )
		goto _out;
	switch ( cs )
	{
tr0:
#line 83 "superredcloth_scan.rl"
	{{p = ((tokend))-1;}{ 
      regs = rb_hash_new();
      rb_hash_aset(regs, ID2SYM(rb_intern("type")), plain_block);
      CAT(block);
      {goto st728;}
    }}
	goto st697;
tr328:
#line 1 "superredcloth_scan.rl"
	{	switch( act ) {
	case 16:
	{{p = ((tokend))-1;} INLINE(table, table_close); DONE(table); {goto st728;} }
	break;
	case 17:
	{{p = ((tokend))-1;} 
      regs = rb_hash_new();
      rb_hash_aset(regs, ID2SYM(rb_intern("type")), plain_block);
      CAT(block);
      {goto st728;}
    }
	break;
	default: break;
	}
	}
	goto st697;
tr333:
#line 81 "superredcloth_scan.rl"
	{{p = ((tokend))-1;}{ INLINE(table, table_close); DONE(table); {goto st728;} }}
	goto st697;
tr1692:
#line 77 "superredcloth_scan.rl"
	{tokend = p+1;{ ASET(type, notextile); {goto st726;} }}
	goto st697;
tr1695:
#line 89 "superredcloth_scan.rl"
	{tokend = p+1;{ ASET(type, notextile); CAT(block); {goto st724;} }}
	goto st697;
tr2811:
#line 83 "superredcloth_scan.rl"
	{tokend = p+1;{ 
      regs = rb_hash_new();
      rb_hash_aset(regs, ID2SYM(rb_intern("type")), plain_block);
      CAT(block);
      {goto st728;}
    }}
	goto st697;
tr2812:
#line 90 "superredcloth_scan.rl"
	{tokend = p+1;}
	goto st697;
tr2834:
#line 83 "superredcloth_scan.rl"
	{tokend = p;p--;{ 
      regs = rb_hash_new();
      rb_hash_aset(regs, ID2SYM(rb_intern("type")), plain_block);
      CAT(block);
      {goto st728;}
    }}
	goto st697;
tr2835:
#line 80 "superredcloth_scan.rl"
	{tokend = p;p--;{ list_layout = rb_ary_new(); LIST_ITEM(); {goto st734;} }}
	goto st697;
tr2837:
#line 81 "superredcloth_scan.rl"
	{tokend = p;p--;{ INLINE(table, table_close); DONE(table); {goto st728;} }}
	goto st697;
tr2872:
#line 78 "superredcloth_scan.rl"
	{tokend = p;p--;{ {goto st728;} }}
	goto st697;
tr2876:
#line 79 "superredcloth_scan.rl"
	{tokend = p;p--;{ {goto st731;} }}
	goto st697;
st697:
#line 1 "superredcloth_scan.rl"
	{tokstart = 0;}
	if ( ++p == pe )
		goto _out697;
case 697:
#line 1 "superredcloth_scan.rl"
	{tokstart = p;}
#line 152 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr2812;
		case 35: goto tr2813;
		case 40: goto tr2814;
		case 41: goto tr2815;
		case 42: goto tr2816;
		case 45: goto tr2817;
		case 46: goto tr2818;
		case 60: goto tr2819;
		case 61: goto tr2820;
		case 62: goto tr2821;
		case 91: goto tr2822;
		case 94: goto tr2823;
		case 98: goto tr2824;
		case 100: goto tr2825;
		case 102: goto tr2826;
		case 104: goto tr2827;
		case 110: goto tr2828;
		case 112: goto tr2829;
		case 116: goto tr2830;
		case 123: goto tr2831;
		case 124: goto tr2832;
		case 126: goto tr2833;
	}
	goto tr2811;
tr2813:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
#line 37 "superredcloth_scan.rl"
	{nest = 0;}
	goto st698;
st698:
	if ( ++p == pe )
		goto _out698;
case 698:
#line 188 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr1;
		case 35: goto tr2;
		case 40: goto tr3;
		case 41: goto tr4;
		case 42: goto tr5;
		case 45: goto tr6;
		case 60: goto tr8;
		case 61: goto tr9;
		case 62: goto tr10;
		case 91: goto tr11;
		case 94: goto tr12;
		case 95: goto tr13;
		case 123: goto tr14;
		case 126: goto tr15;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr7;
	goto tr2834;
tr1:
#line 36 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
	goto st699;
tr17:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
	goto st699;
tr47:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st699;
tr58:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st699;
tr69:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st699;
tr80:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st699;
tr91:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st699;
tr102:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st699;
tr113:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st699;
tr124:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st699;
tr260:
#line 35 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
	goto st699;
tr275:
#line 39 "superredcloth_scan.rl"
	{ STORE(start) }
	goto st699;
tr287:
#line 38 "superredcloth_scan.rl"
	{ ASET(start, continue) }
	goto st699;
st699:
	if ( ++p == pe )
		goto _out699;
case 699:
#line 266 "superredcloth_scan.c"
	if ( (*p) == 32 )
		goto st699;
	goto tr2835;
tr2:
#line 36 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
	goto st1;
tr261:
#line 35 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
	goto st1;
st1:
	if ( ++p == pe )
		goto _out1;
case 1:
#line 282 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr1;
		case 35: goto tr2;
		case 40: goto tr3;
		case 41: goto tr4;
		case 42: goto tr5;
		case 45: goto tr6;
		case 60: goto tr8;
		case 61: goto tr9;
		case 62: goto tr10;
		case 91: goto tr11;
		case 94: goto tr12;
		case 95: goto tr13;
		case 123: goto tr14;
		case 126: goto tr15;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr7;
	goto tr0;
tr3:
#line 36 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st2;
tr48:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st2;
tr59:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st2;
tr70:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st2;
tr81:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st2;
tr92:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st2;
tr103:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st2;
tr114:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st2;
tr125:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st2;
tr262:
#line 35 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st2;
tr276:
#line 39 "superredcloth_scan.rl"
	{ STORE(start) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st2;
tr288:
#line 38 "superredcloth_scan.rl"
	{ ASET(start, continue) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st2;
st2:
	if ( ++p == pe )
		goto _out2;
case 2:
#line 380 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr17;
		case 35: goto st4;
		case 40: goto tr19;
		case 41: goto tr20;
		case 45: goto tr21;
		case 60: goto tr22;
		case 61: goto tr23;
		case 62: goto tr24;
		case 91: goto tr25;
		case 94: goto tr26;
		case 123: goto tr27;
		case 126: goto tr28;
	}
	goto tr16;
tr16:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st3;
st3:
	if ( ++p == pe )
		goto _out3;
case 3:
#line 404 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr30;
		case 41: goto tr31;
	}
	goto st3;
tr30:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st4;
st4:
	if ( ++p == pe )
		goto _out4;
case 4:
#line 418 "superredcloth_scan.c"
	if ( (*p) == 41 )
		goto tr0;
	goto tr32;
tr32:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st5;
st5:
	if ( ++p == pe )
		goto _out5;
case 5:
#line 430 "superredcloth_scan.c"
	if ( (*p) == 41 )
		goto tr34;
	goto st5;
tr31:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st6;
tr34:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st6;
tr42:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st6;
tr45:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st6;
tr226:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st6;
st6:
	if ( ++p == pe )
		goto _out6;
case 6:
#line 460 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto st699;
		case 40: goto st7;
		case 91: goto st8;
		case 123: goto st10;
	}
	goto tr0;
st7:
	if ( ++p == pe )
		goto _out7;
case 7:
	switch( (*p) ) {
		case 35: goto st4;
		case 41: goto st6;
	}
	goto tr16;
tr11:
#line 36 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
	goto st8;
tr54:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st8;
tr65:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st8;
tr76:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st8;
tr87:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st8;
tr98:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st8;
tr109:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st8;
tr120:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st8;
tr131:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st8;
tr270:
#line 35 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
	goto st8;
tr283:
#line 39 "superredcloth_scan.rl"
	{ STORE(start) }
	goto st8;
tr294:
#line 38 "superredcloth_scan.rl"
	{ ASET(start, continue) }
	goto st8;
st8:
	if ( ++p == pe )
		goto _out8;
case 8:
#line 531 "superredcloth_scan.c"
	if ( (*p) == 93 )
		goto tr0;
	goto tr40;
tr40:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st9;
st9:
	if ( ++p == pe )
		goto _out9;
case 9:
#line 543 "superredcloth_scan.c"
	if ( (*p) == 93 )
		goto tr42;
	goto st9;
tr14:
#line 36 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
	goto st10;
tr56:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st10;
tr67:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st10;
tr78:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st10;
tr89:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st10;
tr100:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st10;
tr111:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st10;
tr122:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st10;
tr133:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st10;
tr273:
#line 35 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
	goto st10;
tr285:
#line 39 "superredcloth_scan.rl"
	{ STORE(start) }
	goto st10;
tr296:
#line 38 "superredcloth_scan.rl"
	{ ASET(start, continue) }
	goto st10;
st10:
	if ( ++p == pe )
		goto _out10;
case 10:
#line 601 "superredcloth_scan.c"
	if ( (*p) == 125 )
		goto tr0;
	goto tr43;
tr43:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st11;
st11:
	if ( ++p == pe )
		goto _out11;
case 11:
#line 613 "superredcloth_scan.c"
	if ( (*p) == 125 )
		goto tr45;
	goto st11;
tr19:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st12;
tr135:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st12;
tr145:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st12;
tr155:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st12;
tr165:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st12;
tr230:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st12;
tr240:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st12;
tr250:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st12;
st12:
	if ( ++p == pe )
		goto _out12;
case 12:
#line 671 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr17;
		case 35: goto tr30;
		case 40: goto tr19;
		case 41: goto tr46;
		case 45: goto tr21;
		case 60: goto tr22;
		case 61: goto tr23;
		case 62: goto tr24;
		case 91: goto tr25;
		case 94: goto tr26;
		case 123: goto tr27;
		case 126: goto tr28;
	}
	goto tr16;
tr4:
#line 36 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st13;
tr20:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st13;
tr46:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st13;
tr49:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st13;
tr60:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st13;
tr71:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st13;
tr82:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st13;
tr93:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st13;
tr104:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st13;
tr115:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st13;
tr126:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st13;
tr136:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st13;
tr146:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st13;
tr156:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st13;
tr166:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st13;
tr231:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st13;
tr241:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st13;
tr251:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st13;
tr263:
#line 35 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st13;
tr277:
#line 39 "superredcloth_scan.rl"
	{ STORE(start) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st13;
tr289:
#line 38 "superredcloth_scan.rl"
	{ ASET(start, continue) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st13;
st13:
	if ( ++p == pe )
		goto _out13;
case 13:
#line 837 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr47;
		case 40: goto tr48;
		case 41: goto tr49;
		case 45: goto tr50;
		case 60: goto tr51;
		case 61: goto tr52;
		case 62: goto tr53;
		case 91: goto tr54;
		case 94: goto tr55;
		case 123: goto tr56;
		case 126: goto tr57;
	}
	goto tr0;
tr6:
#line 36 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
	goto st14;
tr50:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st14;
tr61:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st14;
tr72:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st14;
tr83:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st14;
tr94:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st14;
tr105:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st14;
tr116:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st14;
tr127:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st14;
tr265:
#line 35 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
	goto st14;
tr278:
#line 39 "superredcloth_scan.rl"
	{ STORE(start) }
	goto st14;
tr290:
#line 38 "superredcloth_scan.rl"
	{ ASET(start, continue) }
	goto st14;
st14:
	if ( ++p == pe )
		goto _out14;
case 14:
#line 906 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr58;
		case 40: goto tr59;
		case 41: goto tr60;
		case 45: goto tr61;
		case 60: goto tr62;
		case 61: goto tr63;
		case 62: goto tr64;
		case 91: goto tr65;
		case 94: goto tr66;
		case 123: goto tr67;
		case 126: goto tr68;
	}
	goto tr0;
tr8:
#line 36 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
	goto st15;
tr51:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st15;
tr62:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st15;
tr73:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st15;
tr84:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st15;
tr95:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st15;
tr106:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st15;
tr117:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st15;
tr128:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st15;
tr267:
#line 35 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
	goto st15;
tr280:
#line 39 "superredcloth_scan.rl"
	{ STORE(start) }
	goto st15;
tr291:
#line 38 "superredcloth_scan.rl"
	{ ASET(start, continue) }
	goto st15;
st15:
	if ( ++p == pe )
		goto _out15;
case 15:
#line 975 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr69;
		case 40: goto tr70;
		case 41: goto tr71;
		case 45: goto tr72;
		case 60: goto tr73;
		case 61: goto tr74;
		case 62: goto tr75;
		case 91: goto tr76;
		case 94: goto tr77;
		case 123: goto tr78;
		case 126: goto tr79;
	}
	goto tr0;
tr9:
#line 36 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
	goto st16;
tr52:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st16;
tr63:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st16;
tr74:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st16;
tr85:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st16;
tr96:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st16;
tr107:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st16;
tr118:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st16;
tr129:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st16;
tr268:
#line 35 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
	goto st16;
tr281:
#line 39 "superredcloth_scan.rl"
	{ STORE(start) }
	goto st16;
tr292:
#line 38 "superredcloth_scan.rl"
	{ ASET(start, continue) }
	goto st16;
st16:
	if ( ++p == pe )
		goto _out16;
case 16:
#line 1044 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr80;
		case 40: goto tr81;
		case 41: goto tr82;
		case 45: goto tr83;
		case 60: goto tr84;
		case 61: goto tr85;
		case 62: goto tr86;
		case 91: goto tr87;
		case 94: goto tr88;
		case 123: goto tr89;
		case 126: goto tr90;
	}
	goto tr0;
tr10:
#line 36 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
	goto st17;
tr53:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st17;
tr64:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st17;
tr86:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st17;
tr97:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st17;
tr108:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st17;
tr119:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st17;
tr130:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st17;
tr269:
#line 35 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
	goto st17;
tr282:
#line 39 "superredcloth_scan.rl"
	{ STORE(start) }
	goto st17;
tr293:
#line 38 "superredcloth_scan.rl"
	{ ASET(start, continue) }
	goto st17;
st17:
	if ( ++p == pe )
		goto _out17;
case 17:
#line 1109 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr91;
		case 40: goto tr92;
		case 41: goto tr93;
		case 45: goto tr94;
		case 60: goto tr95;
		case 61: goto tr96;
		case 62: goto tr97;
		case 91: goto tr98;
		case 94: goto tr99;
		case 123: goto tr100;
		case 126: goto tr101;
	}
	goto tr0;
tr12:
#line 36 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
	goto st18;
tr55:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st18;
tr66:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st18;
tr77:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st18;
tr88:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st18;
tr99:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st18;
tr110:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st18;
tr121:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st18;
tr132:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st18;
tr271:
#line 35 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
	goto st18;
tr284:
#line 39 "superredcloth_scan.rl"
	{ STORE(start) }
	goto st18;
tr295:
#line 38 "superredcloth_scan.rl"
	{ ASET(start, continue) }
	goto st18;
st18:
	if ( ++p == pe )
		goto _out18;
case 18:
#line 1178 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr102;
		case 40: goto tr103;
		case 41: goto tr104;
		case 45: goto tr105;
		case 60: goto tr106;
		case 61: goto tr107;
		case 62: goto tr108;
		case 91: goto tr109;
		case 94: goto tr110;
		case 123: goto tr111;
		case 126: goto tr112;
	}
	goto tr0;
tr15:
#line 36 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
	goto st19;
tr57:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st19;
tr68:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st19;
tr79:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st19;
tr90:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st19;
tr101:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st19;
tr112:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st19;
tr123:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st19;
tr134:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st19;
tr274:
#line 35 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
	goto st19;
tr286:
#line 39 "superredcloth_scan.rl"
	{ STORE(start) }
	goto st19;
tr297:
#line 38 "superredcloth_scan.rl"
	{ ASET(start, continue) }
	goto st19;
st19:
	if ( ++p == pe )
		goto _out19;
case 19:
#line 1247 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr113;
		case 40: goto tr114;
		case 41: goto tr115;
		case 45: goto tr116;
		case 60: goto tr117;
		case 61: goto tr118;
		case 62: goto tr119;
		case 91: goto tr120;
		case 94: goto tr121;
		case 123: goto tr122;
		case 126: goto tr123;
	}
	goto tr0;
tr75:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st20;
st20:
	if ( ++p == pe )
		goto _out20;
case 20:
#line 1270 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr124;
		case 40: goto tr125;
		case 41: goto tr126;
		case 45: goto tr127;
		case 60: goto tr128;
		case 61: goto tr129;
		case 62: goto tr130;
		case 91: goto tr131;
		case 94: goto tr132;
		case 123: goto tr133;
		case 126: goto tr134;
	}
	goto tr0;
tr21:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st21;
tr137:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st21;
tr147:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st21;
tr157:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st21;
tr167:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st21;
tr232:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st21;
tr242:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st21;
tr252:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st21;
st21:
	if ( ++p == pe )
		goto _out21;
case 21:
#line 1325 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr58;
		case 35: goto tr30;
		case 40: goto tr135;
		case 41: goto tr136;
		case 45: goto tr137;
		case 60: goto tr138;
		case 61: goto tr139;
		case 62: goto tr140;
		case 91: goto tr141;
		case 94: goto tr142;
		case 123: goto tr143;
		case 126: goto tr144;
	}
	goto st3;
tr22:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st22;
tr138:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st22;
tr148:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st22;
tr158:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st22;
tr168:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st22;
tr233:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st22;
tr243:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st22;
tr253:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st22;
st22:
	if ( ++p == pe )
		goto _out22;
case 22:
#line 1381 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr69;
		case 35: goto tr30;
		case 40: goto tr145;
		case 41: goto tr146;
		case 45: goto tr147;
		case 60: goto tr148;
		case 61: goto tr149;
		case 62: goto tr150;
		case 91: goto tr151;
		case 94: goto tr152;
		case 123: goto tr153;
		case 126: goto tr154;
	}
	goto st3;
tr23:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st23;
tr139:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st23;
tr149:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st23;
tr159:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st23;
tr169:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st23;
tr234:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st23;
tr244:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st23;
tr254:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st23;
st23:
	if ( ++p == pe )
		goto _out23;
case 23:
#line 1437 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr80;
		case 35: goto tr30;
		case 40: goto tr155;
		case 41: goto tr156;
		case 45: goto tr157;
		case 60: goto tr158;
		case 61: goto tr159;
		case 62: goto tr160;
		case 91: goto tr161;
		case 94: goto tr162;
		case 123: goto tr163;
		case 126: goto tr164;
	}
	goto st3;
tr24:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st24;
tr140:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st24;
tr160:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st24;
tr170:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st24;
tr235:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st24;
tr245:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st24;
tr255:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st24;
st24:
	if ( ++p == pe )
		goto _out24;
case 24:
#line 1489 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr91;
		case 35: goto tr30;
		case 40: goto tr165;
		case 41: goto tr166;
		case 45: goto tr167;
		case 60: goto tr168;
		case 61: goto tr169;
		case 62: goto tr170;
		case 91: goto tr171;
		case 94: goto tr172;
		case 123: goto tr173;
		case 126: goto tr174;
	}
	goto st3;
tr25:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st25;
tr141:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st25;
tr151:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st25;
tr161:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st25;
tr171:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st25;
tr236:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st25;
tr246:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st25;
tr256:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st25;
st25:
	if ( ++p == pe )
		goto _out25;
case 25:
#line 1545 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr176;
		case 41: goto tr177;
		case 93: goto st3;
	}
	goto tr175;
tr175:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st26;
st26:
	if ( ++p == pe )
		goto _out26;
case 26:
#line 1560 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr179;
		case 41: goto tr180;
		case 93: goto tr181;
	}
	goto st26;
tr179:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st27;
tr176:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st27;
st27:
	if ( ++p == pe )
		goto _out27;
case 27:
#line 1581 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto st9;
		case 93: goto tr183;
	}
	goto tr182;
tr182:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st28;
st28:
	if ( ++p == pe )
		goto _out28;
case 28:
#line 1595 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto tr185;
		case 93: goto tr186;
	}
	goto st28;
tr180:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st29;
tr185:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st29;
tr218:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st29;
tr177:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st29;
tr215:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st29;
tr227:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st29;
st29:
	if ( ++p == pe )
		goto _out29;
case 29:
#line 1635 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto st699;
		case 40: goto st30;
		case 91: goto st48;
		case 93: goto tr42;
		case 123: goto st49;
	}
	goto st9;
st30:
	if ( ++p == pe )
		goto _out30;
case 30:
	switch( (*p) ) {
		case 35: goto st27;
		case 41: goto st29;
		case 93: goto tr192;
	}
	goto tr175;
tr181:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st31;
tr202:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st31;
tr192:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st31;
tr213:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st31;
st31:
	if ( ++p == pe )
		goto _out31;
case 31:
#line 1678 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto st699;
		case 35: goto tr30;
		case 40: goto st32;
		case 41: goto tr31;
		case 91: goto st25;
		case 123: goto st33;
	}
	goto st3;
st32:
	if ( ++p == pe )
		goto _out32;
case 32:
	switch( (*p) ) {
		case 35: goto tr30;
		case 41: goto tr31;
	}
	goto tr16;
tr27:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st33;
tr143:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st33;
tr153:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st33;
tr163:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st33;
tr173:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st33;
tr238:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st33;
tr248:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st33;
tr258:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st33;
st33:
	if ( ++p == pe )
		goto _out33;
case 33:
#line 1737 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr197;
		case 41: goto tr198;
		case 125: goto st3;
	}
	goto tr196;
tr196:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st34;
st34:
	if ( ++p == pe )
		goto _out34;
case 34:
#line 1752 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr200;
		case 41: goto tr201;
		case 125: goto tr202;
	}
	goto st34;
tr200:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st35;
tr197:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st35;
st35:
	if ( ++p == pe )
		goto _out35;
case 35:
#line 1773 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto st11;
		case 125: goto tr204;
	}
	goto tr203;
tr203:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st36;
st36:
	if ( ++p == pe )
		goto _out36;
case 36:
#line 1787 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto tr206;
		case 125: goto tr207;
	}
	goto st36;
tr201:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st37;
tr206:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st37;
tr217:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st37;
tr198:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st37;
tr229:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st37;
tr228:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st37;
st37:
	if ( ++p == pe )
		goto _out37;
case 37:
#line 1827 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto st699;
		case 40: goto st38;
		case 91: goto st39;
		case 123: goto st41;
		case 125: goto tr45;
	}
	goto st11;
st38:
	if ( ++p == pe )
		goto _out38;
case 38:
	switch( (*p) ) {
		case 35: goto st35;
		case 41: goto st37;
		case 125: goto tr213;
	}
	goto tr196;
st39:
	if ( ++p == pe )
		goto _out39;
case 39:
	switch( (*p) ) {
		case 93: goto st11;
		case 125: goto tr215;
	}
	goto tr214;
tr214:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st40;
st40:
	if ( ++p == pe )
		goto _out40;
case 40:
#line 1863 "superredcloth_scan.c"
	switch( (*p) ) {
		case 93: goto tr217;
		case 125: goto tr218;
	}
	goto st40;
st41:
	if ( ++p == pe )
		goto _out41;
case 41:
	if ( (*p) == 125 )
		goto tr45;
	goto tr43;
tr186:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st42;
tr207:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st42;
tr183:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st42;
tr204:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st42;
st42:
	if ( ++p == pe )
		goto _out42;
case 42:
#line 1900 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto st699;
		case 40: goto st43;
		case 41: goto tr34;
		case 91: goto st46;
		case 123: goto st47;
	}
	goto st5;
st43:
	if ( ++p == pe )
		goto _out43;
case 43:
	switch( (*p) ) {
		case 35: goto st45;
		case 41: goto tr34;
	}
	goto tr222;
tr222:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st44;
st44:
	if ( ++p == pe )
		goto _out44;
case 44:
#line 1926 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr225;
		case 41: goto tr226;
	}
	goto st44;
tr225:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st45;
st45:
	if ( ++p == pe )
		goto _out45;
case 45:
#line 1940 "superredcloth_scan.c"
	if ( (*p) == 41 )
		goto tr34;
	goto tr32;
st46:
	if ( ++p == pe )
		goto _out46;
case 46:
	switch( (*p) ) {
		case 41: goto tr227;
		case 93: goto st5;
	}
	goto tr182;
st47:
	if ( ++p == pe )
		goto _out47;
case 47:
	switch( (*p) ) {
		case 41: goto tr228;
		case 125: goto st5;
	}
	goto tr203;
st48:
	if ( ++p == pe )
		goto _out48;
case 48:
	if ( (*p) == 93 )
		goto tr42;
	goto tr40;
st49:
	if ( ++p == pe )
		goto _out49;
case 49:
	switch( (*p) ) {
		case 93: goto tr229;
		case 125: goto st9;
	}
	goto tr214;
tr26:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st50;
tr142:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st50;
tr152:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st50;
tr162:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st50;
tr172:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st50;
tr237:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st50;
tr247:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st50;
tr257:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st50;
st50:
	if ( ++p == pe )
		goto _out50;
case 50:
#line 2018 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr102;
		case 35: goto tr30;
		case 40: goto tr230;
		case 41: goto tr231;
		case 45: goto tr232;
		case 60: goto tr233;
		case 61: goto tr234;
		case 62: goto tr235;
		case 91: goto tr236;
		case 94: goto tr237;
		case 123: goto tr238;
		case 126: goto tr239;
	}
	goto st3;
tr28:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st51;
tr144:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st51;
tr154:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st51;
tr164:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st51;
tr174:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st51;
tr239:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st51;
tr249:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st51;
tr259:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st51;
st51:
	if ( ++p == pe )
		goto _out51;
case 51:
#line 2074 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr113;
		case 35: goto tr30;
		case 40: goto tr240;
		case 41: goto tr241;
		case 45: goto tr242;
		case 60: goto tr243;
		case 61: goto tr244;
		case 62: goto tr245;
		case 91: goto tr246;
		case 94: goto tr247;
		case 123: goto tr248;
		case 126: goto tr249;
	}
	goto st3;
tr150:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st52;
st52:
	if ( ++p == pe )
		goto _out52;
case 52:
#line 2098 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr124;
		case 35: goto tr30;
		case 40: goto tr250;
		case 41: goto tr251;
		case 45: goto tr252;
		case 60: goto tr253;
		case 61: goto tr254;
		case 62: goto tr255;
		case 91: goto tr256;
		case 94: goto tr257;
		case 123: goto tr258;
		case 126: goto tr259;
	}
	goto st3;
tr5:
#line 36 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
	goto st53;
tr264:
#line 35 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
	goto st53;
st53:
	if ( ++p == pe )
		goto _out53;
case 53:
#line 2126 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr260;
		case 35: goto tr261;
		case 40: goto tr262;
		case 41: goto tr263;
		case 42: goto tr264;
		case 45: goto tr265;
		case 60: goto tr267;
		case 61: goto tr268;
		case 62: goto tr269;
		case 91: goto tr270;
		case 94: goto tr271;
		case 95: goto tr272;
		case 123: goto tr273;
		case 126: goto tr274;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr266;
	goto tr0;
tr7:
#line 36 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st54;
tr266:
#line 35 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st54;
st54:
	if ( ++p == pe )
		goto _out54;
case 54:
#line 2162 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr275;
		case 40: goto tr276;
		case 41: goto tr277;
		case 45: goto tr278;
		case 60: goto tr280;
		case 61: goto tr281;
		case 62: goto tr282;
		case 91: goto tr283;
		case 94: goto tr284;
		case 123: goto tr285;
		case 126: goto tr286;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto st54;
	goto tr0;
tr13:
#line 36 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
	goto st55;
tr272:
#line 35 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
	goto st55;
st55:
	if ( ++p == pe )
		goto _out55;
case 55:
#line 2191 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr287;
		case 40: goto tr288;
		case 41: goto tr289;
		case 45: goto tr290;
		case 60: goto tr291;
		case 61: goto tr292;
		case 62: goto tr293;
		case 91: goto tr294;
		case 94: goto tr295;
		case 123: goto tr296;
		case 126: goto tr297;
	}
	goto tr0;
tr2814:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
#line 48 "superredcloth_scan.rl"
	{ reg = NULL; }
#line 48 "superredcloth_scan.rl"
	{INLINE(table, table_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 83 "superredcloth_scan.rl"
	{act = 17;}
	goto st700;
st700:
	if ( ++p == pe )
		goto _out700;
case 700:
#line 2224 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto st57;
		case 40: goto tr1459;
		case 41: goto tr1481;
		case 45: goto tr1461;
		case 46: goto tr1462;
		case 60: goto tr1463;
		case 61: goto tr1464;
		case 62: goto tr1465;
		case 91: goto tr1466;
		case 94: goto tr1467;
		case 123: goto tr1468;
		case 126: goto tr1469;
	}
	goto tr308;
tr308:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st56;
st56:
	if ( ++p == pe )
		goto _out56;
case 56:
#line 2248 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr299;
		case 41: goto tr300;
	}
	goto st56;
tr299:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st57;
st57:
	if ( ++p == pe )
		goto _out57;
case 57:
#line 2262 "superredcloth_scan.c"
	if ( (*p) == 41 )
		goto tr0;
	goto tr301;
tr301:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st58;
st58:
	if ( ++p == pe )
		goto _out58;
case 58:
#line 2274 "superredcloth_scan.c"
	if ( (*p) == 41 )
		goto tr303;
	goto st58;
tr300:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st59;
tr303:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st59;
tr1455:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st59;
tr1458:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st59;
tr1577:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st59;
st59:
	if ( ++p == pe )
		goto _out59;
case 59:
#line 2304 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto st60;
		case 46: goto st61;
		case 91: goto st391;
		case 123: goto st393;
	}
	goto tr0;
st60:
	if ( ++p == pe )
		goto _out60;
case 60:
	switch( (*p) ) {
		case 35: goto st57;
		case 41: goto st59;
	}
	goto tr308;
tr1462:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
	goto st61;
tr1473:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st61;
tr1485:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st61;
tr1496:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st61;
tr1507:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st61;
tr1518:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st61;
tr1584:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st61;
tr1595:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st61;
tr1606:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st61;
tr2258:
#line 48 "superredcloth_scan.rl"
	{INLINE(table, table_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st61;
st61:
	if ( ++p == pe )
		goto _out61;
case 61:
#line 2369 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto st61;
		case 124: goto st62;
	}
	goto tr0;
tr2265:
#line 48 "superredcloth_scan.rl"
	{INLINE(table, table_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st62;
st62:
	if ( ++p == pe )
		goto _out62;
case 62:
#line 2385 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr0;
		case 10: goto tr0;
		case 40: goto tr313;
		case 41: goto tr314;
		case 45: goto tr315;
		case 46: goto tr316;
		case 47: goto tr317;
		case 60: goto tr318;
		case 61: goto tr319;
		case 62: goto tr320;
		case 91: goto tr321;
		case 92: goto tr322;
		case 94: goto tr323;
		case 95: goto tr324;
		case 123: goto tr325;
		case 126: goto tr326;
	}
	goto tr312;
tr1066:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st63;
tr312:
#line 45 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st63;
tr2836:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st63;
st63:
	if ( ++p == pe )
		goto _out63;
case 63:
#line 2427 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr328;
		case 10: goto st64;
		case 124: goto tr330;
	}
	goto st63;
st64:
	if ( ++p == pe )
		goto _out64;
case 64:
	switch( (*p) ) {
		case 10: goto st65;
		case 13: goto st259;
	}
	goto tr328;
st65:
	if ( ++p == pe )
		goto _out65;
case 65:
	if ( (*p) == 124 )
		goto tr330;
	goto tr328;
tr330:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
#line 6 "superredcloth_scan.rl"
	{ STORE(text); }
#line 43 "superredcloth_scan.rl"
	{PASS(table, text, td);}
#line 81 "superredcloth_scan.rl"
	{act = 16;}
	goto st701;
st701:
	if ( ++p == pe )
		goto _out701;
case 701:
#line 2464 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr2837;
		case 10: goto tr2838;
		case 13: goto tr2839;
		case 40: goto tr2840;
		case 41: goto tr2841;
		case 45: goto tr2842;
		case 46: goto tr2843;
		case 47: goto tr2844;
		case 60: goto tr2845;
		case 61: goto tr2846;
		case 62: goto tr2847;
		case 91: goto tr2848;
		case 92: goto tr2849;
		case 94: goto tr2850;
		case 95: goto tr2851;
		case 123: goto tr2852;
		case 126: goto tr2853;
	}
	goto tr2836;
tr2838:
#line 45 "superredcloth_scan.rl"
	{INLINE(table, tr_close);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st66;
st66:
	if ( ++p == pe )
		goto _out66;
case 66:
#line 2495 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr334;
		case 41: goto tr335;
		case 45: goto tr336;
		case 46: goto tr337;
		case 60: goto tr338;
		case 61: goto tr339;
		case 62: goto tr340;
		case 91: goto tr341;
		case 94: goto tr342;
		case 123: goto tr343;
		case 124: goto tr344;
		case 126: goto tr345;
	}
	goto tr333;
tr392:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st67;
tr403:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st67;
tr414:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st67;
tr425:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st67;
tr436:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st67;
tr450:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st67;
tr464:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st67;
tr475:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st67;
tr334:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st67;
st67:
	if ( ++p == pe )
		goto _out67;
case 67:
#line 2571 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto st69;
		case 40: goto tr348;
		case 41: goto tr349;
		case 45: goto tr350;
		case 46: goto tr351;
		case 60: goto tr352;
		case 61: goto tr353;
		case 62: goto tr354;
		case 91: goto tr355;
		case 94: goto tr356;
		case 123: goto tr357;
		case 126: goto tr358;
	}
	goto tr346;
tr346:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st68;
st68:
	if ( ++p == pe )
		goto _out68;
case 68:
#line 2595 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr360;
		case 41: goto tr361;
	}
	goto st68;
tr360:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st69;
st69:
	if ( ++p == pe )
		goto _out69;
case 69:
#line 2609 "superredcloth_scan.c"
	if ( (*p) == 41 )
		goto tr333;
	goto tr362;
tr362:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st70;
st70:
	if ( ++p == pe )
		goto _out70;
case 70:
#line 2621 "superredcloth_scan.c"
	if ( (*p) == 41 )
		goto tr364;
	goto st70;
tr361:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st71;
tr364:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st71;
tr449:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st71;
tr463:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st71;
tr998:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st71;
st71:
	if ( ++p == pe )
		goto _out71;
case 71:
#line 2651 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto st72;
		case 46: goto st73;
		case 91: goto st86;
		case 123: goto st89;
	}
	goto tr333;
st72:
	if ( ++p == pe )
		goto _out72;
case 72:
	switch( (*p) ) {
		case 35: goto st69;
		case 41: goto st71;
	}
	goto tr346;
tr351:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
	goto st73;
tr395:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st73;
tr406:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st73;
tr417:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st73;
tr428:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st73;
tr439:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st73;
tr453:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st73;
tr467:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st73;
tr478:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st73;
tr337:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st73;
st73:
	if ( ++p == pe )
		goto _out73;
case 73:
#line 2714 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto st73;
		case 124: goto st74;
	}
	goto tr333;
tr344:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st74;
st74:
	if ( ++p == pe )
		goto _out74;
case 74:
#line 2728 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr333;
		case 10: goto tr333;
		case 40: goto tr372;
		case 41: goto tr373;
		case 45: goto tr374;
		case 46: goto tr375;
		case 47: goto tr376;
		case 60: goto tr377;
		case 61: goto tr378;
		case 62: goto tr379;
		case 91: goto tr380;
		case 92: goto tr381;
		case 94: goto tr382;
		case 95: goto tr383;
		case 123: goto tr384;
		case 126: goto tr385;
	}
	goto tr371;
tr519:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st75;
tr371:
#line 45 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st75;
tr2854:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st75;
st75:
	if ( ++p == pe )
		goto _out75;
case 75:
#line 2770 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr333;
		case 10: goto st76;
		case 124: goto tr388;
	}
	goto st75;
st76:
	if ( ++p == pe )
		goto _out76;
case 76:
	switch( (*p) ) {
		case 10: goto st77;
		case 13: goto st80;
	}
	goto tr333;
st77:
	if ( ++p == pe )
		goto _out77;
case 77:
	if ( (*p) == 124 )
		goto tr388;
	goto tr333;
tr388:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
#line 6 "superredcloth_scan.rl"
	{ STORE(text); }
#line 43 "superredcloth_scan.rl"
	{PASS(table, text, td);}
	goto st702;
st702:
	if ( ++p == pe )
		goto _out702;
case 702:
#line 2805 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr2837;
		case 10: goto tr2838;
		case 13: goto tr2855;
		case 40: goto tr2856;
		case 41: goto tr2857;
		case 45: goto tr2858;
		case 46: goto tr2859;
		case 47: goto tr2860;
		case 60: goto tr2861;
		case 61: goto tr2862;
		case 62: goto tr2863;
		case 91: goto tr2864;
		case 92: goto tr2865;
		case 94: goto tr2866;
		case 95: goto tr2867;
		case 123: goto tr2868;
		case 126: goto tr2869;
	}
	goto tr2854;
tr2855:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 45 "superredcloth_scan.rl"
	{INLINE(table, tr_close);}
	goto st78;
st78:
	if ( ++p == pe )
		goto _out78;
case 78:
#line 2838 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr333;
		case 10: goto st79;
		case 124: goto tr388;
	}
	goto st75;
st79:
	if ( ++p == pe )
		goto _out79;
case 79:
	switch( (*p) ) {
		case 10: goto st77;
		case 13: goto st80;
		case 40: goto tr334;
		case 41: goto tr335;
		case 45: goto tr336;
		case 46: goto tr337;
		case 60: goto tr338;
		case 61: goto tr339;
		case 62: goto tr340;
		case 91: goto tr341;
		case 94: goto tr342;
		case 123: goto tr343;
		case 124: goto tr344;
		case 126: goto tr345;
	}
	goto tr333;
st80:
	if ( ++p == pe )
		goto _out80;
case 80:
	if ( (*p) == 10 )
		goto st77;
	goto tr333;
tr349:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st81;
tr906:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st81;
tr393:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st81;
tr404:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st81;
tr415:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st81;
tr426:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st81;
tr437:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st81;
tr451:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st81;
tr465:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st81;
tr476:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st81;
tr908:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st81;
tr918:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st81;
tr928:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st81;
tr938:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st81;
tr1003:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st81;
tr1013:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st81;
tr1023:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st81;
tr335:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st81;
st81:
	if ( ++p == pe )
		goto _out81;
case 81:
#line 3005 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr392;
		case 41: goto tr393;
		case 45: goto tr394;
		case 46: goto tr395;
		case 60: goto tr396;
		case 61: goto tr397;
		case 62: goto tr398;
		case 91: goto tr399;
		case 94: goto tr400;
		case 123: goto tr401;
		case 126: goto tr402;
	}
	goto tr333;
tr394:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st82;
tr405:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st82;
tr416:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st82;
tr427:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st82;
tr438:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st82;
tr452:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st82;
tr466:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st82;
tr477:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st82;
tr336:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st82;
st82:
	if ( ++p == pe )
		goto _out82;
case 82:
#line 3062 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr403;
		case 41: goto tr404;
		case 45: goto tr405;
		case 46: goto tr406;
		case 60: goto tr407;
		case 61: goto tr408;
		case 62: goto tr409;
		case 91: goto tr410;
		case 94: goto tr411;
		case 123: goto tr412;
		case 126: goto tr413;
	}
	goto tr333;
tr396:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st83;
tr407:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st83;
tr418:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st83;
tr429:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st83;
tr440:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st83;
tr454:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st83;
tr468:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st83;
tr479:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st83;
tr338:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st83;
st83:
	if ( ++p == pe )
		goto _out83;
case 83:
#line 3119 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr414;
		case 41: goto tr415;
		case 45: goto tr416;
		case 46: goto tr417;
		case 60: goto tr418;
		case 61: goto tr419;
		case 62: goto tr420;
		case 91: goto tr421;
		case 94: goto tr422;
		case 123: goto tr423;
		case 126: goto tr424;
	}
	goto tr333;
tr397:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st84;
tr408:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st84;
tr419:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st84;
tr430:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st84;
tr441:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st84;
tr455:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st84;
tr469:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st84;
tr480:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st84;
tr339:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st84;
st84:
	if ( ++p == pe )
		goto _out84;
case 84:
#line 3176 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr425;
		case 41: goto tr426;
		case 45: goto tr427;
		case 46: goto tr428;
		case 60: goto tr429;
		case 61: goto tr430;
		case 62: goto tr431;
		case 91: goto tr432;
		case 94: goto tr433;
		case 123: goto tr434;
		case 126: goto tr435;
	}
	goto tr333;
tr398:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st85;
tr409:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st85;
tr431:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st85;
tr442:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st85;
tr456:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st85;
tr470:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st85;
tr481:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st85;
tr340:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st85;
st85:
	if ( ++p == pe )
		goto _out85;
case 85:
#line 3229 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr436;
		case 41: goto tr437;
		case 45: goto tr438;
		case 46: goto tr439;
		case 60: goto tr440;
		case 61: goto tr441;
		case 62: goto tr442;
		case 91: goto tr443;
		case 94: goto tr444;
		case 123: goto tr445;
		case 126: goto tr446;
	}
	goto tr333;
tr399:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st86;
tr410:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st86;
tr421:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st86;
tr432:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st86;
tr443:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st86;
tr457:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st86;
tr471:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st86;
tr482:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st86;
tr341:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st86;
st86:
	if ( ++p == pe )
		goto _out86;
case 86:
#line 3286 "superredcloth_scan.c"
	if ( (*p) == 93 )
		goto tr333;
	goto tr447;
tr447:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st87;
st87:
	if ( ++p == pe )
		goto _out87;
case 87:
#line 3298 "superredcloth_scan.c"
	if ( (*p) == 93 )
		goto tr449;
	goto st87;
tr400:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st88;
tr411:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st88;
tr422:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st88;
tr433:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st88;
tr444:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st88;
tr458:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st88;
tr472:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st88;
tr483:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st88;
tr342:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st88;
st88:
	if ( ++p == pe )
		goto _out88;
case 88:
#line 3344 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr450;
		case 41: goto tr451;
		case 45: goto tr452;
		case 46: goto tr453;
		case 60: goto tr454;
		case 61: goto tr455;
		case 62: goto tr456;
		case 91: goto tr457;
		case 94: goto tr458;
		case 123: goto tr459;
		case 126: goto tr460;
	}
	goto tr333;
tr401:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st89;
tr412:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st89;
tr423:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st89;
tr434:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st89;
tr445:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st89;
tr459:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st89;
tr473:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st89;
tr484:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st89;
tr343:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st89;
st89:
	if ( ++p == pe )
		goto _out89;
case 89:
#line 3401 "superredcloth_scan.c"
	if ( (*p) == 125 )
		goto tr333;
	goto tr461;
tr461:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st90;
st90:
	if ( ++p == pe )
		goto _out90;
case 90:
#line 3413 "superredcloth_scan.c"
	if ( (*p) == 125 )
		goto tr463;
	goto st90;
tr402:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st91;
tr413:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st91;
tr424:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st91;
tr435:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st91;
tr446:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st91;
tr460:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st91;
tr474:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st91;
tr485:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st91;
tr345:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st91;
st91:
	if ( ++p == pe )
		goto _out91;
case 91:
#line 3459 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr464;
		case 41: goto tr465;
		case 45: goto tr466;
		case 46: goto tr467;
		case 60: goto tr468;
		case 61: goto tr469;
		case 62: goto tr470;
		case 91: goto tr471;
		case 94: goto tr472;
		case 123: goto tr473;
		case 126: goto tr474;
	}
	goto tr333;
tr420:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st92;
st92:
	if ( ++p == pe )
		goto _out92;
case 92:
#line 3482 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr475;
		case 41: goto tr476;
		case 45: goto tr477;
		case 46: goto tr478;
		case 60: goto tr479;
		case 61: goto tr480;
		case 62: goto tr481;
		case 91: goto tr482;
		case 94: goto tr483;
		case 123: goto tr484;
		case 126: goto tr485;
	}
	goto tr333;
tr559:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st93;
tr571:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st93;
tr583:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st93;
tr595:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st93;
tr607:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st93;
tr619:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st93;
tr631:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st93;
tr643:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st93;
tr372:
#line 45 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st93;
tr2856:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st93;
tr875:
#line 31 "superredcloth_scan.rl"
	{ STORE(rowspan) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st93;
tr891:
#line 30 "superredcloth_scan.rl"
	{ STORE(colspan) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st93;
st93:
	if ( ++p == pe )
		goto _out93;
case 93:
#line 3577 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr487;
		case 10: goto tr488;
		case 35: goto st110;
		case 40: goto tr490;
		case 41: goto tr491;
		case 45: goto tr492;
		case 46: goto tr493;
		case 60: goto tr494;
		case 61: goto tr495;
		case 62: goto tr496;
		case 91: goto tr497;
		case 94: goto tr498;
		case 95: goto tr499;
		case 123: goto tr500;
		case 124: goto tr388;
		case 126: goto tr501;
	}
	goto tr486;
tr486:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st94;
st94:
	if ( ++p == pe )
		goto _out94;
case 94:
#line 3605 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st95;
		case 10: goto st107;
		case 35: goto tr505;
		case 41: goto tr506;
		case 124: goto tr388;
	}
	goto st94;
tr487:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st95;
st95:
	if ( ++p == pe )
		goto _out95;
case 95:
#line 3622 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr507;
		case 41: goto tr508;
	}
	goto st95;
tr507:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st96;
st96:
	if ( ++p == pe )
		goto _out96;
case 96:
#line 3636 "superredcloth_scan.c"
	if ( (*p) == 41 )
		goto tr333;
	goto tr509;
tr509:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st97;
st97:
	if ( ++p == pe )
		goto _out97;
case 97:
#line 3648 "superredcloth_scan.c"
	if ( (*p) == 41 )
		goto tr511;
	goto st97;
tr508:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st98;
tr511:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st98;
tr523:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st98;
tr527:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st98;
tr763:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st98;
st98:
	if ( ++p == pe )
		goto _out98;
case 98:
#line 3678 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto st99;
		case 46: goto st100;
		case 91: goto st102;
		case 95: goto st104;
		case 123: goto st105;
	}
	goto tr333;
st99:
	if ( ++p == pe )
		goto _out99;
case 99:
	switch( (*p) ) {
		case 35: goto st96;
		case 41: goto st98;
	}
	goto tr487;
tr524:
#line 32 "superredcloth_scan.rl"
	{ ASET(th, true) }
	goto st100;
st100:
	if ( ++p == pe )
		goto _out100;
case 100:
#line 3704 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr333;
		case 10: goto tr333;
		case 32: goto tr520;
	}
	goto tr519;
tr520:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st101;
tr493:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
	goto st101;
tr562:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st101;
tr574:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st101;
tr586:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st101;
tr598:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st101;
tr610:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st101;
tr622:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st101;
tr634:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st101;
tr646:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st101;
tr375:
#line 45 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st101;
tr2859:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st101;
tr550:
#line 32 "superredcloth_scan.rl"
	{ ASET(th, true) }
	goto st101;
tr878:
#line 31 "superredcloth_scan.rl"
	{ STORE(rowspan) }
	goto st101;
tr894:
#line 30 "superredcloth_scan.rl"
	{ STORE(colspan) }
	goto st101;
st101:
	if ( ++p == pe )
		goto _out101;
case 101:
#line 3783 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr333;
		case 10: goto st76;
		case 32: goto tr520;
		case 124: goto tr388;
	}
	goto tr519;
st102:
	if ( ++p == pe )
		goto _out102;
case 102:
	if ( (*p) == 93 )
		goto tr333;
	goto tr521;
tr521:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st103;
st103:
	if ( ++p == pe )
		goto _out103;
case 103:
#line 3806 "superredcloth_scan.c"
	if ( (*p) == 93 )
		goto tr523;
	goto st103;
st104:
	if ( ++p == pe )
		goto _out104;
case 104:
	if ( (*p) == 46 )
		goto tr524;
	goto tr333;
st105:
	if ( ++p == pe )
		goto _out105;
case 105:
	if ( (*p) == 125 )
		goto tr333;
	goto tr525;
tr525:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st106;
st106:
	if ( ++p == pe )
		goto _out106;
case 106:
#line 3832 "superredcloth_scan.c"
	if ( (*p) == 125 )
		goto tr527;
	goto st106;
tr488:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st107;
st107:
	if ( ++p == pe )
		goto _out107;
case 107:
#line 3844 "superredcloth_scan.c"
	switch( (*p) ) {
		case 10: goto st108;
		case 13: goto st109;
		case 35: goto tr507;
		case 41: goto tr508;
	}
	goto st95;
st108:
	if ( ++p == pe )
		goto _out108;
case 108:
	switch( (*p) ) {
		case 35: goto tr507;
		case 41: goto tr508;
		case 124: goto tr388;
	}
	goto st95;
st109:
	if ( ++p == pe )
		goto _out109;
case 109:
	switch( (*p) ) {
		case 10: goto st108;
		case 35: goto tr507;
		case 41: goto tr508;
	}
	goto st95;
tr505:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st110;
st110:
	if ( ++p == pe )
		goto _out110;
case 110:
#line 3880 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr509;
		case 10: goto tr531;
		case 41: goto st75;
		case 124: goto tr388;
	}
	goto tr530;
tr530:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st111;
st111:
	if ( ++p == pe )
		goto _out111;
case 111:
#line 3896 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st97;
		case 10: goto st112;
		case 41: goto tr534;
		case 124: goto tr388;
	}
	goto st111;
tr531:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st112;
st112:
	if ( ++p == pe )
		goto _out112;
case 112:
#line 3912 "superredcloth_scan.c"
	switch( (*p) ) {
		case 10: goto st113;
		case 13: goto st114;
		case 41: goto tr511;
	}
	goto st97;
st113:
	if ( ++p == pe )
		goto _out113;
case 113:
	switch( (*p) ) {
		case 41: goto tr511;
		case 124: goto tr388;
	}
	goto st97;
st114:
	if ( ++p == pe )
		goto _out114;
case 114:
	switch( (*p) ) {
		case 10: goto st113;
		case 41: goto tr511;
	}
	goto st97;
tr506:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st115;
tr534:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st115;
tr547:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st115;
tr555:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st115;
tr835:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st115;
st115:
	if ( ++p == pe )
		goto _out115;
case 115:
#line 3963 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr333;
		case 10: goto st76;
		case 40: goto st116;
		case 46: goto st101;
		case 91: goto st117;
		case 95: goto st122;
		case 123: goto st123;
		case 124: goto tr388;
	}
	goto st75;
st116:
	if ( ++p == pe )
		goto _out116;
case 116:
	switch( (*p) ) {
		case 0: goto tr487;
		case 10: goto tr488;
		case 35: goto st110;
		case 41: goto st115;
		case 124: goto tr388;
	}
	goto tr486;
tr566:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st117;
tr578:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st117;
tr590:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st117;
tr602:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st117;
tr614:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st117;
tr626:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st117;
tr638:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st117;
tr650:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st117;
tr380:
#line 45 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st117;
tr2864:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st117;
tr884:
#line 31 "superredcloth_scan.rl"
	{ STORE(rowspan) }
	goto st117;
tr900:
#line 30 "superredcloth_scan.rl"
	{ STORE(colspan) }
	goto st117;
st117:
	if ( ++p == pe )
		goto _out117;
case 117:
#line 4047 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr521;
		case 10: goto tr544;
		case 93: goto st75;
		case 124: goto tr388;
	}
	goto tr543;
tr543:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st118;
st118:
	if ( ++p == pe )
		goto _out118;
case 118:
#line 4063 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st103;
		case 10: goto st119;
		case 93: goto tr547;
		case 124: goto tr388;
	}
	goto st118;
tr544:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st119;
st119:
	if ( ++p == pe )
		goto _out119;
case 119:
#line 4079 "superredcloth_scan.c"
	switch( (*p) ) {
		case 10: goto st120;
		case 13: goto st121;
		case 93: goto tr523;
	}
	goto st103;
st120:
	if ( ++p == pe )
		goto _out120;
case 120:
	switch( (*p) ) {
		case 93: goto tr523;
		case 124: goto tr388;
	}
	goto st103;
st121:
	if ( ++p == pe )
		goto _out121;
case 121:
	switch( (*p) ) {
		case 10: goto st120;
		case 93: goto tr523;
	}
	goto st103;
tr568:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st122;
tr580:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st122;
tr592:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st122;
tr604:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st122;
tr616:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st122;
tr628:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st122;
tr640:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st122;
tr652:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st122;
tr383:
#line 45 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st122;
tr2867:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st122;
tr887:
#line 31 "superredcloth_scan.rl"
	{ STORE(rowspan) }
	goto st122;
tr903:
#line 30 "superredcloth_scan.rl"
	{ STORE(colspan) }
	goto st122;
st122:
	if ( ++p == pe )
		goto _out122;
case 122:
#line 4164 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr333;
		case 10: goto st76;
		case 46: goto tr550;
		case 124: goto tr388;
	}
	goto st75;
tr569:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st123;
tr581:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st123;
tr593:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st123;
tr605:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st123;
tr617:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st123;
tr629:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st123;
tr641:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st123;
tr653:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st123;
tr384:
#line 45 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st123;
tr2868:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st123;
tr888:
#line 31 "superredcloth_scan.rl"
	{ STORE(rowspan) }
	goto st123;
tr904:
#line 30 "superredcloth_scan.rl"
	{ STORE(colspan) }
	goto st123;
st123:
	if ( ++p == pe )
		goto _out123;
case 123:
#line 4232 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr525;
		case 10: goto tr552;
		case 124: goto tr388;
		case 125: goto st75;
	}
	goto tr551;
tr551:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st124;
st124:
	if ( ++p == pe )
		goto _out124;
case 124:
#line 4248 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st106;
		case 10: goto st125;
		case 124: goto tr388;
		case 125: goto tr555;
	}
	goto st124;
tr552:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st125;
st125:
	if ( ++p == pe )
		goto _out125;
case 125:
#line 4264 "superredcloth_scan.c"
	switch( (*p) ) {
		case 10: goto st126;
		case 13: goto st127;
		case 125: goto tr527;
	}
	goto st106;
st126:
	if ( ++p == pe )
		goto _out126;
case 126:
	switch( (*p) ) {
		case 124: goto tr388;
		case 125: goto tr527;
	}
	goto st106;
st127:
	if ( ++p == pe )
		goto _out127;
case 127:
	switch( (*p) ) {
		case 10: goto st126;
		case 125: goto tr527;
	}
	goto st106;
tr490:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st128;
tr655:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st128;
tr666:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st128;
tr677:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st128;
tr688:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st128;
tr841:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st128;
tr852:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st128;
tr863:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st128;
st128:
	if ( ++p == pe )
		goto _out128;
case 128:
#line 4343 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr487;
		case 10: goto tr488;
		case 35: goto tr505;
		case 40: goto tr490;
		case 41: goto tr558;
		case 45: goto tr492;
		case 46: goto tr493;
		case 60: goto tr494;
		case 61: goto tr495;
		case 62: goto tr496;
		case 91: goto tr497;
		case 94: goto tr498;
		case 95: goto tr499;
		case 123: goto tr500;
		case 124: goto tr388;
		case 126: goto tr501;
	}
	goto tr486;
tr491:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st129;
tr558:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st129;
tr560:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st129;
tr572:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st129;
tr584:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st129;
tr596:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st129;
tr608:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st129;
tr620:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st129;
tr632:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st129;
tr644:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st129;
tr656:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st129;
tr667:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st129;
tr678:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st129;
tr689:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st129;
tr842:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st129;
tr853:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st129;
tr864:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st129;
tr373:
#line 45 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st129;
tr2857:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st129;
tr876:
#line 31 "superredcloth_scan.rl"
	{ STORE(rowspan) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st129;
tr892:
#line 30 "superredcloth_scan.rl"
	{ STORE(colspan) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st129;
st129:
	if ( ++p == pe )
		goto _out129;
case 129:
#line 4515 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr333;
		case 10: goto st76;
		case 40: goto tr559;
		case 41: goto tr560;
		case 45: goto tr561;
		case 46: goto tr562;
		case 60: goto tr563;
		case 61: goto tr564;
		case 62: goto tr565;
		case 91: goto tr566;
		case 94: goto tr567;
		case 95: goto tr568;
		case 123: goto tr569;
		case 124: goto tr388;
		case 126: goto tr570;
	}
	goto st75;
tr561:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st130;
tr573:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st130;
tr585:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st130;
tr597:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st130;
tr609:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st130;
tr621:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st130;
tr633:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st130;
tr645:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st130;
tr374:
#line 45 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st130;
tr2858:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st130;
tr877:
#line 31 "superredcloth_scan.rl"
	{ STORE(rowspan) }
	goto st130;
tr893:
#line 30 "superredcloth_scan.rl"
	{ STORE(colspan) }
	goto st130;
st130:
	if ( ++p == pe )
		goto _out130;
case 130:
#line 4594 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr333;
		case 10: goto st76;
		case 40: goto tr571;
		case 41: goto tr572;
		case 45: goto tr573;
		case 46: goto tr574;
		case 60: goto tr575;
		case 61: goto tr576;
		case 62: goto tr577;
		case 91: goto tr578;
		case 94: goto tr579;
		case 95: goto tr580;
		case 123: goto tr581;
		case 124: goto tr388;
		case 126: goto tr582;
	}
	goto st75;
tr563:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st131;
tr575:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st131;
tr587:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st131;
tr599:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st131;
tr611:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st131;
tr623:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st131;
tr635:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st131;
tr647:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st131;
tr377:
#line 45 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st131;
tr2861:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st131;
tr881:
#line 31 "superredcloth_scan.rl"
	{ STORE(rowspan) }
	goto st131;
tr897:
#line 30 "superredcloth_scan.rl"
	{ STORE(colspan) }
	goto st131;
st131:
	if ( ++p == pe )
		goto _out131;
case 131:
#line 4673 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr333;
		case 10: goto st76;
		case 40: goto tr583;
		case 41: goto tr584;
		case 45: goto tr585;
		case 46: goto tr586;
		case 60: goto tr587;
		case 61: goto tr588;
		case 62: goto tr589;
		case 91: goto tr590;
		case 94: goto tr591;
		case 95: goto tr592;
		case 123: goto tr593;
		case 124: goto tr388;
		case 126: goto tr594;
	}
	goto st75;
tr564:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st132;
tr576:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st132;
tr588:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st132;
tr600:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st132;
tr612:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st132;
tr624:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st132;
tr636:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st132;
tr648:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st132;
tr378:
#line 45 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st132;
tr2862:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st132;
tr882:
#line 31 "superredcloth_scan.rl"
	{ STORE(rowspan) }
	goto st132;
tr898:
#line 30 "superredcloth_scan.rl"
	{ STORE(colspan) }
	goto st132;
st132:
	if ( ++p == pe )
		goto _out132;
case 132:
#line 4752 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr333;
		case 10: goto st76;
		case 40: goto tr595;
		case 41: goto tr596;
		case 45: goto tr597;
		case 46: goto tr598;
		case 60: goto tr599;
		case 61: goto tr600;
		case 62: goto tr601;
		case 91: goto tr602;
		case 94: goto tr603;
		case 95: goto tr604;
		case 123: goto tr605;
		case 124: goto tr388;
		case 126: goto tr606;
	}
	goto st75;
tr565:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st133;
tr577:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st133;
tr601:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st133;
tr613:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st133;
tr625:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st133;
tr637:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st133;
tr649:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st133;
tr379:
#line 45 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st133;
tr2863:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st133;
tr883:
#line 31 "superredcloth_scan.rl"
	{ STORE(rowspan) }
	goto st133;
tr899:
#line 30 "superredcloth_scan.rl"
	{ STORE(colspan) }
	goto st133;
st133:
	if ( ++p == pe )
		goto _out133;
case 133:
#line 4827 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr333;
		case 10: goto st76;
		case 40: goto tr607;
		case 41: goto tr608;
		case 45: goto tr609;
		case 46: goto tr610;
		case 60: goto tr611;
		case 61: goto tr612;
		case 62: goto tr613;
		case 91: goto tr614;
		case 94: goto tr615;
		case 95: goto tr616;
		case 123: goto tr617;
		case 124: goto tr388;
		case 126: goto tr618;
	}
	goto st75;
tr567:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st134;
tr579:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st134;
tr591:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st134;
tr603:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st134;
tr615:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st134;
tr627:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st134;
tr639:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st134;
tr651:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st134;
tr382:
#line 45 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st134;
tr2866:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st134;
tr886:
#line 31 "superredcloth_scan.rl"
	{ STORE(rowspan) }
	goto st134;
tr902:
#line 30 "superredcloth_scan.rl"
	{ STORE(colspan) }
	goto st134;
st134:
	if ( ++p == pe )
		goto _out134;
case 134:
#line 4906 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr333;
		case 10: goto st76;
		case 40: goto tr619;
		case 41: goto tr620;
		case 45: goto tr621;
		case 46: goto tr622;
		case 60: goto tr623;
		case 61: goto tr624;
		case 62: goto tr625;
		case 91: goto tr626;
		case 94: goto tr627;
		case 95: goto tr628;
		case 123: goto tr629;
		case 124: goto tr388;
		case 126: goto tr630;
	}
	goto st75;
tr570:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st135;
tr582:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st135;
tr594:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st135;
tr606:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st135;
tr618:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st135;
tr630:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st135;
tr642:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st135;
tr654:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st135;
tr385:
#line 45 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st135;
tr2869:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st135;
tr889:
#line 31 "superredcloth_scan.rl"
	{ STORE(rowspan) }
	goto st135;
tr905:
#line 30 "superredcloth_scan.rl"
	{ STORE(colspan) }
	goto st135;
st135:
	if ( ++p == pe )
		goto _out135;
case 135:
#line 4985 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr333;
		case 10: goto st76;
		case 40: goto tr631;
		case 41: goto tr632;
		case 45: goto tr633;
		case 46: goto tr634;
		case 60: goto tr635;
		case 61: goto tr636;
		case 62: goto tr637;
		case 91: goto tr638;
		case 94: goto tr639;
		case 95: goto tr640;
		case 123: goto tr641;
		case 124: goto tr388;
		case 126: goto tr642;
	}
	goto st75;
tr589:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st136;
st136:
	if ( ++p == pe )
		goto _out136;
case 136:
#line 5012 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr333;
		case 10: goto st76;
		case 40: goto tr643;
		case 41: goto tr644;
		case 45: goto tr645;
		case 46: goto tr646;
		case 60: goto tr647;
		case 61: goto tr648;
		case 62: goto tr649;
		case 91: goto tr650;
		case 94: goto tr651;
		case 95: goto tr652;
		case 123: goto tr653;
		case 124: goto tr388;
		case 126: goto tr654;
	}
	goto st75;
tr492:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st137;
tr657:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st137;
tr668:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st137;
tr679:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st137;
tr690:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st137;
tr843:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st137;
tr854:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st137;
tr865:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st137;
st137:
	if ( ++p == pe )
		goto _out137;
case 137:
#line 5071 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st95;
		case 10: goto st107;
		case 35: goto tr505;
		case 40: goto tr655;
		case 41: goto tr656;
		case 45: goto tr657;
		case 46: goto tr574;
		case 60: goto tr658;
		case 61: goto tr659;
		case 62: goto tr660;
		case 91: goto tr661;
		case 94: goto tr662;
		case 95: goto tr663;
		case 123: goto tr664;
		case 124: goto tr388;
		case 126: goto tr665;
	}
	goto st94;
tr494:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st138;
tr658:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st138;
tr669:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st138;
tr680:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st138;
tr691:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st138;
tr844:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st138;
tr855:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st138;
tr866:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st138;
st138:
	if ( ++p == pe )
		goto _out138;
case 138:
#line 5131 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st95;
		case 10: goto st107;
		case 35: goto tr505;
		case 40: goto tr666;
		case 41: goto tr667;
		case 45: goto tr668;
		case 46: goto tr586;
		case 60: goto tr669;
		case 61: goto tr670;
		case 62: goto tr671;
		case 91: goto tr672;
		case 94: goto tr673;
		case 95: goto tr674;
		case 123: goto tr675;
		case 124: goto tr388;
		case 126: goto tr676;
	}
	goto st94;
tr495:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st139;
tr659:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st139;
tr670:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st139;
tr681:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st139;
tr692:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st139;
tr845:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st139;
tr856:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st139;
tr867:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st139;
st139:
	if ( ++p == pe )
		goto _out139;
case 139:
#line 5191 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st95;
		case 10: goto st107;
		case 35: goto tr505;
		case 40: goto tr677;
		case 41: goto tr678;
		case 45: goto tr679;
		case 46: goto tr598;
		case 60: goto tr680;
		case 61: goto tr681;
		case 62: goto tr682;
		case 91: goto tr683;
		case 94: goto tr684;
		case 95: goto tr685;
		case 123: goto tr686;
		case 124: goto tr388;
		case 126: goto tr687;
	}
	goto st94;
tr496:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st140;
tr660:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st140;
tr682:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st140;
tr693:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st140;
tr846:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st140;
tr857:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st140;
tr868:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st140;
st140:
	if ( ++p == pe )
		goto _out140;
case 140:
#line 5247 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st95;
		case 10: goto st107;
		case 35: goto tr505;
		case 40: goto tr688;
		case 41: goto tr689;
		case 45: goto tr690;
		case 46: goto tr610;
		case 60: goto tr691;
		case 61: goto tr692;
		case 62: goto tr693;
		case 91: goto tr694;
		case 94: goto tr695;
		case 95: goto tr696;
		case 123: goto tr697;
		case 124: goto tr388;
		case 126: goto tr698;
	}
	goto st94;
tr497:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st141;
tr661:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st141;
tr672:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st141;
tr683:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st141;
tr694:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st141;
tr847:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st141;
tr858:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st141;
tr869:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st141;
st141:
	if ( ++p == pe )
		goto _out141;
case 141:
#line 5307 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr700;
		case 10: goto tr701;
		case 35: goto tr702;
		case 41: goto tr703;
		case 93: goto st94;
		case 124: goto tr388;
	}
	goto tr699;
tr699:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st142;
st142:
	if ( ++p == pe )
		goto _out142;
case 142:
#line 5325 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st143;
		case 10: goto st172;
		case 35: goto tr707;
		case 41: goto tr708;
		case 93: goto tr709;
		case 124: goto tr388;
	}
	goto st142;
tr700:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st143;
st143:
	if ( ++p == pe )
		goto _out143;
case 143:
#line 5343 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr710;
		case 41: goto tr711;
		case 93: goto tr712;
	}
	goto st143;
tr710:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st144;
tr729:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st144;
st144:
	if ( ++p == pe )
		goto _out144;
case 144:
#line 5364 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto st103;
		case 93: goto tr714;
	}
	goto tr713;
tr713:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st145;
st145:
	if ( ++p == pe )
		goto _out145;
case 145:
#line 5378 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto tr716;
		case 93: goto tr717;
	}
	goto st145;
tr711:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st146;
tr716:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st146;
tr754:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st146;
tr730:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st146;
tr751:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st146;
tr764:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st146;
st146:
	if ( ++p == pe )
		goto _out146;
case 146:
#line 5418 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto st147;
		case 46: goto st100;
		case 91: goto st169;
		case 93: goto tr523;
		case 95: goto st170;
		case 123: goto st171;
	}
	goto st103;
st147:
	if ( ++p == pe )
		goto _out147;
case 147:
	switch( (*p) ) {
		case 35: goto st144;
		case 41: goto st146;
		case 93: goto tr724;
	}
	goto tr700;
tr712:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st148;
tr737:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st148;
tr724:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st148;
tr749:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st148;
st148:
	if ( ++p == pe )
		goto _out148;
case 148:
#line 5462 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr507;
		case 40: goto st149;
		case 41: goto tr508;
		case 46: goto st100;
		case 91: goto st150;
		case 95: goto st151;
		case 123: goto st152;
	}
	goto st95;
st149:
	if ( ++p == pe )
		goto _out149;
case 149:
	switch( (*p) ) {
		case 35: goto tr507;
		case 41: goto tr508;
	}
	goto tr487;
st150:
	if ( ++p == pe )
		goto _out150;
case 150:
	switch( (*p) ) {
		case 35: goto tr729;
		case 41: goto tr730;
		case 93: goto st95;
	}
	goto tr700;
st151:
	if ( ++p == pe )
		goto _out151;
case 151:
	switch( (*p) ) {
		case 35: goto tr507;
		case 41: goto tr508;
		case 46: goto tr524;
	}
	goto st95;
st152:
	if ( ++p == pe )
		goto _out152;
case 152:
	switch( (*p) ) {
		case 35: goto tr732;
		case 41: goto tr733;
		case 125: goto st95;
	}
	goto tr731;
tr731:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st153;
st153:
	if ( ++p == pe )
		goto _out153;
case 153:
#line 5520 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr735;
		case 41: goto tr736;
		case 125: goto tr737;
	}
	goto st153;
tr735:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st154;
tr732:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st154;
st154:
	if ( ++p == pe )
		goto _out154;
case 154:
#line 5541 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto st106;
		case 125: goto tr739;
	}
	goto tr738;
tr738:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st155;
st155:
	if ( ++p == pe )
		goto _out155;
case 155:
#line 5555 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto tr741;
		case 125: goto tr742;
	}
	goto st155;
tr736:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st156;
tr741:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st156;
tr753:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st156;
tr733:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st156;
tr766:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st156;
tr765:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st156;
st156:
	if ( ++p == pe )
		goto _out156;
case 156:
#line 5595 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto st157;
		case 46: goto st100;
		case 91: goto st158;
		case 95: goto st160;
		case 123: goto st161;
		case 125: goto tr527;
	}
	goto st106;
st157:
	if ( ++p == pe )
		goto _out157;
case 157:
	switch( (*p) ) {
		case 35: goto st154;
		case 41: goto st156;
		case 125: goto tr749;
	}
	goto tr731;
st158:
	if ( ++p == pe )
		goto _out158;
case 158:
	switch( (*p) ) {
		case 93: goto st106;
		case 125: goto tr751;
	}
	goto tr750;
tr750:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st159;
st159:
	if ( ++p == pe )
		goto _out159;
case 159:
#line 5632 "superredcloth_scan.c"
	switch( (*p) ) {
		case 93: goto tr753;
		case 125: goto tr754;
	}
	goto st159;
st160:
	if ( ++p == pe )
		goto _out160;
case 160:
	switch( (*p) ) {
		case 46: goto tr524;
		case 125: goto tr527;
	}
	goto st106;
st161:
	if ( ++p == pe )
		goto _out161;
case 161:
	if ( (*p) == 125 )
		goto tr527;
	goto tr525;
tr717:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st162;
tr742:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st162;
tr714:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st162;
tr739:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st162;
st162:
	if ( ++p == pe )
		goto _out162;
case 162:
#line 5678 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto st163;
		case 41: goto tr511;
		case 46: goto st100;
		case 91: goto st166;
		case 95: goto st167;
		case 123: goto st168;
	}
	goto st97;
st163:
	if ( ++p == pe )
		goto _out163;
case 163:
	switch( (*p) ) {
		case 35: goto st165;
		case 41: goto tr511;
	}
	goto tr759;
tr759:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st164;
st164:
	if ( ++p == pe )
		goto _out164;
case 164:
#line 5705 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr762;
		case 41: goto tr763;
	}
	goto st164;
tr762:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st165;
st165:
	if ( ++p == pe )
		goto _out165;
case 165:
#line 5719 "superredcloth_scan.c"
	if ( (*p) == 41 )
		goto tr511;
	goto tr509;
st166:
	if ( ++p == pe )
		goto _out166;
case 166:
	switch( (*p) ) {
		case 41: goto tr764;
		case 93: goto st97;
	}
	goto tr713;
st167:
	if ( ++p == pe )
		goto _out167;
case 167:
	switch( (*p) ) {
		case 41: goto tr511;
		case 46: goto tr524;
	}
	goto st97;
st168:
	if ( ++p == pe )
		goto _out168;
case 168:
	switch( (*p) ) {
		case 41: goto tr765;
		case 125: goto st97;
	}
	goto tr738;
st169:
	if ( ++p == pe )
		goto _out169;
case 169:
	if ( (*p) == 93 )
		goto tr523;
	goto tr521;
st170:
	if ( ++p == pe )
		goto _out170;
case 170:
	switch( (*p) ) {
		case 46: goto tr524;
		case 93: goto tr523;
	}
	goto st103;
st171:
	if ( ++p == pe )
		goto _out171;
case 171:
	switch( (*p) ) {
		case 93: goto tr766;
		case 125: goto st103;
	}
	goto tr750;
tr701:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st172;
st172:
	if ( ++p == pe )
		goto _out172;
case 172:
#line 5783 "superredcloth_scan.c"
	switch( (*p) ) {
		case 10: goto st173;
		case 13: goto st174;
		case 35: goto tr710;
		case 41: goto tr711;
		case 93: goto tr712;
	}
	goto st143;
st173:
	if ( ++p == pe )
		goto _out173;
case 173:
	switch( (*p) ) {
		case 35: goto tr710;
		case 41: goto tr711;
		case 93: goto tr712;
		case 124: goto tr388;
	}
	goto st143;
st174:
	if ( ++p == pe )
		goto _out174;
case 174:
	switch( (*p) ) {
		case 10: goto st173;
		case 35: goto tr710;
		case 41: goto tr711;
		case 93: goto tr712;
	}
	goto st143;
tr707:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st175;
tr702:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st175;
st175:
	if ( ++p == pe )
		goto _out175;
case 175:
#line 5828 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr713;
		case 10: goto tr770;
		case 41: goto st118;
		case 93: goto tr771;
		case 124: goto tr388;
	}
	goto tr769;
tr769:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st176;
st176:
	if ( ++p == pe )
		goto _out176;
case 176:
#line 5845 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st145;
		case 10: goto st177;
		case 41: goto tr774;
		case 93: goto tr775;
		case 124: goto tr388;
	}
	goto st176;
tr770:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st177;
st177:
	if ( ++p == pe )
		goto _out177;
case 177:
#line 5862 "superredcloth_scan.c"
	switch( (*p) ) {
		case 10: goto st178;
		case 13: goto st179;
		case 41: goto tr716;
		case 93: goto tr717;
	}
	goto st145;
st178:
	if ( ++p == pe )
		goto _out178;
case 178:
	switch( (*p) ) {
		case 41: goto tr716;
		case 93: goto tr717;
		case 124: goto tr388;
	}
	goto st145;
st179:
	if ( ++p == pe )
		goto _out179;
case 179:
	switch( (*p) ) {
		case 10: goto st178;
		case 41: goto tr716;
		case 93: goto tr717;
	}
	goto st145;
tr708:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st180;
tr774:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st180;
tr822:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st180;
tr703:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st180;
tr818:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st180;
tr838:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st180;
st180:
	if ( ++p == pe )
		goto _out180;
case 180:
#line 5924 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st103;
		case 10: goto st119;
		case 40: goto st181;
		case 46: goto st101;
		case 91: goto st214;
		case 93: goto tr547;
		case 95: goto st215;
		case 123: goto st216;
		case 124: goto tr388;
	}
	goto st118;
st181:
	if ( ++p == pe )
		goto _out181;
case 181:
	switch( (*p) ) {
		case 0: goto tr700;
		case 10: goto tr701;
		case 35: goto st175;
		case 41: goto st180;
		case 93: goto tr784;
		case 124: goto tr388;
	}
	goto tr699;
tr709:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st182;
tr797:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st182;
tr784:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st182;
tr815:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st182;
st182:
	if ( ++p == pe )
		goto _out182;
case 182:
#line 5974 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st95;
		case 10: goto st107;
		case 35: goto tr505;
		case 40: goto st183;
		case 41: goto tr506;
		case 46: goto st101;
		case 91: goto st141;
		case 95: goto st184;
		case 123: goto st185;
		case 124: goto tr388;
	}
	goto st94;
st183:
	if ( ++p == pe )
		goto _out183;
case 183:
	switch( (*p) ) {
		case 0: goto tr487;
		case 10: goto tr488;
		case 35: goto tr505;
		case 41: goto tr506;
		case 124: goto tr388;
	}
	goto tr486;
tr499:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st184;
tr663:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st184;
tr674:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st184;
tr685:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st184;
tr696:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st184;
tr849:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st184;
tr860:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st184;
tr871:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st184;
st184:
	if ( ++p == pe )
		goto _out184;
case 184:
#line 6040 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st95;
		case 10: goto st107;
		case 35: goto tr505;
		case 41: goto tr506;
		case 46: goto tr550;
		case 124: goto tr388;
	}
	goto st94;
tr500:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st185;
tr664:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st185;
tr675:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st185;
tr686:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st185;
tr697:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st185;
tr850:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st185;
tr861:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st185;
tr872:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st185;
st185:
	if ( ++p == pe )
		goto _out185;
case 185:
#line 6090 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr731;
		case 10: goto tr790;
		case 35: goto tr791;
		case 41: goto tr792;
		case 124: goto tr388;
		case 125: goto st94;
	}
	goto tr789;
tr789:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st186;
st186:
	if ( ++p == pe )
		goto _out186;
case 186:
#line 6108 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st153;
		case 10: goto st187;
		case 35: goto tr795;
		case 41: goto tr796;
		case 124: goto tr388;
		case 125: goto tr797;
	}
	goto st186;
tr790:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st187;
st187:
	if ( ++p == pe )
		goto _out187;
case 187:
#line 6126 "superredcloth_scan.c"
	switch( (*p) ) {
		case 10: goto st188;
		case 13: goto st189;
		case 35: goto tr735;
		case 41: goto tr736;
		case 125: goto tr737;
	}
	goto st153;
st188:
	if ( ++p == pe )
		goto _out188;
case 188:
	switch( (*p) ) {
		case 35: goto tr735;
		case 41: goto tr736;
		case 124: goto tr388;
		case 125: goto tr737;
	}
	goto st153;
st189:
	if ( ++p == pe )
		goto _out189;
case 189:
	switch( (*p) ) {
		case 10: goto st188;
		case 35: goto tr735;
		case 41: goto tr736;
		case 125: goto tr737;
	}
	goto st153;
tr795:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st190;
tr791:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st190;
st190:
	if ( ++p == pe )
		goto _out190;
case 190:
#line 6171 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr738;
		case 10: goto tr801;
		case 41: goto st124;
		case 124: goto tr388;
		case 125: goto tr802;
	}
	goto tr800;
tr800:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st191;
st191:
	if ( ++p == pe )
		goto _out191;
case 191:
#line 6188 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st155;
		case 10: goto st192;
		case 41: goto tr805;
		case 124: goto tr388;
		case 125: goto tr806;
	}
	goto st191;
tr801:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st192;
st192:
	if ( ++p == pe )
		goto _out192;
case 192:
#line 6205 "superredcloth_scan.c"
	switch( (*p) ) {
		case 10: goto st193;
		case 13: goto st194;
		case 41: goto tr741;
		case 125: goto tr742;
	}
	goto st155;
st193:
	if ( ++p == pe )
		goto _out193;
case 193:
	switch( (*p) ) {
		case 41: goto tr741;
		case 124: goto tr388;
		case 125: goto tr742;
	}
	goto st155;
st194:
	if ( ++p == pe )
		goto _out194;
case 194:
	switch( (*p) ) {
		case 10: goto st193;
		case 41: goto tr741;
		case 125: goto tr742;
	}
	goto st155;
tr796:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st195;
tr805:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st195;
tr821:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st195;
tr792:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st195;
tr840:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st195;
tr839:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st195;
st195:
	if ( ++p == pe )
		goto _out195;
case 195:
#line 6267 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st106;
		case 10: goto st125;
		case 40: goto st196;
		case 46: goto st101;
		case 91: goto st197;
		case 95: goto st202;
		case 123: goto st203;
		case 124: goto tr388;
		case 125: goto tr555;
	}
	goto st124;
st196:
	if ( ++p == pe )
		goto _out196;
case 196:
	switch( (*p) ) {
		case 0: goto tr731;
		case 10: goto tr790;
		case 35: goto st190;
		case 41: goto st195;
		case 124: goto tr388;
		case 125: goto tr815;
	}
	goto tr789;
st197:
	if ( ++p == pe )
		goto _out197;
case 197:
	switch( (*p) ) {
		case 0: goto tr750;
		case 10: goto tr817;
		case 93: goto st124;
		case 124: goto tr388;
		case 125: goto tr818;
	}
	goto tr816;
tr816:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st198;
st198:
	if ( ++p == pe )
		goto _out198;
case 198:
#line 6313 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st159;
		case 10: goto st199;
		case 93: goto tr821;
		case 124: goto tr388;
		case 125: goto tr822;
	}
	goto st198;
tr817:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st199;
st199:
	if ( ++p == pe )
		goto _out199;
case 199:
#line 6330 "superredcloth_scan.c"
	switch( (*p) ) {
		case 10: goto st200;
		case 13: goto st201;
		case 93: goto tr753;
		case 125: goto tr754;
	}
	goto st159;
st200:
	if ( ++p == pe )
		goto _out200;
case 200:
	switch( (*p) ) {
		case 93: goto tr753;
		case 124: goto tr388;
		case 125: goto tr754;
	}
	goto st159;
st201:
	if ( ++p == pe )
		goto _out201;
case 201:
	switch( (*p) ) {
		case 10: goto st200;
		case 93: goto tr753;
		case 125: goto tr754;
	}
	goto st159;
st202:
	if ( ++p == pe )
		goto _out202;
case 202:
	switch( (*p) ) {
		case 0: goto st106;
		case 10: goto st125;
		case 46: goto tr550;
		case 124: goto tr388;
		case 125: goto tr555;
	}
	goto st124;
st203:
	if ( ++p == pe )
		goto _out203;
case 203:
	switch( (*p) ) {
		case 0: goto tr525;
		case 10: goto tr552;
		case 124: goto tr388;
		case 125: goto tr555;
	}
	goto tr551;
tr775:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st204;
tr806:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st204;
tr771:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st204;
tr802:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st204;
st204:
	if ( ++p == pe )
		goto _out204;
case 204:
#line 6405 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st97;
		case 10: goto st112;
		case 40: goto st205;
		case 41: goto tr534;
		case 46: goto st101;
		case 91: goto st211;
		case 95: goto st212;
		case 123: goto st213;
		case 124: goto tr388;
	}
	goto st111;
st205:
	if ( ++p == pe )
		goto _out205;
case 205:
	switch( (*p) ) {
		case 0: goto tr759;
		case 10: goto tr830;
		case 35: goto st210;
		case 41: goto tr534;
		case 124: goto tr388;
	}
	goto tr829;
tr829:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st206;
st206:
	if ( ++p == pe )
		goto _out206;
case 206:
#line 6438 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st164;
		case 10: goto st207;
		case 35: goto tr834;
		case 41: goto tr835;
		case 124: goto tr388;
	}
	goto st206;
tr830:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st207;
st207:
	if ( ++p == pe )
		goto _out207;
case 207:
#line 6455 "superredcloth_scan.c"
	switch( (*p) ) {
		case 10: goto st208;
		case 13: goto st209;
		case 35: goto tr762;
		case 41: goto tr763;
	}
	goto st164;
st208:
	if ( ++p == pe )
		goto _out208;
case 208:
	switch( (*p) ) {
		case 35: goto tr762;
		case 41: goto tr763;
		case 124: goto tr388;
	}
	goto st164;
st209:
	if ( ++p == pe )
		goto _out209;
case 209:
	switch( (*p) ) {
		case 10: goto st208;
		case 35: goto tr762;
		case 41: goto tr763;
	}
	goto st164;
tr834:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st210;
st210:
	if ( ++p == pe )
		goto _out210;
case 210:
#line 6491 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr509;
		case 10: goto tr531;
		case 41: goto tr534;
		case 124: goto tr388;
	}
	goto tr530;
st211:
	if ( ++p == pe )
		goto _out211;
case 211:
	switch( (*p) ) {
		case 0: goto tr713;
		case 10: goto tr770;
		case 41: goto tr838;
		case 93: goto st111;
		case 124: goto tr388;
	}
	goto tr769;
st212:
	if ( ++p == pe )
		goto _out212;
case 212:
	switch( (*p) ) {
		case 0: goto st97;
		case 10: goto st112;
		case 41: goto tr534;
		case 46: goto tr550;
		case 124: goto tr388;
	}
	goto st111;
st213:
	if ( ++p == pe )
		goto _out213;
case 213:
	switch( (*p) ) {
		case 0: goto tr738;
		case 10: goto tr801;
		case 41: goto tr839;
		case 124: goto tr388;
		case 125: goto st111;
	}
	goto tr800;
st214:
	if ( ++p == pe )
		goto _out214;
case 214:
	switch( (*p) ) {
		case 0: goto tr521;
		case 10: goto tr544;
		case 93: goto tr547;
		case 124: goto tr388;
	}
	goto tr543;
st215:
	if ( ++p == pe )
		goto _out215;
case 215:
	switch( (*p) ) {
		case 0: goto st103;
		case 10: goto st119;
		case 46: goto tr550;
		case 93: goto tr547;
		case 124: goto tr388;
	}
	goto st118;
st216:
	if ( ++p == pe )
		goto _out216;
case 216:
	switch( (*p) ) {
		case 0: goto tr750;
		case 10: goto tr817;
		case 93: goto tr840;
		case 124: goto tr388;
		case 125: goto st118;
	}
	goto tr816;
tr498:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st217;
tr662:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st217;
tr673:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st217;
tr684:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st217;
tr695:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st217;
tr848:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st217;
tr859:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st217;
tr870:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st217;
st217:
	if ( ++p == pe )
		goto _out217;
case 217:
#line 6610 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st95;
		case 10: goto st107;
		case 35: goto tr505;
		case 40: goto tr841;
		case 41: goto tr842;
		case 45: goto tr843;
		case 46: goto tr622;
		case 60: goto tr844;
		case 61: goto tr845;
		case 62: goto tr846;
		case 91: goto tr847;
		case 94: goto tr848;
		case 95: goto tr849;
		case 123: goto tr850;
		case 124: goto tr388;
		case 126: goto tr851;
	}
	goto st94;
tr501:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st218;
tr665:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st218;
tr676:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st218;
tr687:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st218;
tr698:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st218;
tr851:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st218;
tr862:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st218;
tr873:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st218;
st218:
	if ( ++p == pe )
		goto _out218;
case 218:
#line 6670 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st95;
		case 10: goto st107;
		case 35: goto tr505;
		case 40: goto tr852;
		case 41: goto tr853;
		case 45: goto tr854;
		case 46: goto tr634;
		case 60: goto tr855;
		case 61: goto tr856;
		case 62: goto tr857;
		case 91: goto tr858;
		case 94: goto tr859;
		case 95: goto tr860;
		case 123: goto tr861;
		case 124: goto tr388;
		case 126: goto tr862;
	}
	goto st94;
tr671:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st219;
st219:
	if ( ++p == pe )
		goto _out219;
case 219:
#line 6698 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st95;
		case 10: goto st107;
		case 35: goto tr505;
		case 40: goto tr863;
		case 41: goto tr864;
		case 45: goto tr865;
		case 46: goto tr646;
		case 60: goto tr866;
		case 61: goto tr867;
		case 62: goto tr868;
		case 91: goto tr869;
		case 94: goto tr870;
		case 95: goto tr871;
		case 123: goto tr872;
		case 124: goto tr388;
		case 126: goto tr873;
	}
	goto st94;
tr376:
#line 45 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st220;
tr2860:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st220;
tr879:
#line 31 "superredcloth_scan.rl"
	{ STORE(rowspan) }
	goto st220;
tr895:
#line 30 "superredcloth_scan.rl"
	{ STORE(colspan) }
	goto st220;
st220:
	if ( ++p == pe )
		goto _out220;
case 220:
#line 6744 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr333;
		case 10: goto st76;
		case 124: goto tr388;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr874;
	goto st75;
tr874:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st221;
st221:
	if ( ++p == pe )
		goto _out221;
case 221:
#line 6761 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr333;
		case 10: goto st76;
		case 40: goto tr875;
		case 41: goto tr876;
		case 45: goto tr877;
		case 46: goto tr878;
		case 47: goto tr879;
		case 60: goto tr881;
		case 61: goto tr882;
		case 62: goto tr883;
		case 91: goto tr884;
		case 92: goto tr885;
		case 94: goto tr886;
		case 95: goto tr887;
		case 123: goto tr888;
		case 124: goto tr388;
		case 126: goto tr889;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto st221;
	goto st75;
tr381:
#line 45 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st222;
tr2865:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st222;
tr885:
#line 31 "superredcloth_scan.rl"
	{ STORE(rowspan) }
	goto st222;
tr901:
#line 30 "superredcloth_scan.rl"
	{ STORE(colspan) }
	goto st222;
st222:
	if ( ++p == pe )
		goto _out222;
case 222:
#line 6810 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr333;
		case 10: goto st76;
		case 124: goto tr388;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr890;
	goto st75;
tr890:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st223;
st223:
	if ( ++p == pe )
		goto _out223;
case 223:
#line 6827 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr333;
		case 10: goto st76;
		case 40: goto tr891;
		case 41: goto tr892;
		case 45: goto tr893;
		case 46: goto tr894;
		case 47: goto tr895;
		case 60: goto tr897;
		case 61: goto tr898;
		case 62: goto tr899;
		case 91: goto tr900;
		case 92: goto tr901;
		case 94: goto tr902;
		case 95: goto tr903;
		case 123: goto tr904;
		case 124: goto tr388;
		case 126: goto tr905;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto st223;
	goto st75;
tr348:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st224;
tr907:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st224;
tr917:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st224;
tr927:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st224;
tr937:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st224;
tr1002:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st224;
tr1012:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st224;
tr1022:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st224;
st224:
	if ( ++p == pe )
		goto _out224;
case 224:
#line 6904 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr360;
		case 40: goto tr348;
		case 41: goto tr906;
		case 45: goto tr350;
		case 46: goto tr351;
		case 60: goto tr352;
		case 61: goto tr353;
		case 62: goto tr354;
		case 91: goto tr355;
		case 94: goto tr356;
		case 123: goto tr357;
		case 126: goto tr358;
	}
	goto tr346;
tr350:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st225;
tr909:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st225;
tr919:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st225;
tr929:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st225;
tr939:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st225;
tr1004:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st225;
tr1014:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st225;
tr1024:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st225;
st225:
	if ( ++p == pe )
		goto _out225;
case 225:
#line 6960 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr360;
		case 40: goto tr907;
		case 41: goto tr908;
		case 45: goto tr909;
		case 46: goto tr406;
		case 60: goto tr910;
		case 61: goto tr911;
		case 62: goto tr912;
		case 91: goto tr913;
		case 94: goto tr914;
		case 123: goto tr915;
		case 126: goto tr916;
	}
	goto st68;
tr352:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st226;
tr910:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st226;
tr920:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st226;
tr930:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st226;
tr940:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st226;
tr1005:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st226;
tr1015:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st226;
tr1025:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st226;
st226:
	if ( ++p == pe )
		goto _out226;
case 226:
#line 7016 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr360;
		case 40: goto tr917;
		case 41: goto tr918;
		case 45: goto tr919;
		case 46: goto tr417;
		case 60: goto tr920;
		case 61: goto tr921;
		case 62: goto tr922;
		case 91: goto tr923;
		case 94: goto tr924;
		case 123: goto tr925;
		case 126: goto tr926;
	}
	goto st68;
tr353:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st227;
tr911:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st227;
tr921:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st227;
tr931:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st227;
tr941:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st227;
tr1006:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st227;
tr1016:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st227;
tr1026:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st227;
st227:
	if ( ++p == pe )
		goto _out227;
case 227:
#line 7072 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr360;
		case 40: goto tr927;
		case 41: goto tr928;
		case 45: goto tr929;
		case 46: goto tr428;
		case 60: goto tr930;
		case 61: goto tr931;
		case 62: goto tr932;
		case 91: goto tr933;
		case 94: goto tr934;
		case 123: goto tr935;
		case 126: goto tr936;
	}
	goto st68;
tr354:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st228;
tr912:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st228;
tr932:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st228;
tr942:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st228;
tr1007:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st228;
tr1017:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st228;
tr1027:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st228;
st228:
	if ( ++p == pe )
		goto _out228;
case 228:
#line 7124 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr360;
		case 40: goto tr937;
		case 41: goto tr938;
		case 45: goto tr939;
		case 46: goto tr439;
		case 60: goto tr940;
		case 61: goto tr941;
		case 62: goto tr942;
		case 91: goto tr943;
		case 94: goto tr944;
		case 123: goto tr945;
		case 126: goto tr946;
	}
	goto st68;
tr355:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st229;
tr913:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st229;
tr923:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st229;
tr933:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st229;
tr943:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st229;
tr1008:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st229;
tr1018:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st229;
tr1028:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st229;
st229:
	if ( ++p == pe )
		goto _out229;
case 229:
#line 7180 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr948;
		case 41: goto tr949;
		case 93: goto st68;
	}
	goto tr947;
tr947:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st230;
st230:
	if ( ++p == pe )
		goto _out230;
case 230:
#line 7195 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr951;
		case 41: goto tr952;
		case 93: goto tr953;
	}
	goto st230;
tr951:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st231;
tr948:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st231;
st231:
	if ( ++p == pe )
		goto _out231;
case 231:
#line 7216 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto st87;
		case 93: goto tr955;
	}
	goto tr954;
tr954:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st232;
st232:
	if ( ++p == pe )
		goto _out232;
case 232:
#line 7230 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto tr957;
		case 93: goto tr958;
	}
	goto st232;
tr952:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st233;
tr957:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st233;
tr990:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st233;
tr949:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st233;
tr987:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st233;
tr999:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st233;
st233:
	if ( ++p == pe )
		goto _out233;
case 233:
#line 7270 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto st234;
		case 46: goto st73;
		case 91: goto st252;
		case 93: goto tr449;
		case 123: goto st253;
	}
	goto st87;
st234:
	if ( ++p == pe )
		goto _out234;
case 234:
	switch( (*p) ) {
		case 35: goto st231;
		case 41: goto st233;
		case 93: goto tr964;
	}
	goto tr947;
tr953:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st235;
tr974:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st235;
tr964:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st235;
tr985:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st235;
st235:
	if ( ++p == pe )
		goto _out235;
case 235:
#line 7313 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr360;
		case 40: goto st236;
		case 41: goto tr361;
		case 46: goto st73;
		case 91: goto st229;
		case 123: goto st237;
	}
	goto st68;
st236:
	if ( ++p == pe )
		goto _out236;
case 236:
	switch( (*p) ) {
		case 35: goto tr360;
		case 41: goto tr361;
	}
	goto tr346;
tr357:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st237;
tr915:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st237;
tr925:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st237;
tr935:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st237;
tr945:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st237;
tr1010:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st237;
tr1020:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st237;
tr1030:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st237;
st237:
	if ( ++p == pe )
		goto _out237;
case 237:
#line 7372 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr969;
		case 41: goto tr970;
		case 125: goto st68;
	}
	goto tr968;
tr968:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st238;
st238:
	if ( ++p == pe )
		goto _out238;
case 238:
#line 7387 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr972;
		case 41: goto tr973;
		case 125: goto tr974;
	}
	goto st238;
tr972:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st239;
tr969:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st239;
st239:
	if ( ++p == pe )
		goto _out239;
case 239:
#line 7408 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto st90;
		case 125: goto tr976;
	}
	goto tr975;
tr975:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st240;
st240:
	if ( ++p == pe )
		goto _out240;
case 240:
#line 7422 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto tr978;
		case 125: goto tr979;
	}
	goto st240;
tr973:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st241;
tr978:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st241;
tr989:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st241;
tr970:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st241;
tr1001:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st241;
tr1000:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st241;
st241:
	if ( ++p == pe )
		goto _out241;
case 241:
#line 7462 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto st242;
		case 46: goto st73;
		case 91: goto st243;
		case 123: goto st245;
		case 125: goto tr463;
	}
	goto st90;
st242:
	if ( ++p == pe )
		goto _out242;
case 242:
	switch( (*p) ) {
		case 35: goto st239;
		case 41: goto st241;
		case 125: goto tr985;
	}
	goto tr968;
st243:
	if ( ++p == pe )
		goto _out243;
case 243:
	switch( (*p) ) {
		case 93: goto st90;
		case 125: goto tr987;
	}
	goto tr986;
tr986:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st244;
st244:
	if ( ++p == pe )
		goto _out244;
case 244:
#line 7498 "superredcloth_scan.c"
	switch( (*p) ) {
		case 93: goto tr989;
		case 125: goto tr990;
	}
	goto st244;
st245:
	if ( ++p == pe )
		goto _out245;
case 245:
	if ( (*p) == 125 )
		goto tr463;
	goto tr461;
tr958:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st246;
tr979:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st246;
tr955:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st246;
tr976:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st246;
st246:
	if ( ++p == pe )
		goto _out246;
case 246:
#line 7535 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto st247;
		case 41: goto tr364;
		case 46: goto st73;
		case 91: goto st250;
		case 123: goto st251;
	}
	goto st70;
st247:
	if ( ++p == pe )
		goto _out247;
case 247:
	switch( (*p) ) {
		case 35: goto st249;
		case 41: goto tr364;
	}
	goto tr994;
tr994:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st248;
st248:
	if ( ++p == pe )
		goto _out248;
case 248:
#line 7561 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr997;
		case 41: goto tr998;
	}
	goto st248;
tr997:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st249;
st249:
	if ( ++p == pe )
		goto _out249;
case 249:
#line 7575 "superredcloth_scan.c"
	if ( (*p) == 41 )
		goto tr364;
	goto tr362;
st250:
	if ( ++p == pe )
		goto _out250;
case 250:
	switch( (*p) ) {
		case 41: goto tr999;
		case 93: goto st70;
	}
	goto tr954;
st251:
	if ( ++p == pe )
		goto _out251;
case 251:
	switch( (*p) ) {
		case 41: goto tr1000;
		case 125: goto st70;
	}
	goto tr975;
st252:
	if ( ++p == pe )
		goto _out252;
case 252:
	if ( (*p) == 93 )
		goto tr449;
	goto tr447;
st253:
	if ( ++p == pe )
		goto _out253;
case 253:
	switch( (*p) ) {
		case 93: goto tr1001;
		case 125: goto st87;
	}
	goto tr986;
tr356:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st254;
tr914:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st254;
tr924:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st254;
tr934:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st254;
tr944:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st254;
tr1009:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st254;
tr1019:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st254;
tr1029:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st254;
st254:
	if ( ++p == pe )
		goto _out254;
case 254:
#line 7653 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr360;
		case 40: goto tr1002;
		case 41: goto tr1003;
		case 45: goto tr1004;
		case 46: goto tr453;
		case 60: goto tr1005;
		case 61: goto tr1006;
		case 62: goto tr1007;
		case 91: goto tr1008;
		case 94: goto tr1009;
		case 123: goto tr1010;
		case 126: goto tr1011;
	}
	goto st68;
tr358:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st255;
tr916:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st255;
tr926:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st255;
tr936:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st255;
tr946:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st255;
tr1011:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st255;
tr1021:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st255;
tr1031:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st255;
st255:
	if ( ++p == pe )
		goto _out255;
case 255:
#line 7709 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr360;
		case 40: goto tr1012;
		case 41: goto tr1013;
		case 45: goto tr1014;
		case 46: goto tr467;
		case 60: goto tr1015;
		case 61: goto tr1016;
		case 62: goto tr1017;
		case 91: goto tr1018;
		case 94: goto tr1019;
		case 123: goto tr1020;
		case 126: goto tr1021;
	}
	goto st68;
tr922:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st256;
st256:
	if ( ++p == pe )
		goto _out256;
case 256:
#line 7733 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr360;
		case 40: goto tr1022;
		case 41: goto tr1023;
		case 45: goto tr1024;
		case 46: goto tr478;
		case 60: goto tr1025;
		case 61: goto tr1026;
		case 62: goto tr1027;
		case 91: goto tr1028;
		case 94: goto tr1029;
		case 123: goto tr1030;
		case 126: goto tr1031;
	}
	goto st68;
tr2839:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 45 "superredcloth_scan.rl"
	{INLINE(table, tr_close);}
	goto st257;
st257:
	if ( ++p == pe )
		goto _out257;
case 257:
#line 7761 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr333;
		case 10: goto st258;
		case 124: goto tr330;
	}
	goto st63;
st258:
	if ( ++p == pe )
		goto _out258;
case 258:
	switch( (*p) ) {
		case 10: goto st65;
		case 13: goto st259;
		case 40: goto tr334;
		case 41: goto tr335;
		case 45: goto tr336;
		case 46: goto tr337;
		case 60: goto tr338;
		case 61: goto tr339;
		case 62: goto tr340;
		case 91: goto tr341;
		case 94: goto tr342;
		case 123: goto tr343;
		case 124: goto tr344;
		case 126: goto tr345;
	}
	goto tr333;
st259:
	if ( ++p == pe )
		goto _out259;
case 259:
	if ( (*p) == 10 )
		goto st65;
	goto tr328;
tr1106:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st260;
tr1118:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st260;
tr1130:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st260;
tr1142:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st260;
tr1154:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st260;
tr1166:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st260;
tr1178:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st260;
tr1190:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st260;
tr313:
#line 45 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st260;
tr2840:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st260;
tr1422:
#line 31 "superredcloth_scan.rl"
	{ STORE(rowspan) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st260;
tr1438:
#line 30 "superredcloth_scan.rl"
	{ STORE(colspan) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st260;
st260:
	if ( ++p == pe )
		goto _out260;
case 260:
#line 7876 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr1034;
		case 10: goto tr1035;
		case 35: goto st277;
		case 40: goto tr1037;
		case 41: goto tr1038;
		case 45: goto tr1039;
		case 46: goto tr1040;
		case 60: goto tr1041;
		case 61: goto tr1042;
		case 62: goto tr1043;
		case 91: goto tr1044;
		case 94: goto tr1045;
		case 95: goto tr1046;
		case 123: goto tr1047;
		case 124: goto tr330;
		case 126: goto tr1048;
	}
	goto tr1033;
tr1033:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st261;
st261:
	if ( ++p == pe )
		goto _out261;
case 261:
#line 7904 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st262;
		case 10: goto st274;
		case 35: goto tr1052;
		case 41: goto tr1053;
		case 124: goto tr330;
	}
	goto st261;
tr1034:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st262;
st262:
	if ( ++p == pe )
		goto _out262;
case 262:
#line 7921 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1054;
		case 41: goto tr1055;
	}
	goto st262;
tr1054:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st263;
st263:
	if ( ++p == pe )
		goto _out263;
case 263:
#line 7935 "superredcloth_scan.c"
	if ( (*p) == 41 )
		goto tr328;
	goto tr1056;
tr1056:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st264;
st264:
	if ( ++p == pe )
		goto _out264;
case 264:
#line 7947 "superredcloth_scan.c"
	if ( (*p) == 41 )
		goto tr1058;
	goto st264;
tr1055:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st265;
tr1058:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st265;
tr1070:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st265;
tr1074:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st265;
tr1310:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st265;
st265:
	if ( ++p == pe )
		goto _out265;
case 265:
#line 7977 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto st266;
		case 46: goto st267;
		case 91: goto st269;
		case 95: goto st271;
		case 123: goto st272;
	}
	goto tr328;
st266:
	if ( ++p == pe )
		goto _out266;
case 266:
	switch( (*p) ) {
		case 35: goto st263;
		case 41: goto st265;
	}
	goto tr1034;
tr1071:
#line 32 "superredcloth_scan.rl"
	{ ASET(th, true) }
	goto st267;
st267:
	if ( ++p == pe )
		goto _out267;
case 267:
#line 8003 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr328;
		case 10: goto tr328;
		case 32: goto tr1067;
	}
	goto tr1066;
tr1067:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st268;
tr1040:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
	goto st268;
tr1109:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st268;
tr1121:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st268;
tr1133:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st268;
tr1145:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st268;
tr1157:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st268;
tr1169:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st268;
tr1181:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st268;
tr1193:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st268;
tr316:
#line 45 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st268;
tr2843:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st268;
tr1097:
#line 32 "superredcloth_scan.rl"
	{ ASET(th, true) }
	goto st268;
tr1425:
#line 31 "superredcloth_scan.rl"
	{ STORE(rowspan) }
	goto st268;
tr1441:
#line 30 "superredcloth_scan.rl"
	{ STORE(colspan) }
	goto st268;
st268:
	if ( ++p == pe )
		goto _out268;
case 268:
#line 8082 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr328;
		case 10: goto st64;
		case 32: goto tr1067;
		case 124: goto tr330;
	}
	goto tr1066;
st269:
	if ( ++p == pe )
		goto _out269;
case 269:
	if ( (*p) == 93 )
		goto tr328;
	goto tr1068;
tr1068:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st270;
st270:
	if ( ++p == pe )
		goto _out270;
case 270:
#line 8105 "superredcloth_scan.c"
	if ( (*p) == 93 )
		goto tr1070;
	goto st270;
st271:
	if ( ++p == pe )
		goto _out271;
case 271:
	if ( (*p) == 46 )
		goto tr1071;
	goto tr328;
st272:
	if ( ++p == pe )
		goto _out272;
case 272:
	if ( (*p) == 125 )
		goto tr328;
	goto tr1072;
tr1072:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st273;
st273:
	if ( ++p == pe )
		goto _out273;
case 273:
#line 8131 "superredcloth_scan.c"
	if ( (*p) == 125 )
		goto tr1074;
	goto st273;
tr1035:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st274;
st274:
	if ( ++p == pe )
		goto _out274;
case 274:
#line 8143 "superredcloth_scan.c"
	switch( (*p) ) {
		case 10: goto st275;
		case 13: goto st276;
		case 35: goto tr1054;
		case 41: goto tr1055;
	}
	goto st262;
st275:
	if ( ++p == pe )
		goto _out275;
case 275:
	switch( (*p) ) {
		case 35: goto tr1054;
		case 41: goto tr1055;
		case 124: goto tr330;
	}
	goto st262;
st276:
	if ( ++p == pe )
		goto _out276;
case 276:
	switch( (*p) ) {
		case 10: goto st275;
		case 35: goto tr1054;
		case 41: goto tr1055;
	}
	goto st262;
tr1052:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st277;
st277:
	if ( ++p == pe )
		goto _out277;
case 277:
#line 8179 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr1056;
		case 10: goto tr1078;
		case 41: goto st63;
		case 124: goto tr330;
	}
	goto tr1077;
tr1077:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st278;
st278:
	if ( ++p == pe )
		goto _out278;
case 278:
#line 8195 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st264;
		case 10: goto st279;
		case 41: goto tr1081;
		case 124: goto tr330;
	}
	goto st278;
tr1078:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st279;
st279:
	if ( ++p == pe )
		goto _out279;
case 279:
#line 8211 "superredcloth_scan.c"
	switch( (*p) ) {
		case 10: goto st280;
		case 13: goto st281;
		case 41: goto tr1058;
	}
	goto st264;
st280:
	if ( ++p == pe )
		goto _out280;
case 280:
	switch( (*p) ) {
		case 41: goto tr1058;
		case 124: goto tr330;
	}
	goto st264;
st281:
	if ( ++p == pe )
		goto _out281;
case 281:
	switch( (*p) ) {
		case 10: goto st280;
		case 41: goto tr1058;
	}
	goto st264;
tr1053:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st282;
tr1081:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st282;
tr1094:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st282;
tr1102:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st282;
tr1382:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st282;
st282:
	if ( ++p == pe )
		goto _out282;
case 282:
#line 8262 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr328;
		case 10: goto st64;
		case 40: goto st283;
		case 46: goto st268;
		case 91: goto st284;
		case 95: goto st289;
		case 123: goto st290;
		case 124: goto tr330;
	}
	goto st63;
st283:
	if ( ++p == pe )
		goto _out283;
case 283:
	switch( (*p) ) {
		case 0: goto tr1034;
		case 10: goto tr1035;
		case 35: goto st277;
		case 41: goto st282;
		case 124: goto tr330;
	}
	goto tr1033;
tr1113:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st284;
tr1125:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st284;
tr1137:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st284;
tr1149:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st284;
tr1161:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st284;
tr1173:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st284;
tr1185:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st284;
tr1197:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st284;
tr321:
#line 45 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st284;
tr2848:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st284;
tr1431:
#line 31 "superredcloth_scan.rl"
	{ STORE(rowspan) }
	goto st284;
tr1447:
#line 30 "superredcloth_scan.rl"
	{ STORE(colspan) }
	goto st284;
st284:
	if ( ++p == pe )
		goto _out284;
case 284:
#line 8346 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr1068;
		case 10: goto tr1091;
		case 93: goto st63;
		case 124: goto tr330;
	}
	goto tr1090;
tr1090:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st285;
st285:
	if ( ++p == pe )
		goto _out285;
case 285:
#line 8362 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st270;
		case 10: goto st286;
		case 93: goto tr1094;
		case 124: goto tr330;
	}
	goto st285;
tr1091:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st286;
st286:
	if ( ++p == pe )
		goto _out286;
case 286:
#line 8378 "superredcloth_scan.c"
	switch( (*p) ) {
		case 10: goto st287;
		case 13: goto st288;
		case 93: goto tr1070;
	}
	goto st270;
st287:
	if ( ++p == pe )
		goto _out287;
case 287:
	switch( (*p) ) {
		case 93: goto tr1070;
		case 124: goto tr330;
	}
	goto st270;
st288:
	if ( ++p == pe )
		goto _out288;
case 288:
	switch( (*p) ) {
		case 10: goto st287;
		case 93: goto tr1070;
	}
	goto st270;
tr1115:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st289;
tr1127:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st289;
tr1139:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st289;
tr1151:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st289;
tr1163:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st289;
tr1175:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st289;
tr1187:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st289;
tr1199:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st289;
tr324:
#line 45 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st289;
tr2851:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st289;
tr1434:
#line 31 "superredcloth_scan.rl"
	{ STORE(rowspan) }
	goto st289;
tr1450:
#line 30 "superredcloth_scan.rl"
	{ STORE(colspan) }
	goto st289;
st289:
	if ( ++p == pe )
		goto _out289;
case 289:
#line 8463 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr328;
		case 10: goto st64;
		case 46: goto tr1097;
		case 124: goto tr330;
	}
	goto st63;
tr1116:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st290;
tr1128:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st290;
tr1140:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st290;
tr1152:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st290;
tr1164:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st290;
tr1176:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st290;
tr1188:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st290;
tr1200:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st290;
tr325:
#line 45 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st290;
tr2852:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st290;
tr1435:
#line 31 "superredcloth_scan.rl"
	{ STORE(rowspan) }
	goto st290;
tr1451:
#line 30 "superredcloth_scan.rl"
	{ STORE(colspan) }
	goto st290;
st290:
	if ( ++p == pe )
		goto _out290;
case 290:
#line 8531 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr1072;
		case 10: goto tr1099;
		case 124: goto tr330;
		case 125: goto st63;
	}
	goto tr1098;
tr1098:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st291;
st291:
	if ( ++p == pe )
		goto _out291;
case 291:
#line 8547 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st273;
		case 10: goto st292;
		case 124: goto tr330;
		case 125: goto tr1102;
	}
	goto st291;
tr1099:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st292;
st292:
	if ( ++p == pe )
		goto _out292;
case 292:
#line 8563 "superredcloth_scan.c"
	switch( (*p) ) {
		case 10: goto st293;
		case 13: goto st294;
		case 125: goto tr1074;
	}
	goto st273;
st293:
	if ( ++p == pe )
		goto _out293;
case 293:
	switch( (*p) ) {
		case 124: goto tr330;
		case 125: goto tr1074;
	}
	goto st273;
st294:
	if ( ++p == pe )
		goto _out294;
case 294:
	switch( (*p) ) {
		case 10: goto st293;
		case 125: goto tr1074;
	}
	goto st273;
tr1037:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st295;
tr1202:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st295;
tr1213:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st295;
tr1224:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st295;
tr1235:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st295;
tr1388:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st295;
tr1399:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st295;
tr1410:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st295;
st295:
	if ( ++p == pe )
		goto _out295;
case 295:
#line 8642 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr1034;
		case 10: goto tr1035;
		case 35: goto tr1052;
		case 40: goto tr1037;
		case 41: goto tr1105;
		case 45: goto tr1039;
		case 46: goto tr1040;
		case 60: goto tr1041;
		case 61: goto tr1042;
		case 62: goto tr1043;
		case 91: goto tr1044;
		case 94: goto tr1045;
		case 95: goto tr1046;
		case 123: goto tr1047;
		case 124: goto tr330;
		case 126: goto tr1048;
	}
	goto tr1033;
tr1038:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st296;
tr1105:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st296;
tr1107:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st296;
tr1119:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st296;
tr1131:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st296;
tr1143:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st296;
tr1155:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st296;
tr1167:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st296;
tr1179:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st296;
tr1191:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st296;
tr1203:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st296;
tr1214:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st296;
tr1225:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st296;
tr1236:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st296;
tr1389:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st296;
tr1400:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st296;
tr1411:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st296;
tr314:
#line 45 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st296;
tr2841:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st296;
tr1423:
#line 31 "superredcloth_scan.rl"
	{ STORE(rowspan) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st296;
tr1439:
#line 30 "superredcloth_scan.rl"
	{ STORE(colspan) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st296;
st296:
	if ( ++p == pe )
		goto _out296;
case 296:
#line 8814 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr328;
		case 10: goto st64;
		case 40: goto tr1106;
		case 41: goto tr1107;
		case 45: goto tr1108;
		case 46: goto tr1109;
		case 60: goto tr1110;
		case 61: goto tr1111;
		case 62: goto tr1112;
		case 91: goto tr1113;
		case 94: goto tr1114;
		case 95: goto tr1115;
		case 123: goto tr1116;
		case 124: goto tr330;
		case 126: goto tr1117;
	}
	goto st63;
tr1108:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st297;
tr1120:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st297;
tr1132:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st297;
tr1144:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st297;
tr1156:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st297;
tr1168:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st297;
tr1180:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st297;
tr1192:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st297;
tr315:
#line 45 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st297;
tr2842:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st297;
tr1424:
#line 31 "superredcloth_scan.rl"
	{ STORE(rowspan) }
	goto st297;
tr1440:
#line 30 "superredcloth_scan.rl"
	{ STORE(colspan) }
	goto st297;
st297:
	if ( ++p == pe )
		goto _out297;
case 297:
#line 8893 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr328;
		case 10: goto st64;
		case 40: goto tr1118;
		case 41: goto tr1119;
		case 45: goto tr1120;
		case 46: goto tr1121;
		case 60: goto tr1122;
		case 61: goto tr1123;
		case 62: goto tr1124;
		case 91: goto tr1125;
		case 94: goto tr1126;
		case 95: goto tr1127;
		case 123: goto tr1128;
		case 124: goto tr330;
		case 126: goto tr1129;
	}
	goto st63;
tr1110:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st298;
tr1122:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st298;
tr1134:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st298;
tr1146:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st298;
tr1158:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st298;
tr1170:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st298;
tr1182:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st298;
tr1194:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st298;
tr318:
#line 45 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st298;
tr2845:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st298;
tr1428:
#line 31 "superredcloth_scan.rl"
	{ STORE(rowspan) }
	goto st298;
tr1444:
#line 30 "superredcloth_scan.rl"
	{ STORE(colspan) }
	goto st298;
st298:
	if ( ++p == pe )
		goto _out298;
case 298:
#line 8972 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr328;
		case 10: goto st64;
		case 40: goto tr1130;
		case 41: goto tr1131;
		case 45: goto tr1132;
		case 46: goto tr1133;
		case 60: goto tr1134;
		case 61: goto tr1135;
		case 62: goto tr1136;
		case 91: goto tr1137;
		case 94: goto tr1138;
		case 95: goto tr1139;
		case 123: goto tr1140;
		case 124: goto tr330;
		case 126: goto tr1141;
	}
	goto st63;
tr1111:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st299;
tr1123:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st299;
tr1135:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st299;
tr1147:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st299;
tr1159:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st299;
tr1171:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st299;
tr1183:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st299;
tr1195:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st299;
tr319:
#line 45 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st299;
tr2846:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st299;
tr1429:
#line 31 "superredcloth_scan.rl"
	{ STORE(rowspan) }
	goto st299;
tr1445:
#line 30 "superredcloth_scan.rl"
	{ STORE(colspan) }
	goto st299;
st299:
	if ( ++p == pe )
		goto _out299;
case 299:
#line 9051 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr328;
		case 10: goto st64;
		case 40: goto tr1142;
		case 41: goto tr1143;
		case 45: goto tr1144;
		case 46: goto tr1145;
		case 60: goto tr1146;
		case 61: goto tr1147;
		case 62: goto tr1148;
		case 91: goto tr1149;
		case 94: goto tr1150;
		case 95: goto tr1151;
		case 123: goto tr1152;
		case 124: goto tr330;
		case 126: goto tr1153;
	}
	goto st63;
tr1112:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st300;
tr1124:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st300;
tr1148:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st300;
tr1160:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st300;
tr1172:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st300;
tr1184:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st300;
tr1196:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st300;
tr320:
#line 45 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st300;
tr2847:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st300;
tr1430:
#line 31 "superredcloth_scan.rl"
	{ STORE(rowspan) }
	goto st300;
tr1446:
#line 30 "superredcloth_scan.rl"
	{ STORE(colspan) }
	goto st300;
st300:
	if ( ++p == pe )
		goto _out300;
case 300:
#line 9126 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr328;
		case 10: goto st64;
		case 40: goto tr1154;
		case 41: goto tr1155;
		case 45: goto tr1156;
		case 46: goto tr1157;
		case 60: goto tr1158;
		case 61: goto tr1159;
		case 62: goto tr1160;
		case 91: goto tr1161;
		case 94: goto tr1162;
		case 95: goto tr1163;
		case 123: goto tr1164;
		case 124: goto tr330;
		case 126: goto tr1165;
	}
	goto st63;
tr1114:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st301;
tr1126:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st301;
tr1138:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st301;
tr1150:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st301;
tr1162:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st301;
tr1174:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st301;
tr1186:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st301;
tr1198:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st301;
tr323:
#line 45 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st301;
tr2850:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st301;
tr1433:
#line 31 "superredcloth_scan.rl"
	{ STORE(rowspan) }
	goto st301;
tr1449:
#line 30 "superredcloth_scan.rl"
	{ STORE(colspan) }
	goto st301;
st301:
	if ( ++p == pe )
		goto _out301;
case 301:
#line 9205 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr328;
		case 10: goto st64;
		case 40: goto tr1166;
		case 41: goto tr1167;
		case 45: goto tr1168;
		case 46: goto tr1169;
		case 60: goto tr1170;
		case 61: goto tr1171;
		case 62: goto tr1172;
		case 91: goto tr1173;
		case 94: goto tr1174;
		case 95: goto tr1175;
		case 123: goto tr1176;
		case 124: goto tr330;
		case 126: goto tr1177;
	}
	goto st63;
tr1117:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st302;
tr1129:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st302;
tr1141:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st302;
tr1153:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st302;
tr1165:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st302;
tr1177:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st302;
tr1189:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st302;
tr1201:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st302;
tr326:
#line 45 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st302;
tr2853:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st302;
tr1436:
#line 31 "superredcloth_scan.rl"
	{ STORE(rowspan) }
	goto st302;
tr1452:
#line 30 "superredcloth_scan.rl"
	{ STORE(colspan) }
	goto st302;
st302:
	if ( ++p == pe )
		goto _out302;
case 302:
#line 9284 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr328;
		case 10: goto st64;
		case 40: goto tr1178;
		case 41: goto tr1179;
		case 45: goto tr1180;
		case 46: goto tr1181;
		case 60: goto tr1182;
		case 61: goto tr1183;
		case 62: goto tr1184;
		case 91: goto tr1185;
		case 94: goto tr1186;
		case 95: goto tr1187;
		case 123: goto tr1188;
		case 124: goto tr330;
		case 126: goto tr1189;
	}
	goto st63;
tr1136:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st303;
st303:
	if ( ++p == pe )
		goto _out303;
case 303:
#line 9311 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr328;
		case 10: goto st64;
		case 40: goto tr1190;
		case 41: goto tr1191;
		case 45: goto tr1192;
		case 46: goto tr1193;
		case 60: goto tr1194;
		case 61: goto tr1195;
		case 62: goto tr1196;
		case 91: goto tr1197;
		case 94: goto tr1198;
		case 95: goto tr1199;
		case 123: goto tr1200;
		case 124: goto tr330;
		case 126: goto tr1201;
	}
	goto st63;
tr1039:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st304;
tr1204:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st304;
tr1215:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st304;
tr1226:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st304;
tr1237:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st304;
tr1390:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st304;
tr1401:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st304;
tr1412:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st304;
st304:
	if ( ++p == pe )
		goto _out304;
case 304:
#line 9370 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st262;
		case 10: goto st274;
		case 35: goto tr1052;
		case 40: goto tr1202;
		case 41: goto tr1203;
		case 45: goto tr1204;
		case 46: goto tr1121;
		case 60: goto tr1205;
		case 61: goto tr1206;
		case 62: goto tr1207;
		case 91: goto tr1208;
		case 94: goto tr1209;
		case 95: goto tr1210;
		case 123: goto tr1211;
		case 124: goto tr330;
		case 126: goto tr1212;
	}
	goto st261;
tr1041:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st305;
tr1205:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st305;
tr1216:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st305;
tr1227:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st305;
tr1238:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st305;
tr1391:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st305;
tr1402:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st305;
tr1413:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st305;
st305:
	if ( ++p == pe )
		goto _out305;
case 305:
#line 9430 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st262;
		case 10: goto st274;
		case 35: goto tr1052;
		case 40: goto tr1213;
		case 41: goto tr1214;
		case 45: goto tr1215;
		case 46: goto tr1133;
		case 60: goto tr1216;
		case 61: goto tr1217;
		case 62: goto tr1218;
		case 91: goto tr1219;
		case 94: goto tr1220;
		case 95: goto tr1221;
		case 123: goto tr1222;
		case 124: goto tr330;
		case 126: goto tr1223;
	}
	goto st261;
tr1042:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st306;
tr1206:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st306;
tr1217:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st306;
tr1228:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st306;
tr1239:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st306;
tr1392:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st306;
tr1403:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st306;
tr1414:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st306;
st306:
	if ( ++p == pe )
		goto _out306;
case 306:
#line 9490 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st262;
		case 10: goto st274;
		case 35: goto tr1052;
		case 40: goto tr1224;
		case 41: goto tr1225;
		case 45: goto tr1226;
		case 46: goto tr1145;
		case 60: goto tr1227;
		case 61: goto tr1228;
		case 62: goto tr1229;
		case 91: goto tr1230;
		case 94: goto tr1231;
		case 95: goto tr1232;
		case 123: goto tr1233;
		case 124: goto tr330;
		case 126: goto tr1234;
	}
	goto st261;
tr1043:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st307;
tr1207:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st307;
tr1229:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st307;
tr1240:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st307;
tr1393:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st307;
tr1404:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st307;
tr1415:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st307;
st307:
	if ( ++p == pe )
		goto _out307;
case 307:
#line 9546 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st262;
		case 10: goto st274;
		case 35: goto tr1052;
		case 40: goto tr1235;
		case 41: goto tr1236;
		case 45: goto tr1237;
		case 46: goto tr1157;
		case 60: goto tr1238;
		case 61: goto tr1239;
		case 62: goto tr1240;
		case 91: goto tr1241;
		case 94: goto tr1242;
		case 95: goto tr1243;
		case 123: goto tr1244;
		case 124: goto tr330;
		case 126: goto tr1245;
	}
	goto st261;
tr1044:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st308;
tr1208:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st308;
tr1219:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st308;
tr1230:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st308;
tr1241:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st308;
tr1394:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st308;
tr1405:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st308;
tr1416:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st308;
st308:
	if ( ++p == pe )
		goto _out308;
case 308:
#line 9606 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr1247;
		case 10: goto tr1248;
		case 35: goto tr1249;
		case 41: goto tr1250;
		case 93: goto st261;
		case 124: goto tr330;
	}
	goto tr1246;
tr1246:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st309;
st309:
	if ( ++p == pe )
		goto _out309;
case 309:
#line 9624 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st310;
		case 10: goto st339;
		case 35: goto tr1254;
		case 41: goto tr1255;
		case 93: goto tr1256;
		case 124: goto tr330;
	}
	goto st309;
tr1247:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st310;
st310:
	if ( ++p == pe )
		goto _out310;
case 310:
#line 9642 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1257;
		case 41: goto tr1258;
		case 93: goto tr1259;
	}
	goto st310;
tr1257:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st311;
tr1276:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st311;
st311:
	if ( ++p == pe )
		goto _out311;
case 311:
#line 9663 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto st270;
		case 93: goto tr1261;
	}
	goto tr1260;
tr1260:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st312;
st312:
	if ( ++p == pe )
		goto _out312;
case 312:
#line 9677 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto tr1263;
		case 93: goto tr1264;
	}
	goto st312;
tr1258:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st313;
tr1263:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st313;
tr1301:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st313;
tr1277:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st313;
tr1298:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st313;
tr1311:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st313;
st313:
	if ( ++p == pe )
		goto _out313;
case 313:
#line 9717 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto st314;
		case 46: goto st267;
		case 91: goto st336;
		case 93: goto tr1070;
		case 95: goto st337;
		case 123: goto st338;
	}
	goto st270;
st314:
	if ( ++p == pe )
		goto _out314;
case 314:
	switch( (*p) ) {
		case 35: goto st311;
		case 41: goto st313;
		case 93: goto tr1271;
	}
	goto tr1247;
tr1259:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st315;
tr1284:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st315;
tr1271:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st315;
tr1296:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st315;
st315:
	if ( ++p == pe )
		goto _out315;
case 315:
#line 9761 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1054;
		case 40: goto st316;
		case 41: goto tr1055;
		case 46: goto st267;
		case 91: goto st317;
		case 95: goto st318;
		case 123: goto st319;
	}
	goto st262;
st316:
	if ( ++p == pe )
		goto _out316;
case 316:
	switch( (*p) ) {
		case 35: goto tr1054;
		case 41: goto tr1055;
	}
	goto tr1034;
st317:
	if ( ++p == pe )
		goto _out317;
case 317:
	switch( (*p) ) {
		case 35: goto tr1276;
		case 41: goto tr1277;
		case 93: goto st262;
	}
	goto tr1247;
st318:
	if ( ++p == pe )
		goto _out318;
case 318:
	switch( (*p) ) {
		case 35: goto tr1054;
		case 41: goto tr1055;
		case 46: goto tr1071;
	}
	goto st262;
st319:
	if ( ++p == pe )
		goto _out319;
case 319:
	switch( (*p) ) {
		case 35: goto tr1279;
		case 41: goto tr1280;
		case 125: goto st262;
	}
	goto tr1278;
tr1278:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st320;
st320:
	if ( ++p == pe )
		goto _out320;
case 320:
#line 9819 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1282;
		case 41: goto tr1283;
		case 125: goto tr1284;
	}
	goto st320;
tr1282:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st321;
tr1279:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st321;
st321:
	if ( ++p == pe )
		goto _out321;
case 321:
#line 9840 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto st273;
		case 125: goto tr1286;
	}
	goto tr1285;
tr1285:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st322;
st322:
	if ( ++p == pe )
		goto _out322;
case 322:
#line 9854 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto tr1288;
		case 125: goto tr1289;
	}
	goto st322;
tr1283:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st323;
tr1288:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st323;
tr1300:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st323;
tr1280:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st323;
tr1313:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st323;
tr1312:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st323;
st323:
	if ( ++p == pe )
		goto _out323;
case 323:
#line 9894 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto st324;
		case 46: goto st267;
		case 91: goto st325;
		case 95: goto st327;
		case 123: goto st328;
		case 125: goto tr1074;
	}
	goto st273;
st324:
	if ( ++p == pe )
		goto _out324;
case 324:
	switch( (*p) ) {
		case 35: goto st321;
		case 41: goto st323;
		case 125: goto tr1296;
	}
	goto tr1278;
st325:
	if ( ++p == pe )
		goto _out325;
case 325:
	switch( (*p) ) {
		case 93: goto st273;
		case 125: goto tr1298;
	}
	goto tr1297;
tr1297:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st326;
st326:
	if ( ++p == pe )
		goto _out326;
case 326:
#line 9931 "superredcloth_scan.c"
	switch( (*p) ) {
		case 93: goto tr1300;
		case 125: goto tr1301;
	}
	goto st326;
st327:
	if ( ++p == pe )
		goto _out327;
case 327:
	switch( (*p) ) {
		case 46: goto tr1071;
		case 125: goto tr1074;
	}
	goto st273;
st328:
	if ( ++p == pe )
		goto _out328;
case 328:
	if ( (*p) == 125 )
		goto tr1074;
	goto tr1072;
tr1264:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st329;
tr1289:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st329;
tr1261:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st329;
tr1286:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st329;
st329:
	if ( ++p == pe )
		goto _out329;
case 329:
#line 9977 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto st330;
		case 41: goto tr1058;
		case 46: goto st267;
		case 91: goto st333;
		case 95: goto st334;
		case 123: goto st335;
	}
	goto st264;
st330:
	if ( ++p == pe )
		goto _out330;
case 330:
	switch( (*p) ) {
		case 35: goto st332;
		case 41: goto tr1058;
	}
	goto tr1306;
tr1306:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st331;
st331:
	if ( ++p == pe )
		goto _out331;
case 331:
#line 10004 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1309;
		case 41: goto tr1310;
	}
	goto st331;
tr1309:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st332;
st332:
	if ( ++p == pe )
		goto _out332;
case 332:
#line 10018 "superredcloth_scan.c"
	if ( (*p) == 41 )
		goto tr1058;
	goto tr1056;
st333:
	if ( ++p == pe )
		goto _out333;
case 333:
	switch( (*p) ) {
		case 41: goto tr1311;
		case 93: goto st264;
	}
	goto tr1260;
st334:
	if ( ++p == pe )
		goto _out334;
case 334:
	switch( (*p) ) {
		case 41: goto tr1058;
		case 46: goto tr1071;
	}
	goto st264;
st335:
	if ( ++p == pe )
		goto _out335;
case 335:
	switch( (*p) ) {
		case 41: goto tr1312;
		case 125: goto st264;
	}
	goto tr1285;
st336:
	if ( ++p == pe )
		goto _out336;
case 336:
	if ( (*p) == 93 )
		goto tr1070;
	goto tr1068;
st337:
	if ( ++p == pe )
		goto _out337;
case 337:
	switch( (*p) ) {
		case 46: goto tr1071;
		case 93: goto tr1070;
	}
	goto st270;
st338:
	if ( ++p == pe )
		goto _out338;
case 338:
	switch( (*p) ) {
		case 93: goto tr1313;
		case 125: goto st270;
	}
	goto tr1297;
tr1248:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st339;
st339:
	if ( ++p == pe )
		goto _out339;
case 339:
#line 10082 "superredcloth_scan.c"
	switch( (*p) ) {
		case 10: goto st340;
		case 13: goto st341;
		case 35: goto tr1257;
		case 41: goto tr1258;
		case 93: goto tr1259;
	}
	goto st310;
st340:
	if ( ++p == pe )
		goto _out340;
case 340:
	switch( (*p) ) {
		case 35: goto tr1257;
		case 41: goto tr1258;
		case 93: goto tr1259;
		case 124: goto tr330;
	}
	goto st310;
st341:
	if ( ++p == pe )
		goto _out341;
case 341:
	switch( (*p) ) {
		case 10: goto st340;
		case 35: goto tr1257;
		case 41: goto tr1258;
		case 93: goto tr1259;
	}
	goto st310;
tr1254:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st342;
tr1249:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st342;
st342:
	if ( ++p == pe )
		goto _out342;
case 342:
#line 10127 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr1260;
		case 10: goto tr1317;
		case 41: goto st285;
		case 93: goto tr1318;
		case 124: goto tr330;
	}
	goto tr1316;
tr1316:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st343;
st343:
	if ( ++p == pe )
		goto _out343;
case 343:
#line 10144 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st312;
		case 10: goto st344;
		case 41: goto tr1321;
		case 93: goto tr1322;
		case 124: goto tr330;
	}
	goto st343;
tr1317:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st344;
st344:
	if ( ++p == pe )
		goto _out344;
case 344:
#line 10161 "superredcloth_scan.c"
	switch( (*p) ) {
		case 10: goto st345;
		case 13: goto st346;
		case 41: goto tr1263;
		case 93: goto tr1264;
	}
	goto st312;
st345:
	if ( ++p == pe )
		goto _out345;
case 345:
	switch( (*p) ) {
		case 41: goto tr1263;
		case 93: goto tr1264;
		case 124: goto tr330;
	}
	goto st312;
st346:
	if ( ++p == pe )
		goto _out346;
case 346:
	switch( (*p) ) {
		case 10: goto st345;
		case 41: goto tr1263;
		case 93: goto tr1264;
	}
	goto st312;
tr1255:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st347;
tr1321:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st347;
tr1369:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st347;
tr1250:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st347;
tr1365:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st347;
tr1385:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st347;
st347:
	if ( ++p == pe )
		goto _out347;
case 347:
#line 10223 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st270;
		case 10: goto st286;
		case 40: goto st348;
		case 46: goto st268;
		case 91: goto st381;
		case 93: goto tr1094;
		case 95: goto st382;
		case 123: goto st383;
		case 124: goto tr330;
	}
	goto st285;
st348:
	if ( ++p == pe )
		goto _out348;
case 348:
	switch( (*p) ) {
		case 0: goto tr1247;
		case 10: goto tr1248;
		case 35: goto st342;
		case 41: goto st347;
		case 93: goto tr1331;
		case 124: goto tr330;
	}
	goto tr1246;
tr1256:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st349;
tr1344:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st349;
tr1331:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st349;
tr1362:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st349;
st349:
	if ( ++p == pe )
		goto _out349;
case 349:
#line 10273 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st262;
		case 10: goto st274;
		case 35: goto tr1052;
		case 40: goto st350;
		case 41: goto tr1053;
		case 46: goto st268;
		case 91: goto st308;
		case 95: goto st351;
		case 123: goto st352;
		case 124: goto tr330;
	}
	goto st261;
st350:
	if ( ++p == pe )
		goto _out350;
case 350:
	switch( (*p) ) {
		case 0: goto tr1034;
		case 10: goto tr1035;
		case 35: goto tr1052;
		case 41: goto tr1053;
		case 124: goto tr330;
	}
	goto tr1033;
tr1046:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st351;
tr1210:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st351;
tr1221:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st351;
tr1232:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st351;
tr1243:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st351;
tr1396:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st351;
tr1407:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st351;
tr1418:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st351;
st351:
	if ( ++p == pe )
		goto _out351;
case 351:
#line 10339 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st262;
		case 10: goto st274;
		case 35: goto tr1052;
		case 41: goto tr1053;
		case 46: goto tr1097;
		case 124: goto tr330;
	}
	goto st261;
tr1047:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st352;
tr1211:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st352;
tr1222:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st352;
tr1233:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st352;
tr1244:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st352;
tr1397:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st352;
tr1408:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st352;
tr1419:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st352;
st352:
	if ( ++p == pe )
		goto _out352;
case 352:
#line 10389 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr1278;
		case 10: goto tr1337;
		case 35: goto tr1338;
		case 41: goto tr1339;
		case 124: goto tr330;
		case 125: goto st261;
	}
	goto tr1336;
tr1336:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st353;
st353:
	if ( ++p == pe )
		goto _out353;
case 353:
#line 10407 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st320;
		case 10: goto st354;
		case 35: goto tr1342;
		case 41: goto tr1343;
		case 124: goto tr330;
		case 125: goto tr1344;
	}
	goto st353;
tr1337:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st354;
st354:
	if ( ++p == pe )
		goto _out354;
case 354:
#line 10425 "superredcloth_scan.c"
	switch( (*p) ) {
		case 10: goto st355;
		case 13: goto st356;
		case 35: goto tr1282;
		case 41: goto tr1283;
		case 125: goto tr1284;
	}
	goto st320;
st355:
	if ( ++p == pe )
		goto _out355;
case 355:
	switch( (*p) ) {
		case 35: goto tr1282;
		case 41: goto tr1283;
		case 124: goto tr330;
		case 125: goto tr1284;
	}
	goto st320;
st356:
	if ( ++p == pe )
		goto _out356;
case 356:
	switch( (*p) ) {
		case 10: goto st355;
		case 35: goto tr1282;
		case 41: goto tr1283;
		case 125: goto tr1284;
	}
	goto st320;
tr1342:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st357;
tr1338:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st357;
st357:
	if ( ++p == pe )
		goto _out357;
case 357:
#line 10470 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr1285;
		case 10: goto tr1348;
		case 41: goto st291;
		case 124: goto tr330;
		case 125: goto tr1349;
	}
	goto tr1347;
tr1347:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st358;
st358:
	if ( ++p == pe )
		goto _out358;
case 358:
#line 10487 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st322;
		case 10: goto st359;
		case 41: goto tr1352;
		case 124: goto tr330;
		case 125: goto tr1353;
	}
	goto st358;
tr1348:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st359;
st359:
	if ( ++p == pe )
		goto _out359;
case 359:
#line 10504 "superredcloth_scan.c"
	switch( (*p) ) {
		case 10: goto st360;
		case 13: goto st361;
		case 41: goto tr1288;
		case 125: goto tr1289;
	}
	goto st322;
st360:
	if ( ++p == pe )
		goto _out360;
case 360:
	switch( (*p) ) {
		case 41: goto tr1288;
		case 124: goto tr330;
		case 125: goto tr1289;
	}
	goto st322;
st361:
	if ( ++p == pe )
		goto _out361;
case 361:
	switch( (*p) ) {
		case 10: goto st360;
		case 41: goto tr1288;
		case 125: goto tr1289;
	}
	goto st322;
tr1343:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st362;
tr1352:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st362;
tr1368:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st362;
tr1339:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st362;
tr1387:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st362;
tr1386:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st362;
st362:
	if ( ++p == pe )
		goto _out362;
case 362:
#line 10566 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st273;
		case 10: goto st292;
		case 40: goto st363;
		case 46: goto st268;
		case 91: goto st364;
		case 95: goto st369;
		case 123: goto st370;
		case 124: goto tr330;
		case 125: goto tr1102;
	}
	goto st291;
st363:
	if ( ++p == pe )
		goto _out363;
case 363:
	switch( (*p) ) {
		case 0: goto tr1278;
		case 10: goto tr1337;
		case 35: goto st357;
		case 41: goto st362;
		case 124: goto tr330;
		case 125: goto tr1362;
	}
	goto tr1336;
st364:
	if ( ++p == pe )
		goto _out364;
case 364:
	switch( (*p) ) {
		case 0: goto tr1297;
		case 10: goto tr1364;
		case 93: goto st291;
		case 124: goto tr330;
		case 125: goto tr1365;
	}
	goto tr1363;
tr1363:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st365;
st365:
	if ( ++p == pe )
		goto _out365;
case 365:
#line 10612 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st326;
		case 10: goto st366;
		case 93: goto tr1368;
		case 124: goto tr330;
		case 125: goto tr1369;
	}
	goto st365;
tr1364:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st366;
st366:
	if ( ++p == pe )
		goto _out366;
case 366:
#line 10629 "superredcloth_scan.c"
	switch( (*p) ) {
		case 10: goto st367;
		case 13: goto st368;
		case 93: goto tr1300;
		case 125: goto tr1301;
	}
	goto st326;
st367:
	if ( ++p == pe )
		goto _out367;
case 367:
	switch( (*p) ) {
		case 93: goto tr1300;
		case 124: goto tr330;
		case 125: goto tr1301;
	}
	goto st326;
st368:
	if ( ++p == pe )
		goto _out368;
case 368:
	switch( (*p) ) {
		case 10: goto st367;
		case 93: goto tr1300;
		case 125: goto tr1301;
	}
	goto st326;
st369:
	if ( ++p == pe )
		goto _out369;
case 369:
	switch( (*p) ) {
		case 0: goto st273;
		case 10: goto st292;
		case 46: goto tr1097;
		case 124: goto tr330;
		case 125: goto tr1102;
	}
	goto st291;
st370:
	if ( ++p == pe )
		goto _out370;
case 370:
	switch( (*p) ) {
		case 0: goto tr1072;
		case 10: goto tr1099;
		case 124: goto tr330;
		case 125: goto tr1102;
	}
	goto tr1098;
tr1322:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st371;
tr1353:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st371;
tr1318:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st371;
tr1349:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st371;
st371:
	if ( ++p == pe )
		goto _out371;
case 371:
#line 10704 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st264;
		case 10: goto st279;
		case 40: goto st372;
		case 41: goto tr1081;
		case 46: goto st268;
		case 91: goto st378;
		case 95: goto st379;
		case 123: goto st380;
		case 124: goto tr330;
	}
	goto st278;
st372:
	if ( ++p == pe )
		goto _out372;
case 372:
	switch( (*p) ) {
		case 0: goto tr1306;
		case 10: goto tr1377;
		case 35: goto st377;
		case 41: goto tr1081;
		case 124: goto tr330;
	}
	goto tr1376;
tr1376:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st373;
st373:
	if ( ++p == pe )
		goto _out373;
case 373:
#line 10737 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st331;
		case 10: goto st374;
		case 35: goto tr1381;
		case 41: goto tr1382;
		case 124: goto tr330;
	}
	goto st373;
tr1377:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st374;
st374:
	if ( ++p == pe )
		goto _out374;
case 374:
#line 10754 "superredcloth_scan.c"
	switch( (*p) ) {
		case 10: goto st375;
		case 13: goto st376;
		case 35: goto tr1309;
		case 41: goto tr1310;
	}
	goto st331;
st375:
	if ( ++p == pe )
		goto _out375;
case 375:
	switch( (*p) ) {
		case 35: goto tr1309;
		case 41: goto tr1310;
		case 124: goto tr330;
	}
	goto st331;
st376:
	if ( ++p == pe )
		goto _out376;
case 376:
	switch( (*p) ) {
		case 10: goto st375;
		case 35: goto tr1309;
		case 41: goto tr1310;
	}
	goto st331;
tr1381:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st377;
st377:
	if ( ++p == pe )
		goto _out377;
case 377:
#line 10790 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr1056;
		case 10: goto tr1078;
		case 41: goto tr1081;
		case 124: goto tr330;
	}
	goto tr1077;
st378:
	if ( ++p == pe )
		goto _out378;
case 378:
	switch( (*p) ) {
		case 0: goto tr1260;
		case 10: goto tr1317;
		case 41: goto tr1385;
		case 93: goto st278;
		case 124: goto tr330;
	}
	goto tr1316;
st379:
	if ( ++p == pe )
		goto _out379;
case 379:
	switch( (*p) ) {
		case 0: goto st264;
		case 10: goto st279;
		case 41: goto tr1081;
		case 46: goto tr1097;
		case 124: goto tr330;
	}
	goto st278;
st380:
	if ( ++p == pe )
		goto _out380;
case 380:
	switch( (*p) ) {
		case 0: goto tr1285;
		case 10: goto tr1348;
		case 41: goto tr1386;
		case 124: goto tr330;
		case 125: goto st278;
	}
	goto tr1347;
st381:
	if ( ++p == pe )
		goto _out381;
case 381:
	switch( (*p) ) {
		case 0: goto tr1068;
		case 10: goto tr1091;
		case 93: goto tr1094;
		case 124: goto tr330;
	}
	goto tr1090;
st382:
	if ( ++p == pe )
		goto _out382;
case 382:
	switch( (*p) ) {
		case 0: goto st270;
		case 10: goto st286;
		case 46: goto tr1097;
		case 93: goto tr1094;
		case 124: goto tr330;
	}
	goto st285;
st383:
	if ( ++p == pe )
		goto _out383;
case 383:
	switch( (*p) ) {
		case 0: goto tr1297;
		case 10: goto tr1364;
		case 93: goto tr1387;
		case 124: goto tr330;
		case 125: goto st285;
	}
	goto tr1363;
tr1045:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st384;
tr1209:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st384;
tr1220:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st384;
tr1231:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st384;
tr1242:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st384;
tr1395:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st384;
tr1406:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st384;
tr1417:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st384;
st384:
	if ( ++p == pe )
		goto _out384;
case 384:
#line 10909 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st262;
		case 10: goto st274;
		case 35: goto tr1052;
		case 40: goto tr1388;
		case 41: goto tr1389;
		case 45: goto tr1390;
		case 46: goto tr1169;
		case 60: goto tr1391;
		case 61: goto tr1392;
		case 62: goto tr1393;
		case 91: goto tr1394;
		case 94: goto tr1395;
		case 95: goto tr1396;
		case 123: goto tr1397;
		case 124: goto tr330;
		case 126: goto tr1398;
	}
	goto st261;
tr1048:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st385;
tr1212:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st385;
tr1223:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st385;
tr1234:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st385;
tr1245:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st385;
tr1398:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st385;
tr1409:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st385;
tr1420:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st385;
st385:
	if ( ++p == pe )
		goto _out385;
case 385:
#line 10969 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st262;
		case 10: goto st274;
		case 35: goto tr1052;
		case 40: goto tr1399;
		case 41: goto tr1400;
		case 45: goto tr1401;
		case 46: goto tr1181;
		case 60: goto tr1402;
		case 61: goto tr1403;
		case 62: goto tr1404;
		case 91: goto tr1405;
		case 94: goto tr1406;
		case 95: goto tr1407;
		case 123: goto tr1408;
		case 124: goto tr330;
		case 126: goto tr1409;
	}
	goto st261;
tr1218:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st386;
st386:
	if ( ++p == pe )
		goto _out386;
case 386:
#line 10997 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st262;
		case 10: goto st274;
		case 35: goto tr1052;
		case 40: goto tr1410;
		case 41: goto tr1411;
		case 45: goto tr1412;
		case 46: goto tr1193;
		case 60: goto tr1413;
		case 61: goto tr1414;
		case 62: goto tr1415;
		case 91: goto tr1416;
		case 94: goto tr1417;
		case 95: goto tr1418;
		case 123: goto tr1419;
		case 124: goto tr330;
		case 126: goto tr1420;
	}
	goto st261;
tr317:
#line 45 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st387;
tr2844:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st387;
tr1426:
#line 31 "superredcloth_scan.rl"
	{ STORE(rowspan) }
	goto st387;
tr1442:
#line 30 "superredcloth_scan.rl"
	{ STORE(colspan) }
	goto st387;
st387:
	if ( ++p == pe )
		goto _out387;
case 387:
#line 11043 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr328;
		case 10: goto st64;
		case 124: goto tr330;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr1421;
	goto st63;
tr1421:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st388;
st388:
	if ( ++p == pe )
		goto _out388;
case 388:
#line 11060 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr328;
		case 10: goto st64;
		case 40: goto tr1422;
		case 41: goto tr1423;
		case 45: goto tr1424;
		case 46: goto tr1425;
		case 47: goto tr1426;
		case 60: goto tr1428;
		case 61: goto tr1429;
		case 62: goto tr1430;
		case 91: goto tr1431;
		case 92: goto tr1432;
		case 94: goto tr1433;
		case 95: goto tr1434;
		case 123: goto tr1435;
		case 124: goto tr330;
		case 126: goto tr1436;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto st388;
	goto st63;
tr322:
#line 45 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st389;
tr2849:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st389;
tr1432:
#line 31 "superredcloth_scan.rl"
	{ STORE(rowspan) }
	goto st389;
tr1448:
#line 30 "superredcloth_scan.rl"
	{ STORE(colspan) }
	goto st389;
st389:
	if ( ++p == pe )
		goto _out389;
case 389:
#line 11109 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr328;
		case 10: goto st64;
		case 124: goto tr330;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr1437;
	goto st63;
tr1437:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st390;
st390:
	if ( ++p == pe )
		goto _out390;
case 390:
#line 11126 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr328;
		case 10: goto st64;
		case 40: goto tr1438;
		case 41: goto tr1439;
		case 45: goto tr1440;
		case 46: goto tr1441;
		case 47: goto tr1442;
		case 60: goto tr1444;
		case 61: goto tr1445;
		case 62: goto tr1446;
		case 91: goto tr1447;
		case 92: goto tr1448;
		case 94: goto tr1449;
		case 95: goto tr1450;
		case 123: goto tr1451;
		case 124: goto tr330;
		case 126: goto tr1452;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto st390;
	goto st63;
tr1477:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st391;
tr1620:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st391;
tr1630:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st391;
tr1640:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st391;
tr1650:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st391;
tr1660:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st391;
tr1670:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st391;
tr1680:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st391;
tr2262:
#line 48 "superredcloth_scan.rl"
	{INLINE(table, table_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st391;
st391:
	if ( ++p == pe )
		goto _out391;
case 391:
#line 11193 "superredcloth_scan.c"
	if ( (*p) == 93 )
		goto tr0;
	goto tr1453;
tr1453:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st392;
st392:
	if ( ++p == pe )
		goto _out392;
case 392:
#line 11205 "superredcloth_scan.c"
	if ( (*p) == 93 )
		goto tr1455;
	goto st392;
tr1479:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st393;
tr1622:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st393;
tr1632:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st393;
tr1642:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st393;
tr1652:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st393;
tr1662:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st393;
tr1672:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st393;
tr1682:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st393;
tr2264:
#line 48 "superredcloth_scan.rl"
	{INLINE(table, table_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st393;
st393:
	if ( ++p == pe )
		goto _out393;
case 393:
#line 11253 "superredcloth_scan.c"
	if ( (*p) == 125 )
		goto tr0;
	goto tr1456;
tr1456:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st394;
st394:
	if ( ++p == pe )
		goto _out394;
case 394:
#line 11265 "superredcloth_scan.c"
	if ( (*p) == 125 )
		goto tr1458;
	goto st394;
tr1459:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st395;
tr1482:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st395;
tr1493:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st395;
tr1504:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st395;
tr1515:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st395;
tr1581:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st395;
tr1592:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st395;
tr1603:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st395;
st395:
	if ( ++p == pe )
		goto _out395;
case 395:
#line 11323 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr299;
		case 40: goto tr1459;
		case 41: goto tr1460;
		case 45: goto tr1461;
		case 46: goto tr1462;
		case 60: goto tr1463;
		case 61: goto tr1464;
		case 62: goto tr1465;
		case 91: goto tr1466;
		case 94: goto tr1467;
		case 123: goto tr1468;
		case 126: goto tr1469;
	}
	goto tr308;
tr1481:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st396;
tr1460:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st396;
tr1471:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st396;
tr1615:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st396;
tr1625:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st396;
tr1635:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st396;
tr1645:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st396;
tr1655:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st396;
tr1665:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st396;
tr1675:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st396;
tr1483:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st396;
tr1494:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st396;
tr1505:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st396;
tr1516:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st396;
tr1582:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st396;
tr1593:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st396;
tr1604:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st396;
tr2256:
#line 48 "superredcloth_scan.rl"
	{INLINE(table, table_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st396;
st396:
	if ( ++p == pe )
		goto _out396;
case 396:
#line 11473 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1470;
		case 41: goto tr1471;
		case 45: goto tr1472;
		case 46: goto tr1473;
		case 60: goto tr1474;
		case 61: goto tr1475;
		case 62: goto tr1476;
		case 91: goto tr1477;
		case 94: goto tr1478;
		case 123: goto tr1479;
		case 126: goto tr1480;
	}
	goto tr0;
tr1470:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st397;
tr1614:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st397;
tr1624:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st397;
tr1634:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st397;
tr1644:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st397;
tr1654:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st397;
tr1664:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st397;
tr1674:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st397;
tr2255:
#line 48 "superredcloth_scan.rl"
	{INLINE(table, table_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st397;
st397:
	if ( ++p == pe )
		goto _out397;
case 397:
#line 11550 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto st57;
		case 40: goto tr1459;
		case 41: goto tr1481;
		case 45: goto tr1461;
		case 46: goto tr1462;
		case 60: goto tr1463;
		case 61: goto tr1464;
		case 62: goto tr1465;
		case 91: goto tr1466;
		case 94: goto tr1467;
		case 123: goto tr1468;
		case 126: goto tr1469;
	}
	goto tr308;
tr1461:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st398;
tr1484:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st398;
tr1495:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st398;
tr1506:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st398;
tr1517:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st398;
tr1583:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st398;
tr1594:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st398;
tr1605:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st398;
st398:
	if ( ++p == pe )
		goto _out398;
case 398:
#line 11606 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr299;
		case 40: goto tr1482;
		case 41: goto tr1483;
		case 45: goto tr1484;
		case 46: goto tr1485;
		case 60: goto tr1486;
		case 61: goto tr1487;
		case 62: goto tr1488;
		case 91: goto tr1489;
		case 94: goto tr1490;
		case 123: goto tr1491;
		case 126: goto tr1492;
	}
	goto st56;
tr1463:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st399;
tr1486:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st399;
tr1497:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st399;
tr1508:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st399;
tr1519:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st399;
tr1585:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st399;
tr1596:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st399;
tr1607:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st399;
st399:
	if ( ++p == pe )
		goto _out399;
case 399:
#line 11662 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr299;
		case 40: goto tr1493;
		case 41: goto tr1494;
		case 45: goto tr1495;
		case 46: goto tr1496;
		case 60: goto tr1497;
		case 61: goto tr1498;
		case 62: goto tr1499;
		case 91: goto tr1500;
		case 94: goto tr1501;
		case 123: goto tr1502;
		case 126: goto tr1503;
	}
	goto st56;
tr1464:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st400;
tr1487:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st400;
tr1498:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st400;
tr1509:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st400;
tr1520:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st400;
tr1586:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st400;
tr1597:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st400;
tr1608:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st400;
st400:
	if ( ++p == pe )
		goto _out400;
case 400:
#line 11718 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr299;
		case 40: goto tr1504;
		case 41: goto tr1505;
		case 45: goto tr1506;
		case 46: goto tr1507;
		case 60: goto tr1508;
		case 61: goto tr1509;
		case 62: goto tr1510;
		case 91: goto tr1511;
		case 94: goto tr1512;
		case 123: goto tr1513;
		case 126: goto tr1514;
	}
	goto st56;
tr1465:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st401;
tr1488:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st401;
tr1510:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st401;
tr1521:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st401;
tr1587:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st401;
tr1598:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st401;
tr1609:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st401;
st401:
	if ( ++p == pe )
		goto _out401;
case 401:
#line 11770 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr299;
		case 40: goto tr1515;
		case 41: goto tr1516;
		case 45: goto tr1517;
		case 46: goto tr1518;
		case 60: goto tr1519;
		case 61: goto tr1520;
		case 62: goto tr1521;
		case 91: goto tr1522;
		case 94: goto tr1523;
		case 123: goto tr1524;
		case 126: goto tr1525;
	}
	goto st56;
tr1466:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st402;
tr1489:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st402;
tr1500:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st402;
tr1511:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st402;
tr1522:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st402;
tr1588:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st402;
tr1599:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st402;
tr1610:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st402;
st402:
	if ( ++p == pe )
		goto _out402;
case 402:
#line 11826 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1527;
		case 41: goto tr1528;
		case 93: goto st56;
	}
	goto tr1526;
tr1526:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st403;
st403:
	if ( ++p == pe )
		goto _out403;
case 403:
#line 11841 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1530;
		case 41: goto tr1531;
		case 93: goto tr1532;
	}
	goto st403;
tr1530:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st404;
tr1527:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st404;
st404:
	if ( ++p == pe )
		goto _out404;
case 404:
#line 11862 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto st392;
		case 93: goto tr1534;
	}
	goto tr1533;
tr1533:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st405;
st405:
	if ( ++p == pe )
		goto _out405;
case 405:
#line 11876 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto tr1536;
		case 93: goto tr1537;
	}
	goto st405;
tr1531:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st406;
tr1536:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st406;
tr1569:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st406;
tr1528:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st406;
tr1566:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st406;
tr1578:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st406;
st406:
	if ( ++p == pe )
		goto _out406;
case 406:
#line 11916 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto st407;
		case 46: goto st61;
		case 91: goto st425;
		case 93: goto tr1455;
		case 123: goto st426;
	}
	goto st392;
st407:
	if ( ++p == pe )
		goto _out407;
case 407:
	switch( (*p) ) {
		case 35: goto st404;
		case 41: goto st406;
		case 93: goto tr1543;
	}
	goto tr1526;
tr1532:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st408;
tr1553:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st408;
tr1543:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st408;
tr1564:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st408;
st408:
	if ( ++p == pe )
		goto _out408;
case 408:
#line 11959 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr299;
		case 40: goto st409;
		case 41: goto tr300;
		case 46: goto st61;
		case 91: goto st402;
		case 123: goto st410;
	}
	goto st56;
st409:
	if ( ++p == pe )
		goto _out409;
case 409:
	switch( (*p) ) {
		case 35: goto tr299;
		case 41: goto tr300;
	}
	goto tr308;
tr1468:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st410;
tr1491:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st410;
tr1502:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st410;
tr1513:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st410;
tr1524:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st410;
tr1590:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st410;
tr1601:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st410;
tr1612:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st410;
st410:
	if ( ++p == pe )
		goto _out410;
case 410:
#line 12018 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1548;
		case 41: goto tr1549;
		case 125: goto st56;
	}
	goto tr1547;
tr1547:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st411;
st411:
	if ( ++p == pe )
		goto _out411;
case 411:
#line 12033 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1551;
		case 41: goto tr1552;
		case 125: goto tr1553;
	}
	goto st411;
tr1551:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st412;
tr1548:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st412;
st412:
	if ( ++p == pe )
		goto _out412;
case 412:
#line 12054 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto st394;
		case 125: goto tr1555;
	}
	goto tr1554;
tr1554:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st413;
st413:
	if ( ++p == pe )
		goto _out413;
case 413:
#line 12068 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto tr1557;
		case 125: goto tr1558;
	}
	goto st413;
tr1552:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st414;
tr1557:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st414;
tr1568:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st414;
tr1549:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st414;
tr1580:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st414;
tr1579:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st414;
st414:
	if ( ++p == pe )
		goto _out414;
case 414:
#line 12108 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto st415;
		case 46: goto st61;
		case 91: goto st416;
		case 123: goto st418;
		case 125: goto tr1458;
	}
	goto st394;
st415:
	if ( ++p == pe )
		goto _out415;
case 415:
	switch( (*p) ) {
		case 35: goto st412;
		case 41: goto st414;
		case 125: goto tr1564;
	}
	goto tr1547;
st416:
	if ( ++p == pe )
		goto _out416;
case 416:
	switch( (*p) ) {
		case 93: goto st394;
		case 125: goto tr1566;
	}
	goto tr1565;
tr1565:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st417;
st417:
	if ( ++p == pe )
		goto _out417;
case 417:
#line 12144 "superredcloth_scan.c"
	switch( (*p) ) {
		case 93: goto tr1568;
		case 125: goto tr1569;
	}
	goto st417;
st418:
	if ( ++p == pe )
		goto _out418;
case 418:
	if ( (*p) == 125 )
		goto tr1458;
	goto tr1456;
tr1537:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st419;
tr1558:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st419;
tr1534:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st419;
tr1555:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st419;
st419:
	if ( ++p == pe )
		goto _out419;
case 419:
#line 12181 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto st420;
		case 41: goto tr303;
		case 46: goto st61;
		case 91: goto st423;
		case 123: goto st424;
	}
	goto st58;
st420:
	if ( ++p == pe )
		goto _out420;
case 420:
	switch( (*p) ) {
		case 35: goto st422;
		case 41: goto tr303;
	}
	goto tr1573;
tr1573:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st421;
st421:
	if ( ++p == pe )
		goto _out421;
case 421:
#line 12207 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1576;
		case 41: goto tr1577;
	}
	goto st421;
tr1576:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st422;
st422:
	if ( ++p == pe )
		goto _out422;
case 422:
#line 12221 "superredcloth_scan.c"
	if ( (*p) == 41 )
		goto tr303;
	goto tr301;
st423:
	if ( ++p == pe )
		goto _out423;
case 423:
	switch( (*p) ) {
		case 41: goto tr1578;
		case 93: goto st58;
	}
	goto tr1533;
st424:
	if ( ++p == pe )
		goto _out424;
case 424:
	switch( (*p) ) {
		case 41: goto tr1579;
		case 125: goto st58;
	}
	goto tr1554;
st425:
	if ( ++p == pe )
		goto _out425;
case 425:
	if ( (*p) == 93 )
		goto tr1455;
	goto tr1453;
st426:
	if ( ++p == pe )
		goto _out426;
case 426:
	switch( (*p) ) {
		case 93: goto tr1580;
		case 125: goto st392;
	}
	goto tr1565;
tr1467:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st427;
tr1490:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st427;
tr1501:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st427;
tr1512:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st427;
tr1523:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st427;
tr1589:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st427;
tr1600:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st427;
tr1611:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st427;
st427:
	if ( ++p == pe )
		goto _out427;
case 427:
#line 12299 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr299;
		case 40: goto tr1581;
		case 41: goto tr1582;
		case 45: goto tr1583;
		case 46: goto tr1584;
		case 60: goto tr1585;
		case 61: goto tr1586;
		case 62: goto tr1587;
		case 91: goto tr1588;
		case 94: goto tr1589;
		case 123: goto tr1590;
		case 126: goto tr1591;
	}
	goto st56;
tr1469:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st428;
tr1492:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st428;
tr1503:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st428;
tr1514:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st428;
tr1525:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st428;
tr1591:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st428;
tr1602:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st428;
tr1613:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st428;
st428:
	if ( ++p == pe )
		goto _out428;
case 428:
#line 12355 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr299;
		case 40: goto tr1592;
		case 41: goto tr1593;
		case 45: goto tr1594;
		case 46: goto tr1595;
		case 60: goto tr1596;
		case 61: goto tr1597;
		case 62: goto tr1598;
		case 91: goto tr1599;
		case 94: goto tr1600;
		case 123: goto tr1601;
		case 126: goto tr1602;
	}
	goto st56;
tr1499:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st429;
st429:
	if ( ++p == pe )
		goto _out429;
case 429:
#line 12379 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr299;
		case 40: goto tr1603;
		case 41: goto tr1604;
		case 45: goto tr1605;
		case 46: goto tr1606;
		case 60: goto tr1607;
		case 61: goto tr1608;
		case 62: goto tr1609;
		case 91: goto tr1610;
		case 94: goto tr1611;
		case 123: goto tr1612;
		case 126: goto tr1613;
	}
	goto st56;
tr1472:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st430;
tr1616:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st430;
tr1626:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st430;
tr1636:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st430;
tr1646:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st430;
tr1656:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st430;
tr1666:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st430;
tr1676:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st430;
tr2257:
#line 48 "superredcloth_scan.rl"
	{INLINE(table, table_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st430;
st430:
	if ( ++p == pe )
		goto _out430;
case 430:
#line 12439 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1614;
		case 41: goto tr1615;
		case 45: goto tr1616;
		case 46: goto tr1485;
		case 60: goto tr1617;
		case 61: goto tr1618;
		case 62: goto tr1619;
		case 91: goto tr1620;
		case 94: goto tr1621;
		case 123: goto tr1622;
		case 126: goto tr1623;
	}
	goto tr0;
tr1474:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st431;
tr1617:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st431;
tr1627:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st431;
tr1637:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st431;
tr1647:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st431;
tr1657:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st431;
tr1667:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st431;
tr1677:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st431;
tr2259:
#line 48 "superredcloth_scan.rl"
	{INLINE(table, table_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st431;
st431:
	if ( ++p == pe )
		goto _out431;
case 431:
#line 12498 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1624;
		case 41: goto tr1625;
		case 45: goto tr1626;
		case 46: goto tr1496;
		case 60: goto tr1627;
		case 61: goto tr1628;
		case 62: goto tr1629;
		case 91: goto tr1630;
		case 94: goto tr1631;
		case 123: goto tr1632;
		case 126: goto tr1633;
	}
	goto tr0;
tr1475:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st432;
tr1618:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st432;
tr1628:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st432;
tr1638:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st432;
tr1648:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st432;
tr1658:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st432;
tr1668:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st432;
tr1678:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st432;
tr2260:
#line 48 "superredcloth_scan.rl"
	{INLINE(table, table_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st432;
st432:
	if ( ++p == pe )
		goto _out432;
case 432:
#line 12557 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1634;
		case 41: goto tr1635;
		case 45: goto tr1636;
		case 46: goto tr1507;
		case 60: goto tr1637;
		case 61: goto tr1638;
		case 62: goto tr1639;
		case 91: goto tr1640;
		case 94: goto tr1641;
		case 123: goto tr1642;
		case 126: goto tr1643;
	}
	goto tr0;
tr1476:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st433;
tr1619:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st433;
tr1639:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st433;
tr1649:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st433;
tr1659:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st433;
tr1669:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st433;
tr1679:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st433;
tr2261:
#line 48 "superredcloth_scan.rl"
	{INLINE(table, table_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st433;
st433:
	if ( ++p == pe )
		goto _out433;
case 433:
#line 12612 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1644;
		case 41: goto tr1645;
		case 45: goto tr1646;
		case 46: goto tr1518;
		case 60: goto tr1647;
		case 61: goto tr1648;
		case 62: goto tr1649;
		case 91: goto tr1650;
		case 94: goto tr1651;
		case 123: goto tr1652;
		case 126: goto tr1653;
	}
	goto tr0;
tr1478:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st434;
tr1621:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st434;
tr1631:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st434;
tr1641:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st434;
tr1651:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st434;
tr1661:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st434;
tr1671:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st434;
tr1681:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st434;
tr2263:
#line 48 "superredcloth_scan.rl"
	{INLINE(table, table_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st434;
st434:
	if ( ++p == pe )
		goto _out434;
case 434:
#line 12671 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1654;
		case 41: goto tr1655;
		case 45: goto tr1656;
		case 46: goto tr1584;
		case 60: goto tr1657;
		case 61: goto tr1658;
		case 62: goto tr1659;
		case 91: goto tr1660;
		case 94: goto tr1661;
		case 123: goto tr1662;
		case 126: goto tr1663;
	}
	goto tr0;
tr1480:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st435;
tr1623:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st435;
tr1633:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st435;
tr1643:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st435;
tr1653:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st435;
tr1663:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st435;
tr1673:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st435;
tr1683:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st435;
tr2266:
#line 48 "superredcloth_scan.rl"
	{INLINE(table, table_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st435;
st435:
	if ( ++p == pe )
		goto _out435;
case 435:
#line 12730 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1664;
		case 41: goto tr1665;
		case 45: goto tr1666;
		case 46: goto tr1595;
		case 60: goto tr1667;
		case 61: goto tr1668;
		case 62: goto tr1669;
		case 91: goto tr1670;
		case 94: goto tr1671;
		case 123: goto tr1672;
		case 126: goto tr1673;
	}
	goto tr0;
tr1629:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st436;
st436:
	if ( ++p == pe )
		goto _out436;
case 436:
#line 12753 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1674;
		case 41: goto tr1675;
		case 45: goto tr1676;
		case 46: goto tr1606;
		case 60: goto tr1677;
		case 61: goto tr1678;
		case 62: goto tr1679;
		case 91: goto tr1680;
		case 94: goto tr1681;
		case 123: goto tr1682;
		case 126: goto tr1683;
	}
	goto tr0;
tr2815:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
#line 48 "superredcloth_scan.rl"
	{ reg = NULL; }
#line 48 "superredcloth_scan.rl"
	{INLINE(table, table_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 83 "superredcloth_scan.rl"
	{act = 17;}
	goto st703;
st703:
	if ( ++p == pe )
		goto _out703;
case 703:
#line 12786 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1470;
		case 41: goto tr1471;
		case 45: goto tr1472;
		case 46: goto tr1473;
		case 60: goto tr1474;
		case 61: goto tr1475;
		case 62: goto tr1476;
		case 91: goto tr1477;
		case 94: goto tr1478;
		case 123: goto tr1479;
		case 126: goto tr1480;
	}
	goto tr2834;
tr2816:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
#line 37 "superredcloth_scan.rl"
	{nest = 0;}
	goto st704;
st704:
	if ( ++p == pe )
		goto _out704;
case 704:
#line 12811 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr260;
		case 35: goto tr261;
		case 40: goto tr262;
		case 41: goto tr263;
		case 42: goto tr264;
		case 45: goto tr265;
		case 60: goto tr267;
		case 61: goto tr268;
		case 62: goto tr269;
		case 91: goto tr270;
		case 94: goto tr271;
		case 95: goto tr272;
		case 123: goto tr273;
		case 126: goto tr274;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr266;
	goto tr2834;
tr2817:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
#line 48 "superredcloth_scan.rl"
	{ reg = NULL; }
#line 48 "superredcloth_scan.rl"
	{INLINE(table, table_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 83 "superredcloth_scan.rl"
	{act = 17;}
	goto st705;
st705:
	if ( ++p == pe )
		goto _out705;
case 705:
#line 12847 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1614;
		case 41: goto tr1615;
		case 45: goto tr1616;
		case 46: goto tr1485;
		case 60: goto tr1617;
		case 61: goto tr1618;
		case 62: goto tr1619;
		case 91: goto tr1620;
		case 94: goto tr1621;
		case 123: goto tr1622;
		case 126: goto tr1623;
	}
	goto tr2834;
tr2818:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
#line 48 "superredcloth_scan.rl"
	{ reg = NULL; }
#line 48 "superredcloth_scan.rl"
	{INLINE(table, table_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 83 "superredcloth_scan.rl"
	{act = 17;}
	goto st706;
st706:
	if ( ++p == pe )
		goto _out706;
case 706:
#line 12878 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto st61;
		case 124: goto st62;
	}
	goto tr2834;
tr2819:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
#line 48 "superredcloth_scan.rl"
	{ reg = NULL; }
#line 48 "superredcloth_scan.rl"
	{INLINE(table, table_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 83 "superredcloth_scan.rl"
	{act = 17;}
	goto st707;
st707:
	if ( ++p == pe )
		goto _out707;
case 707:
#line 12900 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1624;
		case 41: goto tr1625;
		case 45: goto tr1626;
		case 46: goto tr1496;
		case 60: goto tr1627;
		case 61: goto tr1628;
		case 62: goto tr1629;
		case 91: goto tr1630;
		case 94: goto tr1631;
		case 110: goto st437;
		case 112: goto st446;
		case 123: goto tr1632;
		case 126: goto tr1633;
	}
	goto tr2834;
st437:
	if ( ++p == pe )
		goto _out437;
case 437:
	if ( (*p) == 111 )
		goto st438;
	goto tr0;
st438:
	if ( ++p == pe )
		goto _out438;
case 438:
	if ( (*p) == 116 )
		goto st439;
	goto tr0;
st439:
	if ( ++p == pe )
		goto _out439;
case 439:
	if ( (*p) == 101 )
		goto st440;
	goto tr0;
st440:
	if ( ++p == pe )
		goto _out440;
case 440:
	if ( (*p) == 120 )
		goto st441;
	goto tr0;
st441:
	if ( ++p == pe )
		goto _out441;
case 441:
	if ( (*p) == 116 )
		goto st442;
	goto tr0;
st442:
	if ( ++p == pe )
		goto _out442;
case 442:
	if ( (*p) == 105 )
		goto st443;
	goto tr0;
st443:
	if ( ++p == pe )
		goto _out443;
case 443:
	if ( (*p) == 108 )
		goto st444;
	goto tr0;
st444:
	if ( ++p == pe )
		goto _out444;
case 444:
	if ( (*p) == 101 )
		goto st445;
	goto tr0;
st445:
	if ( ++p == pe )
		goto _out445;
case 445:
	if ( (*p) == 62 )
		goto tr1692;
	goto tr0;
st446:
	if ( ++p == pe )
		goto _out446;
case 446:
	if ( (*p) == 114 )
		goto st447;
	goto tr0;
st447:
	if ( ++p == pe )
		goto _out447;
case 447:
	if ( (*p) == 101 )
		goto st448;
	goto tr0;
st448:
	if ( ++p == pe )
		goto _out448;
case 448:
	if ( (*p) == 62 )
		goto tr1695;
	goto st448;
tr2820:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
#line 48 "superredcloth_scan.rl"
	{ reg = NULL; }
#line 48 "superredcloth_scan.rl"
	{INLINE(table, table_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 83 "superredcloth_scan.rl"
	{act = 17;}
	goto st708;
st708:
	if ( ++p == pe )
		goto _out708;
case 708:
#line 13017 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1634;
		case 41: goto tr1635;
		case 45: goto tr1636;
		case 46: goto tr1507;
		case 60: goto tr1637;
		case 61: goto tr1638;
		case 62: goto tr1639;
		case 91: goto tr1640;
		case 94: goto tr1641;
		case 123: goto tr1642;
		case 126: goto tr1643;
	}
	goto tr2834;
tr2821:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
#line 48 "superredcloth_scan.rl"
	{ reg = NULL; }
#line 48 "superredcloth_scan.rl"
	{INLINE(table, table_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 83 "superredcloth_scan.rl"
	{act = 17;}
	goto st709;
st709:
	if ( ++p == pe )
		goto _out709;
case 709:
#line 13048 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1644;
		case 41: goto tr1645;
		case 45: goto tr1646;
		case 46: goto tr1518;
		case 60: goto tr1647;
		case 61: goto tr1648;
		case 62: goto tr1649;
		case 91: goto tr1650;
		case 94: goto tr1651;
		case 123: goto tr1652;
		case 126: goto tr1653;
	}
	goto tr2834;
tr2822:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
#line 48 "superredcloth_scan.rl"
	{ reg = NULL; }
#line 48 "superredcloth_scan.rl"
	{INLINE(table, table_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 83 "superredcloth_scan.rl"
	{act = 17;}
	goto st710;
st710:
	if ( ++p == pe )
		goto _out710;
case 710:
#line 13079 "superredcloth_scan.c"
	if ( (*p) == 93 )
		goto tr2834;
	goto tr1453;
tr2823:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
#line 48 "superredcloth_scan.rl"
	{ reg = NULL; }
#line 48 "superredcloth_scan.rl"
	{INLINE(table, table_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 83 "superredcloth_scan.rl"
	{act = 17;}
	goto st711;
st711:
	if ( ++p == pe )
		goto _out711;
case 711:
#line 13099 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1654;
		case 41: goto tr1655;
		case 45: goto tr1656;
		case 46: goto tr1584;
		case 60: goto tr1657;
		case 61: goto tr1658;
		case 62: goto tr1659;
		case 91: goto tr1660;
		case 94: goto tr1661;
		case 123: goto tr1662;
		case 126: goto tr1663;
	}
	goto tr2834;
tr2824:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st712;
st712:
	if ( ++p == pe )
		goto _out712;
case 712:
#line 13124 "superredcloth_scan.c"
	switch( (*p) ) {
		case 99: goto st449;
		case 113: goto st449;
	}
	goto tr2834;
st449:
	if ( ++p == pe )
		goto _out449;
case 449:
	switch( (*p) ) {
		case 40: goto tr1696;
		case 41: goto tr1697;
		case 45: goto tr1698;
		case 46: goto tr1699;
		case 60: goto tr1700;
		case 61: goto tr1701;
		case 62: goto tr1702;
		case 91: goto tr1703;
		case 94: goto tr1704;
		case 123: goto tr1705;
		case 126: goto tr1706;
	}
	goto tr0;
tr1741:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st450;
tr1752:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st450;
tr1763:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st450;
tr1774:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st450;
tr1785:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st450;
tr1796:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st450;
tr1807:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st450;
tr1818:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st450;
tr1696:
#line 30 "superredcloth_scan.rl"
	{ STORE(type) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st450;
st450:
	if ( ++p == pe )
		goto _out450;
case 450:
#line 13208 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto st452;
		case 40: goto tr1709;
		case 41: goto tr1710;
		case 45: goto tr1711;
		case 46: goto tr1712;
		case 60: goto tr1713;
		case 61: goto tr1714;
		case 62: goto tr1715;
		case 91: goto tr1716;
		case 94: goto tr1717;
		case 123: goto tr1718;
		case 126: goto tr1719;
	}
	goto tr1707;
tr1707:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st451;
st451:
	if ( ++p == pe )
		goto _out451;
case 451:
#line 13232 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1721;
		case 41: goto tr1722;
	}
	goto st451;
tr1721:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st452;
st452:
	if ( ++p == pe )
		goto _out452;
case 452:
#line 13246 "superredcloth_scan.c"
	if ( (*p) == 41 )
		goto tr0;
	goto tr1723;
tr1723:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st453;
st453:
	if ( ++p == pe )
		goto _out453;
case 453:
#line 13258 "superredcloth_scan.c"
	if ( (*p) == 41 )
		goto tr1725;
	goto st453;
tr1722:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st454;
tr1725:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st454;
tr1736:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st454;
tr1739:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st454;
tr1920:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st454;
st454:
	if ( ++p == pe )
		goto _out454;
case 454:
#line 13288 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto st455;
		case 46: goto st456;
		case 91: goto st458;
		case 123: goto st460;
	}
	goto tr0;
st455:
	if ( ++p == pe )
		goto _out455;
case 455:
	switch( (*p) ) {
		case 35: goto st452;
		case 41: goto st454;
	}
	goto tr1707;
tr1712:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
	goto st456;
tr1744:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st456;
tr1755:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st456;
tr1766:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st456;
tr1777:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st456;
tr1788:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st456;
tr1799:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st456;
tr1810:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st456;
tr1821:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st456;
tr1699:
#line 30 "superredcloth_scan.rl"
	{ STORE(type) }
	goto st456;
st456:
	if ( ++p == pe )
		goto _out456;
case 456:
#line 13351 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr1731;
		case 46: goto st457;
	}
	goto tr0;
tr1731:
#line 23 "superredcloth_scan.rl"
	{ plain_block = rb_str_new2("p"); }
	goto st713;
tr1733:
#line 22 "superredcloth_scan.rl"
	{ plain_block = rb_hash_aref(regs, ID2SYM(rb_intern("type"))); }
	goto st713;
st713:
	if ( ++p == pe )
		goto _out713;
case 713:
#line 13369 "superredcloth_scan.c"
	if ( (*p) == 32 )
		goto st713;
	goto tr2872;
st457:
	if ( ++p == pe )
		goto _out457;
case 457:
	if ( (*p) == 32 )
		goto tr1733;
	goto tr0;
tr1748:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st458;
tr1759:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st458;
tr1770:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st458;
tr1781:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st458;
tr1792:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st458;
tr1803:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st458;
tr1814:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st458;
tr1825:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st458;
tr1703:
#line 30 "superredcloth_scan.rl"
	{ STORE(type) }
	goto st458;
st458:
	if ( ++p == pe )
		goto _out458;
case 458:
#line 13422 "superredcloth_scan.c"
	if ( (*p) == 93 )
		goto tr0;
	goto tr1734;
tr1734:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st459;
st459:
	if ( ++p == pe )
		goto _out459;
case 459:
#line 13434 "superredcloth_scan.c"
	if ( (*p) == 93 )
		goto tr1736;
	goto st459;
tr1750:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st460;
tr1761:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st460;
tr1772:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st460;
tr1783:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st460;
tr1794:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st460;
tr1805:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st460;
tr1816:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st460;
tr1827:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st460;
tr1705:
#line 30 "superredcloth_scan.rl"
	{ STORE(type) }
	goto st460;
st460:
	if ( ++p == pe )
		goto _out460;
case 460:
#line 13480 "superredcloth_scan.c"
	if ( (*p) == 125 )
		goto tr0;
	goto tr1737;
tr1737:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st461;
st461:
	if ( ++p == pe )
		goto _out461;
case 461:
#line 13492 "superredcloth_scan.c"
	if ( (*p) == 125 )
		goto tr1739;
	goto st461;
tr1709:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st462;
tr1829:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st462;
tr1839:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st462;
tr1849:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st462;
tr1859:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st462;
tr1924:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st462;
tr1934:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st462;
tr1944:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st462;
st462:
	if ( ++p == pe )
		goto _out462;
case 462:
#line 13550 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1721;
		case 40: goto tr1709;
		case 41: goto tr1740;
		case 45: goto tr1711;
		case 46: goto tr1712;
		case 60: goto tr1713;
		case 61: goto tr1714;
		case 62: goto tr1715;
		case 91: goto tr1716;
		case 94: goto tr1717;
		case 123: goto tr1718;
		case 126: goto tr1719;
	}
	goto tr1707;
tr1710:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st463;
tr1740:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st463;
tr1742:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st463;
tr1753:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st463;
tr1764:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st463;
tr1775:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st463;
tr1786:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st463;
tr1797:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st463;
tr1808:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st463;
tr1819:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st463;
tr1830:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st463;
tr1840:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st463;
tr1850:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st463;
tr1860:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st463;
tr1925:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st463;
tr1935:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st463;
tr1945:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st463;
tr1697:
#line 30 "superredcloth_scan.rl"
	{ STORE(type) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st463;
st463:
	if ( ++p == pe )
		goto _out463;
case 463:
#line 13698 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1741;
		case 41: goto tr1742;
		case 45: goto tr1743;
		case 46: goto tr1744;
		case 60: goto tr1745;
		case 61: goto tr1746;
		case 62: goto tr1747;
		case 91: goto tr1748;
		case 94: goto tr1749;
		case 123: goto tr1750;
		case 126: goto tr1751;
	}
	goto tr0;
tr1743:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st464;
tr1754:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st464;
tr1765:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st464;
tr1776:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st464;
tr1787:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st464;
tr1798:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st464;
tr1809:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st464;
tr1820:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st464;
tr1698:
#line 30 "superredcloth_scan.rl"
	{ STORE(type) }
	goto st464;
st464:
	if ( ++p == pe )
		goto _out464;
case 464:
#line 13755 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1752;
		case 41: goto tr1753;
		case 45: goto tr1754;
		case 46: goto tr1755;
		case 60: goto tr1756;
		case 61: goto tr1757;
		case 62: goto tr1758;
		case 91: goto tr1759;
		case 94: goto tr1760;
		case 123: goto tr1761;
		case 126: goto tr1762;
	}
	goto tr0;
tr1745:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st465;
tr1756:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st465;
tr1767:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st465;
tr1778:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st465;
tr1789:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st465;
tr1800:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st465;
tr1811:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st465;
tr1822:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st465;
tr1700:
#line 30 "superredcloth_scan.rl"
	{ STORE(type) }
	goto st465;
st465:
	if ( ++p == pe )
		goto _out465;
case 465:
#line 13812 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1763;
		case 41: goto tr1764;
		case 45: goto tr1765;
		case 46: goto tr1766;
		case 60: goto tr1767;
		case 61: goto tr1768;
		case 62: goto tr1769;
		case 91: goto tr1770;
		case 94: goto tr1771;
		case 123: goto tr1772;
		case 126: goto tr1773;
	}
	goto tr0;
tr1746:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st466;
tr1757:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st466;
tr1768:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st466;
tr1779:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st466;
tr1790:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st466;
tr1801:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st466;
tr1812:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st466;
tr1823:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st466;
tr1701:
#line 30 "superredcloth_scan.rl"
	{ STORE(type) }
	goto st466;
st466:
	if ( ++p == pe )
		goto _out466;
case 466:
#line 13869 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1774;
		case 41: goto tr1775;
		case 45: goto tr1776;
		case 46: goto tr1777;
		case 60: goto tr1778;
		case 61: goto tr1779;
		case 62: goto tr1780;
		case 91: goto tr1781;
		case 94: goto tr1782;
		case 123: goto tr1783;
		case 126: goto tr1784;
	}
	goto tr0;
tr1747:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st467;
tr1758:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st467;
tr1780:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st467;
tr1791:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st467;
tr1802:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st467;
tr1813:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st467;
tr1824:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st467;
tr1702:
#line 30 "superredcloth_scan.rl"
	{ STORE(type) }
	goto st467;
st467:
	if ( ++p == pe )
		goto _out467;
case 467:
#line 13922 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1785;
		case 41: goto tr1786;
		case 45: goto tr1787;
		case 46: goto tr1788;
		case 60: goto tr1789;
		case 61: goto tr1790;
		case 62: goto tr1791;
		case 91: goto tr1792;
		case 94: goto tr1793;
		case 123: goto tr1794;
		case 126: goto tr1795;
	}
	goto tr0;
tr1749:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st468;
tr1760:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st468;
tr1771:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st468;
tr1782:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st468;
tr1793:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st468;
tr1804:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st468;
tr1815:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st468;
tr1826:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st468;
tr1704:
#line 30 "superredcloth_scan.rl"
	{ STORE(type) }
	goto st468;
st468:
	if ( ++p == pe )
		goto _out468;
case 468:
#line 13979 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1796;
		case 41: goto tr1797;
		case 45: goto tr1798;
		case 46: goto tr1799;
		case 60: goto tr1800;
		case 61: goto tr1801;
		case 62: goto tr1802;
		case 91: goto tr1803;
		case 94: goto tr1804;
		case 123: goto tr1805;
		case 126: goto tr1806;
	}
	goto tr0;
tr1751:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st469;
tr1762:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st469;
tr1773:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st469;
tr1784:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st469;
tr1795:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st469;
tr1806:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st469;
tr1817:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st469;
tr1828:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st469;
tr1706:
#line 30 "superredcloth_scan.rl"
	{ STORE(type) }
	goto st469;
st469:
	if ( ++p == pe )
		goto _out469;
case 469:
#line 14036 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1807;
		case 41: goto tr1808;
		case 45: goto tr1809;
		case 46: goto tr1810;
		case 60: goto tr1811;
		case 61: goto tr1812;
		case 62: goto tr1813;
		case 91: goto tr1814;
		case 94: goto tr1815;
		case 123: goto tr1816;
		case 126: goto tr1817;
	}
	goto tr0;
tr1769:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st470;
st470:
	if ( ++p == pe )
		goto _out470;
case 470:
#line 14059 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1818;
		case 41: goto tr1819;
		case 45: goto tr1820;
		case 46: goto tr1821;
		case 60: goto tr1822;
		case 61: goto tr1823;
		case 62: goto tr1824;
		case 91: goto tr1825;
		case 94: goto tr1826;
		case 123: goto tr1827;
		case 126: goto tr1828;
	}
	goto tr0;
tr1711:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st471;
tr1831:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st471;
tr1841:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st471;
tr1851:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st471;
tr1861:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st471;
tr1926:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st471;
tr1936:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st471;
tr1946:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st471;
st471:
	if ( ++p == pe )
		goto _out471;
case 471:
#line 14114 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1721;
		case 40: goto tr1829;
		case 41: goto tr1830;
		case 45: goto tr1831;
		case 46: goto tr1755;
		case 60: goto tr1832;
		case 61: goto tr1833;
		case 62: goto tr1834;
		case 91: goto tr1835;
		case 94: goto tr1836;
		case 123: goto tr1837;
		case 126: goto tr1838;
	}
	goto st451;
tr1713:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st472;
tr1832:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st472;
tr1842:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st472;
tr1852:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st472;
tr1862:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st472;
tr1927:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st472;
tr1937:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st472;
tr1947:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st472;
st472:
	if ( ++p == pe )
		goto _out472;
case 472:
#line 14170 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1721;
		case 40: goto tr1839;
		case 41: goto tr1840;
		case 45: goto tr1841;
		case 46: goto tr1766;
		case 60: goto tr1842;
		case 61: goto tr1843;
		case 62: goto tr1844;
		case 91: goto tr1845;
		case 94: goto tr1846;
		case 123: goto tr1847;
		case 126: goto tr1848;
	}
	goto st451;
tr1714:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st473;
tr1833:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st473;
tr1843:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st473;
tr1853:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st473;
tr1863:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st473;
tr1928:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st473;
tr1938:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st473;
tr1948:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st473;
st473:
	if ( ++p == pe )
		goto _out473;
case 473:
#line 14226 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1721;
		case 40: goto tr1849;
		case 41: goto tr1850;
		case 45: goto tr1851;
		case 46: goto tr1777;
		case 60: goto tr1852;
		case 61: goto tr1853;
		case 62: goto tr1854;
		case 91: goto tr1855;
		case 94: goto tr1856;
		case 123: goto tr1857;
		case 126: goto tr1858;
	}
	goto st451;
tr1715:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st474;
tr1834:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st474;
tr1854:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st474;
tr1864:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st474;
tr1929:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st474;
tr1939:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st474;
tr1949:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st474;
st474:
	if ( ++p == pe )
		goto _out474;
case 474:
#line 14278 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1721;
		case 40: goto tr1859;
		case 41: goto tr1860;
		case 45: goto tr1861;
		case 46: goto tr1788;
		case 60: goto tr1862;
		case 61: goto tr1863;
		case 62: goto tr1864;
		case 91: goto tr1865;
		case 94: goto tr1866;
		case 123: goto tr1867;
		case 126: goto tr1868;
	}
	goto st451;
tr1716:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st475;
tr1835:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st475;
tr1845:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st475;
tr1855:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st475;
tr1865:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st475;
tr1930:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st475;
tr1940:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st475;
tr1950:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st475;
st475:
	if ( ++p == pe )
		goto _out475;
case 475:
#line 14334 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1870;
		case 41: goto tr1871;
		case 93: goto st451;
	}
	goto tr1869;
tr1869:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st476;
st476:
	if ( ++p == pe )
		goto _out476;
case 476:
#line 14349 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1873;
		case 41: goto tr1874;
		case 93: goto tr1875;
	}
	goto st476;
tr1873:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st477;
tr1870:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st477;
st477:
	if ( ++p == pe )
		goto _out477;
case 477:
#line 14370 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto st459;
		case 93: goto tr1877;
	}
	goto tr1876;
tr1876:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st478;
st478:
	if ( ++p == pe )
		goto _out478;
case 478:
#line 14384 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto tr1879;
		case 93: goto tr1880;
	}
	goto st478;
tr1874:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st479;
tr1879:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st479;
tr1912:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st479;
tr1871:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st479;
tr1909:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st479;
tr1921:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st479;
st479:
	if ( ++p == pe )
		goto _out479;
case 479:
#line 14424 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto st480;
		case 46: goto st456;
		case 91: goto st498;
		case 93: goto tr1736;
		case 123: goto st499;
	}
	goto st459;
st480:
	if ( ++p == pe )
		goto _out480;
case 480:
	switch( (*p) ) {
		case 35: goto st477;
		case 41: goto st479;
		case 93: goto tr1886;
	}
	goto tr1869;
tr1875:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st481;
tr1896:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st481;
tr1886:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st481;
tr1907:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st481;
st481:
	if ( ++p == pe )
		goto _out481;
case 481:
#line 14467 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1721;
		case 40: goto st482;
		case 41: goto tr1722;
		case 46: goto st456;
		case 91: goto st475;
		case 123: goto st483;
	}
	goto st451;
st482:
	if ( ++p == pe )
		goto _out482;
case 482:
	switch( (*p) ) {
		case 35: goto tr1721;
		case 41: goto tr1722;
	}
	goto tr1707;
tr1718:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st483;
tr1837:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st483;
tr1847:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st483;
tr1857:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st483;
tr1867:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st483;
tr1932:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st483;
tr1942:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st483;
tr1952:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st483;
st483:
	if ( ++p == pe )
		goto _out483;
case 483:
#line 14526 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1891;
		case 41: goto tr1892;
		case 125: goto st451;
	}
	goto tr1890;
tr1890:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st484;
st484:
	if ( ++p == pe )
		goto _out484;
case 484:
#line 14541 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1894;
		case 41: goto tr1895;
		case 125: goto tr1896;
	}
	goto st484;
tr1894:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st485;
tr1891:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st485;
st485:
	if ( ++p == pe )
		goto _out485;
case 485:
#line 14562 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto st461;
		case 125: goto tr1898;
	}
	goto tr1897;
tr1897:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st486;
st486:
	if ( ++p == pe )
		goto _out486;
case 486:
#line 14576 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto tr1900;
		case 125: goto tr1901;
	}
	goto st486;
tr1895:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st487;
tr1900:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st487;
tr1911:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st487;
tr1892:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st487;
tr1923:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st487;
tr1922:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st487;
st487:
	if ( ++p == pe )
		goto _out487;
case 487:
#line 14616 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto st488;
		case 46: goto st456;
		case 91: goto st489;
		case 123: goto st491;
		case 125: goto tr1739;
	}
	goto st461;
st488:
	if ( ++p == pe )
		goto _out488;
case 488:
	switch( (*p) ) {
		case 35: goto st485;
		case 41: goto st487;
		case 125: goto tr1907;
	}
	goto tr1890;
st489:
	if ( ++p == pe )
		goto _out489;
case 489:
	switch( (*p) ) {
		case 93: goto st461;
		case 125: goto tr1909;
	}
	goto tr1908;
tr1908:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st490;
st490:
	if ( ++p == pe )
		goto _out490;
case 490:
#line 14652 "superredcloth_scan.c"
	switch( (*p) ) {
		case 93: goto tr1911;
		case 125: goto tr1912;
	}
	goto st490;
st491:
	if ( ++p == pe )
		goto _out491;
case 491:
	if ( (*p) == 125 )
		goto tr1739;
	goto tr1737;
tr1880:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st492;
tr1901:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st492;
tr1877:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st492;
tr1898:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st492;
st492:
	if ( ++p == pe )
		goto _out492;
case 492:
#line 14689 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto st493;
		case 41: goto tr1725;
		case 46: goto st456;
		case 91: goto st496;
		case 123: goto st497;
	}
	goto st453;
st493:
	if ( ++p == pe )
		goto _out493;
case 493:
	switch( (*p) ) {
		case 35: goto st495;
		case 41: goto tr1725;
	}
	goto tr1916;
tr1916:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st494;
st494:
	if ( ++p == pe )
		goto _out494;
case 494:
#line 14715 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1919;
		case 41: goto tr1920;
	}
	goto st494;
tr1919:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st495;
st495:
	if ( ++p == pe )
		goto _out495;
case 495:
#line 14729 "superredcloth_scan.c"
	if ( (*p) == 41 )
		goto tr1725;
	goto tr1723;
st496:
	if ( ++p == pe )
		goto _out496;
case 496:
	switch( (*p) ) {
		case 41: goto tr1921;
		case 93: goto st453;
	}
	goto tr1876;
st497:
	if ( ++p == pe )
		goto _out497;
case 497:
	switch( (*p) ) {
		case 41: goto tr1922;
		case 125: goto st453;
	}
	goto tr1897;
st498:
	if ( ++p == pe )
		goto _out498;
case 498:
	if ( (*p) == 93 )
		goto tr1736;
	goto tr1734;
st499:
	if ( ++p == pe )
		goto _out499;
case 499:
	switch( (*p) ) {
		case 93: goto tr1923;
		case 125: goto st459;
	}
	goto tr1908;
tr1717:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st500;
tr1836:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st500;
tr1846:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st500;
tr1856:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st500;
tr1866:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st500;
tr1931:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st500;
tr1941:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st500;
tr1951:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st500;
st500:
	if ( ++p == pe )
		goto _out500;
case 500:
#line 14807 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1721;
		case 40: goto tr1924;
		case 41: goto tr1925;
		case 45: goto tr1926;
		case 46: goto tr1799;
		case 60: goto tr1927;
		case 61: goto tr1928;
		case 62: goto tr1929;
		case 91: goto tr1930;
		case 94: goto tr1931;
		case 123: goto tr1932;
		case 126: goto tr1933;
	}
	goto st451;
tr1719:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st501;
tr1838:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st501;
tr1848:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st501;
tr1858:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st501;
tr1868:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st501;
tr1933:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st501;
tr1943:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st501;
tr1953:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st501;
st501:
	if ( ++p == pe )
		goto _out501;
case 501:
#line 14863 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1721;
		case 40: goto tr1934;
		case 41: goto tr1935;
		case 45: goto tr1936;
		case 46: goto tr1810;
		case 60: goto tr1937;
		case 61: goto tr1938;
		case 62: goto tr1939;
		case 91: goto tr1940;
		case 94: goto tr1941;
		case 123: goto tr1942;
		case 126: goto tr1943;
	}
	goto st451;
tr1844:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st502;
st502:
	if ( ++p == pe )
		goto _out502;
case 502:
#line 14887 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1721;
		case 40: goto tr1944;
		case 41: goto tr1945;
		case 45: goto tr1946;
		case 46: goto tr1821;
		case 60: goto tr1947;
		case 61: goto tr1948;
		case 62: goto tr1949;
		case 91: goto tr1950;
		case 94: goto tr1951;
		case 123: goto tr1952;
		case 126: goto tr1953;
	}
	goto st451;
tr2825:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st714;
st714:
	if ( ++p == pe )
		goto _out714;
case 714:
#line 14913 "superredcloth_scan.c"
	if ( (*p) == 105 )
		goto st503;
	goto tr2834;
st503:
	if ( ++p == pe )
		goto _out503;
case 503:
	if ( (*p) == 118 )
		goto st449;
	goto tr0;
tr2826:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st715;
st715:
	if ( ++p == pe )
		goto _out715;
case 715:
#line 14934 "superredcloth_scan.c"
	if ( (*p) == 110 )
		goto st504;
	goto tr2834;
st504:
	if ( ++p == pe )
		goto _out504;
case 504:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr1955;
	goto tr0;
tr1955:
#line 33 "superredcloth_scan.rl"
	{ STORE(type) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st505;
st505:
	if ( ++p == pe )
		goto _out505;
case 505:
#line 14955 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1956;
		case 41: goto tr1957;
		case 45: goto tr1958;
		case 46: goto tr1959;
		case 60: goto tr1961;
		case 61: goto tr1962;
		case 62: goto tr1963;
		case 91: goto tr1964;
		case 94: goto tr1965;
		case 123: goto tr1966;
		case 126: goto tr1967;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto st505;
	goto tr0;
tr1999:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st506;
tr2010:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st506;
tr2021:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st506;
tr2032:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st506;
tr2043:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st506;
tr2054:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st506;
tr2065:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st506;
tr2076:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st506;
tr1956:
#line 33 "superredcloth_scan.rl"
	{ STORE(id) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st506;
st506:
	if ( ++p == pe )
		goto _out506;
case 506:
#line 15032 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto st508;
		case 40: goto tr1970;
		case 41: goto tr1971;
		case 45: goto tr1972;
		case 46: goto tr1973;
		case 60: goto tr1974;
		case 61: goto tr1975;
		case 62: goto tr1976;
		case 91: goto tr1977;
		case 94: goto tr1978;
		case 123: goto tr1979;
		case 126: goto tr1980;
	}
	goto tr1968;
tr1968:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st507;
st507:
	if ( ++p == pe )
		goto _out507;
case 507:
#line 15056 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1982;
		case 41: goto tr1983;
	}
	goto st507;
tr1982:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st508;
st508:
	if ( ++p == pe )
		goto _out508;
case 508:
#line 15070 "superredcloth_scan.c"
	if ( (*p) == 41 )
		goto tr0;
	goto tr1984;
tr1984:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st509;
st509:
	if ( ++p == pe )
		goto _out509;
case 509:
#line 15082 "superredcloth_scan.c"
	if ( (*p) == 41 )
		goto tr1986;
	goto st509;
tr1983:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st510;
tr1986:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st510;
tr1994:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st510;
tr1997:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st510;
tr2178:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st510;
st510:
	if ( ++p == pe )
		goto _out510;
case 510:
#line 15112 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto st511;
		case 46: goto st716;
		case 91: goto st512;
		case 123: goto st514;
	}
	goto tr0;
st511:
	if ( ++p == pe )
		goto _out511;
case 511:
	switch( (*p) ) {
		case 35: goto st508;
		case 41: goto st510;
	}
	goto tr1968;
tr1973:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
	goto st716;
tr2002:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st716;
tr2013:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st716;
tr2024:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st716;
tr2035:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st716;
tr2046:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st716;
tr2057:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st716;
tr2068:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st716;
tr2079:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st716;
tr1959:
#line 33 "superredcloth_scan.rl"
	{ STORE(id) }
	goto st716;
st716:
	if ( ++p == pe )
		goto _out716;
case 716:
#line 15175 "superredcloth_scan.c"
	if ( (*p) == 32 )
		goto st716;
	goto tr2876;
tr2006:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st512;
tr2017:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st512;
tr2028:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st512;
tr2039:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st512;
tr2050:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st512;
tr2061:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st512;
tr2072:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st512;
tr2083:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st512;
tr1964:
#line 33 "superredcloth_scan.rl"
	{ STORE(id) }
	goto st512;
st512:
	if ( ++p == pe )
		goto _out512;
case 512:
#line 15221 "superredcloth_scan.c"
	if ( (*p) == 93 )
		goto tr0;
	goto tr1992;
tr1992:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st513;
st513:
	if ( ++p == pe )
		goto _out513;
case 513:
#line 15233 "superredcloth_scan.c"
	if ( (*p) == 93 )
		goto tr1994;
	goto st513;
tr2008:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st514;
tr2019:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st514;
tr2030:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st514;
tr2041:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st514;
tr2052:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st514;
tr2063:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st514;
tr2074:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st514;
tr2085:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st514;
tr1966:
#line 33 "superredcloth_scan.rl"
	{ STORE(id) }
	goto st514;
st514:
	if ( ++p == pe )
		goto _out514;
case 514:
#line 15279 "superredcloth_scan.c"
	if ( (*p) == 125 )
		goto tr0;
	goto tr1995;
tr1995:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st515;
st515:
	if ( ++p == pe )
		goto _out515;
case 515:
#line 15291 "superredcloth_scan.c"
	if ( (*p) == 125 )
		goto tr1997;
	goto st515;
tr1970:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st516;
tr2087:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st516;
tr2097:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st516;
tr2107:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st516;
tr2117:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st516;
tr2182:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st516;
tr2192:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st516;
tr2202:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st516;
st516:
	if ( ++p == pe )
		goto _out516;
case 516:
#line 15349 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1982;
		case 40: goto tr1970;
		case 41: goto tr1998;
		case 45: goto tr1972;
		case 46: goto tr1973;
		case 60: goto tr1974;
		case 61: goto tr1975;
		case 62: goto tr1976;
		case 91: goto tr1977;
		case 94: goto tr1978;
		case 123: goto tr1979;
		case 126: goto tr1980;
	}
	goto tr1968;
tr1971:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st517;
tr1998:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st517;
tr2000:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st517;
tr2011:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st517;
tr2022:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st517;
tr2033:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st517;
tr2044:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st517;
tr2055:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st517;
tr2066:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st517;
tr2077:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st517;
tr2088:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st517;
tr2098:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st517;
tr2108:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st517;
tr2118:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st517;
tr2183:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st517;
tr2193:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st517;
tr2203:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st517;
tr1957:
#line 33 "superredcloth_scan.rl"
	{ STORE(id) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st517;
st517:
	if ( ++p == pe )
		goto _out517;
case 517:
#line 15497 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1999;
		case 41: goto tr2000;
		case 45: goto tr2001;
		case 46: goto tr2002;
		case 60: goto tr2003;
		case 61: goto tr2004;
		case 62: goto tr2005;
		case 91: goto tr2006;
		case 94: goto tr2007;
		case 123: goto tr2008;
		case 126: goto tr2009;
	}
	goto tr0;
tr2001:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st518;
tr2012:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st518;
tr2023:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st518;
tr2034:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st518;
tr2045:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st518;
tr2056:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st518;
tr2067:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st518;
tr2078:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st518;
tr1958:
#line 33 "superredcloth_scan.rl"
	{ STORE(id) }
	goto st518;
st518:
	if ( ++p == pe )
		goto _out518;
case 518:
#line 15554 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr2010;
		case 41: goto tr2011;
		case 45: goto tr2012;
		case 46: goto tr2013;
		case 60: goto tr2014;
		case 61: goto tr2015;
		case 62: goto tr2016;
		case 91: goto tr2017;
		case 94: goto tr2018;
		case 123: goto tr2019;
		case 126: goto tr2020;
	}
	goto tr0;
tr2003:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st519;
tr2014:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st519;
tr2025:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st519;
tr2036:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st519;
tr2047:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st519;
tr2058:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st519;
tr2069:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st519;
tr2080:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st519;
tr1961:
#line 33 "superredcloth_scan.rl"
	{ STORE(id) }
	goto st519;
st519:
	if ( ++p == pe )
		goto _out519;
case 519:
#line 15611 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr2021;
		case 41: goto tr2022;
		case 45: goto tr2023;
		case 46: goto tr2024;
		case 60: goto tr2025;
		case 61: goto tr2026;
		case 62: goto tr2027;
		case 91: goto tr2028;
		case 94: goto tr2029;
		case 123: goto tr2030;
		case 126: goto tr2031;
	}
	goto tr0;
tr2004:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st520;
tr2015:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st520;
tr2026:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st520;
tr2037:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st520;
tr2048:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st520;
tr2059:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st520;
tr2070:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st520;
tr2081:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st520;
tr1962:
#line 33 "superredcloth_scan.rl"
	{ STORE(id) }
	goto st520;
st520:
	if ( ++p == pe )
		goto _out520;
case 520:
#line 15668 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr2032;
		case 41: goto tr2033;
		case 45: goto tr2034;
		case 46: goto tr2035;
		case 60: goto tr2036;
		case 61: goto tr2037;
		case 62: goto tr2038;
		case 91: goto tr2039;
		case 94: goto tr2040;
		case 123: goto tr2041;
		case 126: goto tr2042;
	}
	goto tr0;
tr2005:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st521;
tr2016:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st521;
tr2038:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st521;
tr2049:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st521;
tr2060:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st521;
tr2071:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st521;
tr2082:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st521;
tr1963:
#line 33 "superredcloth_scan.rl"
	{ STORE(id) }
	goto st521;
st521:
	if ( ++p == pe )
		goto _out521;
case 521:
#line 15721 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr2043;
		case 41: goto tr2044;
		case 45: goto tr2045;
		case 46: goto tr2046;
		case 60: goto tr2047;
		case 61: goto tr2048;
		case 62: goto tr2049;
		case 91: goto tr2050;
		case 94: goto tr2051;
		case 123: goto tr2052;
		case 126: goto tr2053;
	}
	goto tr0;
tr2007:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st522;
tr2018:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st522;
tr2029:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st522;
tr2040:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st522;
tr2051:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st522;
tr2062:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st522;
tr2073:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st522;
tr2084:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st522;
tr1965:
#line 33 "superredcloth_scan.rl"
	{ STORE(id) }
	goto st522;
st522:
	if ( ++p == pe )
		goto _out522;
case 522:
#line 15778 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr2054;
		case 41: goto tr2055;
		case 45: goto tr2056;
		case 46: goto tr2057;
		case 60: goto tr2058;
		case 61: goto tr2059;
		case 62: goto tr2060;
		case 91: goto tr2061;
		case 94: goto tr2062;
		case 123: goto tr2063;
		case 126: goto tr2064;
	}
	goto tr0;
tr2009:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st523;
tr2020:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st523;
tr2031:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st523;
tr2042:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st523;
tr2053:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st523;
tr2064:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st523;
tr2075:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st523;
tr2086:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st523;
tr1967:
#line 33 "superredcloth_scan.rl"
	{ STORE(id) }
	goto st523;
st523:
	if ( ++p == pe )
		goto _out523;
case 523:
#line 15835 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr2065;
		case 41: goto tr2066;
		case 45: goto tr2067;
		case 46: goto tr2068;
		case 60: goto tr2069;
		case 61: goto tr2070;
		case 62: goto tr2071;
		case 91: goto tr2072;
		case 94: goto tr2073;
		case 123: goto tr2074;
		case 126: goto tr2075;
	}
	goto tr0;
tr2027:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st524;
st524:
	if ( ++p == pe )
		goto _out524;
case 524:
#line 15858 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr2076;
		case 41: goto tr2077;
		case 45: goto tr2078;
		case 46: goto tr2079;
		case 60: goto tr2080;
		case 61: goto tr2081;
		case 62: goto tr2082;
		case 91: goto tr2083;
		case 94: goto tr2084;
		case 123: goto tr2085;
		case 126: goto tr2086;
	}
	goto tr0;
tr1972:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st525;
tr2089:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st525;
tr2099:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st525;
tr2109:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st525;
tr2119:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st525;
tr2184:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st525;
tr2194:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st525;
tr2204:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st525;
st525:
	if ( ++p == pe )
		goto _out525;
case 525:
#line 15913 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1982;
		case 40: goto tr2087;
		case 41: goto tr2088;
		case 45: goto tr2089;
		case 46: goto tr2013;
		case 60: goto tr2090;
		case 61: goto tr2091;
		case 62: goto tr2092;
		case 91: goto tr2093;
		case 94: goto tr2094;
		case 123: goto tr2095;
		case 126: goto tr2096;
	}
	goto st507;
tr1974:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st526;
tr2090:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st526;
tr2100:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st526;
tr2110:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st526;
tr2120:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st526;
tr2185:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st526;
tr2195:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st526;
tr2205:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st526;
st526:
	if ( ++p == pe )
		goto _out526;
case 526:
#line 15969 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1982;
		case 40: goto tr2097;
		case 41: goto tr2098;
		case 45: goto tr2099;
		case 46: goto tr2024;
		case 60: goto tr2100;
		case 61: goto tr2101;
		case 62: goto tr2102;
		case 91: goto tr2103;
		case 94: goto tr2104;
		case 123: goto tr2105;
		case 126: goto tr2106;
	}
	goto st507;
tr1975:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st527;
tr2091:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st527;
tr2101:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st527;
tr2111:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st527;
tr2121:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st527;
tr2186:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st527;
tr2196:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st527;
tr2206:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st527;
st527:
	if ( ++p == pe )
		goto _out527;
case 527:
#line 16025 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1982;
		case 40: goto tr2107;
		case 41: goto tr2108;
		case 45: goto tr2109;
		case 46: goto tr2035;
		case 60: goto tr2110;
		case 61: goto tr2111;
		case 62: goto tr2112;
		case 91: goto tr2113;
		case 94: goto tr2114;
		case 123: goto tr2115;
		case 126: goto tr2116;
	}
	goto st507;
tr1976:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st528;
tr2092:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st528;
tr2112:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st528;
tr2122:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st528;
tr2187:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st528;
tr2197:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st528;
tr2207:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st528;
st528:
	if ( ++p == pe )
		goto _out528;
case 528:
#line 16077 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1982;
		case 40: goto tr2117;
		case 41: goto tr2118;
		case 45: goto tr2119;
		case 46: goto tr2046;
		case 60: goto tr2120;
		case 61: goto tr2121;
		case 62: goto tr2122;
		case 91: goto tr2123;
		case 94: goto tr2124;
		case 123: goto tr2125;
		case 126: goto tr2126;
	}
	goto st507;
tr1977:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st529;
tr2093:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st529;
tr2103:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st529;
tr2113:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st529;
tr2123:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st529;
tr2188:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st529;
tr2198:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st529;
tr2208:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st529;
st529:
	if ( ++p == pe )
		goto _out529;
case 529:
#line 16133 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2128;
		case 41: goto tr2129;
		case 93: goto st507;
	}
	goto tr2127;
tr2127:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st530;
st530:
	if ( ++p == pe )
		goto _out530;
case 530:
#line 16148 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2131;
		case 41: goto tr2132;
		case 93: goto tr2133;
	}
	goto st530;
tr2131:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st531;
tr2128:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st531;
st531:
	if ( ++p == pe )
		goto _out531;
case 531:
#line 16169 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto st513;
		case 93: goto tr2135;
	}
	goto tr2134;
tr2134:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st532;
st532:
	if ( ++p == pe )
		goto _out532;
case 532:
#line 16183 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto tr2137;
		case 93: goto tr2138;
	}
	goto st532;
tr2132:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st533;
tr2137:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st533;
tr2170:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st533;
tr2129:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st533;
tr2167:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st533;
tr2179:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st533;
st533:
	if ( ++p == pe )
		goto _out533;
case 533:
#line 16223 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto st534;
		case 46: goto st716;
		case 91: goto st552;
		case 93: goto tr1994;
		case 123: goto st553;
	}
	goto st513;
st534:
	if ( ++p == pe )
		goto _out534;
case 534:
	switch( (*p) ) {
		case 35: goto st531;
		case 41: goto st533;
		case 93: goto tr2144;
	}
	goto tr2127;
tr2133:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st535;
tr2154:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st535;
tr2144:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st535;
tr2165:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st535;
st535:
	if ( ++p == pe )
		goto _out535;
case 535:
#line 16266 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1982;
		case 40: goto st536;
		case 41: goto tr1983;
		case 46: goto st716;
		case 91: goto st529;
		case 123: goto st537;
	}
	goto st507;
st536:
	if ( ++p == pe )
		goto _out536;
case 536:
	switch( (*p) ) {
		case 35: goto tr1982;
		case 41: goto tr1983;
	}
	goto tr1968;
tr1979:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st537;
tr2095:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st537;
tr2105:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st537;
tr2115:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st537;
tr2125:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st537;
tr2190:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st537;
tr2200:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st537;
tr2210:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st537;
st537:
	if ( ++p == pe )
		goto _out537;
case 537:
#line 16325 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2149;
		case 41: goto tr2150;
		case 125: goto st507;
	}
	goto tr2148;
tr2148:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st538;
st538:
	if ( ++p == pe )
		goto _out538;
case 538:
#line 16340 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2152;
		case 41: goto tr2153;
		case 125: goto tr2154;
	}
	goto st538;
tr2152:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st539;
tr2149:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st539;
st539:
	if ( ++p == pe )
		goto _out539;
case 539:
#line 16361 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto st515;
		case 125: goto tr2156;
	}
	goto tr2155;
tr2155:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st540;
st540:
	if ( ++p == pe )
		goto _out540;
case 540:
#line 16375 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto tr2158;
		case 125: goto tr2159;
	}
	goto st540;
tr2153:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st541;
tr2158:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st541;
tr2169:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st541;
tr2150:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st541;
tr2181:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st541;
tr2180:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st541;
st541:
	if ( ++p == pe )
		goto _out541;
case 541:
#line 16415 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto st542;
		case 46: goto st716;
		case 91: goto st543;
		case 123: goto st545;
		case 125: goto tr1997;
	}
	goto st515;
st542:
	if ( ++p == pe )
		goto _out542;
case 542:
	switch( (*p) ) {
		case 35: goto st539;
		case 41: goto st541;
		case 125: goto tr2165;
	}
	goto tr2148;
st543:
	if ( ++p == pe )
		goto _out543;
case 543:
	switch( (*p) ) {
		case 93: goto st515;
		case 125: goto tr2167;
	}
	goto tr2166;
tr2166:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st544;
st544:
	if ( ++p == pe )
		goto _out544;
case 544:
#line 16451 "superredcloth_scan.c"
	switch( (*p) ) {
		case 93: goto tr2169;
		case 125: goto tr2170;
	}
	goto st544;
st545:
	if ( ++p == pe )
		goto _out545;
case 545:
	if ( (*p) == 125 )
		goto tr1997;
	goto tr1995;
tr2138:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st546;
tr2159:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st546;
tr2135:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st546;
tr2156:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st546;
st546:
	if ( ++p == pe )
		goto _out546;
case 546:
#line 16488 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto st547;
		case 41: goto tr1986;
		case 46: goto st716;
		case 91: goto st550;
		case 123: goto st551;
	}
	goto st509;
st547:
	if ( ++p == pe )
		goto _out547;
case 547:
	switch( (*p) ) {
		case 35: goto st549;
		case 41: goto tr1986;
	}
	goto tr2174;
tr2174:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st548;
st548:
	if ( ++p == pe )
		goto _out548;
case 548:
#line 16514 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2177;
		case 41: goto tr2178;
	}
	goto st548;
tr2177:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st549;
st549:
	if ( ++p == pe )
		goto _out549;
case 549:
#line 16528 "superredcloth_scan.c"
	if ( (*p) == 41 )
		goto tr1986;
	goto tr1984;
st550:
	if ( ++p == pe )
		goto _out550;
case 550:
	switch( (*p) ) {
		case 41: goto tr2179;
		case 93: goto st509;
	}
	goto tr2134;
st551:
	if ( ++p == pe )
		goto _out551;
case 551:
	switch( (*p) ) {
		case 41: goto tr2180;
		case 125: goto st509;
	}
	goto tr2155;
st552:
	if ( ++p == pe )
		goto _out552;
case 552:
	if ( (*p) == 93 )
		goto tr1994;
	goto tr1992;
st553:
	if ( ++p == pe )
		goto _out553;
case 553:
	switch( (*p) ) {
		case 93: goto tr2181;
		case 125: goto st513;
	}
	goto tr2166;
tr1978:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st554;
tr2094:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st554;
tr2104:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st554;
tr2114:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st554;
tr2124:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st554;
tr2189:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st554;
tr2199:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st554;
tr2209:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st554;
st554:
	if ( ++p == pe )
		goto _out554;
case 554:
#line 16606 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1982;
		case 40: goto tr2182;
		case 41: goto tr2183;
		case 45: goto tr2184;
		case 46: goto tr2057;
		case 60: goto tr2185;
		case 61: goto tr2186;
		case 62: goto tr2187;
		case 91: goto tr2188;
		case 94: goto tr2189;
		case 123: goto tr2190;
		case 126: goto tr2191;
	}
	goto st507;
tr1980:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st555;
tr2096:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st555;
tr2106:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st555;
tr2116:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st555;
tr2126:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st555;
tr2191:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st555;
tr2201:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st555;
tr2211:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st555;
st555:
	if ( ++p == pe )
		goto _out555;
case 555:
#line 16662 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1982;
		case 40: goto tr2192;
		case 41: goto tr2193;
		case 45: goto tr2194;
		case 46: goto tr2068;
		case 60: goto tr2195;
		case 61: goto tr2196;
		case 62: goto tr2197;
		case 91: goto tr2198;
		case 94: goto tr2199;
		case 123: goto tr2200;
		case 126: goto tr2201;
	}
	goto st507;
tr2102:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st556;
st556:
	if ( ++p == pe )
		goto _out556;
case 556:
#line 16686 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1982;
		case 40: goto tr2202;
		case 41: goto tr2203;
		case 45: goto tr2204;
		case 46: goto tr2079;
		case 60: goto tr2205;
		case 61: goto tr2206;
		case 62: goto tr2207;
		case 91: goto tr2208;
		case 94: goto tr2209;
		case 123: goto tr2210;
		case 126: goto tr2211;
	}
	goto st507;
tr2827:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st717;
st717:
	if ( ++p == pe )
		goto _out717;
case 717:
#line 16712 "superredcloth_scan.c"
	if ( 49 <= (*p) && (*p) <= 54 )
		goto st449;
	goto tr2834;
tr2828:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st718;
st718:
	if ( ++p == pe )
		goto _out718;
case 718:
#line 16726 "superredcloth_scan.c"
	if ( (*p) == 111 )
		goto st557;
	goto tr2834;
st557:
	if ( ++p == pe )
		goto _out557;
case 557:
	if ( (*p) == 116 )
		goto st558;
	goto tr0;
st558:
	if ( ++p == pe )
		goto _out558;
case 558:
	if ( (*p) == 101 )
		goto st559;
	goto tr0;
st559:
	if ( ++p == pe )
		goto _out559;
case 559:
	if ( (*p) == 120 )
		goto st560;
	goto tr0;
st560:
	if ( ++p == pe )
		goto _out560;
case 560:
	if ( (*p) == 116 )
		goto st561;
	goto tr0;
st561:
	if ( ++p == pe )
		goto _out561;
case 561:
	if ( (*p) == 105 )
		goto st562;
	goto tr0;
st562:
	if ( ++p == pe )
		goto _out562;
case 562:
	if ( (*p) == 108 )
		goto st563;
	goto tr0;
st563:
	if ( ++p == pe )
		goto _out563;
case 563:
	if ( (*p) == 101 )
		goto st449;
	goto tr0;
tr2829:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st719;
st719:
	if ( ++p == pe )
		goto _out719;
case 719:
#line 16789 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1696;
		case 41: goto tr1697;
		case 45: goto tr1698;
		case 46: goto tr1699;
		case 60: goto tr1700;
		case 61: goto tr1701;
		case 62: goto tr1702;
		case 91: goto tr1703;
		case 94: goto tr1704;
		case 114: goto st563;
		case 123: goto tr1705;
		case 126: goto tr1706;
	}
	goto tr2834;
tr2830:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
#line 48 "superredcloth_scan.rl"
	{ reg = NULL; }
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 83 "superredcloth_scan.rl"
	{act = 17;}
	goto st720;
st720:
	if ( ++p == pe )
		goto _out720;
case 720:
#line 16819 "superredcloth_scan.c"
	if ( (*p) == 97 )
		goto st564;
	goto tr2834;
st564:
	if ( ++p == pe )
		goto _out564;
case 564:
	if ( (*p) == 98 )
		goto st565;
	goto tr0;
st565:
	if ( ++p == pe )
		goto _out565;
case 565:
	if ( (*p) == 108 )
		goto st566;
	goto tr0;
st566:
	if ( ++p == pe )
		goto _out566;
case 566:
	if ( (*p) == 101 )
		goto st567;
	goto tr0;
st567:
	if ( ++p == pe )
		goto _out567;
case 567:
	switch( (*p) ) {
		case 40: goto tr2221;
		case 41: goto tr2222;
		case 45: goto st583;
		case 46: goto st574;
		case 60: goto st584;
		case 61: goto st585;
		case 62: goto st586;
		case 91: goto st577;
		case 94: goto st587;
		case 123: goto st579;
		case 126: goto st588;
	}
	goto tr0;
tr2221:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st568;
tr2274:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st568;
tr2285:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st568;
tr2296:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st568;
tr2307:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st568;
tr2318:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st568;
tr2329:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st568;
tr2340:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st568;
tr2351:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st568;
st568:
	if ( ++p == pe )
		goto _out568;
case 568:
#line 16920 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto st570;
		case 40: goto tr2234;
		case 41: goto tr2235;
		case 45: goto tr2236;
		case 46: goto tr2237;
		case 60: goto tr2238;
		case 61: goto tr2239;
		case 62: goto tr2240;
		case 91: goto tr2241;
		case 94: goto tr2242;
		case 123: goto tr2243;
		case 126: goto tr2244;
	}
	goto tr2232;
tr2232:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st569;
st569:
	if ( ++p == pe )
		goto _out569;
case 569:
#line 16944 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2246;
		case 41: goto tr2247;
	}
	goto st569;
tr2246:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st570;
st570:
	if ( ++p == pe )
		goto _out570;
case 570:
#line 16958 "superredcloth_scan.c"
	if ( (*p) == 41 )
		goto tr0;
	goto tr2248;
tr2248:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st571;
st571:
	if ( ++p == pe )
		goto _out571;
case 571:
#line 16970 "superredcloth_scan.c"
	if ( (*p) == 41 )
		goto tr2250;
	goto st571;
tr2247:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st572;
tr2250:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st572;
tr2269:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st572;
tr2272:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st572;
tr2453:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st572;
st572:
	if ( ++p == pe )
		goto _out572;
case 572:
#line 17000 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto st573;
		case 46: goto st574;
		case 91: goto st577;
		case 123: goto st579;
	}
	goto tr0;
st573:
	if ( ++p == pe )
		goto _out573;
case 573:
	switch( (*p) ) {
		case 35: goto st570;
		case 41: goto st572;
	}
	goto tr2232;
tr2237:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
	goto st574;
tr2277:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st574;
tr2288:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st574;
tr2299:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st574;
tr2310:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st574;
tr2321:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st574;
tr2332:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st574;
tr2343:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st574;
tr2354:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st574;
st574:
	if ( ++p == pe )
		goto _out574;
case 574:
#line 17059 "superredcloth_scan.c"
	switch( (*p) ) {
		case 10: goto st575;
		case 13: goto st576;
		case 32: goto st574;
	}
	goto tr0;
st575:
	if ( ++p == pe )
		goto _out575;
case 575:
	switch( (*p) ) {
		case 40: goto tr2255;
		case 41: goto tr2256;
		case 45: goto tr2257;
		case 46: goto tr2258;
		case 60: goto tr2259;
		case 61: goto tr2260;
		case 62: goto tr2261;
		case 91: goto tr2262;
		case 94: goto tr2263;
		case 123: goto tr2264;
		case 124: goto tr2265;
		case 126: goto tr2266;
	}
	goto tr0;
st576:
	if ( ++p == pe )
		goto _out576;
case 576:
	if ( (*p) == 10 )
		goto st575;
	goto tr0;
tr2281:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st577;
tr2292:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st577;
tr2303:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st577;
tr2314:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st577;
tr2325:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st577;
tr2336:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st577;
tr2347:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st577;
tr2358:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st577;
st577:
	if ( ++p == pe )
		goto _out577;
case 577:
#line 17130 "superredcloth_scan.c"
	if ( (*p) == 93 )
		goto tr0;
	goto tr2267;
tr2267:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st578;
st578:
	if ( ++p == pe )
		goto _out578;
case 578:
#line 17142 "superredcloth_scan.c"
	if ( (*p) == 93 )
		goto tr2269;
	goto st578;
tr2283:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st579;
tr2294:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st579;
tr2305:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st579;
tr2316:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st579;
tr2327:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st579;
tr2338:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st579;
tr2349:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st579;
tr2360:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st579;
st579:
	if ( ++p == pe )
		goto _out579;
case 579:
#line 17184 "superredcloth_scan.c"
	if ( (*p) == 125 )
		goto tr0;
	goto tr2270;
tr2270:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st580;
st580:
	if ( ++p == pe )
		goto _out580;
case 580:
#line 17196 "superredcloth_scan.c"
	if ( (*p) == 125 )
		goto tr2272;
	goto st580;
tr2234:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st581;
tr2362:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st581;
tr2372:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st581;
tr2382:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st581;
tr2392:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st581;
tr2457:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st581;
tr2467:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st581;
tr2477:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st581;
st581:
	if ( ++p == pe )
		goto _out581;
case 581:
#line 17254 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2246;
		case 40: goto tr2234;
		case 41: goto tr2273;
		case 45: goto tr2236;
		case 46: goto tr2237;
		case 60: goto tr2238;
		case 61: goto tr2239;
		case 62: goto tr2240;
		case 91: goto tr2241;
		case 94: goto tr2242;
		case 123: goto tr2243;
		case 126: goto tr2244;
	}
	goto tr2232;
tr2222:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st582;
tr2235:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st582;
tr2273:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st582;
tr2275:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st582;
tr2286:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st582;
tr2297:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st582;
tr2308:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st582;
tr2319:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st582;
tr2330:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st582;
tr2341:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st582;
tr2352:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st582;
tr2363:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st582;
tr2373:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st582;
tr2383:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st582;
tr2393:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st582;
tr2458:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st582;
tr2468:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st582;
tr2478:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st582;
st582:
	if ( ++p == pe )
		goto _out582;
case 582:
#line 17400 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr2274;
		case 41: goto tr2275;
		case 45: goto tr2276;
		case 46: goto tr2277;
		case 60: goto tr2278;
		case 61: goto tr2279;
		case 62: goto tr2280;
		case 91: goto tr2281;
		case 94: goto tr2282;
		case 123: goto tr2283;
		case 126: goto tr2284;
	}
	goto tr0;
tr2276:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st583;
tr2287:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st583;
tr2298:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st583;
tr2309:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st583;
tr2320:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st583;
tr2331:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st583;
tr2342:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st583;
tr2353:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st583;
st583:
	if ( ++p == pe )
		goto _out583;
case 583:
#line 17453 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr2285;
		case 41: goto tr2286;
		case 45: goto tr2287;
		case 46: goto tr2288;
		case 60: goto tr2289;
		case 61: goto tr2290;
		case 62: goto tr2291;
		case 91: goto tr2292;
		case 94: goto tr2293;
		case 123: goto tr2294;
		case 126: goto tr2295;
	}
	goto tr0;
tr2278:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st584;
tr2289:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st584;
tr2300:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st584;
tr2311:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st584;
tr2322:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st584;
tr2333:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st584;
tr2344:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st584;
tr2355:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st584;
st584:
	if ( ++p == pe )
		goto _out584;
case 584:
#line 17506 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr2296;
		case 41: goto tr2297;
		case 45: goto tr2298;
		case 46: goto tr2299;
		case 60: goto tr2300;
		case 61: goto tr2301;
		case 62: goto tr2302;
		case 91: goto tr2303;
		case 94: goto tr2304;
		case 123: goto tr2305;
		case 126: goto tr2306;
	}
	goto tr0;
tr2279:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st585;
tr2290:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st585;
tr2301:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st585;
tr2312:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st585;
tr2323:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st585;
tr2334:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st585;
tr2345:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st585;
tr2356:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st585;
st585:
	if ( ++p == pe )
		goto _out585;
case 585:
#line 17559 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr2307;
		case 41: goto tr2308;
		case 45: goto tr2309;
		case 46: goto tr2310;
		case 60: goto tr2311;
		case 61: goto tr2312;
		case 62: goto tr2313;
		case 91: goto tr2314;
		case 94: goto tr2315;
		case 123: goto tr2316;
		case 126: goto tr2317;
	}
	goto tr0;
tr2280:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st586;
tr2291:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st586;
tr2313:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st586;
tr2324:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st586;
tr2335:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st586;
tr2346:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st586;
tr2357:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st586;
st586:
	if ( ++p == pe )
		goto _out586;
case 586:
#line 17608 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr2318;
		case 41: goto tr2319;
		case 45: goto tr2320;
		case 46: goto tr2321;
		case 60: goto tr2322;
		case 61: goto tr2323;
		case 62: goto tr2324;
		case 91: goto tr2325;
		case 94: goto tr2326;
		case 123: goto tr2327;
		case 126: goto tr2328;
	}
	goto tr0;
tr2282:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st587;
tr2293:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st587;
tr2304:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st587;
tr2315:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st587;
tr2326:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st587;
tr2337:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st587;
tr2348:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st587;
tr2359:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st587;
st587:
	if ( ++p == pe )
		goto _out587;
case 587:
#line 17661 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr2329;
		case 41: goto tr2330;
		case 45: goto tr2331;
		case 46: goto tr2332;
		case 60: goto tr2333;
		case 61: goto tr2334;
		case 62: goto tr2335;
		case 91: goto tr2336;
		case 94: goto tr2337;
		case 123: goto tr2338;
		case 126: goto tr2339;
	}
	goto tr0;
tr2284:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st588;
tr2295:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st588;
tr2306:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st588;
tr2317:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st588;
tr2328:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st588;
tr2339:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st588;
tr2350:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st588;
tr2361:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st588;
st588:
	if ( ++p == pe )
		goto _out588;
case 588:
#line 17714 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr2340;
		case 41: goto tr2341;
		case 45: goto tr2342;
		case 46: goto tr2343;
		case 60: goto tr2344;
		case 61: goto tr2345;
		case 62: goto tr2346;
		case 91: goto tr2347;
		case 94: goto tr2348;
		case 123: goto tr2349;
		case 126: goto tr2350;
	}
	goto tr0;
tr2302:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st589;
st589:
	if ( ++p == pe )
		goto _out589;
case 589:
#line 17737 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr2351;
		case 41: goto tr2352;
		case 45: goto tr2353;
		case 46: goto tr2354;
		case 60: goto tr2355;
		case 61: goto tr2356;
		case 62: goto tr2357;
		case 91: goto tr2358;
		case 94: goto tr2359;
		case 123: goto tr2360;
		case 126: goto tr2361;
	}
	goto tr0;
tr2236:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st590;
tr2364:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st590;
tr2374:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st590;
tr2384:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st590;
tr2394:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st590;
tr2459:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st590;
tr2469:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st590;
tr2479:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st590;
st590:
	if ( ++p == pe )
		goto _out590;
case 590:
#line 17792 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2246;
		case 40: goto tr2362;
		case 41: goto tr2363;
		case 45: goto tr2364;
		case 46: goto tr2288;
		case 60: goto tr2365;
		case 61: goto tr2366;
		case 62: goto tr2367;
		case 91: goto tr2368;
		case 94: goto tr2369;
		case 123: goto tr2370;
		case 126: goto tr2371;
	}
	goto st569;
tr2238:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st591;
tr2365:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st591;
tr2375:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st591;
tr2385:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st591;
tr2395:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st591;
tr2460:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st591;
tr2470:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st591;
tr2480:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st591;
st591:
	if ( ++p == pe )
		goto _out591;
case 591:
#line 17848 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2246;
		case 40: goto tr2372;
		case 41: goto tr2373;
		case 45: goto tr2374;
		case 46: goto tr2299;
		case 60: goto tr2375;
		case 61: goto tr2376;
		case 62: goto tr2377;
		case 91: goto tr2378;
		case 94: goto tr2379;
		case 123: goto tr2380;
		case 126: goto tr2381;
	}
	goto st569;
tr2239:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st592;
tr2366:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st592;
tr2376:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st592;
tr2386:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st592;
tr2396:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st592;
tr2461:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st592;
tr2471:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st592;
tr2481:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st592;
st592:
	if ( ++p == pe )
		goto _out592;
case 592:
#line 17904 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2246;
		case 40: goto tr2382;
		case 41: goto tr2383;
		case 45: goto tr2384;
		case 46: goto tr2310;
		case 60: goto tr2385;
		case 61: goto tr2386;
		case 62: goto tr2387;
		case 91: goto tr2388;
		case 94: goto tr2389;
		case 123: goto tr2390;
		case 126: goto tr2391;
	}
	goto st569;
tr2240:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st593;
tr2367:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st593;
tr2387:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st593;
tr2397:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st593;
tr2462:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st593;
tr2472:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st593;
tr2482:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st593;
st593:
	if ( ++p == pe )
		goto _out593;
case 593:
#line 17956 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2246;
		case 40: goto tr2392;
		case 41: goto tr2393;
		case 45: goto tr2394;
		case 46: goto tr2321;
		case 60: goto tr2395;
		case 61: goto tr2396;
		case 62: goto tr2397;
		case 91: goto tr2398;
		case 94: goto tr2399;
		case 123: goto tr2400;
		case 126: goto tr2401;
	}
	goto st569;
tr2241:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st594;
tr2368:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st594;
tr2378:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st594;
tr2388:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st594;
tr2398:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st594;
tr2463:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st594;
tr2473:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st594;
tr2483:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st594;
st594:
	if ( ++p == pe )
		goto _out594;
case 594:
#line 18012 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2403;
		case 41: goto tr2404;
		case 93: goto st569;
	}
	goto tr2402;
tr2402:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st595;
st595:
	if ( ++p == pe )
		goto _out595;
case 595:
#line 18027 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2406;
		case 41: goto tr2407;
		case 93: goto tr2408;
	}
	goto st595;
tr2406:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st596;
tr2403:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st596;
st596:
	if ( ++p == pe )
		goto _out596;
case 596:
#line 18048 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto st578;
		case 93: goto tr2410;
	}
	goto tr2409;
tr2409:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st597;
st597:
	if ( ++p == pe )
		goto _out597;
case 597:
#line 18062 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto tr2412;
		case 93: goto tr2413;
	}
	goto st597;
tr2407:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st598;
tr2412:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st598;
tr2445:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st598;
tr2404:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st598;
tr2442:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st598;
tr2454:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st598;
st598:
	if ( ++p == pe )
		goto _out598;
case 598:
#line 18102 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto st599;
		case 46: goto st574;
		case 91: goto st617;
		case 93: goto tr2269;
		case 123: goto st618;
	}
	goto st578;
st599:
	if ( ++p == pe )
		goto _out599;
case 599:
	switch( (*p) ) {
		case 35: goto st596;
		case 41: goto st598;
		case 93: goto tr2419;
	}
	goto tr2402;
tr2408:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st600;
tr2429:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st600;
tr2419:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st600;
tr2440:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st600;
st600:
	if ( ++p == pe )
		goto _out600;
case 600:
#line 18145 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2246;
		case 40: goto st601;
		case 41: goto tr2247;
		case 46: goto st574;
		case 91: goto st594;
		case 123: goto st602;
	}
	goto st569;
st601:
	if ( ++p == pe )
		goto _out601;
case 601:
	switch( (*p) ) {
		case 35: goto tr2246;
		case 41: goto tr2247;
	}
	goto tr2232;
tr2243:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st602;
tr2370:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st602;
tr2380:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st602;
tr2390:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st602;
tr2400:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st602;
tr2465:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st602;
tr2475:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st602;
tr2485:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st602;
st602:
	if ( ++p == pe )
		goto _out602;
case 602:
#line 18204 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2424;
		case 41: goto tr2425;
		case 125: goto st569;
	}
	goto tr2423;
tr2423:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st603;
st603:
	if ( ++p == pe )
		goto _out603;
case 603:
#line 18219 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2427;
		case 41: goto tr2428;
		case 125: goto tr2429;
	}
	goto st603;
tr2427:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st604;
tr2424:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st604;
st604:
	if ( ++p == pe )
		goto _out604;
case 604:
#line 18240 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto st580;
		case 125: goto tr2431;
	}
	goto tr2430;
tr2430:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st605;
st605:
	if ( ++p == pe )
		goto _out605;
case 605:
#line 18254 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto tr2433;
		case 125: goto tr2434;
	}
	goto st605;
tr2428:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st606;
tr2433:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st606;
tr2444:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st606;
tr2425:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st606;
tr2456:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st606;
tr2455:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st606;
st606:
	if ( ++p == pe )
		goto _out606;
case 606:
#line 18294 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto st607;
		case 46: goto st574;
		case 91: goto st608;
		case 123: goto st610;
		case 125: goto tr2272;
	}
	goto st580;
st607:
	if ( ++p == pe )
		goto _out607;
case 607:
	switch( (*p) ) {
		case 35: goto st604;
		case 41: goto st606;
		case 125: goto tr2440;
	}
	goto tr2423;
st608:
	if ( ++p == pe )
		goto _out608;
case 608:
	switch( (*p) ) {
		case 93: goto st580;
		case 125: goto tr2442;
	}
	goto tr2441;
tr2441:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st609;
st609:
	if ( ++p == pe )
		goto _out609;
case 609:
#line 18330 "superredcloth_scan.c"
	switch( (*p) ) {
		case 93: goto tr2444;
		case 125: goto tr2445;
	}
	goto st609;
st610:
	if ( ++p == pe )
		goto _out610;
case 610:
	if ( (*p) == 125 )
		goto tr2272;
	goto tr2270;
tr2413:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st611;
tr2434:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st611;
tr2410:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st611;
tr2431:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st611;
st611:
	if ( ++p == pe )
		goto _out611;
case 611:
#line 18367 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto st612;
		case 41: goto tr2250;
		case 46: goto st574;
		case 91: goto st615;
		case 123: goto st616;
	}
	goto st571;
st612:
	if ( ++p == pe )
		goto _out612;
case 612:
	switch( (*p) ) {
		case 35: goto st614;
		case 41: goto tr2250;
	}
	goto tr2449;
tr2449:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st613;
st613:
	if ( ++p == pe )
		goto _out613;
case 613:
#line 18393 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2452;
		case 41: goto tr2453;
	}
	goto st613;
tr2452:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st614;
st614:
	if ( ++p == pe )
		goto _out614;
case 614:
#line 18407 "superredcloth_scan.c"
	if ( (*p) == 41 )
		goto tr2250;
	goto tr2248;
st615:
	if ( ++p == pe )
		goto _out615;
case 615:
	switch( (*p) ) {
		case 41: goto tr2454;
		case 93: goto st571;
	}
	goto tr2409;
st616:
	if ( ++p == pe )
		goto _out616;
case 616:
	switch( (*p) ) {
		case 41: goto tr2455;
		case 125: goto st571;
	}
	goto tr2430;
st617:
	if ( ++p == pe )
		goto _out617;
case 617:
	if ( (*p) == 93 )
		goto tr2269;
	goto tr2267;
st618:
	if ( ++p == pe )
		goto _out618;
case 618:
	switch( (*p) ) {
		case 93: goto tr2456;
		case 125: goto st578;
	}
	goto tr2441;
tr2242:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st619;
tr2369:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st619;
tr2379:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st619;
tr2389:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st619;
tr2399:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st619;
tr2464:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st619;
tr2474:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st619;
tr2484:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st619;
st619:
	if ( ++p == pe )
		goto _out619;
case 619:
#line 18485 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2246;
		case 40: goto tr2457;
		case 41: goto tr2458;
		case 45: goto tr2459;
		case 46: goto tr2332;
		case 60: goto tr2460;
		case 61: goto tr2461;
		case 62: goto tr2462;
		case 91: goto tr2463;
		case 94: goto tr2464;
		case 123: goto tr2465;
		case 126: goto tr2466;
	}
	goto st569;
tr2244:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st620;
tr2371:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st620;
tr2381:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st620;
tr2391:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st620;
tr2401:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st620;
tr2466:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st620;
tr2476:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st620;
tr2486:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st620;
st620:
	if ( ++p == pe )
		goto _out620;
case 620:
#line 18541 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2246;
		case 40: goto tr2467;
		case 41: goto tr2468;
		case 45: goto tr2469;
		case 46: goto tr2343;
		case 60: goto tr2470;
		case 61: goto tr2471;
		case 62: goto tr2472;
		case 91: goto tr2473;
		case 94: goto tr2474;
		case 123: goto tr2475;
		case 126: goto tr2476;
	}
	goto st569;
tr2377:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st621;
st621:
	if ( ++p == pe )
		goto _out621;
case 621:
#line 18565 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2246;
		case 40: goto tr2477;
		case 41: goto tr2478;
		case 45: goto tr2479;
		case 46: goto tr2354;
		case 60: goto tr2480;
		case 61: goto tr2481;
		case 62: goto tr2482;
		case 91: goto tr2483;
		case 94: goto tr2484;
		case 123: goto tr2485;
		case 126: goto tr2486;
	}
	goto st569;
tr2831:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
#line 48 "superredcloth_scan.rl"
	{ reg = NULL; }
#line 48 "superredcloth_scan.rl"
	{INLINE(table, table_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 83 "superredcloth_scan.rl"
	{act = 17;}
	goto st721;
st721:
	if ( ++p == pe )
		goto _out721;
case 721:
#line 18597 "superredcloth_scan.c"
	if ( (*p) == 125 )
		goto tr2834;
	goto tr1456;
tr2832:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
#line 48 "superredcloth_scan.rl"
	{ reg = NULL; }
#line 48 "superredcloth_scan.rl"
	{INLINE(table, table_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 83 "superredcloth_scan.rl"
	{act = 17;}
	goto st722;
st722:
	if ( ++p == pe )
		goto _out722;
case 722:
#line 18617 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr2834;
		case 10: goto tr2834;
		case 40: goto tr313;
		case 41: goto tr314;
		case 45: goto tr315;
		case 46: goto tr316;
		case 47: goto tr317;
		case 60: goto tr318;
		case 61: goto tr319;
		case 62: goto tr320;
		case 91: goto tr321;
		case 92: goto tr322;
		case 94: goto tr323;
		case 95: goto tr324;
		case 123: goto tr325;
		case 126: goto tr326;
	}
	goto tr312;
tr2833:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
#line 48 "superredcloth_scan.rl"
	{ reg = NULL; }
#line 48 "superredcloth_scan.rl"
	{INLINE(table, table_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 83 "superredcloth_scan.rl"
	{act = 17;}
	goto st723;
st723:
	if ( ++p == pe )
		goto _out723;
case 723:
#line 18653 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1664;
		case 41: goto tr1665;
		case 45: goto tr1666;
		case 46: goto tr1595;
		case 60: goto tr1667;
		case 61: goto tr1668;
		case 62: goto tr1669;
		case 91: goto tr1670;
		case 94: goto tr1671;
		case 123: goto tr1672;
		case 126: goto tr1673;
	}
	goto tr2834;
tr2487:
#line 8 "superredcloth_scan.rl"
	{{p = ((tokend))-1;}{ CAT(block); }}
	goto st724;
tr2491:
#line 51 "superredcloth_scan.rl"
	{tokend = p+1;{ DONE(block); {goto st697;} }}
	goto st724;
tr2879:
#line 8 "superredcloth_scan.rl"
	{tokend = p+1;{ CAT(block); }}
	goto st724;
tr2882:
#line 8 "superredcloth_scan.rl"
	{tokend = p;p--;{ CAT(block); }}
	goto st724;
st724:
#line 1 "superredcloth_scan.rl"
	{tokstart = 0;}
	if ( ++p == pe )
		goto _out724;
case 724:
#line 1 "superredcloth_scan.rl"
	{tokstart = p;}
#line 18692 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st0;
		case 60: goto tr2881;
	}
	goto tr2879;
st0:
	goto _out0;
tr2881:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
	goto st725;
st725:
	if ( ++p == pe )
		goto _out725;
case 725:
#line 18708 "superredcloth_scan.c"
	if ( (*p) == 47 )
		goto st622;
	goto tr2882;
st622:
	if ( ++p == pe )
		goto _out622;
case 622:
	if ( (*p) == 112 )
		goto st623;
	goto tr2487;
st623:
	if ( ++p == pe )
		goto _out623;
case 623:
	if ( (*p) == 114 )
		goto st624;
	goto tr2487;
st624:
	if ( ++p == pe )
		goto _out624;
case 624:
	if ( (*p) == 101 )
		goto st625;
	goto tr2487;
st625:
	if ( ++p == pe )
		goto _out625;
case 625:
	if ( (*p) == 62 )
		goto tr2491;
	goto tr2487;
tr2492:
#line 8 "superredcloth_scan.rl"
	{{p = ((tokend))-1;}{ CAT(block); }}
	goto st726;
tr2502:
#line 56 "superredcloth_scan.rl"
	{tokend = p+1;{ DONE(block); {goto st697;} }}
	goto st726;
tr2884:
#line 8 "superredcloth_scan.rl"
	{tokend = p+1;{ CAT(block); }}
	goto st726;
tr2886:
#line 8 "superredcloth_scan.rl"
	{tokend = p;p--;{ CAT(block); }}
	goto st726;
st726:
#line 1 "superredcloth_scan.rl"
	{tokstart = 0;}
	if ( ++p == pe )
		goto _out726;
case 726:
#line 1 "superredcloth_scan.rl"
	{tokstart = p;}
#line 18764 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st0;
		case 60: goto tr2885;
	}
	goto tr2884;
tr2885:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
	goto st727;
st727:
	if ( ++p == pe )
		goto _out727;
case 727:
#line 18778 "superredcloth_scan.c"
	if ( (*p) == 47 )
		goto st626;
	goto tr2886;
st626:
	if ( ++p == pe )
		goto _out626;
case 626:
	if ( (*p) == 110 )
		goto st627;
	goto tr2492;
st627:
	if ( ++p == pe )
		goto _out627;
case 627:
	if ( (*p) == 111 )
		goto st628;
	goto tr2492;
st628:
	if ( ++p == pe )
		goto _out628;
case 628:
	if ( (*p) == 116 )
		goto st629;
	goto tr2492;
st629:
	if ( ++p == pe )
		goto _out629;
case 629:
	if ( (*p) == 101 )
		goto st630;
	goto tr2492;
st630:
	if ( ++p == pe )
		goto _out630;
case 630:
	if ( (*p) == 120 )
		goto st631;
	goto tr2492;
st631:
	if ( ++p == pe )
		goto _out631;
case 631:
	if ( (*p) == 116 )
		goto st632;
	goto tr2492;
st632:
	if ( ++p == pe )
		goto _out632;
case 632:
	if ( (*p) == 105 )
		goto st633;
	goto tr2492;
st633:
	if ( ++p == pe )
		goto _out633;
case 633:
	if ( (*p) == 108 )
		goto st634;
	goto tr2492;
st634:
	if ( ++p == pe )
		goto _out634;
case 634:
	if ( (*p) == 101 )
		goto st635;
	goto tr2492;
st635:
	if ( ++p == pe )
		goto _out635;
case 635:
	if ( (*p) == 62 )
		goto tr2502;
	goto tr2492;
tr2503:
#line 8 "superredcloth_scan.rl"
	{{p = ((tokend))-1;}{ CAT(block); }}
	goto st728;
tr2504:
#line 61 "superredcloth_scan.rl"
	{tokend = p+1;{ ADD_BLOCK(); {goto st697;} }}
	goto st728;
tr2888:
#line 8 "superredcloth_scan.rl"
	{tokend = p+1;{ CAT(block); }}
	goto st728;
tr2891:
#line 8 "superredcloth_scan.rl"
	{tokend = p;p--;{ CAT(block); }}
	goto st728;
st728:
#line 1 "superredcloth_scan.rl"
	{tokstart = 0;}
	if ( ++p == pe )
		goto _out728;
case 728:
#line 1 "superredcloth_scan.rl"
	{tokstart = p;}
#line 18876 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr2504;
		case 10: goto tr2889;
		case 13: goto tr2890;
	}
	goto tr2888;
tr2889:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
	goto st729;
st729:
	if ( ++p == pe )
		goto _out729;
case 729:
#line 18891 "superredcloth_scan.c"
	switch( (*p) ) {
		case 10: goto tr2504;
		case 13: goto st636;
	}
	goto tr2891;
st636:
	if ( ++p == pe )
		goto _out636;
case 636:
	if ( (*p) == 10 )
		goto tr2504;
	goto tr2503;
tr2890:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
	goto st730;
st730:
	if ( ++p == pe )
		goto _out730;
case 730:
#line 18912 "superredcloth_scan.c"
	if ( (*p) == 10 )
		goto st637;
	goto tr2891;
st637:
	if ( ++p == pe )
		goto _out637;
case 637:
	switch( (*p) ) {
		case 10: goto tr2504;
		case 13: goto st636;
	}
	goto tr2503;
tr2506:
#line 8 "superredcloth_scan.rl"
	{{p = ((tokend))-1;}{ CAT(block); }}
	goto st731;
tr2507:
#line 66 "superredcloth_scan.rl"
	{tokend = p+1;{ ADD_BLOCK(); {goto st697;} }}
	goto st731;
tr2893:
#line 8 "superredcloth_scan.rl"
	{tokend = p+1;{ CAT(block); }}
	goto st731;
tr2896:
#line 8 "superredcloth_scan.rl"
	{tokend = p;p--;{ CAT(block); }}
	goto st731;
st731:
#line 1 "superredcloth_scan.rl"
	{tokstart = 0;}
	if ( ++p == pe )
		goto _out731;
case 731:
#line 1 "superredcloth_scan.rl"
	{tokstart = p;}
#line 18949 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr2507;
		case 10: goto tr2894;
		case 13: goto tr2895;
	}
	goto tr2893;
tr2894:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
	goto st732;
st732:
	if ( ++p == pe )
		goto _out732;
case 732:
#line 18964 "superredcloth_scan.c"
	switch( (*p) ) {
		case 10: goto tr2507;
		case 13: goto st638;
	}
	goto tr2896;
st638:
	if ( ++p == pe )
		goto _out638;
case 638:
	if ( (*p) == 10 )
		goto tr2507;
	goto tr2506;
tr2895:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
	goto st733;
st733:
	if ( ++p == pe )
		goto _out733;
case 733:
#line 18985 "superredcloth_scan.c"
	if ( (*p) == 10 )
		goto st639;
	goto tr2896;
st639:
	if ( ++p == pe )
		goto _out639;
case 639:
	switch( (*p) ) {
		case 10: goto tr2507;
		case 13: goto st638;
	}
	goto tr2506;
tr2509:
#line 8 "superredcloth_scan.rl"
	{{p = ((tokend))-1;}{ CAT(block); }}
	goto st734;
tr2510:
#line 72 "superredcloth_scan.rl"
	{tokend = p+1;{ ADD_BLOCK(); nest = 0; LIST_ITEM(); {goto st697;} }}
	goto st734;
tr2898:
#line 8 "superredcloth_scan.rl"
	{tokend = p+1;{ CAT(block); }}
	goto st734;
tr2901:
#line 8 "superredcloth_scan.rl"
	{tokend = p;p--;{ CAT(block); }}
	goto st734;
tr2902:
#line 71 "superredcloth_scan.rl"
	{tokend = p;p--;{ ADD_BLOCK(); LIST_ITEM(); }}
	goto st734;
st734:
#line 1 "superredcloth_scan.rl"
	{tokstart = 0;}
	if ( ++p == pe )
		goto _out734;
case 734:
#line 1 "superredcloth_scan.rl"
	{tokstart = p;}
#line 19026 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr2510;
		case 10: goto tr2899;
		case 13: goto tr2900;
	}
	goto tr2898;
tr2899:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
	goto st735;
st735:
	if ( ++p == pe )
		goto _out735;
case 735:
#line 19041 "superredcloth_scan.c"
	switch( (*p) ) {
		case 10: goto tr2510;
		case 13: goto st640;
		case 35: goto tr2809;
		case 42: goto tr2810;
	}
	goto tr2901;
st640:
	if ( ++p == pe )
		goto _out640;
case 640:
	if ( (*p) == 10 )
		goto tr2510;
	goto tr2509;
tr2512:
#line 36 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
	goto st641;
tr2771:
#line 35 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
	goto st641;
tr2809:
#line 37 "superredcloth_scan.rl"
	{nest = 0;}
	goto st641;
st641:
	if ( ++p == pe )
		goto _out641;
case 641:
#line 19072 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr2511;
		case 35: goto tr2512;
		case 40: goto tr2513;
		case 41: goto tr2514;
		case 42: goto tr2515;
		case 45: goto tr2516;
		case 60: goto tr2518;
		case 61: goto tr2519;
		case 62: goto tr2520;
		case 91: goto tr2521;
		case 94: goto tr2522;
		case 95: goto tr2523;
		case 123: goto tr2524;
		case 126: goto tr2525;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr2517;
	goto tr2509;
tr2511:
#line 36 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
	goto st736;
tr2527:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
	goto st736;
tr2557:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st736;
tr2568:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st736;
tr2579:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st736;
tr2590:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st736;
tr2601:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st736;
tr2612:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st736;
tr2623:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st736;
tr2634:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st736;
tr2770:
#line 35 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
	goto st736;
tr2785:
#line 39 "superredcloth_scan.rl"
	{ STORE(start) }
	goto st736;
tr2797:
#line 38 "superredcloth_scan.rl"
	{ ASET(start, continue) }
	goto st736;
st736:
	if ( ++p == pe )
		goto _out736;
case 736:
#line 19150 "superredcloth_scan.c"
	if ( (*p) == 32 )
		goto st736;
	goto tr2902;
tr2513:
#line 36 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st642;
tr2558:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st642;
tr2569:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st642;
tr2580:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st642;
tr2591:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st642;
tr2602:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st642;
tr2613:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st642;
tr2624:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st642;
tr2635:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st642;
tr2772:
#line 35 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st642;
tr2786:
#line 39 "superredcloth_scan.rl"
	{ STORE(start) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st642;
tr2798:
#line 38 "superredcloth_scan.rl"
	{ ASET(start, continue) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st642;
st642:
	if ( ++p == pe )
		goto _out642;
case 642:
#line 19232 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr2527;
		case 35: goto st644;
		case 40: goto tr2529;
		case 41: goto tr2530;
		case 45: goto tr2531;
		case 60: goto tr2532;
		case 61: goto tr2533;
		case 62: goto tr2534;
		case 91: goto tr2535;
		case 94: goto tr2536;
		case 123: goto tr2537;
		case 126: goto tr2538;
	}
	goto tr2526;
tr2526:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st643;
st643:
	if ( ++p == pe )
		goto _out643;
case 643:
#line 19256 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2540;
		case 41: goto tr2541;
	}
	goto st643;
tr2540:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st644;
st644:
	if ( ++p == pe )
		goto _out644;
case 644:
#line 19270 "superredcloth_scan.c"
	if ( (*p) == 41 )
		goto tr2509;
	goto tr2542;
tr2542:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st645;
st645:
	if ( ++p == pe )
		goto _out645;
case 645:
#line 19282 "superredcloth_scan.c"
	if ( (*p) == 41 )
		goto tr2544;
	goto st645;
tr2541:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st646;
tr2544:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st646;
tr2552:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st646;
tr2555:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st646;
tr2736:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st646;
st646:
	if ( ++p == pe )
		goto _out646;
case 646:
#line 19312 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto st736;
		case 40: goto st647;
		case 91: goto st648;
		case 123: goto st650;
	}
	goto tr2509;
st647:
	if ( ++p == pe )
		goto _out647;
case 647:
	switch( (*p) ) {
		case 35: goto st644;
		case 41: goto st646;
	}
	goto tr2526;
tr2521:
#line 36 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
	goto st648;
tr2564:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st648;
tr2575:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st648;
tr2586:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st648;
tr2597:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st648;
tr2608:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st648;
tr2619:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st648;
tr2630:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st648;
tr2641:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st648;
tr2780:
#line 35 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
	goto st648;
tr2793:
#line 39 "superredcloth_scan.rl"
	{ STORE(start) }
	goto st648;
tr2804:
#line 38 "superredcloth_scan.rl"
	{ ASET(start, continue) }
	goto st648;
st648:
	if ( ++p == pe )
		goto _out648;
case 648:
#line 19383 "superredcloth_scan.c"
	if ( (*p) == 93 )
		goto tr2509;
	goto tr2550;
tr2550:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st649;
st649:
	if ( ++p == pe )
		goto _out649;
case 649:
#line 19395 "superredcloth_scan.c"
	if ( (*p) == 93 )
		goto tr2552;
	goto st649;
tr2524:
#line 36 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
	goto st650;
tr2566:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st650;
tr2577:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st650;
tr2588:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st650;
tr2599:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st650;
tr2610:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st650;
tr2621:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st650;
tr2632:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st650;
tr2643:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st650;
tr2783:
#line 35 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
	goto st650;
tr2795:
#line 39 "superredcloth_scan.rl"
	{ STORE(start) }
	goto st650;
tr2806:
#line 38 "superredcloth_scan.rl"
	{ ASET(start, continue) }
	goto st650;
st650:
	if ( ++p == pe )
		goto _out650;
case 650:
#line 19453 "superredcloth_scan.c"
	if ( (*p) == 125 )
		goto tr2509;
	goto tr2553;
tr2553:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st651;
st651:
	if ( ++p == pe )
		goto _out651;
case 651:
#line 19465 "superredcloth_scan.c"
	if ( (*p) == 125 )
		goto tr2555;
	goto st651;
tr2529:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st652;
tr2645:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st652;
tr2655:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st652;
tr2665:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st652;
tr2675:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st652;
tr2740:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st652;
tr2750:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st652;
tr2760:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st652;
st652:
	if ( ++p == pe )
		goto _out652;
case 652:
#line 19523 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr2527;
		case 35: goto tr2540;
		case 40: goto tr2529;
		case 41: goto tr2556;
		case 45: goto tr2531;
		case 60: goto tr2532;
		case 61: goto tr2533;
		case 62: goto tr2534;
		case 91: goto tr2535;
		case 94: goto tr2536;
		case 123: goto tr2537;
		case 126: goto tr2538;
	}
	goto tr2526;
tr2514:
#line 36 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st653;
tr2530:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st653;
tr2556:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st653;
tr2559:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st653;
tr2570:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st653;
tr2581:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st653;
tr2592:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st653;
tr2603:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st653;
tr2614:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st653;
tr2625:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st653;
tr2636:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st653;
tr2646:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st653;
tr2656:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st653;
tr2666:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st653;
tr2676:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st653;
tr2741:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st653;
tr2751:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st653;
tr2761:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st653;
tr2773:
#line 35 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st653;
tr2787:
#line 39 "superredcloth_scan.rl"
	{ STORE(start) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st653;
tr2799:
#line 38 "superredcloth_scan.rl"
	{ ASET(start, continue) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st653;
st653:
	if ( ++p == pe )
		goto _out653;
case 653:
#line 19689 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr2557;
		case 40: goto tr2558;
		case 41: goto tr2559;
		case 45: goto tr2560;
		case 60: goto tr2561;
		case 61: goto tr2562;
		case 62: goto tr2563;
		case 91: goto tr2564;
		case 94: goto tr2565;
		case 123: goto tr2566;
		case 126: goto tr2567;
	}
	goto tr2509;
tr2516:
#line 36 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
	goto st654;
tr2560:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st654;
tr2571:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st654;
tr2582:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st654;
tr2593:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st654;
tr2604:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st654;
tr2615:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st654;
tr2626:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st654;
tr2637:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st654;
tr2775:
#line 35 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
	goto st654;
tr2788:
#line 39 "superredcloth_scan.rl"
	{ STORE(start) }
	goto st654;
tr2800:
#line 38 "superredcloth_scan.rl"
	{ ASET(start, continue) }
	goto st654;
st654:
	if ( ++p == pe )
		goto _out654;
case 654:
#line 19758 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr2568;
		case 40: goto tr2569;
		case 41: goto tr2570;
		case 45: goto tr2571;
		case 60: goto tr2572;
		case 61: goto tr2573;
		case 62: goto tr2574;
		case 91: goto tr2575;
		case 94: goto tr2576;
		case 123: goto tr2577;
		case 126: goto tr2578;
	}
	goto tr2509;
tr2518:
#line 36 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
	goto st655;
tr2561:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st655;
tr2572:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st655;
tr2583:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st655;
tr2594:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st655;
tr2605:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st655;
tr2616:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st655;
tr2627:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st655;
tr2638:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st655;
tr2777:
#line 35 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
	goto st655;
tr2790:
#line 39 "superredcloth_scan.rl"
	{ STORE(start) }
	goto st655;
tr2801:
#line 38 "superredcloth_scan.rl"
	{ ASET(start, continue) }
	goto st655;
st655:
	if ( ++p == pe )
		goto _out655;
case 655:
#line 19827 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr2579;
		case 40: goto tr2580;
		case 41: goto tr2581;
		case 45: goto tr2582;
		case 60: goto tr2583;
		case 61: goto tr2584;
		case 62: goto tr2585;
		case 91: goto tr2586;
		case 94: goto tr2587;
		case 123: goto tr2588;
		case 126: goto tr2589;
	}
	goto tr2509;
tr2519:
#line 36 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
	goto st656;
tr2562:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st656;
tr2573:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st656;
tr2584:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st656;
tr2595:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st656;
tr2606:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st656;
tr2617:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st656;
tr2628:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st656;
tr2639:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st656;
tr2778:
#line 35 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
	goto st656;
tr2791:
#line 39 "superredcloth_scan.rl"
	{ STORE(start) }
	goto st656;
tr2802:
#line 38 "superredcloth_scan.rl"
	{ ASET(start, continue) }
	goto st656;
st656:
	if ( ++p == pe )
		goto _out656;
case 656:
#line 19896 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr2590;
		case 40: goto tr2591;
		case 41: goto tr2592;
		case 45: goto tr2593;
		case 60: goto tr2594;
		case 61: goto tr2595;
		case 62: goto tr2596;
		case 91: goto tr2597;
		case 94: goto tr2598;
		case 123: goto tr2599;
		case 126: goto tr2600;
	}
	goto tr2509;
tr2520:
#line 36 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
	goto st657;
tr2563:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st657;
tr2574:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st657;
tr2596:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st657;
tr2607:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st657;
tr2618:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st657;
tr2629:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st657;
tr2640:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st657;
tr2779:
#line 35 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
	goto st657;
tr2792:
#line 39 "superredcloth_scan.rl"
	{ STORE(start) }
	goto st657;
tr2803:
#line 38 "superredcloth_scan.rl"
	{ ASET(start, continue) }
	goto st657;
st657:
	if ( ++p == pe )
		goto _out657;
case 657:
#line 19961 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr2601;
		case 40: goto tr2602;
		case 41: goto tr2603;
		case 45: goto tr2604;
		case 60: goto tr2605;
		case 61: goto tr2606;
		case 62: goto tr2607;
		case 91: goto tr2608;
		case 94: goto tr2609;
		case 123: goto tr2610;
		case 126: goto tr2611;
	}
	goto tr2509;
tr2522:
#line 36 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
	goto st658;
tr2565:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st658;
tr2576:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st658;
tr2587:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st658;
tr2598:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st658;
tr2609:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st658;
tr2620:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st658;
tr2631:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st658;
tr2642:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st658;
tr2781:
#line 35 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
	goto st658;
tr2794:
#line 39 "superredcloth_scan.rl"
	{ STORE(start) }
	goto st658;
tr2805:
#line 38 "superredcloth_scan.rl"
	{ ASET(start, continue) }
	goto st658;
st658:
	if ( ++p == pe )
		goto _out658;
case 658:
#line 20030 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr2612;
		case 40: goto tr2613;
		case 41: goto tr2614;
		case 45: goto tr2615;
		case 60: goto tr2616;
		case 61: goto tr2617;
		case 62: goto tr2618;
		case 91: goto tr2619;
		case 94: goto tr2620;
		case 123: goto tr2621;
		case 126: goto tr2622;
	}
	goto tr2509;
tr2525:
#line 36 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
	goto st659;
tr2567:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st659;
tr2578:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st659;
tr2589:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st659;
tr2600:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st659;
tr2611:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st659;
tr2622:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st659;
tr2633:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st659;
tr2644:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st659;
tr2784:
#line 35 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
	goto st659;
tr2796:
#line 39 "superredcloth_scan.rl"
	{ STORE(start) }
	goto st659;
tr2807:
#line 38 "superredcloth_scan.rl"
	{ ASET(start, continue) }
	goto st659;
st659:
	if ( ++p == pe )
		goto _out659;
case 659:
#line 20099 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr2623;
		case 40: goto tr2624;
		case 41: goto tr2625;
		case 45: goto tr2626;
		case 60: goto tr2627;
		case 61: goto tr2628;
		case 62: goto tr2629;
		case 91: goto tr2630;
		case 94: goto tr2631;
		case 123: goto tr2632;
		case 126: goto tr2633;
	}
	goto tr2509;
tr2585:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st660;
st660:
	if ( ++p == pe )
		goto _out660;
case 660:
#line 20122 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr2634;
		case 40: goto tr2635;
		case 41: goto tr2636;
		case 45: goto tr2637;
		case 60: goto tr2638;
		case 61: goto tr2639;
		case 62: goto tr2640;
		case 91: goto tr2641;
		case 94: goto tr2642;
		case 123: goto tr2643;
		case 126: goto tr2644;
	}
	goto tr2509;
tr2531:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st661;
tr2647:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st661;
tr2657:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st661;
tr2667:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st661;
tr2677:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st661;
tr2742:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st661;
tr2752:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st661;
tr2762:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st661;
st661:
	if ( ++p == pe )
		goto _out661;
case 661:
#line 20177 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr2568;
		case 35: goto tr2540;
		case 40: goto tr2645;
		case 41: goto tr2646;
		case 45: goto tr2647;
		case 60: goto tr2648;
		case 61: goto tr2649;
		case 62: goto tr2650;
		case 91: goto tr2651;
		case 94: goto tr2652;
		case 123: goto tr2653;
		case 126: goto tr2654;
	}
	goto st643;
tr2532:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st662;
tr2648:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st662;
tr2658:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st662;
tr2668:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st662;
tr2678:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st662;
tr2743:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st662;
tr2753:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st662;
tr2763:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st662;
st662:
	if ( ++p == pe )
		goto _out662;
case 662:
#line 20233 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr2579;
		case 35: goto tr2540;
		case 40: goto tr2655;
		case 41: goto tr2656;
		case 45: goto tr2657;
		case 60: goto tr2658;
		case 61: goto tr2659;
		case 62: goto tr2660;
		case 91: goto tr2661;
		case 94: goto tr2662;
		case 123: goto tr2663;
		case 126: goto tr2664;
	}
	goto st643;
tr2533:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st663;
tr2649:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st663;
tr2659:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st663;
tr2669:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st663;
tr2679:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st663;
tr2744:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st663;
tr2754:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st663;
tr2764:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st663;
st663:
	if ( ++p == pe )
		goto _out663;
case 663:
#line 20289 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr2590;
		case 35: goto tr2540;
		case 40: goto tr2665;
		case 41: goto tr2666;
		case 45: goto tr2667;
		case 60: goto tr2668;
		case 61: goto tr2669;
		case 62: goto tr2670;
		case 91: goto tr2671;
		case 94: goto tr2672;
		case 123: goto tr2673;
		case 126: goto tr2674;
	}
	goto st643;
tr2534:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st664;
tr2650:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st664;
tr2670:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st664;
tr2680:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st664;
tr2745:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st664;
tr2755:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st664;
tr2765:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st664;
st664:
	if ( ++p == pe )
		goto _out664;
case 664:
#line 20341 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr2601;
		case 35: goto tr2540;
		case 40: goto tr2675;
		case 41: goto tr2676;
		case 45: goto tr2677;
		case 60: goto tr2678;
		case 61: goto tr2679;
		case 62: goto tr2680;
		case 91: goto tr2681;
		case 94: goto tr2682;
		case 123: goto tr2683;
		case 126: goto tr2684;
	}
	goto st643;
tr2535:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st665;
tr2651:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st665;
tr2661:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st665;
tr2671:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st665;
tr2681:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st665;
tr2746:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st665;
tr2756:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st665;
tr2766:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st665;
st665:
	if ( ++p == pe )
		goto _out665;
case 665:
#line 20397 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2686;
		case 41: goto tr2687;
		case 93: goto st643;
	}
	goto tr2685;
tr2685:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st666;
st666:
	if ( ++p == pe )
		goto _out666;
case 666:
#line 20412 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2689;
		case 41: goto tr2690;
		case 93: goto tr2691;
	}
	goto st666;
tr2689:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st667;
tr2686:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st667;
st667:
	if ( ++p == pe )
		goto _out667;
case 667:
#line 20433 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto st649;
		case 93: goto tr2693;
	}
	goto tr2692;
tr2692:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st668;
st668:
	if ( ++p == pe )
		goto _out668;
case 668:
#line 20447 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto tr2695;
		case 93: goto tr2696;
	}
	goto st668;
tr2690:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st669;
tr2695:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st669;
tr2728:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st669;
tr2687:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st669;
tr2725:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st669;
tr2737:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st669;
st669:
	if ( ++p == pe )
		goto _out669;
case 669:
#line 20487 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto st736;
		case 40: goto st670;
		case 91: goto st688;
		case 93: goto tr2552;
		case 123: goto st689;
	}
	goto st649;
st670:
	if ( ++p == pe )
		goto _out670;
case 670:
	switch( (*p) ) {
		case 35: goto st667;
		case 41: goto st669;
		case 93: goto tr2702;
	}
	goto tr2685;
tr2691:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st671;
tr2712:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st671;
tr2702:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st671;
tr2723:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st671;
st671:
	if ( ++p == pe )
		goto _out671;
case 671:
#line 20530 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto st736;
		case 35: goto tr2540;
		case 40: goto st672;
		case 41: goto tr2541;
		case 91: goto st665;
		case 123: goto st673;
	}
	goto st643;
st672:
	if ( ++p == pe )
		goto _out672;
case 672:
	switch( (*p) ) {
		case 35: goto tr2540;
		case 41: goto tr2541;
	}
	goto tr2526;
tr2537:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st673;
tr2653:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st673;
tr2663:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st673;
tr2673:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st673;
tr2683:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st673;
tr2748:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st673;
tr2758:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st673;
tr2768:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st673;
st673:
	if ( ++p == pe )
		goto _out673;
case 673:
#line 20589 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2707;
		case 41: goto tr2708;
		case 125: goto st643;
	}
	goto tr2706;
tr2706:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st674;
st674:
	if ( ++p == pe )
		goto _out674;
case 674:
#line 20604 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2710;
		case 41: goto tr2711;
		case 125: goto tr2712;
	}
	goto st674;
tr2710:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st675;
tr2707:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st675;
st675:
	if ( ++p == pe )
		goto _out675;
case 675:
#line 20625 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto st651;
		case 125: goto tr2714;
	}
	goto tr2713;
tr2713:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st676;
st676:
	if ( ++p == pe )
		goto _out676;
case 676:
#line 20639 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto tr2716;
		case 125: goto tr2717;
	}
	goto st676;
tr2711:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st677;
tr2716:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st677;
tr2727:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st677;
tr2708:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st677;
tr2739:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st677;
tr2738:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st677;
st677:
	if ( ++p == pe )
		goto _out677;
case 677:
#line 20679 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto st736;
		case 40: goto st678;
		case 91: goto st679;
		case 123: goto st681;
		case 125: goto tr2555;
	}
	goto st651;
st678:
	if ( ++p == pe )
		goto _out678;
case 678:
	switch( (*p) ) {
		case 35: goto st675;
		case 41: goto st677;
		case 125: goto tr2723;
	}
	goto tr2706;
st679:
	if ( ++p == pe )
		goto _out679;
case 679:
	switch( (*p) ) {
		case 93: goto st651;
		case 125: goto tr2725;
	}
	goto tr2724;
tr2724:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st680;
st680:
	if ( ++p == pe )
		goto _out680;
case 680:
#line 20715 "superredcloth_scan.c"
	switch( (*p) ) {
		case 93: goto tr2727;
		case 125: goto tr2728;
	}
	goto st680;
st681:
	if ( ++p == pe )
		goto _out681;
case 681:
	if ( (*p) == 125 )
		goto tr2555;
	goto tr2553;
tr2696:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st682;
tr2717:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st682;
tr2693:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st682;
tr2714:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st682;
st682:
	if ( ++p == pe )
		goto _out682;
case 682:
#line 20752 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto st736;
		case 40: goto st683;
		case 41: goto tr2544;
		case 91: goto st686;
		case 123: goto st687;
	}
	goto st645;
st683:
	if ( ++p == pe )
		goto _out683;
case 683:
	switch( (*p) ) {
		case 35: goto st685;
		case 41: goto tr2544;
	}
	goto tr2732;
tr2732:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st684;
st684:
	if ( ++p == pe )
		goto _out684;
case 684:
#line 20778 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2735;
		case 41: goto tr2736;
	}
	goto st684;
tr2735:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st685;
st685:
	if ( ++p == pe )
		goto _out685;
case 685:
#line 20792 "superredcloth_scan.c"
	if ( (*p) == 41 )
		goto tr2544;
	goto tr2542;
st686:
	if ( ++p == pe )
		goto _out686;
case 686:
	switch( (*p) ) {
		case 41: goto tr2737;
		case 93: goto st645;
	}
	goto tr2692;
st687:
	if ( ++p == pe )
		goto _out687;
case 687:
	switch( (*p) ) {
		case 41: goto tr2738;
		case 125: goto st645;
	}
	goto tr2713;
st688:
	if ( ++p == pe )
		goto _out688;
case 688:
	if ( (*p) == 93 )
		goto tr2552;
	goto tr2550;
st689:
	if ( ++p == pe )
		goto _out689;
case 689:
	switch( (*p) ) {
		case 93: goto tr2739;
		case 125: goto st649;
	}
	goto tr2724;
tr2536:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st690;
tr2652:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st690;
tr2662:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st690;
tr2672:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st690;
tr2682:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st690;
tr2747:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st690;
tr2757:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st690;
tr2767:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st690;
st690:
	if ( ++p == pe )
		goto _out690;
case 690:
#line 20870 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr2612;
		case 35: goto tr2540;
		case 40: goto tr2740;
		case 41: goto tr2741;
		case 45: goto tr2742;
		case 60: goto tr2743;
		case 61: goto tr2744;
		case 62: goto tr2745;
		case 91: goto tr2746;
		case 94: goto tr2747;
		case 123: goto tr2748;
		case 126: goto tr2749;
	}
	goto st643;
tr2538:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st691;
tr2654:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st691;
tr2664:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st691;
tr2674:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st691;
tr2684:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st691;
tr2749:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st691;
tr2759:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st691;
tr2769:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st691;
st691:
	if ( ++p == pe )
		goto _out691;
case 691:
#line 20926 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr2623;
		case 35: goto tr2540;
		case 40: goto tr2750;
		case 41: goto tr2751;
		case 45: goto tr2752;
		case 60: goto tr2753;
		case 61: goto tr2754;
		case 62: goto tr2755;
		case 91: goto tr2756;
		case 94: goto tr2757;
		case 123: goto tr2758;
		case 126: goto tr2759;
	}
	goto st643;
tr2660:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st692;
st692:
	if ( ++p == pe )
		goto _out692;
case 692:
#line 20950 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr2634;
		case 35: goto tr2540;
		case 40: goto tr2760;
		case 41: goto tr2761;
		case 45: goto tr2762;
		case 60: goto tr2763;
		case 61: goto tr2764;
		case 62: goto tr2765;
		case 91: goto tr2766;
		case 94: goto tr2767;
		case 123: goto tr2768;
		case 126: goto tr2769;
	}
	goto st643;
tr2515:
#line 36 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
	goto st693;
tr2774:
#line 35 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
	goto st693;
tr2810:
#line 37 "superredcloth_scan.rl"
	{nest = 0;}
	goto st693;
st693:
	if ( ++p == pe )
		goto _out693;
case 693:
#line 20982 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr2770;
		case 35: goto tr2771;
		case 40: goto tr2772;
		case 41: goto tr2773;
		case 42: goto tr2774;
		case 45: goto tr2775;
		case 60: goto tr2777;
		case 61: goto tr2778;
		case 62: goto tr2779;
		case 91: goto tr2780;
		case 94: goto tr2781;
		case 95: goto tr2782;
		case 123: goto tr2783;
		case 126: goto tr2784;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr2776;
	goto tr2509;
tr2517:
#line 36 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st694;
tr2776:
#line 35 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st694;
st694:
	if ( ++p == pe )
		goto _out694;
case 694:
#line 21018 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr2785;
		case 40: goto tr2786;
		case 41: goto tr2787;
		case 45: goto tr2788;
		case 60: goto tr2790;
		case 61: goto tr2791;
		case 62: goto tr2792;
		case 91: goto tr2793;
		case 94: goto tr2794;
		case 123: goto tr2795;
		case 126: goto tr2796;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto st694;
	goto tr2509;
tr2523:
#line 36 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
	goto st695;
tr2782:
#line 35 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
	goto st695;
st695:
	if ( ++p == pe )
		goto _out695;
case 695:
#line 21047 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr2797;
		case 40: goto tr2798;
		case 41: goto tr2799;
		case 45: goto tr2800;
		case 60: goto tr2801;
		case 61: goto tr2802;
		case 62: goto tr2803;
		case 91: goto tr2804;
		case 94: goto tr2805;
		case 123: goto tr2806;
		case 126: goto tr2807;
	}
	goto tr2509;
tr2900:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
	goto st737;
st737:
	if ( ++p == pe )
		goto _out737;
case 737:
#line 21070 "superredcloth_scan.c"
	if ( (*p) == 10 )
		goto st696;
	goto tr2901;
st696:
	if ( ++p == pe )
		goto _out696;
case 696:
	switch( (*p) ) {
		case 10: goto tr2510;
		case 13: goto st640;
		case 35: goto tr2809;
		case 42: goto tr2810;
	}
	goto tr2509;
	}
	_out697: cs = 697; goto _out; 
	_out698: cs = 698; goto _out; 
	_out699: cs = 699; goto _out; 
	_out1: cs = 1; goto _out; 
	_out2: cs = 2; goto _out; 
	_out3: cs = 3; goto _out; 
	_out4: cs = 4; goto _out; 
	_out5: cs = 5; goto _out; 
	_out6: cs = 6; goto _out; 
	_out7: cs = 7; goto _out; 
	_out8: cs = 8; goto _out; 
	_out9: cs = 9; goto _out; 
	_out10: cs = 10; goto _out; 
	_out11: cs = 11; goto _out; 
	_out12: cs = 12; goto _out; 
	_out13: cs = 13; goto _out; 
	_out14: cs = 14; goto _out; 
	_out15: cs = 15; goto _out; 
	_out16: cs = 16; goto _out; 
	_out17: cs = 17; goto _out; 
	_out18: cs = 18; goto _out; 
	_out19: cs = 19; goto _out; 
	_out20: cs = 20; goto _out; 
	_out21: cs = 21; goto _out; 
	_out22: cs = 22; goto _out; 
	_out23: cs = 23; goto _out; 
	_out24: cs = 24; goto _out; 
	_out25: cs = 25; goto _out; 
	_out26: cs = 26; goto _out; 
	_out27: cs = 27; goto _out; 
	_out28: cs = 28; goto _out; 
	_out29: cs = 29; goto _out; 
	_out30: cs = 30; goto _out; 
	_out31: cs = 31; goto _out; 
	_out32: cs = 32; goto _out; 
	_out33: cs = 33; goto _out; 
	_out34: cs = 34; goto _out; 
	_out35: cs = 35; goto _out; 
	_out36: cs = 36; goto _out; 
	_out37: cs = 37; goto _out; 
	_out38: cs = 38; goto _out; 
	_out39: cs = 39; goto _out; 
	_out40: cs = 40; goto _out; 
	_out41: cs = 41; goto _out; 
	_out42: cs = 42; goto _out; 
	_out43: cs = 43; goto _out; 
	_out44: cs = 44; goto _out; 
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
	_out55: cs = 55; goto _out; 
	_out700: cs = 700; goto _out; 
	_out56: cs = 56; goto _out; 
	_out57: cs = 57; goto _out; 
	_out58: cs = 58; goto _out; 
	_out59: cs = 59; goto _out; 
	_out60: cs = 60; goto _out; 
	_out61: cs = 61; goto _out; 
	_out62: cs = 62; goto _out; 
	_out63: cs = 63; goto _out; 
	_out64: cs = 64; goto _out; 
	_out65: cs = 65; goto _out; 
	_out701: cs = 701; goto _out; 
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
	_out702: cs = 702; goto _out; 
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
	_out98: cs = 98; goto _out; 
	_out99: cs = 99; goto _out; 
	_out100: cs = 100; goto _out; 
	_out101: cs = 101; goto _out; 
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
	_out144: cs = 144; goto _out; 
	_out145: cs = 145; goto _out; 
	_out146: cs = 146; goto _out; 
	_out147: cs = 147; goto _out; 
	_out148: cs = 148; goto _out; 
	_out149: cs = 149; goto _out; 
	_out150: cs = 150; goto _out; 
	_out151: cs = 151; goto _out; 
	_out152: cs = 152; goto _out; 
	_out153: cs = 153; goto _out; 
	_out154: cs = 154; goto _out; 
	_out155: cs = 155; goto _out; 
	_out156: cs = 156; goto _out; 
	_out157: cs = 157; goto _out; 
	_out158: cs = 158; goto _out; 
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
	_out253: cs = 253; goto _out; 
	_out254: cs = 254; goto _out; 
	_out255: cs = 255; goto _out; 
	_out256: cs = 256; goto _out; 
	_out257: cs = 257; goto _out; 
	_out258: cs = 258; goto _out; 
	_out259: cs = 259; goto _out; 
	_out260: cs = 260; goto _out; 
	_out261: cs = 261; goto _out; 
	_out262: cs = 262; goto _out; 
	_out263: cs = 263; goto _out; 
	_out264: cs = 264; goto _out; 
	_out265: cs = 265; goto _out; 
	_out266: cs = 266; goto _out; 
	_out267: cs = 267; goto _out; 
	_out268: cs = 268; goto _out; 
	_out269: cs = 269; goto _out; 
	_out270: cs = 270; goto _out; 
	_out271: cs = 271; goto _out; 
	_out272: cs = 272; goto _out; 
	_out273: cs = 273; goto _out; 
	_out274: cs = 274; goto _out; 
	_out275: cs = 275; goto _out; 
	_out276: cs = 276; goto _out; 
	_out277: cs = 277; goto _out; 
	_out278: cs = 278; goto _out; 
	_out279: cs = 279; goto _out; 
	_out280: cs = 280; goto _out; 
	_out281: cs = 281; goto _out; 
	_out282: cs = 282; goto _out; 
	_out283: cs = 283; goto _out; 
	_out284: cs = 284; goto _out; 
	_out285: cs = 285; goto _out; 
	_out286: cs = 286; goto _out; 
	_out287: cs = 287; goto _out; 
	_out288: cs = 288; goto _out; 
	_out289: cs = 289; goto _out; 
	_out290: cs = 290; goto _out; 
	_out291: cs = 291; goto _out; 
	_out292: cs = 292; goto _out; 
	_out293: cs = 293; goto _out; 
	_out294: cs = 294; goto _out; 
	_out295: cs = 295; goto _out; 
	_out296: cs = 296; goto _out; 
	_out297: cs = 297; goto _out; 
	_out298: cs = 298; goto _out; 
	_out299: cs = 299; goto _out; 
	_out300: cs = 300; goto _out; 
	_out301: cs = 301; goto _out; 
	_out302: cs = 302; goto _out; 
	_out303: cs = 303; goto _out; 
	_out304: cs = 304; goto _out; 
	_out305: cs = 305; goto _out; 
	_out306: cs = 306; goto _out; 
	_out307: cs = 307; goto _out; 
	_out308: cs = 308; goto _out; 
	_out309: cs = 309; goto _out; 
	_out310: cs = 310; goto _out; 
	_out311: cs = 311; goto _out; 
	_out312: cs = 312; goto _out; 
	_out313: cs = 313; goto _out; 
	_out314: cs = 314; goto _out; 
	_out315: cs = 315; goto _out; 
	_out316: cs = 316; goto _out; 
	_out317: cs = 317; goto _out; 
	_out318: cs = 318; goto _out; 
	_out319: cs = 319; goto _out; 
	_out320: cs = 320; goto _out; 
	_out321: cs = 321; goto _out; 
	_out322: cs = 322; goto _out; 
	_out323: cs = 323; goto _out; 
	_out324: cs = 324; goto _out; 
	_out325: cs = 325; goto _out; 
	_out326: cs = 326; goto _out; 
	_out327: cs = 327; goto _out; 
	_out328: cs = 328; goto _out; 
	_out329: cs = 329; goto _out; 
	_out330: cs = 330; goto _out; 
	_out331: cs = 331; goto _out; 
	_out332: cs = 332; goto _out; 
	_out333: cs = 333; goto _out; 
	_out334: cs = 334; goto _out; 
	_out335: cs = 335; goto _out; 
	_out336: cs = 336; goto _out; 
	_out337: cs = 337; goto _out; 
	_out338: cs = 338; goto _out; 
	_out339: cs = 339; goto _out; 
	_out340: cs = 340; goto _out; 
	_out341: cs = 341; goto _out; 
	_out342: cs = 342; goto _out; 
	_out343: cs = 343; goto _out; 
	_out344: cs = 344; goto _out; 
	_out345: cs = 345; goto _out; 
	_out346: cs = 346; goto _out; 
	_out347: cs = 347; goto _out; 
	_out348: cs = 348; goto _out; 
	_out349: cs = 349; goto _out; 
	_out350: cs = 350; goto _out; 
	_out351: cs = 351; goto _out; 
	_out352: cs = 352; goto _out; 
	_out353: cs = 353; goto _out; 
	_out354: cs = 354; goto _out; 
	_out355: cs = 355; goto _out; 
	_out356: cs = 356; goto _out; 
	_out357: cs = 357; goto _out; 
	_out358: cs = 358; goto _out; 
	_out359: cs = 359; goto _out; 
	_out360: cs = 360; goto _out; 
	_out361: cs = 361; goto _out; 
	_out362: cs = 362; goto _out; 
	_out363: cs = 363; goto _out; 
	_out364: cs = 364; goto _out; 
	_out365: cs = 365; goto _out; 
	_out366: cs = 366; goto _out; 
	_out367: cs = 367; goto _out; 
	_out368: cs = 368; goto _out; 
	_out369: cs = 369; goto _out; 
	_out370: cs = 370; goto _out; 
	_out371: cs = 371; goto _out; 
	_out372: cs = 372; goto _out; 
	_out373: cs = 373; goto _out; 
	_out374: cs = 374; goto _out; 
	_out375: cs = 375; goto _out; 
	_out376: cs = 376; goto _out; 
	_out377: cs = 377; goto _out; 
	_out378: cs = 378; goto _out; 
	_out379: cs = 379; goto _out; 
	_out380: cs = 380; goto _out; 
	_out381: cs = 381; goto _out; 
	_out382: cs = 382; goto _out; 
	_out383: cs = 383; goto _out; 
	_out384: cs = 384; goto _out; 
	_out385: cs = 385; goto _out; 
	_out386: cs = 386; goto _out; 
	_out387: cs = 387; goto _out; 
	_out388: cs = 388; goto _out; 
	_out389: cs = 389; goto _out; 
	_out390: cs = 390; goto _out; 
	_out391: cs = 391; goto _out; 
	_out392: cs = 392; goto _out; 
	_out393: cs = 393; goto _out; 
	_out394: cs = 394; goto _out; 
	_out395: cs = 395; goto _out; 
	_out396: cs = 396; goto _out; 
	_out397: cs = 397; goto _out; 
	_out398: cs = 398; goto _out; 
	_out399: cs = 399; goto _out; 
	_out400: cs = 400; goto _out; 
	_out401: cs = 401; goto _out; 
	_out402: cs = 402; goto _out; 
	_out403: cs = 403; goto _out; 
	_out404: cs = 404; goto _out; 
	_out405: cs = 405; goto _out; 
	_out406: cs = 406; goto _out; 
	_out407: cs = 407; goto _out; 
	_out408: cs = 408; goto _out; 
	_out409: cs = 409; goto _out; 
	_out410: cs = 410; goto _out; 
	_out411: cs = 411; goto _out; 
	_out412: cs = 412; goto _out; 
	_out413: cs = 413; goto _out; 
	_out414: cs = 414; goto _out; 
	_out415: cs = 415; goto _out; 
	_out416: cs = 416; goto _out; 
	_out417: cs = 417; goto _out; 
	_out418: cs = 418; goto _out; 
	_out419: cs = 419; goto _out; 
	_out420: cs = 420; goto _out; 
	_out421: cs = 421; goto _out; 
	_out422: cs = 422; goto _out; 
	_out423: cs = 423; goto _out; 
	_out424: cs = 424; goto _out; 
	_out425: cs = 425; goto _out; 
	_out426: cs = 426; goto _out; 
	_out427: cs = 427; goto _out; 
	_out428: cs = 428; goto _out; 
	_out429: cs = 429; goto _out; 
	_out430: cs = 430; goto _out; 
	_out431: cs = 431; goto _out; 
	_out432: cs = 432; goto _out; 
	_out433: cs = 433; goto _out; 
	_out434: cs = 434; goto _out; 
	_out435: cs = 435; goto _out; 
	_out436: cs = 436; goto _out; 
	_out703: cs = 703; goto _out; 
	_out704: cs = 704; goto _out; 
	_out705: cs = 705; goto _out; 
	_out706: cs = 706; goto _out; 
	_out707: cs = 707; goto _out; 
	_out437: cs = 437; goto _out; 
	_out438: cs = 438; goto _out; 
	_out439: cs = 439; goto _out; 
	_out440: cs = 440; goto _out; 
	_out441: cs = 441; goto _out; 
	_out442: cs = 442; goto _out; 
	_out443: cs = 443; goto _out; 
	_out444: cs = 444; goto _out; 
	_out445: cs = 445; goto _out; 
	_out446: cs = 446; goto _out; 
	_out447: cs = 447; goto _out; 
	_out448: cs = 448; goto _out; 
	_out708: cs = 708; goto _out; 
	_out709: cs = 709; goto _out; 
	_out710: cs = 710; goto _out; 
	_out711: cs = 711; goto _out; 
	_out712: cs = 712; goto _out; 
	_out449: cs = 449; goto _out; 
	_out450: cs = 450; goto _out; 
	_out451: cs = 451; goto _out; 
	_out452: cs = 452; goto _out; 
	_out453: cs = 453; goto _out; 
	_out454: cs = 454; goto _out; 
	_out455: cs = 455; goto _out; 
	_out456: cs = 456; goto _out; 
	_out713: cs = 713; goto _out; 
	_out457: cs = 457; goto _out; 
	_out458: cs = 458; goto _out; 
	_out459: cs = 459; goto _out; 
	_out460: cs = 460; goto _out; 
	_out461: cs = 461; goto _out; 
	_out462: cs = 462; goto _out; 
	_out463: cs = 463; goto _out; 
	_out464: cs = 464; goto _out; 
	_out465: cs = 465; goto _out; 
	_out466: cs = 466; goto _out; 
	_out467: cs = 467; goto _out; 
	_out468: cs = 468; goto _out; 
	_out469: cs = 469; goto _out; 
	_out470: cs = 470; goto _out; 
	_out471: cs = 471; goto _out; 
	_out472: cs = 472; goto _out; 
	_out473: cs = 473; goto _out; 
	_out474: cs = 474; goto _out; 
	_out475: cs = 475; goto _out; 
	_out476: cs = 476; goto _out; 
	_out477: cs = 477; goto _out; 
	_out478: cs = 478; goto _out; 
	_out479: cs = 479; goto _out; 
	_out480: cs = 480; goto _out; 
	_out481: cs = 481; goto _out; 
	_out482: cs = 482; goto _out; 
	_out483: cs = 483; goto _out; 
	_out484: cs = 484; goto _out; 
	_out485: cs = 485; goto _out; 
	_out486: cs = 486; goto _out; 
	_out487: cs = 487; goto _out; 
	_out488: cs = 488; goto _out; 
	_out489: cs = 489; goto _out; 
	_out490: cs = 490; goto _out; 
	_out491: cs = 491; goto _out; 
	_out492: cs = 492; goto _out; 
	_out493: cs = 493; goto _out; 
	_out494: cs = 494; goto _out; 
	_out495: cs = 495; goto _out; 
	_out496: cs = 496; goto _out; 
	_out497: cs = 497; goto _out; 
	_out498: cs = 498; goto _out; 
	_out499: cs = 499; goto _out; 
	_out500: cs = 500; goto _out; 
	_out501: cs = 501; goto _out; 
	_out502: cs = 502; goto _out; 
	_out714: cs = 714; goto _out; 
	_out503: cs = 503; goto _out; 
	_out715: cs = 715; goto _out; 
	_out504: cs = 504; goto _out; 
	_out505: cs = 505; goto _out; 
	_out506: cs = 506; goto _out; 
	_out507: cs = 507; goto _out; 
	_out508: cs = 508; goto _out; 
	_out509: cs = 509; goto _out; 
	_out510: cs = 510; goto _out; 
	_out511: cs = 511; goto _out; 
	_out716: cs = 716; goto _out; 
	_out512: cs = 512; goto _out; 
	_out513: cs = 513; goto _out; 
	_out514: cs = 514; goto _out; 
	_out515: cs = 515; goto _out; 
	_out516: cs = 516; goto _out; 
	_out517: cs = 517; goto _out; 
	_out518: cs = 518; goto _out; 
	_out519: cs = 519; goto _out; 
	_out520: cs = 520; goto _out; 
	_out521: cs = 521; goto _out; 
	_out522: cs = 522; goto _out; 
	_out523: cs = 523; goto _out; 
	_out524: cs = 524; goto _out; 
	_out525: cs = 525; goto _out; 
	_out526: cs = 526; goto _out; 
	_out527: cs = 527; goto _out; 
	_out528: cs = 528; goto _out; 
	_out529: cs = 529; goto _out; 
	_out530: cs = 530; goto _out; 
	_out531: cs = 531; goto _out; 
	_out532: cs = 532; goto _out; 
	_out533: cs = 533; goto _out; 
	_out534: cs = 534; goto _out; 
	_out535: cs = 535; goto _out; 
	_out536: cs = 536; goto _out; 
	_out537: cs = 537; goto _out; 
	_out538: cs = 538; goto _out; 
	_out539: cs = 539; goto _out; 
	_out540: cs = 540; goto _out; 
	_out541: cs = 541; goto _out; 
	_out542: cs = 542; goto _out; 
	_out543: cs = 543; goto _out; 
	_out544: cs = 544; goto _out; 
	_out545: cs = 545; goto _out; 
	_out546: cs = 546; goto _out; 
	_out547: cs = 547; goto _out; 
	_out548: cs = 548; goto _out; 
	_out549: cs = 549; goto _out; 
	_out550: cs = 550; goto _out; 
	_out551: cs = 551; goto _out; 
	_out552: cs = 552; goto _out; 
	_out553: cs = 553; goto _out; 
	_out554: cs = 554; goto _out; 
	_out555: cs = 555; goto _out; 
	_out556: cs = 556; goto _out; 
	_out717: cs = 717; goto _out; 
	_out718: cs = 718; goto _out; 
	_out557: cs = 557; goto _out; 
	_out558: cs = 558; goto _out; 
	_out559: cs = 559; goto _out; 
	_out560: cs = 560; goto _out; 
	_out561: cs = 561; goto _out; 
	_out562: cs = 562; goto _out; 
	_out563: cs = 563; goto _out; 
	_out719: cs = 719; goto _out; 
	_out720: cs = 720; goto _out; 
	_out564: cs = 564; goto _out; 
	_out565: cs = 565; goto _out; 
	_out566: cs = 566; goto _out; 
	_out567: cs = 567; goto _out; 
	_out568: cs = 568; goto _out; 
	_out569: cs = 569; goto _out; 
	_out570: cs = 570; goto _out; 
	_out571: cs = 571; goto _out; 
	_out572: cs = 572; goto _out; 
	_out573: cs = 573; goto _out; 
	_out574: cs = 574; goto _out; 
	_out575: cs = 575; goto _out; 
	_out576: cs = 576; goto _out; 
	_out577: cs = 577; goto _out; 
	_out578: cs = 578; goto _out; 
	_out579: cs = 579; goto _out; 
	_out580: cs = 580; goto _out; 
	_out581: cs = 581; goto _out; 
	_out582: cs = 582; goto _out; 
	_out583: cs = 583; goto _out; 
	_out584: cs = 584; goto _out; 
	_out585: cs = 585; goto _out; 
	_out586: cs = 586; goto _out; 
	_out587: cs = 587; goto _out; 
	_out588: cs = 588; goto _out; 
	_out589: cs = 589; goto _out; 
	_out590: cs = 590; goto _out; 
	_out591: cs = 591; goto _out; 
	_out592: cs = 592; goto _out; 
	_out593: cs = 593; goto _out; 
	_out594: cs = 594; goto _out; 
	_out595: cs = 595; goto _out; 
	_out596: cs = 596; goto _out; 
	_out597: cs = 597; goto _out; 
	_out598: cs = 598; goto _out; 
	_out599: cs = 599; goto _out; 
	_out600: cs = 600; goto _out; 
	_out601: cs = 601; goto _out; 
	_out602: cs = 602; goto _out; 
	_out603: cs = 603; goto _out; 
	_out604: cs = 604; goto _out; 
	_out605: cs = 605; goto _out; 
	_out606: cs = 606; goto _out; 
	_out607: cs = 607; goto _out; 
	_out608: cs = 608; goto _out; 
	_out609: cs = 609; goto _out; 
	_out610: cs = 610; goto _out; 
	_out611: cs = 611; goto _out; 
	_out612: cs = 612; goto _out; 
	_out613: cs = 613; goto _out; 
	_out614: cs = 614; goto _out; 
	_out615: cs = 615; goto _out; 
	_out616: cs = 616; goto _out; 
	_out617: cs = 617; goto _out; 
	_out618: cs = 618; goto _out; 
	_out619: cs = 619; goto _out; 
	_out620: cs = 620; goto _out; 
	_out621: cs = 621; goto _out; 
	_out721: cs = 721; goto _out; 
	_out722: cs = 722; goto _out; 
	_out723: cs = 723; goto _out; 
	_out724: cs = 724; goto _out; 
	_out0: cs = 0; goto _out; 
	_out725: cs = 725; goto _out; 
	_out622: cs = 622; goto _out; 
	_out623: cs = 623; goto _out; 
	_out624: cs = 624; goto _out; 
	_out625: cs = 625; goto _out; 
	_out726: cs = 726; goto _out; 
	_out727: cs = 727; goto _out; 
	_out626: cs = 626; goto _out; 
	_out627: cs = 627; goto _out; 
	_out628: cs = 628; goto _out; 
	_out629: cs = 629; goto _out; 
	_out630: cs = 630; goto _out; 
	_out631: cs = 631; goto _out; 
	_out632: cs = 632; goto _out; 
	_out633: cs = 633; goto _out; 
	_out634: cs = 634; goto _out; 
	_out635: cs = 635; goto _out; 
	_out728: cs = 728; goto _out; 
	_out729: cs = 729; goto _out; 
	_out636: cs = 636; goto _out; 
	_out730: cs = 730; goto _out; 
	_out637: cs = 637; goto _out; 
	_out731: cs = 731; goto _out; 
	_out732: cs = 732; goto _out; 
	_out638: cs = 638; goto _out; 
	_out733: cs = 733; goto _out; 
	_out639: cs = 639; goto _out; 
	_out734: cs = 734; goto _out; 
	_out735: cs = 735; goto _out; 
	_out640: cs = 640; goto _out; 
	_out641: cs = 641; goto _out; 
	_out736: cs = 736; goto _out; 
	_out642: cs = 642; goto _out; 
	_out643: cs = 643; goto _out; 
	_out644: cs = 644; goto _out; 
	_out645: cs = 645; goto _out; 
	_out646: cs = 646; goto _out; 
	_out647: cs = 647; goto _out; 
	_out648: cs = 648; goto _out; 
	_out649: cs = 649; goto _out; 
	_out650: cs = 650; goto _out; 
	_out651: cs = 651; goto _out; 
	_out652: cs = 652; goto _out; 
	_out653: cs = 653; goto _out; 
	_out654: cs = 654; goto _out; 
	_out655: cs = 655; goto _out; 
	_out656: cs = 656; goto _out; 
	_out657: cs = 657; goto _out; 
	_out658: cs = 658; goto _out; 
	_out659: cs = 659; goto _out; 
	_out660: cs = 660; goto _out; 
	_out661: cs = 661; goto _out; 
	_out662: cs = 662; goto _out; 
	_out663: cs = 663; goto _out; 
	_out664: cs = 664; goto _out; 
	_out665: cs = 665; goto _out; 
	_out666: cs = 666; goto _out; 
	_out667: cs = 667; goto _out; 
	_out668: cs = 668; goto _out; 
	_out669: cs = 669; goto _out; 
	_out670: cs = 670; goto _out; 
	_out671: cs = 671; goto _out; 
	_out672: cs = 672; goto _out; 
	_out673: cs = 673; goto _out; 
	_out674: cs = 674; goto _out; 
	_out675: cs = 675; goto _out; 
	_out676: cs = 676; goto _out; 
	_out677: cs = 677; goto _out; 
	_out678: cs = 678; goto _out; 
	_out679: cs = 679; goto _out; 
	_out680: cs = 680; goto _out; 
	_out681: cs = 681; goto _out; 
	_out682: cs = 682; goto _out; 
	_out683: cs = 683; goto _out; 
	_out684: cs = 684; goto _out; 
	_out685: cs = 685; goto _out; 
	_out686: cs = 686; goto _out; 
	_out687: cs = 687; goto _out; 
	_out688: cs = 688; goto _out; 
	_out689: cs = 689; goto _out; 
	_out690: cs = 690; goto _out; 
	_out691: cs = 691; goto _out; 
	_out692: cs = 692; goto _out; 
	_out693: cs = 693; goto _out; 
	_out694: cs = 694; goto _out; 
	_out695: cs = 695; goto _out; 
	_out737: cs = 737; goto _out; 
	_out696: cs = 696; goto _out; 

	_out: {}
	}
#line 115 "superredcloth_scan.rl"

  if (RSTRING(block)->len > 0)
  {
    ADD_BLOCK();
  }

  return html;
}

VALUE
superredcloth_transform2(formatter, str)
  VALUE formatter, str;
{
  rb_str_cat2(str, "\n");
  StringValue(str);
  return superredcloth_transform(formatter, RSTRING(str)->ptr, RSTRING(str)->ptr + RSTRING(str)->len + 1);
}

static VALUE
superredcloth_to_html(self)
  VALUE self;
{
  char *pe, *p;
  int len = 0;

  return superredcloth_transform2(super_HTML, self);
}

static VALUE
superredcloth_to(self, formatter)
  VALUE self, formatter;
{
  char *pe, *p;
  int len = 0;

  return superredcloth_transform2(formatter, self);
}

void Init_superredcloth_scan()
{
  super_RedCloth = rb_define_class("SuperRedCloth", rb_cString);
  rb_define_method(super_RedCloth, "to_html", superredcloth_to_html, 0);
  rb_define_method(super_RedCloth, "to", superredcloth_to, 1);
  super_ParseError = rb_define_class_under(super_RedCloth, "ParseError", rb_eException);
  super_HTML = rb_define_module_under(super_RedCloth, "HTML");
}
