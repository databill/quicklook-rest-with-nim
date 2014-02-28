/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <stdlib.h>

#include <sys/param.h>

#include <mach-o/dyld.h>

#include <string.h>

#include <errno.h>

#include <stdio.h>

#include <sys/stat.h>

#include <sys/types.h>

#include <sys/time.h>
typedef struct TY105805 TY105805;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct eos1235 eos1235;
typedef struct esystem1231 esystem1231;
typedef struct esynch1229 esynch1229;
typedef struct E_Base E_Base;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tcell40090 tcell40090;
typedef struct tcellseq40106 tcellseq40106;
typedef struct tgcheap42016 tgcheap42016;
typedef struct tcellset40102 tcellset40102;
typedef struct tpagedesc40098 tpagedesc40098;
typedef struct tmemregion23010 tmemregion23010;
typedef struct tsmallchunk22238 tsmallchunk22238;
typedef struct tllchunk23004 tllchunk23004;
typedef struct tbigchunk22240 tbigchunk22240;
typedef struct tintset22215 tintset22215;
typedef struct ttrunk22211 ttrunk22211;
typedef struct tavlnode23008 tavlnode23008;
typedef struct tgcstat42014 tgcstat42014;
typedef struct TY103885 TY103885;
typedef struct TY89506 TY89506;
typedef struct tbasechunk22236 tbasechunk22236;
typedef struct tfreecell22228 tfreecell22228;
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NIM_CHAR TY613[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY613 data;
};
typedef N_NIMCALL_PTR(void, TY1089) (void* p, NI op);
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY1089 marker;
};
struct TNimObject {
TNimType* m_type;
};
struct E_Base {
  TNimObject Sup;
E_Base* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
struct esynch1229 {
  E_Base Sup;
};
struct esystem1231 {
  esynch1229 Sup;
};
struct eos1235 {
  esystem1231 Sup;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tcell40090 {
NI Refcount;
TNimType* Typ;
};
struct tcellseq40106 {
NI Len;
NI Cap;
tcell40090** D;
};
struct tcellset40102 {
NI Counter;
NI Max;
tpagedesc40098* Head;
tpagedesc40098** Data;
};
typedef tsmallchunk22238* TY23022[512];
typedef ttrunk22211* ttrunkbuckets22213[256];
struct tintset22215 {
ttrunkbuckets22213 Data;
};
struct tmemregion23010 {
NI Minlargeobj;
NI Maxlargeobj;
TY23022 Freesmallchunks;
tllchunk23004* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk22240* Freechunkslist;
tintset22215 Chunkstarts;
tavlnode23008* Root;
tavlnode23008* Deleted;
tavlnode23008* Last;
tavlnode23008* Freeavlnodes;
};
struct tgcstat42014 {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct tgcheap42016 {
void* Stackbottom;
NI Cyclethreshold;
tcellseq40106 Zct;
tcellseq40106 Decstack;
tcellset40102 Cycleroots;
tcellseq40106 Tempstack;
NI Recgclock;
tmemregion23010 Region;
tgcstat42014 Stat;
};
struct TY103885 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
};
struct TY89506 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
typedef NI TY22218[8];
struct tpagedesc40098 {
tpagedesc40098* Next;
NI Key;
TY22218 Bits;
};
struct tbasechunk22236 {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct tsmallchunk22238 {
  tbasechunk22236 Sup;
tsmallchunk22238* Next;
tsmallchunk22238* Prev;
tfreecell22228* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct tllchunk23004 {
NI Size;
NI Acc;
tllchunk23004* Next;
};
struct tbigchunk22240 {
  tbasechunk22236 Sup;
tbigchunk22240* Next;
tbigchunk22240* Prev;
NI Align;
NF Data;
};
struct ttrunk22211 {
ttrunk22211* Next;
NI Key;
TY22218 Bits;
};
typedef tavlnode23008* TY23014[2];
struct tavlnode23008 {
TY23014 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct tfreecell22228 {
tfreecell22228* Next;
NI Zerofield;
};
struct TY105805 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, nosexpandFilename)(NimStringDesc* filename);
N_NIMCALL(void, oserror_101405)(NI32 errorcode);
N_NIMCALL(NimStringDesc*, oserrormsg_101267)(NI32 errorcode);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell40090*, usrtocell_43442)(void* usr);
static N_INLINE(void, rtladdzct_45002)(tcell40090* c);
N_NOINLINE(void, addzct_43418)(tcellseq40106* s, tcell40090* c);
N_NIMCALL(void, raiseException)(E_Base* e, NCSTRING ename);
N_NIMCALL(NI32, oslasterror_101454)(void);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_69024, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NIM_BOOL, open_10003)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(NI64, getfilesize_10299)(FILE* f);
N_NIMCALL(NimStringDesc*, nosjoinPath)(NimStringDesc* head, NimStringDesc* tail);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NI, findenvvar_106403)(NimStringDesc* key);
N_NIMCALL(void, getenvvarsc_106002)(void);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP206)(void* p, NI op);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* s, NimStringDesc* prefix);
N_NIMCALL(NI, nsuFindChar)(NimStringDesc* s, NIM_CHAR sub, NI start);
N_NIMCALL(NI, searchextpos_103848)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, normext_103842)(NimStringDesc* ext);
N_NIMCALL(void, nossplitPath)(NimStringDesc* path, TY89506* Result);
STRING_LITERAL(TMP58, "", 0);
STRING_LITERAL(TMP60, "unknown OS error", 16);
NIM_BOOL envcomputed_105804;
TY105805* environment_105806;
extern NCSTRING* environ;
extern int cmdCount;
extern NCSTRING* cmdLine;
extern TNimType NTI101412; /* ref EOS */
extern TNimType NTI1235; /* EOS */
extern tgcheap42016 gch_42044;
extern TNimType NTI142; /* string */
TNimType NTI105805; /* seq[string] */

