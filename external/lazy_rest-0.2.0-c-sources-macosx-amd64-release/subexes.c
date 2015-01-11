/* Generated by Nimrod Compiler v0.9.6 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tformatparser195874 tformatparser195874;
typedef struct TY196342 TY196342;
typedef struct einvalidsubex195839 einvalidsubex195839;
typedef struct einvalidvalue2855 einvalidvalue2855;
typedef struct esynch2833 esynch2833;
typedef struct E_Base E_Base;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tcell44135 tcell44135;
typedef struct tcellseq44151 tcellseq44151;
typedef struct tgcheap46216 tgcheap46216;
typedef struct tcellset44147 tcellset44147;
typedef struct tpagedesc44143 tpagedesc44143;
typedef struct tmemregion26410 tmemregion26410;
typedef struct tsmallchunk25640 tsmallchunk25640;
typedef struct tllchunk26404 tllchunk26404;
typedef struct tbigchunk25642 tbigchunk25642;
typedef struct tintset25617 tintset25617;
typedef struct ttrunk25613 ttrunk25613;
typedef struct tavlnode26408 tavlnode26408;
typedef struct tgcstat46214 tgcstat46214;
typedef struct tbasechunk25638 tbasechunk25638;
typedef struct tfreecell25630 tfreecell25630;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tformatparser195874  {
NCSTRING F;
NI Num;
NI I;
NI Linelen;
};
struct TY196342 {
NI Field0;
NI Field1;
};
typedef N_NIMCALL_PTR(void, TY2689) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY2694) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY2689 marker;
TY2694 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  E_Base  {
  TNimObject Sup;
E_Base* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
struct  esynch2833  {
  E_Base Sup;
};
struct  einvalidvalue2855  {
  esynch2833 Sup;
};
struct  einvalidsubex195839  {
  einvalidvalue2855 Sup;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tcell44135  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq44151  {
NI Len;
NI Cap;
tcell44135** D;
};
struct  tcellset44147  {
NI Counter;
NI Max;
tpagedesc44143* Head;
tpagedesc44143** Data;
};
typedef tsmallchunk25640* TY26422[512];
typedef ttrunk25613* ttrunkbuckets25615[256];
struct  tintset25617  {
ttrunkbuckets25615 Data;
};
struct  tmemregion26410  {
NI Minlargeobj;
NI Maxlargeobj;
TY26422 Freesmallchunks;
tllchunk26404* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk25642* Freechunkslist;
tintset25617 Chunkstarts;
tavlnode26408* Root;
tavlnode26408* Deleted;
tavlnode26408* Last;
tavlnode26408* Freeavlnodes;
};
struct  tgcstat46214  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap46216  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq44151 Zct;
tcellseq44151 Decstack;
tcellset44147 Cycleroots;
tcellseq44151 Tempstack;
NI Recgclock;
tmemregion26410 Region;
tgcstat46214 Stat;
};
typedef NI TY25620[8];
struct  tpagedesc44143  {
tpagedesc44143* Next;
NI Key;
TY25620 Bits;
};
struct  tbasechunk25638  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk25640  {
  tbasechunk25638 Sup;
tsmallchunk25640* Next;
tsmallchunk25640* Prev;
tfreecell25630* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk26404  {
NI Size;
NI Acc;
tllchunk26404* Next;
};
struct  tbigchunk25642  {
  tbasechunk25638 Sup;
tbigchunk25642* Next;
tbigchunk25642* Prev;
NI Align;
NF Data;
};
struct  ttrunk25613  {
ttrunk25613* Next;
NI Key;
TY25620 Bits;
};
typedef tavlnode26408* TY26414[2];
struct  tavlnode26408  {
TY26414 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tfreecell25630  {
tfreecell25630* Next;
NI Zerofield;
};
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(void, nfrmtAddf)(NimStringDesc** s, NimStringDesc* formatstr, NimStringDesc** a, NI aLen0);
N_NIMCALL(void, scandollar_196069)(tformatparser195874* p, NimStringDesc** a, NI aLen0, NimStringDesc** s);
static N_INLINE(void, emitchar_196080)(tformatparser195874* p, NimStringDesc** x, NIM_CHAR ch);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(TY196342, scanslice_196336)(tformatparser195874* p, NimStringDesc** a, NI aLen0);
N_NOINLINE(void, raiseinvalidformat_195843)(NimStringDesc* msg);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP707)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell44135*, usrtocell_47846)(void* usr);
static N_INLINE(void, rtladdzct_49404)(tcell44135* c);
N_NOINLINE(void, addzct_47817)(tcellseq44151* s, tcell44135* c);
N_NIMCALL(void, raiseException)(E_Base* e, NCSTRING ename);
N_NIMCALL(NI, getformatarg_195898)(tformatparser195874* p, NimStringDesc** a, NI aLen0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NI, findnormalized_195805)(NimStringDesc* x, NimStringDesc** inarray, NI inarrayLen0);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NI, nsuParseInt)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
static N_INLINE(void, emitstr_196134)(tformatparser195874* p, NimStringDesc** x, NimStringDesc* y);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(void, scanbranch_196217)(tformatparser195874* p, NimStringDesc** a, NI aLen0, NimStringDesc** x, NI choice);
N_NIMCALL(void, scanquote_196159)(tformatparser195874* p, NimStringDesc** x, NIM_BOOL toadd);
static N_INLINE(void, emitstrlinear_196105)(tformatparser195874* p, NimStringDesc** x, NimStringDesc* y);
STRING_LITERAL(TMP708, "invalid format string: ", 23);
STRING_LITERAL(TMP709, "\'{\' expected", 12);
STRING_LITERAL(TMP710, "", 0);
STRING_LITERAL(TMP711, "\'#\', \'$\', number or identifier expected", 39);
STRING_LITERAL(TMP712, "index out of bounds: ", 21);
STRING_LITERAL(TMP713, "\'}\' expected", 12);
STRING_LITERAL(TMP714, "closing \"\'\" expected", 20);
STRING_LITERAL(TMP715, "closing \']\' expected", 20);
STRING_LITERAL(TMP716, "unit \'c\' (chars) or \'i\' (items) expected", 40);
extern TNimType NTI2855; /* EInvalidValue */
TNimType NTI195839; /* EInvalidSubex */
TNimType NTI195849; /* ref EInvalidSubex */
extern tgcheap46216 gch_46244;

