/* Generated by Nimrod Compiler v0.9.6 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <sys/stat.h>

#include <sys/types.h>

#include <sys/time.h>

#include <string.h>

#include <crt_externs.h>

#include <stdlib.h>

#include <errno.h>
typedef struct TY117411 TY117411;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY115204 TY115204;
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
typedef struct eos2839 eos2839;
typedef struct esystem2835 esystem2835;
typedef struct esynch2833 esynch2833;
typedef struct E_Base E_Base;
typedef struct TNimObject TNimObject;
typedef struct tkeyvaluepair127808 tkeyvaluepair127808;
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
struct TY115204 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
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
struct  esystem2835  {
  esynch2833 Sup;
};
struct  eos2839  {
  esystem2835 Sup;
NI32 Errorcode;
};
struct tkeyvaluepair127808 {
NimStringDesc* Field0;
NimStringDesc* Field1;
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
struct TY117411 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
N_NIMCALL(NimStringDesc*, nosjoinPath)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NI, parentdirpos_114966)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_74028, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NI, findenvvar_118004)(NimStringDesc* key);
N_NIMCALL(void, getenvvarsc_117604)(void);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP209)(void* p, NI op);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell44135*, usrtocell_47846)(void* usr);
static N_INLINE(void, rtladdzct_49404)(tcell44135* c);
N_NOINLINE(void, addzct_47817)(tcellseq44151* s, tcell44135* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* s, NimStringDesc* prefix);
N_NIMCALL(NI, nsuFindChar)(NimStringDesc* s, NIM_CHAR sub, NI start);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(void, oserror_112609)(NI32 errorcode);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, oserrormsg_112483)(NI32 errorcode);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, raiseException)(E_Base* e, NCSTRING ename);
N_NIMCALL(NI32, oslasterror_112641)(void);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(NI, searchextpos_115151)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, normext_115141)(NimStringDesc* ext);
N_NIMCALL(void, nossplitPath)(NimStringDesc* path, tkeyvaluepair127808* Result);
STRING_LITERAL(TMP103, "", 0);
STRING_LITERAL(TMP333, "unknown OS error", 16);
NIM_BOOL envcomputed_117410;
TY117411* environment_117412;
extern int cmdCount;
extern NCSTRING* cmdLine;
extern TNimType NTI161; /* string */
TNimType NTI117411; /* seq[string] */
extern tgcheap46216 gch_46244;
extern TNimType NTI112612; /* ref EOS */
extern TNimType NTI2839; /* EOS */

N_NIMCALL(NIM_BOOL, nosisAbsolute)(NimStringDesc* path) {
	NIM_BOOL result;
	result = 0;
	result = ((NU8)(path->data[0]) == (NU8)(47));
	return result;
}

N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* filename) {
	NIM_BOOL result;
	struct stat res;
	NIM_BOOL LOC1;
	int LOC2;
	result = 0;
	memset((void*)&res, 0, sizeof(res));
	LOC1 = 0;
	LOC2 = 0;
	LOC2 = stat(filename->data, &res);
	LOC1 = (((NI32) 0) <= LOC2);
	if (!(LOC1)) goto LA3;
	LOC1 = S_ISREG(res.st_mode);
	LA3: ;
	result = LOC1;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI64)((*dest).Sup.len + 1))- 0] = 0;
	(*dest).Sup.len += 1;
}

N_NIMCALL(NimStringDesc*, nosjoinPath)(NimStringDesc* head, NimStringDesc* tail) {
	NimStringDesc* result;
	result = 0;
	{
		if (!(head->Sup.len == 0)) goto LA3;
		result = copyString(tail);
	}
	goto LA1;
	LA3: ;
	{
		if (!(((NU8)(head->data[(NI64)(head->Sup.len - 1)])) == ((NU8)(47)) || ((NU8)(head->data[(NI64)(head->Sup.len - 1)])) == ((NU8)(47)))) goto LA6;
		{
			NimStringDesc* LOC12;
			NimStringDesc* LOC13;
			if (!(((NU8)(tail->data[0])) == ((NU8)(47)) || ((NU8)(tail->data[0])) == ((NU8)(47)))) goto LA10;
			LOC12 = 0;
			LOC13 = 0;
			LOC13 = copyStr(tail, 1);
			LOC12 = rawNewString(head->Sup.len + LOC13->Sup.len + 0);
appendString(LOC12, head);
appendString(LOC12, LOC13);
			result = LOC12;
		}
		goto LA8;
		LA10: ;
		{
			NimStringDesc* LOC15;
			LOC15 = 0;
			LOC15 = rawNewString(head->Sup.len + tail->Sup.len + 0);
appendString(LOC15, head);
appendString(LOC15, tail);
			result = LOC15;
		}
		LA8: ;
	}
	goto LA1;
	LA6: ;
	{
		{
			NimStringDesc* LOC21;
			if (!(((NU8)(tail->data[0])) == ((NU8)(47)) || ((NU8)(tail->data[0])) == ((NU8)(47)))) goto LA19;
			LOC21 = 0;
			LOC21 = rawNewString(head->Sup.len + tail->Sup.len + 0);
appendString(LOC21, head);
appendString(LOC21, tail);
			result = LOC21;
		}
		goto LA17;
		LA19: ;
		{
			NimStringDesc* LOC23;
			LOC23 = 0;
			LOC23 = rawNewString(head->Sup.len + tail->Sup.len + 1);
appendString(LOC23, head);
appendChar(LOC23, 47);
appendString(LOC23, tail);
			result = LOC23;
		}
		LA17: ;
	}
	LA1: ;
	return result;
}