N_NIMCALL(NimStringDesc*, oserrormsg_101267)(NI32 errorcode) {
	NimStringDesc* result;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP58));
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

static N_INLINE(tcell40090*, usrtocell_43442)(void* usr) {
	tcell40090* result;
	result = 0;
	result = ((tcell40090*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell40090))))));
	return result;
}

static N_INLINE(void, rtladdzct_45002)(tcell40090* c) {
	addzct_43418(&gch_42044.Zct, c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell40090* c;
	c = usrtocell_43442(p);
	{
		(*c).Refcount -= 8;
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		rtladdzct_45002(c);
	}
	LA3: ;
}

N_NIMCALL(void, oserror_101405)(NI32 errorcode) {
	NimStringDesc* msg;
	msg = oserrormsg_101267(errorcode);
	{
		eos1235* e_101411;
		NimStringDesc* LOC5;
		if (!((msg) && (msg)->Sup.len == 0)) goto LA3;
		e_101411 = 0;
		e_101411 = (eos1235*) newObj((&NTI101412), sizeof(eos1235));
		(*e_101411).Sup.Sup.Sup.Sup.m_type = (&NTI1235);
		LOC5 = 0;
		LOC5 = (*e_101411).Sup.Sup.Sup.message; (*e_101411).Sup.Sup.Sup.message = copyStringRC1(((NimStringDesc*) &TMP60));
		if (LOC5) nimGCunrefNoCycle(LOC5);
		raiseException((E_Base*)e_101411, "EOS");
	}
	goto LA1;
	LA3: ;
	{
		eos1235* e_101431;
		NimStringDesc* LOC7;
		e_101431 = 0;
		e_101431 = (eos1235*) newObj((&NTI101412), sizeof(eos1235));
		(*e_101431).Sup.Sup.Sup.Sup.m_type = (&NTI1235);
		LOC7 = 0;
		LOC7 = (*e_101431).Sup.Sup.Sup.message; (*e_101431).Sup.Sup.Sup.message = copyStringRC1(msg);
		if (LOC7) nimGCunrefNoCycle(LOC7);
		raiseException((E_Base*)e_101431, "EOS");
	}
	LA1: ;
}

N_NIMCALL(NI32, oslasterror_101454)(void) {
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
		LOC5 = oslasterror_101454();
		oserror_101405(LOC5);
	}
	LA3: ;
	LOC6 = 0;
	LOC6 = strlen(result->data);
	result = setLengthStr(result, LOC6);
	return result;
}