static N_INLINE(void, emitchar_196080)(tformatparser195874* p, NimStringDesc** x, NIM_CHAR ch) {
	(*x) = addChar((*x), ch);
	{
		if (!((NU8)(ch) == (NU8)(10))) goto LA3;
		(*p).Linelen = 0;
	}
	goto LA1;
	LA3: ;
	{
		(*p).Linelen += 1;
	}
	LA1: ;
}
N_NIMCALL(void, TMP707)(void* p, NI op) {
	einvalidsubex195839* a;
	a = (einvalidsubex195839*)p;
	nimGCvisit((void*)(*a).Sup.Sup.Sup.parent, op);
	nimGCvisit((void*)(*a).Sup.Sup.Sup.message, op);
	nimGCvisit((void*)(*a).Sup.Sup.Sup.trace, op);
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(tcell44135*, usrtocell_47846)(void* usr) {
	tcell44135* result;
	result = 0;
	result = ((tcell44135*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell44135))))));
	return result;
}

static N_INLINE(void, rtladdzct_49404)(tcell44135* c) {
	addzct_47817(&gch_46244.Zct, c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tcell44135* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_47846(src);
		(*c).Refcount += 8;
	}
	LA3: ;
	{
		tcell44135* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_47846((*dest));
		{
			(*c).Refcount -= 8;
			if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA11;
			rtladdzct_49404(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NOINLINE(void, raiseinvalidformat_195843)(NimStringDesc* msg) {
	einvalidsubex195839* e_195848;
	NimStringDesc* LOC1;
	e_195848 = 0;
	e_195848 = (einvalidsubex195839*) newObj((&NTI195849), sizeof(einvalidsubex195839));
	(*e_195848).Sup.Sup.Sup.Sup.m_type = (&NTI195839);
	LOC1 = 0;
	LOC1 = rawNewString(msg->Sup.len + 23);
appendString(LOC1, ((NimStringDesc*) &TMP708));
appendString(LOC1, msg);
	asgnRefNoCycle((void**) &(*e_195848).Sup.Sup.Sup.message, LOC1);
	raiseException((E_Base*)e_195848, "EInvalidSubex");
}

N_NIMCALL(NI, findnormalized_195805)(NimStringDesc* x, NimStringDesc** inarray, NI inarrayLen0) {
	NI result;
	NI i;
	result = 0;
	i = 0;
	{
		while (1) {
			if (!(i < (inarrayLen0-1))) goto LA2;
			{
				NI LOC5;
				LOC5 = 0;
				LOC5 = nsuCmpIgnoreStyle(x, inarray[i]);
				if (!(LOC5 == 0)) goto LA6;
				result = i;
				goto BeforeRet;
			}
			LA6: ;
			i += 2;
		} LA2: ;
	}
	result = -1;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NI, getformatarg_195898)(tformatparser195874* p, NimStringDesc** a, NI aLen0) {
	NI result;
	NI i;
	NCSTRING f;
	result = 0;
	i = (*p).I;
	f = (*p).F;
	switch (((NU8)(f[i]))) {
	case 35:
	{
		result = (*p).Num;
		i += 1;
		(*p).Num += 1;
	}
	break;
	case 49 ... 57:
	case 45:
	{
		NI j;
		NIM_BOOL negative;
		j = 0;
		negative = ((NU8)(f[i]) == (NU8)(45));
		{
			if (!negative) goto LA5;
			i += 1;
		}
		LA5: ;
		{
			while (1) {
				if (!(((NU8)(f[i])) >= ((NU8)(48)) && ((NU8)(f[i])) <= ((NU8)(57)))) goto LA8;
				j = (NI64)((NI64)((NI64)(j * 10) + ((NI) (((NU8)(f[i]))))) - 48);
				i += 1;
			} LA8: ;
		}
		{
			if (!!(negative)) goto LA11;
			result = (NI64)(j - 1);
		}
		goto LA9;
		LA11: ;
		{
			result = (NI64)(aLen0 - j);
		}
		LA9: ;
	}
	break;
	case 97 ... 122:
	case 65 ... 90:
	case 128 ... 255:
	case 95:
	{
		NimStringDesc* name;
		NI LOC17;
		name = copyString(((NimStringDesc*) &TMP710));
		{
			while (1) {
				if (!(((NU8)(f[i])) >= ((NU8)(97)) && ((NU8)(f[i])) <= ((NU8)(122)) || ((NU8)(f[i])) >= ((NU8)(65)) && ((NU8)(f[i])) <= ((NU8)(90)) || ((NU8)(f[i])) >= ((NU8)(48)) && ((NU8)(f[i])) <= ((NU8)(57)) || ((NU8)(f[i])) >= ((NU8)(128)) && ((NU8)(f[i])) <= ((NU8)(255)) || ((NU8)(f[i])) == ((NU8)(95)))) goto LA16;
				name = addChar(name, f[i]);
				i += 1;
			} LA16: ;
		}
		LOC17 = 0;
		LOC17 = findnormalized_195805(name, a, aLen0);
		result = (NI64)(LOC17 + 1);
	}
	break;
	case 36:
	{
		NI LOC19;
		i += 1;
		(*p).I = i;
		result = getformatarg_195898(p, a, aLen0);
		i = (*p).I;
		LOC19 = 0;
		LOC19 = nsuParseInt(a[result]);
		result = (NI64)(LOC19 - 1);
	}
	break;
	default:
	{
		raiseinvalidformat_195843(((NimStringDesc*) &TMP711));
	}
	break;
	}
	{
		NimStringDesc* LOC25;
		NimStringDesc* LOC26;
		if (!((NU64)(aLen0) <= (NU64)(result))) goto LA23;
		LOC25 = 0;
		LOC26 = 0;
		LOC26 = nimIntToStr(result);
		LOC25 = rawNewString(LOC26->Sup.len + 21);
appendString(LOC25, ((NimStringDesc*) &TMP712));
appendString(LOC25, LOC26);
		raiseinvalidformat_195843(LOC25);
	}
	LA23: ;
	(*p).I = i;
	return result;
}

N_NIMCALL(TY196342, scanslice_196336)(tformatparser195874* p, NimStringDesc** a, NI aLen0) {
	TY196342 result;
	NIM_BOOL slice;
	NI i;
	NCSTRING f;
	memset((void*)&result, 0, sizeof(result));
	slice = NIM_FALSE;
	i = (*p).I;
	f = (*p).F;
	{
		if (!((NU8)(f[i]) == (NU8)(123))) goto LA3;
		i += 1;
	}
	goto LA1;
	LA3: ;
	{
		raiseinvalidformat_195843(((NimStringDesc*) &TMP709));
	}
	LA1: ;
	{
		NIM_BOOL LOC8;
		LOC8 = 0;
		LOC8 = ((NU8)(f[i]) == (NU8)(46));
		if (!(LOC8)) goto LA9;
		LOC8 = ((NU8)(f[(NI64)(i + 1)]) == (NU8)(46));
		LA9: ;
		if (!LOC8) goto LA10;
		i += 2;
		slice = NIM_TRUE;
	}
	goto LA6;
	LA10: ;
	{
		(*p).I = i;
		result.Field0 = getformatarg_195898(p, a, aLen0);
		i = (*p).I;
		{
			NIM_BOOL LOC15;
			LOC15 = 0;
			LOC15 = ((NU8)(f[i]) == (NU8)(46));
			if (!(LOC15)) goto LA16;
			LOC15 = ((NU8)(f[(NI64)(i + 1)]) == (NU8)(46));
			LA16: ;
			if (!LOC15) goto LA17;
			i += 2;
			slice = NIM_TRUE;
		}
		LA17: ;
	}
	LA6: ;
	{
		if (!slice) goto LA21;
		{
			if (!!(((NU8)(f[i]) == (NU8)(125)))) goto LA25;
			(*p).I = i;
			result.Field1 = getformatarg_195898(p, a, aLen0);
			i = (*p).I;
		}
		goto LA23;
		LA25: ;
		{
			result.Field1 = (aLen0-1);
		}
		LA23: ;
	}
	goto LA19;
	LA21: ;
	{
		result.Field1 = result.Field0;
	}
	LA19: ;
	{
		if (!!(((NU8)(f[i]) == (NU8)(125)))) goto LA31;
		raiseinvalidformat_195843(((NimStringDesc*) &TMP713));
	}
	LA31: ;
	i += 1;
	(*p).I = i;
	return result;
}

static N_INLINE(void, emitstr_196134)(tformatparser195874* p, NimStringDesc** x, NimStringDesc* y) {
	(*x) = resizeString((*x), y->Sup.len + 0);
appendString((*x), y);
	(*p).Linelen += y->Sup.len;
}

N_NIMCALL(void, scanquote_196159)(tformatparser195874* p, NimStringDesc** x, NIM_BOOL toadd) {
	NI i;
	NCSTRING f;
	i = (NI64)((*p).I + 1);
	f = (*p).F;
	{
		while (1) {
			{
				if (!((NU8)(f[i]) == (NU8)(39))) goto LA5;
				i += 1;
				{
					if (!!(((NU8)(f[i]) == (NU8)(39)))) goto LA9;
					goto LA1;
				}
				LA9: ;
				i += 1;
				{
					if (!toadd) goto LA13;
					emitchar_196080(p, x, 39);
				}
				LA13: ;
			}
			goto LA3;
			LA5: ;
			{
				if (!((NU8)(f[i]) == (NU8)(0))) goto LA16;
				raiseinvalidformat_195843(((NimStringDesc*) &TMP714));
			}
			goto LA3;
			LA16: ;
			{
				{
					if (!toadd) goto LA21;
					emitchar_196080(p, x, f[i]);
				}
				LA21: ;
				i += 1;
			}
			LA3: ;
		}
	} LA1: ;
	(*p).I = i;
}

N_NIMCALL(void, scanbranch_196217)(tformatparser195874* p, NimStringDesc** a, NI aLen0, NimStringDesc** x, NI choice) {
	NI i;
	NCSTRING f;
	NI c;
	NI elsepart;
	NIM_BOOL toadd;
	i = (*p).I;
	f = (*p).F;
	c = 0;
	elsepart = i;
	toadd = (choice == 0);
	{
		while (1) {
			switch (((NU8)(f[i]))) {
			case 93:
			{
				goto LA1;
			}
			break;
			case 124:
			{
				i += 1;
				elsepart = i;
				c += 1;
				{
					if (!toadd) goto LA7;
					goto LA1;
				}
				LA7: ;
				toadd = (choice == c);
			}
			break;
			case 39:
			{
				(*p).I = i;
				scanquote_196159(p, x, toadd);
				i = (*p).I;
			}
			break;
			case 0:
			{
				raiseinvalidformat_195843(((NimStringDesc*) &TMP715));
			}
			break;
			default:
			{
				{
					if (!toadd) goto LA14;
					{
						if (!((NU8)(f[i]) == (NU8)(36))) goto LA18;
						i += 1;
						(*p).I = i;
						scandollar_196069(p, a, aLen0, x);
						i = (*p).I;
					}
					goto LA16;
					LA18: ;
					{
						emitchar_196080(p, x, f[i]);
						i += 1;
					}
					LA16: ;
				}
				goto LA12;
				LA14: ;
				{
					i += 1;
				}
				LA12: ;
			}
			break;
			}
		}
	} LA1: ;
	{
		NIM_BOOL LOC24;
		NI last;
		LOC24 = 0;
		LOC24 = !(toadd);
		if (!(LOC24)) goto LA25;
		LOC24 = (0 <= choice);
		LA25: ;
		if (!LOC24) goto LA26;
		last = i;
		i = elsepart;
		{
			while (1) {
				switch (((NU8)(f[i]))) {
				case 124:
				case 93:
				{
					goto LA28;
				}
				break;
				case 39:
				{
					(*p).I = i;
					scanquote_196159(p, x, NIM_TRUE);
					i = (*p).I;
				}
				break;
				case 36:
				{
					i += 1;
					(*p).I = i;
					scandollar_196069(p, a, aLen0, x);
					i = (*p).I;
				}
				break;
				default:
				{
					emitchar_196080(p, x, f[i]);
					i += 1;
				}
				break;
				}
			}
		} LA28: ;
		i = last;
	}
	LA26: ;
	(*p).I = (NI64)(i + 1);
}

static N_INLINE(void, emitstrlinear_196105)(tformatparser195874* p, NimStringDesc** x, NimStringDesc* y) {
	{
		NIM_CHAR ch_196112;
		NI i_196116;
		NI l_196118;
		ch_196112 = 0;
		i_196116 = 0;
		l_196118 = y->Sup.len;
		{
			while (1) {
				if (!(i_196116 < l_196118)) goto LA3;
				ch_196112 = y->data[i_196116];
				emitchar_196080(p, x, ch_196112);
				i_196116 += 1;
			} LA3: ;
		}
	}
}

N_NIMCALL(void, scandollar_196069)(tformatparser195874* p, NimStringDesc** a, NI aLen0, NimStringDesc** s) {
	NI i;
	NCSTRING f;
	i = (*p).I;
	f = (*p).F;
	switch (((NU8)(f[i]))) {
	case 36:
	{
		emitchar_196080(p, s, 36);
		i += 1;
	}
	break;
	case 123:
	{
		TY196342 LOC3;
		NI x;
		NI y;
		(*p).I = i;
		LOC3 = scanslice_196336(p, a, aLen0);
		x = LOC3.Field0;
		y = LOC3.Field1;
		i = (*p).I;
		{
			NI j_196437;
			NI res_196666;
			j_196437 = 0;
			res_196666 = x;
			{
				while (1) {
					if (!(res_196666 <= y)) goto LA6;
					j_196437 = res_196666;
					emitstr_196134(p, s, a[j_196437]);
					res_196666 += 1;
				} LA6: ;
			}
		}
	}
	break;
	case 91:
	{
		NI start;
		NI x;
		NI last;
		NI choice;
		i += 1;
		start = i;
		(*p).I = i;
		scanbranch_196217(p, a, aLen0, s, -1);
		i = (*p).I;
		x = 0;
		{
			if (!((NU8)(f[i]) == (NU8)(123))) goto LA10;
			i += 1;
			(*p).I = i;
			x = getformatarg_195898(p, a, aLen0);
			i = (*p).I;
			{
				if (!!(((NU8)(f[i]) == (NU8)(125)))) goto LA14;
				raiseinvalidformat_195843(((NimStringDesc*) &TMP713));
			}
			LA14: ;
			i += 1;
		}
		goto LA8;
		LA10: ;
		{
			(*p).I = i;
			x = getformatarg_195898(p, a, aLen0);
			i = (*p).I;
		}
		LA8: ;
		last = i;
		choice = nsuParseInt(a[x]);
		i = start;
		(*p).I = i;
		scanbranch_196217(p, a, aLen0, s, choice);
		i = (*p).I;
		i = last;
	}
	break;
	case 39:
	{
		NimStringDesc* sep;
		NI oldlinelen_196480;
		sep = copyString(((NimStringDesc*) &TMP710));
		oldlinelen_196480 = (*p).Linelen;
		(*p).I = i;
		scanquote_196159(p, &sep, NIM_TRUE);
		i = (*p).I;
		(*p).Linelen = oldlinelen_196480;
		{
			TY196342 LOC22;
			NI x;
			NI y;
			NI l;
			if (!((NU8)(f[i]) == (NU8)(126))) goto LA20;
			i += 1;
			(*p).I = i;
			LOC22 = scanslice_196336(p, a, aLen0);
			x = LOC22.Field0;
			y = LOC22.Field1;
			i = (*p).I;
			l = 0;
			{
				NI j_196507;
				NI res_196672;
				j_196507 = 0;
				res_196672 = x;
				{
					while (1) {
						if (!(res_196672 <= y)) goto LA25;
						j_196507 = res_196672;
						l += a[j_196507]->Sup.len;
						res_196672 += 1;
					} LA25: ;
				}
			}
			{
				if (!(0 < l)) goto LA28;
				emitstrlinear_196105(p, s, sep);
				{
					NI j_196531;
					NI res_196677;
					j_196531 = 0;
					res_196677 = x;
					{
						while (1) {
							if (!(res_196677 <= y)) goto LA32;
							j_196531 = res_196677;
							emitstr_196134(p, s, a[j_196531]);
							res_196677 += 1;
						} LA32: ;
					}
				}
			}
			LA28: ;
		}
		goto LA18;
		LA20: ;
		{
			{
				TY196342 LOC68;
				NI x;
				NI y;
				{
					NI maxlen;
					NimStringDesc* indent;
					maxlen = 0;
					switch (((NU8)(f[i]))) {
					case 48 ... 57:
					{
						{
							while (1) {
								if (!(((NU8)(f[i])) >= ((NU8)(48)) && ((NU8)(f[i])) <= ((NU8)(57)))) goto LA38;
								maxlen = (NI64)((NI64)((NI64)(maxlen * 10) + ((NI) (((NU8)(f[i]))))) - 48);
								i += 1;
							} LA38: ;
						}
					}
					break;
					case 36:
					{
						(*p).I = i;
						maxlen = getformatarg_195898(p, a, aLen0);
						i = (*p).I;
					}
					break;
					default:
					{
						goto LA35;
					}
					break;
					}
					indent = copyString(((NimStringDesc*) &TMP710));
					switch (((NU8)(f[i]))) {
					case 105:
					{
						NI oldlinelen_196590;
						TY196342 LOC42;
						NI x;
						NI y;
						NI items;
						i += 1;
						oldlinelen_196590 = (*p).Linelen;
						(*p).I = i;
						scanquote_196159(p, &indent, NIM_TRUE);
						i = (*p).I;
						(*p).Linelen = oldlinelen_196590;
						(*p).I = i;
						LOC42 = scanslice_196336(p, a, aLen0);
						x = LOC42.Field0;
						y = LOC42.Field1;
						i = (*p).I;
						{
							if (!(maxlen < 1)) goto LA45;
							emitstrlinear_196105(p, s, indent);
						}
						LA45: ;
						items = 1;
						emitstr_196134(p, s, a[x]);
						{
							NI j_196606;
							NI HEX3Atmp_196681;
							NI res_196684;
							j_196606 = 0;
							HEX3Atmp_196681 = 0;
							HEX3Atmp_196681 = (NI64)(x + 1);
							res_196684 = HEX3Atmp_196681;
							{
								while (1) {
									if (!(res_196684 <= y)) goto LA49;
									j_196606 = res_196684;
									emitstr_196134(p, s, sep);
									{
										if (!(maxlen <= items)) goto LA52;
										emitstrlinear_196105(p, s, indent);
										items = 0;
									}
									LA52: ;
									emitstr_196134(p, s, a[j_196606]);
									items += 1;
									res_196684 += 1;
								} LA49: ;
							}
						}
					}
					break;
					case 99:
					{
						NI oldlinelen_196632;
						TY196342 LOC55;
						NI x;
						NI y;
						i += 1;
						oldlinelen_196632 = (*p).Linelen;
						(*p).I = i;
						scanquote_196159(p, &indent, NIM_TRUE);
						i = (*p).I;
						(*p).Linelen = oldlinelen_196632;
						(*p).I = i;
						LOC55 = scanslice_196336(p, a, aLen0);
						x = LOC55.Field0;
						y = LOC55.Field1;
						i = (*p).I;
						{
							if (!(maxlen < (NI64)((*p).Linelen + a[x]->Sup.len))) goto LA58;
							emitstrlinear_196105(p, s, indent);
						}
						LA58: ;
						emitstr_196134(p, s, a[x]);
						{
							NI j_196647;
							NI HEX3Atmp_196687;
							NI res_196690;
							j_196647 = 0;
							HEX3Atmp_196687 = 0;
							HEX3Atmp_196687 = (NI64)(x + 1);
							res_196690 = HEX3Atmp_196687;
							{
								while (1) {
									if (!(res_196690 <= y)) goto LA62;
									j_196647 = res_196690;
									emitstr_196134(p, s, sep);
									{
										if (!(maxlen < (NI64)((*p).Linelen + a[j_196647]->Sup.len))) goto LA65;
										emitstrlinear_196105(p, s, indent);
									}
									LA65: ;
									emitstr_196134(p, s, a[j_196647]);
									res_196690 += 1;
								} LA62: ;
							}
						}
					}
					break;
					default:
					{
						raiseinvalidformat_195843(((NimStringDesc*) &TMP716));
					}
					break;
					}
					goto LA34;
				} LA35: ;
				(*p).I = i;
				LOC68 = scanslice_196336(p, a, aLen0);
				x = LOC68.Field0;
				y = LOC68.Field1;
				i = (*p).I;
				emitstr_196134(p, s, a[x]);
				{
					NI j_196661;
					NI HEX3Atmp_196693;
					NI res_196696;
					j_196661 = 0;
					HEX3Atmp_196693 = 0;
					HEX3Atmp_196693 = (NI64)(x + 1);
					res_196696 = HEX3Atmp_196693;
					{
						while (1) {
							if (!(res_196696 <= y)) goto LA71;
							j_196661 = res_196696;
							emitstr_196134(p, s, sep);
							emitstr_196134(p, s, a[j_196661]);
							res_196696 += 1;
						} LA71: ;
					}
				}
			} LA34: ;
		}
		LA18: ;
	}
	break;
	default:
	{
		NI x;
		(*p).I = i;
		x = getformatarg_195898(p, a, aLen0);
		i = (*p).I;
		emitstr_196134(p, s, a[x]);
	}
	break;
	}
	(*p).I = i;
}

N_NIMCALL(void, nfrmtAddf)(NimStringDesc** s, NimStringDesc* formatstr, NimStringDesc** a, NI aLen0) {
	tformatparser195874 p;
	NI i;
	memset((void*)&p, 0, sizeof(p));
	p.F = formatstr->data;
	i = 0;
	{
		while (1) {
			if (!(i < formatstr->Sup.len)) goto LA2;
			{
				if (!((NU8)(p.F[i]) == (NU8)(36))) goto LA5;
				i += 1;
				p.I = i;
				scandollar_196069(&p, a, aLen0, s);
				i = p.I;
			}
			goto LA3;
			LA5: ;
			{
				emitchar_196080(&p, s, p.F[i]);
				i += 1;
			}
			LA3: ;
		} LA2: ;
	}
}

N_NIMCALL(NimStringDesc*, nfrmtFormatOpenArray)(NimStringDesc* formatstr, NimStringDesc** a, NI aLen0) {
	NimStringDesc* result;
	result = 0;
	result = rawNewString((NI64)(formatstr->Sup.len + (NI)((NU64)(aLen0) << (NU64)(4))));
	nfrmtAddf(&result, formatstr, a, aLen0);
	return result;
}

N_NIMCALL(NimStringDesc*, subex_196775)(NimStringDesc* s) {
	NimStringDesc* result;
	result = 0;
	result = copyString(s);
	return result;
}
N_NOINLINE(void, HEX00_subexesInit)(void) {
}

N_NOINLINE(void, HEX00_subexesDatInit)(void) {
static TNimNode TMP87[1];
NTI195839.size = sizeof(einvalidsubex195839);
NTI195839.kind = 17;
NTI195839.base = (&NTI2855);
TMP87[0].len = 0; TMP87[0].kind = 2;
NTI195839.node = &TMP87[0];
NTI195849.size = sizeof(einvalidsubex195839*);
NTI195849.kind = 22;
NTI195849.base = (&NTI195839);
NTI195849.marker = TMP707;
}
