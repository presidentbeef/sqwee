/*  SkyByteRS.js v1.0-beta, May 17 2007
 *  (c) 2007 Aleksandras Ilarionovas (Alex)
 *
 *  SkyByteRS.js is freely distributable under the terms of an MIT-style license.
 *  For details, see the SkyByte.net web site: http://www.skybyte.net/scripts/
 *
 *--------------------------------------------------------------------------*/
if(!Prototype)	 	{ throw("SkyByteRS.js requires Prototype.js library");	}
else if(!SkyByte)	{ throw("SkyByteRS.js requires SkyByte.js library");	}
else if(!SkyByteDD)	{ throw("SkyByteRS.js requires SkyByteDD.js library");	}

var SkyByteRS = { Version: '1.2' };

var Resizes = {
	resizes		: [],
	resize		: {},
	resizing	: null,
	frameactive	: false,
	register:function(obj){
		if(this.resizes.length === 0){

			this.L  = Element.add('div',{},{position:'absolute',top:'-50px',left:'-50px'},{c:'resizel', a:document.body});
			this.R  = Element.add('div',{},{position:'absolute',top:'-50px',left:'-50px'},{c:'resizer', a:document.body});
			this.T  = Element.add('div',{},{position:'absolute',top:'-50px',left:'-50px'},{c:'resizet', a:document.body});
			this.B  = Element.add('div',{},{position:'absolute',top:'-50px',left:'-50px'},{c:'resizeb', a:document.body});

			this.TM = Element.add('div',{},{cursor:'s-resize' ,overflow:'hidden',position:'absolute',top:'-50px',left:'-50px'},{c:'resizeknob', a:document.body});	Drags.register(this.TM);
			this.BM = Element.add('div',{},{cursor:'s-resize' ,overflow:'hidden',position:'absolute',top:'-50px',left:'-50px'},{c:'resizeknob', a:document.body});	Drags.register(this.BM);
			this.LT = Element.add('div',{},{cursor:'se-resize',overflow:'hidden',position:'absolute',top:'-50px',left:'-50px'},{c:'resizeknob', a:document.body});	Drags.register(this.LT);
			this.LM = Element.add('div',{},{cursor:'e-resize' ,overflow:'hidden',position:'absolute',top:'-50px',left:'-50px'},{c:'resizeknob', a:document.body});	Drags.register(this.LM);
			this.LB = Element.add('div',{},{cursor:'ne-resize',overflow:'hidden',position:'absolute',top:'-50px',left:'-50px'},{c:'resizeknob', a:document.body});	Drags.register(this.LB);
			this.RT = Element.add('div',{},{cursor:'sw-resize',overflow:'hidden',position:'absolute',top:'-50px',left:'-50px'},{c:'resizeknob', a:document.body});	Drags.register(this.RT);
			this.RM = Element.add('div',{},{cursor:'e-resize' ,overflow:'hidden',position:'absolute',top:'-50px',left:'-50px'},{c:'resizeknob', a:document.body});	Drags.register(this.RM);
			this.RB = Element.add('div',{},{cursor:'nw-resize',overflow:'hidden',position:'absolute',top:'-50px',left:'-50px'},{c:'resizeknob', a:document.body});	Drags.register(this.RB);

 			this.eventMouseDown	=this._mouseDown.bindAsEventListener(this);	//knob event
 			this.eventMouseOver	=this._mouseOver.bindAsEventListener(this);	//knob event
 			this.eventMouseOut	=this._mouseOut.bindAsEventListener(this);	//knob event

 			Event.observe(this.TM, "mousedown", this.eventMouseDown);	Event.observe(this.TM, "mouseover", this.eventMouseOver);	Event.observe(this.TM, "mouseout",  this.eventMouseOut);
 			Event.observe(this.BM, "mousedown", this.eventMouseDown);	Event.observe(this.BM, "mouseover", this.eventMouseOver);	Event.observe(this.BM, "mouseout",  this.eventMouseOut);
 			Event.observe(this.LT, "mousedown", this.eventMouseDown);	Event.observe(this.LT, "mouseover", this.eventMouseOver);	Event.observe(this.LT, "mouseout",  this.eventMouseOut);
 			Event.observe(this.LM, "mousedown", this.eventMouseDown);	Event.observe(this.LM, "mouseover", this.eventMouseOver);	Event.observe(this.LM, "mouseout",  this.eventMouseOut);
 			Event.observe(this.LB, "mousedown", this.eventMouseDown);	Event.observe(this.LB, "mouseover", this.eventMouseOver);	Event.observe(this.LB, "mouseout",  this.eventMouseOut);
 			Event.observe(this.RT, "mousedown", this.eventMouseDown);	Event.observe(this.RT, "mouseover", this.eventMouseOver);	Event.observe(this.RT, "mouseout",  this.eventMouseOut);
 			Event.observe(this.RM, "mousedown", this.eventMouseDown);	Event.observe(this.RM, "mouseover", this.eventMouseOver);	Event.observe(this.RM, "mouseout",  this.eventMouseOut);
 			Event.observe(this.RB, "mousedown", this.eventMouseDown);	Event.observe(this.RB, "mouseover", this.eventMouseOver);	Event.observe(this.RB, "mouseout",  this.eventMouseOut);
		}

		this.resizes.push(obj);
	},
	unregister: function(el){
		this.hide_frame();
		this.resizes = this.resizes.reject(function(d) { return d.element==el; });
	},
	destroy: function(){ var i,o;
		if(this.resizes.length > 0){
			$A(this.resizes).each( function(o){
				if(o.destroy){ o.destroy(); }
			});
		}
		if(this.resizes.length === 0 && this.TM){
			this.resize={};
			Element.rem(this.T); Element.rem(this.B); Element.rem(this.L); Element.rem(this.R);
			Drags.unregister(this.TM); Element.rem(this.TM);
			Drags.unregister(this.TB); Element.rem(this.BM);
			Drags.unregister(this.LT); Element.rem(this.LT);
			Drags.unregister(this.LM); Element.rem(this.LM);
			Drags.unregister(this.LB); Element.rem(this.LB);
			Drags.unregister(this.RT); Element.rem(this.RT);
			Drags.unregister(this.RM); Element.rem(this.RM);
			Drags.unregister(this.RB); Element.rem(this.RB);
			Event.stopObserving(this, "mousedown", this.eventMouseDown);
			Event.stopObserving(this, "mouseover", this.eventMouseOver);
			Event.stopObserving(this, "mouseout",  this.eventMouseOut);
		}
		this.hide_frame();
	},
	is_resize: function(el){
		return this.resizes.detect(function(d) { return d.element==el; });
	},
	activate  : function(el){
		this.element=el; this.show_frame(Element.xywh(this.element));
		this.resize.element=el; //active element for compatibility wirh other classes
	},
	deactivate: function(){
		this.hide_frame();
	},
	show_frame: function(c){
		if(this.resizes.length > 0){
			this.frameactive=true;
			Element.showAt(this.L,{x:c.x, y:c.y, w:1, h:c.h});
			Element.showAt(this.R,{x:(c.x+c.w), y:c.y, w:1, h:c.h});
			Element.showAt(this.T,{x:c.x, y:c.y, w:c.w, h:1});
			Element.showAt(this.B,{x:c.x, y:(c.y+c.h), w:c.w, h:1});

			this.TM.style.left	= c.x + ((c.w/2)-4) + 'px';
			this.TM.style.top	= (c.y-2) + 'px';
			this.BM.style.left	= c.x + ((c.w/2)-4) + 'px';
			this.BM.style.top	= c.y + (c.h-4) + 'px';

			this.LT.style.left	= (c.x-3) + 'px';
			this.LT.style.top	= (c.y-2) + 'px';
			this.LM.style.left	= (c.x-3) + 'px';
			this.LM.style.top	= c.y + ((c.h/2)-3) + 'px';
			this.LB.style.left	= (c.x-3) + 'px';
			this.LB.style.top	= c.y + (c.h-4)+ 'px';

			this.RT.style.left	= c.x + (c.w-4) + 'px';
			this.RT.style.top	= (c.y-2) + 'px';
			this.RM.style.left	= c.x + (c.w-4) + 'px';
			this.RM.style.top	= c.y + ((c.h/2)-3) + 'px';
			this.RB.style.left	= c.x + (c.w-4) + 'px';
			this.RB.style.top	= c.y + (c.h-4) + 'px';
		}
	},
	hide_frame: function(){ var frame;
		if(this.frameactive){
			this.show_frame({x:-50,y:-50,w:10,h:10}); this.frameactive=false;
		}
	},
	border:function(el){ var cl,cwh,ewh;
		cl =Element.add('div',{},{background:'red',border:'0',margin:0,padding:0,visibility:'hidden'},{clone:el, a:el.parentNode});
		cwh=Element.wh(cl); ewh=Element.wh(el); Element.rem(cl);
		return {w:(ewh.w-cwh.w), h:(ewh.h-cwh.h)};
	},
	minmax: function(src){ var i,o,xy;
		var minW=0; var minH=0; var maxW=0; var maxH=0;
		//1. find parent outer dimensions 760px;
		var div0 = Element.add('div',{},{},{a:src.parentNode});	var parXY=Element.wh(div0);	Element.rem(div0);

		//2. find owner inner dimensions 300px;
		var div1 = Element.add('div',{},{position:'absolute',top:'0px',left:'0px'},{a:document.body});
		var div2 = Element.add('div',{},{width:'auto',height:'auto',float:'left'},{clone:src, txt:'', a:div1});

		//3. find owner margins
		var outXY=Element.xywh(div1); var innXY=Element.xywh(div2);	Element.rem(div1);
		var ml=innXY.x; var mt=innXY.y; var mr=outXY.w-(innXY.x+innXY.w); var mb=outXY.h-(innXY.y+innXY.h);

		//4. find owner inner dimensions 300px;
		var ownXY=Element.xywh(src);  //target element dimensions
		var els=src.getElementsByTagName('*');
		for (i=0, len=els.length; i<len; ++i){ o=els[i];
			xy=Element.xywh(o); mW=xy.x+xy.w; mH=xy.y+xy.h; if(mW>minW){minW=mW;} if(mH>minH){minH=mH;}
		}

		var a={};
		a.minW=minW-ownXY.x; if(a.minW<0){a.minW=0;}
		a.minH=minH-ownXY.y; if(a.minH<0){a.minH=0;}
		a.maxW=(parXY.w-mr-ml); a.maxH=(parXY.h-mt-mb); //= maxW(760) - margin left - margin right = 740
		a.w=ownXY.w; a.h=ownXY.h;
		//IE bug: element "margin:0 auto;" will return huge margins, [ ...300...] [element] [...300...]
		if(a.maxW<=0 || a.maxW<ownXY.w){ a.maxW=parXY.w; } if(a.maxH<=0 || a.maxH<ownXY.h){ a.maxH=parXY.h; }
		return a;
	},
	_mouseMove:function(e){ var c,newX,newY,m0,mm,mb,mx,dX,dY,rA;
		if(this.resizing){
			m0 = this.resizing.mouse;
			mm = this.resizing.wh;
			mb = this.resizing.border;
			mx = this.resizing.minmax;
			dX=(m0.x-Mouse.x); dY=(m0.y-Mouse.y); if(mm.h>0){ rA=(mm.w/mm.h); }else{ rA=1; }
			switch(this.resizing.knob){
				case this.RM: newX=(mm.w-dX);			newY=mm.h;						 break;
				case this.LM: newX=(mm.w+dX);			newY=mm.h;						 break;
				case this.TM: newX=mm.w;				newY=(mm.h+dY);					 break;
				case this.BM: newX=mm.w;				newY=(mm.h-dY);					 break;
				case this.RT: newY=(mm.h-dX); 			newX=Math.round((mm.w-(dX*rA))); break;
				case this.LT: dX=-dX; newY=(mm.h-dX);	newX=Math.round((mm.w-(dX*rA))); break;
				case this.RB: newY=(mm.h-dX);			newX=Math.round((mm.w-(dX*rA))); break;
				case this.LB: dX=-dX; newY=(mm.h-dX);	newX=Math.round((mm.w-(dX*rA))); break;
			}
			if(mx){	//control inner and outer dimensions
				if(newX>=mx.maxW){ newX=mx.maxW; }
				//if(newX<=mx.minW){ newX=mx.minW; }
			}
			newX=newX-mb.w; if(newX<0){newX=0;}
			newY=newY-mb.h; if(newY<0){newY=0;}

			this.element.style.width =newX+'px';
			this.element.style.height=newY+'px';
			this.show_frame(Element.xywh(this.element));
		}
	},
	_mouseDown:function(e){ var mx;
		var src=Event.element(e);
		if(src.className==='resizeknob'){
			switch(src){
				case this.TM: Drags.activate(this); break;
				case this.BM: Drags.activate(this); break;
				case this.LT: Drags.activate(this); break;
				case this.LM: Drags.activate(this); break;
				case this.LB: Drags.activate(this); break;
				case this.RT: Drags.activate(this); break;
				case this.RM: Drags.activate(this); break;
				case this.RB: Drags.activate(this); break;
			}
			mx = this.minmax(this.element);
			this.resizing = {
				knob	: src,
				mouse	:{ x:Mouse.x, y:Mouse.y },
				wh		:{ w:mx.w, h:mx.h },
				border	: this.border(this.element),
				minmax	: mx
			};
		}
		Event.stop(e);
	},
	_mouseUp:function(e){
		this.resizing=false; Browser.cursor('default');
	},
	_mouseOver:function(e){
		var src=Event.element(e); if(src.className==='resizeknob'){ src.style.background='black'; }
	},
	_mouseOut:function(e){
		var src=Event.element(e); if(src.className==='resizeknob'){ src.style.background='white'; }
	}

};

//----------------------------------------------------------------------------

var Resize = Class.create();
Resize.prototype = {
	initialize: function(el){
		this.element = $(el);
		this.options = Object.extend({
			event		: 'mousedown'
		}, arguments[1] || {});
		this.eventActivate=this.activate.bindAsEventListener(this);	Event.observe(this.element, this.options.event, this.eventActivate);
		Resizes.register(this);
	},
	activate:function(e){
		var el=Event.element(e);
		var r =Resizes.is_resize(el);
		if(r){ Resizes.activate(el); }
	},
	destroy: function(){
		Event.stopObserving(this.element, this.options.event, this.eventActivate);
		Resizes.unregister(this.element);
	}
};

//----------------------------------------------------------------------------