N_NIMCALL(NimStringDesc*, nosgetAppFilename)(void) {
	NimStringDesc* result;
	unsigned int size;
	result = 0;
	size = 0;
	_NSGetExecutablePath(NIM_NIL, &size);
	result = mnewString(size);
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = _NSGetExecutablePath(result->data, &size);
		if (!LOC3) goto LA4;
		result = copyString(((NimStringDesc*) &TMP58));
	}
	LA4: ;
	{
		if (!(0 < result->Sup.len)) goto LA8;
		result = nosexpandFilename(result);
	}
	LA8: ;
	return result;
}

N_NIMCALL(void, nossplitFile)(NimStringDesc* path, TY103885* Result) {
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (path->Sup.len == 0);
		if (LOC3) goto LA4;
		LOC3 = (((NU8)(path->data[(NI64)(path->Sup.len - 1)])) == ((NU8)(47)) || ((NU8)(path->data[(NI64)(path->Sup.len - 1)])) == ((NU8)(47)));
		LA4: ;
		if (!LOC3) goto LA5;
		unsureAsgnRef((void**) &(*Result).Field0, copyString(path));
		unsureAsgnRef((void**) &(*Result).Field1, copyString(((NimStringDesc*) &TMP58)));
		unsureAsgnRef((void**) &(*Result).Field2, copyString(((NimStringDesc*) &TMP58)));
	}
	goto LA1;
	LA5: ;
	{
		NI seppos;
		NI dotpos;
		NI i_103916;
		NI HEX3Atmp_103944;
		NI res_103946;
		seppos = -1;
		dotpos = path->Sup.len;
		i_103916 = 0;
		HEX3Atmp_103944 = 0;
		HEX3Atmp_103944 = (NI64)(path->Sup.len - 1);
		res_103946 = HEX3Atmp_103944;
		while (1) {
			if (!(0 <= res_103946)) goto LA8;
			i_103916 = res_103946;
			{
				if (!((NU8)(path->data[i_103916]) == (NU8)(46))) goto LA11;
				{
					NIM_BOOL LOC15;
					NIM_BOOL LOC16;
					LOC15 = 0;
					LOC16 = 0;
					LOC16 = (dotpos == path->Sup.len);
					if (!(LOC16)) goto LA17;
					LOC16 = (0 < i_103916);
					LA17: ;
					LOC15 = LOC16;
					if (!(LOC15)) goto LA18;
					LOC15 = !((((NU8)(path->data[(NI64)(i_103916 - 1)])) == ((NU8)(47)) || ((NU8)(path->data[(NI64)(i_103916 - 1)])) == ((NU8)(47))));
					LA18: ;
					if (!LOC15) goto LA19;
					dotpos = i_103916;
				}
				LA19: ;
			}
			goto LA9;
			LA11: ;
			{
				if (!(((NU8)(path->data[i_103916])) == ((NU8)(47)) || ((NU8)(path->data[i_103916])) == ((NU8)(47)))) goto LA22;
				seppos = i_103916;
				goto LA8;
			}
			goto LA9;
			LA22: ;
			LA9: ;
			res_103946 -= 1;
		} LA8: ;
		unsureAsgnRef((void**) &(*Result).Field0, copyStrLast(path, 0, (NI64)(seppos - 1)));
		unsureAsgnRef((void**) &(*Result).Field1, copyStrLast(path, (NI64)(seppos + 1), (NI64)(dotpos - 1)));
		unsureAsgnRef((void**) &(*Result).Field2, copyStr(path, dotpos));
	}
	LA1: ;
}