N_NIMCALL(NimStringDesc*, HEX2F_114899)(NimStringDesc* head, NimStringDesc* tail) {
	NimStringDesc* result;
	result = 0;
	result = nosjoinPath(head, tail);
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NI, parentdirpos_114966)(NimStringDesc* path) {
	NI result;
	NI q;
	result = 0;
	q = 1;
	{
		if (!(((NU8)(path->data[(NI64)(path->Sup.len - 1)])) == ((NU8)(47)) || ((NU8)(path->data[(NI64)(path->Sup.len - 1)])) == ((NU8)(47)))) goto LA3;
		q = 2;
	}
	LA3: ;
	{
		NI i_114996;
		NI HEX3Atmp_115012;
		NI res_115015;
		i_114996 = 0;
		HEX3Atmp_115012 = 0;
		HEX3Atmp_115012 = (NI64)(path->Sup.len - q);
		res_115015 = HEX3Atmp_115012;
		{
			while (1) {
				if (!(0 <= res_115015)) goto LA7;
				i_114996 = res_115015;
				{
					if (!(((NU8)(path->data[i_114996])) == ((NU8)(47)) || ((NU8)(path->data[i_114996])) == ((NU8)(47)))) goto LA10;
					result = i_114996;
					goto BeforeRet;
				}
				LA10: ;
				res_115015 -= 1;
			} LA7: ;
		}
	}
	result = -1;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, nosparentDir)(NimStringDesc* path) {
	NimStringDesc* result;
	NI seppos;
	result = 0;
	seppos = parentdirpos_114966(path);
	{
		if (!(0 <= seppos)) goto LA3;
		result = copyStrLast(path, 0, (NI64)(seppos - 1));
	}
	goto LA1;
	LA3: ;
	{
		result = copyString(((NimStringDesc*) &TMP103));
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, nossplitFile)(NimStringDesc* path, TY115204* Result) {
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (path->Sup.len == 0);
		if (LOC3) goto LA4;
		LOC3 = (((NU8)(path->data[(NI64)(path->Sup.len - 1)])) == ((NU8)(47)) || ((NU8)(path->data[(NI64)(path->Sup.len - 1)])) == ((NU8)(47)));
		LA4: ;
		if (!LOC3) goto LA5;
		unsureAsgnRef((void**) &(*Result).Field0, copyString(path));
		unsureAsgnRef((void**) &(*Result).Field1, copyString(((NimStringDesc*) &TMP103)));
		unsureAsgnRef((void**) &(*Result).Field2, copyString(((NimStringDesc*) &TMP103)));
	}
	goto LA1;
	LA5: ;
	{
		NI seppos;
		NI dotpos;
		seppos = -1;
		dotpos = path->Sup.len;
		{
			NI i_115237;
			NI HEX3Atmp_115268;
			NI res_115271;
			i_115237 = 0;
			HEX3Atmp_115268 = 0;
			HEX3Atmp_115268 = (NI64)(path->Sup.len - 1);
			res_115271 = HEX3Atmp_115268;
			{
				while (1) {
					if (!(0 <= res_115271)) goto LA10;
					i_115237 = res_115271;
					{
						if (!((NU8)(path->data[i_115237]) == (NU8)(46))) goto LA13;
						{
							NIM_BOOL LOC17;
							NIM_BOOL LOC18;
							LOC17 = 0;
							LOC18 = 0;
							LOC18 = (dotpos == path->Sup.len);
							if (!(LOC18)) goto LA19;
							LOC18 = (0 < i_115237);
							LA19: ;
							LOC17 = LOC18;
							if (!(LOC17)) goto LA20;
							LOC17 = !((((NU8)(path->data[(NI64)(i_115237 - 1)])) == ((NU8)(47)) || ((NU8)(path->data[(NI64)(i_115237 - 1)])) == ((NU8)(47))));
							LA20: ;
							if (!LOC17) goto LA21;
							dotpos = i_115237;
						}
						LA21: ;
					}
					goto LA11;
					LA13: ;
					{
						if (!(((NU8)(path->data[i_115237])) == ((NU8)(47)) || ((NU8)(path->data[i_115237])) == ((NU8)(47)))) goto LA24;
						seppos = i_115237;
						goto LA8;
					}
					goto LA11;
					LA24: ;
					LA11: ;
					res_115271 -= 1;
				} LA10: ;
			}
		} LA8: ;
		unsureAsgnRef((void**) &(*Result).Field0, copyStrLast(path, 0, (NI64)(seppos - 1)));
		unsureAsgnRef((void**) &(*Result).Field1, copyStrLast(path, (NI64)(seppos + 1), (NI64)(dotpos - 1)));
		unsureAsgnRef((void**) &(*Result).Field2, copyStr(path, dotpos));
	}
	LA1: ;
}
N_NIMCALL(void, TMP209)(void* p, NI op) {
	TY117411* a;
	NI LOC1;
	a = (TY117411*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
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

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell44135* c;
	c = usrtocell_47846(p);
	{
		(*c).Refcount -= 8;
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		rtladdzct_49404(c);
	}
	LA3: ;
}

N_NIMCALL(void, getenvvarsc_117604)(void) {
	{
		NCSTRING* genv;
		NCSTRING** LOC5;
		NI i;
		if (!!(envcomputed_117410)) goto LA3;
		if (environment_117412) nimGCunrefNoCycle(environment_117412);
		environment_117412 = (TY117411*) newSeqRC1((&NTI117411), 0);
		LOC5 = 0;
		LOC5 = _NSGetEnviron();
		genv = (*LOC5);
		i = 0;
		{
			while (1) {
				NimStringDesc* LOC12;
				NimStringDesc* LOC13;
				{
					if (!(genv[(i)- 0] == NIM_NIL)) goto LA10;
					goto LA6;
				}
				LA10: ;
				LOC12 = 0;
				LOC12 = cstrToNimstr(genv[(i)- 0]);
				environment_117412 = (TY117411*) incrSeq(&(environment_117412)->Sup, sizeof(NimStringDesc*));
				LOC13 = 0;
				LOC13 = environment_117412->data[environment_117412->Sup.len-1]; environment_117412->data[environment_117412->Sup.len-1] = copyStringRC1(LOC12);
				if (LOC13) nimGCunrefNoCycle(LOC13);
				i += 1;
			}
		} LA6: ;
		envcomputed_117410 = NIM_TRUE;
	}
	LA3: ;
}

N_NIMCALL(NI, findenvvar_118004)(NimStringDesc* key) {
	NI result;
	NimStringDesc* temp;
	NimStringDesc* LOC1;
	result = 0;
	getenvvarsc_117604();
	LOC1 = 0;
	LOC1 = rawNewString(key->Sup.len + 1);
appendString(LOC1, key);
appendChar(LOC1, 61);
	temp = LOC1;
	{
		NI i_118019;
		NI HEX3Atmp_118021;
		NI res_118024;
		i_118019 = 0;
		HEX3Atmp_118021 = 0;
		HEX3Atmp_118021 = (environment_117412->Sup.len-1);
		res_118024 = 0;
		{
			while (1) {
				if (!(res_118024 <= HEX3Atmp_118021)) goto LA4;
				i_118019 = res_118024;
				{
					NIM_BOOL LOC7;
					LOC7 = 0;
					LOC7 = nsuStartsWith(environment_117412->data[i_118019], temp);
					if (!LOC7) goto LA8;
					result = i_118019;
					goto BeforeRet;
				}
				LA8: ;
				res_118024 += 1;
			} LA4: ;
		}
	}
	result = -1;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, getenv_118041)(NimStringDesc* key) {
	NimStringDesc* result;
	NI i;
	result = 0;
	i = findenvvar_118004(key);
	{
		NI LOC5;
		if (!(0 <= i)) goto LA3;
		LOC5 = 0;
		LOC5 = nsuFindChar(environment_117412->data[i], 61, 0);
		result = copyStr(environment_117412->data[i], (NI64)(LOC5 + 1));
		goto BeforeRet;
	}
	goto LA1;
	LA3: ;
	{
		NCSTRING env;
		env = getenv(key->data);
		{
			if (!(env == NIM_NIL)) goto LA9;
			result = copyString(((NimStringDesc*) &TMP103));
			goto BeforeRet;
		}
		LA9: ;
		result = cstrToNimstr(env);
	}
	LA1: ;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, oserrormsg_112483)(NI32 errorcode) {
	NimStringDesc* result;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP103));
	{
		NCSTRING LOC5;
		if (!!((errorcode == ((NI32) 0)))) goto LA3;
		LOC5 = 0;
		LOC5 = strerror(errorcode);
		result = cstrToNimstr(LOC5);
	}
	LA3: ;
	return result;
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

