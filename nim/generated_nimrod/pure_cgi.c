/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct tstringtable109610 tstringtable109610;
typedef struct tcell38448 tcell38448;
typedef struct TNimType TNimType;
typedef struct tcellseq38464 tcellseq38464;
typedef struct tgcheap40416 tgcheap40416;
typedef struct tcellset38460 tcellset38460;
typedef struct tpagedesc38456 tpagedesc38456;
typedef struct tmemregion21810 tmemregion21810;
typedef struct tsmallchunk21038 tsmallchunk21038;
typedef struct tllchunk21804 tllchunk21804;
typedef struct tbigchunk21040 tbigchunk21040;
typedef struct tintset21015 tintset21015;
typedef struct ttrunk21011 ttrunk21011;
typedef struct tavlnode21808 tavlnode21808;
typedef struct tgcstat40414 tgcstat40414;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimObject TNimObject;
typedef struct TNimNode TNimNode;
typedef struct tkeyvaluepairseq109608 tkeyvaluepairseq109608;
typedef struct TY86506 TY86506;
typedef struct tbasechunk21036 tbasechunk21036;
typedef struct tfreecell21028 tfreecell21028;
struct tcell38448 {
NI Refcount;
TNimType* Typ;
};
struct tcellseq38464 {
NI Len;
NI Cap;
tcell38448** D;
};
struct tcellset38460 {
NI Counter;
NI Max;
tpagedesc38456* Head;
tpagedesc38456** Data;
};
typedef tsmallchunk21038* TY21822[512];
typedef ttrunk21011* ttrunkbuckets21013[256];
struct tintset21015 {
ttrunkbuckets21013 Data;
};
struct tmemregion21810 {
NI Minlargeobj;
NI Maxlargeobj;
TY21822 Freesmallchunks;
tllchunk21804* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk21040* Freechunkslist;
tintset21015 Chunkstarts;
tavlnode21808* Root;
tavlnode21808* Deleted;
tavlnode21808* Last;
tavlnode21808* Freeavlnodes;
};
struct tgcstat40414 {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct tgcheap40416 {
void* Stackbottom;
NI Cyclethreshold;
tcellseq38464 Zct;
tcellseq38464 Decstack;
tcellset38460 Cycleroots;
tcellseq38464 Tempstack;
NI Recgclock;
tmemregion21810 Region;
tgcstat40414 Stat;
};
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
typedef N_NIMCALL_PTR(void, TY889) (void* p, NI op);
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY889 marker;
};
struct TNimObject {
TNimType* m_type;
};
struct TY86506 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct tstringtable109610 {
  TNimObject Sup;
NI Counter;
tkeyvaluepairseq109608* Data;
NU8 Mode;
};
typedef NI TY21018[8];
struct tpagedesc38456 {
tpagedesc38456* Next;
NI Key;
TY21018 Bits;
};
struct tbasechunk21036 {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct tsmallchunk21038 {
  tbasechunk21036 Sup;
tsmallchunk21038* Next;
tsmallchunk21038* Prev;
tfreecell21028* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct tllchunk21804 {
NI Size;
NI Acc;
tllchunk21804* Next;
};
struct tbigchunk21040 {
  tbasechunk21036 Sup;
tbigchunk21040* Next;
tbigchunk21040* Prev;
NI Align;
NF Data;
};
struct ttrunk21011 {
ttrunk21011* Next;
NI Key;
TY21018 Bits;
};
typedef tavlnode21808* TY21814[2];
struct tavlnode21808 {
TY21814 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tfreecell21028 {
tfreecell21028* Next;
NI Zerofield;
};
struct tkeyvaluepairseq109608 {
  TGenericSeq Sup;
  TY86506 data[SEQ_DECL_SIZE];
};
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell38448*, usrtocell_41839)(void* usr);
static N_INLINE(void, rtladdzct_43402)(tcell38448* c);
N_NOINLINE(void, addzct_41815)(tcellseq38464* s, tcell38448* c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
static N_INLINE(void, addxmlchar_131246)(NimStringDesc** dest, NIM_CHAR c);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
STRING_LITERAL(TMP720, "&amp;", 5);
STRING_LITERAL(TMP721, "&lt;", 4);
STRING_LITERAL(TMP722, "&gt;", 4);
STRING_LITERAL(TMP723, "&quot;", 6);
tstringtable109610* gcookies_131788;
extern tgcheap40416 gch_40444;

static N_INLINE(tcell38448*, usrtocell_41839)(void* usr) {
	tcell38448* result;
	result = 0;
	result = ((tcell38448*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell38448))))));
	return result;
}
static N_INLINE(void, rtladdzct_43402)(tcell38448* c) {
	addzct_41815(&gch_40444.Zct, c);}
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tcell38448* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_41839(src);
		(*c).Refcount += 8;
	}	LA3: ;
	{
		tcell38448* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_41839((*dest));
		{
			(*c).Refcount -= 8;
			if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA11;
			rtladdzct_43402(c);		}		LA11: ;
	}	LA7: ;
	(*dest) = src;
}
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));	(*dest).Sup.len += (*src).Sup.len;
}
static N_INLINE(void, addxmlchar_131246)(NimStringDesc** dest, NIM_CHAR c) {
	switch (((NU8)(c))) {
	case 38:
	{
		(*dest) = resizeString((*dest), 5);
appendString((*dest), ((NimStringDesc*) &TMP720));
	}	break;
	case 60:
	{
		(*dest) = resizeString((*dest), 4);
appendString((*dest), ((NimStringDesc*) &TMP721));
	}	break;
	case 62:
	{
		(*dest) = resizeString((*dest), 4);
appendString((*dest), ((NimStringDesc*) &TMP722));
	}	break;
	case 34:
	{
		(*dest) = resizeString((*dest), 6);
appendString((*dest), ((NimStringDesc*) &TMP723));
	}	break;
	default:
	{
		(*dest) = addChar((*dest), c);
	}	break;
	}
}
N_NIMCALL(NimStringDesc*, xmlencode_131253)(NimStringDesc* s) {
	NimStringDesc* result;
	NI i_131266;
	NI HEX3Atmp_131268;
	NI res_131270;
	result = 0;
	result = rawNewString((NI64)(s->Sup.len + (NI)((NU64)(s->Sup.len) >> (NU64)(2))));
	i_131266 = 0;
	HEX3Atmp_131268 = 0;
	HEX3Atmp_131268 = (NI64)(s->Sup.len - 1);
	res_131270 = 0;
	while (1) {
		if (!(res_131270 <= HEX3Atmp_131268)) goto LA1;
		i_131266 = res_131270;
		addxmlchar_131246(&result, s->data[i_131266]);		res_131270 += 1;
	} LA1: ;
	return result;
}N_NOINLINE(void, purecgiInit)(void) {
	asgnRefNoCycle((void**) &gcookies_131788, NIM_NIL);
}

N_NOINLINE(void, purecgiDatInit)(void) {
}

