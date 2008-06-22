#line 1 "superredcloth_inline.rl"
/*
 * superredcloth_inline.rl
 *
 * $Author: why $
 * $Date$
 *
 * Copyright (C) 2007 why the lucky stiff
 */
#include <ruby.h>
#include "superredcloth.h"

#line 138 "superredcloth_inline.rl"



#line 18 "superredcloth_inline.c"
static const int superredcloth_inline_start = 728;
static const int superredcloth_inline_error = -1;

static const int superredcloth_inline_en_main = 728;

#line 141 "superredcloth_inline.rl"

VALUE
red_pass(VALUE rb_formatter, VALUE regs, VALUE ref, ID meth)
{
  VALUE txt = rb_hash_aref(regs, ref);
  if (!NIL_P(txt)) rb_hash_aset(regs, ref, superredcloth_inline2(rb_formatter, txt));
  return rb_funcall(rb_formatter, meth, 1, regs);
}

VALUE
red_pass2(VALUE rb_formatter, VALUE regs, VALUE ref, VALUE btype)
{
  btype = rb_hash_aref(regs, btype);
  StringValue(btype);
  return red_pass(rb_formatter, regs, ref, rb_intern(RSTRING(btype)->ptr));
}

VALUE
red_block(VALUE rb_formatter, VALUE regs, VALUE block)
{
  VALUE btype = rb_hash_aref(regs, ID2SYM(rb_intern("type")));
  block = rb_funcall(block, rb_intern("strip"), 0);
  if (RSTRING(block)->len > 0)
  {
    rb_hash_aset(regs, ID2SYM(rb_intern("text")), superredcloth_inline2(rb_formatter, block));
    block = rb_funcall(rb_formatter, rb_intern(RSTRING(btype)->ptr), 1, regs);
  }
  return block;
}

void
red_inc(VALUE regs, VALUE ref)
{
  int aint = 0;
  VALUE aval = rb_hash_aref(regs, ref);
  if (aval != Qnil) aint = NUM2INT(aval);
  rb_hash_aset(regs, ref, INT2NUM(aint + 1));
}

VALUE
superredcloth_inline(rb_formatter, p, pe)
  VALUE rb_formatter;
  char *p, *pe;
{
  int cs, act;
  char *tokstart, *tokend, *reg;
  VALUE block = rb_str_new2("");
  VALUE regs = Qnil;

  
#line 75 "superredcloth_inline.c"
	{
	cs = superredcloth_inline_start;
	tokstart = 0;
	tokend = 0;
	act = 0;
	}
#line 191 "superredcloth_inline.rl"

  
#line 85 "superredcloth_inline.c"
	{
	if ( p == pe )
		goto _out;
	switch ( cs )
	{
tr0:
#line 9 "superredcloth_inline.rl"
	{{p = ((tokend))-1;}{ rb_str_cat_escaped(block, tokstart, tokend); }}
	goto st728;
tr4:
#line 1 "superredcloth_inline.rl"
	{	switch( act ) {
	case 1:
	{{p = ((tokend))-1;} if ( *reg == ':') { reg += 1; STORE_URL(href); } INLINE(block, image); }
	break;
	case 2:
	{{p = ((tokend))-1;} STORE_URL(href); PASS(block, name, link); }
	break;
	case 3:
	{{p = ((tokend))-1;} PASS(block, text, code); }
	break;
	case 4:
	{{p = ((tokend))-1;} PASS(block, text, strong); }
	break;
	case 5:
	{{p = ((tokend))-1;} PASS(block, text, b); }
	break;
	case 6:
	{{p = ((tokend))-1;} PASS(block, text, em); }
	break;
	case 7:
	{{p = ((tokend))-1;} PASS(block, text, i); }
	break;
	case 9:
	{{p = ((tokend))-1;} PASS(block, text, ins); }
	break;
	case 16:
	{{p = ((tokend))-1;} PASS(block, text, quote1); }
	break;
	case 17:
	{{p = ((tokend))-1;} PASS(block, text, quote2); }
	break;
	case 20:
	{{p = ((tokend))-1;} INLINE(block, endash); }
	break;
	case 21:
	{{p = ((tokend))-1;} INLINE(block, arrow); }
	break;
	case 29:
	{{p = ((tokend))-1;} CAT(block); }
	break;
	case 31:
	{{p = ((tokend))-1;} CAT(block); }
	break;
	case 33:
	{{p = ((tokend))-1;} rb_str_cat_escaped(block, tokstart, tokend); }
	break;
	case 34:
	{{p = ((tokend))-1;} rb_str_cat_escaped(block, tokstart, tokend); }
	break;
	case 35:
	{{p = ((tokend))-1;} rb_str_cat_escaped(block, tokstart, tokend); }
	break;
	default: break;
	}
	}
	goto st728;
tr5:
#line 121 "superredcloth_inline.rl"
	{tokend = p+1;{ INLINE(block, copyright); }}
	goto st728;
tr6:
#line 120 "superredcloth_inline.rl"
	{tokend = p+1;{ INLINE(block, registered); }}
	goto st728;
tr8:
#line 119 "superredcloth_inline.rl"
	{tokend = p+1;{ INLINE(block, trademark); }}
	goto st728;
tr14:
#line 102 "superredcloth_inline.rl"
	{tokend = p+1;{ PASS(block, text, del); }}
	goto st728;
tr72:
#line 113 "superredcloth_inline.rl"
	{tokend = p+1;{ INLINE(block, ellipsis); }}
	goto st728;
tr89:
#line 93 "superredcloth_inline.rl"
	{{p = ((tokend))-1;}{ if ( *reg == ':') { reg += 1; STORE_URL(href); } INLINE(block, image); }}
	goto st728;
tr292:
#line 9 "superredcloth_inline.rl"
	{{p = ((tokend))-1;}{ rb_str_cat_escaped(block, tokstart, tokend); }}
	goto st728;
tr326:
#line 9 "superredcloth_inline.rl"
	{{p = ((tokend))-1;}{ rb_str_cat_escaped(block, tokstart, tokend); }}
	goto st728;
tr341:
#line 95 "superredcloth_inline.rl"
	{{p = ((tokend))-1;}{ STORE_URL(href); PASS(block, name, link); }}
	goto st728;
tr540:
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
#line 123 "superredcloth_inline.rl"
	{tokend = p+1;{ INLINE(block, entity); }}
	goto st728;
tr787:
#line 8 "superredcloth_inline.rl"
	{tokend = p+1;{ CAT(block); }}
	goto st728;
tr790:
#line 8 "superredcloth_inline.rl"
	{tokend = p+1;{ CAT(block); }}
	goto st728;
tr794:
#line 8 "superredcloth_inline.rl"
	{tokend = p+1;{ CAT(block); }}
	goto st728;
tr797:
#line 8 "superredcloth_inline.rl"
	{tokend = p+1;{ CAT(block); }}
	goto st728;
tr983:
#line 81 "superredcloth_inline.rl"
	{ STORE(title) }
#line 117 "superredcloth_inline.rl"
	{tokend = p+1;{ INLINE(block, acronym); }}
	goto st728;
tr989:
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
#line 122 "superredcloth_inline.rl"
	{tokend = p+1;{ PASS(block, text, footno); }}
	goto st728;
tr1298:
#line 134 "superredcloth_inline.rl"
	{tokend = p+1;}
	goto st728;
tr1299:
#line 9 "superredcloth_inline.rl"
	{tokend = p+1;{ rb_str_cat_escaped(block, tokstart, tokend); }}
	goto st728;
tr1303:
#line 9 "superredcloth_inline.rl"
	{tokend = p+1;{ rb_str_cat_escaped(block, tokstart, tokend); }}
	goto st728;
tr1324:
#line 9 "superredcloth_inline.rl"
	{tokend = p;p--;{ rb_str_cat_escaped(block, tokstart, tokend); }}
	goto st728;
tr1325:
#line 9 "superredcloth_inline.rl"
	{tokend = p;p--;{ rb_str_cat_escaped(block, tokstart, tokend); }}
	goto st728;
tr1330:
#line 115 "superredcloth_inline.rl"
	{tokend = p;p--;{ INLINE(block, endash); }}
	goto st728;
tr1331:
#line 115 "superredcloth_inline.rl"
	{tokend = p+1;{ INLINE(block, endash); }}
	goto st728;
tr1334:
#line 114 "superredcloth_inline.rl"
	{tokend = p;p--;{ INLINE(block, emdash); }}
	goto st728;
tr1335:
#line 114 "superredcloth_inline.rl"
	{tokend = p+1;{ INLINE(block, emdash); }}
	goto st728;
tr1336:
#line 116 "superredcloth_inline.rl"
	{tokend = p;p--;{ INLINE(block, arrow); }}
	goto st728;
tr1338:
#line 9 "superredcloth_inline.rl"
	{tokend = p;p--;{ rb_str_cat_escaped(block, tokstart, tokend); }}
	goto st728;
tr1342:
#line 93 "superredcloth_inline.rl"
	{tokend = p;p--;{ if ( *reg == ':') { reg += 1; STORE_URL(href); } INLINE(block, image); }}
	goto st728;
tr1442:
#line 111 "superredcloth_inline.rl"
	{tokend = p;p--;{ PASS(block, text, quote2); }}
	goto st728;
tr1443:
#line 111 "superredcloth_inline.rl"
	{tokend = p+1;{ PASS(block, text, quote2); }}
	goto st728;
tr1444:
#line 95 "superredcloth_inline.rl"
	{tokend = p;p--;{ STORE_URL(href); PASS(block, name, link); }}
	goto st728;
tr1455:
#line 106 "superredcloth_inline.rl"
	{tokend = p;p--;{ PASS(block, text, span); }}
	goto st728;
tr1456:
#line 106 "superredcloth_inline.rl"
	{tokend = p+1;{ PASS(block, text, span); }}
	goto st728;
tr1464:
#line 110 "superredcloth_inline.rl"
	{tokend = p;p--;{ PASS(block, text, quote1); }}
	goto st728;
tr1465:
#line 110 "superredcloth_inline.rl"
	{tokend = p+1;{ PASS(block, text, quote1); }}
	goto st728;
tr1474:
#line 98 "superredcloth_inline.rl"
	{tokend = p;p--;{ PASS(block, text, strong); }}
	goto st728;
tr1475:
#line 98 "superredcloth_inline.rl"
	{tokend = p+1;{ PASS(block, text, strong); }}
	goto st728;
tr1484:
#line 99 "superredcloth_inline.rl"
	{tokend = p;p--;{ PASS(block, text, b); }}
	goto st728;
tr1485:
#line 99 "superredcloth_inline.rl"
	{tokend = p+1;{ PASS(block, text, b); }}
	goto st728;
tr1508:
#line 103 "superredcloth_inline.rl"
	{tokend = p;p--;{ PASS(block, text, ins); }}
	goto st728;
tr1509:
#line 103 "superredcloth_inline.rl"
	{tokend = p+1;{ PASS(block, text, ins); }}
	goto st728;
tr1517:
#line 116 "superredcloth_inline.rl"
	{tokend = p+1;{ INLINE(block, arrow); }}
	goto st728;
tr1520:
#line 118 "superredcloth_inline.rl"
	{tokend = p;p--;{ INLINE(block, dim); }}
	goto st728;
tr1524:
#line 10 "superredcloth_inline.rl"
	{tokend = p;p--;{ rb_str_append(block, rb_funcall(rb_formatter, rb_intern("ignore"), 1, regs)); }}
	goto st728;
tr1525:
#line 10 "superredcloth_inline.rl"
	{tokend = p+1;{ rb_str_append(block, rb_funcall(rb_formatter, rb_intern("ignore"), 1, regs)); }}
	goto st728;
tr1526:
#line 107 "superredcloth_inline.rl"
	{tokend = p;p--;{ PASS(block, text, cite); }}
	goto st728;
tr1527:
#line 107 "superredcloth_inline.rl"
	{tokend = p+1;{ PASS(block, text, cite); }}
	goto st728;
tr1534:
#line 97 "superredcloth_inline.rl"
	{tokend = p;p--;{ PASS(block, text, code); }}
	goto st728;
tr1535:
#line 97 "superredcloth_inline.rl"
	{tokend = p+1;{ PASS(block, text, code); }}
	goto st728;
tr1560:
#line 104 "superredcloth_inline.rl"
	{tokend = p;p--;{ PASS(block, text, sup); }}
	goto st728;
tr1561:
#line 104 "superredcloth_inline.rl"
	{tokend = p+1;{ PASS(block, text, sup); }}
	goto st728;
tr1562:
#line 100 "superredcloth_inline.rl"
	{tokend = p;p--;{ PASS(block, text, em); }}
	goto st728;
tr1563:
#line 100 "superredcloth_inline.rl"
	{tokend = p+1;{ PASS(block, text, em); }}
	goto st728;
tr1564:
#line 101 "superredcloth_inline.rl"
	{tokend = p;p--;{ PASS(block, text, i); }}
	goto st728;
tr1565:
#line 101 "superredcloth_inline.rl"
	{tokend = p+1;{ PASS(block, text, i); }}
	goto st728;
tr1567:
#line 109 "superredcloth_inline.rl"
	{tokend = p;p--;{ PASS(block, text, snip); }}
	goto st728;
tr1568:
#line 109 "superredcloth_inline.rl"
	{tokend = p+1;{ PASS(block, text, snip); }}
	goto st728;
tr1569:
#line 105 "superredcloth_inline.rl"
	{tokend = p;p--;{ PASS(block, text, sub); }}
	goto st728;
tr1570:
#line 105 "superredcloth_inline.rl"
	{tokend = p+1;{ PASS(block, text, sub); }}
	goto st728;
st728:
#line 1 "superredcloth_inline.rl"
	{tokstart = 0;}
	if ( ++p == pe )
		goto _out728;
case 728:
#line 1 "superredcloth_inline.rl"
	{tokstart = p;}
#line 403 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1298;
		case 32: goto tr1300;
		case 33: goto tr1301;
		case 34: goto tr1302;
		case 37: goto tr1304;
		case 38: goto tr1305;
		case 39: goto tr1306;
		case 40: goto tr1307;
		case 42: goto tr1308;
		case 43: goto tr1309;
		case 45: goto tr1310;
		case 46: goto tr1311;
		case 60: goto tr1313;
		case 61: goto tr1314;
		case 63: goto tr1315;
		case 64: goto tr1316;
		case 91: goto tr1318;
		case 92: goto tr1303;
		case 94: goto tr1319;
		case 95: goto tr1320;
		case 96: goto tr1321;
		case 124: goto tr1303;
		case 126: goto tr1322;
	}
	if ( (*p) < 44 ) {
		if ( (*p) > 13 ) {
			if ( 35 <= (*p) && (*p) <= 36 )
				goto tr1303;
		} else if ( (*p) >= 9 )
			goto tr1299;
	} else if ( (*p) > 47 ) {
		if ( (*p) < 58 ) {
			if ( 48 <= (*p) && (*p) <= 57 )
				goto tr1312;
		} else if ( (*p) > 59 ) {
			if ( 65 <= (*p) && (*p) <= 90 )
				goto tr1317;
		} else
			goto tr1303;
	} else
		goto tr1303;
	goto tr1297;
tr1297:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st729;
tr1449:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 111 "superredcloth_inline.rl"
	{act = 17;}
	goto st729;
tr1466:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 110 "superredcloth_inline.rl"
	{act = 16;}
	goto st729;
tr1476:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 98 "superredcloth_inline.rl"
	{act = 4;}
	goto st729;
tr1487:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 99 "superredcloth_inline.rl"
	{act = 5;}
	goto st729;
tr1510:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 103 "superredcloth_inline.rl"
	{act = 9;}
	goto st729;
tr1536:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 97 "superredcloth_inline.rl"
	{act = 3;}
	goto st729;
tr1578:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 100 "superredcloth_inline.rl"
	{act = 6;}
	goto st729;
tr1587:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 101 "superredcloth_inline.rl"
	{act = 7;}
	goto st729;
st729:
	if ( ++p == pe )
		goto _out729;
case 729:
#line 505 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr4;
		case 40: goto tr4;
		case 45: goto st730;
		case 63: goto tr4;
		case 94: goto tr4;
		case 96: goto tr4;
		case 124: goto tr4;
		case 126: goto tr4;
	}
	if ( (*p) < 35 ) {
		if ( (*p) > 13 ) {
			if ( 32 <= (*p) && (*p) <= 33 )
				goto tr4;
		} else if ( (*p) >= 9 )
			goto tr4;
	} else if ( (*p) > 38 ) {
		if ( (*p) < 58 ) {
			if ( 44 <= (*p) && (*p) <= 47 )
				goto tr4;
		} else if ( (*p) > 61 ) {
			if ( 91 <= (*p) && (*p) <= 92 )
				goto tr4;
		} else
			goto tr4;
	} else
		goto tr4;
	goto tr1297;
st730:
	if ( ++p == pe )
		goto _out730;
case 730:
	switch( (*p) ) {
		case 0: goto tr1324;
		case 40: goto tr1324;
		case 63: goto tr1324;
		case 94: goto tr1324;
		case 96: goto tr1324;
		case 124: goto tr1324;
		case 126: goto tr1324;
	}
	if ( (*p) < 35 ) {
		if ( (*p) > 13 ) {
			if ( 32 <= (*p) && (*p) <= 33 )
				goto tr1324;
		} else if ( (*p) >= 9 )
			goto tr1324;
	} else if ( (*p) > 38 ) {
		if ( (*p) < 58 ) {
			if ( 44 <= (*p) && (*p) <= 47 )
				goto tr1324;
		} else if ( (*p) > 61 ) {
			if ( 91 <= (*p) && (*p) <= 92 )
				goto tr1324;
		} else
			goto tr1324;
	} else
		goto tr1324;
	goto tr1297;
tr1300:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 7 "superredcloth_inline.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 9 "superredcloth_inline.rl"
	{act = 35;}
	goto st731;
st731:
	if ( ++p == pe )
		goto _out731;
case 731:
#line 579 "superredcloth_inline.c"
	switch( (*p) ) {
		case 40: goto st0;
		case 45: goto tr1327;
		case 46: goto tr1328;
		case 91: goto st39;
	}
	goto tr1325;
st0:
	if ( ++p == pe )
		goto _out0;
case 0:
	switch( (*p) ) {
		case 67: goto st1;
		case 82: goto st2;
		case 84: goto st3;
		case 99: goto st1;
		case 114: goto st2;
		case 116: goto st3;
	}
	goto tr0;
st1:
	if ( ++p == pe )
		goto _out1;
case 1:
	if ( (*p) == 41 )
		goto tr5;
	goto tr4;
st2:
	if ( ++p == pe )
		goto _out2;
case 2:
	if ( (*p) == 41 )
		goto tr6;
	goto tr4;
st3:
	if ( ++p == pe )
		goto _out3;
case 3:
	switch( (*p) ) {
		case 77: goto st4;
		case 109: goto st4;
	}
	goto tr4;
st4:
	if ( ++p == pe )
		goto _out4;
case 4:
	if ( (*p) == 41 )
		goto tr8;
	goto tr4;
tr1327:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 7 "superredcloth_inline.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 115 "superredcloth_inline.rl"
	{act = 20;}
	goto st732;
st732:
	if ( ++p == pe )
		goto _out732;
case 732:
#line 642 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1330;
		case 32: goto tr1331;
		case 40: goto tr35;
		case 45: goto st733;
		case 62: goto tr1333;
		case 91: goto tr36;
		case 123: goto tr37;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr1330;
	goto tr34;
tr34:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st5;
st5:
	if ( ++p == pe )
		goto _out5;
case 5:
#line 663 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr4;
		case 9: goto st6;
		case 10: goto st7;
		case 13: goto st8;
		case 32: goto st6;
		case 45: goto tr13;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr4;
	goto st5;
st6:
	if ( ++p == pe )
		goto _out6;
case 6:
	switch( (*p) ) {
		case 0: goto tr4;
		case 9: goto st6;
		case 10: goto st7;
		case 13: goto st8;
		case 32: goto st6;
		case 45: goto tr4;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr4;
	goto st5;
st7:
	if ( ++p == pe )
		goto _out7;
case 7:
	switch( (*p) ) {
		case 0: goto tr4;
		case 9: goto st6;
		case 32: goto st6;
		case 45: goto tr4;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto tr4;
	goto st5;
st8:
	if ( ++p == pe )
		goto _out8;
case 8:
	if ( (*p) == 10 )
		goto st7;
	goto tr4;
tr13:
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
	goto st9;
st9:
	if ( ++p == pe )
		goto _out9;
case 9:
#line 718 "superredcloth_inline.c"
	switch( (*p) ) {
		case 32: goto tr14;
		case 93: goto tr14;
	}
	goto tr4;
tr35:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st10;
st10:
	if ( ++p == pe )
		goto _out10;
case 10:
#line 732 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr16;
		case 9: goto tr17;
		case 10: goto tr18;
		case 13: goto tr19;
		case 32: goto tr17;
		case 35: goto st31;
		case 41: goto st21;
		case 45: goto tr13;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr16;
	goto tr15;
tr15:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st11;
st11:
	if ( ++p == pe )
		goto _out11;
case 11:
#line 754 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st12;
		case 9: goto st29;
		case 10: goto st30;
		case 13: goto st36;
		case 32: goto st29;
		case 35: goto tr27;
		case 41: goto tr28;
		case 45: goto tr13;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st12;
	goto st11;
tr16:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st12;
st12:
	if ( ++p == pe )
		goto _out12;
case 12:
#line 776 "superredcloth_inline.c"
	switch( (*p) ) {
		case 35: goto tr29;
		case 41: goto tr30;
	}
	goto st12;
tr29:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st13;
st13:
	if ( ++p == pe )
		goto _out13;
case 13:
#line 790 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr4;
	goto tr31;
tr31:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st14;
st14:
	if ( ++p == pe )
		goto _out14;
case 14:
#line 802 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr33;
	goto st14;
tr30:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st15;
tr33:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st15;
tr49:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st15;
tr61:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st15;
tr1550:
#line 7 "superredcloth_inline.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st15;
st15:
	if ( ++p == pe )
		goto _out15;
case 15:
#line 830 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr4;
		case 32: goto tr4;
		case 40: goto tr35;
		case 45: goto tr4;
		case 91: goto tr36;
		case 123: goto tr37;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr4;
	goto tr34;
tr36:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st16;
st16:
	if ( ++p == pe )
		goto _out16;
case 16:
#line 850 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr39;
		case 9: goto tr40;
		case 10: goto tr41;
		case 13: goto tr42;
		case 32: goto tr40;
		case 45: goto tr13;
		case 93: goto st5;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr39;
	goto tr38;
tr38:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st17;
st17:
	if ( ++p == pe )
		goto _out17;
case 17:
#line 871 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st18;
		case 9: goto st19;
		case 10: goto st20;
		case 13: goto st28;
		case 32: goto st19;
		case 45: goto tr13;
		case 93: goto tr48;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st18;
	goto st17;
tr39:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st18;
st18:
	if ( ++p == pe )
		goto _out18;
case 18:
#line 892 "superredcloth_inline.c"
	if ( (*p) == 93 )
		goto tr49;
	goto st18;
tr40:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st19;
st19:
	if ( ++p == pe )
		goto _out19;
case 19:
#line 904 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st18;
		case 9: goto st19;
		case 10: goto st20;
		case 13: goto st28;
		case 32: goto st19;
		case 45: goto st18;
		case 93: goto tr48;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st18;
	goto st17;
tr41:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st20;
st20:
	if ( ++p == pe )
		goto _out20;
case 20:
#line 925 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st18;
		case 9: goto st19;
		case 32: goto st19;
		case 45: goto st18;
		case 93: goto tr48;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st18;
	goto st17;
tr28:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st21;
tr70:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st21;
tr48:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st21;
tr60:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st21;
st21:
	if ( ++p == pe )
		goto _out21;
case 21:
#line 956 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr4;
		case 9: goto st6;
		case 10: goto st7;
		case 13: goto st8;
		case 32: goto st6;
		case 40: goto tr35;
		case 45: goto tr13;
		case 91: goto tr36;
		case 123: goto tr37;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr4;
	goto tr34;
tr37:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st22;
st22:
	if ( ++p == pe )
		goto _out22;
case 22:
#line 979 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr51;
		case 9: goto tr52;
		case 10: goto tr53;
		case 13: goto tr54;
		case 32: goto tr52;
		case 45: goto tr13;
		case 125: goto st5;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr51;
	goto tr50;
tr50:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st23;
st23:
	if ( ++p == pe )
		goto _out23;
case 23:
#line 1000 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st24;
		case 9: goto st25;
		case 10: goto st26;
		case 13: goto st27;
		case 32: goto st25;
		case 45: goto tr13;
		case 125: goto tr60;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st24;
	goto st23;
tr51:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st24;
st24:
	if ( ++p == pe )
		goto _out24;
case 24:
#line 1021 "superredcloth_inline.c"
	if ( (*p) == 125 )
		goto tr61;
	goto st24;
tr52:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st25;
st25:
	if ( ++p == pe )
		goto _out25;
case 25:
#line 1033 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st24;
		case 9: goto st25;
		case 10: goto st26;
		case 13: goto st27;
		case 32: goto st25;
		case 45: goto st24;
		case 125: goto tr60;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st24;
	goto st23;
tr53:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st26;
st26:
	if ( ++p == pe )
		goto _out26;
case 26:
#line 1054 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st24;
		case 9: goto st25;
		case 32: goto st25;
		case 45: goto st24;
		case 125: goto tr60;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st24;
	goto st23;
tr54:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st27;
st27:
	if ( ++p == pe )
		goto _out27;
case 27:
#line 1073 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st26;
		case 125: goto tr61;
	}
	goto st24;
tr42:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st28;
st28:
	if ( ++p == pe )
		goto _out28;
case 28:
#line 1087 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st20;
		case 93: goto tr49;
	}
	goto st18;
tr17:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st29;
st29:
	if ( ++p == pe )
		goto _out29;
case 29:
#line 1101 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st12;
		case 9: goto st29;
		case 10: goto st30;
		case 13: goto st36;
		case 32: goto st29;
		case 35: goto tr27;
		case 41: goto tr28;
		case 45: goto st12;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st12;
	goto st11;
tr18:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st30;
st30:
	if ( ++p == pe )
		goto _out30;
case 30:
#line 1123 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st12;
		case 9: goto st29;
		case 32: goto st29;
		case 35: goto tr27;
		case 41: goto tr28;
		case 45: goto st12;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st12;
	goto st11;
tr27:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st31;
st31:
	if ( ++p == pe )
		goto _out31;
case 31:
#line 1143 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr31;
		case 9: goto tr63;
		case 10: goto tr64;
		case 13: goto tr65;
		case 32: goto tr63;
		case 41: goto st5;
		case 45: goto tr13;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr31;
	goto tr62;
tr62:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st32;
st32:
	if ( ++p == pe )
		goto _out32;
case 32:
#line 1164 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st14;
		case 9: goto st33;
		case 10: goto st34;
		case 13: goto st35;
		case 32: goto st33;
		case 41: goto tr70;
		case 45: goto tr13;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st14;
	goto st32;
tr63:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st33;
st33:
	if ( ++p == pe )
		goto _out33;
case 33:
#line 1185 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st14;
		case 9: goto st33;
		case 10: goto st34;
		case 13: goto st35;
		case 32: goto st33;
		case 41: goto tr70;
		case 45: goto st14;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st14;
	goto st32;
tr64:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st34;
st34:
	if ( ++p == pe )
		goto _out34;
case 34:
#line 1206 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st14;
		case 9: goto st33;
		case 32: goto st33;
		case 41: goto tr70;
		case 45: goto st14;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st14;
	goto st32;
tr65:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st35;
st35:
	if ( ++p == pe )
		goto _out35;
case 35:
#line 1225 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st34;
		case 41: goto tr33;
	}
	goto st14;
tr19:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st36;
st36:
	if ( ++p == pe )
		goto _out36;
case 36:
#line 1239 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st30;
		case 35: goto tr29;
		case 41: goto tr30;
	}
	goto st12;
st733:
	if ( ++p == pe )
		goto _out733;
case 733:
	if ( (*p) == 32 )
		goto tr1335;
	goto tr1334;
tr1333:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 116 "superredcloth_inline.rl"
	{act = 21;}
	goto st734;
st734:
	if ( ++p == pe )
		goto _out734;
case 734:
#line 1265 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1336;
		case 9: goto st6;
		case 10: goto st7;
		case 13: goto st8;
		case 32: goto tr1337;
		case 45: goto tr13;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1336;
	goto st5;
tr1337:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 116 "superredcloth_inline.rl"
	{act = 21;}
	goto st735;
st735:
	if ( ++p == pe )
		goto _out735;
case 735:
#line 1287 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1336;
		case 9: goto st6;
		case 10: goto st7;
		case 13: goto st8;
		case 32: goto st6;
		case 45: goto tr1336;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1336;
	goto st5;
tr1328:
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
	goto st37;
st37:
	if ( ++p == pe )
		goto _out37;
case 37:
#line 1307 "superredcloth_inline.c"
	if ( (*p) == 46 )
		goto st38;
	goto tr0;
st38:
	if ( ++p == pe )
		goto _out38;
case 38:
	if ( (*p) == 46 )
		goto tr72;
	goto tr4;
st39:
	if ( ++p == pe )
		goto _out39;
case 39:
	switch( (*p) ) {
		case 67: goto st40;
		case 82: goto st41;
		case 84: goto st42;
		case 99: goto st40;
		case 114: goto st41;
		case 116: goto st42;
	}
	goto tr0;
st40:
	if ( ++p == pe )
		goto _out40;
case 40:
	if ( (*p) == 93 )
		goto tr5;
	goto tr4;
st41:
	if ( ++p == pe )
		goto _out41;
case 41:
	if ( (*p) == 93 )
		goto tr6;
	goto tr4;
st42:
	if ( ++p == pe )
		goto _out42;
case 42:
	switch( (*p) ) {
		case 77: goto st43;
		case 109: goto st43;
	}
	goto tr4;
st43:
	if ( ++p == pe )
		goto _out43;
case 43:
	if ( (*p) == 93 )
		goto tr8;
	goto tr4;
tr1301:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 7 "superredcloth_inline.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 9 "superredcloth_inline.rl"
	{act = 34;}
	goto st736;
st736:
	if ( ++p == pe )
		goto _out736;
case 736:
#line 1373 "superredcloth_inline.c"
	switch( (*p) ) {
		case 32: goto st80;
		case 34: goto tr1338;
		case 35: goto tr124;
		case 36: goto tr125;
		case 37: goto tr126;
		case 40: goto tr169;
		case 43: goto tr127;
		case 46: goto tr170;
		case 47: goto tr128;
		case 60: goto st181;
		case 61: goto tr1340;
		case 62: goto st183;
		case 91: goto tr171;
		case 95: goto tr125;
		case 123: goto tr172;
		case 127: goto tr1338;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 31 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr125;
		} else if ( (*p) >= 0 )
			goto tr1338;
	} else if ( (*p) > 63 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr125;
		} else if ( (*p) >= 65 )
			goto tr125;
	} else
		goto tr1338;
	goto tr122;
tr122:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st44;
tr291:
#line 18 "superredcloth_inline.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st44;
tr303:
#line 21 "superredcloth_inline.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st44;
tr314:
#line 19 "superredcloth_inline.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st44;
st44:
	if ( ++p == pe )
		goto _out44;
case 44:
#line 1433 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto tr4;
		case 36: goto st45;
		case 37: goto st78;
		case 47: goto tr4;
		case 95: goto st45;
		case 127: goto tr4;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto st45;
		} else if ( (*p) >= 0 )
			goto tr4;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr4;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st45;
		} else
			goto st45;
	} else
		goto tr4;
	goto st44;
tr125:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st45;
tr295:
#line 18 "superredcloth_inline.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st45;
tr306:
#line 21 "superredcloth_inline.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st45;
tr317:
#line 19 "superredcloth_inline.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st45;
st45:
	if ( ++p == pe )
		goto _out45;
case 45:
#line 1486 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr80;
		case 37: goto st46;
		case 40: goto tr82;
		case 60: goto tr4;
		case 62: goto tr4;
		case 127: goto tr4;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto tr4;
	goto st45;
tr80:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st737;
tr173:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st737;
st737:
	if ( ++p == pe )
		goto _out737;
case 737:
#line 1520 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr80;
		case 37: goto st46;
		case 40: goto tr82;
		case 58: goto tr1343;
		case 60: goto tr1342;
		case 62: goto tr1342;
		case 127: goto tr1342;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto tr1342;
	goto st45;
tr174:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st46;
st46:
	if ( ++p == pe )
		goto _out46;
case 46:
#line 1541 "superredcloth_inline.c"
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st47;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st47;
	} else
		goto st47;
	goto tr4;
st47:
	if ( ++p == pe )
		goto _out47;
case 47:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st45;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st45;
	} else
		goto st45;
	goto tr4;
tr82:
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
	goto st48;
st48:
	if ( ++p == pe )
		goto _out48;
case 48:
#line 1572 "superredcloth_inline.c"
	if ( (*p) == 0 )
		goto tr4;
	goto tr84;
tr84:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st49;
st49:
	if ( ++p == pe )
		goto _out49;
case 49:
#line 1584 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr4;
		case 41: goto tr86;
	}
	goto st49;
tr86:
#line 41 "superredcloth_inline.rl"
	{ STORE(title) }
	goto st50;
st50:
	if ( ++p == pe )
		goto _out50;
case 50:
#line 1598 "superredcloth_inline.c"
	if ( (*p) == 33 )
		goto tr87;
	goto tr4;
tr87:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
	goto st738;
st738:
	if ( ++p == pe )
		goto _out738;
case 738:
#line 1610 "superredcloth_inline.c"
	if ( (*p) == 58 )
		goto tr1344;
	goto tr1342;
tr1344:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st51;
st51:
	if ( ++p == pe )
		goto _out51;
case 51:
#line 1622 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto tr89;
		case 35: goto tr90;
		case 36: goto tr91;
		case 37: goto st55;
		case 43: goto st59;
		case 47: goto tr94;
		case 95: goto tr91;
		case 127: goto tr89;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr91;
		} else if ( (*p) >= 0 )
			goto tr89;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr89;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr91;
		} else
			goto tr91;
	} else
		goto tr89;
	goto st52;
st52:
	if ( ++p == pe )
		goto _out52;
case 52:
	switch( (*p) ) {
		case 34: goto tr89;
		case 36: goto tr91;
		case 37: goto st55;
		case 47: goto tr89;
		case 95: goto tr91;
		case 127: goto tr89;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr91;
		} else if ( (*p) >= 0 )
			goto tr89;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr89;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr91;
		} else
			goto tr91;
	} else
		goto tr89;
	goto st52;
tr91:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
	goto st739;
tr1354:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st739;
st739:
	if ( ++p == pe )
		goto _out739;
case 739:
#line 1695 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto tr1342;
		case 37: goto st53;
		case 60: goto tr1342;
		case 62: goto tr1342;
		case 127: goto tr1342;
	}
	if ( 0 <= (*p) && (*p) <= 32 )
		goto tr1342;
	goto tr91;
st53:
	if ( ++p == pe )
		goto _out53;
case 53:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st54;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st54;
	} else
		goto st54;
	goto tr89;
st54:
	if ( ++p == pe )
		goto _out54;
case 54:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr91;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto tr91;
	} else
		goto tr91;
	goto tr89;
st55:
	if ( ++p == pe )
		goto _out55;
case 55:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st56;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st56;
	} else
		goto st56;
	goto tr89;
st56:
	if ( ++p == pe )
		goto _out56;
case 56:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st52;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st52;
	} else
		goto st52;
	goto tr89;
tr90:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
	goto st740;
st740:
	if ( ++p == pe )
		goto _out740;
case 740:
#line 1766 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto tr1342;
		case 36: goto tr91;
		case 37: goto st57;
		case 47: goto tr1342;
		case 95: goto tr91;
		case 127: goto tr1342;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr91;
		} else if ( (*p) >= 0 )
			goto tr1342;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr1342;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr91;
		} else
			goto tr91;
	} else
		goto tr1342;
	goto tr90;
st57:
	if ( ++p == pe )
		goto _out57;
case 57:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st58;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st58;
	} else
		goto st58;
	goto tr89;
st58:
	if ( ++p == pe )
		goto _out58;
case 58:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr90;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto tr90;
	} else
		goto tr90;
	goto tr89;
st59:
	if ( ++p == pe )
		goto _out59;
case 59:
	switch( (*p) ) {
		case 34: goto tr89;
		case 36: goto tr91;
		case 37: goto st55;
		case 43: goto st59;
		case 47: goto tr89;
		case 95: goto tr91;
		case 127: goto tr89;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 58 )
				goto tr91;
		} else if ( (*p) >= 0 )
			goto tr89;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr89;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr91;
		} else
			goto tr91;
	} else
		goto tr89;
	goto st52;
tr94:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
	goto st741;
st741:
	if ( ++p == pe )
		goto _out741;
case 741:
#line 1858 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto tr1342;
		case 36: goto tr91;
		case 37: goto st55;
		case 47: goto tr94;
		case 95: goto tr91;
		case 127: goto tr1342;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr91;
		} else if ( (*p) >= 0 )
			goto tr1342;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr1342;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr91;
		} else
			goto tr91;
	} else
		goto tr1342;
	goto st52;
tr1343:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st60;
st60:
	if ( ++p == pe )
		goto _out60;
case 60:
#line 1893 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr99;
		case 35: goto tr100;
		case 36: goto tr101;
		case 37: goto st66;
		case 40: goto tr103;
		case 43: goto st77;
		case 47: goto tr105;
		case 59: goto st45;
		case 60: goto tr89;
		case 62: goto tr89;
		case 63: goto st45;
		case 95: goto tr101;
		case 127: goto tr89;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto tr89;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr101;
		} else if ( (*p) >= 65 )
			goto tr101;
	} else
		goto tr101;
	goto st61;
tr202:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st61;
st61:
	if ( ++p == pe )
		goto _out61;
case 61:
#line 1929 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr99;
		case 36: goto tr101;
		case 37: goto st66;
		case 40: goto tr103;
		case 47: goto st45;
		case 59: goto st45;
		case 60: goto tr89;
		case 62: goto tr89;
		case 63: goto st45;
		case 95: goto tr101;
		case 127: goto tr89;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto tr89;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr101;
		} else if ( (*p) >= 65 )
			goto tr101;
	} else
		goto tr101;
	goto st61;
tr99:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st742;
tr203:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st742;
st742:
	if ( ++p == pe )
		goto _out742;
case 742:
#line 1977 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr99;
		case 36: goto tr101;
		case 37: goto st66;
		case 40: goto tr103;
		case 47: goto st45;
		case 58: goto tr1343;
		case 59: goto st45;
		case 60: goto tr1342;
		case 62: goto tr1342;
		case 63: goto st45;
		case 95: goto tr101;
		case 127: goto tr1342;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto tr1342;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr101;
		} else if ( (*p) >= 65 )
			goto tr101;
	} else
		goto tr101;
	goto st61;
tr101:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
	goto st743;
tr204:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st743;
st743:
	if ( ++p == pe )
		goto _out743;
case 743:
#line 2018 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr1347;
		case 37: goto st62;
		case 40: goto tr1349;
		case 60: goto tr1342;
		case 62: goto tr1342;
		case 127: goto tr1342;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto tr1342;
	goto tr101;
tr1347:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
	goto st744;
tr1382:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
	goto st744;
st744:
	if ( ++p == pe )
		goto _out744;
case 744:
#line 2048 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr1347;
		case 37: goto st62;
		case 40: goto tr1349;
		case 58: goto tr204;
		case 60: goto tr1342;
		case 62: goto tr1342;
		case 127: goto tr1342;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto tr1342;
	goto tr101;
tr1383:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st62;
st62:
	if ( ++p == pe )
		goto _out62;
case 62:
#line 2069 "superredcloth_inline.c"
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st63;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st63;
	} else
		goto st63;
	goto tr89;
st63:
	if ( ++p == pe )
		goto _out63;
case 63:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr101;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto tr101;
	} else
		goto tr101;
	goto tr89;
tr1349:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st745;
st745:
	if ( ++p == pe )
		goto _out745;
case 745:
#line 2104 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1342;
		case 34: goto tr84;
		case 37: goto tr1350;
		case 60: goto tr84;
		case 62: goto tr84;
		case 127: goto tr84;
	}
	if ( 1 <= (*p) && (*p) <= 32 )
		goto tr84;
	goto tr111;
tr108:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st746;
tr111:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st746;
st746:
	if ( ++p == pe )
		goto _out746;
case 746:
#line 2134 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1342;
		case 34: goto st49;
		case 37: goto st64;
		case 41: goto tr1352;
		case 60: goto st49;
		case 62: goto st49;
		case 127: goto st49;
	}
	if ( 1 <= (*p) && (*p) <= 32 )
		goto st49;
	goto tr108;
tr1350:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st64;
st64:
	if ( ++p == pe )
		goto _out64;
case 64:
#line 2155 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr89;
		case 41: goto tr86;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st65;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st65;
	} else
		goto st65;
	goto st49;
st65:
	if ( ++p == pe )
		goto _out65;
case 65:
	switch( (*p) ) {
		case 0: goto tr89;
		case 41: goto tr86;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr108;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto tr108;
	} else
		goto tr108;
	goto st49;
tr1352:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 41 "superredcloth_inline.rl"
	{ STORE(title) }
	goto st747;
st747:
	if ( ++p == pe )
		goto _out747;
case 747:
#line 2196 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr1353;
		case 37: goto st53;
		case 60: goto tr1342;
		case 62: goto tr1342;
		case 127: goto tr1342;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto tr1342;
	goto tr91;
tr1353:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
	goto st748;
st748:
	if ( ++p == pe )
		goto _out748;
case 748:
#line 2215 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto tr1342;
		case 37: goto st53;
		case 58: goto tr1354;
		case 60: goto tr1342;
		case 62: goto tr1342;
		case 127: goto tr1342;
	}
	if ( 0 <= (*p) && (*p) <= 32 )
		goto tr1342;
	goto tr91;
tr205:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st66;
st66:
	if ( ++p == pe )
		goto _out66;
case 66:
#line 2235 "superredcloth_inline.c"
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st67;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st67;
	} else
		goto st67;
	goto tr89;
st67:
	if ( ++p == pe )
		goto _out67;
case 67:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st61;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st61;
	} else
		goto st61;
	goto tr89;
tr103:
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
	goto st68;
st68:
	if ( ++p == pe )
		goto _out68;
case 68:
#line 2266 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr89;
		case 34: goto tr84;
		case 36: goto tr111;
		case 37: goto tr112;
		case 47: goto tr84;
		case 95: goto tr111;
		case 127: goto tr84;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr111;
		} else if ( (*p) >= 1 )
			goto tr84;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr84;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr111;
		} else
			goto tr111;
	} else
		goto tr84;
	goto tr110;
tr110:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st69;
st69:
	if ( ++p == pe )
		goto _out69;
case 69:
#line 2302 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr89;
		case 34: goto st49;
		case 36: goto tr108;
		case 37: goto st70;
		case 41: goto tr115;
		case 47: goto st49;
		case 95: goto tr108;
		case 127: goto st49;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr108;
		} else if ( (*p) >= 1 )
			goto st49;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto st49;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr108;
		} else
			goto tr108;
	} else
		goto st49;
	goto st69;
tr112:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st70;
st70:
	if ( ++p == pe )
		goto _out70;
case 70:
#line 2339 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr89;
		case 41: goto tr86;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st71;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st71;
	} else
		goto st71;
	goto st49;
st71:
	if ( ++p == pe )
		goto _out71;
case 71:
	switch( (*p) ) {
		case 0: goto tr89;
		case 41: goto tr86;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st69;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st69;
	} else
		goto st69;
	goto st49;
tr115:
#line 41 "superredcloth_inline.rl"
	{ STORE(title) }
	goto st72;
st72:
	if ( ++p == pe )
		goto _out72;
case 72:
#line 2378 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr117;
		case 36: goto tr91;
		case 37: goto st55;
		case 47: goto tr89;
		case 95: goto tr91;
		case 127: goto tr89;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 34 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr91;
		} else if ( (*p) >= 0 )
			goto tr89;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr89;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr91;
		} else
			goto tr91;
	} else
		goto tr89;
	goto st52;
tr117:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
	goto st749;
st749:
	if ( ++p == pe )
		goto _out749;
case 749:
#line 2413 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto tr1342;
		case 36: goto tr91;
		case 37: goto st55;
		case 47: goto tr1342;
		case 58: goto tr1344;
		case 95: goto tr91;
		case 127: goto tr1342;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr91;
		} else if ( (*p) >= 0 )
			goto tr1342;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr1342;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr91;
		} else
			goto tr91;
	} else
		goto tr1342;
	goto st52;
tr100:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st750;
tr1399:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st750;
st750:
	if ( ++p == pe )
		goto _out750;
case 750:
#line 2459 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr1355;
		case 36: goto tr101;
		case 37: goto st73;
		case 40: goto tr1357;
		case 47: goto st45;
		case 59: goto st45;
		case 60: goto tr1342;
		case 62: goto tr1342;
		case 63: goto st45;
		case 95: goto tr101;
		case 127: goto tr1342;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto tr1342;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr101;
		} else if ( (*p) >= 65 )
			goto tr101;
	} else
		goto tr101;
	goto tr100;
tr1355:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st751;
tr1400:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st751;
st751:
	if ( ++p == pe )
		goto _out751;
case 751:
#line 2507 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr1355;
		case 36: goto tr101;
		case 37: goto st73;
		case 40: goto tr1357;
		case 47: goto st45;
		case 58: goto tr1358;
		case 59: goto st45;
		case 60: goto tr1342;
		case 62: goto tr1342;
		case 63: goto st45;
		case 95: goto tr101;
		case 127: goto tr1342;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto tr1342;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr101;
		} else if ( (*p) >= 65 )
			goto tr101;
	} else
		goto tr101;
	goto tr100;
tr1401:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st73;
st73:
	if ( ++p == pe )
		goto _out73;
case 73:
#line 2542 "superredcloth_inline.c"
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st74;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st74;
	} else
		goto st74;
	goto tr89;
st74:
	if ( ++p == pe )
		goto _out74;
case 74:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr100;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto tr100;
	} else
		goto tr100;
	goto tr89;
tr1357:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st752;
st752:
	if ( ++p == pe )
		goto _out752;
case 752:
#line 2577 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1342;
		case 34: goto tr84;
		case 36: goto tr111;
		case 37: goto tr1360;
		case 47: goto tr84;
		case 95: goto tr111;
		case 127: goto tr84;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr111;
		} else if ( (*p) >= 1 )
			goto tr84;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr84;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr111;
		} else
			goto tr111;
	} else
		goto tr84;
	goto tr1359;
tr120:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st753;
tr1359:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st753;
st753:
	if ( ++p == pe )
		goto _out753;
case 753:
#line 2623 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1342;
		case 34: goto st49;
		case 36: goto tr108;
		case 37: goto st75;
		case 41: goto tr1362;
		case 47: goto st49;
		case 95: goto tr108;
		case 127: goto st49;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr108;
		} else if ( (*p) >= 1 )
			goto st49;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto st49;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr108;
		} else
			goto tr108;
	} else
		goto st49;
	goto tr120;
tr1360:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st75;
st75:
	if ( ++p == pe )
		goto _out75;
case 75:
#line 2660 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr89;
		case 41: goto tr86;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st76;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st76;
	} else
		goto st76;
	goto st49;
st76:
	if ( ++p == pe )
		goto _out76;
case 76:
	switch( (*p) ) {
		case 0: goto tr89;
		case 41: goto tr86;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr120;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto tr120;
	} else
		goto tr120;
	goto st49;
tr1362:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 41 "superredcloth_inline.rl"
	{ STORE(title) }
	goto st754;
st754:
	if ( ++p == pe )
		goto _out754;
case 754:
#line 2701 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr1363;
		case 36: goto tr91;
		case 37: goto st57;
		case 47: goto tr1342;
		case 95: goto tr91;
		case 127: goto tr1342;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 34 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr91;
		} else if ( (*p) >= 0 )
			goto tr1342;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr1342;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr91;
		} else
			goto tr91;
	} else
		goto tr1342;
	goto tr90;
tr1363:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
	goto st755;
st755:
	if ( ++p == pe )
		goto _out755;
case 755:
#line 2736 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto tr1342;
		case 36: goto tr91;
		case 37: goto st57;
		case 47: goto tr1342;
		case 58: goto tr1364;
		case 95: goto tr91;
		case 127: goto tr1342;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr91;
		} else if ( (*p) >= 0 )
			goto tr1342;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr1342;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr91;
		} else
			goto tr91;
	} else
		goto tr1342;
	goto tr90;
tr1364:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st756;
st756:
	if ( ++p == pe )
		goto _out756;
case 756:
#line 2774 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto tr1342;
		case 36: goto tr91;
		case 37: goto st57;
		case 43: goto tr1365;
		case 47: goto tr94;
		case 95: goto tr91;
		case 127: goto tr1342;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr91;
		} else if ( (*p) >= 0 )
			goto tr1342;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr1342;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr91;
		} else
			goto tr91;
	} else
		goto tr1342;
	goto tr90;
tr1365:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
	goto st757;
st757:
	if ( ++p == pe )
		goto _out757;
case 757:
#line 2810 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto tr1342;
		case 36: goto tr91;
		case 37: goto st57;
		case 43: goto tr1365;
		case 47: goto tr1342;
		case 95: goto tr91;
		case 127: goto tr1342;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 58 )
				goto tr91;
		} else if ( (*p) >= 0 )
			goto tr1342;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr1342;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr91;
		} else
			goto tr91;
	} else
		goto tr1342;
	goto tr90;
tr1358:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st758;
st758:
	if ( ++p == pe )
		goto _out758;
case 758:
#line 2850 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr1355;
		case 36: goto tr101;
		case 37: goto st73;
		case 40: goto tr1357;
		case 43: goto tr1366;
		case 47: goto tr105;
		case 59: goto st45;
		case 60: goto tr1342;
		case 62: goto tr1342;
		case 63: goto st45;
		case 95: goto tr101;
		case 127: goto tr1342;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto tr1342;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr101;
		} else if ( (*p) >= 65 )
			goto tr101;
	} else
		goto tr101;
	goto tr100;
tr1366:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st759;
st759:
	if ( ++p == pe )
		goto _out759;
case 759:
#line 2887 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr1355;
		case 36: goto tr101;
		case 37: goto st73;
		case 40: goto tr1357;
		case 43: goto tr1366;
		case 47: goto st45;
		case 59: goto st45;
		case 60: goto tr1342;
		case 62: goto tr1342;
		case 63: goto st45;
		case 95: goto tr101;
		case 127: goto tr1342;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto tr1342;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr101;
		} else if ( (*p) >= 65 )
			goto tr101;
	} else
		goto tr101;
	goto tr100;
tr105:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st760;
st760:
	if ( ++p == pe )
		goto _out760;
case 760:
#line 2924 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr99;
		case 36: goto tr101;
		case 37: goto st66;
		case 40: goto tr103;
		case 47: goto tr105;
		case 59: goto st45;
		case 60: goto tr1342;
		case 62: goto tr1342;
		case 63: goto st45;
		case 95: goto tr101;
		case 127: goto tr1342;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto tr1342;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr101;
		} else if ( (*p) >= 65 )
			goto tr101;
	} else
		goto tr101;
	goto st61;
st77:
	if ( ++p == pe )
		goto _out77;
case 77:
	switch( (*p) ) {
		case 33: goto tr99;
		case 36: goto tr101;
		case 37: goto st66;
		case 40: goto tr103;
		case 43: goto st77;
		case 47: goto st45;
		case 59: goto st45;
		case 60: goto tr89;
		case 62: goto tr89;
		case 63: goto st45;
		case 95: goto tr101;
		case 127: goto tr89;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto tr89;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr101;
		} else if ( (*p) >= 65 )
			goto tr101;
	} else
		goto tr101;
	goto st61;
tr126:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st78;
tr296:
#line 18 "superredcloth_inline.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st78;
tr307:
#line 21 "superredcloth_inline.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st78;
tr318:
#line 19 "superredcloth_inline.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st78;
st78:
	if ( ++p == pe )
		goto _out78;
case 78:
#line 3006 "superredcloth_inline.c"
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st79;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st79;
	} else
		goto st79;
	goto tr4;
st79:
	if ( ++p == pe )
		goto _out79;
case 79:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st44;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st44;
	} else
		goto st44;
	goto tr4;
tr293:
#line 18 "superredcloth_inline.rl"
	{ ASET(align, left) }
	goto st80;
tr304:
#line 21 "superredcloth_inline.rl"
	{ ASET(align, center) }
	goto st80;
tr315:
#line 19 "superredcloth_inline.rl"
	{ ASET(align, right) }
	goto st80;
st80:
	if ( ++p == pe )
		goto _out80;
case 80:
#line 3045 "superredcloth_inline.c"
	switch( (*p) ) {
		case 32: goto st80;
		case 34: goto tr4;
		case 35: goto tr124;
		case 36: goto tr125;
		case 37: goto tr126;
		case 43: goto tr127;
		case 47: goto tr128;
		case 95: goto tr125;
		case 127: goto tr4;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 31 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr125;
		} else if ( (*p) >= 0 )
			goto tr4;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr4;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr125;
		} else
			goto tr125;
	} else
		goto tr4;
	goto tr122;
tr124:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st81;
tr294:
#line 18 "superredcloth_inline.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st81;
tr305:
#line 21 "superredcloth_inline.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st81;
tr316:
#line 19 "superredcloth_inline.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st81;
st81:
	if ( ++p == pe )
		goto _out81;
case 81:
#line 3101 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr130;
		case 36: goto st45;
		case 37: goto st82;
		case 40: goto tr82;
		case 47: goto tr4;
		case 95: goto st45;
		case 127: goto tr4;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 34 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto st45;
		} else if ( (*p) >= 0 )
			goto tr4;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr4;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st45;
		} else
			goto st45;
	} else
		goto tr4;
	goto st81;
tr130:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st761;
st761:
	if ( ++p == pe )
		goto _out761;
case 761:
#line 3141 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr130;
		case 36: goto st45;
		case 37: goto st82;
		case 40: goto tr82;
		case 47: goto tr1342;
		case 58: goto tr1367;
		case 95: goto st45;
		case 127: goto tr1342;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 34 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto st45;
		} else if ( (*p) >= 0 )
			goto tr1342;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr1342;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st45;
		} else
			goto st45;
	} else
		goto tr1342;
	goto st81;
st82:
	if ( ++p == pe )
		goto _out82;
case 82:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st83;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st83;
	} else
		goto st83;
	goto tr4;
st83:
	if ( ++p == pe )
		goto _out83;
case 83:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st81;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st81;
	} else
		goto st81;
	goto tr4;
tr1367:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st84;
st84:
	if ( ++p == pe )
		goto _out84;
case 84:
#line 3204 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr134;
		case 35: goto tr135;
		case 36: goto tr101;
		case 37: goto st86;
		case 40: goto tr103;
		case 43: goto st92;
		case 47: goto tr94;
		case 95: goto tr101;
		case 127: goto tr89;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 34 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr101;
		} else if ( (*p) >= 0 )
			goto tr89;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr89;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr101;
		} else
			goto tr101;
	} else
		goto tr89;
	goto st85;
st85:
	if ( ++p == pe )
		goto _out85;
case 85:
	switch( (*p) ) {
		case 33: goto tr134;
		case 36: goto tr101;
		case 37: goto st86;
		case 40: goto tr103;
		case 47: goto tr89;
		case 95: goto tr101;
		case 127: goto tr89;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 34 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr101;
		} else if ( (*p) >= 0 )
			goto tr89;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr89;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr101;
		} else
			goto tr101;
	} else
		goto tr89;
	goto st85;
tr134:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st762;
st762:
	if ( ++p == pe )
		goto _out762;
case 762:
#line 3277 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr134;
		case 36: goto tr101;
		case 37: goto st86;
		case 40: goto tr103;
		case 47: goto tr1342;
		case 58: goto tr1367;
		case 95: goto tr101;
		case 127: goto tr1342;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 34 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr101;
		} else if ( (*p) >= 0 )
			goto tr1342;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr1342;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr101;
		} else
			goto tr101;
	} else
		goto tr1342;
	goto st85;
st86:
	if ( ++p == pe )
		goto _out86;
case 86:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st87;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st87;
	} else
		goto st87;
	goto tr89;
st87:
	if ( ++p == pe )
		goto _out87;
case 87:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st85;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st85;
	} else
		goto st85;
	goto tr89;
tr135:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
	goto st763;
st763:
	if ( ++p == pe )
		goto _out763;
case 763:
#line 3340 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr1368;
		case 36: goto tr101;
		case 37: goto st88;
		case 40: goto tr1357;
		case 47: goto tr1342;
		case 95: goto tr101;
		case 127: goto tr1342;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 34 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr101;
		} else if ( (*p) >= 0 )
			goto tr1342;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr1342;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr101;
		} else
			goto tr101;
	} else
		goto tr1342;
	goto tr135;
tr1368:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
	goto st764;
st764:
	if ( ++p == pe )
		goto _out764;
case 764:
#line 3378 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr1368;
		case 36: goto tr101;
		case 37: goto st88;
		case 40: goto tr1357;
		case 47: goto tr1342;
		case 58: goto tr1370;
		case 95: goto tr101;
		case 127: goto tr1342;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 34 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr101;
		} else if ( (*p) >= 0 )
			goto tr1342;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr1342;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr101;
		} else
			goto tr101;
	} else
		goto tr1342;
	goto tr135;
st88:
	if ( ++p == pe )
		goto _out88;
case 88:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st89;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st89;
	} else
		goto st89;
	goto tr89;
st89:
	if ( ++p == pe )
		goto _out89;
case 89:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr135;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto tr135;
	} else
		goto tr135;
	goto tr89;
tr1370:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st765;
st765:
	if ( ++p == pe )
		goto _out765;
case 765:
#line 3443 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr1368;
		case 36: goto tr101;
		case 37: goto st88;
		case 40: goto tr1357;
		case 43: goto tr1371;
		case 47: goto tr94;
		case 95: goto tr101;
		case 127: goto tr1342;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 34 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr101;
		} else if ( (*p) >= 0 )
			goto tr1342;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr1342;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr101;
		} else
			goto tr101;
	} else
		goto tr1342;
	goto tr135;
tr1371:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
	goto st766;
st766:
	if ( ++p == pe )
		goto _out766;
case 766:
#line 3480 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr1368;
		case 36: goto tr101;
		case 37: goto st88;
		case 40: goto tr1357;
		case 43: goto tr1371;
		case 47: goto tr1342;
		case 58: goto tr141;
		case 95: goto tr101;
		case 127: goto tr1342;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 34 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr101;
		} else if ( (*p) >= 0 )
			goto tr1342;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr1342;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr101;
		} else
			goto tr101;
	} else
		goto tr1342;
	goto tr135;
tr141:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
	goto st767;
tr1374:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st767;
st767:
	if ( ++p == pe )
		goto _out767;
case 767:
#line 3524 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr1372;
		case 36: goto tr101;
		case 37: goto st90;
		case 40: goto tr1349;
		case 47: goto tr91;
		case 59: goto tr91;
		case 60: goto tr1342;
		case 62: goto tr1342;
		case 63: goto tr91;
		case 95: goto tr101;
		case 127: goto tr1342;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto tr1342;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr101;
		} else if ( (*p) >= 65 )
			goto tr101;
	} else
		goto tr101;
	goto tr141;
tr1372:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
	goto st768;
st768:
	if ( ++p == pe )
		goto _out768;
case 768:
#line 3560 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr1372;
		case 36: goto tr101;
		case 37: goto st90;
		case 40: goto tr1349;
		case 47: goto tr91;
		case 58: goto tr1374;
		case 59: goto tr91;
		case 60: goto tr1342;
		case 62: goto tr1342;
		case 63: goto tr91;
		case 95: goto tr101;
		case 127: goto tr1342;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto tr1342;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr101;
		} else if ( (*p) >= 65 )
			goto tr101;
	} else
		goto tr101;
	goto tr141;
st90:
	if ( ++p == pe )
		goto _out90;
case 90:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st91;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st91;
	} else
		goto st91;
	goto tr89;
st91:
	if ( ++p == pe )
		goto _out91;
case 91:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr141;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto tr141;
	} else
		goto tr141;
	goto tr89;
st92:
	if ( ++p == pe )
		goto _out92;
case 92:
	switch( (*p) ) {
		case 33: goto tr134;
		case 36: goto tr101;
		case 37: goto st86;
		case 40: goto tr103;
		case 43: goto st92;
		case 47: goto tr89;
		case 58: goto tr141;
		case 95: goto tr101;
		case 127: goto tr89;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 34 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr101;
		} else if ( (*p) >= 0 )
			goto tr89;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr89;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr101;
		} else
			goto tr101;
	} else
		goto tr89;
	goto st85;
tr127:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st93;
tr298:
#line 18 "superredcloth_inline.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st93;
tr309:
#line 21 "superredcloth_inline.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st93;
tr320:
#line 19 "superredcloth_inline.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st93;
st93:
	if ( ++p == pe )
		goto _out93;
case 93:
#line 3672 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto tr4;
		case 36: goto st45;
		case 37: goto st78;
		case 43: goto st93;
		case 47: goto tr4;
		case 95: goto st45;
		case 127: goto tr4;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 58 )
				goto st45;
		} else if ( (*p) >= 0 )
			goto tr4;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr4;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st45;
		} else
			goto st45;
	} else
		goto tr4;
	goto st44;
tr128:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st94;
tr300:
#line 18 "superredcloth_inline.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st94;
tr311:
#line 21 "superredcloth_inline.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st94;
tr322:
#line 19 "superredcloth_inline.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st94;
st94:
	if ( ++p == pe )
		goto _out94;
case 94:
#line 3726 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr143;
		case 36: goto st45;
		case 37: goto st78;
		case 40: goto tr82;
		case 47: goto st94;
		case 95: goto st45;
		case 127: goto tr4;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 34 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto st45;
		} else if ( (*p) >= 0 )
			goto tr4;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr4;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st45;
		} else
			goto st45;
	} else
		goto tr4;
	goto st44;
tr143:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st769;
st769:
	if ( ++p == pe )
		goto _out769;
case 769:
#line 3766 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto tr1342;
		case 36: goto st45;
		case 37: goto st78;
		case 47: goto tr1342;
		case 58: goto tr1375;
		case 95: goto st45;
		case 127: goto tr1342;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto st45;
		} else if ( (*p) >= 0 )
			goto tr1342;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr1342;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st45;
		} else
			goto st45;
	} else
		goto tr1342;
	goto st44;
tr1375:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st95;
st95:
	if ( ++p == pe )
		goto _out95;
case 95:
#line 3802 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto tr89;
		case 35: goto tr146;
		case 36: goto tr101;
		case 37: goto st97;
		case 43: goto st101;
		case 47: goto tr94;
		case 95: goto tr101;
		case 127: goto tr89;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr101;
		} else if ( (*p) >= 0 )
			goto tr89;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr89;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr101;
		} else
			goto tr101;
	} else
		goto tr89;
	goto st96;
st96:
	if ( ++p == pe )
		goto _out96;
case 96:
	switch( (*p) ) {
		case 34: goto tr89;
		case 36: goto tr101;
		case 37: goto st97;
		case 47: goto tr89;
		case 95: goto tr101;
		case 127: goto tr89;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr101;
		} else if ( (*p) >= 0 )
			goto tr89;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr89;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr101;
		} else
			goto tr101;
	} else
		goto tr89;
	goto st96;
st97:
	if ( ++p == pe )
		goto _out97;
case 97:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st98;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st98;
	} else
		goto st98;
	goto tr89;
st98:
	if ( ++p == pe )
		goto _out98;
case 98:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st96;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st96;
	} else
		goto st96;
	goto tr89;
tr146:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
	goto st770;
st770:
	if ( ++p == pe )
		goto _out770;
case 770:
#line 3895 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto tr1342;
		case 36: goto tr101;
		case 37: goto st99;
		case 47: goto tr1342;
		case 95: goto tr101;
		case 127: goto tr1342;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr101;
		} else if ( (*p) >= 0 )
			goto tr1342;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr1342;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr101;
		} else
			goto tr101;
	} else
		goto tr1342;
	goto tr146;
st99:
	if ( ++p == pe )
		goto _out99;
case 99:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st100;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st100;
	} else
		goto st100;
	goto tr89;
st100:
	if ( ++p == pe )
		goto _out100;
case 100:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr146;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto tr146;
	} else
		goto tr146;
	goto tr89;
st101:
	if ( ++p == pe )
		goto _out101;
case 101:
	switch( (*p) ) {
		case 34: goto tr89;
		case 36: goto tr101;
		case 37: goto st97;
		case 43: goto st101;
		case 47: goto tr89;
		case 58: goto tr151;
		case 95: goto tr101;
		case 127: goto tr89;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr101;
		} else if ( (*p) >= 0 )
			goto tr89;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr89;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr101;
		} else
			goto tr101;
	} else
		goto tr89;
	goto st96;
tr151:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
	goto st771;
st771:
	if ( ++p == pe )
		goto _out771;
case 771:
#line 3988 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto tr1342;
		case 36: goto tr101;
		case 37: goto st102;
		case 47: goto tr91;
		case 59: goto tr91;
		case 60: goto tr1342;
		case 62: goto tr1342;
		case 63: goto tr91;
		case 95: goto tr101;
		case 127: goto tr1342;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 32 )
			goto tr1342;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr101;
		} else if ( (*p) >= 65 )
			goto tr101;
	} else
		goto tr101;
	goto tr151;
st102:
	if ( ++p == pe )
		goto _out102;
case 102:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st103;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st103;
	} else
		goto st103;
	goto tr89;
st103:
	if ( ++p == pe )
		goto _out103;
case 103:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr151;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto tr151;
	} else
		goto tr151;
	goto tr89;
tr169:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st104;
tr297:
#line 18 "superredcloth_inline.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st104;
tr308:
#line 21 "superredcloth_inline.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st104;
tr319:
#line 19 "superredcloth_inline.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st104;
st104:
	if ( ++p == pe )
		goto _out104;
case 104:
#line 4065 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto tr154;
		case 35: goto st151;
		case 36: goto tr156;
		case 37: goto tr157;
		case 41: goto st109;
		case 47: goto tr154;
		case 95: goto tr156;
		case 127: goto tr154;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr156;
		} else if ( (*p) >= 0 )
			goto tr154;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr154;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr156;
		} else
			goto tr156;
	} else
		goto tr154;
	goto tr153;
tr153:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st105;
st105:
	if ( ++p == pe )
		goto _out105;
case 105:
#line 4102 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto st106;
		case 35: goto tr161;
		case 36: goto st167;
		case 37: goto st179;
		case 41: goto tr164;
		case 47: goto st106;
		case 95: goto st167;
		case 127: goto st106;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto st167;
		} else if ( (*p) >= 0 )
			goto st106;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto st106;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st167;
		} else
			goto st167;
	} else
		goto st106;
	goto st105;
tr154:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st106;
st106:
	if ( ++p == pe )
		goto _out106;
case 106:
#line 4139 "superredcloth_inline.c"
	switch( (*p) ) {
		case 35: goto tr165;
		case 41: goto tr164;
	}
	goto st106;
tr165:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st107;
st107:
	if ( ++p == pe )
		goto _out107;
case 107:
#line 4153 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr4;
	goto tr166;
tr166:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st108;
st108:
	if ( ++p == pe )
		goto _out108;
case 108:
#line 4165 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr168;
	goto st108;
tr164:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st109;
tr168:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st109;
tr183:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st109;
tr198:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st109;
st109:
	if ( ++p == pe )
		goto _out109;
case 109:
#line 4189 "superredcloth_inline.c"
	switch( (*p) ) {
		case 32: goto st80;
		case 34: goto tr4;
		case 35: goto tr124;
		case 36: goto tr125;
		case 37: goto tr126;
		case 40: goto tr169;
		case 43: goto tr127;
		case 46: goto tr170;
		case 47: goto tr128;
		case 91: goto tr171;
		case 95: goto tr125;
		case 123: goto tr172;
		case 127: goto tr4;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 31 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr125;
		} else if ( (*p) >= 0 )
			goto tr4;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr4;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr125;
		} else
			goto tr125;
	} else
		goto tr4;
	goto tr122;
tr170:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st110;
tr299:
#line 18 "superredcloth_inline.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st110;
tr310:
#line 21 "superredcloth_inline.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st110;
tr321:
#line 19 "superredcloth_inline.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st110;
st110:
	if ( ++p == pe )
		goto _out110;
case 110:
#line 4249 "superredcloth_inline.c"
	switch( (*p) ) {
		case 32: goto st80;
		case 33: goto tr173;
		case 37: goto tr174;
		case 40: goto tr82;
		case 46: goto tr170;
		case 59: goto st45;
		case 60: goto tr4;
		case 62: goto tr4;
		case 63: goto st45;
		case 127: goto tr4;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto tr4;
	goto tr125;
tr171:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st111;
tr301:
#line 18 "superredcloth_inline.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st111;
tr312:
#line 21 "superredcloth_inline.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st111;
tr323:
#line 19 "superredcloth_inline.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st111;
st111:
	if ( ++p == pe )
		goto _out111;
case 111:
#line 4291 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto tr176;
		case 36: goto tr177;
		case 37: goto tr178;
		case 47: goto tr176;
		case 93: goto st44;
		case 95: goto tr177;
		case 127: goto tr176;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr177;
		} else if ( (*p) >= 0 )
			goto tr176;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr176;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr177;
		} else
			goto tr177;
	} else
		goto tr176;
	goto tr175;
tr175:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st112;
st112:
	if ( ++p == pe )
		goto _out112;
case 112:
#line 4327 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto st113;
		case 36: goto st114;
		case 37: goto st145;
		case 47: goto st113;
		case 93: goto tr183;
		case 95: goto st114;
		case 127: goto st113;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto st114;
		} else if ( (*p) >= 0 )
			goto st113;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto st113;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st114;
		} else
			goto st114;
	} else
		goto st113;
	goto st112;
tr176:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st113;
st113:
	if ( ++p == pe )
		goto _out113;
case 113:
#line 4363 "superredcloth_inline.c"
	if ( (*p) == 93 )
		goto tr183;
	goto st113;
tr177:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st114;
st114:
	if ( ++p == pe )
		goto _out114;
case 114:
#line 4375 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr184;
		case 37: goto st115;
		case 40: goto tr82;
		case 60: goto st113;
		case 62: goto st113;
		case 93: goto tr186;
		case 127: goto st113;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto st113;
	goto st114;
tr184:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st772;
tr236:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st772;
st772:
	if ( ++p == pe )
		goto _out772;
case 772:
#line 4410 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr184;
		case 37: goto st115;
		case 40: goto tr82;
		case 58: goto tr1378;
		case 60: goto st113;
		case 62: goto st113;
		case 93: goto tr186;
		case 127: goto st113;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto st113;
	goto st114;
tr237:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st115;
st115:
	if ( ++p == pe )
		goto _out115;
case 115:
#line 4432 "superredcloth_inline.c"
	if ( (*p) == 93 )
		goto tr183;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st116;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st116;
	} else
		goto st116;
	goto st113;
st116:
	if ( ++p == pe )
		goto _out116;
case 116:
	if ( (*p) == 93 )
		goto tr183;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st114;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st114;
	} else
		goto st114;
	goto st113;
tr1378:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st117;
st117:
	if ( ++p == pe )
		goto _out117;
case 117:
#line 4467 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr189;
		case 35: goto tr190;
		case 36: goto tr191;
		case 37: goto st124;
		case 40: goto tr103;
		case 43: goto st144;
		case 47: goto tr194;
		case 59: goto st114;
		case 60: goto st113;
		case 62: goto st113;
		case 63: goto st114;
		case 93: goto tr195;
		case 95: goto tr191;
		case 127: goto st113;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st113;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr191;
		} else if ( (*p) >= 65 )
			goto tr191;
	} else
		goto tr191;
	goto st118;
tr209:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st118;
st118:
	if ( ++p == pe )
		goto _out118;
case 118:
#line 4504 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr189;
		case 36: goto tr191;
		case 37: goto st124;
		case 40: goto tr103;
		case 47: goto st114;
		case 59: goto st114;
		case 60: goto st113;
		case 62: goto st113;
		case 63: goto st114;
		case 93: goto tr195;
		case 95: goto tr191;
		case 127: goto st113;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st113;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr191;
		} else if ( (*p) >= 65 )
			goto tr191;
	} else
		goto tr191;
	goto st118;
tr189:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st773;
tr210:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st773;
st773:
	if ( ++p == pe )
		goto _out773;
case 773:
#line 4553 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr189;
		case 36: goto tr191;
		case 37: goto st124;
		case 40: goto tr103;
		case 47: goto st114;
		case 58: goto tr1378;
		case 59: goto st114;
		case 60: goto st113;
		case 62: goto st113;
		case 63: goto st114;
		case 93: goto tr195;
		case 95: goto tr191;
		case 127: goto st113;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st113;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr191;
		} else if ( (*p) >= 65 )
			goto tr191;
	} else
		goto tr191;
	goto st118;
tr191:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st774;
tr211:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st774;
st774:
	if ( ++p == pe )
		goto _out774;
case 774:
#line 4599 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr1379;
		case 37: goto st119;
		case 40: goto tr1349;
		case 60: goto st113;
		case 62: goto st113;
		case 93: goto tr1381;
		case 127: goto st113;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto st113;
	goto tr191;
tr1379:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st775;
tr1386:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st775;
st775:
	if ( ++p == pe )
		goto _out775;
case 775:
#line 4634 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr1379;
		case 37: goto st119;
		case 40: goto tr1349;
		case 58: goto tr211;
		case 60: goto st113;
		case 62: goto st113;
		case 93: goto tr1381;
		case 127: goto st113;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto st113;
	goto tr191;
tr1387:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st119;
st119:
	if ( ++p == pe )
		goto _out119;
case 119:
#line 4656 "superredcloth_inline.c"
	if ( (*p) == 93 )
		goto tr183;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st120;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st120;
	} else
		goto st120;
	goto st113;
st120:
	if ( ++p == pe )
		goto _out120;
case 120:
	if ( (*p) == 93 )
		goto tr183;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr191;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto tr191;
	} else
		goto tr191;
	goto st113;
tr1428:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st776;
tr1381:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st776;
tr1392:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st776;
tr1418:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st776;
st776:
	if ( ++p == pe )
		goto _out776;
case 776:
#line 4719 "superredcloth_inline.c"
	switch( (*p) ) {
		case 32: goto st80;
		case 33: goto tr1382;
		case 37: goto tr1383;
		case 40: goto tr1349;
		case 46: goto tr206;
		case 59: goto tr101;
		case 60: goto tr1342;
		case 62: goto tr1342;
		case 63: goto tr101;
		case 91: goto tr1384;
		case 123: goto tr1385;
		case 127: goto tr1342;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto tr1342;
	goto tr204;
tr206:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st777;
st777:
	if ( ++p == pe )
		goto _out777;
case 777:
#line 4749 "superredcloth_inline.c"
	switch( (*p) ) {
		case 32: goto st80;
		case 33: goto tr1382;
		case 37: goto tr1383;
		case 40: goto tr1349;
		case 46: goto tr206;
		case 59: goto tr101;
		case 60: goto tr1342;
		case 62: goto tr1342;
		case 63: goto tr101;
		case 127: goto tr1342;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto tr1342;
	goto tr204;
tr1384:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st778;
st778:
	if ( ++p == pe )
		goto _out778;
case 778:
#line 4777 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr1386;
		case 37: goto tr1387;
		case 40: goto tr1349;
		case 60: goto tr176;
		case 62: goto tr176;
		case 93: goto tr101;
		case 127: goto tr176;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto tr176;
	goto tr211;
tr1385:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st779;
st779:
	if ( ++p == pe )
		goto _out779;
case 779:
#line 4802 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr1388;
		case 37: goto tr1389;
		case 40: goto tr1349;
		case 60: goto tr214;
		case 62: goto tr214;
		case 125: goto tr101;
		case 127: goto tr214;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto tr214;
	goto tr216;
tr200:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st780;
tr216:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st780;
st780:
	if ( ++p == pe )
		goto _out780;
case 780:
#line 4833 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr1390;
		case 37: goto st122;
		case 40: goto tr1349;
		case 60: goto st121;
		case 62: goto st121;
		case 125: goto tr1392;
		case 127: goto st121;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto st121;
	goto tr200;
tr214:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st121;
st121:
	if ( ++p == pe )
		goto _out121;
case 121:
#line 4854 "superredcloth_inline.c"
	if ( (*p) == 125 )
		goto tr198;
	goto st121;
tr1390:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st781;
tr1388:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st781;
st781:
	if ( ++p == pe )
		goto _out781;
case 781:
#line 4880 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr1390;
		case 37: goto st122;
		case 40: goto tr1349;
		case 58: goto tr216;
		case 60: goto st121;
		case 62: goto st121;
		case 125: goto tr1392;
		case 127: goto st121;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto st121;
	goto tr200;
tr1389:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st122;
st122:
	if ( ++p == pe )
		goto _out122;
case 122:
#line 4902 "superredcloth_inline.c"
	if ( (*p) == 125 )
		goto tr198;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st123;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st123;
	} else
		goto st123;
	goto st121;
st123:
	if ( ++p == pe )
		goto _out123;
case 123:
	if ( (*p) == 125 )
		goto tr198;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr200;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto tr200;
	} else
		goto tr200;
	goto st121;
tr212:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st124;
st124:
	if ( ++p == pe )
		goto _out124;
case 124:
#line 4937 "superredcloth_inline.c"
	if ( (*p) == 93 )
		goto tr183;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st125;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st125;
	} else
		goto st125;
	goto st113;
st125:
	if ( ++p == pe )
		goto _out125;
case 125:
	if ( (*p) == 93 )
		goto tr183;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st118;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st118;
	} else
		goto st118;
	goto st113;
tr280:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st126;
tr261:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st126;
tr195:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st126;
tr223:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st126;
st126:
	if ( ++p == pe )
		goto _out126;
case 126:
#line 4984 "superredcloth_inline.c"
	switch( (*p) ) {
		case 32: goto st80;
		case 33: goto tr203;
		case 36: goto tr204;
		case 37: goto tr205;
		case 40: goto tr103;
		case 46: goto tr206;
		case 47: goto tr125;
		case 59: goto st45;
		case 60: goto tr89;
		case 62: goto tr89;
		case 63: goto st45;
		case 91: goto tr207;
		case 95: goto tr204;
		case 123: goto tr208;
		case 127: goto tr89;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto tr89;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr204;
		} else if ( (*p) >= 65 )
			goto tr204;
	} else
		goto tr204;
	goto tr202;
tr207:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st127;
st127:
	if ( ++p == pe )
		goto _out127;
case 127:
#line 5022 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr210;
		case 36: goto tr211;
		case 37: goto tr212;
		case 40: goto tr103;
		case 47: goto tr177;
		case 59: goto tr177;
		case 60: goto tr176;
		case 62: goto tr176;
		case 63: goto tr177;
		case 93: goto st61;
		case 95: goto tr211;
		case 127: goto tr176;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto tr176;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr211;
		} else if ( (*p) >= 65 )
			goto tr211;
	} else
		goto tr211;
	goto tr209;
tr208:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st128;
st128:
	if ( ++p == pe )
		goto _out128;
case 128:
#line 5057 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr215;
		case 36: goto tr216;
		case 37: goto tr217;
		case 40: goto tr103;
		case 47: goto tr218;
		case 59: goto tr218;
		case 60: goto tr214;
		case 62: goto tr214;
		case 63: goto tr218;
		case 95: goto tr216;
		case 125: goto st61;
		case 127: goto tr214;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto tr214;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr216;
		} else if ( (*p) >= 65 )
			goto tr216;
	} else
		goto tr216;
	goto tr213;
tr213:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st129;
st129:
	if ( ++p == pe )
		goto _out129;
case 129:
#line 5092 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr220;
		case 36: goto tr200;
		case 37: goto st130;
		case 40: goto tr103;
		case 47: goto st132;
		case 59: goto st132;
		case 60: goto st121;
		case 62: goto st121;
		case 63: goto st132;
		case 95: goto tr200;
		case 125: goto tr223;
		case 127: goto st121;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st121;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr200;
		} else if ( (*p) >= 65 )
			goto tr200;
	} else
		goto tr200;
	goto st129;
tr220:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st782;
tr215:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st782;
st782:
	if ( ++p == pe )
		goto _out782;
case 782:
#line 5141 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr220;
		case 36: goto tr200;
		case 37: goto st130;
		case 40: goto tr103;
		case 47: goto st132;
		case 58: goto tr1393;
		case 59: goto st132;
		case 60: goto st121;
		case 62: goto st121;
		case 63: goto st132;
		case 95: goto tr200;
		case 125: goto tr223;
		case 127: goto st121;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st121;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr200;
		} else if ( (*p) >= 65 )
			goto tr200;
	} else
		goto tr200;
	goto st129;
tr217:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st130;
st130:
	if ( ++p == pe )
		goto _out130;
case 130:
#line 5177 "superredcloth_inline.c"
	if ( (*p) == 125 )
		goto tr198;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st131;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st131;
	} else
		goto st131;
	goto st121;
st131:
	if ( ++p == pe )
		goto _out131;
case 131:
	if ( (*p) == 125 )
		goto tr198;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st129;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st129;
	} else
		goto st129;
	goto st121;
tr218:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st132;
st132:
	if ( ++p == pe )
		goto _out132;
case 132:
#line 5212 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr225;
		case 37: goto st133;
		case 40: goto tr82;
		case 60: goto st121;
		case 62: goto st121;
		case 125: goto tr227;
		case 127: goto st121;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto st121;
	goto st132;
tr225:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st783;
tr238:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st783;
st783:
	if ( ++p == pe )
		goto _out783;
case 783:
#line 5247 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr225;
		case 37: goto st133;
		case 40: goto tr82;
		case 58: goto tr1393;
		case 60: goto st121;
		case 62: goto st121;
		case 125: goto tr227;
		case 127: goto st121;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto st121;
	goto st132;
tr239:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st133;
st133:
	if ( ++p == pe )
		goto _out133;
case 133:
#line 5269 "superredcloth_inline.c"
	if ( (*p) == 125 )
		goto tr198;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st134;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st134;
	} else
		goto st134;
	goto st121;
st134:
	if ( ++p == pe )
		goto _out134;
case 134:
	if ( (*p) == 125 )
		goto tr198;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st132;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st132;
	} else
		goto st132;
	goto st121;
tr1393:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st135;
st135:
	if ( ++p == pe )
		goto _out135;
case 135:
#line 5304 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr220;
		case 35: goto tr229;
		case 36: goto tr200;
		case 37: goto st130;
		case 40: goto tr103;
		case 43: goto st140;
		case 47: goto tr231;
		case 59: goto st132;
		case 60: goto st121;
		case 62: goto st121;
		case 63: goto st132;
		case 95: goto tr200;
		case 125: goto tr223;
		case 127: goto st121;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st121;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr200;
		} else if ( (*p) >= 65 )
			goto tr200;
	} else
		goto tr200;
	goto st129;
tr229:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st784;
tr1412:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st784;
st784:
	if ( ++p == pe )
		goto _out784;
case 784:
#line 5351 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr1394;
		case 36: goto tr200;
		case 37: goto st136;
		case 40: goto tr1357;
		case 47: goto st132;
		case 59: goto st132;
		case 60: goto st121;
		case 62: goto st121;
		case 63: goto st132;
		case 95: goto tr200;
		case 125: goto tr1396;
		case 127: goto st121;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st121;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr200;
		} else if ( (*p) >= 65 )
			goto tr200;
	} else
		goto tr200;
	goto tr229;
tr1394:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st785;
tr1413:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st785;
st785:
	if ( ++p == pe )
		goto _out785;
case 785:
#line 5400 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr1394;
		case 36: goto tr200;
		case 37: goto st136;
		case 40: goto tr1357;
		case 47: goto st132;
		case 58: goto tr1397;
		case 59: goto st132;
		case 60: goto st121;
		case 62: goto st121;
		case 63: goto st132;
		case 95: goto tr200;
		case 125: goto tr1396;
		case 127: goto st121;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st121;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr200;
		} else if ( (*p) >= 65 )
			goto tr200;
	} else
		goto tr200;
	goto tr229;
tr1414:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st136;
st136:
	if ( ++p == pe )
		goto _out136;
case 136:
#line 5436 "superredcloth_inline.c"
	if ( (*p) == 125 )
		goto tr198;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st137;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st137;
	} else
		goto st137;
	goto st121;
st137:
	if ( ++p == pe )
		goto _out137;
case 137:
	if ( (*p) == 125 )
		goto tr198;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr229;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto tr229;
	} else
		goto tr229;
	goto st121;
tr1397:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st786;
st786:
	if ( ++p == pe )
		goto _out786;
case 786:
#line 5475 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr1394;
		case 36: goto tr200;
		case 37: goto st136;
		case 40: goto tr1357;
		case 43: goto tr1398;
		case 47: goto tr231;
		case 59: goto st132;
		case 60: goto st121;
		case 62: goto st121;
		case 63: goto st132;
		case 95: goto tr200;
		case 125: goto tr1396;
		case 127: goto st121;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st121;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr200;
		} else if ( (*p) >= 65 )
			goto tr200;
	} else
		goto tr200;
	goto tr229;
tr1398:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st787;
st787:
	if ( ++p == pe )
		goto _out787;
case 787:
#line 5513 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr1394;
		case 36: goto tr200;
		case 37: goto st136;
		case 40: goto tr1357;
		case 43: goto tr1398;
		case 47: goto st132;
		case 59: goto st132;
		case 60: goto st121;
		case 62: goto st121;
		case 63: goto st132;
		case 95: goto tr200;
		case 125: goto tr1396;
		case 127: goto st121;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st121;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr200;
		} else if ( (*p) >= 65 )
			goto tr200;
	} else
		goto tr200;
	goto tr229;
tr1409:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st788;
tr1396:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st788;
tr1421:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st788;
st788:
	if ( ++p == pe )
		goto _out788;
case 788:
#line 5569 "superredcloth_inline.c"
	switch( (*p) ) {
		case 32: goto st80;
		case 33: goto tr1400;
		case 36: goto tr204;
		case 37: goto tr1401;
		case 40: goto tr1357;
		case 46: goto tr206;
		case 47: goto tr125;
		case 59: goto st45;
		case 60: goto tr1342;
		case 62: goto tr1342;
		case 63: goto st45;
		case 91: goto tr1402;
		case 95: goto tr204;
		case 123: goto tr1403;
		case 127: goto tr1342;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto tr1342;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr204;
		} else if ( (*p) >= 65 )
			goto tr204;
	} else
		goto tr204;
	goto tr1399;
tr1402:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st789;
st789:
	if ( ++p == pe )
		goto _out789;
case 789:
#line 5611 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr1405;
		case 36: goto tr211;
		case 37: goto tr1406;
		case 40: goto tr1357;
		case 47: goto tr177;
		case 59: goto tr177;
		case 60: goto tr176;
		case 62: goto tr176;
		case 63: goto tr177;
		case 93: goto tr100;
		case 95: goto tr211;
		case 127: goto tr176;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto tr176;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr211;
		} else if ( (*p) >= 65 )
			goto tr211;
	} else
		goto tr211;
	goto tr1404;
tr190:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st790;
tr1404:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st790;
st790:
	if ( ++p == pe )
		goto _out790;
case 790:
#line 5656 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr1407;
		case 36: goto tr191;
		case 37: goto st138;
		case 40: goto tr1357;
		case 47: goto st114;
		case 59: goto st114;
		case 60: goto st113;
		case 62: goto st113;
		case 63: goto st114;
		case 93: goto tr1409;
		case 95: goto tr191;
		case 127: goto st113;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st113;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr191;
		} else if ( (*p) >= 65 )
			goto tr191;
	} else
		goto tr191;
	goto tr190;
tr1407:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st791;
tr1405:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st791;
st791:
	if ( ++p == pe )
		goto _out791;
case 791:
#line 5705 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr1407;
		case 36: goto tr191;
		case 37: goto st138;
		case 40: goto tr1357;
		case 47: goto st114;
		case 58: goto tr1410;
		case 59: goto st114;
		case 60: goto st113;
		case 62: goto st113;
		case 63: goto st114;
		case 93: goto tr1409;
		case 95: goto tr191;
		case 127: goto st113;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st113;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr191;
		} else if ( (*p) >= 65 )
			goto tr191;
	} else
		goto tr191;
	goto tr190;
tr1406:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st138;
st138:
	if ( ++p == pe )
		goto _out138;
case 138:
#line 5741 "superredcloth_inline.c"
	if ( (*p) == 93 )
		goto tr183;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st139;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st139;
	} else
		goto st139;
	goto st113;
st139:
	if ( ++p == pe )
		goto _out139;
case 139:
	if ( (*p) == 93 )
		goto tr183;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr190;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto tr190;
	} else
		goto tr190;
	goto st113;
tr1410:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st792;
st792:
	if ( ++p == pe )
		goto _out792;
case 792:
#line 5780 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr1407;
		case 36: goto tr191;
		case 37: goto st138;
		case 40: goto tr1357;
		case 43: goto tr1411;
		case 47: goto tr194;
		case 59: goto st114;
		case 60: goto st113;
		case 62: goto st113;
		case 63: goto st114;
		case 93: goto tr1409;
		case 95: goto tr191;
		case 127: goto st113;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st113;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr191;
		} else if ( (*p) >= 65 )
			goto tr191;
	} else
		goto tr191;
	goto tr190;
tr1411:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st793;
st793:
	if ( ++p == pe )
		goto _out793;
case 793:
#line 5818 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr1407;
		case 36: goto tr191;
		case 37: goto st138;
		case 40: goto tr1357;
		case 43: goto tr1411;
		case 47: goto st114;
		case 59: goto st114;
		case 60: goto st113;
		case 62: goto st113;
		case 63: goto st114;
		case 93: goto tr1409;
		case 95: goto tr191;
		case 127: goto st113;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st113;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr191;
		} else if ( (*p) >= 65 )
			goto tr191;
	} else
		goto tr191;
	goto tr190;
tr194:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st794;
st794:
	if ( ++p == pe )
		goto _out794;
case 794:
#line 5856 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr189;
		case 36: goto tr191;
		case 37: goto st124;
		case 40: goto tr103;
		case 47: goto tr194;
		case 59: goto st114;
		case 60: goto st113;
		case 62: goto st113;
		case 63: goto st114;
		case 93: goto tr195;
		case 95: goto tr191;
		case 127: goto st113;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st113;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr191;
		} else if ( (*p) >= 65 )
			goto tr191;
	} else
		goto tr191;
	goto st118;
tr1403:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st795;
st795:
	if ( ++p == pe )
		goto _out795;
case 795:
#line 5895 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr1413;
		case 36: goto tr216;
		case 37: goto tr1414;
		case 40: goto tr1357;
		case 47: goto tr218;
		case 59: goto tr218;
		case 60: goto tr214;
		case 62: goto tr214;
		case 63: goto tr218;
		case 95: goto tr216;
		case 125: goto tr100;
		case 127: goto tr214;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto tr214;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr216;
		} else if ( (*p) >= 65 )
			goto tr216;
	} else
		goto tr216;
	goto tr1412;
tr231:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st796;
st796:
	if ( ++p == pe )
		goto _out796;
case 796:
#line 5932 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr220;
		case 36: goto tr200;
		case 37: goto st130;
		case 40: goto tr103;
		case 47: goto tr231;
		case 59: goto st132;
		case 60: goto st121;
		case 62: goto st121;
		case 63: goto st132;
		case 95: goto tr200;
		case 125: goto tr223;
		case 127: goto st121;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st121;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr200;
		} else if ( (*p) >= 65 )
			goto tr200;
	} else
		goto tr200;
	goto st129;
st140:
	if ( ++p == pe )
		goto _out140;
case 140:
	switch( (*p) ) {
		case 33: goto tr220;
		case 36: goto tr200;
		case 37: goto st130;
		case 40: goto tr103;
		case 43: goto st140;
		case 47: goto st132;
		case 59: goto st132;
		case 60: goto st121;
		case 62: goto st121;
		case 63: goto st132;
		case 95: goto tr200;
		case 125: goto tr223;
		case 127: goto st121;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st121;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr200;
		} else if ( (*p) >= 65 )
			goto tr200;
	} else
		goto tr200;
	goto st129;
tr271:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st141;
tr254:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st141;
tr186:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st141;
tr227:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st141;
st141:
	if ( ++p == pe )
		goto _out141;
case 141:
#line 6010 "superredcloth_inline.c"
	switch( (*p) ) {
		case 32: goto st80;
		case 33: goto tr173;
		case 37: goto tr174;
		case 40: goto tr82;
		case 46: goto tr170;
		case 59: goto st45;
		case 60: goto tr4;
		case 62: goto tr4;
		case 63: goto st45;
		case 91: goto tr234;
		case 123: goto tr235;
		case 127: goto tr4;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto tr4;
	goto tr125;
tr234:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st142;
st142:
	if ( ++p == pe )
		goto _out142;
case 142:
#line 6036 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr236;
		case 37: goto tr237;
		case 40: goto tr82;
		case 60: goto tr176;
		case 62: goto tr176;
		case 93: goto st45;
		case 127: goto tr176;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto tr176;
	goto tr177;
tr235:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st143;
st143:
	if ( ++p == pe )
		goto _out143;
case 143:
#line 6057 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr238;
		case 37: goto tr239;
		case 40: goto tr82;
		case 60: goto tr214;
		case 62: goto tr214;
		case 125: goto st45;
		case 127: goto tr214;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto tr214;
	goto tr218;
st144:
	if ( ++p == pe )
		goto _out144;
case 144:
	switch( (*p) ) {
		case 33: goto tr189;
		case 36: goto tr191;
		case 37: goto st124;
		case 40: goto tr103;
		case 43: goto st144;
		case 47: goto st114;
		case 59: goto st114;
		case 60: goto st113;
		case 62: goto st113;
		case 63: goto st114;
		case 93: goto tr195;
		case 95: goto tr191;
		case 127: goto st113;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st113;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr191;
		} else if ( (*p) >= 65 )
			goto tr191;
	} else
		goto tr191;
	goto st118;
tr178:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st145;
st145:
	if ( ++p == pe )
		goto _out145;
case 145:
#line 6109 "superredcloth_inline.c"
	if ( (*p) == 93 )
		goto tr183;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st146;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st146;
	} else
		goto st146;
	goto st113;
st146:
	if ( ++p == pe )
		goto _out146;
case 146:
	if ( (*p) == 93 )
		goto tr183;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st112;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st112;
	} else
		goto st112;
	goto st113;
tr172:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st147;
tr302:
#line 18 "superredcloth_inline.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st147;
tr313:
#line 21 "superredcloth_inline.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st147;
tr324:
#line 19 "superredcloth_inline.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st147;
st147:
	if ( ++p == pe )
		goto _out147;
case 147:
#line 6162 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto tr214;
		case 36: goto tr218;
		case 37: goto tr242;
		case 47: goto tr214;
		case 95: goto tr218;
		case 125: goto st44;
		case 127: goto tr214;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr218;
		} else if ( (*p) >= 0 )
			goto tr214;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr214;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr218;
		} else
			goto tr218;
	} else
		goto tr214;
	goto tr241;
tr241:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st148;
st148:
	if ( ++p == pe )
		goto _out148;
case 148:
#line 6198 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto st121;
		case 36: goto st132;
		case 37: goto st149;
		case 47: goto st121;
		case 95: goto st132;
		case 125: goto tr198;
		case 127: goto st121;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto st132;
		} else if ( (*p) >= 0 )
			goto st121;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto st121;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st132;
		} else
			goto st132;
	} else
		goto st121;
	goto st148;
tr242:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st149;
st149:
	if ( ++p == pe )
		goto _out149;
case 149:
#line 6234 "superredcloth_inline.c"
	if ( (*p) == 125 )
		goto tr198;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st150;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st150;
	} else
		goto st150;
	goto st121;
st150:
	if ( ++p == pe )
		goto _out150;
case 150:
	if ( (*p) == 125 )
		goto tr198;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st148;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st148;
	} else
		goto st148;
	goto st121;
tr161:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st151;
st151:
	if ( ++p == pe )
		goto _out151;
case 151:
#line 6269 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto tr166;
		case 36: goto tr247;
		case 37: goto tr248;
		case 41: goto st44;
		case 47: goto tr166;
		case 95: goto tr247;
		case 127: goto tr166;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr247;
		} else if ( (*p) >= 0 )
			goto tr166;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr166;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr247;
		} else
			goto tr247;
	} else
		goto tr166;
	goto tr246;
tr246:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st152;
st152:
	if ( ++p == pe )
		goto _out152;
case 152:
#line 6305 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto st108;
		case 36: goto st153;
		case 37: goto st165;
		case 41: goto tr168;
		case 47: goto st108;
		case 95: goto st153;
		case 127: goto st108;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto st153;
		} else if ( (*p) >= 0 )
			goto st108;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto st108;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st153;
		} else
			goto st153;
	} else
		goto st108;
	goto st152;
tr247:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st153;
st153:
	if ( ++p == pe )
		goto _out153;
case 153:
#line 6341 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr252;
		case 37: goto st154;
		case 40: goto tr82;
		case 41: goto tr254;
		case 60: goto st108;
		case 62: goto st108;
		case 127: goto st108;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto st108;
	goto st153;
tr252:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st797;
tr272:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st797;
st797:
	if ( ++p == pe )
		goto _out797;
case 797:
#line 6376 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr252;
		case 37: goto st154;
		case 40: goto tr82;
		case 41: goto tr254;
		case 58: goto tr1415;
		case 60: goto st108;
		case 62: goto st108;
		case 127: goto st108;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto st108;
	goto st153;
tr273:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st154;
st154:
	if ( ++p == pe )
		goto _out154;
case 154:
#line 6398 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr168;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st155;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st155;
	} else
		goto st155;
	goto st108;
st155:
	if ( ++p == pe )
		goto _out155;
case 155:
	if ( (*p) == 41 )
		goto tr168;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st153;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st153;
	} else
		goto st153;
	goto st108;
tr1415:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st156;
st156:
	if ( ++p == pe )
		goto _out156;
case 156:
#line 6433 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr257;
		case 35: goto tr258;
		case 36: goto tr259;
		case 37: goto st160;
		case 40: goto tr103;
		case 41: goto tr261;
		case 43: goto st164;
		case 47: goto tr263;
		case 59: goto st153;
		case 60: goto st108;
		case 62: goto st108;
		case 63: goto st153;
		case 95: goto tr259;
		case 127: goto st108;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st108;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr259;
		} else if ( (*p) >= 65 )
			goto tr259;
	} else
		goto tr259;
	goto st157;
tr284:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st157;
st157:
	if ( ++p == pe )
		goto _out157;
case 157:
#line 6470 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr257;
		case 36: goto tr259;
		case 37: goto st160;
		case 40: goto tr103;
		case 41: goto tr261;
		case 47: goto st153;
		case 59: goto st153;
		case 60: goto st108;
		case 62: goto st108;
		case 63: goto st153;
		case 95: goto tr259;
		case 127: goto st108;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st108;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr259;
		} else if ( (*p) >= 65 )
			goto tr259;
	} else
		goto tr259;
	goto st157;
tr257:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st798;
tr285:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st798;
st798:
	if ( ++p == pe )
		goto _out798;
case 798:
#line 6519 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr257;
		case 36: goto tr259;
		case 37: goto st160;
		case 40: goto tr103;
		case 41: goto tr261;
		case 47: goto st153;
		case 58: goto tr1415;
		case 59: goto st153;
		case 60: goto st108;
		case 62: goto st108;
		case 63: goto st153;
		case 95: goto tr259;
		case 127: goto st108;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st108;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr259;
		} else if ( (*p) >= 65 )
			goto tr259;
	} else
		goto tr259;
	goto st157;
tr259:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st799;
tr286:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st799;
st799:
	if ( ++p == pe )
		goto _out799;
case 799:
#line 6565 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr1416;
		case 37: goto st158;
		case 40: goto tr1349;
		case 41: goto tr1418;
		case 60: goto st108;
		case 62: goto st108;
		case 127: goto st108;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto st108;
	goto tr259;
tr1416:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st800;
tr1430:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st800;
st800:
	if ( ++p == pe )
		goto _out800;
case 800:
#line 6600 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr1416;
		case 37: goto st158;
		case 40: goto tr1349;
		case 41: goto tr1418;
		case 58: goto tr286;
		case 60: goto st108;
		case 62: goto st108;
		case 127: goto st108;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto st108;
	goto tr259;
tr1431:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st158;
st158:
	if ( ++p == pe )
		goto _out158;
case 158:
#line 6622 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr168;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st159;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st159;
	} else
		goto st159;
	goto st108;
st159:
	if ( ++p == pe )
		goto _out159;
case 159:
	if ( (*p) == 41 )
		goto tr168;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr259;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto tr259;
	} else
		goto tr259;
	goto st108;
tr287:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st160;
st160:
	if ( ++p == pe )
		goto _out160;
case 160:
#line 6657 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr168;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st161;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st161;
	} else
		goto st161;
	goto st108;
st161:
	if ( ++p == pe )
		goto _out161;
case 161:
	if ( (*p) == 41 )
		goto tr168;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st157;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st157;
	} else
		goto st157;
	goto st108;
tr258:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st801;
tr1432:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st801;
st801:
	if ( ++p == pe )
		goto _out801;
case 801:
#line 6702 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr1419;
		case 36: goto tr259;
		case 37: goto st162;
		case 40: goto tr1357;
		case 41: goto tr1421;
		case 47: goto st153;
		case 59: goto st153;
		case 60: goto st108;
		case 62: goto st108;
		case 63: goto st153;
		case 95: goto tr259;
		case 127: goto st108;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st108;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr259;
		} else if ( (*p) >= 65 )
			goto tr259;
	} else
		goto tr259;
	goto tr258;
tr1419:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st802;
tr1433:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st802;
st802:
	if ( ++p == pe )
		goto _out802;
case 802:
#line 6751 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr1419;
		case 36: goto tr259;
		case 37: goto st162;
		case 40: goto tr1357;
		case 41: goto tr1421;
		case 47: goto st153;
		case 58: goto tr1422;
		case 59: goto st153;
		case 60: goto st108;
		case 62: goto st108;
		case 63: goto st153;
		case 95: goto tr259;
		case 127: goto st108;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st108;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr259;
		} else if ( (*p) >= 65 )
			goto tr259;
	} else
		goto tr259;
	goto tr258;
tr1434:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st162;
st162:
	if ( ++p == pe )
		goto _out162;
case 162:
#line 6787 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr168;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st163;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st163;
	} else
		goto st163;
	goto st108;
st163:
	if ( ++p == pe )
		goto _out163;
case 163:
	if ( (*p) == 41 )
		goto tr168;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr258;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto tr258;
	} else
		goto tr258;
	goto st108;
tr1422:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st803;
st803:
	if ( ++p == pe )
		goto _out803;
case 803:
#line 6826 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr1419;
		case 36: goto tr259;
		case 37: goto st162;
		case 40: goto tr1357;
		case 41: goto tr1421;
		case 43: goto tr1423;
		case 47: goto tr263;
		case 59: goto st153;
		case 60: goto st108;
		case 62: goto st108;
		case 63: goto st153;
		case 95: goto tr259;
		case 127: goto st108;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st108;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr259;
		} else if ( (*p) >= 65 )
			goto tr259;
	} else
		goto tr259;
	goto tr258;
tr1423:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st804;
st804:
	if ( ++p == pe )
		goto _out804;
case 804:
#line 6864 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr1419;
		case 36: goto tr259;
		case 37: goto st162;
		case 40: goto tr1357;
		case 41: goto tr1421;
		case 43: goto tr1423;
		case 47: goto st153;
		case 59: goto st153;
		case 60: goto st108;
		case 62: goto st108;
		case 63: goto st153;
		case 95: goto tr259;
		case 127: goto st108;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st108;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr259;
		} else if ( (*p) >= 65 )
			goto tr259;
	} else
		goto tr259;
	goto tr258;
tr263:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st805;
st805:
	if ( ++p == pe )
		goto _out805;
case 805:
#line 6902 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr257;
		case 36: goto tr259;
		case 37: goto st160;
		case 40: goto tr103;
		case 41: goto tr261;
		case 47: goto tr263;
		case 59: goto st153;
		case 60: goto st108;
		case 62: goto st108;
		case 63: goto st153;
		case 95: goto tr259;
		case 127: goto st108;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st108;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr259;
		} else if ( (*p) >= 65 )
			goto tr259;
	} else
		goto tr259;
	goto st157;
st164:
	if ( ++p == pe )
		goto _out164;
case 164:
	switch( (*p) ) {
		case 33: goto tr257;
		case 36: goto tr259;
		case 37: goto st160;
		case 40: goto tr103;
		case 41: goto tr261;
		case 43: goto st164;
		case 47: goto st153;
		case 59: goto st153;
		case 60: goto st108;
		case 62: goto st108;
		case 63: goto st153;
		case 95: goto tr259;
		case 127: goto st108;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st108;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr259;
		} else if ( (*p) >= 65 )
			goto tr259;
	} else
		goto tr259;
	goto st157;
tr248:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st165;
st165:
	if ( ++p == pe )
		goto _out165;
case 165:
#line 6968 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr168;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st166;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st166;
	} else
		goto st166;
	goto st108;
st166:
	if ( ++p == pe )
		goto _out166;
case 166:
	if ( (*p) == 41 )
		goto tr168;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st152;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st152;
	} else
		goto st152;
	goto st108;
tr156:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st167;
st167:
	if ( ++p == pe )
		goto _out167;
case 167:
#line 7003 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr268;
		case 35: goto tr269;
		case 37: goto st169;
		case 40: goto tr82;
		case 41: goto tr271;
		case 60: goto st106;
		case 62: goto st106;
		case 127: goto st106;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto st106;
	goto st167;
tr268:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st806;
st806:
	if ( ++p == pe )
		goto _out806;
case 806:
#line 7029 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr268;
		case 35: goto tr269;
		case 37: goto st169;
		case 40: goto tr82;
		case 41: goto tr271;
		case 58: goto tr1424;
		case 60: goto st106;
		case 62: goto st106;
		case 127: goto st106;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto st106;
	goto st167;
tr269:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st168;
st168:
	if ( ++p == pe )
		goto _out168;
case 168:
#line 7052 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr272;
		case 37: goto tr273;
		case 40: goto tr82;
		case 41: goto st45;
		case 60: goto tr166;
		case 62: goto tr166;
		case 127: goto tr166;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto tr166;
	goto tr247;
st169:
	if ( ++p == pe )
		goto _out169;
case 169:
	switch( (*p) ) {
		case 35: goto tr165;
		case 41: goto tr164;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st170;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st170;
	} else
		goto st170;
	goto st106;
st170:
	if ( ++p == pe )
		goto _out170;
case 170:
	switch( (*p) ) {
		case 35: goto tr165;
		case 41: goto tr164;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st167;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st167;
	} else
		goto st167;
	goto st106;
tr1424:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st171;
st171:
	if ( ++p == pe )
		goto _out171;
case 171:
#line 7107 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr276;
		case 35: goto tr277;
		case 36: goto tr278;
		case 37: goto st176;
		case 40: goto tr103;
		case 41: goto tr280;
		case 43: goto st178;
		case 47: goto tr282;
		case 59: goto st167;
		case 60: goto st106;
		case 62: goto st106;
		case 63: goto st167;
		case 95: goto tr278;
		case 127: goto st106;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st106;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr278;
		} else if ( (*p) >= 65 )
			goto tr278;
	} else
		goto tr278;
	goto st172;
st172:
	if ( ++p == pe )
		goto _out172;
case 172:
	switch( (*p) ) {
		case 33: goto tr276;
		case 35: goto tr283;
		case 36: goto tr278;
		case 37: goto st176;
		case 40: goto tr103;
		case 41: goto tr280;
		case 47: goto st167;
		case 59: goto st167;
		case 60: goto st106;
		case 62: goto st106;
		case 63: goto st167;
		case 95: goto tr278;
		case 127: goto st106;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st106;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr278;
		} else if ( (*p) >= 65 )
			goto tr278;
	} else
		goto tr278;
	goto st172;
tr276:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st807;
st807:
	if ( ++p == pe )
		goto _out807;
case 807:
#line 7179 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr276;
		case 35: goto tr283;
		case 36: goto tr278;
		case 37: goto st176;
		case 40: goto tr103;
		case 41: goto tr280;
		case 47: goto st167;
		case 58: goto tr1424;
		case 59: goto st167;
		case 60: goto st106;
		case 62: goto st106;
		case 63: goto st167;
		case 95: goto tr278;
		case 127: goto st106;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st106;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr278;
		} else if ( (*p) >= 65 )
			goto tr278;
	} else
		goto tr278;
	goto st172;
tr283:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st173;
st173:
	if ( ++p == pe )
		goto _out173;
case 173:
#line 7216 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr285;
		case 36: goto tr286;
		case 37: goto tr287;
		case 40: goto tr103;
		case 41: goto st61;
		case 47: goto tr247;
		case 59: goto tr247;
		case 60: goto tr166;
		case 62: goto tr166;
		case 63: goto tr247;
		case 95: goto tr286;
		case 127: goto tr166;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto tr166;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr286;
		} else if ( (*p) >= 65 )
			goto tr286;
	} else
		goto tr286;
	goto tr284;
tr278:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st808;
tr1429:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st808;
st808:
	if ( ++p == pe )
		goto _out808;
case 808:
#line 7261 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr1425;
		case 35: goto tr1426;
		case 37: goto st174;
		case 40: goto tr1349;
		case 41: goto tr1428;
		case 60: goto st106;
		case 62: goto st106;
		case 127: goto st106;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto st106;
	goto tr278;
tr1425:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st809;
st809:
	if ( ++p == pe )
		goto _out809;
case 809:
#line 7287 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr1425;
		case 35: goto tr1426;
		case 37: goto st174;
		case 40: goto tr1349;
		case 41: goto tr1428;
		case 58: goto tr1429;
		case 60: goto st106;
		case 62: goto st106;
		case 127: goto st106;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto st106;
	goto tr278;
tr1426:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st810;
st810:
	if ( ++p == pe )
		goto _out810;
case 810:
#line 7314 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr1430;
		case 37: goto tr1431;
		case 40: goto tr1349;
		case 41: goto tr101;
		case 60: goto tr166;
		case 62: goto tr166;
		case 127: goto tr166;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto tr166;
	goto tr286;
st174:
	if ( ++p == pe )
		goto _out174;
case 174:
	switch( (*p) ) {
		case 35: goto tr165;
		case 41: goto tr164;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st175;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st175;
	} else
		goto st175;
	goto st106;
st175:
	if ( ++p == pe )
		goto _out175;
case 175:
	switch( (*p) ) {
		case 35: goto tr165;
		case 41: goto tr164;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr278;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto tr278;
	} else
		goto tr278;
	goto st106;
st176:
	if ( ++p == pe )
		goto _out176;
case 176:
	switch( (*p) ) {
		case 35: goto tr165;
		case 41: goto tr164;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st177;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st177;
	} else
		goto st177;
	goto st106;
st177:
	if ( ++p == pe )
		goto _out177;
case 177:
	switch( (*p) ) {
		case 35: goto tr165;
		case 41: goto tr164;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st172;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st172;
	} else
		goto st172;
	goto st106;
tr277:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st811;
st811:
	if ( ++p == pe )
		goto _out811;
case 811:
#line 7407 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr1433;
		case 36: goto tr286;
		case 37: goto tr1434;
		case 40: goto tr1357;
		case 41: goto tr100;
		case 47: goto tr247;
		case 59: goto tr247;
		case 60: goto tr166;
		case 62: goto tr166;
		case 63: goto tr247;
		case 95: goto tr286;
		case 127: goto tr166;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto tr166;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr286;
		} else if ( (*p) >= 65 )
			goto tr286;
	} else
		goto tr286;
	goto tr1432;
st178:
	if ( ++p == pe )
		goto _out178;
case 178:
	switch( (*p) ) {
		case 33: goto tr276;
		case 35: goto tr283;
		case 36: goto tr278;
		case 37: goto st176;
		case 40: goto tr103;
		case 41: goto tr280;
		case 43: goto st178;
		case 47: goto st167;
		case 59: goto st167;
		case 60: goto st106;
		case 62: goto st106;
		case 63: goto st167;
		case 95: goto tr278;
		case 127: goto st106;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st106;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr278;
		} else if ( (*p) >= 65 )
			goto tr278;
	} else
		goto tr278;
	goto st172;
tr282:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 93 "superredcloth_inline.rl"
	{act = 1;}
	goto st812;
st812:
	if ( ++p == pe )
		goto _out812;
case 812:
#line 7476 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr276;
		case 35: goto tr283;
		case 36: goto tr278;
		case 37: goto st176;
		case 40: goto tr103;
		case 41: goto tr280;
		case 47: goto tr282;
		case 59: goto st167;
		case 60: goto st106;
		case 62: goto st106;
		case 63: goto st167;
		case 95: goto tr278;
		case 127: goto st106;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st106;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr278;
		} else if ( (*p) >= 65 )
			goto tr278;
	} else
		goto tr278;
	goto st172;
tr157:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st179;
st179:
	if ( ++p == pe )
		goto _out179;
case 179:
#line 7512 "superredcloth_inline.c"
	switch( (*p) ) {
		case 35: goto tr165;
		case 41: goto tr164;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st180;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st180;
	} else
		goto st180;
	goto st106;
st180:
	if ( ++p == pe )
		goto _out180;
case 180:
	switch( (*p) ) {
		case 35: goto tr165;
		case 41: goto tr164;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st105;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st105;
	} else
		goto st105;
	goto st106;
st181:
	if ( ++p == pe )
		goto _out181;
case 181:
	switch( (*p) ) {
		case 32: goto tr293;
		case 34: goto tr292;
		case 35: goto tr294;
		case 36: goto tr295;
		case 37: goto tr296;
		case 40: goto tr297;
		case 43: goto tr298;
		case 46: goto tr299;
		case 47: goto tr300;
		case 91: goto tr301;
		case 95: goto tr295;
		case 123: goto tr302;
		case 127: goto tr292;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 31 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr295;
		} else if ( (*p) >= 0 )
			goto tr292;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr292;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr295;
		} else
			goto tr295;
	} else
		goto tr292;
	goto tr291;
tr1340:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st182;
st182:
	if ( ++p == pe )
		goto _out182;
case 182:
#line 7588 "superredcloth_inline.c"
	switch( (*p) ) {
		case 32: goto tr304;
		case 34: goto tr292;
		case 35: goto tr305;
		case 36: goto tr306;
		case 37: goto tr307;
		case 40: goto tr308;
		case 43: goto tr309;
		case 46: goto tr310;
		case 47: goto tr311;
		case 91: goto tr312;
		case 95: goto tr306;
		case 123: goto tr313;
		case 127: goto tr292;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 31 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr306;
		} else if ( (*p) >= 0 )
			goto tr292;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr292;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr306;
		} else
			goto tr306;
	} else
		goto tr292;
	goto tr303;
st183:
	if ( ++p == pe )
		goto _out183;
case 183:
	switch( (*p) ) {
		case 32: goto tr315;
		case 34: goto tr292;
		case 35: goto tr316;
		case 36: goto tr317;
		case 37: goto tr318;
		case 40: goto tr319;
		case 43: goto tr320;
		case 46: goto tr321;
		case 47: goto tr322;
		case 91: goto tr323;
		case 95: goto tr317;
		case 123: goto tr324;
		case 127: goto tr292;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 31 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr317;
		} else if ( (*p) >= 0 )
			goto tr292;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr292;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr317;
		} else
			goto tr317;
	} else
		goto tr292;
	goto tr314;
tr1302:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 7 "superredcloth_inline.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st813;
st813:
	if ( ++p == pe )
		goto _out813;
case 813:
#line 7671 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1324;
		case 32: goto st210;
		case 33: goto tr455;
		case 40: goto tr1436;
		case 45: goto tr1437;
		case 46: goto tr457;
		case 63: goto tr455;
		case 91: goto tr458;
		case 92: goto tr455;
		case 94: goto tr455;
		case 96: goto tr455;
		case 123: goto tr1438;
		case 124: goto tr455;
		case 126: goto tr455;
	}
	if ( (*p) < 35 ) {
		if ( 9 <= (*p) && (*p) <= 13 )
			goto tr1324;
	} else if ( (*p) > 38 ) {
		if ( (*p) > 47 ) {
			if ( 58 <= (*p) && (*p) <= 61 )
				goto tr455;
		} else if ( (*p) >= 44 )
			goto tr455;
	} else
		goto tr455;
	goto tr1435;
tr1439:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st814;
tr1435:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st814;
st814:
	if ( ++p == pe )
		goto _out814;
case 814:
#line 7718 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1324;
		case 9: goto st184;
		case 10: goto st186;
		case 13: goto st187;
		case 32: goto st184;
		case 34: goto tr1440;
		case 40: goto tr331;
		case 45: goto tr1441;
		case 63: goto st185;
		case 94: goto st185;
		case 96: goto st185;
		case 124: goto st185;
		case 126: goto st185;
	}
	if ( (*p) < 44 ) {
		if ( (*p) > 12 ) {
			if ( 33 <= (*p) && (*p) <= 38 )
				goto st185;
		} else if ( (*p) >= 11 )
			goto tr1324;
	} else if ( (*p) > 47 ) {
		if ( (*p) > 61 ) {
			if ( 91 <= (*p) && (*p) <= 92 )
				goto st185;
		} else if ( (*p) >= 58 )
			goto st185;
	} else
		goto st185;
	goto tr1439;
st184:
	if ( ++p == pe )
		goto _out184;
case 184:
	switch( (*p) ) {
		case 0: goto tr326;
		case 9: goto st184;
		case 10: goto st186;
		case 13: goto st187;
		case 32: goto st184;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr326;
	goto st185;
tr455:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st185;
st185:
	if ( ++p == pe )
		goto _out185;
case 185:
#line 7771 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr326;
		case 9: goto st184;
		case 10: goto st186;
		case 13: goto st187;
		case 32: goto st184;
		case 34: goto tr330;
		case 40: goto tr331;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr326;
	goto st185;
st186:
	if ( ++p == pe )
		goto _out186;
case 186:
	switch( (*p) ) {
		case 0: goto tr326;
		case 9: goto st184;
		case 32: goto st184;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto tr326;
	goto st185;
st187:
	if ( ++p == pe )
		goto _out187;
case 187:
	if ( (*p) == 10 )
		goto st186;
	goto tr326;
tr330:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 47 "superredcloth_inline.rl"
	{ STORE(name) }
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
#line 111 "superredcloth_inline.rl"
	{act = 17;}
	goto st815;
tr367:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
#line 111 "superredcloth_inline.rl"
	{act = 17;}
	goto st815;
st815:
	if ( ++p == pe )
		goto _out815;
case 815:
#line 7825 "superredcloth_inline.c"
	switch( (*p) ) {
		case 58: goto st188;
		case 93: goto tr1443;
	}
	goto tr1442;
st188:
	if ( ++p == pe )
		goto _out188;
case 188:
	switch( (*p) ) {
		case 34: goto tr4;
		case 35: goto tr333;
		case 36: goto tr334;
		case 37: goto tr335;
		case 43: goto tr336;
		case 47: goto tr337;
		case 95: goto tr334;
		case 127: goto tr4;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr334;
		} else if ( (*p) >= 0 )
			goto tr4;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr4;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr334;
		} else
			goto tr334;
	} else
		goto tr4;
	goto tr332;
tr332:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st189;
st189:
	if ( ++p == pe )
		goto _out189;
case 189:
#line 7871 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto tr4;
		case 36: goto tr339;
		case 37: goto st192;
		case 47: goto tr4;
		case 95: goto tr339;
		case 127: goto tr4;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr339;
		} else if ( (*p) >= 0 )
			goto tr4;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr4;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr339;
		} else
			goto tr339;
	} else
		goto tr4;
	goto st189;
tr339:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
	goto st816;
tr334:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st816;
st816:
	if ( ++p == pe )
		goto _out816;
case 816:
#line 7912 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto tr1444;
		case 37: goto st190;
		case 60: goto tr1444;
		case 62: goto tr1444;
		case 127: goto tr1444;
	}
	if ( 0 <= (*p) && (*p) <= 32 )
		goto tr1444;
	goto tr339;
st190:
	if ( ++p == pe )
		goto _out190;
case 190:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st191;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st191;
	} else
		goto st191;
	goto tr341;
st191:
	if ( ++p == pe )
		goto _out191;
case 191:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr339;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto tr339;
	} else
		goto tr339;
	goto tr341;
tr335:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st192;
st192:
	if ( ++p == pe )
		goto _out192;
case 192:
#line 7957 "superredcloth_inline.c"
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st193;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st193;
	} else
		goto st193;
	goto tr4;
st193:
	if ( ++p == pe )
		goto _out193;
case 193:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st189;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st189;
	} else
		goto st189;
	goto tr4;
tr345:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
	goto st817;
tr333:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st817;
st817:
	if ( ++p == pe )
		goto _out817;
case 817:
#line 7994 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto tr1444;
		case 36: goto tr339;
		case 37: goto st194;
		case 47: goto tr1444;
		case 95: goto tr339;
		case 127: goto tr1444;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr339;
		} else if ( (*p) >= 0 )
			goto tr1444;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr1444;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr339;
		} else
			goto tr339;
	} else
		goto tr1444;
	goto tr345;
st194:
	if ( ++p == pe )
		goto _out194;
case 194:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st195;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st195;
	} else
		goto st195;
	goto tr341;
st195:
	if ( ++p == pe )
		goto _out195;
case 195:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr345;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto tr345;
	} else
		goto tr345;
	goto tr341;
tr336:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st196;
st196:
	if ( ++p == pe )
		goto _out196;
case 196:
#line 8055 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto tr4;
		case 36: goto tr339;
		case 37: goto st192;
		case 43: goto st196;
		case 47: goto tr4;
		case 95: goto tr339;
		case 127: goto tr4;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 58 )
				goto tr339;
		} else if ( (*p) >= 0 )
			goto tr4;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr4;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr339;
		} else
			goto tr339;
	} else
		goto tr4;
	goto st189;
tr337:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 95 "superredcloth_inline.rl"
	{act = 2;}
	goto st818;
tr1447:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 95 "superredcloth_inline.rl"
	{act = 2;}
	goto st818;
st818:
	if ( ++p == pe )
		goto _out818;
case 818:
#line 8101 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto tr1444;
		case 36: goto tr339;
		case 37: goto st192;
		case 47: goto tr1447;
		case 95: goto tr339;
		case 127: goto tr1444;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr339;
		} else if ( (*p) >= 0 )
			goto tr1444;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr1444;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr339;
		} else
			goto tr339;
	} else
		goto tr1444;
	goto st189;
tr331:
#line 47 "superredcloth_inline.rl"
	{ STORE(name) }
	goto st197;
st197:
	if ( ++p == pe )
		goto _out197;
case 197:
#line 8136 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr326;
		case 9: goto tr348;
		case 10: goto tr349;
		case 13: goto tr351;
		case 32: goto tr348;
		case 34: goto tr352;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr350;
	goto tr347;
tr347:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st198;
st198:
	if ( ++p == pe )
		goto _out198;
case 198:
#line 8156 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr326;
		case 9: goto st199;
		case 10: goto st200;
		case 13: goto st209;
		case 32: goto st199;
		case 34: goto tr358;
		case 41: goto tr359;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st201;
	goto st198;
tr348:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st199;
st199:
	if ( ++p == pe )
		goto _out199;
case 199:
#line 8177 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr326;
		case 9: goto st199;
		case 10: goto st200;
		case 13: goto st209;
		case 32: goto st199;
		case 41: goto tr359;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st201;
	goto st198;
tr349:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st200;
st200:
	if ( ++p == pe )
		goto _out200;
case 200:
#line 8197 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr326;
		case 9: goto st199;
		case 32: goto st199;
		case 41: goto tr359;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st201;
	goto st198;
tr350:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st201;
st201:
	if ( ++p == pe )
		goto _out201;
case 201:
#line 8215 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr4;
		case 41: goto tr360;
	}
	goto st201;
tr360:
#line 41 "superredcloth_inline.rl"
	{ STORE(title) }
	goto st202;
st202:
	if ( ++p == pe )
		goto _out202;
case 202:
#line 8229 "superredcloth_inline.c"
	if ( (*p) == 34 )
		goto st203;
	goto tr4;
tr375:
#line 47 "superredcloth_inline.rl"
	{ STORE(name) }
	goto st203;
st203:
	if ( ++p == pe )
		goto _out203;
case 203:
#line 8241 "superredcloth_inline.c"
	if ( (*p) == 58 )
		goto st188;
	goto tr4;
tr359:
#line 41 "superredcloth_inline.rl"
	{ STORE(title) }
	goto st204;
st204:
	if ( ++p == pe )
		goto _out204;
case 204:
#line 8253 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr326;
		case 9: goto st206;
		case 10: goto st207;
		case 13: goto st208;
		case 32: goto st206;
		case 34: goto tr367;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr326;
	goto st205;
tr984:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st205;
st205:
	if ( ++p == pe )
		goto _out205;
case 205:
#line 8273 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr4;
		case 9: goto st206;
		case 10: goto st207;
		case 13: goto st208;
		case 32: goto st206;
		case 34: goto tr368;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr4;
	goto st205;
st206:
	if ( ++p == pe )
		goto _out206;
case 206:
	switch( (*p) ) {
		case 0: goto tr4;
		case 9: goto st206;
		case 10: goto st207;
		case 13: goto st208;
		case 32: goto st206;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr4;
	goto st205;
st207:
	if ( ++p == pe )
		goto _out207;
case 207:
	switch( (*p) ) {
		case 0: goto tr4;
		case 9: goto st206;
		case 32: goto st206;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto tr4;
	goto st205;
st208:
	if ( ++p == pe )
		goto _out208;
case 208:
	if ( (*p) == 10 )
		goto st207;
	goto tr4;
tr368:
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
	goto st819;
st819:
	if ( ++p == pe )
		goto _out819;
case 819:
#line 8326 "superredcloth_inline.c"
	if ( (*p) == 93 )
		goto tr1443;
	goto tr1442;
tr351:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st209;
st209:
	if ( ++p == pe )
		goto _out209;
case 209:
#line 8338 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr326;
		case 10: goto st200;
		case 41: goto tr360;
	}
	goto st201;
tr352:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
#line 111 "superredcloth_inline.rl"
	{act = 17;}
	goto st820;
tr358:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
#line 111 "superredcloth_inline.rl"
	{act = 17;}
	goto st820;
st820:
	if ( ++p == pe )
		goto _out820;
case 820:
#line 8367 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1442;
		case 41: goto tr360;
		case 93: goto tr1448;
	}
	goto st201;
tr1448:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 111 "superredcloth_inline.rl"
	{act = 17;}
	goto st821;
st821:
	if ( ++p == pe )
		goto _out821;
case 821:
#line 8384 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1442;
		case 41: goto tr360;
	}
	goto st201;
tr1440:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 47 "superredcloth_inline.rl"
	{ STORE(name) }
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
#line 111 "superredcloth_inline.rl"
	{act = 17;}
	goto st822;
st822:
	if ( ++p == pe )
		goto _out822;
case 822:
#line 8404 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1442;
		case 40: goto tr1442;
		case 45: goto st730;
		case 58: goto st188;
		case 63: goto tr1442;
		case 93: goto tr1449;
		case 96: goto tr1442;
		case 124: goto tr1442;
		case 126: goto tr1442;
	}
	if ( (*p) < 35 ) {
		if ( (*p) > 13 ) {
			if ( 32 <= (*p) && (*p) <= 33 )
				goto tr1442;
		} else if ( (*p) >= 9 )
			goto tr1442;
	} else if ( (*p) > 38 ) {
		if ( (*p) < 59 ) {
			if ( 44 <= (*p) && (*p) <= 47 )
				goto tr1442;
		} else if ( (*p) > 61 ) {
			if ( 91 <= (*p) && (*p) <= 94 )
				goto tr1442;
		} else
			goto tr1442;
	} else
		goto tr1442;
	goto tr1297;
tr1441:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st823;
tr1437:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st823;
st823:
	if ( ++p == pe )
		goto _out823;
case 823:
#line 8452 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1324;
		case 9: goto st184;
		case 10: goto st186;
		case 13: goto st187;
		case 32: goto st184;
		case 34: goto tr1440;
		case 40: goto tr331;
		case 63: goto st185;
		case 94: goto st185;
		case 96: goto st185;
		case 124: goto st185;
		case 126: goto st185;
	}
	if ( (*p) < 44 ) {
		if ( (*p) > 12 ) {
			if ( 33 <= (*p) && (*p) <= 38 )
				goto st185;
		} else if ( (*p) >= 11 )
			goto tr1324;
	} else if ( (*p) > 47 ) {
		if ( (*p) > 61 ) {
			if ( 91 <= (*p) && (*p) <= 92 )
				goto st185;
		} else if ( (*p) >= 58 )
			goto st185;
	} else
		goto st185;
	goto tr1439;
st210:
	if ( ++p == pe )
		goto _out210;
case 210:
	switch( (*p) ) {
		case 0: goto tr326;
		case 32: goto st210;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr326;
	goto tr369;
tr369:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st211;
st211:
	if ( ++p == pe )
		goto _out211;
case 211:
#line 8501 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr326;
		case 9: goto st212;
		case 10: goto st213;
		case 13: goto st214;
		case 32: goto st212;
		case 34: goto tr375;
		case 40: goto tr376;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr326;
	goto st211;
st212:
	if ( ++p == pe )
		goto _out212;
case 212:
	switch( (*p) ) {
		case 0: goto tr326;
		case 9: goto st212;
		case 10: goto st213;
		case 13: goto st214;
		case 32: goto st212;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr326;
	goto st211;
st213:
	if ( ++p == pe )
		goto _out213;
case 213:
	switch( (*p) ) {
		case 0: goto tr326;
		case 9: goto st212;
		case 32: goto st212;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto tr326;
	goto st211;
st214:
	if ( ++p == pe )
		goto _out214;
case 214:
	if ( (*p) == 10 )
		goto st213;
	goto tr326;
tr376:
#line 47 "superredcloth_inline.rl"
	{ STORE(name) }
	goto st215;
st215:
	if ( ++p == pe )
		goto _out215;
case 215:
#line 8555 "superredcloth_inline.c"
	if ( (*p) == 0 )
		goto tr326;
	goto tr350;
tr1436:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st216;
st216:
	if ( ++p == pe )
		goto _out216;
case 216:
#line 8567 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr378;
		case 9: goto tr379;
		case 10: goto tr380;
		case 13: goto tr381;
		case 32: goto tr379;
		case 34: goto tr330;
		case 35: goto st249;
		case 40: goto tr331;
		case 41: goto st253;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr378;
	goto tr377;
tr377:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st217;
st217:
	if ( ++p == pe )
		goto _out217;
case 217:
#line 8590 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st218;
		case 9: goto st247;
		case 10: goto st248;
		case 13: goto st267;
		case 32: goto st247;
		case 34: goto tr330;
		case 35: goto tr389;
		case 40: goto tr331;
		case 41: goto tr390;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st218;
	goto st217;
tr378:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st218;
st218:
	if ( ++p == pe )
		goto _out218;
case 218:
#line 8613 "superredcloth_inline.c"
	switch( (*p) ) {
		case 35: goto tr391;
		case 41: goto tr392;
	}
	goto st218;
tr391:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st219;
st219:
	if ( ++p == pe )
		goto _out219;
case 219:
#line 8627 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr326;
	goto tr393;
tr393:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st220;
st220:
	if ( ++p == pe )
		goto _out220;
case 220:
#line 8639 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr395;
	goto st220;
tr392:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st221;
tr395:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st221;
tr433:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st221;
tr445:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st221;
st221:
	if ( ++p == pe )
		goto _out221;
case 221:
#line 8663 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr326;
		case 32: goto st210;
		case 40: goto tr396;
		case 46: goto tr397;
		case 91: goto tr398;
		case 123: goto tr399;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr326;
	goto tr369;
tr396:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st222;
st222:
	if ( ++p == pe )
		goto _out222;
case 222:
#line 8683 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr378;
		case 9: goto tr401;
		case 10: goto tr402;
		case 13: goto tr403;
		case 32: goto tr401;
		case 34: goto tr375;
		case 35: goto st226;
		case 40: goto tr376;
		case 41: goto st230;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr378;
	goto tr400;
tr400:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st223;
st223:
	if ( ++p == pe )
		goto _out223;
case 223:
#line 8706 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st218;
		case 9: goto st224;
		case 10: goto st225;
		case 13: goto st246;
		case 32: goto st224;
		case 34: goto tr375;
		case 35: goto tr410;
		case 40: goto tr376;
		case 41: goto tr411;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st218;
	goto st223;
tr401:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st224;
st224:
	if ( ++p == pe )
		goto _out224;
case 224:
#line 8729 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st218;
		case 9: goto st224;
		case 10: goto st225;
		case 13: goto st246;
		case 32: goto st224;
		case 35: goto tr410;
		case 41: goto tr411;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st218;
	goto st223;
tr402:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st225;
st225:
	if ( ++p == pe )
		goto _out225;
case 225:
#line 8750 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st218;
		case 9: goto st224;
		case 32: goto st224;
		case 35: goto tr410;
		case 41: goto tr411;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st218;
	goto st223;
tr410:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st226;
st226:
	if ( ++p == pe )
		goto _out226;
case 226:
#line 8769 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr393;
		case 9: goto tr413;
		case 10: goto tr414;
		case 13: goto tr415;
		case 32: goto tr413;
		case 34: goto tr375;
		case 40: goto tr376;
		case 41: goto st211;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr393;
	goto tr412;
tr412:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st227;
st227:
	if ( ++p == pe )
		goto _out227;
case 227:
#line 8791 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st220;
		case 9: goto st228;
		case 10: goto st229;
		case 13: goto st245;
		case 32: goto st228;
		case 34: goto tr375;
		case 40: goto tr376;
		case 41: goto tr420;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st220;
	goto st227;
tr413:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st228;
st228:
	if ( ++p == pe )
		goto _out228;
case 228:
#line 8813 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st220;
		case 9: goto st228;
		case 10: goto st229;
		case 13: goto st245;
		case 32: goto st228;
		case 41: goto tr420;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st220;
	goto st227;
tr414:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st229;
st229:
	if ( ++p == pe )
		goto _out229;
case 229:
#line 8833 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st220;
		case 9: goto st228;
		case 32: goto st228;
		case 41: goto tr420;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st220;
	goto st227;
tr411:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st230;
tr420:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st230;
tr432:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st230;
tr444:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st230;
st230:
	if ( ++p == pe )
		goto _out230;
case 230:
#line 8863 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr326;
		case 9: goto st212;
		case 10: goto st213;
		case 13: goto st214;
		case 32: goto st231;
		case 34: goto tr375;
		case 40: goto tr376;
		case 46: goto tr397;
		case 91: goto tr398;
		case 123: goto tr399;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr326;
	goto tr369;
st231:
	if ( ++p == pe )
		goto _out231;
case 231:
	switch( (*p) ) {
		case 0: goto tr326;
		case 9: goto st212;
		case 10: goto st213;
		case 13: goto st214;
		case 32: goto st231;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr326;
	goto tr369;
tr397:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st232;
st232:
	if ( ++p == pe )
		goto _out232;
case 232:
#line 8901 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr326;
		case 9: goto st212;
		case 10: goto st213;
		case 13: goto st214;
		case 32: goto st231;
		case 34: goto tr375;
		case 40: goto tr376;
		case 46: goto tr397;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr326;
	goto tr369;
tr398:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st233;
st233:
	if ( ++p == pe )
		goto _out233;
case 233:
#line 8923 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr423;
		case 9: goto tr424;
		case 10: goto tr425;
		case 13: goto tr426;
		case 32: goto tr424;
		case 34: goto tr375;
		case 40: goto tr376;
		case 93: goto st211;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr423;
	goto tr422;
tr422:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st234;
st234:
	if ( ++p == pe )
		goto _out234;
case 234:
#line 8945 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st235;
		case 9: goto st236;
		case 10: goto st237;
		case 13: goto st238;
		case 32: goto st236;
		case 34: goto tr375;
		case 40: goto tr376;
		case 93: goto tr432;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st235;
	goto st234;
tr423:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st235;
st235:
	if ( ++p == pe )
		goto _out235;
case 235:
#line 8967 "superredcloth_inline.c"
	if ( (*p) == 93 )
		goto tr433;
	goto st235;
tr424:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st236;
st236:
	if ( ++p == pe )
		goto _out236;
case 236:
#line 8979 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st235;
		case 9: goto st236;
		case 10: goto st237;
		case 13: goto st238;
		case 32: goto st236;
		case 93: goto tr432;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st235;
	goto st234;
tr425:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st237;
st237:
	if ( ++p == pe )
		goto _out237;
case 237:
#line 8999 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st235;
		case 9: goto st236;
		case 32: goto st236;
		case 93: goto tr432;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st235;
	goto st234;
tr426:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st238;
st238:
	if ( ++p == pe )
		goto _out238;
case 238:
#line 9017 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st237;
		case 93: goto tr433;
	}
	goto st235;
tr399:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st239;
st239:
	if ( ++p == pe )
		goto _out239;
case 239:
#line 9031 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr435;
		case 9: goto tr436;
		case 10: goto tr437;
		case 13: goto tr438;
		case 32: goto tr436;
		case 34: goto tr375;
		case 40: goto tr376;
		case 125: goto st211;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr435;
	goto tr434;
tr434:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st240;
st240:
	if ( ++p == pe )
		goto _out240;
case 240:
#line 9053 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st241;
		case 9: goto st242;
		case 10: goto st243;
		case 13: goto st244;
		case 32: goto st242;
		case 34: goto tr375;
		case 40: goto tr376;
		case 125: goto tr444;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st241;
	goto st240;
tr435:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st241;
st241:
	if ( ++p == pe )
		goto _out241;
case 241:
#line 9075 "superredcloth_inline.c"
	if ( (*p) == 125 )
		goto tr445;
	goto st241;
tr436:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st242;
st242:
	if ( ++p == pe )
		goto _out242;
case 242:
#line 9087 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st241;
		case 9: goto st242;
		case 10: goto st243;
		case 13: goto st244;
		case 32: goto st242;
		case 125: goto tr444;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st241;
	goto st240;
tr437:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st243;
st243:
	if ( ++p == pe )
		goto _out243;
case 243:
#line 9107 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st241;
		case 9: goto st242;
		case 32: goto st242;
		case 125: goto tr444;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st241;
	goto st240;
tr438:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st244;
st244:
	if ( ++p == pe )
		goto _out244;
case 244:
#line 9125 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st243;
		case 125: goto tr445;
	}
	goto st241;
tr415:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st245;
st245:
	if ( ++p == pe )
		goto _out245;
case 245:
#line 9139 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st229;
		case 41: goto tr395;
	}
	goto st220;
tr403:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st246;
st246:
	if ( ++p == pe )
		goto _out246;
case 246:
#line 9153 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st225;
		case 35: goto tr391;
		case 41: goto tr392;
	}
	goto st218;
tr379:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st247;
st247:
	if ( ++p == pe )
		goto _out247;
case 247:
#line 9168 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st218;
		case 9: goto st247;
		case 10: goto st248;
		case 13: goto st267;
		case 32: goto st247;
		case 35: goto tr389;
		case 41: goto tr390;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st218;
	goto st217;
tr380:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st248;
st248:
	if ( ++p == pe )
		goto _out248;
case 248:
#line 9189 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st218;
		case 9: goto st247;
		case 32: goto st247;
		case 35: goto tr389;
		case 41: goto tr390;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st218;
	goto st217;
tr389:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st249;
st249:
	if ( ++p == pe )
		goto _out249;
case 249:
#line 9208 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr393;
		case 9: goto tr447;
		case 10: goto tr448;
		case 13: goto tr449;
		case 32: goto tr447;
		case 34: goto tr330;
		case 40: goto tr331;
		case 41: goto st185;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr393;
	goto tr446;
tr446:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st250;
st250:
	if ( ++p == pe )
		goto _out250;
case 250:
#line 9230 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st220;
		case 9: goto st251;
		case 10: goto st252;
		case 13: goto st266;
		case 32: goto st251;
		case 34: goto tr330;
		case 40: goto tr331;
		case 41: goto tr454;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st220;
	goto st250;
tr447:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st251;
st251:
	if ( ++p == pe )
		goto _out251;
case 251:
#line 9252 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st220;
		case 9: goto st251;
		case 10: goto st252;
		case 13: goto st266;
		case 32: goto st251;
		case 41: goto tr454;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st220;
	goto st250;
tr448:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st252;
st252:
	if ( ++p == pe )
		goto _out252;
case 252:
#line 9272 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st220;
		case 9: goto st251;
		case 32: goto st251;
		case 41: goto tr454;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st220;
	goto st250;
tr390:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st253;
tr454:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st253;
tr468:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st253;
tr477:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st253;
st253:
	if ( ++p == pe )
		goto _out253;
case 253:
#line 9302 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr326;
		case 9: goto st184;
		case 10: goto st186;
		case 13: goto st187;
		case 32: goto st254;
		case 34: goto tr330;
		case 40: goto tr331;
		case 46: goto tr457;
		case 91: goto tr458;
		case 123: goto tr459;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr326;
	goto tr455;
st254:
	if ( ++p == pe )
		goto _out254;
case 254:
	switch( (*p) ) {
		case 0: goto tr326;
		case 9: goto st184;
		case 10: goto st186;
		case 13: goto st187;
		case 32: goto st254;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr326;
	goto tr455;
tr457:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st255;
st255:
	if ( ++p == pe )
		goto _out255;
case 255:
#line 9340 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr326;
		case 9: goto st184;
		case 10: goto st186;
		case 13: goto st187;
		case 32: goto st254;
		case 34: goto tr330;
		case 40: goto tr331;
		case 46: goto tr457;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr326;
	goto tr455;
tr458:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st256;
st256:
	if ( ++p == pe )
		goto _out256;
case 256:
#line 9362 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr423;
		case 9: goto tr461;
		case 10: goto tr462;
		case 13: goto tr463;
		case 32: goto tr461;
		case 34: goto tr330;
		case 40: goto tr331;
		case 93: goto st185;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr423;
	goto tr460;
tr460:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st257;
st257:
	if ( ++p == pe )
		goto _out257;
case 257:
#line 9384 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st235;
		case 9: goto st258;
		case 10: goto st259;
		case 13: goto st260;
		case 32: goto st258;
		case 34: goto tr330;
		case 40: goto tr331;
		case 93: goto tr468;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st235;
	goto st257;
tr461:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st258;
st258:
	if ( ++p == pe )
		goto _out258;
case 258:
#line 9406 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st235;
		case 9: goto st258;
		case 10: goto st259;
		case 13: goto st260;
		case 32: goto st258;
		case 93: goto tr468;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st235;
	goto st257;
tr462:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st259;
st259:
	if ( ++p == pe )
		goto _out259;
case 259:
#line 9426 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st235;
		case 9: goto st258;
		case 32: goto st258;
		case 93: goto tr468;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st235;
	goto st257;
tr463:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st260;
st260:
	if ( ++p == pe )
		goto _out260;
case 260:
#line 9444 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st259;
		case 93: goto tr433;
	}
	goto st235;
tr459:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st261;
st261:
	if ( ++p == pe )
		goto _out261;
case 261:
#line 9458 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr435;
		case 9: goto tr470;
		case 10: goto tr471;
		case 13: goto tr472;
		case 32: goto tr470;
		case 34: goto tr330;
		case 40: goto tr331;
		case 125: goto st185;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr435;
	goto tr469;
tr469:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st262;
st262:
	if ( ++p == pe )
		goto _out262;
case 262:
#line 9480 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st241;
		case 9: goto st263;
		case 10: goto st264;
		case 13: goto st265;
		case 32: goto st263;
		case 34: goto tr330;
		case 40: goto tr331;
		case 125: goto tr477;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st241;
	goto st262;
tr470:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st263;
st263:
	if ( ++p == pe )
		goto _out263;
case 263:
#line 9502 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st241;
		case 9: goto st263;
		case 10: goto st264;
		case 13: goto st265;
		case 32: goto st263;
		case 125: goto tr477;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st241;
	goto st262;
tr471:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st264;
st264:
	if ( ++p == pe )
		goto _out264;
case 264:
#line 9522 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st241;
		case 9: goto st263;
		case 32: goto st263;
		case 125: goto tr477;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st241;
	goto st262;
tr472:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st265;
st265:
	if ( ++p == pe )
		goto _out265;
case 265:
#line 9540 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st264;
		case 125: goto tr445;
	}
	goto st241;
tr449:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st266;
st266:
	if ( ++p == pe )
		goto _out266;
case 266:
#line 9554 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st252;
		case 41: goto tr395;
	}
	goto st220;
tr381:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st267;
st267:
	if ( ++p == pe )
		goto _out267;
case 267:
#line 9568 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st248;
		case 35: goto tr391;
		case 41: goto tr392;
	}
	goto st218;
tr1438:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st824;
st824:
	if ( ++p == pe )
		goto _out824;
case 824:
#line 9587 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr435;
		case 9: goto tr470;
		case 10: goto tr471;
		case 13: goto tr472;
		case 32: goto tr470;
		case 34: goto tr1440;
		case 40: goto tr331;
		case 45: goto tr1451;
		case 63: goto tr469;
		case 94: goto tr469;
		case 96: goto tr469;
		case 125: goto tr1439;
	}
	if ( (*p) < 44 ) {
		if ( (*p) > 12 ) {
			if ( 33 <= (*p) && (*p) <= 38 )
				goto tr469;
		} else if ( (*p) >= 11 )
			goto tr435;
	} else if ( (*p) > 47 ) {
		if ( (*p) < 91 ) {
			if ( 58 <= (*p) && (*p) <= 61 )
				goto tr469;
		} else if ( (*p) > 92 ) {
			if ( 124 <= (*p) && (*p) <= 126 )
				goto tr469;
		} else
			goto tr469;
	} else
		goto tr469;
	goto tr1450;
tr1452:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st825;
tr1450:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st825;
st825:
	if ( ++p == pe )
		goto _out825;
case 825:
#line 9638 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st241;
		case 9: goto st263;
		case 10: goto st264;
		case 13: goto st265;
		case 32: goto st263;
		case 34: goto tr1440;
		case 40: goto tr331;
		case 45: goto tr1453;
		case 63: goto st262;
		case 94: goto st262;
		case 96: goto st262;
		case 125: goto tr1454;
	}
	if ( (*p) < 44 ) {
		if ( (*p) > 12 ) {
			if ( 33 <= (*p) && (*p) <= 38 )
				goto st262;
		} else if ( (*p) >= 11 )
			goto st241;
	} else if ( (*p) > 47 ) {
		if ( (*p) < 91 ) {
			if ( 58 <= (*p) && (*p) <= 61 )
				goto st262;
		} else if ( (*p) > 92 ) {
			if ( 124 <= (*p) && (*p) <= 126 )
				goto st262;
		} else
			goto st262;
	} else
		goto st262;
	goto tr1452;
tr1453:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st826;
tr1451:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st826;
st826:
	if ( ++p == pe )
		goto _out826;
case 826:
#line 9689 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st241;
		case 9: goto st263;
		case 10: goto st264;
		case 13: goto st265;
		case 32: goto st263;
		case 34: goto tr1440;
		case 40: goto tr331;
		case 63: goto st262;
		case 94: goto st262;
		case 96: goto st262;
		case 125: goto tr1454;
	}
	if ( (*p) < 44 ) {
		if ( (*p) > 12 ) {
			if ( 33 <= (*p) && (*p) <= 38 )
				goto st262;
		} else if ( (*p) >= 11 )
			goto st241;
	} else if ( (*p) > 47 ) {
		if ( (*p) < 91 ) {
			if ( 58 <= (*p) && (*p) <= 61 )
				goto st262;
		} else if ( (*p) > 92 ) {
			if ( 124 <= (*p) && (*p) <= 126 )
				goto st262;
		} else
			goto st262;
	} else
		goto st262;
	goto tr1452;
tr1454:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st827;
st827:
	if ( ++p == pe )
		goto _out827;
case 827:
#line 9733 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1324;
		case 9: goto st184;
		case 10: goto st186;
		case 13: goto st187;
		case 32: goto st254;
		case 34: goto tr1440;
		case 40: goto tr331;
		case 45: goto tr1437;
		case 46: goto tr457;
		case 63: goto tr455;
		case 91: goto tr458;
		case 92: goto tr455;
		case 94: goto tr455;
		case 96: goto tr455;
		case 123: goto tr1438;
		case 124: goto tr455;
		case 126: goto tr455;
	}
	if ( (*p) < 33 ) {
		if ( 11 <= (*p) && (*p) <= 12 )
			goto tr1324;
	} else if ( (*p) > 38 ) {
		if ( (*p) > 47 ) {
			if ( 58 <= (*p) && (*p) <= 61 )
				goto tr455;
		} else if ( (*p) >= 44 )
			goto tr455;
	} else
		goto tr455;
	goto tr1435;
tr1304:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 7 "superredcloth_inline.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st828;
st828:
	if ( ++p == pe )
		goto _out828;
case 828:
#line 9775 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1338;
		case 32: goto tr1338;
		case 40: goto tr503;
		case 91: goto tr504;
		case 123: goto tr505;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr1338;
	goto tr502;
tr502:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st268;
st268:
	if ( ++p == pe )
		goto _out268;
case 268:
#line 9794 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr292;
		case 9: goto st269;
		case 10: goto st270;
		case 13: goto st271;
		case 32: goto st269;
		case 37: goto tr482;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr292;
	goto st268;
st269:
	if ( ++p == pe )
		goto _out269;
case 269:
	switch( (*p) ) {
		case 0: goto tr292;
		case 9: goto st269;
		case 10: goto st270;
		case 13: goto st271;
		case 32: goto st269;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr292;
	goto st268;
st270:
	if ( ++p == pe )
		goto _out270;
case 270:
	switch( (*p) ) {
		case 0: goto tr292;
		case 9: goto st269;
		case 32: goto st269;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto tr292;
	goto st268;
st271:
	if ( ++p == pe )
		goto _out271;
case 271:
	if ( (*p) == 10 )
		goto st270;
	goto tr292;
tr482:
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
	goto st829;
st829:
	if ( ++p == pe )
		goto _out829;
case 829:
#line 9847 "superredcloth_inline.c"
	if ( (*p) == 93 )
		goto tr1456;
	goto tr1455;
tr503:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st272;
st272:
	if ( ++p == pe )
		goto _out272;
case 272:
#line 9859 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr484;
		case 9: goto tr485;
		case 10: goto tr486;
		case 13: goto tr487;
		case 32: goto tr485;
		case 35: goto st293;
		case 37: goto tr482;
		case 41: goto st283;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr484;
	goto tr483;
tr483:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st273;
st273:
	if ( ++p == pe )
		goto _out273;
case 273:
#line 9881 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st274;
		case 9: goto st291;
		case 10: goto st292;
		case 13: goto st298;
		case 32: goto st291;
		case 35: goto tr495;
		case 37: goto tr482;
		case 41: goto tr496;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st274;
	goto st273;
tr484:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st274;
st274:
	if ( ++p == pe )
		goto _out274;
case 274:
#line 9903 "superredcloth_inline.c"
	switch( (*p) ) {
		case 35: goto tr497;
		case 41: goto tr498;
	}
	goto st274;
tr497:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st275;
st275:
	if ( ++p == pe )
		goto _out275;
case 275:
#line 9917 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr292;
	goto tr499;
tr499:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st276;
st276:
	if ( ++p == pe )
		goto _out276;
case 276:
#line 9929 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr501;
	goto st276;
tr498:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st277;
tr501:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st277;
tr517:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st277;
tr529:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st277;
tr1546:
#line 7 "superredcloth_inline.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st277;
st277:
	if ( ++p == pe )
		goto _out277;
case 277:
#line 9957 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr292;
		case 32: goto tr292;
		case 40: goto tr503;
		case 91: goto tr504;
		case 123: goto tr505;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr292;
	goto tr502;
tr504:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st278;
st278:
	if ( ++p == pe )
		goto _out278;
case 278:
#line 9976 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr507;
		case 9: goto tr508;
		case 10: goto tr509;
		case 13: goto tr510;
		case 32: goto tr508;
		case 37: goto tr482;
		case 93: goto st268;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr507;
	goto tr506;
tr506:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st279;
st279:
	if ( ++p == pe )
		goto _out279;
case 279:
#line 9997 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st280;
		case 9: goto st281;
		case 10: goto st282;
		case 13: goto st290;
		case 32: goto st281;
		case 37: goto tr482;
		case 93: goto tr516;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st280;
	goto st279;
tr507:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st280;
st280:
	if ( ++p == pe )
		goto _out280;
case 280:
#line 10018 "superredcloth_inline.c"
	if ( (*p) == 93 )
		goto tr517;
	goto st280;
tr508:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st281;
st281:
	if ( ++p == pe )
		goto _out281;
case 281:
#line 10030 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st280;
		case 9: goto st281;
		case 10: goto st282;
		case 13: goto st290;
		case 32: goto st281;
		case 93: goto tr516;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st280;
	goto st279;
tr509:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st282;
st282:
	if ( ++p == pe )
		goto _out282;
case 282:
#line 10050 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st280;
		case 9: goto st281;
		case 32: goto st281;
		case 93: goto tr516;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st280;
	goto st279;
tr496:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st283;
tr538:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st283;
tr516:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st283;
tr528:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st283;
st283:
	if ( ++p == pe )
		goto _out283;
case 283:
#line 10080 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr292;
		case 9: goto st269;
		case 10: goto st270;
		case 13: goto st271;
		case 32: goto st269;
		case 37: goto tr482;
		case 40: goto tr503;
		case 91: goto tr504;
		case 123: goto tr505;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr292;
	goto tr502;
tr505:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st284;
st284:
	if ( ++p == pe )
		goto _out284;
case 284:
#line 10103 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr519;
		case 9: goto tr520;
		case 10: goto tr521;
		case 13: goto tr522;
		case 32: goto tr520;
		case 37: goto tr482;
		case 125: goto st268;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr519;
	goto tr518;
tr518:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st285;
st285:
	if ( ++p == pe )
		goto _out285;
case 285:
#line 10124 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st286;
		case 9: goto st287;
		case 10: goto st288;
		case 13: goto st289;
		case 32: goto st287;
		case 37: goto tr482;
		case 125: goto tr528;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st286;
	goto st285;
tr519:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st286;
st286:
	if ( ++p == pe )
		goto _out286;
case 286:
#line 10145 "superredcloth_inline.c"
	if ( (*p) == 125 )
		goto tr529;
	goto st286;
tr520:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st287;
st287:
	if ( ++p == pe )
		goto _out287;
case 287:
#line 10157 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st286;
		case 9: goto st287;
		case 10: goto st288;
		case 13: goto st289;
		case 32: goto st287;
		case 125: goto tr528;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st286;
	goto st285;
tr521:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st288;
st288:
	if ( ++p == pe )
		goto _out288;
case 288:
#line 10177 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st286;
		case 9: goto st287;
		case 32: goto st287;
		case 125: goto tr528;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st286;
	goto st285;
tr522:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st289;
st289:
	if ( ++p == pe )
		goto _out289;
case 289:
#line 10195 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st288;
		case 125: goto tr529;
	}
	goto st286;
tr510:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st290;
st290:
	if ( ++p == pe )
		goto _out290;
case 290:
#line 10209 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st282;
		case 93: goto tr517;
	}
	goto st280;
tr485:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st291;
st291:
	if ( ++p == pe )
		goto _out291;
case 291:
#line 10223 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st274;
		case 9: goto st291;
		case 10: goto st292;
		case 13: goto st298;
		case 32: goto st291;
		case 35: goto tr495;
		case 41: goto tr496;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st274;
	goto st273;
tr486:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st292;
st292:
	if ( ++p == pe )
		goto _out292;
case 292:
#line 10244 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st274;
		case 9: goto st291;
		case 32: goto st291;
		case 35: goto tr495;
		case 41: goto tr496;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st274;
	goto st273;
tr495:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st293;
st293:
	if ( ++p == pe )
		goto _out293;
case 293:
#line 10263 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr499;
		case 9: goto tr531;
		case 10: goto tr532;
		case 13: goto tr533;
		case 32: goto tr531;
		case 37: goto tr482;
		case 41: goto st268;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr499;
	goto tr530;
tr530:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st294;
st294:
	if ( ++p == pe )
		goto _out294;
case 294:
#line 10284 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st276;
		case 9: goto st295;
		case 10: goto st296;
		case 13: goto st297;
		case 32: goto st295;
		case 37: goto tr482;
		case 41: goto tr538;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st276;
	goto st294;
tr531:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st295;
st295:
	if ( ++p == pe )
		goto _out295;
case 295:
#line 10305 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st276;
		case 9: goto st295;
		case 10: goto st296;
		case 13: goto st297;
		case 32: goto st295;
		case 41: goto tr538;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st276;
	goto st294;
tr532:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st296;
st296:
	if ( ++p == pe )
		goto _out296;
case 296:
#line 10325 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st276;
		case 9: goto st295;
		case 32: goto st295;
		case 41: goto tr538;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st276;
	goto st294;
tr533:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st297;
st297:
	if ( ++p == pe )
		goto _out297;
case 297:
#line 10343 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st296;
		case 41: goto tr501;
	}
	goto st276;
tr487:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st298;
st298:
	if ( ++p == pe )
		goto _out298;
case 298:
#line 10357 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st292;
		case 35: goto tr497;
		case 41: goto tr498;
	}
	goto st274;
tr1305:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 7 "superredcloth_inline.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st830;
st830:
	if ( ++p == pe )
		goto _out830;
case 830:
#line 10374 "superredcloth_inline.c"
	if ( (*p) == 35 )
		goto tr1457;
	if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr1458;
	} else if ( (*p) >= 65 )
		goto tr1458;
	goto tr1338;
tr1457:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st299;
st299:
	if ( ++p == pe )
		goto _out299;
case 299:
#line 10391 "superredcloth_inline.c"
	if ( 48 <= (*p) && (*p) <= 57 )
		goto st300;
	goto tr292;
st300:
	if ( ++p == pe )
		goto _out300;
case 300:
	if ( (*p) == 59 )
		goto tr540;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto st300;
	goto tr292;
tr1458:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st301;
st301:
	if ( ++p == pe )
		goto _out301;
case 301:
#line 10412 "superredcloth_inline.c"
	if ( (*p) == 59 )
		goto tr540;
	if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto st301;
	} else if ( (*p) >= 65 )
		goto st301;
	goto tr292;
tr1306:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 7 "superredcloth_inline.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st831;
st831:
	if ( ++p == pe )
		goto _out831;
case 831:
#line 10433 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1324;
		case 32: goto tr1324;
		case 33: goto tr985;
		case 40: goto tr985;
		case 45: goto tr1460;
		case 63: goto tr985;
		case 94: goto tr985;
		case 96: goto tr985;
		case 124: goto tr985;
		case 126: goto tr985;
	}
	if ( (*p) < 44 ) {
		if ( (*p) > 13 ) {
			if ( 35 <= (*p) && (*p) <= 38 )
				goto tr985;
		} else if ( (*p) >= 9 )
			goto tr1324;
	} else if ( (*p) > 47 ) {
		if ( (*p) > 61 ) {
			if ( 91 <= (*p) && (*p) <= 92 )
				goto tr985;
		} else if ( (*p) >= 58 )
			goto tr985;
	} else
		goto tr985;
	goto tr1459;
tr1461:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st832;
tr1459:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st832;
st832:
	if ( ++p == pe )
		goto _out832;
case 832:
#line 10479 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1324;
		case 9: goto st302;
		case 10: goto st304;
		case 13: goto st305;
		case 32: goto st302;
		case 33: goto st303;
		case 39: goto tr1462;
		case 45: goto tr1463;
		case 63: goto st303;
		case 94: goto st303;
		case 96: goto st303;
		case 124: goto st303;
		case 126: goto st303;
	}
	if ( (*p) < 44 ) {
		if ( (*p) > 12 ) {
			if ( 35 <= (*p) && (*p) <= 40 )
				goto st303;
		} else if ( (*p) >= 11 )
			goto tr1324;
	} else if ( (*p) > 47 ) {
		if ( (*p) > 61 ) {
			if ( 91 <= (*p) && (*p) <= 92 )
				goto st303;
		} else if ( (*p) >= 58 )
			goto st303;
	} else
		goto st303;
	goto tr1461;
st302:
	if ( ++p == pe )
		goto _out302;
case 302:
	switch( (*p) ) {
		case 0: goto tr4;
		case 9: goto st302;
		case 10: goto st304;
		case 13: goto st305;
		case 32: goto st302;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr4;
	goto st303;
tr985:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st303;
st303:
	if ( ++p == pe )
		goto _out303;
case 303:
#line 10532 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr4;
		case 9: goto st302;
		case 10: goto st304;
		case 13: goto st305;
		case 32: goto st302;
		case 39: goto tr546;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr4;
	goto st303;
st304:
	if ( ++p == pe )
		goto _out304;
case 304:
	switch( (*p) ) {
		case 0: goto tr4;
		case 9: goto st302;
		case 32: goto st302;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto tr4;
	goto st303;
st305:
	if ( ++p == pe )
		goto _out305;
case 305:
	if ( (*p) == 10 )
		goto st304;
	goto tr4;
tr546:
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
	goto st833;
st833:
	if ( ++p == pe )
		goto _out833;
case 833:
#line 10571 "superredcloth_inline.c"
	if ( (*p) == 93 )
		goto tr1465;
	goto tr1464;
tr1462:
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
	goto st834;
st834:
	if ( ++p == pe )
		goto _out834;
case 834:
#line 10583 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1464;
		case 40: goto tr1464;
		case 45: goto st730;
		case 63: goto tr1464;
		case 93: goto tr1466;
		case 96: goto tr1464;
		case 124: goto tr1464;
		case 126: goto tr1464;
	}
	if ( (*p) < 35 ) {
		if ( (*p) > 13 ) {
			if ( 32 <= (*p) && (*p) <= 33 )
				goto tr1464;
		} else if ( (*p) >= 9 )
			goto tr1464;
	} else if ( (*p) > 38 ) {
		if ( (*p) < 58 ) {
			if ( 44 <= (*p) && (*p) <= 47 )
				goto tr1464;
		} else if ( (*p) > 61 ) {
			if ( 91 <= (*p) && (*p) <= 94 )
				goto tr1464;
		} else
			goto tr1464;
	} else
		goto tr1464;
	goto tr1297;
tr1463:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st835;
tr1460:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st835;
st835:
	if ( ++p == pe )
		goto _out835;
case 835:
#line 10630 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1324;
		case 9: goto st302;
		case 10: goto st304;
		case 13: goto st305;
		case 32: goto st302;
		case 33: goto st303;
		case 39: goto tr1462;
		case 63: goto st303;
		case 94: goto st303;
		case 96: goto st303;
		case 124: goto st303;
		case 126: goto st303;
	}
	if ( (*p) < 44 ) {
		if ( (*p) > 12 ) {
			if ( 35 <= (*p) && (*p) <= 40 )
				goto st303;
		} else if ( (*p) >= 11 )
			goto tr1324;
	} else if ( (*p) > 47 ) {
		if ( (*p) > 61 ) {
			if ( 91 <= (*p) && (*p) <= 92 )
				goto st303;
		} else if ( (*p) >= 58 )
			goto st303;
	} else
		goto st303;
	goto tr1461;
tr1307:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 9 "superredcloth_inline.rl"
	{act = 34;}
	goto st836;
st836:
	if ( ++p == pe )
		goto _out836;
case 836:
#line 10670 "superredcloth_inline.c"
	switch( (*p) ) {
		case 67: goto st1;
		case 82: goto st2;
		case 84: goto st3;
		case 99: goto st1;
		case 114: goto st2;
		case 116: goto st3;
	}
	goto tr1338;
tr1308:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 7 "superredcloth_inline.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st837;
st837:
	if ( ++p == pe )
		goto _out837;
case 837:
#line 10692 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1324;
		case 32: goto tr1324;
		case 33: goto tr571;
		case 40: goto tr572;
		case 42: goto tr1468;
		case 45: goto tr1469;
		case 63: goto tr571;
		case 91: goto tr573;
		case 92: goto tr571;
		case 94: goto tr571;
		case 96: goto tr571;
		case 123: goto tr1470;
		case 124: goto tr571;
		case 126: goto tr571;
	}
	if ( (*p) < 35 ) {
		if ( 9 <= (*p) && (*p) <= 13 )
			goto tr1324;
	} else if ( (*p) > 38 ) {
		if ( (*p) > 47 ) {
			if ( 58 <= (*p) && (*p) <= 61 )
				goto tr571;
		} else if ( (*p) >= 44 )
			goto tr571;
	} else
		goto tr571;
	goto tr1467;
tr1471:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st838;
tr1467:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st838;
st838:
	if ( ++p == pe )
		goto _out838;
case 838:
#line 10739 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1324;
		case 9: goto st306;
		case 10: goto st308;
		case 13: goto st309;
		case 32: goto st306;
		case 33: goto st307;
		case 40: goto st307;
		case 42: goto tr1472;
		case 45: goto tr1473;
		case 63: goto st307;
		case 94: goto st307;
		case 96: goto st307;
		case 124: goto st307;
		case 126: goto st307;
	}
	if ( (*p) < 44 ) {
		if ( (*p) > 12 ) {
			if ( 35 <= (*p) && (*p) <= 38 )
				goto st307;
		} else if ( (*p) >= 11 )
			goto tr1324;
	} else if ( (*p) > 47 ) {
		if ( (*p) > 61 ) {
			if ( 91 <= (*p) && (*p) <= 92 )
				goto st307;
		} else if ( (*p) >= 58 )
			goto st307;
	} else
		goto st307;
	goto tr1471;
st306:
	if ( ++p == pe )
		goto _out306;
case 306:
	switch( (*p) ) {
		case 0: goto tr4;
		case 9: goto st306;
		case 10: goto st308;
		case 13: goto st309;
		case 32: goto st306;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr4;
	goto st307;
tr571:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st307;
st307:
	if ( ++p == pe )
		goto _out307;
case 307:
#line 10793 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr4;
		case 9: goto st306;
		case 10: goto st308;
		case 13: goto st309;
		case 32: goto st306;
		case 42: goto tr551;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr4;
	goto st307;
st308:
	if ( ++p == pe )
		goto _out308;
case 308:
	switch( (*p) ) {
		case 0: goto tr4;
		case 9: goto st306;
		case 32: goto st306;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto tr4;
	goto st307;
st309:
	if ( ++p == pe )
		goto _out309;
case 309:
	if ( (*p) == 10 )
		goto st308;
	goto tr4;
tr551:
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
	goto st839;
st839:
	if ( ++p == pe )
		goto _out839;
case 839:
#line 10832 "superredcloth_inline.c"
	if ( (*p) == 93 )
		goto tr1475;
	goto tr1474;
tr1472:
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
	goto st840;
st840:
	if ( ++p == pe )
		goto _out840;
case 840:
#line 10844 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1474;
		case 40: goto tr1474;
		case 45: goto st730;
		case 63: goto tr1474;
		case 93: goto tr1476;
		case 96: goto tr1474;
		case 124: goto tr1474;
		case 126: goto tr1474;
	}
	if ( (*p) < 35 ) {
		if ( (*p) > 13 ) {
			if ( 32 <= (*p) && (*p) <= 33 )
				goto tr1474;
		} else if ( (*p) >= 9 )
			goto tr1474;
	} else if ( (*p) > 38 ) {
		if ( (*p) < 58 ) {
			if ( 44 <= (*p) && (*p) <= 47 )
				goto tr1474;
		} else if ( (*p) > 61 ) {
			if ( 91 <= (*p) && (*p) <= 94 )
				goto tr1474;
		} else
			goto tr1474;
	} else
		goto tr1474;
	goto tr1297;
tr1473:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st841;
tr1469:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st841;
st841:
	if ( ++p == pe )
		goto _out841;
case 841:
#line 10891 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1324;
		case 9: goto st306;
		case 10: goto st308;
		case 13: goto st309;
		case 32: goto st306;
		case 33: goto st307;
		case 40: goto st307;
		case 42: goto tr1472;
		case 63: goto st307;
		case 94: goto st307;
		case 96: goto st307;
		case 124: goto st307;
		case 126: goto st307;
	}
	if ( (*p) < 44 ) {
		if ( (*p) > 12 ) {
			if ( 35 <= (*p) && (*p) <= 38 )
				goto st307;
		} else if ( (*p) >= 11 )
			goto tr1324;
	} else if ( (*p) > 47 ) {
		if ( (*p) > 61 ) {
			if ( 91 <= (*p) && (*p) <= 92 )
				goto st307;
		} else if ( (*p) >= 58 )
			goto st307;
	} else
		goto st307;
	goto tr1471;
tr572:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st310;
st310:
	if ( ++p == pe )
		goto _out310;
case 310:
#line 10930 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr553;
		case 9: goto tr554;
		case 10: goto tr555;
		case 13: goto tr556;
		case 32: goto tr554;
		case 35: goto st331;
		case 41: goto st321;
		case 42: goto tr551;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr553;
	goto tr552;
tr552:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st311;
st311:
	if ( ++p == pe )
		goto _out311;
case 311:
#line 10952 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st312;
		case 9: goto st329;
		case 10: goto st330;
		case 13: goto st336;
		case 32: goto st329;
		case 35: goto tr564;
		case 41: goto tr565;
		case 42: goto tr551;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st312;
	goto st311;
tr553:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st312;
st312:
	if ( ++p == pe )
		goto _out312;
case 312:
#line 10974 "superredcloth_inline.c"
	switch( (*p) ) {
		case 35: goto tr566;
		case 41: goto tr567;
	}
	goto st312;
tr566:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st313;
st313:
	if ( ++p == pe )
		goto _out313;
case 313:
#line 10988 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr4;
	goto tr568;
tr568:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st314;
st314:
	if ( ++p == pe )
		goto _out314;
case 314:
#line 11000 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr570;
	goto st314;
tr567:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st315;
tr570:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st315;
tr586:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st315;
tr598:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st315;
st315:
	if ( ++p == pe )
		goto _out315;
case 315:
#line 11024 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr4;
		case 32: goto tr4;
		case 40: goto tr572;
		case 91: goto tr573;
		case 123: goto tr574;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr4;
	goto tr571;
tr573:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st316;
st316:
	if ( ++p == pe )
		goto _out316;
case 316:
#line 11043 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr576;
		case 9: goto tr577;
		case 10: goto tr578;
		case 13: goto tr579;
		case 32: goto tr577;
		case 42: goto tr551;
		case 93: goto st307;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr576;
	goto tr575;
tr575:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st317;
st317:
	if ( ++p == pe )
		goto _out317;
case 317:
#line 11064 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st318;
		case 9: goto st319;
		case 10: goto st320;
		case 13: goto st328;
		case 32: goto st319;
		case 42: goto tr551;
		case 93: goto tr585;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st318;
	goto st317;
tr576:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st318;
st318:
	if ( ++p == pe )
		goto _out318;
case 318:
#line 11085 "superredcloth_inline.c"
	if ( (*p) == 93 )
		goto tr586;
	goto st318;
tr577:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st319;
st319:
	if ( ++p == pe )
		goto _out319;
case 319:
#line 11097 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st318;
		case 9: goto st319;
		case 10: goto st320;
		case 13: goto st328;
		case 32: goto st319;
		case 93: goto tr585;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st318;
	goto st317;
tr578:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st320;
st320:
	if ( ++p == pe )
		goto _out320;
case 320:
#line 11117 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st318;
		case 9: goto st319;
		case 32: goto st319;
		case 93: goto tr585;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st318;
	goto st317;
tr565:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st321;
tr607:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st321;
tr585:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st321;
tr597:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st321;
st321:
	if ( ++p == pe )
		goto _out321;
case 321:
#line 11147 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr4;
		case 9: goto st306;
		case 10: goto st308;
		case 13: goto st309;
		case 32: goto st306;
		case 40: goto tr572;
		case 42: goto tr551;
		case 91: goto tr573;
		case 123: goto tr574;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr4;
	goto tr571;
tr574:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st322;
st322:
	if ( ++p == pe )
		goto _out322;
case 322:
#line 11170 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr588;
		case 9: goto tr589;
		case 10: goto tr590;
		case 13: goto tr591;
		case 32: goto tr589;
		case 42: goto tr551;
		case 125: goto st307;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr588;
	goto tr587;
tr587:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st323;
st323:
	if ( ++p == pe )
		goto _out323;
case 323:
#line 11191 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st324;
		case 9: goto st325;
		case 10: goto st326;
		case 13: goto st327;
		case 32: goto st325;
		case 42: goto tr551;
		case 125: goto tr597;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st324;
	goto st323;
tr588:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st324;
st324:
	if ( ++p == pe )
		goto _out324;
case 324:
#line 11212 "superredcloth_inline.c"
	if ( (*p) == 125 )
		goto tr598;
	goto st324;
tr589:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st325;
st325:
	if ( ++p == pe )
		goto _out325;
case 325:
#line 11224 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st324;
		case 9: goto st325;
		case 10: goto st326;
		case 13: goto st327;
		case 32: goto st325;
		case 125: goto tr597;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st324;
	goto st323;
tr590:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st326;
st326:
	if ( ++p == pe )
		goto _out326;
case 326:
#line 11244 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st324;
		case 9: goto st325;
		case 32: goto st325;
		case 125: goto tr597;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st324;
	goto st323;
tr591:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st327;
st327:
	if ( ++p == pe )
		goto _out327;
case 327:
#line 11262 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st326;
		case 125: goto tr598;
	}
	goto st324;
tr579:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st328;
st328:
	if ( ++p == pe )
		goto _out328;
case 328:
#line 11276 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st320;
		case 93: goto tr586;
	}
	goto st318;
tr554:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st329;
st329:
	if ( ++p == pe )
		goto _out329;
case 329:
#line 11290 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st312;
		case 9: goto st329;
		case 10: goto st330;
		case 13: goto st336;
		case 32: goto st329;
		case 35: goto tr564;
		case 41: goto tr565;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st312;
	goto st311;
tr555:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st330;
st330:
	if ( ++p == pe )
		goto _out330;
case 330:
#line 11311 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st312;
		case 9: goto st329;
		case 32: goto st329;
		case 35: goto tr564;
		case 41: goto tr565;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st312;
	goto st311;
tr564:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st331;
st331:
	if ( ++p == pe )
		goto _out331;
case 331:
#line 11330 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr568;
		case 9: goto tr600;
		case 10: goto tr601;
		case 13: goto tr602;
		case 32: goto tr600;
		case 41: goto st307;
		case 42: goto tr551;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr568;
	goto tr599;
tr599:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st332;
st332:
	if ( ++p == pe )
		goto _out332;
case 332:
#line 11351 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st314;
		case 9: goto st333;
		case 10: goto st334;
		case 13: goto st335;
		case 32: goto st333;
		case 41: goto tr607;
		case 42: goto tr551;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st314;
	goto st332;
tr600:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st333;
st333:
	if ( ++p == pe )
		goto _out333;
case 333:
#line 11372 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st314;
		case 9: goto st333;
		case 10: goto st334;
		case 13: goto st335;
		case 32: goto st333;
		case 41: goto tr607;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st314;
	goto st332;
tr601:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st334;
st334:
	if ( ++p == pe )
		goto _out334;
case 334:
#line 11392 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st314;
		case 9: goto st333;
		case 32: goto st333;
		case 41: goto tr607;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st314;
	goto st332;
tr602:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st335;
st335:
	if ( ++p == pe )
		goto _out335;
case 335:
#line 11410 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st334;
		case 41: goto tr570;
	}
	goto st314;
tr556:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st336;
st336:
	if ( ++p == pe )
		goto _out336;
case 336:
#line 11424 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st330;
		case 35: goto tr566;
		case 41: goto tr567;
	}
	goto st312;
tr1468:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st842;
st842:
	if ( ++p == pe )
		goto _out842;
case 842:
#line 11443 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1324;
		case 9: goto st306;
		case 10: goto st308;
		case 13: goto st309;
		case 32: goto st306;
		case 33: goto tr696;
		case 40: goto tr697;
		case 42: goto tr1478;
		case 45: goto tr1479;
		case 63: goto tr696;
		case 91: goto tr698;
		case 92: goto tr696;
		case 94: goto tr696;
		case 96: goto tr696;
		case 123: goto tr1480;
		case 124: goto tr696;
		case 126: goto tr696;
	}
	if ( (*p) < 35 ) {
		if ( 11 <= (*p) && (*p) <= 12 )
			goto tr1324;
	} else if ( (*p) > 38 ) {
		if ( (*p) > 47 ) {
			if ( 58 <= (*p) && (*p) <= 61 )
				goto tr696;
		} else if ( (*p) >= 44 )
			goto tr696;
	} else
		goto tr696;
	goto tr1477;
tr1481:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st843;
tr1477:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st843;
st843:
	if ( ++p == pe )
		goto _out843;
case 843:
#line 11493 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1324;
		case 9: goto st337;
		case 10: goto st339;
		case 13: goto st340;
		case 32: goto st337;
		case 33: goto st338;
		case 40: goto st338;
		case 42: goto tr1482;
		case 45: goto tr1483;
		case 63: goto st338;
		case 94: goto st338;
		case 96: goto st338;
		case 124: goto st338;
		case 126: goto st338;
	}
	if ( (*p) < 44 ) {
		if ( (*p) > 12 ) {
			if ( 35 <= (*p) && (*p) <= 38 )
				goto st338;
		} else if ( (*p) >= 11 )
			goto tr1324;
	} else if ( (*p) > 47 ) {
		if ( (*p) > 61 ) {
			if ( 91 <= (*p) && (*p) <= 92 )
				goto st338;
		} else if ( (*p) >= 58 )
			goto st338;
	} else
		goto st338;
	goto tr1481;
st337:
	if ( ++p == pe )
		goto _out337;
case 337:
	switch( (*p) ) {
		case 0: goto tr4;
		case 9: goto st337;
		case 10: goto st339;
		case 13: goto st340;
		case 32: goto st337;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr4;
	goto st338;
tr696:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st338;
st338:
	if ( ++p == pe )
		goto _out338;
case 338:
#line 11547 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr4;
		case 9: goto st337;
		case 10: goto st339;
		case 13: goto st340;
		case 32: goto st337;
		case 42: goto tr612;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr4;
	goto st338;
st339:
	if ( ++p == pe )
		goto _out339;
case 339:
	switch( (*p) ) {
		case 0: goto tr4;
		case 9: goto st337;
		case 32: goto st337;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto tr4;
	goto st338;
st340:
	if ( ++p == pe )
		goto _out340;
case 340:
	if ( (*p) == 10 )
		goto st339;
	goto tr4;
tr612:
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
	goto st844;
st844:
	if ( ++p == pe )
		goto _out844;
case 844:
#line 11586 "superredcloth_inline.c"
	switch( (*p) ) {
		case 42: goto st845;
		case 93: goto tr1475;
	}
	goto tr1474;
st845:
	if ( ++p == pe )
		goto _out845;
case 845:
	if ( (*p) == 93 )
		goto tr1485;
	goto tr1484;
tr1482:
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
	goto st846;
st846:
	if ( ++p == pe )
		goto _out846;
case 846:
#line 11607 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1474;
		case 40: goto tr1474;
		case 42: goto st847;
		case 45: goto st730;
		case 63: goto tr1474;
		case 93: goto tr1476;
		case 96: goto tr1474;
		case 124: goto tr1474;
		case 126: goto tr1474;
	}
	if ( (*p) < 35 ) {
		if ( (*p) > 13 ) {
			if ( 32 <= (*p) && (*p) <= 33 )
				goto tr1474;
		} else if ( (*p) >= 9 )
			goto tr1474;
	} else if ( (*p) > 38 ) {
		if ( (*p) < 58 ) {
			if ( 44 <= (*p) && (*p) <= 47 )
				goto tr1474;
		} else if ( (*p) > 61 ) {
			if ( 91 <= (*p) && (*p) <= 94 )
				goto tr1474;
		} else
			goto tr1474;
	} else
		goto tr1474;
	goto tr1297;
st847:
	if ( ++p == pe )
		goto _out847;
case 847:
	switch( (*p) ) {
		case 0: goto tr1484;
		case 40: goto tr1484;
		case 45: goto st730;
		case 63: goto tr1484;
		case 93: goto tr1487;
		case 96: goto tr1484;
		case 124: goto tr1484;
		case 126: goto tr1484;
	}
	if ( (*p) < 35 ) {
		if ( (*p) > 13 ) {
			if ( 32 <= (*p) && (*p) <= 33 )
				goto tr1484;
		} else if ( (*p) >= 9 )
			goto tr1484;
	} else if ( (*p) > 38 ) {
		if ( (*p) < 58 ) {
			if ( 44 <= (*p) && (*p) <= 47 )
				goto tr1484;
		} else if ( (*p) > 61 ) {
			if ( 91 <= (*p) && (*p) <= 94 )
				goto tr1484;
		} else
			goto tr1484;
	} else
		goto tr1484;
	goto tr1297;
tr1483:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st848;
tr1479:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st848;
st848:
	if ( ++p == pe )
		goto _out848;
case 848:
#line 11687 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1324;
		case 9: goto st337;
		case 10: goto st339;
		case 13: goto st340;
		case 32: goto st337;
		case 33: goto st338;
		case 40: goto st338;
		case 42: goto tr1482;
		case 63: goto st338;
		case 94: goto st338;
		case 96: goto st338;
		case 124: goto st338;
		case 126: goto st338;
	}
	if ( (*p) < 44 ) {
		if ( (*p) > 12 ) {
			if ( 35 <= (*p) && (*p) <= 38 )
				goto st338;
		} else if ( (*p) >= 11 )
			goto tr1324;
	} else if ( (*p) > 47 ) {
		if ( (*p) > 61 ) {
			if ( 91 <= (*p) && (*p) <= 92 )
				goto st338;
		} else if ( (*p) >= 58 )
			goto st338;
	} else
		goto st338;
	goto tr1481;
tr697:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st341;
st341:
	if ( ++p == pe )
		goto _out341;
case 341:
#line 11726 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr614;
		case 9: goto tr615;
		case 10: goto tr616;
		case 13: goto tr617;
		case 32: goto tr615;
		case 35: goto st377;
		case 41: goto st381;
		case 42: goto tr612;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr614;
	goto tr613;
tr613:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st342;
st342:
	if ( ++p == pe )
		goto _out342;
case 342:
#line 11748 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st343;
		case 9: goto st375;
		case 10: goto st376;
		case 13: goto st393;
		case 32: goto st375;
		case 35: goto tr625;
		case 41: goto tr626;
		case 42: goto tr612;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st343;
	goto st342;
tr614:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st343;
st343:
	if ( ++p == pe )
		goto _out343;
case 343:
#line 11770 "superredcloth_inline.c"
	switch( (*p) ) {
		case 35: goto tr627;
		case 41: goto tr628;
	}
	goto st343;
tr627:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st344;
st344:
	if ( ++p == pe )
		goto _out344;
case 344:
#line 11784 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr4;
	goto tr629;
tr629:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st345;
st345:
	if ( ++p == pe )
		goto _out345;
case 345:
#line 11796 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr631;
	goto st345;
tr628:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st346;
tr631:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st346;
tr674:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st346;
tr686:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st346;
st346:
	if ( ++p == pe )
		goto _out346;
case 346:
#line 11820 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr4;
		case 32: goto tr4;
		case 40: goto tr633;
		case 91: goto tr634;
		case 123: goto tr635;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr4;
	goto tr632;
tr632:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st347;
st347:
	if ( ++p == pe )
		goto _out347;
case 347:
#line 11839 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr4;
		case 9: goto st348;
		case 10: goto st349;
		case 13: goto st350;
		case 32: goto st348;
		case 42: goto tr640;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr4;
	goto st347;
st348:
	if ( ++p == pe )
		goto _out348;
case 348:
	switch( (*p) ) {
		case 0: goto tr4;
		case 9: goto st348;
		case 10: goto st349;
		case 13: goto st350;
		case 32: goto st348;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr4;
	goto st347;
st349:
	if ( ++p == pe )
		goto _out349;
case 349:
	switch( (*p) ) {
		case 0: goto tr4;
		case 9: goto st348;
		case 32: goto st348;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto tr4;
	goto st347;
st350:
	if ( ++p == pe )
		goto _out350;
case 350:
	if ( (*p) == 10 )
		goto st349;
	goto tr4;
tr640:
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
	goto st351;
st351:
	if ( ++p == pe )
		goto _out351;
case 351:
#line 11892 "superredcloth_inline.c"
	if ( (*p) == 42 )
		goto st845;
	goto tr4;
tr633:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st352;
st352:
	if ( ++p == pe )
		goto _out352;
case 352:
#line 11904 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr614;
		case 9: goto tr643;
		case 10: goto tr644;
		case 13: goto tr645;
		case 32: goto tr643;
		case 35: goto st356;
		case 41: goto st360;
		case 42: goto tr640;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr614;
	goto tr642;
tr642:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st353;
st353:
	if ( ++p == pe )
		goto _out353;
case 353:
#line 11926 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st343;
		case 9: goto st354;
		case 10: goto st355;
		case 13: goto st374;
		case 32: goto st354;
		case 35: goto tr652;
		case 41: goto tr653;
		case 42: goto tr640;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st343;
	goto st353;
tr643:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st354;
st354:
	if ( ++p == pe )
		goto _out354;
case 354:
#line 11948 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st343;
		case 9: goto st354;
		case 10: goto st355;
		case 13: goto st374;
		case 32: goto st354;
		case 35: goto tr652;
		case 41: goto tr653;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st343;
	goto st353;
tr644:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st355;
st355:
	if ( ++p == pe )
		goto _out355;
case 355:
#line 11969 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st343;
		case 9: goto st354;
		case 32: goto st354;
		case 35: goto tr652;
		case 41: goto tr653;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st343;
	goto st353;
tr652:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st356;
st356:
	if ( ++p == pe )
		goto _out356;
case 356:
#line 11988 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr629;
		case 9: goto tr655;
		case 10: goto tr656;
		case 13: goto tr657;
		case 32: goto tr655;
		case 41: goto st347;
		case 42: goto tr640;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr629;
	goto tr654;
tr654:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st357;
st357:
	if ( ++p == pe )
		goto _out357;
case 357:
#line 12009 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st345;
		case 9: goto st358;
		case 10: goto st359;
		case 13: goto st373;
		case 32: goto st358;
		case 41: goto tr662;
		case 42: goto tr640;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st345;
	goto st357;
tr655:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st358;
st358:
	if ( ++p == pe )
		goto _out358;
case 358:
#line 12030 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st345;
		case 9: goto st358;
		case 10: goto st359;
		case 13: goto st373;
		case 32: goto st358;
		case 41: goto tr662;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st345;
	goto st357;
tr656:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st359;
st359:
	if ( ++p == pe )
		goto _out359;
case 359:
#line 12050 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st345;
		case 9: goto st358;
		case 32: goto st358;
		case 41: goto tr662;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st345;
	goto st357;
tr653:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st360;
tr662:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st360;
tr673:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st360;
tr685:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st360;
st360:
	if ( ++p == pe )
		goto _out360;
case 360:
#line 12080 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr4;
		case 9: goto st348;
		case 10: goto st349;
		case 13: goto st350;
		case 32: goto st348;
		case 40: goto tr633;
		case 42: goto tr640;
		case 91: goto tr634;
		case 123: goto tr635;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr4;
	goto tr632;
tr634:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st361;
st361:
	if ( ++p == pe )
		goto _out361;
case 361:
#line 12103 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr664;
		case 9: goto tr665;
		case 10: goto tr666;
		case 13: goto tr667;
		case 32: goto tr665;
		case 42: goto tr640;
		case 93: goto st347;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr664;
	goto tr663;
tr663:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st362;
st362:
	if ( ++p == pe )
		goto _out362;
case 362:
#line 12124 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st363;
		case 9: goto st364;
		case 10: goto st365;
		case 13: goto st366;
		case 32: goto st364;
		case 42: goto tr640;
		case 93: goto tr673;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st363;
	goto st362;
tr664:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st363;
st363:
	if ( ++p == pe )
		goto _out363;
case 363:
#line 12145 "superredcloth_inline.c"
	if ( (*p) == 93 )
		goto tr674;
	goto st363;
tr665:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st364;
st364:
	if ( ++p == pe )
		goto _out364;
case 364:
#line 12157 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st363;
		case 9: goto st364;
		case 10: goto st365;
		case 13: goto st366;
		case 32: goto st364;
		case 93: goto tr673;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st363;
	goto st362;
tr666:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st365;
st365:
	if ( ++p == pe )
		goto _out365;
case 365:
#line 12177 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st363;
		case 9: goto st364;
		case 32: goto st364;
		case 93: goto tr673;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st363;
	goto st362;
tr667:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st366;
st366:
	if ( ++p == pe )
		goto _out366;
case 366:
#line 12195 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st365;
		case 93: goto tr674;
	}
	goto st363;
tr635:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st367;
st367:
	if ( ++p == pe )
		goto _out367;
case 367:
#line 12209 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr676;
		case 9: goto tr677;
		case 10: goto tr678;
		case 13: goto tr679;
		case 32: goto tr677;
		case 42: goto tr640;
		case 125: goto st347;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr676;
	goto tr675;
tr675:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st368;
st368:
	if ( ++p == pe )
		goto _out368;
case 368:
#line 12230 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st369;
		case 9: goto st370;
		case 10: goto st371;
		case 13: goto st372;
		case 32: goto st370;
		case 42: goto tr640;
		case 125: goto tr685;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st369;
	goto st368;
tr676:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st369;
st369:
	if ( ++p == pe )
		goto _out369;
case 369:
#line 12251 "superredcloth_inline.c"
	if ( (*p) == 125 )
		goto tr686;
	goto st369;
tr677:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st370;
st370:
	if ( ++p == pe )
		goto _out370;
case 370:
#line 12263 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st369;
		case 9: goto st370;
		case 10: goto st371;
		case 13: goto st372;
		case 32: goto st370;
		case 125: goto tr685;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st369;
	goto st368;
tr678:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st371;
st371:
	if ( ++p == pe )
		goto _out371;
case 371:
#line 12283 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st369;
		case 9: goto st370;
		case 32: goto st370;
		case 125: goto tr685;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st369;
	goto st368;
tr679:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st372;
st372:
	if ( ++p == pe )
		goto _out372;
case 372:
#line 12301 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st371;
		case 125: goto tr686;
	}
	goto st369;
tr657:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st373;
st373:
	if ( ++p == pe )
		goto _out373;
case 373:
#line 12315 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st359;
		case 41: goto tr631;
	}
	goto st345;
tr645:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st374;
st374:
	if ( ++p == pe )
		goto _out374;
case 374:
#line 12329 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st355;
		case 35: goto tr627;
		case 41: goto tr628;
	}
	goto st343;
tr615:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st375;
st375:
	if ( ++p == pe )
		goto _out375;
case 375:
#line 12344 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st343;
		case 9: goto st375;
		case 10: goto st376;
		case 13: goto st393;
		case 32: goto st375;
		case 35: goto tr625;
		case 41: goto tr626;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st343;
	goto st342;
tr616:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st376;
st376:
	if ( ++p == pe )
		goto _out376;
case 376:
#line 12365 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st343;
		case 9: goto st375;
		case 32: goto st375;
		case 35: goto tr625;
		case 41: goto tr626;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st343;
	goto st342;
tr625:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st377;
st377:
	if ( ++p == pe )
		goto _out377;
case 377:
#line 12384 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr629;
		case 9: goto tr688;
		case 10: goto tr689;
		case 13: goto tr690;
		case 32: goto tr688;
		case 41: goto st338;
		case 42: goto tr612;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr629;
	goto tr687;
tr687:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st378;
st378:
	if ( ++p == pe )
		goto _out378;
case 378:
#line 12405 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st345;
		case 9: goto st379;
		case 10: goto st380;
		case 13: goto st392;
		case 32: goto st379;
		case 41: goto tr695;
		case 42: goto tr612;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st345;
	goto st378;
tr688:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st379;
st379:
	if ( ++p == pe )
		goto _out379;
case 379:
#line 12426 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st345;
		case 9: goto st379;
		case 10: goto st380;
		case 13: goto st392;
		case 32: goto st379;
		case 41: goto tr695;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st345;
	goto st378;
tr689:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st380;
st380:
	if ( ++p == pe )
		goto _out380;
case 380:
#line 12446 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st345;
		case 9: goto st379;
		case 32: goto st379;
		case 41: goto tr695;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st345;
	goto st378;
tr626:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st381;
tr695:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st381;
tr708:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st381;
tr717:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st381;
st381:
	if ( ++p == pe )
		goto _out381;
case 381:
#line 12476 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr4;
		case 9: goto st337;
		case 10: goto st339;
		case 13: goto st340;
		case 32: goto st337;
		case 40: goto tr697;
		case 42: goto tr612;
		case 91: goto tr698;
		case 123: goto tr699;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr4;
	goto tr696;
tr698:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st382;
st382:
	if ( ++p == pe )
		goto _out382;
case 382:
#line 12499 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr664;
		case 9: goto tr701;
		case 10: goto tr702;
		case 13: goto tr703;
		case 32: goto tr701;
		case 42: goto tr612;
		case 93: goto st338;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr664;
	goto tr700;
tr700:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st383;
st383:
	if ( ++p == pe )
		goto _out383;
case 383:
#line 12520 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st363;
		case 9: goto st384;
		case 10: goto st385;
		case 13: goto st386;
		case 32: goto st384;
		case 42: goto tr612;
		case 93: goto tr708;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st363;
	goto st383;
tr701:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st384;
st384:
	if ( ++p == pe )
		goto _out384;
case 384:
#line 12541 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st363;
		case 9: goto st384;
		case 10: goto st385;
		case 13: goto st386;
		case 32: goto st384;
		case 93: goto tr708;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st363;
	goto st383;
tr702:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st385;
st385:
	if ( ++p == pe )
		goto _out385;
case 385:
#line 12561 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st363;
		case 9: goto st384;
		case 32: goto st384;
		case 93: goto tr708;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st363;
	goto st383;
tr703:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st386;
st386:
	if ( ++p == pe )
		goto _out386;
case 386:
#line 12579 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st385;
		case 93: goto tr674;
	}
	goto st363;
tr699:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st387;
st387:
	if ( ++p == pe )
		goto _out387;
case 387:
#line 12593 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr676;
		case 9: goto tr710;
		case 10: goto tr711;
		case 13: goto tr712;
		case 32: goto tr710;
		case 42: goto tr612;
		case 125: goto st338;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr676;
	goto tr709;
tr709:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st388;
st388:
	if ( ++p == pe )
		goto _out388;
case 388:
#line 12614 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st369;
		case 9: goto st389;
		case 10: goto st390;
		case 13: goto st391;
		case 32: goto st389;
		case 42: goto tr612;
		case 125: goto tr717;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st369;
	goto st388;
tr710:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st389;
st389:
	if ( ++p == pe )
		goto _out389;
case 389:
#line 12635 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st369;
		case 9: goto st389;
		case 10: goto st390;
		case 13: goto st391;
		case 32: goto st389;
		case 125: goto tr717;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st369;
	goto st388;
tr711:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st390;
st390:
	if ( ++p == pe )
		goto _out390;
case 390:
#line 12655 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st369;
		case 9: goto st389;
		case 32: goto st389;
		case 125: goto tr717;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st369;
	goto st388;
tr712:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st391;
st391:
	if ( ++p == pe )
		goto _out391;
case 391:
#line 12673 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st390;
		case 125: goto tr686;
	}
	goto st369;
tr690:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st392;
st392:
	if ( ++p == pe )
		goto _out392;
case 392:
#line 12687 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st380;
		case 41: goto tr631;
	}
	goto st345;
tr617:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st393;
st393:
	if ( ++p == pe )
		goto _out393;
case 393:
#line 12701 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st376;
		case 35: goto tr627;
		case 41: goto tr628;
	}
	goto st343;
tr1478:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
#line 98 "superredcloth_inline.rl"
	{act = 4;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st849;
st849:
	if ( ++p == pe )
		goto _out849;
case 849:
#line 12722 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1474;
		case 9: goto st348;
		case 10: goto st349;
		case 13: goto st350;
		case 32: goto st348;
		case 33: goto st347;
		case 40: goto st347;
		case 42: goto tr1489;
		case 45: goto tr1490;
		case 63: goto st347;
		case 93: goto tr1491;
		case 96: goto st347;
		case 124: goto st347;
		case 126: goto st347;
	}
	if ( (*p) < 44 ) {
		if ( (*p) > 12 ) {
			if ( 35 <= (*p) && (*p) <= 38 )
				goto st347;
		} else if ( (*p) >= 11 )
			goto tr1474;
	} else if ( (*p) > 47 ) {
		if ( (*p) > 61 ) {
			if ( 91 <= (*p) && (*p) <= 94 )
				goto st347;
		} else if ( (*p) >= 58 )
			goto st347;
	} else
		goto st347;
	goto tr1488;
tr1488:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st850;
tr1491:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 98 "superredcloth_inline.rl"
	{act = 4;}
	goto st850;
st850:
	if ( ++p == pe )
		goto _out850;
case 850:
#line 12770 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr4;
		case 9: goto st348;
		case 10: goto st349;
		case 13: goto st350;
		case 32: goto st348;
		case 33: goto st347;
		case 40: goto st347;
		case 42: goto tr1489;
		case 45: goto tr1490;
		case 63: goto st347;
		case 94: goto st347;
		case 96: goto st347;
		case 124: goto st347;
		case 126: goto st347;
	}
	if ( (*p) < 44 ) {
		if ( (*p) > 12 ) {
			if ( 35 <= (*p) && (*p) <= 38 )
				goto st347;
		} else if ( (*p) >= 11 )
			goto tr4;
	} else if ( (*p) > 47 ) {
		if ( (*p) > 61 ) {
			if ( 91 <= (*p) && (*p) <= 92 )
				goto st347;
		} else if ( (*p) >= 58 )
			goto st347;
	} else
		goto st347;
	goto tr1488;
tr1489:
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
	goto st851;
st851:
	if ( ++p == pe )
		goto _out851;
case 851:
#line 12810 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1324;
		case 40: goto tr1324;
		case 42: goto st847;
		case 45: goto st730;
		case 63: goto tr1324;
		case 94: goto tr1324;
		case 96: goto tr1324;
		case 124: goto tr1324;
		case 126: goto tr1324;
	}
	if ( (*p) < 35 ) {
		if ( (*p) > 13 ) {
			if ( 32 <= (*p) && (*p) <= 33 )
				goto tr1324;
		} else if ( (*p) >= 9 )
			goto tr1324;
	} else if ( (*p) > 38 ) {
		if ( (*p) < 58 ) {
			if ( 44 <= (*p) && (*p) <= 47 )
				goto tr1324;
		} else if ( (*p) > 61 ) {
			if ( 91 <= (*p) && (*p) <= 92 )
				goto tr1324;
		} else
			goto tr1324;
	} else
		goto tr1324;
	goto tr1297;
tr1490:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st852;
st852:
	if ( ++p == pe )
		goto _out852;
case 852:
#line 12850 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1324;
		case 9: goto st348;
		case 10: goto st349;
		case 13: goto st350;
		case 32: goto st348;
		case 33: goto st347;
		case 40: goto st347;
		case 42: goto tr1489;
		case 63: goto st347;
		case 94: goto st347;
		case 96: goto st347;
		case 124: goto st347;
		case 126: goto st347;
	}
	if ( (*p) < 44 ) {
		if ( (*p) > 12 ) {
			if ( 35 <= (*p) && (*p) <= 38 )
				goto st347;
		} else if ( (*p) >= 11 )
			goto tr1324;
	} else if ( (*p) > 47 ) {
		if ( (*p) > 61 ) {
			if ( 91 <= (*p) && (*p) <= 92 )
				goto st347;
		} else if ( (*p) >= 58 )
			goto st347;
	} else
		goto st347;
	goto tr1488;
tr1480:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st853;
st853:
	if ( ++p == pe )
		goto _out853;
case 853:
#line 12893 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr676;
		case 9: goto tr710;
		case 10: goto tr711;
		case 13: goto tr712;
		case 32: goto tr710;
		case 33: goto tr709;
		case 40: goto tr709;
		case 42: goto tr1482;
		case 45: goto tr1493;
		case 63: goto tr709;
		case 94: goto tr709;
		case 96: goto tr709;
		case 125: goto tr1481;
	}
	if ( (*p) < 44 ) {
		if ( (*p) > 12 ) {
			if ( 35 <= (*p) && (*p) <= 38 )
				goto tr709;
		} else if ( (*p) >= 11 )
			goto tr676;
	} else if ( (*p) > 47 ) {
		if ( (*p) < 91 ) {
			if ( 58 <= (*p) && (*p) <= 61 )
				goto tr709;
		} else if ( (*p) > 92 ) {
			if ( 124 <= (*p) && (*p) <= 126 )
				goto tr709;
		} else
			goto tr709;
	} else
		goto tr709;
	goto tr1492;
tr1494:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st854;
tr1492:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st854;
st854:
	if ( ++p == pe )
		goto _out854;
case 854:
#line 12945 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st369;
		case 9: goto st389;
		case 10: goto st390;
		case 13: goto st391;
		case 32: goto st389;
		case 33: goto st388;
		case 40: goto st388;
		case 42: goto tr1482;
		case 45: goto tr1495;
		case 63: goto st388;
		case 94: goto st388;
		case 96: goto st388;
		case 125: goto tr1496;
	}
	if ( (*p) < 44 ) {
		if ( (*p) > 12 ) {
			if ( 35 <= (*p) && (*p) <= 38 )
				goto st388;
		} else if ( (*p) >= 11 )
			goto st369;
	} else if ( (*p) > 47 ) {
		if ( (*p) < 91 ) {
			if ( 58 <= (*p) && (*p) <= 61 )
				goto st388;
		} else if ( (*p) > 92 ) {
			if ( 124 <= (*p) && (*p) <= 126 )
				goto st388;
		} else
			goto st388;
	} else
		goto st388;
	goto tr1494;
tr1495:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st855;
tr1493:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st855;
st855:
	if ( ++p == pe )
		goto _out855;
case 855:
#line 12997 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st369;
		case 9: goto st389;
		case 10: goto st390;
		case 13: goto st391;
		case 32: goto st389;
		case 33: goto st388;
		case 40: goto st388;
		case 42: goto tr1482;
		case 63: goto st388;
		case 94: goto st388;
		case 96: goto st388;
		case 125: goto tr1496;
	}
	if ( (*p) < 44 ) {
		if ( (*p) > 12 ) {
			if ( 35 <= (*p) && (*p) <= 38 )
				goto st388;
		} else if ( (*p) >= 11 )
			goto st369;
	} else if ( (*p) > 47 ) {
		if ( (*p) < 91 ) {
			if ( 58 <= (*p) && (*p) <= 61 )
				goto st388;
		} else if ( (*p) > 92 ) {
			if ( 124 <= (*p) && (*p) <= 126 )
				goto st388;
		} else
			goto st388;
	} else
		goto st388;
	goto tr1494;
tr1496:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st856;
st856:
	if ( ++p == pe )
		goto _out856;
case 856:
#line 13042 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1324;
		case 9: goto st337;
		case 10: goto st339;
		case 13: goto st340;
		case 32: goto st337;
		case 33: goto tr696;
		case 40: goto tr697;
		case 42: goto tr1482;
		case 45: goto tr1479;
		case 63: goto tr696;
		case 91: goto tr698;
		case 92: goto tr696;
		case 94: goto tr696;
		case 96: goto tr696;
		case 123: goto tr1480;
		case 124: goto tr696;
		case 126: goto tr696;
	}
	if ( (*p) < 35 ) {
		if ( 11 <= (*p) && (*p) <= 12 )
			goto tr1324;
	} else if ( (*p) > 38 ) {
		if ( (*p) > 47 ) {
			if ( 58 <= (*p) && (*p) <= 61 )
				goto tr696;
		} else if ( (*p) >= 44 )
			goto tr696;
	} else
		goto tr696;
	goto tr1477;
tr1470:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st857;
st857:
	if ( ++p == pe )
		goto _out857;
case 857:
#line 13086 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr588;
		case 9: goto tr589;
		case 10: goto tr590;
		case 13: goto tr591;
		case 32: goto tr589;
		case 33: goto tr587;
		case 40: goto tr587;
		case 42: goto tr1472;
		case 45: goto tr1498;
		case 63: goto tr587;
		case 94: goto tr587;
		case 96: goto tr587;
		case 125: goto tr1471;
	}
	if ( (*p) < 44 ) {
		if ( (*p) > 12 ) {
			if ( 35 <= (*p) && (*p) <= 38 )
				goto tr587;
		} else if ( (*p) >= 11 )
			goto tr588;
	} else if ( (*p) > 47 ) {
		if ( (*p) < 91 ) {
			if ( 58 <= (*p) && (*p) <= 61 )
				goto tr587;
		} else if ( (*p) > 92 ) {
			if ( 124 <= (*p) && (*p) <= 126 )
				goto tr587;
		} else
			goto tr587;
	} else
		goto tr587;
	goto tr1497;
tr1499:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st858;
tr1497:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st858;
st858:
	if ( ++p == pe )
		goto _out858;
case 858:
#line 13138 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st324;
		case 9: goto st325;
		case 10: goto st326;
		case 13: goto st327;
		case 32: goto st325;
		case 33: goto st323;
		case 40: goto st323;
		case 42: goto tr1472;
		case 45: goto tr1500;
		case 63: goto st323;
		case 94: goto st323;
		case 96: goto st323;
		case 125: goto tr1501;
	}
	if ( (*p) < 44 ) {
		if ( (*p) > 12 ) {
			if ( 35 <= (*p) && (*p) <= 38 )
				goto st323;
		} else if ( (*p) >= 11 )
			goto st324;
	} else if ( (*p) > 47 ) {
		if ( (*p) < 91 ) {
			if ( 58 <= (*p) && (*p) <= 61 )
				goto st323;
		} else if ( (*p) > 92 ) {
			if ( 124 <= (*p) && (*p) <= 126 )
				goto st323;
		} else
			goto st323;
	} else
		goto st323;
	goto tr1499;
tr1500:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st859;
tr1498:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st859;
st859:
	if ( ++p == pe )
		goto _out859;
case 859:
#line 13190 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st324;
		case 9: goto st325;
		case 10: goto st326;
		case 13: goto st327;
		case 32: goto st325;
		case 33: goto st323;
		case 40: goto st323;
		case 42: goto tr1472;
		case 63: goto st323;
		case 94: goto st323;
		case 96: goto st323;
		case 125: goto tr1501;
	}
	if ( (*p) < 44 ) {
		if ( (*p) > 12 ) {
			if ( 35 <= (*p) && (*p) <= 38 )
				goto st323;
		} else if ( (*p) >= 11 )
			goto st324;
	} else if ( (*p) > 47 ) {
		if ( (*p) < 91 ) {
			if ( 58 <= (*p) && (*p) <= 61 )
				goto st323;
		} else if ( (*p) > 92 ) {
			if ( 124 <= (*p) && (*p) <= 126 )
				goto st323;
		} else
			goto st323;
	} else
		goto st323;
	goto tr1499;
tr1501:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st860;
st860:
	if ( ++p == pe )
		goto _out860;
case 860:
#line 13235 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1324;
		case 9: goto st306;
		case 10: goto st308;
		case 13: goto st309;
		case 32: goto st306;
		case 33: goto tr571;
		case 40: goto tr572;
		case 42: goto tr1472;
		case 45: goto tr1469;
		case 63: goto tr571;
		case 91: goto tr573;
		case 92: goto tr571;
		case 94: goto tr571;
		case 96: goto tr571;
		case 123: goto tr1470;
		case 124: goto tr571;
		case 126: goto tr571;
	}
	if ( (*p) < 35 ) {
		if ( 11 <= (*p) && (*p) <= 12 )
			goto tr1324;
	} else if ( (*p) > 38 ) {
		if ( (*p) > 47 ) {
			if ( 58 <= (*p) && (*p) <= 61 )
				goto tr571;
		} else if ( (*p) >= 44 )
			goto tr571;
	} else
		goto tr571;
	goto tr1467;
tr1309:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 7 "superredcloth_inline.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st861;
st861:
	if ( ++p == pe )
		goto _out861;
case 861:
#line 13279 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1324;
		case 32: goto tr1324;
		case 33: goto tr742;
		case 40: goto tr743;
		case 45: goto tr1503;
		case 63: goto tr742;
		case 91: goto tr744;
		case 92: goto tr742;
		case 94: goto tr742;
		case 96: goto tr742;
		case 123: goto tr1504;
		case 124: goto tr742;
		case 126: goto tr742;
	}
	if ( (*p) < 35 ) {
		if ( 9 <= (*p) && (*p) <= 13 )
			goto tr1324;
	} else if ( (*p) > 38 ) {
		if ( (*p) > 47 ) {
			if ( 58 <= (*p) && (*p) <= 61 )
				goto tr742;
		} else if ( (*p) >= 44 )
			goto tr742;
	} else
		goto tr742;
	goto tr1502;
tr1505:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st862;
tr1502:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st862;
st862:
	if ( ++p == pe )
		goto _out862;
case 862:
#line 13325 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1324;
		case 9: goto st394;
		case 10: goto st396;
		case 13: goto st397;
		case 32: goto st394;
		case 33: goto st395;
		case 40: goto st395;
		case 43: goto tr1506;
		case 45: goto tr1507;
		case 63: goto st395;
		case 94: goto st395;
		case 96: goto st395;
		case 124: goto st395;
		case 126: goto st395;
	}
	if ( (*p) < 44 ) {
		if ( (*p) > 12 ) {
			if ( 35 <= (*p) && (*p) <= 38 )
				goto st395;
		} else if ( (*p) >= 11 )
			goto tr1324;
	} else if ( (*p) > 47 ) {
		if ( (*p) > 61 ) {
			if ( 91 <= (*p) && (*p) <= 92 )
				goto st395;
		} else if ( (*p) >= 58 )
			goto st395;
	} else
		goto st395;
	goto tr1505;
st394:
	if ( ++p == pe )
		goto _out394;
case 394:
	switch( (*p) ) {
		case 0: goto tr4;
		case 9: goto st394;
		case 10: goto st396;
		case 13: goto st397;
		case 32: goto st394;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr4;
	goto st395;
tr742:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st395;
st395:
	if ( ++p == pe )
		goto _out395;
case 395:
#line 13379 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr4;
		case 9: goto st394;
		case 10: goto st396;
		case 13: goto st397;
		case 32: goto st394;
		case 43: goto tr722;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr4;
	goto st395;
st396:
	if ( ++p == pe )
		goto _out396;
case 396:
	switch( (*p) ) {
		case 0: goto tr4;
		case 9: goto st394;
		case 32: goto st394;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto tr4;
	goto st395;
st397:
	if ( ++p == pe )
		goto _out397;
case 397:
	if ( (*p) == 10 )
		goto st396;
	goto tr4;
tr722:
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
	goto st863;
st863:
	if ( ++p == pe )
		goto _out863;
case 863:
#line 13418 "superredcloth_inline.c"
	if ( (*p) == 93 )
		goto tr1509;
	goto tr1508;
tr1506:
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
	goto st864;
st864:
	if ( ++p == pe )
		goto _out864;
case 864:
#line 13430 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1508;
		case 40: goto tr1508;
		case 45: goto st730;
		case 63: goto tr1508;
		case 93: goto tr1510;
		case 96: goto tr1508;
		case 124: goto tr1508;
		case 126: goto tr1508;
	}
	if ( (*p) < 35 ) {
		if ( (*p) > 13 ) {
			if ( 32 <= (*p) && (*p) <= 33 )
				goto tr1508;
		} else if ( (*p) >= 9 )
			goto tr1508;
	} else if ( (*p) > 38 ) {
		if ( (*p) < 58 ) {
			if ( 44 <= (*p) && (*p) <= 47 )
				goto tr1508;
		} else if ( (*p) > 61 ) {
			if ( 91 <= (*p) && (*p) <= 94 )
				goto tr1508;
		} else
			goto tr1508;
	} else
		goto tr1508;
	goto tr1297;
tr1507:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st865;
tr1503:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st865;
st865:
	if ( ++p == pe )
		goto _out865;
case 865:
#line 13477 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1324;
		case 9: goto st394;
		case 10: goto st396;
		case 13: goto st397;
		case 32: goto st394;
		case 33: goto st395;
		case 40: goto st395;
		case 43: goto tr1506;
		case 63: goto st395;
		case 94: goto st395;
		case 96: goto st395;
		case 124: goto st395;
		case 126: goto st395;
	}
	if ( (*p) < 44 ) {
		if ( (*p) > 12 ) {
			if ( 35 <= (*p) && (*p) <= 38 )
				goto st395;
		} else if ( (*p) >= 11 )
			goto tr1324;
	} else if ( (*p) > 47 ) {
		if ( (*p) > 61 ) {
			if ( 91 <= (*p) && (*p) <= 92 )
				goto st395;
		} else if ( (*p) >= 58 )
			goto st395;
	} else
		goto st395;
	goto tr1505;
tr743:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st398;
st398:
	if ( ++p == pe )
		goto _out398;
case 398:
#line 13516 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr724;
		case 9: goto tr725;
		case 10: goto tr726;
		case 13: goto tr727;
		case 32: goto tr725;
		case 35: goto st419;
		case 41: goto st409;
		case 43: goto tr722;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr724;
	goto tr723;
tr723:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st399;
st399:
	if ( ++p == pe )
		goto _out399;
case 399:
#line 13538 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st400;
		case 9: goto st417;
		case 10: goto st418;
		case 13: goto st424;
		case 32: goto st417;
		case 35: goto tr735;
		case 41: goto tr736;
		case 43: goto tr722;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st400;
	goto st399;
tr724:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st400;
st400:
	if ( ++p == pe )
		goto _out400;
case 400:
#line 13560 "superredcloth_inline.c"
	switch( (*p) ) {
		case 35: goto tr737;
		case 41: goto tr738;
	}
	goto st400;
tr737:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st401;
st401:
	if ( ++p == pe )
		goto _out401;
case 401:
#line 13574 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr4;
	goto tr739;
tr739:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st402;
st402:
	if ( ++p == pe )
		goto _out402;
case 402:
#line 13586 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr741;
	goto st402;
tr738:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st403;
tr741:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st403;
tr757:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st403;
tr769:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st403;
tr1549:
#line 7 "superredcloth_inline.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st403;
st403:
	if ( ++p == pe )
		goto _out403;
case 403:
#line 13614 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr4;
		case 32: goto tr4;
		case 40: goto tr743;
		case 91: goto tr744;
		case 123: goto tr745;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr4;
	goto tr742;
tr744:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st404;
st404:
	if ( ++p == pe )
		goto _out404;
case 404:
#line 13633 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr747;
		case 9: goto tr748;
		case 10: goto tr749;
		case 13: goto tr750;
		case 32: goto tr748;
		case 43: goto tr722;
		case 93: goto st395;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr747;
	goto tr746;
tr746:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st405;
st405:
	if ( ++p == pe )
		goto _out405;
case 405:
#line 13654 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st406;
		case 9: goto st407;
		case 10: goto st408;
		case 13: goto st416;
		case 32: goto st407;
		case 43: goto tr722;
		case 93: goto tr756;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st406;
	goto st405;
tr747:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st406;
st406:
	if ( ++p == pe )
		goto _out406;
case 406:
#line 13675 "superredcloth_inline.c"
	if ( (*p) == 93 )
		goto tr757;
	goto st406;
tr748:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st407;
st407:
	if ( ++p == pe )
		goto _out407;
case 407:
#line 13687 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st406;
		case 9: goto st407;
		case 10: goto st408;
		case 13: goto st416;
		case 32: goto st407;
		case 93: goto tr756;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st406;
	goto st405;
tr749:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st408;
st408:
	if ( ++p == pe )
		goto _out408;
case 408:
#line 13707 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st406;
		case 9: goto st407;
		case 32: goto st407;
		case 93: goto tr756;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st406;
	goto st405;
tr736:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st409;
tr778:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st409;
tr756:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st409;
tr768:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st409;
st409:
	if ( ++p == pe )
		goto _out409;
case 409:
#line 13737 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr4;
		case 9: goto st394;
		case 10: goto st396;
		case 13: goto st397;
		case 32: goto st394;
		case 40: goto tr743;
		case 43: goto tr722;
		case 91: goto tr744;
		case 123: goto tr745;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr4;
	goto tr742;
tr745:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st410;
st410:
	if ( ++p == pe )
		goto _out410;
case 410:
#line 13760 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr759;
		case 9: goto tr760;
		case 10: goto tr761;
		case 13: goto tr762;
		case 32: goto tr760;
		case 43: goto tr722;
		case 125: goto st395;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr759;
	goto tr758;
tr758:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st411;
st411:
	if ( ++p == pe )
		goto _out411;
case 411:
#line 13781 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st412;
		case 9: goto st413;
		case 10: goto st414;
		case 13: goto st415;
		case 32: goto st413;
		case 43: goto tr722;
		case 125: goto tr768;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st412;
	goto st411;
tr759:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st412;
st412:
	if ( ++p == pe )
		goto _out412;
case 412:
#line 13802 "superredcloth_inline.c"
	if ( (*p) == 125 )
		goto tr769;
	goto st412;
tr760:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st413;
st413:
	if ( ++p == pe )
		goto _out413;
case 413:
#line 13814 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st412;
		case 9: goto st413;
		case 10: goto st414;
		case 13: goto st415;
		case 32: goto st413;
		case 125: goto tr768;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st412;
	goto st411;
tr761:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st414;
st414:
	if ( ++p == pe )
		goto _out414;
case 414:
#line 13834 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st412;
		case 9: goto st413;
		case 32: goto st413;
		case 125: goto tr768;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st412;
	goto st411;
tr762:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st415;
st415:
	if ( ++p == pe )
		goto _out415;
case 415:
#line 13852 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st414;
		case 125: goto tr769;
	}
	goto st412;
tr750:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st416;
st416:
	if ( ++p == pe )
		goto _out416;
case 416:
#line 13866 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st408;
		case 93: goto tr757;
	}
	goto st406;
tr725:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st417;
st417:
	if ( ++p == pe )
		goto _out417;
case 417:
#line 13880 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st400;
		case 9: goto st417;
		case 10: goto st418;
		case 13: goto st424;
		case 32: goto st417;
		case 35: goto tr735;
		case 41: goto tr736;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st400;
	goto st399;
tr726:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st418;
st418:
	if ( ++p == pe )
		goto _out418;
case 418:
#line 13901 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st400;
		case 9: goto st417;
		case 32: goto st417;
		case 35: goto tr735;
		case 41: goto tr736;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st400;
	goto st399;
tr735:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st419;
st419:
	if ( ++p == pe )
		goto _out419;
case 419:
#line 13920 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr739;
		case 9: goto tr771;
		case 10: goto tr772;
		case 13: goto tr773;
		case 32: goto tr771;
		case 41: goto st395;
		case 43: goto tr722;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr739;
	goto tr770;
tr770:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st420;
st420:
	if ( ++p == pe )
		goto _out420;
case 420:
#line 13941 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st402;
		case 9: goto st421;
		case 10: goto st422;
		case 13: goto st423;
		case 32: goto st421;
		case 41: goto tr778;
		case 43: goto tr722;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st402;
	goto st420;
tr771:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st421;
st421:
	if ( ++p == pe )
		goto _out421;
case 421:
#line 13962 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st402;
		case 9: goto st421;
		case 10: goto st422;
		case 13: goto st423;
		case 32: goto st421;
		case 41: goto tr778;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st402;
	goto st420;
tr772:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st422;
st422:
	if ( ++p == pe )
		goto _out422;
case 422:
#line 13982 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st402;
		case 9: goto st421;
		case 32: goto st421;
		case 41: goto tr778;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st402;
	goto st420;
tr773:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st423;
st423:
	if ( ++p == pe )
		goto _out423;
case 423:
#line 14000 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st422;
		case 41: goto tr741;
	}
	goto st402;
tr727:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st424;
st424:
	if ( ++p == pe )
		goto _out424;
case 424:
#line 14014 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st418;
		case 35: goto tr737;
		case 41: goto tr738;
	}
	goto st400;
tr1504:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st866;
st866:
	if ( ++p == pe )
		goto _out866;
case 866:
#line 14033 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr759;
		case 9: goto tr760;
		case 10: goto tr761;
		case 13: goto tr762;
		case 32: goto tr760;
		case 33: goto tr758;
		case 40: goto tr758;
		case 43: goto tr1506;
		case 45: goto tr1512;
		case 63: goto tr758;
		case 94: goto tr758;
		case 96: goto tr758;
		case 125: goto tr1505;
	}
	if ( (*p) < 44 ) {
		if ( (*p) > 12 ) {
			if ( 35 <= (*p) && (*p) <= 38 )
				goto tr758;
		} else if ( (*p) >= 11 )
			goto tr759;
	} else if ( (*p) > 47 ) {
		if ( (*p) < 91 ) {
			if ( 58 <= (*p) && (*p) <= 61 )
				goto tr758;
		} else if ( (*p) > 92 ) {
			if ( 124 <= (*p) && (*p) <= 126 )
				goto tr758;
		} else
			goto tr758;
	} else
		goto tr758;
	goto tr1511;
tr1513:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st867;
tr1511:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st867;
st867:
	if ( ++p == pe )
		goto _out867;
case 867:
#line 14085 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st412;
		case 9: goto st413;
		case 10: goto st414;
		case 13: goto st415;
		case 32: goto st413;
		case 33: goto st411;
		case 40: goto st411;
		case 43: goto tr1506;
		case 45: goto tr1514;
		case 63: goto st411;
		case 94: goto st411;
		case 96: goto st411;
		case 125: goto tr1515;
	}
	if ( (*p) < 44 ) {
		if ( (*p) > 12 ) {
			if ( 35 <= (*p) && (*p) <= 38 )
				goto st411;
		} else if ( (*p) >= 11 )
			goto st412;
	} else if ( (*p) > 47 ) {
		if ( (*p) < 91 ) {
			if ( 58 <= (*p) && (*p) <= 61 )
				goto st411;
		} else if ( (*p) > 92 ) {
			if ( 124 <= (*p) && (*p) <= 126 )
				goto st411;
		} else
			goto st411;
	} else
		goto st411;
	goto tr1513;
tr1514:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st868;
tr1512:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st868;
st868:
	if ( ++p == pe )
		goto _out868;
case 868:
#line 14137 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st412;
		case 9: goto st413;
		case 10: goto st414;
		case 13: goto st415;
		case 32: goto st413;
		case 33: goto st411;
		case 40: goto st411;
		case 43: goto tr1506;
		case 63: goto st411;
		case 94: goto st411;
		case 96: goto st411;
		case 125: goto tr1515;
	}
	if ( (*p) < 44 ) {
		if ( (*p) > 12 ) {
			if ( 35 <= (*p) && (*p) <= 38 )
				goto st411;
		} else if ( (*p) >= 11 )
			goto st412;
	} else if ( (*p) > 47 ) {
		if ( (*p) < 91 ) {
			if ( 58 <= (*p) && (*p) <= 61 )
				goto st411;
		} else if ( (*p) > 92 ) {
			if ( 124 <= (*p) && (*p) <= 126 )
				goto st411;
		} else
			goto st411;
	} else
		goto st411;
	goto tr1513;
tr1515:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st869;
st869:
	if ( ++p == pe )
		goto _out869;
case 869:
#line 14182 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1324;
		case 9: goto st394;
		case 10: goto st396;
		case 13: goto st397;
		case 32: goto st394;
		case 33: goto tr742;
		case 40: goto tr743;
		case 43: goto tr1506;
		case 45: goto tr1503;
		case 63: goto tr742;
		case 91: goto tr744;
		case 92: goto tr742;
		case 94: goto tr742;
		case 96: goto tr742;
		case 123: goto tr1504;
		case 124: goto tr742;
		case 126: goto tr742;
	}
	if ( (*p) < 35 ) {
		if ( 11 <= (*p) && (*p) <= 12 )
			goto tr1324;
	} else if ( (*p) > 38 ) {
		if ( (*p) > 47 ) {
			if ( 58 <= (*p) && (*p) <= 61 )
				goto tr742;
		} else if ( (*p) >= 44 )
			goto tr742;
	} else
		goto tr742;
	goto tr1502;
tr1310:
#line 7 "superredcloth_inline.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st870;
st870:
	if ( ++p == pe )
		goto _out870;
case 870:
#line 14222 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1330;
		case 32: goto tr1331;
		case 33: goto tr1330;
		case 40: goto tr1330;
		case 45: goto st733;
		case 62: goto st871;
		case 94: goto tr1330;
		case 96: goto tr1330;
		case 124: goto tr1330;
		case 126: goto tr1330;
	}
	if ( (*p) < 44 ) {
		if ( (*p) > 13 ) {
			if ( 35 <= (*p) && (*p) <= 38 )
				goto tr1330;
		} else if ( (*p) >= 9 )
			goto tr1330;
	} else if ( (*p) > 47 ) {
		if ( (*p) > 63 ) {
			if ( 91 <= (*p) && (*p) <= 92 )
				goto tr1330;
		} else if ( (*p) >= 58 )
			goto tr1330;
	} else
		goto tr1330;
	goto tr1297;
st871:
	if ( ++p == pe )
		goto _out871;
case 871:
	switch( (*p) ) {
		case 0: goto tr1336;
		case 32: goto tr1517;
		case 33: goto tr1336;
		case 40: goto tr1336;
		case 45: goto st730;
		case 63: goto tr1336;
		case 94: goto tr1336;
		case 96: goto tr1336;
		case 124: goto tr1336;
		case 126: goto tr1336;
	}
	if ( (*p) < 44 ) {
		if ( (*p) > 13 ) {
			if ( 35 <= (*p) && (*p) <= 38 )
				goto tr1336;
		} else if ( (*p) >= 9 )
			goto tr1336;
	} else if ( (*p) > 47 ) {
		if ( (*p) > 61 ) {
			if ( 91 <= (*p) && (*p) <= 92 )
				goto tr1336;
		} else if ( (*p) >= 58 )
			goto tr1336;
	} else
		goto tr1336;
	goto tr1297;
tr1311:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 7 "superredcloth_inline.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
#line 9 "superredcloth_inline.rl"
	{act = 34;}
	goto st872;
st872:
	if ( ++p == pe )
		goto _out872;
case 872:
#line 14295 "superredcloth_inline.c"
	if ( (*p) == 46 )
		goto st38;
	goto tr1338;
tr1519:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
	goto st873;
tr1312:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 7 "superredcloth_inline.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st873;
st873:
	if ( ++p == pe )
		goto _out873;
case 873:
#line 14315 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1324;
		case 32: goto tr1518;
		case 33: goto tr1324;
		case 40: goto tr1324;
		case 45: goto st730;
		case 63: goto tr1324;
		case 94: goto tr1324;
		case 96: goto tr1324;
		case 124: goto tr1324;
		case 126: goto tr1324;
	}
	if ( (*p) < 44 ) {
		if ( (*p) > 13 ) {
			if ( 35 <= (*p) && (*p) <= 38 )
				goto tr1324;
		} else if ( (*p) >= 9 )
			goto tr1324;
	} else if ( (*p) > 47 ) {
		if ( (*p) < 58 ) {
			if ( 48 <= (*p) && (*p) <= 57 )
				goto tr1519;
		} else if ( (*p) > 61 ) {
			if ( 91 <= (*p) && (*p) <= 92 )
				goto tr1324;
		} else
			goto tr1324;
	} else
		goto tr1324;
	goto tr1297;
tr1518:
#line 82 "superredcloth_inline.rl"
	{ STORE(x) }
	goto st425;
st425:
	if ( ++p == pe )
		goto _out425;
case 425:
#line 14354 "superredcloth_inline.c"
	if ( (*p) == 120 )
		goto st426;
	goto tr326;
st426:
	if ( ++p == pe )
		goto _out426;
case 426:
	if ( (*p) == 32 )
		goto st427;
	goto tr326;
st427:
	if ( ++p == pe )
		goto _out427;
case 427:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr781;
	goto tr326;
tr781:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st874;
st874:
	if ( ++p == pe )
		goto _out874;
case 874:
#line 14380 "superredcloth_inline.c"
	if ( 48 <= (*p) && (*p) <= 57 )
		goto st874;
	goto tr1520;
tr1313:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 9 "superredcloth_inline.rl"
	{act = 34;}
	goto st875;
st875:
	if ( ++p == pe )
		goto _out875;
case 875:
#line 14394 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto st428;
		case 47: goto st434;
		case 58: goto st437;
		case 95: goto st437;
	}
	if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto st437;
	} else if ( (*p) >= 65 )
		goto st437;
	goto tr1338;
st428:
	if ( ++p == pe )
		goto _out428;
case 428:
	if ( (*p) == 45 )
		goto st429;
	goto tr292;
st429:
	if ( ++p == pe )
		goto _out429;
case 429:
	if ( (*p) == 45 )
		goto st430;
	goto tr292;
st430:
	if ( ++p == pe )
		goto _out430;
case 430:
	if ( (*p) == 0 )
		goto tr292;
	goto st431;
st431:
	if ( ++p == pe )
		goto _out431;
case 431:
	switch( (*p) ) {
		case 0: goto tr292;
		case 45: goto st432;
	}
	goto st431;
st432:
	if ( ++p == pe )
		goto _out432;
case 432:
	if ( (*p) == 45 )
		goto st433;
	goto tr292;
st433:
	if ( ++p == pe )
		goto _out433;
case 433:
	if ( (*p) == 62 )
		goto tr787;
	goto tr292;
st434:
	if ( ++p == pe )
		goto _out434;
case 434:
	switch( (*p) ) {
		case 58: goto st435;
		case 95: goto st435;
	}
	if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto st435;
	} else if ( (*p) >= 65 )
		goto st435;
	goto tr292;
st435:
	if ( ++p == pe )
		goto _out435;
case 435:
	switch( (*p) ) {
		case 32: goto st436;
		case 62: goto tr790;
		case 63: goto st435;
		case 95: goto st435;
	}
	if ( (*p) < 48 ) {
		if ( (*p) > 13 ) {
			if ( 45 <= (*p) && (*p) <= 46 )
				goto st435;
		} else if ( (*p) >= 9 )
			goto st436;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st435;
		} else if ( (*p) >= 65 )
			goto st435;
	} else
		goto st435;
	goto tr292;
st436:
	if ( ++p == pe )
		goto _out436;
case 436:
	switch( (*p) ) {
		case 32: goto st436;
		case 62: goto tr790;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto st436;
	goto tr292;
st437:
	if ( ++p == pe )
		goto _out437;
case 437:
	switch( (*p) ) {
		case 32: goto st438;
		case 47: goto st440;
		case 62: goto tr794;
		case 63: goto st437;
		case 95: goto st437;
	}
	if ( (*p) < 45 ) {
		if ( 9 <= (*p) && (*p) <= 13 )
			goto st438;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st437;
		} else if ( (*p) >= 65 )
			goto st437;
	} else
		goto st437;
	goto tr292;
st438:
	if ( ++p == pe )
		goto _out438;
case 438:
	switch( (*p) ) {
		case 32: goto st438;
		case 47: goto st440;
		case 62: goto tr794;
		case 63: goto st439;
		case 95: goto st439;
	}
	if ( (*p) < 45 ) {
		if ( 9 <= (*p) && (*p) <= 13 )
			goto st438;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st439;
		} else if ( (*p) >= 65 )
			goto st439;
	} else
		goto st439;
	goto tr4;
st439:
	if ( ++p == pe )
		goto _out439;
case 439:
	switch( (*p) ) {
		case 32: goto st439;
		case 47: goto st440;
		case 61: goto st441;
		case 62: goto tr794;
		case 63: goto st439;
		case 95: goto st439;
	}
	if ( (*p) < 45 ) {
		if ( 9 <= (*p) && (*p) <= 13 )
			goto st439;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st439;
		} else if ( (*p) >= 65 )
			goto st439;
	} else
		goto st439;
	goto tr4;
st440:
	if ( ++p == pe )
		goto _out440;
case 440:
	if ( (*p) == 62 )
		goto tr797;
	goto tr4;
st441:
	if ( ++p == pe )
		goto _out441;
case 441:
	switch( (*p) ) {
		case 13: goto st488;
		case 32: goto st488;
		case 34: goto st451;
		case 39: goto st466;
		case 47: goto st445;
		case 60: goto tr4;
		case 62: goto tr794;
	}
	if ( (*p) > 10 ) {
		if ( 11 <= (*p) && (*p) <= 12 )
			goto st446;
	} else if ( (*p) >= 9 )
		goto st488;
	goto st442;
st442:
	if ( ++p == pe )
		goto _out442;
case 442:
	switch( (*p) ) {
		case 13: goto st438;
		case 32: goto st438;
		case 47: goto st445;
		case 60: goto tr4;
		case 62: goto tr794;
	}
	if ( (*p) > 10 ) {
		if ( 11 <= (*p) && (*p) <= 12 )
			goto st443;
	} else if ( (*p) >= 9 )
		goto st438;
	goto st442;
st443:
	if ( ++p == pe )
		goto _out443;
case 443:
	switch( (*p) ) {
		case 13: goto st438;
		case 32: goto st438;
		case 47: goto st445;
		case 60: goto tr4;
		case 62: goto tr794;
		case 63: goto st444;
		case 95: goto st444;
	}
	if ( (*p) < 45 ) {
		if ( (*p) > 10 ) {
			if ( 11 <= (*p) && (*p) <= 12 )
				goto st443;
		} else if ( (*p) >= 9 )
			goto st438;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st444;
		} else if ( (*p) >= 65 )
			goto st444;
	} else
		goto st444;
	goto st442;
st444:
	if ( ++p == pe )
		goto _out444;
case 444:
	switch( (*p) ) {
		case 13: goto st439;
		case 32: goto st439;
		case 47: goto st445;
		case 60: goto tr4;
		case 61: goto st446;
		case 62: goto tr794;
		case 63: goto st444;
		case 95: goto st444;
	}
	if ( (*p) < 45 ) {
		if ( (*p) > 10 ) {
			if ( 11 <= (*p) && (*p) <= 12 )
				goto st444;
		} else if ( (*p) >= 9 )
			goto st439;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st444;
		} else if ( (*p) >= 65 )
			goto st444;
	} else
		goto st444;
	goto st442;
st445:
	if ( ++p == pe )
		goto _out445;
case 445:
	switch( (*p) ) {
		case 13: goto st438;
		case 32: goto st438;
		case 47: goto st445;
		case 60: goto tr4;
		case 62: goto tr794;
	}
	if ( (*p) > 10 ) {
		if ( 11 <= (*p) && (*p) <= 12 )
			goto st443;
	} else if ( (*p) >= 9 )
		goto st438;
	goto st442;
st446:
	if ( ++p == pe )
		goto _out446;
case 446:
	switch( (*p) ) {
		case 13: goto st447;
		case 32: goto st447;
		case 34: goto st449;
		case 39: goto st470;
		case 47: goto st445;
		case 60: goto tr4;
		case 62: goto tr794;
	}
	if ( (*p) > 10 ) {
		if ( 11 <= (*p) && (*p) <= 12 )
			goto st448;
	} else if ( (*p) >= 9 )
		goto st447;
	goto st442;
st447:
	if ( ++p == pe )
		goto _out447;
case 447:
	switch( (*p) ) {
		case 13: goto st447;
		case 32: goto st447;
		case 34: goto st451;
		case 39: goto st466;
		case 47: goto st445;
		case 60: goto tr4;
		case 62: goto tr794;
		case 63: goto st444;
		case 95: goto st444;
	}
	if ( (*p) < 45 ) {
		if ( (*p) > 10 ) {
			if ( 11 <= (*p) && (*p) <= 12 )
				goto st448;
		} else if ( (*p) >= 9 )
			goto st447;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st444;
		} else if ( (*p) >= 65 )
			goto st444;
	} else
		goto st444;
	goto st442;
st448:
	if ( ++p == pe )
		goto _out448;
case 448:
	switch( (*p) ) {
		case 13: goto st447;
		case 32: goto st447;
		case 34: goto st449;
		case 39: goto st470;
		case 47: goto st445;
		case 60: goto tr4;
		case 62: goto tr794;
		case 63: goto st444;
		case 95: goto st444;
	}
	if ( (*p) < 45 ) {
		if ( (*p) > 10 ) {
			if ( 11 <= (*p) && (*p) <= 12 )
				goto st448;
		} else if ( (*p) >= 9 )
			goto st447;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st444;
		} else if ( (*p) >= 65 )
			goto st444;
	} else
		goto st444;
	goto st442;
st449:
	if ( ++p == pe )
		goto _out449;
case 449:
	switch( (*p) ) {
		case 13: goto st450;
		case 32: goto st450;
		case 34: goto st443;
		case 47: goto st460;
		case 60: goto st451;
		case 62: goto tr813;
	}
	if ( (*p) > 10 ) {
		if ( 11 <= (*p) && (*p) <= 12 )
			goto st458;
	} else if ( (*p) >= 9 )
		goto st450;
	goto st449;
st450:
	if ( ++p == pe )
		goto _out450;
case 450:
	switch( (*p) ) {
		case 32: goto st450;
		case 34: goto st438;
		case 47: goto st453;
		case 62: goto tr813;
		case 63: goto st452;
		case 95: goto st452;
	}
	if ( (*p) < 45 ) {
		if ( 9 <= (*p) && (*p) <= 13 )
			goto st450;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st452;
		} else if ( (*p) >= 65 )
			goto st452;
	} else
		goto st452;
	goto st451;
st451:
	if ( ++p == pe )
		goto _out451;
case 451:
	if ( (*p) == 34 )
		goto st438;
	goto st451;
st452:
	if ( ++p == pe )
		goto _out452;
case 452:
	switch( (*p) ) {
		case 32: goto st452;
		case 34: goto st438;
		case 47: goto st453;
		case 61: goto st454;
		case 62: goto tr813;
		case 63: goto st452;
		case 95: goto st452;
	}
	if ( (*p) < 45 ) {
		if ( 9 <= (*p) && (*p) <= 13 )
			goto st452;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st452;
		} else if ( (*p) >= 65 )
			goto st452;
	} else
		goto st452;
	goto st451;
st453:
	if ( ++p == pe )
		goto _out453;
case 453:
	switch( (*p) ) {
		case 34: goto st438;
		case 62: goto tr817;
	}
	goto st451;
tr813:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 8 "superredcloth_inline.rl"
	{act = 29;}
	goto st876;
tr817:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 8 "superredcloth_inline.rl"
	{act = 31;}
	goto st876;
st876:
	if ( ++p == pe )
		goto _out876;
case 876:
#line 14866 "superredcloth_inline.c"
	if ( (*p) == 34 )
		goto st438;
	goto st451;
st454:
	if ( ++p == pe )
		goto _out454;
case 454:
	switch( (*p) ) {
		case 13: goto st455;
		case 32: goto st455;
		case 34: goto st450;
		case 39: goto st464;
		case 47: goto st460;
		case 60: goto st451;
		case 62: goto tr813;
	}
	if ( (*p) > 10 ) {
		if ( 11 <= (*p) && (*p) <= 12 )
			goto st461;
	} else if ( (*p) >= 9 )
		goto st455;
	goto st449;
st455:
	if ( ++p == pe )
		goto _out455;
case 455:
	switch( (*p) ) {
		case 13: goto st456;
		case 32: goto st456;
		case 34: goto st450;
		case 39: goto st464;
		case 47: goto st460;
		case 60: goto st451;
		case 62: goto tr813;
	}
	if ( (*p) > 10 ) {
		if ( 11 <= (*p) && (*p) <= 12 )
			goto st457;
	} else if ( (*p) >= 9 )
		goto st456;
	goto st449;
st456:
	if ( ++p == pe )
		goto _out456;
case 456:
	switch( (*p) ) {
		case 13: goto st456;
		case 32: goto st456;
		case 34: goto st450;
		case 39: goto st464;
		case 47: goto st460;
		case 60: goto st451;
		case 62: goto tr813;
		case 63: goto st459;
		case 95: goto st459;
	}
	if ( (*p) < 45 ) {
		if ( (*p) > 10 ) {
			if ( 11 <= (*p) && (*p) <= 12 )
				goto st457;
		} else if ( (*p) >= 9 )
			goto st456;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st459;
		} else if ( (*p) >= 65 )
			goto st459;
	} else
		goto st459;
	goto st449;
st457:
	if ( ++p == pe )
		goto _out457;
case 457:
	switch( (*p) ) {
		case 13: goto st456;
		case 32: goto st456;
		case 34: goto st458;
		case 39: goto st462;
		case 47: goto st460;
		case 60: goto st451;
		case 62: goto tr813;
		case 63: goto st459;
		case 95: goto st459;
	}
	if ( (*p) < 45 ) {
		if ( (*p) > 10 ) {
			if ( 11 <= (*p) && (*p) <= 12 )
				goto st457;
		} else if ( (*p) >= 9 )
			goto st456;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st459;
		} else if ( (*p) >= 65 )
			goto st459;
	} else
		goto st459;
	goto st449;
st458:
	if ( ++p == pe )
		goto _out458;
case 458:
	switch( (*p) ) {
		case 13: goto st450;
		case 32: goto st450;
		case 34: goto st443;
		case 47: goto st460;
		case 60: goto st451;
		case 62: goto tr813;
		case 63: goto st459;
		case 95: goto st459;
	}
	if ( (*p) < 45 ) {
		if ( (*p) > 10 ) {
			if ( 11 <= (*p) && (*p) <= 12 )
				goto st458;
		} else if ( (*p) >= 9 )
			goto st450;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st459;
		} else if ( (*p) >= 65 )
			goto st459;
	} else
		goto st459;
	goto st449;
st459:
	if ( ++p == pe )
		goto _out459;
case 459:
	switch( (*p) ) {
		case 13: goto st452;
		case 32: goto st452;
		case 34: goto st443;
		case 47: goto st460;
		case 60: goto st451;
		case 61: goto st461;
		case 62: goto tr813;
		case 63: goto st459;
		case 95: goto st459;
	}
	if ( (*p) < 45 ) {
		if ( (*p) > 10 ) {
			if ( 11 <= (*p) && (*p) <= 12 )
				goto st459;
		} else if ( (*p) >= 9 )
			goto st452;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st459;
		} else if ( (*p) >= 65 )
			goto st459;
	} else
		goto st459;
	goto st449;
st460:
	if ( ++p == pe )
		goto _out460;
case 460:
	switch( (*p) ) {
		case 13: goto st450;
		case 32: goto st450;
		case 34: goto st443;
		case 47: goto st460;
		case 60: goto st451;
		case 62: goto tr813;
	}
	if ( (*p) > 10 ) {
		if ( 11 <= (*p) && (*p) <= 12 )
			goto st458;
	} else if ( (*p) >= 9 )
		goto st450;
	goto st449;
st461:
	if ( ++p == pe )
		goto _out461;
case 461:
	switch( (*p) ) {
		case 13: goto st456;
		case 32: goto st456;
		case 34: goto st458;
		case 39: goto st462;
		case 47: goto st460;
		case 60: goto st451;
		case 62: goto tr813;
	}
	if ( (*p) > 10 ) {
		if ( 11 <= (*p) && (*p) <= 12 )
			goto st457;
	} else if ( (*p) >= 9 )
		goto st456;
	goto st449;
st462:
	if ( ++p == pe )
		goto _out462;
case 462:
	switch( (*p) ) {
		case 13: goto st463;
		case 32: goto st463;
		case 34: goto st471;
		case 39: goto st458;
		case 47: goto st486;
		case 60: goto st464;
		case 62: goto tr829;
	}
	if ( (*p) > 10 ) {
		if ( 11 <= (*p) && (*p) <= 12 )
			goto st484;
	} else if ( (*p) >= 9 )
		goto st463;
	goto st462;
st463:
	if ( ++p == pe )
		goto _out463;
case 463:
	switch( (*p) ) {
		case 32: goto st463;
		case 34: goto st465;
		case 39: goto st450;
		case 47: goto st479;
		case 62: goto tr829;
		case 63: goto st478;
		case 95: goto st478;
	}
	if ( (*p) < 45 ) {
		if ( 9 <= (*p) && (*p) <= 13 )
			goto st463;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st478;
		} else if ( (*p) >= 65 )
			goto st478;
	} else
		goto st478;
	goto st464;
st464:
	if ( ++p == pe )
		goto _out464;
case 464:
	switch( (*p) ) {
		case 34: goto st465;
		case 39: goto st450;
	}
	goto st464;
st465:
	if ( ++p == pe )
		goto _out465;
case 465:
	switch( (*p) ) {
		case 32: goto st465;
		case 39: goto st438;
		case 47: goto st468;
		case 62: goto tr835;
		case 63: goto st467;
		case 95: goto st467;
	}
	if ( (*p) < 45 ) {
		if ( 9 <= (*p) && (*p) <= 13 )
			goto st465;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st467;
		} else if ( (*p) >= 65 )
			goto st467;
	} else
		goto st467;
	goto st466;
st466:
	if ( ++p == pe )
		goto _out466;
case 466:
	if ( (*p) == 39 )
		goto st438;
	goto st466;
st467:
	if ( ++p == pe )
		goto _out467;
case 467:
	switch( (*p) ) {
		case 32: goto st467;
		case 39: goto st438;
		case 47: goto st468;
		case 61: goto st469;
		case 62: goto tr835;
		case 63: goto st467;
		case 95: goto st467;
	}
	if ( (*p) < 45 ) {
		if ( 9 <= (*p) && (*p) <= 13 )
			goto st467;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st467;
		} else if ( (*p) >= 65 )
			goto st467;
	} else
		goto st467;
	goto st466;
st468:
	if ( ++p == pe )
		goto _out468;
case 468:
	switch( (*p) ) {
		case 39: goto st438;
		case 62: goto tr837;
	}
	goto st466;
tr835:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 8 "superredcloth_inline.rl"
	{act = 29;}
	goto st877;
tr837:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 8 "superredcloth_inline.rl"
	{act = 31;}
	goto st877;
st877:
	if ( ++p == pe )
		goto _out877;
case 877:
#line 15198 "superredcloth_inline.c"
	if ( (*p) == 39 )
		goto st438;
	goto st466;
st469:
	if ( ++p == pe )
		goto _out469;
case 469:
	switch( (*p) ) {
		case 13: goto st477;
		case 32: goto st477;
		case 34: goto st464;
		case 39: goto st465;
		case 47: goto st473;
		case 60: goto st466;
		case 62: goto tr835;
	}
	if ( (*p) > 10 ) {
		if ( 11 <= (*p) && (*p) <= 12 )
			goto st474;
	} else if ( (*p) >= 9 )
		goto st477;
	goto st470;
st470:
	if ( ++p == pe )
		goto _out470;
case 470:
	switch( (*p) ) {
		case 13: goto st465;
		case 32: goto st465;
		case 39: goto st443;
		case 47: goto st473;
		case 60: goto st466;
		case 62: goto tr835;
	}
	if ( (*p) > 10 ) {
		if ( 11 <= (*p) && (*p) <= 12 )
			goto st471;
	} else if ( (*p) >= 9 )
		goto st465;
	goto st470;
st471:
	if ( ++p == pe )
		goto _out471;
case 471:
	switch( (*p) ) {
		case 13: goto st465;
		case 32: goto st465;
		case 39: goto st443;
		case 47: goto st473;
		case 60: goto st466;
		case 62: goto tr835;
		case 63: goto st472;
		case 95: goto st472;
	}
	if ( (*p) < 45 ) {
		if ( (*p) > 10 ) {
			if ( 11 <= (*p) && (*p) <= 12 )
				goto st471;
		} else if ( (*p) >= 9 )
			goto st465;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st472;
		} else if ( (*p) >= 65 )
			goto st472;
	} else
		goto st472;
	goto st470;
st472:
	if ( ++p == pe )
		goto _out472;
case 472:
	switch( (*p) ) {
		case 13: goto st467;
		case 32: goto st467;
		case 39: goto st443;
		case 47: goto st473;
		case 60: goto st466;
		case 61: goto st474;
		case 62: goto tr835;
		case 63: goto st472;
		case 95: goto st472;
	}
	if ( (*p) < 45 ) {
		if ( (*p) > 10 ) {
			if ( 11 <= (*p) && (*p) <= 12 )
				goto st472;
		} else if ( (*p) >= 9 )
			goto st467;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st472;
		} else if ( (*p) >= 65 )
			goto st472;
	} else
		goto st472;
	goto st470;
st473:
	if ( ++p == pe )
		goto _out473;
case 473:
	switch( (*p) ) {
		case 13: goto st465;
		case 32: goto st465;
		case 39: goto st443;
		case 47: goto st473;
		case 60: goto st466;
		case 62: goto tr835;
	}
	if ( (*p) > 10 ) {
		if ( 11 <= (*p) && (*p) <= 12 )
			goto st471;
	} else if ( (*p) >= 9 )
		goto st465;
	goto st470;
st474:
	if ( ++p == pe )
		goto _out474;
case 474:
	switch( (*p) ) {
		case 13: goto st475;
		case 32: goto st475;
		case 34: goto st462;
		case 39: goto st471;
		case 47: goto st473;
		case 60: goto st466;
		case 62: goto tr835;
	}
	if ( (*p) > 10 ) {
		if ( 11 <= (*p) && (*p) <= 12 )
			goto st476;
	} else if ( (*p) >= 9 )
		goto st475;
	goto st470;
st475:
	if ( ++p == pe )
		goto _out475;
case 475:
	switch( (*p) ) {
		case 13: goto st475;
		case 32: goto st475;
		case 34: goto st464;
		case 39: goto st465;
		case 47: goto st473;
		case 60: goto st466;
		case 62: goto tr835;
		case 63: goto st472;
		case 95: goto st472;
	}
	if ( (*p) < 45 ) {
		if ( (*p) > 10 ) {
			if ( 11 <= (*p) && (*p) <= 12 )
				goto st476;
		} else if ( (*p) >= 9 )
			goto st475;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st472;
		} else if ( (*p) >= 65 )
			goto st472;
	} else
		goto st472;
	goto st470;
st476:
	if ( ++p == pe )
		goto _out476;
case 476:
	switch( (*p) ) {
		case 13: goto st475;
		case 32: goto st475;
		case 34: goto st462;
		case 39: goto st471;
		case 47: goto st473;
		case 60: goto st466;
		case 62: goto tr835;
		case 63: goto st472;
		case 95: goto st472;
	}
	if ( (*p) < 45 ) {
		if ( (*p) > 10 ) {
			if ( 11 <= (*p) && (*p) <= 12 )
				goto st476;
		} else if ( (*p) >= 9 )
			goto st475;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st472;
		} else if ( (*p) >= 65 )
			goto st472;
	} else
		goto st472;
	goto st470;
st477:
	if ( ++p == pe )
		goto _out477;
case 477:
	switch( (*p) ) {
		case 13: goto st475;
		case 32: goto st475;
		case 34: goto st464;
		case 39: goto st465;
		case 47: goto st473;
		case 60: goto st466;
		case 62: goto tr835;
	}
	if ( (*p) > 10 ) {
		if ( 11 <= (*p) && (*p) <= 12 )
			goto st476;
	} else if ( (*p) >= 9 )
		goto st475;
	goto st470;
st478:
	if ( ++p == pe )
		goto _out478;
case 478:
	switch( (*p) ) {
		case 32: goto st478;
		case 34: goto st465;
		case 39: goto st450;
		case 47: goto st479;
		case 61: goto st480;
		case 62: goto tr829;
		case 63: goto st478;
		case 95: goto st478;
	}
	if ( (*p) < 45 ) {
		if ( 9 <= (*p) && (*p) <= 13 )
			goto st478;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st478;
		} else if ( (*p) >= 65 )
			goto st478;
	} else
		goto st478;
	goto st464;
st479:
	if ( ++p == pe )
		goto _out479;
case 479:
	switch( (*p) ) {
		case 34: goto st465;
		case 39: goto st450;
		case 62: goto tr845;
	}
	goto st464;
tr829:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 8 "superredcloth_inline.rl"
	{act = 29;}
	goto st878;
tr845:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 8 "superredcloth_inline.rl"
	{act = 31;}
	goto st878;
st878:
	if ( ++p == pe )
		goto _out878;
case 878:
#line 15466 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto st465;
		case 39: goto st450;
	}
	goto st464;
st480:
	if ( ++p == pe )
		goto _out480;
case 480:
	switch( (*p) ) {
		case 13: goto st481;
		case 32: goto st481;
		case 34: goto st463;
		case 39: goto st463;
		case 47: goto st486;
		case 60: goto st464;
		case 62: goto tr829;
	}
	if ( (*p) > 10 ) {
		if ( 11 <= (*p) && (*p) <= 12 )
			goto st487;
	} else if ( (*p) >= 9 )
		goto st481;
	goto st462;
st481:
	if ( ++p == pe )
		goto _out481;
case 481:
	switch( (*p) ) {
		case 13: goto st482;
		case 32: goto st482;
		case 34: goto st463;
		case 39: goto st463;
		case 47: goto st486;
		case 60: goto st464;
		case 62: goto tr829;
	}
	if ( (*p) > 10 ) {
		if ( 11 <= (*p) && (*p) <= 12 )
			goto st483;
	} else if ( (*p) >= 9 )
		goto st482;
	goto st462;
st482:
	if ( ++p == pe )
		goto _out482;
case 482:
	switch( (*p) ) {
		case 13: goto st482;
		case 32: goto st482;
		case 34: goto st463;
		case 39: goto st463;
		case 47: goto st486;
		case 60: goto st464;
		case 62: goto tr829;
		case 63: goto st485;
		case 95: goto st485;
	}
	if ( (*p) < 45 ) {
		if ( (*p) > 10 ) {
			if ( 11 <= (*p) && (*p) <= 12 )
				goto st483;
		} else if ( (*p) >= 9 )
			goto st482;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st485;
		} else if ( (*p) >= 65 )
			goto st485;
	} else
		goto st485;
	goto st462;
st483:
	if ( ++p == pe )
		goto _out483;
case 483:
	switch( (*p) ) {
		case 13: goto st482;
		case 32: goto st482;
		case 34: goto st484;
		case 39: goto st484;
		case 47: goto st486;
		case 60: goto st464;
		case 62: goto tr829;
		case 63: goto st485;
		case 95: goto st485;
	}
	if ( (*p) < 45 ) {
		if ( (*p) > 10 ) {
			if ( 11 <= (*p) && (*p) <= 12 )
				goto st483;
		} else if ( (*p) >= 9 )
			goto st482;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st485;
		} else if ( (*p) >= 65 )
			goto st485;
	} else
		goto st485;
	goto st462;
st484:
	if ( ++p == pe )
		goto _out484;
case 484:
	switch( (*p) ) {
		case 13: goto st463;
		case 32: goto st463;
		case 34: goto st471;
		case 39: goto st458;
		case 47: goto st486;
		case 60: goto st464;
		case 62: goto tr829;
		case 63: goto st485;
		case 95: goto st485;
	}
	if ( (*p) < 45 ) {
		if ( (*p) > 10 ) {
			if ( 11 <= (*p) && (*p) <= 12 )
				goto st484;
		} else if ( (*p) >= 9 )
			goto st463;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st485;
		} else if ( (*p) >= 65 )
			goto st485;
	} else
		goto st485;
	goto st462;
st485:
	if ( ++p == pe )
		goto _out485;
case 485:
	switch( (*p) ) {
		case 13: goto st478;
		case 32: goto st478;
		case 34: goto st471;
		case 39: goto st458;
		case 47: goto st486;
		case 60: goto st464;
		case 61: goto st487;
		case 62: goto tr829;
		case 63: goto st485;
		case 95: goto st485;
	}
	if ( (*p) < 45 ) {
		if ( (*p) > 10 ) {
			if ( 11 <= (*p) && (*p) <= 12 )
				goto st485;
		} else if ( (*p) >= 9 )
			goto st478;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st485;
		} else if ( (*p) >= 65 )
			goto st485;
	} else
		goto st485;
	goto st462;
st486:
	if ( ++p == pe )
		goto _out486;
case 486:
	switch( (*p) ) {
		case 13: goto st463;
		case 32: goto st463;
		case 34: goto st471;
		case 39: goto st458;
		case 47: goto st486;
		case 60: goto st464;
		case 62: goto tr829;
	}
	if ( (*p) > 10 ) {
		if ( 11 <= (*p) && (*p) <= 12 )
			goto st484;
	} else if ( (*p) >= 9 )
		goto st463;
	goto st462;
st487:
	if ( ++p == pe )
		goto _out487;
case 487:
	switch( (*p) ) {
		case 13: goto st482;
		case 32: goto st482;
		case 34: goto st484;
		case 39: goto st484;
		case 47: goto st486;
		case 60: goto st464;
		case 62: goto tr829;
	}
	if ( (*p) > 10 ) {
		if ( 11 <= (*p) && (*p) <= 12 )
			goto st483;
	} else if ( (*p) >= 9 )
		goto st482;
	goto st462;
st488:
	if ( ++p == pe )
		goto _out488;
case 488:
	switch( (*p) ) {
		case 13: goto st447;
		case 32: goto st447;
		case 34: goto st451;
		case 39: goto st466;
		case 47: goto st445;
		case 60: goto tr4;
		case 62: goto tr794;
	}
	if ( (*p) > 10 ) {
		if ( 11 <= (*p) && (*p) <= 12 )
			goto st448;
	} else if ( (*p) >= 9 )
		goto st447;
	goto st442;
tr1314:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 7 "superredcloth_inline.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st879;
st879:
	if ( ++p == pe )
		goto _out879;
case 879:
#line 15698 "superredcloth_inline.c"
	if ( (*p) == 61 )
		goto st489;
	goto tr1338;
st489:
	if ( ++p == pe )
		goto _out489;
case 489:
	switch( (*p) ) {
		case 0: goto tr292;
		case 32: goto tr292;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr292;
	goto tr851;
tr851:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st490;
st490:
	if ( ++p == pe )
		goto _out490;
case 490:
#line 15721 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr292;
		case 9: goto st491;
		case 10: goto st492;
		case 13: goto st493;
		case 32: goto st491;
		case 61: goto tr856;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr292;
	goto st490;
st491:
	if ( ++p == pe )
		goto _out491;
case 491:
	switch( (*p) ) {
		case 0: goto tr292;
		case 9: goto st491;
		case 10: goto st492;
		case 13: goto st493;
		case 32: goto st491;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr292;
	goto st490;
st492:
	if ( ++p == pe )
		goto _out492;
case 492:
	switch( (*p) ) {
		case 0: goto tr292;
		case 9: goto st491;
		case 32: goto st491;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto tr292;
	goto st490;
st493:
	if ( ++p == pe )
		goto _out493;
case 493:
	if ( (*p) == 10 )
		goto st492;
	goto tr292;
tr856:
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
	goto st494;
st494:
	if ( ++p == pe )
		goto _out494;
case 494:
#line 15774 "superredcloth_inline.c"
	if ( (*p) == 61 )
		goto st880;
	goto tr292;
st880:
	if ( ++p == pe )
		goto _out880;
case 880:
	if ( (*p) == 93 )
		goto tr1525;
	goto tr1524;
tr1315:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 7 "superredcloth_inline.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st881;
st881:
	if ( ++p == pe )
		goto _out881;
case 881:
#line 15795 "superredcloth_inline.c"
	if ( (*p) == 63 )
		goto st495;
	goto tr1338;
tr883:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st495;
tr886:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st495;
tr907:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st495;
tr919:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st495;
st495:
	if ( ++p == pe )
		goto _out495;
case 495:
#line 15819 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr292;
		case 32: goto tr292;
		case 40: goto tr859;
		case 91: goto tr860;
		case 123: goto tr861;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr292;
	goto tr858;
tr858:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st496;
st496:
	if ( ++p == pe )
		goto _out496;
case 496:
#line 15838 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr292;
		case 9: goto st497;
		case 10: goto st498;
		case 13: goto st499;
		case 32: goto st497;
		case 63: goto tr866;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr292;
	goto st496;
st497:
	if ( ++p == pe )
		goto _out497;
case 497:
	switch( (*p) ) {
		case 0: goto tr292;
		case 9: goto st497;
		case 10: goto st498;
		case 13: goto st499;
		case 32: goto st497;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr292;
	goto st496;
st498:
	if ( ++p == pe )
		goto _out498;
case 498:
	switch( (*p) ) {
		case 0: goto tr292;
		case 9: goto st497;
		case 32: goto st497;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto tr292;
	goto st496;
st499:
	if ( ++p == pe )
		goto _out499;
case 499:
	if ( (*p) == 10 )
		goto st498;
	goto tr292;
tr866:
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
	goto st500;
st500:
	if ( ++p == pe )
		goto _out500;
case 500:
#line 15891 "superredcloth_inline.c"
	if ( (*p) == 63 )
		goto st882;
	goto tr292;
st882:
	if ( ++p == pe )
		goto _out882;
case 882:
	if ( (*p) == 93 )
		goto tr1527;
	goto tr1526;
tr859:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st501;
st501:
	if ( ++p == pe )
		goto _out501;
case 501:
#line 15910 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr869;
		case 9: goto tr870;
		case 10: goto tr871;
		case 13: goto tr872;
		case 32: goto tr870;
		case 35: goto st508;
		case 41: goto st512;
		case 63: goto tr866;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr869;
	goto tr868;
tr868:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st502;
st502:
	if ( ++p == pe )
		goto _out502;
case 502:
#line 15932 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st503;
		case 9: goto st506;
		case 10: goto st507;
		case 13: goto st526;
		case 32: goto st506;
		case 35: goto tr880;
		case 41: goto tr881;
		case 63: goto tr866;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st503;
	goto st502;
tr869:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st503;
st503:
	if ( ++p == pe )
		goto _out503;
case 503:
#line 15954 "superredcloth_inline.c"
	switch( (*p) ) {
		case 35: goto tr882;
		case 41: goto tr883;
	}
	goto st503;
tr882:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st504;
st504:
	if ( ++p == pe )
		goto _out504;
case 504:
#line 15968 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr292;
	goto tr884;
tr884:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st505;
st505:
	if ( ++p == pe )
		goto _out505;
case 505:
#line 15980 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr886;
	goto st505;
tr870:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st506;
st506:
	if ( ++p == pe )
		goto _out506;
case 506:
#line 15992 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st503;
		case 9: goto st506;
		case 10: goto st507;
		case 13: goto st526;
		case 32: goto st506;
		case 35: goto tr880;
		case 41: goto tr881;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st503;
	goto st502;
tr871:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st507;
st507:
	if ( ++p == pe )
		goto _out507;
case 507:
#line 16013 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st503;
		case 9: goto st506;
		case 32: goto st506;
		case 35: goto tr880;
		case 41: goto tr881;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st503;
	goto st502;
tr880:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st508;
st508:
	if ( ++p == pe )
		goto _out508;
case 508:
#line 16032 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr884;
		case 9: goto tr888;
		case 10: goto tr889;
		case 13: goto tr890;
		case 32: goto tr888;
		case 41: goto st496;
		case 63: goto tr866;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr884;
	goto tr887;
tr887:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st509;
st509:
	if ( ++p == pe )
		goto _out509;
case 509:
#line 16053 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st505;
		case 9: goto st510;
		case 10: goto st511;
		case 13: goto st525;
		case 32: goto st510;
		case 41: goto tr895;
		case 63: goto tr866;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st505;
	goto st509;
tr888:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st510;
st510:
	if ( ++p == pe )
		goto _out510;
case 510:
#line 16074 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st505;
		case 9: goto st510;
		case 10: goto st511;
		case 13: goto st525;
		case 32: goto st510;
		case 41: goto tr895;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st505;
	goto st509;
tr889:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st511;
st511:
	if ( ++p == pe )
		goto _out511;
case 511:
#line 16094 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st505;
		case 9: goto st510;
		case 32: goto st510;
		case 41: goto tr895;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st505;
	goto st509;
tr881:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st512;
tr895:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st512;
tr906:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st512;
tr918:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st512;
st512:
	if ( ++p == pe )
		goto _out512;
case 512:
#line 16124 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr292;
		case 9: goto st497;
		case 10: goto st498;
		case 13: goto st499;
		case 32: goto st497;
		case 40: goto tr859;
		case 63: goto tr866;
		case 91: goto tr860;
		case 123: goto tr861;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr292;
	goto tr858;
tr860:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st513;
st513:
	if ( ++p == pe )
		goto _out513;
case 513:
#line 16147 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr897;
		case 9: goto tr898;
		case 10: goto tr899;
		case 13: goto tr900;
		case 32: goto tr898;
		case 63: goto tr866;
		case 93: goto st496;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr897;
	goto tr896;
tr896:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st514;
st514:
	if ( ++p == pe )
		goto _out514;
case 514:
#line 16168 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st515;
		case 9: goto st516;
		case 10: goto st517;
		case 13: goto st518;
		case 32: goto st516;
		case 63: goto tr866;
		case 93: goto tr906;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st515;
	goto st514;
tr897:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st515;
st515:
	if ( ++p == pe )
		goto _out515;
case 515:
#line 16189 "superredcloth_inline.c"
	if ( (*p) == 93 )
		goto tr907;
	goto st515;
tr898:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st516;
st516:
	if ( ++p == pe )
		goto _out516;
case 516:
#line 16201 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st515;
		case 9: goto st516;
		case 10: goto st517;
		case 13: goto st518;
		case 32: goto st516;
		case 93: goto tr906;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st515;
	goto st514;
tr899:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st517;
st517:
	if ( ++p == pe )
		goto _out517;
case 517:
#line 16221 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st515;
		case 9: goto st516;
		case 32: goto st516;
		case 93: goto tr906;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st515;
	goto st514;
tr900:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st518;
st518:
	if ( ++p == pe )
		goto _out518;
case 518:
#line 16239 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st517;
		case 93: goto tr907;
	}
	goto st515;
tr861:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st519;
st519:
	if ( ++p == pe )
		goto _out519;
case 519:
#line 16253 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr909;
		case 9: goto tr910;
		case 10: goto tr911;
		case 13: goto tr912;
		case 32: goto tr910;
		case 63: goto tr866;
		case 125: goto st496;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr909;
	goto tr908;
tr908:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st520;
st520:
	if ( ++p == pe )
		goto _out520;
case 520:
#line 16274 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st521;
		case 9: goto st522;
		case 10: goto st523;
		case 13: goto st524;
		case 32: goto st522;
		case 63: goto tr866;
		case 125: goto tr918;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st521;
	goto st520;
tr909:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st521;
st521:
	if ( ++p == pe )
		goto _out521;
case 521:
#line 16295 "superredcloth_inline.c"
	if ( (*p) == 125 )
		goto tr919;
	goto st521;
tr910:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st522;
st522:
	if ( ++p == pe )
		goto _out522;
case 522:
#line 16307 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st521;
		case 9: goto st522;
		case 10: goto st523;
		case 13: goto st524;
		case 32: goto st522;
		case 125: goto tr918;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st521;
	goto st520;
tr911:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st523;
st523:
	if ( ++p == pe )
		goto _out523;
case 523:
#line 16327 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st521;
		case 9: goto st522;
		case 32: goto st522;
		case 125: goto tr918;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st521;
	goto st520;
tr912:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st524;
st524:
	if ( ++p == pe )
		goto _out524;
case 524:
#line 16345 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st523;
		case 125: goto tr919;
	}
	goto st521;
tr890:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st525;
st525:
	if ( ++p == pe )
		goto _out525;
case 525:
#line 16359 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st511;
		case 41: goto tr886;
	}
	goto st505;
tr872:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st526;
st526:
	if ( ++p == pe )
		goto _out526;
case 526:
#line 16373 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st507;
		case 35: goto tr882;
		case 41: goto tr883;
	}
	goto st503;
tr1316:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 7 "superredcloth_inline.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st883;
st883:
	if ( ++p == pe )
		goto _out883;
case 883:
#line 16392 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1324;
		case 32: goto tr1324;
		case 33: goto tr944;
		case 40: goto tr945;
		case 45: goto tr1529;
		case 63: goto tr944;
		case 91: goto tr946;
		case 92: goto tr944;
		case 94: goto tr944;
		case 96: goto tr944;
		case 123: goto tr1530;
		case 124: goto tr944;
		case 126: goto tr944;
	}
	if ( (*p) < 35 ) {
		if ( 9 <= (*p) && (*p) <= 13 )
			goto tr1324;
	} else if ( (*p) > 38 ) {
		if ( (*p) > 47 ) {
			if ( 58 <= (*p) && (*p) <= 61 )
				goto tr944;
		} else if ( (*p) >= 44 )
			goto tr944;
	} else
		goto tr944;
	goto tr1528;
tr1531:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st884;
tr1528:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st884;
st884:
	if ( ++p == pe )
		goto _out884;
case 884:
#line 16438 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1324;
		case 9: goto st527;
		case 10: goto st529;
		case 13: goto st530;
		case 32: goto st527;
		case 33: goto st528;
		case 40: goto st528;
		case 45: goto tr1532;
		case 63: goto st528;
		case 64: goto tr1533;
		case 94: goto st528;
		case 96: goto st528;
		case 124: goto st528;
		case 126: goto st528;
	}
	if ( (*p) < 44 ) {
		if ( (*p) > 12 ) {
			if ( 35 <= (*p) && (*p) <= 38 )
				goto st528;
		} else if ( (*p) >= 11 )
			goto tr1324;
	} else if ( (*p) > 47 ) {
		if ( (*p) > 61 ) {
			if ( 91 <= (*p) && (*p) <= 92 )
				goto st528;
		} else if ( (*p) >= 58 )
			goto st528;
	} else
		goto st528;
	goto tr1531;
st527:
	if ( ++p == pe )
		goto _out527;
case 527:
	switch( (*p) ) {
		case 0: goto tr4;
		case 9: goto st527;
		case 10: goto st529;
		case 13: goto st530;
		case 32: goto st527;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr4;
	goto st528;
tr944:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st528;
st528:
	if ( ++p == pe )
		goto _out528;
case 528:
#line 16492 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr4;
		case 9: goto st527;
		case 10: goto st529;
		case 13: goto st530;
		case 32: goto st527;
		case 64: goto tr924;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr4;
	goto st528;
st529:
	if ( ++p == pe )
		goto _out529;
case 529:
	switch( (*p) ) {
		case 0: goto tr4;
		case 9: goto st527;
		case 32: goto st527;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto tr4;
	goto st528;
st530:
	if ( ++p == pe )
		goto _out530;
case 530:
	if ( (*p) == 10 )
		goto st529;
	goto tr4;
tr924:
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
	goto st885;
st885:
	if ( ++p == pe )
		goto _out885;
case 885:
#line 16531 "superredcloth_inline.c"
	if ( (*p) == 93 )
		goto tr1535;
	goto tr1534;
tr1532:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st886;
tr1529:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st886;
st886:
	if ( ++p == pe )
		goto _out886;
case 886:
#line 16553 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1324;
		case 9: goto st527;
		case 10: goto st529;
		case 13: goto st530;
		case 32: goto st527;
		case 33: goto st528;
		case 40: goto st528;
		case 63: goto st528;
		case 64: goto tr1533;
		case 94: goto st528;
		case 96: goto st528;
		case 124: goto st528;
		case 126: goto st528;
	}
	if ( (*p) < 44 ) {
		if ( (*p) > 12 ) {
			if ( 35 <= (*p) && (*p) <= 38 )
				goto st528;
		} else if ( (*p) >= 11 )
			goto tr1324;
	} else if ( (*p) > 47 ) {
		if ( (*p) > 61 ) {
			if ( 91 <= (*p) && (*p) <= 92 )
				goto st528;
		} else if ( (*p) >= 58 )
			goto st528;
	} else
		goto st528;
	goto tr1531;
tr1533:
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
	goto st887;
st887:
	if ( ++p == pe )
		goto _out887;
case 887:
#line 16592 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1534;
		case 40: goto tr1534;
		case 45: goto st730;
		case 63: goto tr1534;
		case 93: goto tr1536;
		case 96: goto tr1534;
		case 124: goto tr1534;
		case 126: goto tr1534;
	}
	if ( (*p) < 35 ) {
		if ( (*p) > 13 ) {
			if ( 32 <= (*p) && (*p) <= 33 )
				goto tr1534;
		} else if ( (*p) >= 9 )
			goto tr1534;
	} else if ( (*p) > 38 ) {
		if ( (*p) < 58 ) {
			if ( 44 <= (*p) && (*p) <= 47 )
				goto tr1534;
		} else if ( (*p) > 61 ) {
			if ( 91 <= (*p) && (*p) <= 94 )
				goto tr1534;
		} else
			goto tr1534;
	} else
		goto tr1534;
	goto tr1297;
tr945:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st531;
st531:
	if ( ++p == pe )
		goto _out531;
case 531:
#line 16629 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr926;
		case 9: goto tr927;
		case 10: goto tr928;
		case 13: goto tr929;
		case 32: goto tr927;
		case 35: goto st552;
		case 41: goto st542;
		case 64: goto tr924;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr926;
	goto tr925;
tr925:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st532;
st532:
	if ( ++p == pe )
		goto _out532;
case 532:
#line 16651 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st533;
		case 9: goto st550;
		case 10: goto st551;
		case 13: goto st557;
		case 32: goto st550;
		case 35: goto tr937;
		case 41: goto tr938;
		case 64: goto tr924;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st533;
	goto st532;
tr926:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st533;
st533:
	if ( ++p == pe )
		goto _out533;
case 533:
#line 16673 "superredcloth_inline.c"
	switch( (*p) ) {
		case 35: goto tr939;
		case 41: goto tr940;
	}
	goto st533;
tr939:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st534;
st534:
	if ( ++p == pe )
		goto _out534;
case 534:
#line 16687 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr4;
	goto tr941;
tr941:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st535;
st535:
	if ( ++p == pe )
		goto _out535;
case 535:
#line 16699 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr943;
	goto st535;
tr940:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st536;
tr943:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st536;
tr959:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st536;
tr971:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st536;
tr1554:
#line 7 "superredcloth_inline.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st536;
st536:
	if ( ++p == pe )
		goto _out536;
case 536:
#line 16727 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr4;
		case 32: goto tr4;
		case 40: goto tr945;
		case 91: goto tr946;
		case 123: goto tr947;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr4;
	goto tr944;
tr946:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st537;
st537:
	if ( ++p == pe )
		goto _out537;
case 537:
#line 16746 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr949;
		case 9: goto tr950;
		case 10: goto tr951;
		case 13: goto tr952;
		case 32: goto tr950;
		case 64: goto tr924;
		case 93: goto st528;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr949;
	goto tr948;
tr948:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st538;
st538:
	if ( ++p == pe )
		goto _out538;
case 538:
#line 16767 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st539;
		case 9: goto st540;
		case 10: goto st541;
		case 13: goto st549;
		case 32: goto st540;
		case 64: goto tr924;
		case 93: goto tr958;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st539;
	goto st538;
tr949:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st539;
st539:
	if ( ++p == pe )
		goto _out539;
case 539:
#line 16788 "superredcloth_inline.c"
	if ( (*p) == 93 )
		goto tr959;
	goto st539;
tr950:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st540;
st540:
	if ( ++p == pe )
		goto _out540;
case 540:
#line 16800 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st539;
		case 9: goto st540;
		case 10: goto st541;
		case 13: goto st549;
		case 32: goto st540;
		case 93: goto tr958;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st539;
	goto st538;
tr951:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st541;
st541:
	if ( ++p == pe )
		goto _out541;
case 541:
#line 16820 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st539;
		case 9: goto st540;
		case 32: goto st540;
		case 93: goto tr958;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st539;
	goto st538;
tr938:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st542;
tr980:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st542;
tr958:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st542;
tr970:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st542;
st542:
	if ( ++p == pe )
		goto _out542;
case 542:
#line 16850 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr4;
		case 9: goto st527;
		case 10: goto st529;
		case 13: goto st530;
		case 32: goto st527;
		case 40: goto tr945;
		case 64: goto tr924;
		case 91: goto tr946;
		case 123: goto tr947;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr4;
	goto tr944;
tr947:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st543;
st543:
	if ( ++p == pe )
		goto _out543;
case 543:
#line 16873 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr961;
		case 9: goto tr962;
		case 10: goto tr963;
		case 13: goto tr964;
		case 32: goto tr962;
		case 64: goto tr924;
		case 125: goto st528;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr961;
	goto tr960;
tr960:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st544;
st544:
	if ( ++p == pe )
		goto _out544;
case 544:
#line 16894 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st545;
		case 9: goto st546;
		case 10: goto st547;
		case 13: goto st548;
		case 32: goto st546;
		case 64: goto tr924;
		case 125: goto tr970;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st545;
	goto st544;
tr961:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st545;
st545:
	if ( ++p == pe )
		goto _out545;
case 545:
#line 16915 "superredcloth_inline.c"
	if ( (*p) == 125 )
		goto tr971;
	goto st545;
tr962:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st546;
st546:
	if ( ++p == pe )
		goto _out546;
case 546:
#line 16927 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st545;
		case 9: goto st546;
		case 10: goto st547;
		case 13: goto st548;
		case 32: goto st546;
		case 125: goto tr970;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st545;
	goto st544;
tr963:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st547;
st547:
	if ( ++p == pe )
		goto _out547;
case 547:
#line 16947 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st545;
		case 9: goto st546;
		case 32: goto st546;
		case 125: goto tr970;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st545;
	goto st544;
tr964:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st548;
st548:
	if ( ++p == pe )
		goto _out548;
case 548:
#line 16965 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st547;
		case 125: goto tr971;
	}
	goto st545;
tr952:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st549;
st549:
	if ( ++p == pe )
		goto _out549;
case 549:
#line 16979 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st541;
		case 93: goto tr959;
	}
	goto st539;
tr927:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st550;
st550:
	if ( ++p == pe )
		goto _out550;
case 550:
#line 16993 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st533;
		case 9: goto st550;
		case 10: goto st551;
		case 13: goto st557;
		case 32: goto st550;
		case 35: goto tr937;
		case 41: goto tr938;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st533;
	goto st532;
tr928:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st551;
st551:
	if ( ++p == pe )
		goto _out551;
case 551:
#line 17014 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st533;
		case 9: goto st550;
		case 32: goto st550;
		case 35: goto tr937;
		case 41: goto tr938;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st533;
	goto st532;
tr937:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st552;
st552:
	if ( ++p == pe )
		goto _out552;
case 552:
#line 17033 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr941;
		case 9: goto tr973;
		case 10: goto tr974;
		case 13: goto tr975;
		case 32: goto tr973;
		case 41: goto st528;
		case 64: goto tr924;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr941;
	goto tr972;
tr972:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st553;
st553:
	if ( ++p == pe )
		goto _out553;
case 553:
#line 17054 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st535;
		case 9: goto st554;
		case 10: goto st555;
		case 13: goto st556;
		case 32: goto st554;
		case 41: goto tr980;
		case 64: goto tr924;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st535;
	goto st553;
tr973:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st554;
st554:
	if ( ++p == pe )
		goto _out554;
case 554:
#line 17075 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st535;
		case 9: goto st554;
		case 10: goto st555;
		case 13: goto st556;
		case 32: goto st554;
		case 41: goto tr980;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st535;
	goto st553;
tr974:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st555;
st555:
	if ( ++p == pe )
		goto _out555;
case 555:
#line 17095 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st535;
		case 9: goto st554;
		case 32: goto st554;
		case 41: goto tr980;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st535;
	goto st553;
tr975:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st556;
st556:
	if ( ++p == pe )
		goto _out556;
case 556:
#line 17113 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st555;
		case 41: goto tr943;
	}
	goto st535;
tr929:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st557;
st557:
	if ( ++p == pe )
		goto _out557;
case 557:
#line 17127 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st551;
		case 35: goto tr939;
		case 41: goto tr940;
	}
	goto st533;
tr1530:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st888;
st888:
	if ( ++p == pe )
		goto _out888;
case 888:
#line 17146 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr961;
		case 9: goto tr962;
		case 10: goto tr963;
		case 13: goto tr964;
		case 32: goto tr962;
		case 33: goto tr960;
		case 40: goto tr960;
		case 45: goto tr1538;
		case 63: goto tr960;
		case 64: goto tr1533;
		case 94: goto tr960;
		case 96: goto tr960;
		case 125: goto tr1531;
	}
	if ( (*p) < 44 ) {
		if ( (*p) > 12 ) {
			if ( 35 <= (*p) && (*p) <= 38 )
				goto tr960;
		} else if ( (*p) >= 11 )
			goto tr961;
	} else if ( (*p) > 47 ) {
		if ( (*p) < 91 ) {
			if ( 58 <= (*p) && (*p) <= 61 )
				goto tr960;
		} else if ( (*p) > 92 ) {
			if ( 124 <= (*p) && (*p) <= 126 )
				goto tr960;
		} else
			goto tr960;
	} else
		goto tr960;
	goto tr1537;
tr1539:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st889;
tr1537:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st889;
st889:
	if ( ++p == pe )
		goto _out889;
case 889:
#line 17198 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st545;
		case 9: goto st546;
		case 10: goto st547;
		case 13: goto st548;
		case 32: goto st546;
		case 33: goto st544;
		case 40: goto st544;
		case 45: goto tr1540;
		case 63: goto st544;
		case 64: goto tr1533;
		case 94: goto st544;
		case 96: goto st544;
		case 125: goto tr1541;
	}
	if ( (*p) < 44 ) {
		if ( (*p) > 12 ) {
			if ( 35 <= (*p) && (*p) <= 38 )
				goto st544;
		} else if ( (*p) >= 11 )
			goto st545;
	} else if ( (*p) > 47 ) {
		if ( (*p) < 91 ) {
			if ( 58 <= (*p) && (*p) <= 61 )
				goto st544;
		} else if ( (*p) > 92 ) {
			if ( 124 <= (*p) && (*p) <= 126 )
				goto st544;
		} else
			goto st544;
	} else
		goto st544;
	goto tr1539;
tr1540:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st890;
tr1538:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st890;
st890:
	if ( ++p == pe )
		goto _out890;
case 890:
#line 17250 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st545;
		case 9: goto st546;
		case 10: goto st547;
		case 13: goto st548;
		case 32: goto st546;
		case 33: goto st544;
		case 40: goto st544;
		case 63: goto st544;
		case 64: goto tr1533;
		case 94: goto st544;
		case 96: goto st544;
		case 125: goto tr1541;
	}
	if ( (*p) < 44 ) {
		if ( (*p) > 12 ) {
			if ( 35 <= (*p) && (*p) <= 38 )
				goto st544;
		} else if ( (*p) >= 11 )
			goto st545;
	} else if ( (*p) > 47 ) {
		if ( (*p) < 91 ) {
			if ( 58 <= (*p) && (*p) <= 61 )
				goto st544;
		} else if ( (*p) > 92 ) {
			if ( 124 <= (*p) && (*p) <= 126 )
				goto st544;
		} else
			goto st544;
	} else
		goto st544;
	goto tr1539;
tr1541:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st891;
st891:
	if ( ++p == pe )
		goto _out891;
case 891:
#line 17295 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1324;
		case 9: goto st527;
		case 10: goto st529;
		case 13: goto st530;
		case 32: goto st527;
		case 33: goto tr944;
		case 40: goto tr945;
		case 45: goto tr1529;
		case 63: goto tr944;
		case 64: goto tr1533;
		case 91: goto tr946;
		case 92: goto tr944;
		case 94: goto tr944;
		case 96: goto tr944;
		case 123: goto tr1530;
		case 124: goto tr944;
		case 126: goto tr944;
	}
	if ( (*p) < 35 ) {
		if ( 11 <= (*p) && (*p) <= 12 )
			goto tr1324;
	} else if ( (*p) > 38 ) {
		if ( (*p) > 47 ) {
			if ( 58 <= (*p) && (*p) <= 61 )
				goto tr944;
		} else if ( (*p) >= 44 )
			goto tr944;
	} else
		goto tr944;
	goto tr1528;
tr1317:
#line 7 "superredcloth_inline.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st892;
st892:
	if ( ++p == pe )
		goto _out892;
case 892:
#line 17337 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1324;
		case 40: goto tr1324;
		case 45: goto st730;
		case 63: goto tr1324;
		case 94: goto tr1324;
		case 96: goto tr1324;
		case 124: goto tr1324;
		case 126: goto tr1324;
	}
	if ( (*p) < 44 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 13 )
				goto tr1324;
		} else if ( (*p) > 33 ) {
			if ( 35 <= (*p) && (*p) <= 38 )
				goto tr1324;
		} else
			goto tr1324;
	} else if ( (*p) > 47 ) {
		if ( (*p) < 58 ) {
			if ( 48 <= (*p) && (*p) <= 57 )
				goto st893;
		} else if ( (*p) > 61 ) {
			if ( (*p) > 90 ) {
				if ( 91 <= (*p) && (*p) <= 92 )
					goto tr1324;
			} else if ( (*p) >= 65 )
				goto st893;
		} else
			goto tr1324;
	} else
		goto tr1324;
	goto tr1297;
st893:
	if ( ++p == pe )
		goto _out893;
case 893:
	switch( (*p) ) {
		case 0: goto tr1324;
		case 40: goto tr1324;
		case 45: goto st730;
		case 63: goto tr1324;
		case 94: goto tr1324;
		case 96: goto tr1324;
		case 124: goto tr1324;
		case 126: goto tr1324;
	}
	if ( (*p) < 44 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 13 )
				goto tr1324;
		} else if ( (*p) > 33 ) {
			if ( 35 <= (*p) && (*p) <= 38 )
				goto tr1324;
		} else
			goto tr1324;
	} else if ( (*p) > 47 ) {
		if ( (*p) < 58 ) {
			if ( 48 <= (*p) && (*p) <= 57 )
				goto tr1543;
		} else if ( (*p) > 61 ) {
			if ( (*p) > 90 ) {
				if ( 91 <= (*p) && (*p) <= 92 )
					goto tr1324;
			} else if ( (*p) >= 65 )
				goto tr1543;
		} else
			goto tr1324;
	} else
		goto tr1324;
	goto tr1297;
tr1543:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
	goto st894;
st894:
	if ( ++p == pe )
		goto _out894;
case 894:
#line 17418 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1324;
		case 40: goto tr1544;
		case 45: goto st730;
		case 63: goto tr1324;
		case 94: goto tr1324;
		case 96: goto tr1324;
		case 124: goto tr1324;
		case 126: goto tr1324;
	}
	if ( (*p) < 44 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 13 )
				goto tr1324;
		} else if ( (*p) > 33 ) {
			if ( 35 <= (*p) && (*p) <= 38 )
				goto tr1324;
		} else
			goto tr1324;
	} else if ( (*p) > 47 ) {
		if ( (*p) < 58 ) {
			if ( 48 <= (*p) && (*p) <= 57 )
				goto tr1543;
		} else if ( (*p) > 61 ) {
			if ( (*p) > 90 ) {
				if ( 91 <= (*p) && (*p) <= 92 )
					goto tr1324;
			} else if ( (*p) >= 65 )
				goto tr1543;
		} else
			goto tr1324;
	} else
		goto tr1324;
	goto tr1297;
tr1544:
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
	goto st558;
st558:
	if ( ++p == pe )
		goto _out558;
case 558:
#line 17461 "superredcloth_inline.c"
	if ( (*p) == 0 )
		goto tr326;
	goto tr981;
tr981:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st559;
st559:
	if ( ++p == pe )
		goto _out559;
case 559:
#line 17473 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr326;
		case 41: goto tr983;
	}
	goto st559;
tr1318:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 7 "superredcloth_inline.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 9 "superredcloth_inline.rl"
	{act = 34;}
	goto st895;
st895:
	if ( ++p == pe )
		goto _out895;
case 895:
#line 17491 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto tr1545;
		case 37: goto tr1546;
		case 39: goto tr1547;
		case 42: goto tr1548;
		case 43: goto tr1549;
		case 45: goto tr1550;
		case 61: goto tr1552;
		case 63: goto tr1553;
		case 64: goto tr1554;
		case 67: goto st40;
		case 82: goto st41;
		case 84: goto st42;
		case 94: goto tr1555;
		case 95: goto tr1556;
		case 96: goto tr1557;
		case 99: goto st40;
		case 114: goto st41;
		case 116: goto st42;
		case 126: goto tr1558;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr1551;
	goto tr1338;
tr1545:
#line 7 "superredcloth_inline.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st560;
st560:
	if ( ++p == pe )
		goto _out560;
case 560:
#line 17524 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr292;
		case 32: goto tr292;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr292;
	goto tr984;
tr1547:
#line 7 "superredcloth_inline.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st561;
st561:
	if ( ++p == pe )
		goto _out561;
case 561:
#line 17540 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr292;
		case 32: goto tr292;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr292;
	goto tr985;
tr1548:
#line 7 "superredcloth_inline.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st562;
st562:
	if ( ++p == pe )
		goto _out562;
case 562:
#line 17556 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr292;
		case 32: goto tr292;
		case 40: goto tr572;
		case 42: goto tr986;
		case 91: goto tr573;
		case 123: goto tr574;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr292;
	goto tr571;
tr986:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st563;
st563:
	if ( ++p == pe )
		goto _out563;
case 563:
#line 17576 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr292;
		case 9: goto st306;
		case 10: goto st308;
		case 13: goto st309;
		case 32: goto st306;
		case 40: goto tr697;
		case 42: goto tr987;
		case 91: goto tr698;
		case 123: goto tr699;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr292;
	goto tr696;
tr987:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
#line 98 "superredcloth_inline.rl"
	{act = 4;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st896;
st896:
	if ( ++p == pe )
		goto _out896;
case 896:
#line 17605 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1474;
		case 9: goto st348;
		case 10: goto st349;
		case 13: goto st350;
		case 32: goto st348;
		case 42: goto tr640;
		case 93: goto tr1559;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1474;
	goto st347;
tr1559:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 98 "superredcloth_inline.rl"
	{act = 4;}
	goto st897;
st897:
	if ( ++p == pe )
		goto _out897;
case 897:
#line 17628 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1474;
		case 9: goto st348;
		case 10: goto st349;
		case 13: goto st350;
		case 32: goto st348;
		case 42: goto tr640;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1474;
	goto st347;
tr1551:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st564;
st564:
	if ( ++p == pe )
		goto _out564;
case 564:
#line 17648 "superredcloth_inline.c"
	if ( (*p) == 93 )
		goto tr989;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto st564;
	goto tr292;
tr1552:
#line 7 "superredcloth_inline.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st565;
st565:
	if ( ++p == pe )
		goto _out565;
case 565:
#line 17662 "superredcloth_inline.c"
	if ( (*p) == 61 )
		goto st489;
	goto tr292;
tr1553:
#line 7 "superredcloth_inline.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st566;
st566:
	if ( ++p == pe )
		goto _out566;
case 566:
#line 17674 "superredcloth_inline.c"
	if ( (*p) == 63 )
		goto st495;
	goto tr292;
tr1016:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st567;
tr1019:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st567;
tr1040:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st567;
tr1052:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st567;
tr1555:
#line 7 "superredcloth_inline.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st567;
st567:
	if ( ++p == pe )
		goto _out567;
case 567:
#line 17702 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr292;
		case 32: goto tr292;
		case 40: goto tr993;
		case 91: goto tr994;
		case 123: goto tr995;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr292;
	goto tr992;
tr992:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st568;
st568:
	if ( ++p == pe )
		goto _out568;
case 568:
#line 17721 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr292;
		case 9: goto st569;
		case 10: goto st570;
		case 13: goto st571;
		case 32: goto st569;
		case 94: goto tr1000;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr292;
	goto st568;
st569:
	if ( ++p == pe )
		goto _out569;
case 569:
	switch( (*p) ) {
		case 0: goto tr292;
		case 9: goto st569;
		case 10: goto st570;
		case 13: goto st571;
		case 32: goto st569;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr292;
	goto st568;
st570:
	if ( ++p == pe )
		goto _out570;
case 570:
	switch( (*p) ) {
		case 0: goto tr292;
		case 9: goto st569;
		case 32: goto st569;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto tr292;
	goto st568;
st571:
	if ( ++p == pe )
		goto _out571;
case 571:
	if ( (*p) == 10 )
		goto st570;
	goto tr292;
tr1000:
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
	goto st898;
st898:
	if ( ++p == pe )
		goto _out898;
case 898:
#line 17774 "superredcloth_inline.c"
	if ( (*p) == 93 )
		goto tr1561;
	goto tr1560;
tr993:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st572;
st572:
	if ( ++p == pe )
		goto _out572;
case 572:
#line 17786 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1002;
		case 9: goto tr1003;
		case 10: goto tr1004;
		case 13: goto tr1005;
		case 32: goto tr1003;
		case 35: goto st579;
		case 41: goto st583;
		case 94: goto tr1000;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1002;
	goto tr1001;
tr1001:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st573;
st573:
	if ( ++p == pe )
		goto _out573;
case 573:
#line 17808 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st574;
		case 9: goto st577;
		case 10: goto st578;
		case 13: goto st597;
		case 32: goto st577;
		case 35: goto tr1013;
		case 41: goto tr1014;
		case 94: goto tr1000;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st574;
	goto st573;
tr1002:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st574;
st574:
	if ( ++p == pe )
		goto _out574;
case 574:
#line 17830 "superredcloth_inline.c"
	switch( (*p) ) {
		case 35: goto tr1015;
		case 41: goto tr1016;
	}
	goto st574;
tr1015:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st575;
st575:
	if ( ++p == pe )
		goto _out575;
case 575:
#line 17844 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr292;
	goto tr1017;
tr1017:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st576;
st576:
	if ( ++p == pe )
		goto _out576;
case 576:
#line 17856 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr1019;
	goto st576;
tr1003:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st577;
st577:
	if ( ++p == pe )
		goto _out577;
case 577:
#line 17868 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st574;
		case 9: goto st577;
		case 10: goto st578;
		case 13: goto st597;
		case 32: goto st577;
		case 35: goto tr1013;
		case 41: goto tr1014;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st574;
	goto st573;
tr1004:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st578;
st578:
	if ( ++p == pe )
		goto _out578;
case 578:
#line 17889 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st574;
		case 9: goto st577;
		case 32: goto st577;
		case 35: goto tr1013;
		case 41: goto tr1014;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st574;
	goto st573;
tr1013:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st579;
st579:
	if ( ++p == pe )
		goto _out579;
case 579:
#line 17908 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1017;
		case 9: goto tr1021;
		case 10: goto tr1022;
		case 13: goto tr1023;
		case 32: goto tr1021;
		case 41: goto st568;
		case 94: goto tr1000;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1017;
	goto tr1020;
tr1020:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st580;
st580:
	if ( ++p == pe )
		goto _out580;
case 580:
#line 17929 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st576;
		case 9: goto st581;
		case 10: goto st582;
		case 13: goto st596;
		case 32: goto st581;
		case 41: goto tr1028;
		case 94: goto tr1000;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st576;
	goto st580;
tr1021:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st581;
st581:
	if ( ++p == pe )
		goto _out581;
case 581:
#line 17950 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st576;
		case 9: goto st581;
		case 10: goto st582;
		case 13: goto st596;
		case 32: goto st581;
		case 41: goto tr1028;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st576;
	goto st580;
tr1022:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st582;
st582:
	if ( ++p == pe )
		goto _out582;
case 582:
#line 17970 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st576;
		case 9: goto st581;
		case 32: goto st581;
		case 41: goto tr1028;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st576;
	goto st580;
tr1014:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st583;
tr1028:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st583;
tr1039:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st583;
tr1051:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st583;
st583:
	if ( ++p == pe )
		goto _out583;
case 583:
#line 18000 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr292;
		case 9: goto st569;
		case 10: goto st570;
		case 13: goto st571;
		case 32: goto st569;
		case 40: goto tr993;
		case 91: goto tr994;
		case 94: goto tr1000;
		case 123: goto tr995;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr292;
	goto tr992;
tr994:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st584;
st584:
	if ( ++p == pe )
		goto _out584;
case 584:
#line 18023 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1030;
		case 9: goto tr1031;
		case 10: goto tr1032;
		case 13: goto tr1033;
		case 32: goto tr1031;
		case 93: goto st568;
		case 94: goto tr1000;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1030;
	goto tr1029;
tr1029:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st585;
st585:
	if ( ++p == pe )
		goto _out585;
case 585:
#line 18044 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st586;
		case 9: goto st587;
		case 10: goto st588;
		case 13: goto st589;
		case 32: goto st587;
		case 93: goto tr1039;
		case 94: goto tr1000;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st586;
	goto st585;
tr1030:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st586;
st586:
	if ( ++p == pe )
		goto _out586;
case 586:
#line 18065 "superredcloth_inline.c"
	if ( (*p) == 93 )
		goto tr1040;
	goto st586;
tr1031:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st587;
st587:
	if ( ++p == pe )
		goto _out587;
case 587:
#line 18077 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st586;
		case 9: goto st587;
		case 10: goto st588;
		case 13: goto st589;
		case 32: goto st587;
		case 93: goto tr1039;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st586;
	goto st585;
tr1032:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st588;
st588:
	if ( ++p == pe )
		goto _out588;
case 588:
#line 18097 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st586;
		case 9: goto st587;
		case 32: goto st587;
		case 93: goto tr1039;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st586;
	goto st585;
tr1033:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st589;
st589:
	if ( ++p == pe )
		goto _out589;
case 589:
#line 18115 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st588;
		case 93: goto tr1040;
	}
	goto st586;
tr995:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st590;
st590:
	if ( ++p == pe )
		goto _out590;
case 590:
#line 18129 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1042;
		case 9: goto tr1043;
		case 10: goto tr1044;
		case 13: goto tr1045;
		case 32: goto tr1043;
		case 94: goto tr1000;
		case 125: goto st568;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1042;
	goto tr1041;
tr1041:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st591;
st591:
	if ( ++p == pe )
		goto _out591;
case 591:
#line 18150 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st592;
		case 9: goto st593;
		case 10: goto st594;
		case 13: goto st595;
		case 32: goto st593;
		case 94: goto tr1000;
		case 125: goto tr1051;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st592;
	goto st591;
tr1042:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st592;
st592:
	if ( ++p == pe )
		goto _out592;
case 592:
#line 18171 "superredcloth_inline.c"
	if ( (*p) == 125 )
		goto tr1052;
	goto st592;
tr1043:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st593;
st593:
	if ( ++p == pe )
		goto _out593;
case 593:
#line 18183 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st592;
		case 9: goto st593;
		case 10: goto st594;
		case 13: goto st595;
		case 32: goto st593;
		case 125: goto tr1051;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st592;
	goto st591;
tr1044:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st594;
st594:
	if ( ++p == pe )
		goto _out594;
case 594:
#line 18203 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st592;
		case 9: goto st593;
		case 32: goto st593;
		case 125: goto tr1051;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st592;
	goto st591;
tr1045:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st595;
st595:
	if ( ++p == pe )
		goto _out595;
case 595:
#line 18221 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st594;
		case 125: goto tr1052;
	}
	goto st592;
tr1023:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st596;
st596:
	if ( ++p == pe )
		goto _out596;
case 596:
#line 18235 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st582;
		case 41: goto tr1019;
	}
	goto st576;
tr1005:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st597;
st597:
	if ( ++p == pe )
		goto _out597;
case 597:
#line 18249 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st578;
		case 35: goto tr1015;
		case 41: goto tr1016;
	}
	goto st574;
tr1556:
#line 7 "superredcloth_inline.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st598;
st598:
	if ( ++p == pe )
		goto _out598;
case 598:
#line 18264 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr292;
		case 32: goto tr292;
		case 40: goto tr1054;
		case 91: goto tr1055;
		case 95: goto tr1056;
		case 123: goto tr1057;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr292;
	goto tr1053;
tr1053:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st599;
st599:
	if ( ++p == pe )
		goto _out599;
case 599:
#line 18284 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr4;
		case 9: goto st600;
		case 10: goto st601;
		case 13: goto st602;
		case 32: goto st600;
		case 95: goto tr1062;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr4;
	goto st599;
st600:
	if ( ++p == pe )
		goto _out600;
case 600:
	switch( (*p) ) {
		case 0: goto tr4;
		case 9: goto st600;
		case 10: goto st601;
		case 13: goto st602;
		case 32: goto st600;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr4;
	goto st599;
st601:
	if ( ++p == pe )
		goto _out601;
case 601:
	switch( (*p) ) {
		case 0: goto tr4;
		case 9: goto st600;
		case 32: goto st600;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto tr4;
	goto st599;
st602:
	if ( ++p == pe )
		goto _out602;
case 602:
	if ( (*p) == 10 )
		goto st601;
	goto tr4;
tr1062:
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
	goto st899;
st899:
	if ( ++p == pe )
		goto _out899;
case 899:
#line 18337 "superredcloth_inline.c"
	if ( (*p) == 93 )
		goto tr1563;
	goto tr1562;
tr1054:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st603;
st603:
	if ( ++p == pe )
		goto _out603;
case 603:
#line 18349 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1064;
		case 9: goto tr1065;
		case 10: goto tr1066;
		case 13: goto tr1067;
		case 32: goto tr1065;
		case 35: goto st624;
		case 41: goto st614;
		case 95: goto tr1062;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1064;
	goto tr1063;
tr1063:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st604;
st604:
	if ( ++p == pe )
		goto _out604;
case 604:
#line 18371 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st605;
		case 9: goto st622;
		case 10: goto st623;
		case 13: goto st629;
		case 32: goto st622;
		case 35: goto tr1075;
		case 41: goto tr1076;
		case 95: goto tr1062;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st605;
	goto st604;
tr1064:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st605;
st605:
	if ( ++p == pe )
		goto _out605;
case 605:
#line 18393 "superredcloth_inline.c"
	switch( (*p) ) {
		case 35: goto tr1077;
		case 41: goto tr1078;
	}
	goto st605;
tr1077:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st606;
st606:
	if ( ++p == pe )
		goto _out606;
case 606:
#line 18407 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr4;
	goto tr1079;
tr1079:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st607;
st607:
	if ( ++p == pe )
		goto _out607;
case 607:
#line 18419 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr1081;
	goto st607;
tr1078:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st608;
tr1081:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st608;
tr1093:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st608;
tr1105:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st608;
st608:
	if ( ++p == pe )
		goto _out608;
case 608:
#line 18443 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr4;
		case 32: goto tr4;
		case 40: goto tr1054;
		case 91: goto tr1055;
		case 123: goto tr1057;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr4;
	goto tr1053;
tr1055:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st609;
st609:
	if ( ++p == pe )
		goto _out609;
case 609:
#line 18462 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1083;
		case 9: goto tr1084;
		case 10: goto tr1085;
		case 13: goto tr1086;
		case 32: goto tr1084;
		case 93: goto st599;
		case 95: goto tr1062;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1083;
	goto tr1082;
tr1082:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st610;
st610:
	if ( ++p == pe )
		goto _out610;
case 610:
#line 18483 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st611;
		case 9: goto st612;
		case 10: goto st613;
		case 13: goto st621;
		case 32: goto st612;
		case 93: goto tr1092;
		case 95: goto tr1062;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st611;
	goto st610;
tr1083:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st611;
st611:
	if ( ++p == pe )
		goto _out611;
case 611:
#line 18504 "superredcloth_inline.c"
	if ( (*p) == 93 )
		goto tr1093;
	goto st611;
tr1084:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st612;
st612:
	if ( ++p == pe )
		goto _out612;
case 612:
#line 18516 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st611;
		case 9: goto st612;
		case 10: goto st613;
		case 13: goto st621;
		case 32: goto st612;
		case 93: goto tr1092;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st611;
	goto st610;
tr1085:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st613;
st613:
	if ( ++p == pe )
		goto _out613;
case 613:
#line 18536 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st611;
		case 9: goto st612;
		case 32: goto st612;
		case 93: goto tr1092;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st611;
	goto st610;
tr1076:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st614;
tr1114:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st614;
tr1092:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st614;
tr1104:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st614;
st614:
	if ( ++p == pe )
		goto _out614;
case 614:
#line 18566 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr4;
		case 9: goto st600;
		case 10: goto st601;
		case 13: goto st602;
		case 32: goto st600;
		case 40: goto tr1054;
		case 91: goto tr1055;
		case 95: goto tr1062;
		case 123: goto tr1057;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr4;
	goto tr1053;
tr1057:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st615;
st615:
	if ( ++p == pe )
		goto _out615;
case 615:
#line 18589 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1095;
		case 9: goto tr1096;
		case 10: goto tr1097;
		case 13: goto tr1098;
		case 32: goto tr1096;
		case 95: goto tr1062;
		case 125: goto st599;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1095;
	goto tr1094;
tr1094:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st616;
st616:
	if ( ++p == pe )
		goto _out616;
case 616:
#line 18610 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st617;
		case 9: goto st618;
		case 10: goto st619;
		case 13: goto st620;
		case 32: goto st618;
		case 95: goto tr1062;
		case 125: goto tr1104;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st617;
	goto st616;
tr1095:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st617;
st617:
	if ( ++p == pe )
		goto _out617;
case 617:
#line 18631 "superredcloth_inline.c"
	if ( (*p) == 125 )
		goto tr1105;
	goto st617;
tr1096:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st618;
st618:
	if ( ++p == pe )
		goto _out618;
case 618:
#line 18643 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st617;
		case 9: goto st618;
		case 10: goto st619;
		case 13: goto st620;
		case 32: goto st618;
		case 125: goto tr1104;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st617;
	goto st616;
tr1097:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st619;
st619:
	if ( ++p == pe )
		goto _out619;
case 619:
#line 18663 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st617;
		case 9: goto st618;
		case 32: goto st618;
		case 125: goto tr1104;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st617;
	goto st616;
tr1098:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st620;
st620:
	if ( ++p == pe )
		goto _out620;
case 620:
#line 18681 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st619;
		case 125: goto tr1105;
	}
	goto st617;
tr1086:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st621;
st621:
	if ( ++p == pe )
		goto _out621;
case 621:
#line 18695 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st613;
		case 93: goto tr1093;
	}
	goto st611;
tr1065:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st622;
st622:
	if ( ++p == pe )
		goto _out622;
case 622:
#line 18709 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st605;
		case 9: goto st622;
		case 10: goto st623;
		case 13: goto st629;
		case 32: goto st622;
		case 35: goto tr1075;
		case 41: goto tr1076;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st605;
	goto st604;
tr1066:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st623;
st623:
	if ( ++p == pe )
		goto _out623;
case 623:
#line 18730 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st605;
		case 9: goto st622;
		case 32: goto st622;
		case 35: goto tr1075;
		case 41: goto tr1076;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st605;
	goto st604;
tr1075:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st624;
st624:
	if ( ++p == pe )
		goto _out624;
case 624:
#line 18749 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1079;
		case 9: goto tr1107;
		case 10: goto tr1108;
		case 13: goto tr1109;
		case 32: goto tr1107;
		case 41: goto st599;
		case 95: goto tr1062;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1079;
	goto tr1106;
tr1106:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st625;
st625:
	if ( ++p == pe )
		goto _out625;
case 625:
#line 18770 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st607;
		case 9: goto st626;
		case 10: goto st627;
		case 13: goto st628;
		case 32: goto st626;
		case 41: goto tr1114;
		case 95: goto tr1062;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st607;
	goto st625;
tr1107:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st626;
st626:
	if ( ++p == pe )
		goto _out626;
case 626:
#line 18791 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st607;
		case 9: goto st626;
		case 10: goto st627;
		case 13: goto st628;
		case 32: goto st626;
		case 41: goto tr1114;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st607;
	goto st625;
tr1108:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st627;
st627:
	if ( ++p == pe )
		goto _out627;
case 627:
#line 18811 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st607;
		case 9: goto st626;
		case 32: goto st626;
		case 41: goto tr1114;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st607;
	goto st625;
tr1109:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st628;
st628:
	if ( ++p == pe )
		goto _out628;
case 628:
#line 18829 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st627;
		case 41: goto tr1081;
	}
	goto st607;
tr1067:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st629;
st629:
	if ( ++p == pe )
		goto _out629;
case 629:
#line 18843 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st623;
		case 35: goto tr1077;
		case 41: goto tr1078;
	}
	goto st605;
tr1056:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st630;
st630:
	if ( ++p == pe )
		goto _out630;
case 630:
#line 18858 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr292;
		case 9: goto st600;
		case 10: goto st601;
		case 13: goto st602;
		case 32: goto st600;
		case 40: goto tr1116;
		case 91: goto tr1117;
		case 95: goto tr1118;
		case 123: goto tr1119;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr292;
	goto tr1115;
tr1115:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st631;
st631:
	if ( ++p == pe )
		goto _out631;
case 631:
#line 18881 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr4;
		case 9: goto st632;
		case 10: goto st633;
		case 13: goto st634;
		case 32: goto st632;
		case 95: goto tr1124;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr4;
	goto st631;
st632:
	if ( ++p == pe )
		goto _out632;
case 632:
	switch( (*p) ) {
		case 0: goto tr4;
		case 9: goto st632;
		case 10: goto st633;
		case 13: goto st634;
		case 32: goto st632;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr4;
	goto st631;
st633:
	if ( ++p == pe )
		goto _out633;
case 633:
	switch( (*p) ) {
		case 0: goto tr4;
		case 9: goto st632;
		case 32: goto st632;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto tr4;
	goto st631;
st634:
	if ( ++p == pe )
		goto _out634;
case 634:
	if ( (*p) == 10 )
		goto st633;
	goto tr4;
tr1124:
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
	goto st900;
st900:
	if ( ++p == pe )
		goto _out900;
case 900:
#line 18934 "superredcloth_inline.c"
	switch( (*p) ) {
		case 93: goto tr1563;
		case 95: goto st901;
	}
	goto tr1562;
st901:
	if ( ++p == pe )
		goto _out901;
case 901:
	if ( (*p) == 93 )
		goto tr1565;
	goto tr1564;
tr1116:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st635;
st635:
	if ( ++p == pe )
		goto _out635;
case 635:
#line 18955 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1126;
		case 9: goto tr1127;
		case 10: goto tr1128;
		case 13: goto tr1129;
		case 32: goto tr1127;
		case 35: goto st671;
		case 41: goto st675;
		case 95: goto tr1124;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1126;
	goto tr1125;
tr1125:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st636;
st636:
	if ( ++p == pe )
		goto _out636;
case 636:
#line 18977 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st637;
		case 9: goto st669;
		case 10: goto st670;
		case 13: goto st687;
		case 32: goto st669;
		case 35: goto tr1137;
		case 41: goto tr1138;
		case 95: goto tr1124;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st637;
	goto st636;
tr1126:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st637;
st637:
	if ( ++p == pe )
		goto _out637;
case 637:
#line 18999 "superredcloth_inline.c"
	switch( (*p) ) {
		case 35: goto tr1139;
		case 41: goto tr1140;
	}
	goto st637;
tr1139:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st638;
st638:
	if ( ++p == pe )
		goto _out638;
case 638:
#line 19013 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr4;
	goto tr1141;
tr1141:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st639;
st639:
	if ( ++p == pe )
		goto _out639;
case 639:
#line 19025 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr1143;
	goto st639;
tr1140:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st640;
tr1143:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st640;
tr1186:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st640;
tr1198:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st640;
st640:
	if ( ++p == pe )
		goto _out640;
case 640:
#line 19049 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr4;
		case 32: goto tr4;
		case 40: goto tr1145;
		case 91: goto tr1146;
		case 123: goto tr1147;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr4;
	goto tr1144;
tr1144:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st641;
st641:
	if ( ++p == pe )
		goto _out641;
case 641:
#line 19068 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr4;
		case 9: goto st642;
		case 10: goto st643;
		case 13: goto st644;
		case 32: goto st642;
		case 95: goto tr1152;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr4;
	goto st641;
st642:
	if ( ++p == pe )
		goto _out642;
case 642:
	switch( (*p) ) {
		case 0: goto tr4;
		case 9: goto st642;
		case 10: goto st643;
		case 13: goto st644;
		case 32: goto st642;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr4;
	goto st641;
st643:
	if ( ++p == pe )
		goto _out643;
case 643:
	switch( (*p) ) {
		case 0: goto tr4;
		case 9: goto st642;
		case 32: goto st642;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto tr4;
	goto st641;
st644:
	if ( ++p == pe )
		goto _out644;
case 644:
	if ( (*p) == 10 )
		goto st643;
	goto tr4;
tr1152:
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
	goto st645;
st645:
	if ( ++p == pe )
		goto _out645;
case 645:
#line 19121 "superredcloth_inline.c"
	if ( (*p) == 95 )
		goto st901;
	goto tr4;
tr1145:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st646;
st646:
	if ( ++p == pe )
		goto _out646;
case 646:
#line 19133 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1126;
		case 9: goto tr1155;
		case 10: goto tr1156;
		case 13: goto tr1157;
		case 32: goto tr1155;
		case 35: goto st650;
		case 41: goto st654;
		case 95: goto tr1152;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1126;
	goto tr1154;
tr1154:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st647;
st647:
	if ( ++p == pe )
		goto _out647;
case 647:
#line 19155 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st637;
		case 9: goto st648;
		case 10: goto st649;
		case 13: goto st668;
		case 32: goto st648;
		case 35: goto tr1164;
		case 41: goto tr1165;
		case 95: goto tr1152;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st637;
	goto st647;
tr1155:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st648;
st648:
	if ( ++p == pe )
		goto _out648;
case 648:
#line 19177 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st637;
		case 9: goto st648;
		case 10: goto st649;
		case 13: goto st668;
		case 32: goto st648;
		case 35: goto tr1164;
		case 41: goto tr1165;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st637;
	goto st647;
tr1156:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st649;
st649:
	if ( ++p == pe )
		goto _out649;
case 649:
#line 19198 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st637;
		case 9: goto st648;
		case 32: goto st648;
		case 35: goto tr1164;
		case 41: goto tr1165;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st637;
	goto st647;
tr1164:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st650;
st650:
	if ( ++p == pe )
		goto _out650;
case 650:
#line 19217 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1141;
		case 9: goto tr1167;
		case 10: goto tr1168;
		case 13: goto tr1169;
		case 32: goto tr1167;
		case 41: goto st641;
		case 95: goto tr1152;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1141;
	goto tr1166;
tr1166:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st651;
st651:
	if ( ++p == pe )
		goto _out651;
case 651:
#line 19238 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st639;
		case 9: goto st652;
		case 10: goto st653;
		case 13: goto st667;
		case 32: goto st652;
		case 41: goto tr1174;
		case 95: goto tr1152;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st639;
	goto st651;
tr1167:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st652;
st652:
	if ( ++p == pe )
		goto _out652;
case 652:
#line 19259 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st639;
		case 9: goto st652;
		case 10: goto st653;
		case 13: goto st667;
		case 32: goto st652;
		case 41: goto tr1174;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st639;
	goto st651;
tr1168:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st653;
st653:
	if ( ++p == pe )
		goto _out653;
case 653:
#line 19279 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st639;
		case 9: goto st652;
		case 32: goto st652;
		case 41: goto tr1174;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st639;
	goto st651;
tr1165:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st654;
tr1174:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st654;
tr1185:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st654;
tr1197:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st654;
st654:
	if ( ++p == pe )
		goto _out654;
case 654:
#line 19309 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr4;
		case 9: goto st642;
		case 10: goto st643;
		case 13: goto st644;
		case 32: goto st642;
		case 40: goto tr1145;
		case 91: goto tr1146;
		case 95: goto tr1152;
		case 123: goto tr1147;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr4;
	goto tr1144;
tr1146:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st655;
st655:
	if ( ++p == pe )
		goto _out655;
case 655:
#line 19332 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1176;
		case 9: goto tr1177;
		case 10: goto tr1178;
		case 13: goto tr1179;
		case 32: goto tr1177;
		case 93: goto st641;
		case 95: goto tr1152;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1176;
	goto tr1175;
tr1175:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st656;
st656:
	if ( ++p == pe )
		goto _out656;
case 656:
#line 19353 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st657;
		case 9: goto st658;
		case 10: goto st659;
		case 13: goto st660;
		case 32: goto st658;
		case 93: goto tr1185;
		case 95: goto tr1152;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st657;
	goto st656;
tr1176:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st657;
st657:
	if ( ++p == pe )
		goto _out657;
case 657:
#line 19374 "superredcloth_inline.c"
	if ( (*p) == 93 )
		goto tr1186;
	goto st657;
tr1177:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st658;
st658:
	if ( ++p == pe )
		goto _out658;
case 658:
#line 19386 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st657;
		case 9: goto st658;
		case 10: goto st659;
		case 13: goto st660;
		case 32: goto st658;
		case 93: goto tr1185;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st657;
	goto st656;
tr1178:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st659;
st659:
	if ( ++p == pe )
		goto _out659;
case 659:
#line 19406 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st657;
		case 9: goto st658;
		case 32: goto st658;
		case 93: goto tr1185;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st657;
	goto st656;
tr1179:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st660;
st660:
	if ( ++p == pe )
		goto _out660;
case 660:
#line 19424 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st659;
		case 93: goto tr1186;
	}
	goto st657;
tr1147:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st661;
st661:
	if ( ++p == pe )
		goto _out661;
case 661:
#line 19438 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1188;
		case 9: goto tr1189;
		case 10: goto tr1190;
		case 13: goto tr1191;
		case 32: goto tr1189;
		case 95: goto tr1152;
		case 125: goto st641;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1188;
	goto tr1187;
tr1187:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st662;
st662:
	if ( ++p == pe )
		goto _out662;
case 662:
#line 19459 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st663;
		case 9: goto st664;
		case 10: goto st665;
		case 13: goto st666;
		case 32: goto st664;
		case 95: goto tr1152;
		case 125: goto tr1197;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st663;
	goto st662;
tr1188:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st663;
st663:
	if ( ++p == pe )
		goto _out663;
case 663:
#line 19480 "superredcloth_inline.c"
	if ( (*p) == 125 )
		goto tr1198;
	goto st663;
tr1189:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st664;
st664:
	if ( ++p == pe )
		goto _out664;
case 664:
#line 19492 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st663;
		case 9: goto st664;
		case 10: goto st665;
		case 13: goto st666;
		case 32: goto st664;
		case 125: goto tr1197;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st663;
	goto st662;
tr1190:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st665;
st665:
	if ( ++p == pe )
		goto _out665;
case 665:
#line 19512 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st663;
		case 9: goto st664;
		case 32: goto st664;
		case 125: goto tr1197;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st663;
	goto st662;
tr1191:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st666;
st666:
	if ( ++p == pe )
		goto _out666;
case 666:
#line 19530 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st665;
		case 125: goto tr1198;
	}
	goto st663;
tr1169:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st667;
st667:
	if ( ++p == pe )
		goto _out667;
case 667:
#line 19544 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st653;
		case 41: goto tr1143;
	}
	goto st639;
tr1157:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st668;
st668:
	if ( ++p == pe )
		goto _out668;
case 668:
#line 19558 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st649;
		case 35: goto tr1139;
		case 41: goto tr1140;
	}
	goto st637;
tr1127:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st669;
st669:
	if ( ++p == pe )
		goto _out669;
case 669:
#line 19573 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st637;
		case 9: goto st669;
		case 10: goto st670;
		case 13: goto st687;
		case 32: goto st669;
		case 35: goto tr1137;
		case 41: goto tr1138;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st637;
	goto st636;
tr1128:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st670;
st670:
	if ( ++p == pe )
		goto _out670;
case 670:
#line 19594 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st637;
		case 9: goto st669;
		case 32: goto st669;
		case 35: goto tr1137;
		case 41: goto tr1138;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st637;
	goto st636;
tr1137:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st671;
st671:
	if ( ++p == pe )
		goto _out671;
case 671:
#line 19613 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1141;
		case 9: goto tr1200;
		case 10: goto tr1201;
		case 13: goto tr1202;
		case 32: goto tr1200;
		case 41: goto st631;
		case 95: goto tr1124;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1141;
	goto tr1199;
tr1199:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st672;
st672:
	if ( ++p == pe )
		goto _out672;
case 672:
#line 19634 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st639;
		case 9: goto st673;
		case 10: goto st674;
		case 13: goto st686;
		case 32: goto st673;
		case 41: goto tr1207;
		case 95: goto tr1124;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st639;
	goto st672;
tr1200:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st673;
st673:
	if ( ++p == pe )
		goto _out673;
case 673:
#line 19655 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st639;
		case 9: goto st673;
		case 10: goto st674;
		case 13: goto st686;
		case 32: goto st673;
		case 41: goto tr1207;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st639;
	goto st672;
tr1201:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st674;
st674:
	if ( ++p == pe )
		goto _out674;
case 674:
#line 19675 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st639;
		case 9: goto st673;
		case 32: goto st673;
		case 41: goto tr1207;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st639;
	goto st672;
tr1138:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st675;
tr1207:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st675;
tr1216:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st675;
tr1225:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st675;
st675:
	if ( ++p == pe )
		goto _out675;
case 675:
#line 19705 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr4;
		case 9: goto st632;
		case 10: goto st633;
		case 13: goto st634;
		case 32: goto st632;
		case 40: goto tr1116;
		case 91: goto tr1117;
		case 95: goto tr1124;
		case 123: goto tr1119;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr4;
	goto tr1115;
tr1117:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st676;
st676:
	if ( ++p == pe )
		goto _out676;
case 676:
#line 19728 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1176;
		case 9: goto tr1209;
		case 10: goto tr1210;
		case 13: goto tr1211;
		case 32: goto tr1209;
		case 93: goto st631;
		case 95: goto tr1124;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1176;
	goto tr1208;
tr1208:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st677;
st677:
	if ( ++p == pe )
		goto _out677;
case 677:
#line 19749 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st657;
		case 9: goto st678;
		case 10: goto st679;
		case 13: goto st680;
		case 32: goto st678;
		case 93: goto tr1216;
		case 95: goto tr1124;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st657;
	goto st677;
tr1209:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st678;
st678:
	if ( ++p == pe )
		goto _out678;
case 678:
#line 19770 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st657;
		case 9: goto st678;
		case 10: goto st679;
		case 13: goto st680;
		case 32: goto st678;
		case 93: goto tr1216;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st657;
	goto st677;
tr1210:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st679;
st679:
	if ( ++p == pe )
		goto _out679;
case 679:
#line 19790 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st657;
		case 9: goto st678;
		case 32: goto st678;
		case 93: goto tr1216;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st657;
	goto st677;
tr1211:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st680;
st680:
	if ( ++p == pe )
		goto _out680;
case 680:
#line 19808 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st679;
		case 93: goto tr1186;
	}
	goto st657;
tr1119:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st681;
st681:
	if ( ++p == pe )
		goto _out681;
case 681:
#line 19822 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1188;
		case 9: goto tr1218;
		case 10: goto tr1219;
		case 13: goto tr1220;
		case 32: goto tr1218;
		case 95: goto tr1124;
		case 125: goto st631;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1188;
	goto tr1217;
tr1217:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st682;
st682:
	if ( ++p == pe )
		goto _out682;
case 682:
#line 19843 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st663;
		case 9: goto st683;
		case 10: goto st684;
		case 13: goto st685;
		case 32: goto st683;
		case 95: goto tr1124;
		case 125: goto tr1225;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st663;
	goto st682;
tr1218:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st683;
st683:
	if ( ++p == pe )
		goto _out683;
case 683:
#line 19864 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st663;
		case 9: goto st683;
		case 10: goto st684;
		case 13: goto st685;
		case 32: goto st683;
		case 125: goto tr1225;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st663;
	goto st682;
tr1219:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st684;
st684:
	if ( ++p == pe )
		goto _out684;
case 684:
#line 19884 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st663;
		case 9: goto st683;
		case 32: goto st683;
		case 125: goto tr1225;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st663;
	goto st682;
tr1220:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st685;
st685:
	if ( ++p == pe )
		goto _out685;
case 685:
#line 19902 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st684;
		case 125: goto tr1198;
	}
	goto st663;
tr1202:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st686;
st686:
	if ( ++p == pe )
		goto _out686;
case 686:
#line 19916 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st674;
		case 41: goto tr1143;
	}
	goto st639;
tr1129:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st687;
st687:
	if ( ++p == pe )
		goto _out687;
case 687:
#line 19930 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st670;
		case 35: goto tr1139;
		case 41: goto tr1140;
	}
	goto st637;
tr1118:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
#line 100 "superredcloth_inline.rl"
	{act = 6;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st902;
st902:
	if ( ++p == pe )
		goto _out902;
case 902:
#line 19951 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1562;
		case 9: goto st642;
		case 10: goto st643;
		case 13: goto st644;
		case 32: goto st642;
		case 93: goto tr1566;
		case 95: goto tr1152;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1562;
	goto st641;
tr1566:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 100 "superredcloth_inline.rl"
	{act = 6;}
	goto st903;
st903:
	if ( ++p == pe )
		goto _out903;
case 903:
#line 19974 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1562;
		case 9: goto st642;
		case 10: goto st643;
		case 13: goto st644;
		case 32: goto st642;
		case 95: goto tr1152;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1562;
	goto st641;
tr1557:
#line 7 "superredcloth_inline.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st688;
st688:
	if ( ++p == pe )
		goto _out688;
case 688:
#line 19994 "superredcloth_inline.c"
	if ( (*p) == 96 )
		goto st689;
	goto tr292;
st689:
	if ( ++p == pe )
		goto _out689;
case 689:
	if ( (*p) == 96 )
		goto st690;
	goto tr292;
st690:
	if ( ++p == pe )
		goto _out690;
case 690:
	switch( (*p) ) {
		case 0: goto tr292;
		case 32: goto tr292;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr292;
	goto tr1228;
tr1228:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st691;
st691:
	if ( ++p == pe )
		goto _out691;
case 691:
#line 20024 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr292;
		case 9: goto st692;
		case 10: goto st693;
		case 13: goto st694;
		case 32: goto st692;
		case 96: goto tr1233;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr292;
	goto st691;
st692:
	if ( ++p == pe )
		goto _out692;
case 692:
	switch( (*p) ) {
		case 0: goto tr292;
		case 9: goto st692;
		case 10: goto st693;
		case 13: goto st694;
		case 32: goto st692;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr292;
	goto st691;
st693:
	if ( ++p == pe )
		goto _out693;
case 693:
	switch( (*p) ) {
		case 0: goto tr292;
		case 9: goto st692;
		case 32: goto st692;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto tr292;
	goto st691;
st694:
	if ( ++p == pe )
		goto _out694;
case 694:
	if ( (*p) == 10 )
		goto st693;
	goto tr292;
tr1233:
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
	goto st695;
st695:
	if ( ++p == pe )
		goto _out695;
case 695:
#line 20077 "superredcloth_inline.c"
	if ( (*p) == 96 )
		goto st696;
	goto tr292;
st696:
	if ( ++p == pe )
		goto _out696;
case 696:
	if ( (*p) == 96 )
		goto st904;
	goto tr292;
st904:
	if ( ++p == pe )
		goto _out904;
case 904:
	if ( (*p) == 93 )
		goto tr1568;
	goto tr1567;
tr1260:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st697;
tr1263:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st697;
tr1284:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st697;
tr1296:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st697;
tr1558:
#line 7 "superredcloth_inline.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st697;
st697:
	if ( ++p == pe )
		goto _out697;
case 697:
#line 20119 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr292;
		case 32: goto tr292;
		case 40: goto tr1237;
		case 91: goto tr1238;
		case 123: goto tr1239;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr292;
	goto tr1236;
tr1236:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st698;
st698:
	if ( ++p == pe )
		goto _out698;
case 698:
#line 20138 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr292;
		case 9: goto st699;
		case 10: goto st700;
		case 13: goto st701;
		case 32: goto st699;
		case 126: goto tr1244;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr292;
	goto st698;
st699:
	if ( ++p == pe )
		goto _out699;
case 699:
	switch( (*p) ) {
		case 0: goto tr292;
		case 9: goto st699;
		case 10: goto st700;
		case 13: goto st701;
		case 32: goto st699;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr292;
	goto st698;
st700:
	if ( ++p == pe )
		goto _out700;
case 700:
	switch( (*p) ) {
		case 0: goto tr292;
		case 9: goto st699;
		case 32: goto st699;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto tr292;
	goto st698;
st701:
	if ( ++p == pe )
		goto _out701;
case 701:
	if ( (*p) == 10 )
		goto st700;
	goto tr292;
tr1244:
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
	goto st905;
st905:
	if ( ++p == pe )
		goto _out905;
case 905:
#line 20191 "superredcloth_inline.c"
	if ( (*p) == 93 )
		goto tr1570;
	goto tr1569;
tr1237:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st702;
st702:
	if ( ++p == pe )
		goto _out702;
case 702:
#line 20203 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1246;
		case 9: goto tr1247;
		case 10: goto tr1248;
		case 13: goto tr1249;
		case 32: goto tr1247;
		case 35: goto st709;
		case 41: goto st713;
		case 126: goto tr1244;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1246;
	goto tr1245;
tr1245:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st703;
st703:
	if ( ++p == pe )
		goto _out703;
case 703:
#line 20225 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st704;
		case 9: goto st707;
		case 10: goto st708;
		case 13: goto st727;
		case 32: goto st707;
		case 35: goto tr1257;
		case 41: goto tr1258;
		case 126: goto tr1244;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st704;
	goto st703;
tr1246:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st704;
st704:
	if ( ++p == pe )
		goto _out704;
case 704:
#line 20247 "superredcloth_inline.c"
	switch( (*p) ) {
		case 35: goto tr1259;
		case 41: goto tr1260;
	}
	goto st704;
tr1259:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st705;
st705:
	if ( ++p == pe )
		goto _out705;
case 705:
#line 20261 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr292;
	goto tr1261;
tr1261:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st706;
st706:
	if ( ++p == pe )
		goto _out706;
case 706:
#line 20273 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr1263;
	goto st706;
tr1247:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st707;
st707:
	if ( ++p == pe )
		goto _out707;
case 707:
#line 20285 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st704;
		case 9: goto st707;
		case 10: goto st708;
		case 13: goto st727;
		case 32: goto st707;
		case 35: goto tr1257;
		case 41: goto tr1258;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st704;
	goto st703;
tr1248:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st708;
st708:
	if ( ++p == pe )
		goto _out708;
case 708:
#line 20306 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st704;
		case 9: goto st707;
		case 32: goto st707;
		case 35: goto tr1257;
		case 41: goto tr1258;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st704;
	goto st703;
tr1257:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st709;
st709:
	if ( ++p == pe )
		goto _out709;
case 709:
#line 20325 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1261;
		case 9: goto tr1265;
		case 10: goto tr1266;
		case 13: goto tr1267;
		case 32: goto tr1265;
		case 41: goto st698;
		case 126: goto tr1244;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1261;
	goto tr1264;
tr1264:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st710;
st710:
	if ( ++p == pe )
		goto _out710;
case 710:
#line 20346 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st706;
		case 9: goto st711;
		case 10: goto st712;
		case 13: goto st726;
		case 32: goto st711;
		case 41: goto tr1272;
		case 126: goto tr1244;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st706;
	goto st710;
tr1265:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st711;
st711:
	if ( ++p == pe )
		goto _out711;
case 711:
#line 20367 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st706;
		case 9: goto st711;
		case 10: goto st712;
		case 13: goto st726;
		case 32: goto st711;
		case 41: goto tr1272;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st706;
	goto st710;
tr1266:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st712;
st712:
	if ( ++p == pe )
		goto _out712;
case 712:
#line 20387 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st706;
		case 9: goto st711;
		case 32: goto st711;
		case 41: goto tr1272;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st706;
	goto st710;
tr1258:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st713;
tr1272:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st713;
tr1283:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st713;
tr1295:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st713;
st713:
	if ( ++p == pe )
		goto _out713;
case 713:
#line 20417 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr292;
		case 9: goto st699;
		case 10: goto st700;
		case 13: goto st701;
		case 32: goto st699;
		case 40: goto tr1237;
		case 91: goto tr1238;
		case 123: goto tr1239;
		case 126: goto tr1244;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr292;
	goto tr1236;
tr1238:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st714;
st714:
	if ( ++p == pe )
		goto _out714;
case 714:
#line 20440 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1274;
		case 9: goto tr1275;
		case 10: goto tr1276;
		case 13: goto tr1277;
		case 32: goto tr1275;
		case 93: goto st698;
		case 126: goto tr1244;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1274;
	goto tr1273;
tr1273:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st715;
st715:
	if ( ++p == pe )
		goto _out715;
case 715:
#line 20461 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st716;
		case 9: goto st717;
		case 10: goto st718;
		case 13: goto st719;
		case 32: goto st717;
		case 93: goto tr1283;
		case 126: goto tr1244;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st716;
	goto st715;
tr1274:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st716;
st716:
	if ( ++p == pe )
		goto _out716;
case 716:
#line 20482 "superredcloth_inline.c"
	if ( (*p) == 93 )
		goto tr1284;
	goto st716;
tr1275:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st717;
st717:
	if ( ++p == pe )
		goto _out717;
case 717:
#line 20494 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st716;
		case 9: goto st717;
		case 10: goto st718;
		case 13: goto st719;
		case 32: goto st717;
		case 93: goto tr1283;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st716;
	goto st715;
tr1276:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st718;
st718:
	if ( ++p == pe )
		goto _out718;
case 718:
#line 20514 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st716;
		case 9: goto st717;
		case 32: goto st717;
		case 93: goto tr1283;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st716;
	goto st715;
tr1277:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st719;
st719:
	if ( ++p == pe )
		goto _out719;
case 719:
#line 20532 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st718;
		case 93: goto tr1284;
	}
	goto st716;
tr1239:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st720;
st720:
	if ( ++p == pe )
		goto _out720;
case 720:
#line 20546 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1286;
		case 9: goto tr1287;
		case 10: goto tr1288;
		case 13: goto tr1289;
		case 32: goto tr1287;
		case 125: goto st698;
		case 126: goto tr1244;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1286;
	goto tr1285;
tr1285:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st721;
st721:
	if ( ++p == pe )
		goto _out721;
case 721:
#line 20567 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st722;
		case 9: goto st723;
		case 10: goto st724;
		case 13: goto st725;
		case 32: goto st723;
		case 125: goto tr1295;
		case 126: goto tr1244;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st722;
	goto st721;
tr1286:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st722;
st722:
	if ( ++p == pe )
		goto _out722;
case 722:
#line 20588 "superredcloth_inline.c"
	if ( (*p) == 125 )
		goto tr1296;
	goto st722;
tr1287:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st723;
st723:
	if ( ++p == pe )
		goto _out723;
case 723:
#line 20600 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st722;
		case 9: goto st723;
		case 10: goto st724;
		case 13: goto st725;
		case 32: goto st723;
		case 125: goto tr1295;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st722;
	goto st721;
tr1288:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st724;
st724:
	if ( ++p == pe )
		goto _out724;
case 724:
#line 20620 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st722;
		case 9: goto st723;
		case 32: goto st723;
		case 125: goto tr1295;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st722;
	goto st721;
tr1289:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st725;
st725:
	if ( ++p == pe )
		goto _out725;
case 725:
#line 20638 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st724;
		case 125: goto tr1296;
	}
	goto st722;
tr1267:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st726;
st726:
	if ( ++p == pe )
		goto _out726;
case 726:
#line 20652 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st712;
		case 41: goto tr1263;
	}
	goto st706;
tr1249:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st727;
st727:
	if ( ++p == pe )
		goto _out727;
case 727:
#line 20666 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st708;
		case 35: goto tr1259;
		case 41: goto tr1260;
	}
	goto st704;
tr1319:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 7 "superredcloth_inline.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st906;
st906:
	if ( ++p == pe )
		goto _out906;
case 906:
#line 20683 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1338;
		case 32: goto tr1338;
		case 40: goto tr993;
		case 91: goto tr994;
		case 123: goto tr995;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr1338;
	goto tr992;
tr1320:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 7 "superredcloth_inline.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st907;
st907:
	if ( ++p == pe )
		goto _out907;
case 907:
#line 20706 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1324;
		case 32: goto tr1324;
		case 33: goto tr1053;
		case 40: goto tr1054;
		case 45: goto tr1572;
		case 63: goto tr1053;
		case 91: goto tr1055;
		case 92: goto tr1053;
		case 95: goto tr1573;
		case 123: goto tr1574;
		case 124: goto tr1053;
		case 126: goto tr1053;
	}
	if ( (*p) < 44 ) {
		if ( (*p) > 13 ) {
			if ( 35 <= (*p) && (*p) <= 38 )
				goto tr1053;
		} else if ( (*p) >= 9 )
			goto tr1324;
	} else if ( (*p) > 47 ) {
		if ( (*p) > 61 ) {
			if ( 94 <= (*p) && (*p) <= 96 )
				goto tr1053;
		} else if ( (*p) >= 58 )
			goto tr1053;
	} else
		goto tr1053;
	goto tr1571;
tr1575:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st908;
tr1571:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st908;
st908:
	if ( ++p == pe )
		goto _out908;
case 908:
#line 20754 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1324;
		case 9: goto st600;
		case 10: goto st601;
		case 13: goto st602;
		case 32: goto st600;
		case 33: goto st599;
		case 40: goto st599;
		case 45: goto tr1576;
		case 63: goto st599;
		case 95: goto tr1577;
		case 124: goto st599;
		case 126: goto st599;
	}
	if ( (*p) < 44 ) {
		if ( (*p) > 12 ) {
			if ( 35 <= (*p) && (*p) <= 38 )
				goto st599;
		} else if ( (*p) >= 11 )
			goto tr1324;
	} else if ( (*p) > 47 ) {
		if ( (*p) < 91 ) {
			if ( 58 <= (*p) && (*p) <= 61 )
				goto st599;
		} else if ( (*p) > 92 ) {
			if ( 94 <= (*p) && (*p) <= 96 )
				goto st599;
		} else
			goto st599;
	} else
		goto st599;
	goto tr1575;
tr1576:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st909;
tr1572:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st909;
st909:
	if ( ++p == pe )
		goto _out909;
case 909:
#line 20805 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1324;
		case 9: goto st600;
		case 10: goto st601;
		case 13: goto st602;
		case 32: goto st600;
		case 33: goto st599;
		case 40: goto st599;
		case 63: goto st599;
		case 95: goto tr1577;
		case 124: goto st599;
		case 126: goto st599;
	}
	if ( (*p) < 44 ) {
		if ( (*p) > 12 ) {
			if ( 35 <= (*p) && (*p) <= 38 )
				goto st599;
		} else if ( (*p) >= 11 )
			goto tr1324;
	} else if ( (*p) > 47 ) {
		if ( (*p) < 91 ) {
			if ( 58 <= (*p) && (*p) <= 61 )
				goto st599;
		} else if ( (*p) > 92 ) {
			if ( 94 <= (*p) && (*p) <= 96 )
				goto st599;
		} else
			goto st599;
	} else
		goto st599;
	goto tr1575;
tr1577:
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
	goto st910;
st910:
	if ( ++p == pe )
		goto _out910;
case 910:
#line 20845 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1562;
		case 40: goto tr1562;
		case 45: goto st730;
		case 63: goto tr1562;
		case 93: goto tr1578;
		case 96: goto tr1562;
		case 124: goto tr1562;
		case 126: goto tr1562;
	}
	if ( (*p) < 35 ) {
		if ( (*p) > 13 ) {
			if ( 32 <= (*p) && (*p) <= 33 )
				goto tr1562;
		} else if ( (*p) >= 9 )
			goto tr1562;
	} else if ( (*p) > 38 ) {
		if ( (*p) < 58 ) {
			if ( 44 <= (*p) && (*p) <= 47 )
				goto tr1562;
		} else if ( (*p) > 61 ) {
			if ( 91 <= (*p) && (*p) <= 94 )
				goto tr1562;
		} else
			goto tr1562;
	} else
		goto tr1562;
	goto tr1297;
tr1573:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st911;
st911:
	if ( ++p == pe )
		goto _out911;
case 911:
#line 20886 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1324;
		case 9: goto st600;
		case 10: goto st601;
		case 13: goto st602;
		case 32: goto st600;
		case 33: goto tr1115;
		case 40: goto tr1116;
		case 45: goto tr1580;
		case 63: goto tr1115;
		case 91: goto tr1117;
		case 92: goto tr1115;
		case 95: goto tr1581;
		case 123: goto tr1582;
		case 124: goto tr1115;
		case 126: goto tr1115;
	}
	if ( (*p) < 44 ) {
		if ( (*p) > 12 ) {
			if ( 35 <= (*p) && (*p) <= 38 )
				goto tr1115;
		} else if ( (*p) >= 11 )
			goto tr1324;
	} else if ( (*p) > 47 ) {
		if ( (*p) > 61 ) {
			if ( 94 <= (*p) && (*p) <= 96 )
				goto tr1115;
		} else if ( (*p) >= 58 )
			goto tr1115;
	} else
		goto tr1115;
	goto tr1579;
tr1583:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st912;
tr1579:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st912;
st912:
	if ( ++p == pe )
		goto _out912;
case 912:
#line 20937 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1324;
		case 9: goto st632;
		case 10: goto st633;
		case 13: goto st634;
		case 32: goto st632;
		case 33: goto st631;
		case 40: goto st631;
		case 45: goto tr1584;
		case 63: goto st631;
		case 95: goto tr1585;
		case 124: goto st631;
		case 126: goto st631;
	}
	if ( (*p) < 44 ) {
		if ( (*p) > 12 ) {
			if ( 35 <= (*p) && (*p) <= 38 )
				goto st631;
		} else if ( (*p) >= 11 )
			goto tr1324;
	} else if ( (*p) > 47 ) {
		if ( (*p) < 91 ) {
			if ( 58 <= (*p) && (*p) <= 61 )
				goto st631;
		} else if ( (*p) > 92 ) {
			if ( 94 <= (*p) && (*p) <= 96 )
				goto st631;
		} else
			goto st631;
	} else
		goto st631;
	goto tr1583;
tr1584:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st913;
tr1580:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st913;
st913:
	if ( ++p == pe )
		goto _out913;
case 913:
#line 20988 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1324;
		case 9: goto st632;
		case 10: goto st633;
		case 13: goto st634;
		case 32: goto st632;
		case 33: goto st631;
		case 40: goto st631;
		case 63: goto st631;
		case 95: goto tr1585;
		case 124: goto st631;
		case 126: goto st631;
	}
	if ( (*p) < 44 ) {
		if ( (*p) > 12 ) {
			if ( 35 <= (*p) && (*p) <= 38 )
				goto st631;
		} else if ( (*p) >= 11 )
			goto tr1324;
	} else if ( (*p) > 47 ) {
		if ( (*p) < 91 ) {
			if ( 58 <= (*p) && (*p) <= 61 )
				goto st631;
		} else if ( (*p) > 92 ) {
			if ( 94 <= (*p) && (*p) <= 96 )
				goto st631;
		} else
			goto st631;
	} else
		goto st631;
	goto tr1583;
tr1585:
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
	goto st914;
st914:
	if ( ++p == pe )
		goto _out914;
case 914:
#line 21028 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1562;
		case 40: goto tr1562;
		case 45: goto st730;
		case 63: goto tr1562;
		case 93: goto tr1578;
		case 95: goto st915;
		case 124: goto tr1562;
		case 126: goto tr1562;
	}
	if ( (*p) < 35 ) {
		if ( (*p) > 13 ) {
			if ( 32 <= (*p) && (*p) <= 33 )
				goto tr1562;
		} else if ( (*p) >= 9 )
			goto tr1562;
	} else if ( (*p) > 38 ) {
		if ( (*p) < 58 ) {
			if ( 44 <= (*p) && (*p) <= 47 )
				goto tr1562;
		} else if ( (*p) > 61 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr1562;
		} else
			goto tr1562;
	} else
		goto tr1562;
	goto tr1297;
st915:
	if ( ++p == pe )
		goto _out915;
case 915:
	switch( (*p) ) {
		case 0: goto tr1564;
		case 40: goto tr1564;
		case 45: goto st730;
		case 63: goto tr1564;
		case 93: goto tr1587;
		case 96: goto tr1564;
		case 124: goto tr1564;
		case 126: goto tr1564;
	}
	if ( (*p) < 35 ) {
		if ( (*p) > 13 ) {
			if ( 32 <= (*p) && (*p) <= 33 )
				goto tr1564;
		} else if ( (*p) >= 9 )
			goto tr1564;
	} else if ( (*p) > 38 ) {
		if ( (*p) < 58 ) {
			if ( 44 <= (*p) && (*p) <= 47 )
				goto tr1564;
		} else if ( (*p) > 61 ) {
			if ( 91 <= (*p) && (*p) <= 94 )
				goto tr1564;
		} else
			goto tr1564;
	} else
		goto tr1564;
	goto tr1297;
tr1581:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
#line 100 "superredcloth_inline.rl"
	{act = 6;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st916;
st916:
	if ( ++p == pe )
		goto _out916;
case 916:
#line 21103 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1562;
		case 9: goto st642;
		case 10: goto st643;
		case 13: goto st644;
		case 32: goto st642;
		case 33: goto st641;
		case 40: goto st641;
		case 45: goto tr1589;
		case 63: goto st641;
		case 93: goto tr1590;
		case 95: goto tr1591;
		case 124: goto st641;
		case 126: goto st641;
	}
	if ( (*p) < 44 ) {
		if ( (*p) > 12 ) {
			if ( 35 <= (*p) && (*p) <= 38 )
				goto st641;
		} else if ( (*p) >= 11 )
			goto tr1562;
	} else if ( (*p) > 47 ) {
		if ( (*p) > 61 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto st641;
		} else if ( (*p) >= 58 )
			goto st641;
	} else
		goto st641;
	goto tr1588;
tr1588:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st917;
tr1590:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 100 "superredcloth_inline.rl"
	{act = 6;}
	goto st917;
st917:
	if ( ++p == pe )
		goto _out917;
case 917:
#line 21150 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr4;
		case 9: goto st642;
		case 10: goto st643;
		case 13: goto st644;
		case 32: goto st642;
		case 33: goto st641;
		case 40: goto st641;
		case 45: goto tr1589;
		case 63: goto st641;
		case 95: goto tr1591;
		case 124: goto st641;
		case 126: goto st641;
	}
	if ( (*p) < 44 ) {
		if ( (*p) > 12 ) {
			if ( 35 <= (*p) && (*p) <= 38 )
				goto st641;
		} else if ( (*p) >= 11 )
			goto tr4;
	} else if ( (*p) > 47 ) {
		if ( (*p) < 91 ) {
			if ( 58 <= (*p) && (*p) <= 61 )
				goto st641;
		} else if ( (*p) > 92 ) {
			if ( 94 <= (*p) && (*p) <= 96 )
				goto st641;
		} else
			goto st641;
	} else
		goto st641;
	goto tr1588;
tr1589:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st918;
st918:
	if ( ++p == pe )
		goto _out918;
case 918:
#line 21193 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1324;
		case 9: goto st642;
		case 10: goto st643;
		case 13: goto st644;
		case 32: goto st642;
		case 33: goto st641;
		case 40: goto st641;
		case 63: goto st641;
		case 95: goto tr1591;
		case 124: goto st641;
		case 126: goto st641;
	}
	if ( (*p) < 44 ) {
		if ( (*p) > 12 ) {
			if ( 35 <= (*p) && (*p) <= 38 )
				goto st641;
		} else if ( (*p) >= 11 )
			goto tr1324;
	} else if ( (*p) > 47 ) {
		if ( (*p) < 91 ) {
			if ( 58 <= (*p) && (*p) <= 61 )
				goto st641;
		} else if ( (*p) > 92 ) {
			if ( 94 <= (*p) && (*p) <= 96 )
				goto st641;
		} else
			goto st641;
	} else
		goto st641;
	goto tr1588;
tr1591:
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
	goto st919;
st919:
	if ( ++p == pe )
		goto _out919;
case 919:
#line 21233 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1324;
		case 40: goto tr1324;
		case 45: goto st730;
		case 63: goto tr1324;
		case 95: goto st915;
		case 124: goto tr1324;
		case 126: goto tr1324;
	}
	if ( (*p) < 44 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 13 )
				goto tr1324;
		} else if ( (*p) > 33 ) {
			if ( 35 <= (*p) && (*p) <= 38 )
				goto tr1324;
		} else
			goto tr1324;
	} else if ( (*p) > 47 ) {
		if ( (*p) < 91 ) {
			if ( 58 <= (*p) && (*p) <= 61 )
				goto tr1324;
		} else if ( (*p) > 92 ) {
			if ( 94 <= (*p) && (*p) <= 96 )
				goto tr1324;
		} else
			goto tr1324;
	} else
		goto tr1324;
	goto tr1297;
tr1582:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st920;
st920:
	if ( ++p == pe )
		goto _out920;
case 920:
#line 21276 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1188;
		case 9: goto tr1218;
		case 10: goto tr1219;
		case 13: goto tr1220;
		case 32: goto tr1218;
		case 33: goto tr1217;
		case 40: goto tr1217;
		case 45: goto tr1593;
		case 63: goto tr1217;
		case 95: goto tr1585;
		case 125: goto tr1583;
	}
	if ( (*p) < 58 ) {
		if ( (*p) < 35 ) {
			if ( 11 <= (*p) && (*p) <= 12 )
				goto tr1188;
		} else if ( (*p) > 38 ) {
			if ( 44 <= (*p) && (*p) <= 47 )
				goto tr1217;
		} else
			goto tr1217;
	} else if ( (*p) > 61 ) {
		if ( (*p) < 94 ) {
			if ( 91 <= (*p) && (*p) <= 92 )
				goto tr1217;
		} else if ( (*p) > 96 ) {
			if ( 124 <= (*p) && (*p) <= 126 )
				goto tr1217;
		} else
			goto tr1217;
	} else
		goto tr1217;
	goto tr1592;
tr1594:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st921;
tr1592:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st921;
st921:
	if ( ++p == pe )
		goto _out921;
case 921:
#line 21329 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st663;
		case 9: goto st683;
		case 10: goto st684;
		case 13: goto st685;
		case 32: goto st683;
		case 33: goto st682;
		case 40: goto st682;
		case 45: goto tr1595;
		case 63: goto st682;
		case 95: goto tr1585;
		case 125: goto tr1596;
	}
	if ( (*p) < 58 ) {
		if ( (*p) < 35 ) {
			if ( 11 <= (*p) && (*p) <= 12 )
				goto st663;
		} else if ( (*p) > 38 ) {
			if ( 44 <= (*p) && (*p) <= 47 )
				goto st682;
		} else
			goto st682;
	} else if ( (*p) > 61 ) {
		if ( (*p) < 94 ) {
			if ( 91 <= (*p) && (*p) <= 92 )
				goto st682;
		} else if ( (*p) > 96 ) {
			if ( 124 <= (*p) && (*p) <= 126 )
				goto st682;
		} else
			goto st682;
	} else
		goto st682;
	goto tr1594;
tr1595:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st922;
tr1593:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st922;
st922:
	if ( ++p == pe )
		goto _out922;
case 922:
#line 21382 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st663;
		case 9: goto st683;
		case 10: goto st684;
		case 13: goto st685;
		case 32: goto st683;
		case 33: goto st682;
		case 40: goto st682;
		case 63: goto st682;
		case 95: goto tr1585;
		case 125: goto tr1596;
	}
	if ( (*p) < 58 ) {
		if ( (*p) < 35 ) {
			if ( 11 <= (*p) && (*p) <= 12 )
				goto st663;
		} else if ( (*p) > 38 ) {
			if ( 44 <= (*p) && (*p) <= 47 )
				goto st682;
		} else
			goto st682;
	} else if ( (*p) > 61 ) {
		if ( (*p) < 94 ) {
			if ( 91 <= (*p) && (*p) <= 92 )
				goto st682;
		} else if ( (*p) > 96 ) {
			if ( 124 <= (*p) && (*p) <= 126 )
				goto st682;
		} else
			goto st682;
	} else
		goto st682;
	goto tr1594;
tr1596:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st923;
st923:
	if ( ++p == pe )
		goto _out923;
case 923:
#line 21428 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1324;
		case 9: goto st632;
		case 10: goto st633;
		case 13: goto st634;
		case 32: goto st632;
		case 33: goto tr1115;
		case 40: goto tr1116;
		case 45: goto tr1580;
		case 63: goto tr1115;
		case 91: goto tr1117;
		case 92: goto tr1115;
		case 95: goto tr1585;
		case 123: goto tr1582;
		case 124: goto tr1115;
		case 126: goto tr1115;
	}
	if ( (*p) < 44 ) {
		if ( (*p) > 12 ) {
			if ( 35 <= (*p) && (*p) <= 38 )
				goto tr1115;
		} else if ( (*p) >= 11 )
			goto tr1324;
	} else if ( (*p) > 47 ) {
		if ( (*p) > 61 ) {
			if ( 94 <= (*p) && (*p) <= 96 )
				goto tr1115;
		} else if ( (*p) >= 58 )
			goto tr1115;
	} else
		goto tr1115;
	goto tr1579;
tr1574:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st924;
st924:
	if ( ++p == pe )
		goto _out924;
case 924:
#line 21473 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1095;
		case 9: goto tr1096;
		case 10: goto tr1097;
		case 13: goto tr1098;
		case 32: goto tr1096;
		case 33: goto tr1094;
		case 40: goto tr1094;
		case 45: goto tr1598;
		case 63: goto tr1094;
		case 95: goto tr1577;
		case 125: goto tr1575;
	}
	if ( (*p) < 58 ) {
		if ( (*p) < 35 ) {
			if ( 11 <= (*p) && (*p) <= 12 )
				goto tr1095;
		} else if ( (*p) > 38 ) {
			if ( 44 <= (*p) && (*p) <= 47 )
				goto tr1094;
		} else
			goto tr1094;
	} else if ( (*p) > 61 ) {
		if ( (*p) < 94 ) {
			if ( 91 <= (*p) && (*p) <= 92 )
				goto tr1094;
		} else if ( (*p) > 96 ) {
			if ( 124 <= (*p) && (*p) <= 126 )
				goto tr1094;
		} else
			goto tr1094;
	} else
		goto tr1094;
	goto tr1597;
tr1599:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st925;
tr1597:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st925;
st925:
	if ( ++p == pe )
		goto _out925;
case 925:
#line 21526 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st617;
		case 9: goto st618;
		case 10: goto st619;
		case 13: goto st620;
		case 32: goto st618;
		case 33: goto st616;
		case 40: goto st616;
		case 45: goto tr1600;
		case 63: goto st616;
		case 95: goto tr1577;
		case 125: goto tr1601;
	}
	if ( (*p) < 58 ) {
		if ( (*p) < 35 ) {
			if ( 11 <= (*p) && (*p) <= 12 )
				goto st617;
		} else if ( (*p) > 38 ) {
			if ( 44 <= (*p) && (*p) <= 47 )
				goto st616;
		} else
			goto st616;
	} else if ( (*p) > 61 ) {
		if ( (*p) < 94 ) {
			if ( 91 <= (*p) && (*p) <= 92 )
				goto st616;
		} else if ( (*p) > 96 ) {
			if ( 124 <= (*p) && (*p) <= 126 )
				goto st616;
		} else
			goto st616;
	} else
		goto st616;
	goto tr1599;
tr1600:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st926;
tr1598:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st926;
st926:
	if ( ++p == pe )
		goto _out926;
case 926:
#line 21579 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st617;
		case 9: goto st618;
		case 10: goto st619;
		case 13: goto st620;
		case 32: goto st618;
		case 33: goto st616;
		case 40: goto st616;
		case 63: goto st616;
		case 95: goto tr1577;
		case 125: goto tr1601;
	}
	if ( (*p) < 58 ) {
		if ( (*p) < 35 ) {
			if ( 11 <= (*p) && (*p) <= 12 )
				goto st617;
		} else if ( (*p) > 38 ) {
			if ( 44 <= (*p) && (*p) <= 47 )
				goto st616;
		} else
			goto st616;
	} else if ( (*p) > 61 ) {
		if ( (*p) < 94 ) {
			if ( 91 <= (*p) && (*p) <= 92 )
				goto st616;
		} else if ( (*p) > 96 ) {
			if ( 124 <= (*p) && (*p) <= 126 )
				goto st616;
		} else
			goto st616;
	} else
		goto st616;
	goto tr1599;
tr1601:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st927;
st927:
	if ( ++p == pe )
		goto _out927;
case 927:
#line 21625 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1324;
		case 9: goto st600;
		case 10: goto st601;
		case 13: goto st602;
		case 32: goto st600;
		case 33: goto tr1053;
		case 40: goto tr1054;
		case 45: goto tr1572;
		case 63: goto tr1053;
		case 91: goto tr1055;
		case 92: goto tr1053;
		case 95: goto tr1577;
		case 123: goto tr1574;
		case 124: goto tr1053;
		case 126: goto tr1053;
	}
	if ( (*p) < 44 ) {
		if ( (*p) > 12 ) {
			if ( 35 <= (*p) && (*p) <= 38 )
				goto tr1053;
		} else if ( (*p) >= 11 )
			goto tr1324;
	} else if ( (*p) > 47 ) {
		if ( (*p) > 61 ) {
			if ( 94 <= (*p) && (*p) <= 96 )
				goto tr1053;
		} else if ( (*p) >= 58 )
			goto tr1053;
	} else
		goto tr1053;
	goto tr1571;
tr1321:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 7 "superredcloth_inline.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st928;
st928:
	if ( ++p == pe )
		goto _out928;
case 928:
#line 21668 "superredcloth_inline.c"
	if ( (*p) == 96 )
		goto st689;
	goto tr1338;
tr1322:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 7 "superredcloth_inline.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st929;
st929:
	if ( ++p == pe )
		goto _out929;
case 929:
#line 21682 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1338;
		case 32: goto tr1338;
		case 40: goto tr1237;
		case 91: goto tr1238;
		case 123: goto tr1239;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr1338;
	goto tr1236;
	}
	_out728: cs = 728; goto _out; 
	_out729: cs = 729; goto _out; 
	_out730: cs = 730; goto _out; 
	_out731: cs = 731; goto _out; 
	_out0: cs = 0; goto _out; 
	_out1: cs = 1; goto _out; 
	_out2: cs = 2; goto _out; 
	_out3: cs = 3; goto _out; 
	_out4: cs = 4; goto _out; 
	_out732: cs = 732; goto _out; 
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
	_out733: cs = 733; goto _out; 
	_out734: cs = 734; goto _out; 
	_out735: cs = 735; goto _out; 
	_out37: cs = 37; goto _out; 
	_out38: cs = 38; goto _out; 
	_out39: cs = 39; goto _out; 
	_out40: cs = 40; goto _out; 
	_out41: cs = 41; goto _out; 
	_out42: cs = 42; goto _out; 
	_out43: cs = 43; goto _out; 
	_out736: cs = 736; goto _out; 
	_out44: cs = 44; goto _out; 
	_out45: cs = 45; goto _out; 
	_out737: cs = 737; goto _out; 
	_out46: cs = 46; goto _out; 
	_out47: cs = 47; goto _out; 
	_out48: cs = 48; goto _out; 
	_out49: cs = 49; goto _out; 
	_out50: cs = 50; goto _out; 
	_out738: cs = 738; goto _out; 
	_out51: cs = 51; goto _out; 
	_out52: cs = 52; goto _out; 
	_out739: cs = 739; goto _out; 
	_out53: cs = 53; goto _out; 
	_out54: cs = 54; goto _out; 
	_out55: cs = 55; goto _out; 
	_out56: cs = 56; goto _out; 
	_out740: cs = 740; goto _out; 
	_out57: cs = 57; goto _out; 
	_out58: cs = 58; goto _out; 
	_out59: cs = 59; goto _out; 
	_out741: cs = 741; goto _out; 
	_out60: cs = 60; goto _out; 
	_out61: cs = 61; goto _out; 
	_out742: cs = 742; goto _out; 
	_out743: cs = 743; goto _out; 
	_out744: cs = 744; goto _out; 
	_out62: cs = 62; goto _out; 
	_out63: cs = 63; goto _out; 
	_out745: cs = 745; goto _out; 
	_out746: cs = 746; goto _out; 
	_out64: cs = 64; goto _out; 
	_out65: cs = 65; goto _out; 
	_out747: cs = 747; goto _out; 
	_out748: cs = 748; goto _out; 
	_out66: cs = 66; goto _out; 
	_out67: cs = 67; goto _out; 
	_out68: cs = 68; goto _out; 
	_out69: cs = 69; goto _out; 
	_out70: cs = 70; goto _out; 
	_out71: cs = 71; goto _out; 
	_out72: cs = 72; goto _out; 
	_out749: cs = 749; goto _out; 
	_out750: cs = 750; goto _out; 
	_out751: cs = 751; goto _out; 
	_out73: cs = 73; goto _out; 
	_out74: cs = 74; goto _out; 
	_out752: cs = 752; goto _out; 
	_out753: cs = 753; goto _out; 
	_out75: cs = 75; goto _out; 
	_out76: cs = 76; goto _out; 
	_out754: cs = 754; goto _out; 
	_out755: cs = 755; goto _out; 
	_out756: cs = 756; goto _out; 
	_out757: cs = 757; goto _out; 
	_out758: cs = 758; goto _out; 
	_out759: cs = 759; goto _out; 
	_out760: cs = 760; goto _out; 
	_out77: cs = 77; goto _out; 
	_out78: cs = 78; goto _out; 
	_out79: cs = 79; goto _out; 
	_out80: cs = 80; goto _out; 
	_out81: cs = 81; goto _out; 
	_out761: cs = 761; goto _out; 
	_out82: cs = 82; goto _out; 
	_out83: cs = 83; goto _out; 
	_out84: cs = 84; goto _out; 
	_out85: cs = 85; goto _out; 
	_out762: cs = 762; goto _out; 
	_out86: cs = 86; goto _out; 
	_out87: cs = 87; goto _out; 
	_out763: cs = 763; goto _out; 
	_out764: cs = 764; goto _out; 
	_out88: cs = 88; goto _out; 
	_out89: cs = 89; goto _out; 
	_out765: cs = 765; goto _out; 
	_out766: cs = 766; goto _out; 
	_out767: cs = 767; goto _out; 
	_out768: cs = 768; goto _out; 
	_out90: cs = 90; goto _out; 
	_out91: cs = 91; goto _out; 
	_out92: cs = 92; goto _out; 
	_out93: cs = 93; goto _out; 
	_out94: cs = 94; goto _out; 
	_out769: cs = 769; goto _out; 
	_out95: cs = 95; goto _out; 
	_out96: cs = 96; goto _out; 
	_out97: cs = 97; goto _out; 
	_out98: cs = 98; goto _out; 
	_out770: cs = 770; goto _out; 
	_out99: cs = 99; goto _out; 
	_out100: cs = 100; goto _out; 
	_out101: cs = 101; goto _out; 
	_out771: cs = 771; goto _out; 
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
	_out772: cs = 772; goto _out; 
	_out115: cs = 115; goto _out; 
	_out116: cs = 116; goto _out; 
	_out117: cs = 117; goto _out; 
	_out118: cs = 118; goto _out; 
	_out773: cs = 773; goto _out; 
	_out774: cs = 774; goto _out; 
	_out775: cs = 775; goto _out; 
	_out119: cs = 119; goto _out; 
	_out120: cs = 120; goto _out; 
	_out776: cs = 776; goto _out; 
	_out777: cs = 777; goto _out; 
	_out778: cs = 778; goto _out; 
	_out779: cs = 779; goto _out; 
	_out780: cs = 780; goto _out; 
	_out121: cs = 121; goto _out; 
	_out781: cs = 781; goto _out; 
	_out122: cs = 122; goto _out; 
	_out123: cs = 123; goto _out; 
	_out124: cs = 124; goto _out; 
	_out125: cs = 125; goto _out; 
	_out126: cs = 126; goto _out; 
	_out127: cs = 127; goto _out; 
	_out128: cs = 128; goto _out; 
	_out129: cs = 129; goto _out; 
	_out782: cs = 782; goto _out; 
	_out130: cs = 130; goto _out; 
	_out131: cs = 131; goto _out; 
	_out132: cs = 132; goto _out; 
	_out783: cs = 783; goto _out; 
	_out133: cs = 133; goto _out; 
	_out134: cs = 134; goto _out; 
	_out135: cs = 135; goto _out; 
	_out784: cs = 784; goto _out; 
	_out785: cs = 785; goto _out; 
	_out136: cs = 136; goto _out; 
	_out137: cs = 137; goto _out; 
	_out786: cs = 786; goto _out; 
	_out787: cs = 787; goto _out; 
	_out788: cs = 788; goto _out; 
	_out789: cs = 789; goto _out; 
	_out790: cs = 790; goto _out; 
	_out791: cs = 791; goto _out; 
	_out138: cs = 138; goto _out; 
	_out139: cs = 139; goto _out; 
	_out792: cs = 792; goto _out; 
	_out793: cs = 793; goto _out; 
	_out794: cs = 794; goto _out; 
	_out795: cs = 795; goto _out; 
	_out796: cs = 796; goto _out; 
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
	_out797: cs = 797; goto _out; 
	_out154: cs = 154; goto _out; 
	_out155: cs = 155; goto _out; 
	_out156: cs = 156; goto _out; 
	_out157: cs = 157; goto _out; 
	_out798: cs = 798; goto _out; 
	_out799: cs = 799; goto _out; 
	_out800: cs = 800; goto _out; 
	_out158: cs = 158; goto _out; 
	_out159: cs = 159; goto _out; 
	_out160: cs = 160; goto _out; 
	_out161: cs = 161; goto _out; 
	_out801: cs = 801; goto _out; 
	_out802: cs = 802; goto _out; 
	_out162: cs = 162; goto _out; 
	_out163: cs = 163; goto _out; 
	_out803: cs = 803; goto _out; 
	_out804: cs = 804; goto _out; 
	_out805: cs = 805; goto _out; 
	_out164: cs = 164; goto _out; 
	_out165: cs = 165; goto _out; 
	_out166: cs = 166; goto _out; 
	_out167: cs = 167; goto _out; 
	_out806: cs = 806; goto _out; 
	_out168: cs = 168; goto _out; 
	_out169: cs = 169; goto _out; 
	_out170: cs = 170; goto _out; 
	_out171: cs = 171; goto _out; 
	_out172: cs = 172; goto _out; 
	_out807: cs = 807; goto _out; 
	_out173: cs = 173; goto _out; 
	_out808: cs = 808; goto _out; 
	_out809: cs = 809; goto _out; 
	_out810: cs = 810; goto _out; 
	_out174: cs = 174; goto _out; 
	_out175: cs = 175; goto _out; 
	_out176: cs = 176; goto _out; 
	_out177: cs = 177; goto _out; 
	_out811: cs = 811; goto _out; 
	_out178: cs = 178; goto _out; 
	_out812: cs = 812; goto _out; 
	_out179: cs = 179; goto _out; 
	_out180: cs = 180; goto _out; 
	_out181: cs = 181; goto _out; 
	_out182: cs = 182; goto _out; 
	_out183: cs = 183; goto _out; 
	_out813: cs = 813; goto _out; 
	_out814: cs = 814; goto _out; 
	_out184: cs = 184; goto _out; 
	_out185: cs = 185; goto _out; 
	_out186: cs = 186; goto _out; 
	_out187: cs = 187; goto _out; 
	_out815: cs = 815; goto _out; 
	_out188: cs = 188; goto _out; 
	_out189: cs = 189; goto _out; 
	_out816: cs = 816; goto _out; 
	_out190: cs = 190; goto _out; 
	_out191: cs = 191; goto _out; 
	_out192: cs = 192; goto _out; 
	_out193: cs = 193; goto _out; 
	_out817: cs = 817; goto _out; 
	_out194: cs = 194; goto _out; 
	_out195: cs = 195; goto _out; 
	_out196: cs = 196; goto _out; 
	_out818: cs = 818; goto _out; 
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
	_out819: cs = 819; goto _out; 
	_out209: cs = 209; goto _out; 
	_out820: cs = 820; goto _out; 
	_out821: cs = 821; goto _out; 
	_out822: cs = 822; goto _out; 
	_out823: cs = 823; goto _out; 
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
	_out824: cs = 824; goto _out; 
	_out825: cs = 825; goto _out; 
	_out826: cs = 826; goto _out; 
	_out827: cs = 827; goto _out; 
	_out828: cs = 828; goto _out; 
	_out268: cs = 268; goto _out; 
	_out269: cs = 269; goto _out; 
	_out270: cs = 270; goto _out; 
	_out271: cs = 271; goto _out; 
	_out829: cs = 829; goto _out; 
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
	_out830: cs = 830; goto _out; 
	_out299: cs = 299; goto _out; 
	_out300: cs = 300; goto _out; 
	_out301: cs = 301; goto _out; 
	_out831: cs = 831; goto _out; 
	_out832: cs = 832; goto _out; 
	_out302: cs = 302; goto _out; 
	_out303: cs = 303; goto _out; 
	_out304: cs = 304; goto _out; 
	_out305: cs = 305; goto _out; 
	_out833: cs = 833; goto _out; 
	_out834: cs = 834; goto _out; 
	_out835: cs = 835; goto _out; 
	_out836: cs = 836; goto _out; 
	_out837: cs = 837; goto _out; 
	_out838: cs = 838; goto _out; 
	_out306: cs = 306; goto _out; 
	_out307: cs = 307; goto _out; 
	_out308: cs = 308; goto _out; 
	_out309: cs = 309; goto _out; 
	_out839: cs = 839; goto _out; 
	_out840: cs = 840; goto _out; 
	_out841: cs = 841; goto _out; 
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
	_out842: cs = 842; goto _out; 
	_out843: cs = 843; goto _out; 
	_out337: cs = 337; goto _out; 
	_out338: cs = 338; goto _out; 
	_out339: cs = 339; goto _out; 
	_out340: cs = 340; goto _out; 
	_out844: cs = 844; goto _out; 
	_out845: cs = 845; goto _out; 
	_out846: cs = 846; goto _out; 
	_out847: cs = 847; goto _out; 
	_out848: cs = 848; goto _out; 
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
	_out849: cs = 849; goto _out; 
	_out850: cs = 850; goto _out; 
	_out851: cs = 851; goto _out; 
	_out852: cs = 852; goto _out; 
	_out853: cs = 853; goto _out; 
	_out854: cs = 854; goto _out; 
	_out855: cs = 855; goto _out; 
	_out856: cs = 856; goto _out; 
	_out857: cs = 857; goto _out; 
	_out858: cs = 858; goto _out; 
	_out859: cs = 859; goto _out; 
	_out860: cs = 860; goto _out; 
	_out861: cs = 861; goto _out; 
	_out862: cs = 862; goto _out; 
	_out394: cs = 394; goto _out; 
	_out395: cs = 395; goto _out; 
	_out396: cs = 396; goto _out; 
	_out397: cs = 397; goto _out; 
	_out863: cs = 863; goto _out; 
	_out864: cs = 864; goto _out; 
	_out865: cs = 865; goto _out; 
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
	_out866: cs = 866; goto _out; 
	_out867: cs = 867; goto _out; 
	_out868: cs = 868; goto _out; 
	_out869: cs = 869; goto _out; 
	_out870: cs = 870; goto _out; 
	_out871: cs = 871; goto _out; 
	_out872: cs = 872; goto _out; 
	_out873: cs = 873; goto _out; 
	_out425: cs = 425; goto _out; 
	_out426: cs = 426; goto _out; 
	_out427: cs = 427; goto _out; 
	_out874: cs = 874; goto _out; 
	_out875: cs = 875; goto _out; 
	_out428: cs = 428; goto _out; 
	_out429: cs = 429; goto _out; 
	_out430: cs = 430; goto _out; 
	_out431: cs = 431; goto _out; 
	_out432: cs = 432; goto _out; 
	_out433: cs = 433; goto _out; 
	_out434: cs = 434; goto _out; 
	_out435: cs = 435; goto _out; 
	_out436: cs = 436; goto _out; 
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
	_out449: cs = 449; goto _out; 
	_out450: cs = 450; goto _out; 
	_out451: cs = 451; goto _out; 
	_out452: cs = 452; goto _out; 
	_out453: cs = 453; goto _out; 
	_out876: cs = 876; goto _out; 
	_out454: cs = 454; goto _out; 
	_out455: cs = 455; goto _out; 
	_out456: cs = 456; goto _out; 
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
	_out877: cs = 877; goto _out; 
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
	_out878: cs = 878; goto _out; 
	_out480: cs = 480; goto _out; 
	_out481: cs = 481; goto _out; 
	_out482: cs = 482; goto _out; 
	_out483: cs = 483; goto _out; 
	_out484: cs = 484; goto _out; 
	_out485: cs = 485; goto _out; 
	_out486: cs = 486; goto _out; 
	_out487: cs = 487; goto _out; 
	_out488: cs = 488; goto _out; 
	_out879: cs = 879; goto _out; 
	_out489: cs = 489; goto _out; 
	_out490: cs = 490; goto _out; 
	_out491: cs = 491; goto _out; 
	_out492: cs = 492; goto _out; 
	_out493: cs = 493; goto _out; 
	_out494: cs = 494; goto _out; 
	_out880: cs = 880; goto _out; 
	_out881: cs = 881; goto _out; 
	_out495: cs = 495; goto _out; 
	_out496: cs = 496; goto _out; 
	_out497: cs = 497; goto _out; 
	_out498: cs = 498; goto _out; 
	_out499: cs = 499; goto _out; 
	_out500: cs = 500; goto _out; 
	_out882: cs = 882; goto _out; 
	_out501: cs = 501; goto _out; 
	_out502: cs = 502; goto _out; 
	_out503: cs = 503; goto _out; 
	_out504: cs = 504; goto _out; 
	_out505: cs = 505; goto _out; 
	_out506: cs = 506; goto _out; 
	_out507: cs = 507; goto _out; 
	_out508: cs = 508; goto _out; 
	_out509: cs = 509; goto _out; 
	_out510: cs = 510; goto _out; 
	_out511: cs = 511; goto _out; 
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
	_out883: cs = 883; goto _out; 
	_out884: cs = 884; goto _out; 
	_out527: cs = 527; goto _out; 
	_out528: cs = 528; goto _out; 
	_out529: cs = 529; goto _out; 
	_out530: cs = 530; goto _out; 
	_out885: cs = 885; goto _out; 
	_out886: cs = 886; goto _out; 
	_out887: cs = 887; goto _out; 
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
	_out557: cs = 557; goto _out; 
	_out888: cs = 888; goto _out; 
	_out889: cs = 889; goto _out; 
	_out890: cs = 890; goto _out; 
	_out891: cs = 891; goto _out; 
	_out892: cs = 892; goto _out; 
	_out893: cs = 893; goto _out; 
	_out894: cs = 894; goto _out; 
	_out558: cs = 558; goto _out; 
	_out559: cs = 559; goto _out; 
	_out895: cs = 895; goto _out; 
	_out560: cs = 560; goto _out; 
	_out561: cs = 561; goto _out; 
	_out562: cs = 562; goto _out; 
	_out563: cs = 563; goto _out; 
	_out896: cs = 896; goto _out; 
	_out897: cs = 897; goto _out; 
	_out564: cs = 564; goto _out; 
	_out565: cs = 565; goto _out; 
	_out566: cs = 566; goto _out; 
	_out567: cs = 567; goto _out; 
	_out568: cs = 568; goto _out; 
	_out569: cs = 569; goto _out; 
	_out570: cs = 570; goto _out; 
	_out571: cs = 571; goto _out; 
	_out898: cs = 898; goto _out; 
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
	_out899: cs = 899; goto _out; 
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
	_out622: cs = 622; goto _out; 
	_out623: cs = 623; goto _out; 
	_out624: cs = 624; goto _out; 
	_out625: cs = 625; goto _out; 
	_out626: cs = 626; goto _out; 
	_out627: cs = 627; goto _out; 
	_out628: cs = 628; goto _out; 
	_out629: cs = 629; goto _out; 
	_out630: cs = 630; goto _out; 
	_out631: cs = 631; goto _out; 
	_out632: cs = 632; goto _out; 
	_out633: cs = 633; goto _out; 
	_out634: cs = 634; goto _out; 
	_out900: cs = 900; goto _out; 
	_out901: cs = 901; goto _out; 
	_out635: cs = 635; goto _out; 
	_out636: cs = 636; goto _out; 
	_out637: cs = 637; goto _out; 
	_out638: cs = 638; goto _out; 
	_out639: cs = 639; goto _out; 
	_out640: cs = 640; goto _out; 
	_out641: cs = 641; goto _out; 
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
	_out902: cs = 902; goto _out; 
	_out903: cs = 903; goto _out; 
	_out688: cs = 688; goto _out; 
	_out689: cs = 689; goto _out; 
	_out690: cs = 690; goto _out; 
	_out691: cs = 691; goto _out; 
	_out692: cs = 692; goto _out; 
	_out693: cs = 693; goto _out; 
	_out694: cs = 694; goto _out; 
	_out695: cs = 695; goto _out; 
	_out696: cs = 696; goto _out; 
	_out904: cs = 904; goto _out; 
	_out697: cs = 697; goto _out; 
	_out698: cs = 698; goto _out; 
	_out699: cs = 699; goto _out; 
	_out700: cs = 700; goto _out; 
	_out701: cs = 701; goto _out; 
	_out905: cs = 905; goto _out; 
	_out702: cs = 702; goto _out; 
	_out703: cs = 703; goto _out; 
	_out704: cs = 704; goto _out; 
	_out705: cs = 705; goto _out; 
	_out706: cs = 706; goto _out; 
	_out707: cs = 707; goto _out; 
	_out708: cs = 708; goto _out; 
	_out709: cs = 709; goto _out; 
	_out710: cs = 710; goto _out; 
	_out711: cs = 711; goto _out; 
	_out712: cs = 712; goto _out; 
	_out713: cs = 713; goto _out; 
	_out714: cs = 714; goto _out; 
	_out715: cs = 715; goto _out; 
	_out716: cs = 716; goto _out; 
	_out717: cs = 717; goto _out; 
	_out718: cs = 718; goto _out; 
	_out719: cs = 719; goto _out; 
	_out720: cs = 720; goto _out; 
	_out721: cs = 721; goto _out; 
	_out722: cs = 722; goto _out; 
	_out723: cs = 723; goto _out; 
	_out724: cs = 724; goto _out; 
	_out725: cs = 725; goto _out; 
	_out726: cs = 726; goto _out; 
	_out727: cs = 727; goto _out; 
	_out906: cs = 906; goto _out; 
	_out907: cs = 907; goto _out; 
	_out908: cs = 908; goto _out; 
	_out909: cs = 909; goto _out; 
	_out910: cs = 910; goto _out; 
	_out911: cs = 911; goto _out; 
	_out912: cs = 912; goto _out; 
	_out913: cs = 913; goto _out; 
	_out914: cs = 914; goto _out; 
	_out915: cs = 915; goto _out; 
	_out916: cs = 916; goto _out; 
	_out917: cs = 917; goto _out; 
	_out918: cs = 918; goto _out; 
	_out919: cs = 919; goto _out; 
	_out920: cs = 920; goto _out; 
	_out921: cs = 921; goto _out; 
	_out922: cs = 922; goto _out; 
	_out923: cs = 923; goto _out; 
	_out924: cs = 924; goto _out; 
	_out925: cs = 925; goto _out; 
	_out926: cs = 926; goto _out; 
	_out927: cs = 927; goto _out; 
	_out928: cs = 928; goto _out; 
	_out929: cs = 929; goto _out; 

	_out: {}
	}
#line 193 "superredcloth_inline.rl"

  return block;
}

void
rb_str_cat_escaped(str, tokstart, tokend)
  VALUE str;
  char *tokstart, *tokend;
{
  char *t = tokstart, *t2 = tokstart, *ch = NULL;
  if (tokend <= tokstart) return;

  while (t2 < tokend) {
    ch = NULL;
    switch (*t2)
    {
      case '&':  ch = "&amp;";    break;
      case '>':  ch = "&gt;";     break;
      case '<':  ch = "&lt;";     break;
      case '"':  ch = "&quot;";   break;
      case '\n': ch = "<br />\n"; break;
      case '\'': ch = "&#8217;";  break;
    }

    if (ch != NULL)
    {
      if (t2 > t)
        rb_str_cat(str, t, t2-t);
      rb_str_cat2(str, ch);
      t = t2 + 1;
    }

    t2++;
  }
  if (t2 > t)
    rb_str_cat(str, t, t2-t);
}

VALUE
superredcloth_inline2(formatter, str)
  VALUE formatter, str;
{
  StringValue(str);
  return superredcloth_inline(formatter, RSTRING(str)->ptr, RSTRING(str)->ptr + RSTRING(str)->len + 1);
}