N_NIMCALL(void, oserror_112609)(NI32 errorcode) {
	eos2839* e;
	e = 0;
	e = (eos2839*) newObj((&NTI112612), sizeof(eos2839));
	(*e).Sup.Sup.Sup.Sup.m_type = (&NTI2839);
	(*e).Errorcode = errorcode;
	asgnRefNoCycle((void**) &(*e).Sup.Sup.Sup.message, oserrormsg_112483(errorcode));
	{
		NimStringDesc* LOC5;
		if (!(((*e).Sup.Sup.Sup.message) && ((*e).Sup.Sup.Sup.message)->Sup.len == 0)) goto LA3;
		LOC5 = 0;
		LOC5 = (*e).Sup.Sup.Sup.message; (*e).Sup.Sup.Sup.message = copyStringRC1(((NimStringDesc*) &TMP333));
		if (LOC5) nimGCunrefNoCycle(LOC5);
	}
	LA3: ;
	raiseException((E_Base*)e, "EOS");
}

N_NIMCALL(NI32, oslasterror_112641)(void) {
	NI32 result;
	result = 0;
	result = errno;
	return result;
}

N_NIMCALL(NimStringDesc*, nosexpandFilename)(NimStringDesc* filename) {
	NimStringDesc* result;
	NCSTRING r;
	NI LOC6;
	result = 0;
	result = mnewString(((NI) (PATH_MAX)));
	r = realpath(filename->data, result->data);
	{
		NI32 LOC5;
		if (!r == 0) goto LA3;
		LOC5 = 0;
		LOC5 = oslasterror_112641();
		oserror_112609(LOC5);
	}
	LA3: ;
	LOC6 = 0;
	LOC6 = strlen(result->data);
	result = setLengthStr(result, LOC6);
	return result;
}