N_NIMCALL(NI64, nosgetFileSize)(NimStringDesc* file) {
	NI64 result;
	FILE* f;
	result = 0;
	f = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = open_10003(&f, file, ((NU8) 0), -1);
		if (!LOC3) goto LA4;
		result = getfilesize_10299(f);
		fclose(f);
	}
	goto LA1;
	LA4: ;
	{
		NI32 LOC7;
		LOC7 = 0;
		LOC7 = oslasterror_101454();
		oserror_101405(LOC7);
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, nossplitPath)(NimStringDesc* path, TY89506* Result) {
	NI seppos;
	NI i_103700;
	NI HEX3Atmp_103714;
	NI res_103716;
	seppos = -1;
	i_103700 = 0;
	HEX3Atmp_103714 = 0;
	HEX3Atmp_103714 = (NI64)(path->Sup.len - 1);
	res_103716 = HEX3Atmp_103714;
	while (1) {
		if (!(0 <= res_103716)) goto LA1;
		i_103700 = res_103716;
		{
			if (!(((NU8)(path->data[i_103700])) == ((NU8)(47)) || ((NU8)(path->data[i_103700])) == ((NU8)(47)))) goto LA4;
			seppos = i_103700;
			goto LA1;
		}
		LA4: ;
		res_103716 -= 1;
	} LA1: ;
	{
		if (!(0 <= seppos)) goto LA8;
		unsureAsgnRef((void**) &(*Result).Field0, copyStrLast(path, 0, (NI64)(seppos - 1)));
		unsureAsgnRef((void**) &(*Result).Field1, copyStr(path, (NI64)(seppos + 1)));
	}
	goto LA6;
	LA8: ;
	{
		unsureAsgnRef((void**) &(*Result).Field0, copyString(((NimStringDesc*) &TMP58)));
		unsureAsgnRef((void**) &(*Result).Field1, copyString(path));
	}
	LA6: ;
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

N_NIMCALL(NimStringDesc*, HEX2F_103673)(NimStringDesc* head, NimStringDesc* tail) {
	NimStringDesc* result;
	result = 0;
	result = nosjoinPath(head, tail);
	goto BeforeRet;
	BeforeRet: ;
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
N_NIMCALL(void, TMP206)(void* p, NI op) {
	TY105805* a;
	NI LOC1;
	a = (TY105805*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}

N_NIMCALL(void, getenvvarsc_106002)(void) {
	{
		NI i;
		if (!!(envcomputed_105804)) goto LA3;
		if (environment_105806) nimGCunrefNoCycle(environment_105806);
		environment_105806 = (TY105805*) newSeqRC1((&NTI105805), 0);
		i = 0;
		while (1) {
			NimStringDesc* LOC10;
			NimStringDesc* LOC11;
			{
				if (!(environ[(i)- 0] == NIM_NIL)) goto LA8;
				goto LA5;
			}
			LA8: ;
			LOC10 = 0;
			LOC10 = cstrToNimstr(environ[(i)- 0]);
			environment_105806 = (TY105805*) incrSeq(&(environment_105806)->Sup, sizeof(NimStringDesc*));
			LOC11 = 0;
			LOC11 = environment_105806->data[environment_105806->Sup.len-1]; environment_105806->data[environment_105806->Sup.len-1] = copyStringRC1(LOC10);
			if (LOC11) nimGCunrefNoCycle(LOC11);
			i += 1;
		} LA5: ;
		envcomputed_105804 = NIM_TRUE;
	}
	LA3: ;
}

N_NIMCALL(NI, findenvvar_106403)(NimStringDesc* key) {
	NI result;
	NimStringDesc* temp;
	NimStringDesc* LOC1;
	NI i_106417;
	NI HEX3Atmp_106418;
	NI res_106420;
	result = 0;
	getenvvarsc_106002();
	LOC1 = 0;
	LOC1 = rawNewString(key->Sup.len + 1);
appendString(LOC1, key);
appendChar(LOC1, 61);
	temp = LOC1;
	i_106417 = 0;
	HEX3Atmp_106418 = 0;
	HEX3Atmp_106418 = (environment_105806->Sup.len-1);
	res_106420 = 0;
	while (1) {
		if (!(res_106420 <= HEX3Atmp_106418)) goto LA2;
		i_106417 = res_106420;
		{
			NIM_BOOL LOC5;
			LOC5 = 0;
			LOC5 = nsuStartsWith(environment_105806->data[i_106417], temp);
			if (!LOC5) goto LA6;
			result = i_106417;
			goto BeforeRet;
		}
		LA6: ;
		res_106420 += 1;
	} LA2: ;
	result = -1;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, getenv_106425)(NimStringDesc* key) {
	NimStringDesc* result;
	NI i;
	result = 0;
	i = findenvvar_106403(key);
	{
		NI LOC5;
		if (!(0 <= i)) goto LA3;
		LOC5 = 0;
		LOC5 = nsuFindChar(environment_105806->data[i], 61, 0);
		result = copyStr(environment_105806->data[i], (NI64)(LOC5 + 1));
		goto BeforeRet;
	}
	goto LA1;
	LA3: ;
	{
		NCSTRING env;
		env = getenv(key->data);
		{
			if (!(env == NIM_NIL)) goto LA9;
			result = copyString(((NimStringDesc*) &TMP58));
			goto BeforeRet;
		}
		LA9: ;
		result = cstrToNimstr(env);
	}
	LA1: ;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NI, searchextpos_103848)(NimStringDesc* s) {
	NI result;
	NI i_103862;
	NI HEX3Atmp_103876;
	NI res_103878;
	result = 0;
	result = -1;
	i_103862 = 0;
	HEX3Atmp_103876 = 0;
	HEX3Atmp_103876 = (NI64)(s->Sup.len - 1);
	res_103878 = HEX3Atmp_103876;
	while (1) {
		if (!(1 <= res_103878)) goto LA1;
		i_103862 = res_103878;
		{
			if (!((NU8)(s->data[i_103862]) == (NU8)(46))) goto LA4;
			result = i_103862;
			goto LA1;
		}
		goto LA2;
		LA4: ;
		{
			if (!(((NU8)(s->data[i_103862])) == ((NU8)(47)) || ((NU8)(s->data[i_103862])) == ((NU8)(47)))) goto LA7;
			goto LA1;
		}
		goto LA2;
		LA7: ;
		LA2: ;
		res_103878 -= 1;
	} LA1: ;
	return result;
}

N_NIMCALL(NimStringDesc*, normext_103842)(NimStringDesc* ext) {
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
	extpos = searchextpos_103848(filename);
	{
		NimStringDesc* LOC5;
		NimStringDesc* LOC6;
		if (!(extpos < 0)) goto LA3;
		LOC5 = 0;
		LOC6 = 0;
		LOC6 = normext_103842(ext);
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
		LOC10 = normext_103842(ext);
		LOC8 = rawNewString(LOC9->Sup.len + LOC10->Sup.len + 0);
appendString(LOC8, LOC9);
appendString(LOC8, LOC10);
		result = LOC8;
	}
	LA1: ;
	return result;
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
		result = copyString(((NimStringDesc*) &TMP58));
	}
	goto LA1;
	LA5: ;
	{
		TY89506 LOC8;
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
		LOC6 = oslasterror_101454();
		oserror_101405(LOC6);
	}
	LA4: ;
	result = res.st_mtime;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}
N_NOINLINE(void, pureosInit)(void) {
}

N_NOINLINE(void, pureosDatInit)(void) {
NTI105805.size = sizeof(TY105805*);
NTI105805.kind = 24;
NTI105805.base = (&NTI142);
NTI105805.flags = 2;
NTI105805.marker = TMP206;
}