N_NIMCALL(NI, searchextpos_115151)(NimStringDesc* s) {
	NI result;
	result = 0;
	result = -1;
	{
		NI i_115166;
		NI HEX3Atmp_115182;
		NI res_115185;
		i_115166 = 0;
		HEX3Atmp_115182 = 0;
		HEX3Atmp_115182 = (NI64)(s->Sup.len - 1);
		res_115185 = HEX3Atmp_115182;
		{
			while (1) {
				if (!(1 <= res_115185)) goto LA3;
				i_115166 = res_115185;
				{
					if (!((NU8)(s->data[i_115166]) == (NU8)(46))) goto LA6;
					result = i_115166;
					goto LA1;
				}
				goto LA4;
				LA6: ;
				{
					if (!(((NU8)(s->data[i_115166])) == ((NU8)(47)) || ((NU8)(s->data[i_115166])) == ((NU8)(47)))) goto LA9;
					goto LA1;
				}
				goto LA4;
				LA9: ;
				LA4: ;
				res_115185 -= 1;
			} LA3: ;
		}
	} LA1: ;
	return result;
}

N_NIMCALL(NimStringDesc*, normext_115141)(NimStringDesc* ext) {
	NimStringDesc* result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = ((ext) && (ext)->Sup.len == 0);
		if (LOC3) goto LA4;
		LOC3 = ((NU8)(ext->data[0]) == (NU8)(46));
		LA4: ;
		if (!LOC3) goto LA5;
		result = copyString(ext);
	}
	goto LA1;
	LA5: ;
	{
		NimStringDesc* LOC8;
		LOC8 = 0;
		LOC8 = rawNewString(ext->Sup.len + 1);
appendChar(LOC8, 46);
appendString(LOC8, ext);
		result = LOC8;
	}
	LA1: ;
	return result;
}

N_NIMCALL(NimStringDesc*, noschangeFileExt)(NimStringDesc* filename, NimStringDesc* ext) {
	NimStringDesc* result;
	NI extpos;
	result = 0;
	extpos = searchextpos_115151(filename);
	{
		NimStringDesc* LOC5;
		NimStringDesc* LOC6;
		if (!(extpos < 0)) goto LA3;
		LOC5 = 0;
		LOC6 = 0;
		LOC6 = normext_115141(ext);
		LOC5 = rawNewString(filename->Sup.len + LOC6->Sup.len + 0);
appendString(LOC5, filename);
appendString(LOC5, LOC6);
		result = LOC5;
	}
	goto LA1;
	LA3: ;
	{
		NimStringDesc* LOC8;
		NimStringDesc* LOC9;
		NimStringDesc* LOC10;
		LOC8 = 0;
		LOC9 = 0;
		LOC9 = copyStrLast(filename, 0, (NI64)(extpos - 1));
		LOC10 = 0;
		LOC10 = normext_115141(ext);
		LOC8 = rawNewString(LOC9->Sup.len + LOC10->Sup.len + 0);
appendString(LOC8, LOC9);
appendString(LOC8, LOC10);
		result = LOC8;
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, nossplitPath)(NimStringDesc* path, tkeyvaluepair127808* Result) {
	NI seppos;
	seppos = -1;
	{
		NI i_114931;
		NI HEX3Atmp_114947;
		NI res_114950;
		i_114931 = 0;
		HEX3Atmp_114947 = 0;
		HEX3Atmp_114947 = (NI64)(path->Sup.len - 1);
		res_114950 = HEX3Atmp_114947;
		{
			while (1) {
				if (!(0 <= res_114950)) goto LA3;
				i_114931 = res_114950;
				{
					if (!(((NU8)(path->data[i_114931])) == ((NU8)(47)) || ((NU8)(path->data[i_114931])) == ((NU8)(47)))) goto LA6;
					seppos = i_114931;
					goto LA1;
				}
				LA6: ;
				res_114950 -= 1;
			} LA3: ;
		}
	} LA1: ;
	{
		if (!(0 <= seppos)) goto LA10;
		unsureAsgnRef((void**) &(*Result).Field0, copyStrLast(path, 0, (NI64)(seppos - 1)));
		unsureAsgnRef((void**) &(*Result).Field1, copyStr(path, (NI64)(seppos + 1)));
	}
	goto LA8;
	LA10: ;
	{
		unsureAsgnRef((void**) &(*Result).Field0, copyString(((NimStringDesc*) &TMP103)));
		unsureAsgnRef((void**) &(*Result).Field1, copyString(path));
	}
	LA8: ;
}

N_NIMCALL(NimStringDesc*, nosextractFilename)(NimStringDesc* path) {
	NimStringDesc* result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (path->Sup.len == 0);
		if (LOC3) goto LA4;
		LOC3 = (((NU8)(path->data[(NI64)(path->Sup.len - 1)])) == ((NU8)(47)) || ((NU8)(path->data[(NI64)(path->Sup.len - 1)])) == ((NU8)(47)));
		LA4: ;
		if (!LOC3) goto LA5;
		result = copyString(((NimStringDesc*) &TMP103));
	}
	goto LA1;
	LA5: ;
	{
		tkeyvaluepair127808 LOC8;
		memset((void*)&LOC8, 0, sizeof(LOC8));
		nossplitPath(path, &LOC8);
		result = copyString(LOC8.Field1);
	}
	LA1: ;
	return result;
}

N_NIMCALL(time_t, nosgetLastModificationTime)(NimStringDesc* file) {
	time_t result;
	struct stat res;
	result = 0;
	memset((void*)&res, 0, sizeof(res));
	{
		int LOC3;
		NI32 LOC6;
		LOC3 = 0;
		LOC3 = stat(file->data, &res);
		if (!(LOC3 < ((NI32) 0))) goto LA4;
		LOC6 = 0;
		LOC6 = oslasterror_112641();
		oserror_112609(LOC6);
	}
	LA4: ;
	result = res.st_mtime;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}
N_NOINLINE(void, HEX00_osInit)(void) {
}

N_NOINLINE(void, HEX00_osDatInit)(void) {
NTI117411.size = sizeof(TY117411*);
NTI117411.kind = 24;
NTI117411.base = (&NTI161);
NTI117411.flags = 2;
NTI117411.marker = TMP209;
}
