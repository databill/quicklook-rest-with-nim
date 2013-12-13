/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <setjmp.h>

#include <string.h>

#include <stdio.h>

#include <sys/time.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct E_Base E_Base;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TSafePoint TSafePoint;
typedef struct tstringtable108610 tstringtable108610;
typedef struct tstringstream122403 tstringstream122403;
typedef struct tcfgparser125612 tcfgparser125612;
typedef struct tbaselexer123008 tbaselexer123008;
typedef struct tstream122033 tstream122033;
typedef struct ttoken125610 ttoken125610;
typedef struct tcfgevent125606 tcfgevent125606;
typedef struct trstgenerator120012 trstgenerator120012;
typedef struct TY120028 TY120028;
typedef struct ttocentry120008 ttocentry120008;
typedef struct trstnode110012 trstnode110012;
typedef struct ttimeinfo86403 ttimeinfo86403;
typedef struct tcell38448 tcell38448;
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
typedef struct tkeyvaluepairseq108608 tkeyvaluepairseq108608;
typedef struct tkeyvaluepair108606 tkeyvaluepair108606;
typedef struct trstnodeseq110010 trstnodeseq110010;
typedef struct tbasechunk21036 tbasechunk21036;
typedef struct tfreecell21028 tfreecell21028;
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
struct E_Base {
  TNimObject Sup;
E_Base* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClPrc) (E_Base* e, void* ClEnv);
void* ClEnv;
} TY10420;
struct TSafePoint {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY10420 raiseAction;
};
struct tbaselexer123008 {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
tstream122033* Input;
NI Linenumber;
NI Sentinel;
NI Linestart;
NIM_BOOL Fileopened;
};
struct ttoken125610 {
NU8 Kind;
NimStringDesc* Literal;
};
struct tcfgparser125612 {
  tbaselexer123008 Sup;
ttoken125610 Tok;
NimStringDesc* Filename;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tcfgevent125606 {
  TNimObject Sup;
NU8 Kind;
union {
struct {NimStringDesc* Section;
} S2;
struct {NimStringDesc* Key;
NimStringDesc* Value;
} S3;
struct {NimStringDesc* Msg;
} S4;
} kindU;
};
struct ttocentry120008 {
trstnode110012* N;
NimStringDesc* Refname;
NimStringDesc* Header;
};
typedef N_NIMCALL_PTR(NimStringDesc*, tfindfilehandler111016) (NimStringDesc* filename);
typedef N_NIMCALL_PTR(void, tmsghandler111014) (NimStringDesc* filename, NI line, NI col, NU8 msgkind, NimStringDesc* arg);
typedef NimStringDesc* TY120036[5];
struct trstgenerator120012 {
  TNimObject Sup;
NU8 Target;
tstringtable108610* Config;
NI Splitafter;
TY120028* Tocpart;
NIM_BOOL Hastoc;
NimStringDesc* Theindex;
NU8 Options;
tfindfilehandler111016 Findfile;
tmsghandler111014 Msghandler;
NimStringDesc* Filename;
TY120036 Meta;
};
struct ttimeinfo86403 {
  TNimObject Sup;
NI Second;
NI Minute;
NI Hour;
NI Monthday;
NU8 Month;
NI Year;
NU8 Weekday;
NI Yearday;
NIM_BOOL Isdst;
NimStringDesc* Tzname;
NI Timezone;
};
typedef NimStringDesc* TY132117[8];
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
struct tkeyvaluepair108606 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct tstringtable108610 {
  TNimObject Sup;
NI Counter;
tkeyvaluepairseq108608* Data;
NU8 Mode;
};
typedef N_NIMCALL_PTR(void, TY122034) (tstream122033* s);
typedef N_NIMCALL_PTR(NIM_BOOL, TY122038) (tstream122033* s);
typedef N_NIMCALL_PTR(void, TY122042) (tstream122033* s, NI pos);
typedef N_NIMCALL_PTR(NI, TY122047) (tstream122033* s);
typedef N_NIMCALL_PTR(NI, TY122051) (tstream122033* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY122057) (tstream122033* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY122063) (tstream122033* s);
struct tstream122033 {
  TNimObject Sup;
TY122034 Closeimpl;
TY122038 Atendimpl;
TY122042 Setpositionimpl;
TY122047 Getpositionimpl;
TY122051 Readdataimpl;
TY122057 Writedataimpl;
TY122063 Flushimpl;
};
struct tstringstream122403 {
  tstream122033 Sup;
NimStringDesc* Data;
NI Pos;
};
struct trstnode110012 {
NU8 Kind;
NimStringDesc* Text;
NI Level;
trstnodeseq110010* Sons;
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
struct tfreecell21028 {
tfreecell21028* Next;
NI Zerofield;
};
struct TY120028 {
  TGenericSeq Sup;
  ttocentry120008 data[SEQ_DECL_SIZE];
};
struct tkeyvaluepairseq108608 {
  TGenericSeq Sup;
  tkeyvaluepair108606 data[SEQ_DECL_SIZE];
};
struct trstnodeseq110010 {
  TGenericSeq Sup;
  trstnode110012* data[SEQ_DECL_SIZE];
};
N_NIMCALL(NI, txt_to_rst)(NCSTRING inputfilename);
N_NIMCALL(NimStringDesc*, rstfiletohtml_132123)(NimStringDesc* filename);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(NimStringDesc*, dorstfiletohtml_132090)(NimStringDesc* filename);
N_NIMCALL(tstringtable108610*, loadconfig_132010)(void);
N_NIMCALL(tstringtable108610*, nstnewStringTable)(NU8 mode);
N_NIMCALL(tstringstream122403*, newstringstream_122492)(NimStringDesc* s);
N_NIMCALL(void, npcopen)(tcfgparser125612* c, tstream122033* input, NimStringDesc* filename, NI lineoffset);
N_NIMCALL(void, npcnext)(tcfgparser125612* c, tcfgevent125606* Result);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(void, nstPut)(tstringtable108610* t, NimStringDesc* key, NimStringDesc* val);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, npcclose)(tcfgparser125612* c);
N_NIMCALL(NimStringDesc*, readfile_9236)(NimStringDesc* filename);
N_NIMCALL(void, initrstgenerator_120040)(trstgenerator120012* g, NU8 target, tstringtable108610* config, NimStringDesc* filename, NU8 options, tfindfilehandler111016 findfile, tmsghandler111014 msghandler);
N_NIMCALL(NimStringDesc*, myfindfile_132100)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(void, defaultmsghandler_111603)(NimStringDesc* filename, NI line, NI col, NU8 msgkind, NimStringDesc* arg);
N_NIMCALL(trstnode110012*, rstparse_116472)(NimStringDesc* text, NimStringDesc* filename, NI line, NI column, NIM_BOOL* hastoc, NU8 options, tfindfilehandler111016 findfile, tmsghandler111014 msghandler);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(void, renderrsttoout_120296)(trstgenerator120012* d, trstnode110012* n, NimStringDesc** result);
N_NIMCALL(void, getgmtime_86445)(time_t t, ttimeinfo86403* Result);
N_NIMCALL(time_t, nosgetLastModificationTime)(NimStringDesc* file);
N_NIMCALL(NimStringDesc*, nfrmtFormatOpenArray)(NimStringDesc* formatstr, NimStringDesc** a, NI aLen0);
N_NIMCALL(NimStringDesc*, subex_128311)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, nstGet)(tstringtable108610* t, NimStringDesc* key);
N_NIMCALL(NimStringDesc*, format_88245)(ttimeinfo86403* info, NimStringDesc* f);
static N_INLINE(void, popSafePoint)(void);
static N_INLINE(E_Base*, getCurrentException)(void);
static N_INLINE(NimStringDesc*, getcurrentexceptionmsg_73833)(void);
N_NIMCALL(NimStringDesc*, xmlencode_130253)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, reprAny)(void* p_71603, TNimType* typ);
N_NIMCALL(NimStringDesc*, nsuReplaceStr)(NimStringDesc* s, NimStringDesc* sub, NimStringDesc* by);
static N_INLINE(void, popCurrentException)(void);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell38448*, usrtocell_41839)(void* usr);
static N_INLINE(void, rtladdzct_43402)(tcell38448* c);
N_NOINLINE(void, addzct_41815)(tcellseq38464* s, tcell38448* c);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
N_NIMCALL(void, get_global_html)(void* outputbuffer);
N_NIMCALL(void, quit_74628)(NimStringDesc* errormsg, NI errorcode);
static N_INLINE(void, initStackBottom)(void);
N_NOINLINE(void, setStackBottom)(void* thestackbottom);
N_NOINLINE(void, systemInit)(void);
N_NOINLINE(void, systemDatInit)(void);
N_NOINLINE(void, pureparseutilsInit)(void);
N_NOINLINE(void, pureparseutilsDatInit)(void);
N_NOINLINE(void, purestrutilsInit)(void);
N_NOINLINE(void, purestrutilsDatInit)(void);
N_NOINLINE(void, puretimesInit)(void);
N_NOINLINE(void, puretimesDatInit)(void);
N_NOINLINE(void, posixposixInit)(void);
N_NOINLINE(void, posixposixDatInit)(void);
N_NOINLINE(void, pureosInit)(void);
N_NOINLINE(void, pureosDatInit)(void);
N_NOINLINE(void, purehashesInit)(void);
N_NOINLINE(void, purehashesDatInit)(void);
N_NOINLINE(void, purestrtabsInit)(void);
N_NOINLINE(void, purestrtabsDatInit)(void);
N_NOINLINE(void, docutilsrstastInit)(void);
N_NOINLINE(void, docutilsrstastDatInit)(void);
N_NOINLINE(void, docutilsrstInit)(void);
N_NOINLINE(void, docutilsrstDatInit)(void);
N_NOINLINE(void, docutilshighliteInit)(void);
N_NOINLINE(void, docutilshighliteDatInit)(void);
N_NOINLINE(void, docutilsrstgenInit)(void);
N_NOINLINE(void, docutilsrstgenDatInit)(void);
N_NOINLINE(void, purestreamsInit)(void);
N_NOINLINE(void, purestreamsDatInit)(void);
N_NOINLINE(void, purelexbaseInit)(void);
N_NOINLINE(void, purelexbaseDatInit)(void);
N_NOINLINE(void, pureparsecfgInit)(void);
N_NOINLINE(void, pureparsecfgDatInit)(void);
N_NOINLINE(void, puresubexesInit)(void);
N_NOINLINE(void, puresubexesDatInit)(void);
N_NOINLINE(void, purecookiesInit)(void);
N_NOINLINE(void, purecookiesDatInit)(void);
N_NOINLINE(void, purecgiInit)(void);
N_NOINLINE(void, purecgiDatInit)(void);
N_NOINLINE(void, resterInit)(void);
N_NOINLINE(void, resterDatInit)(void);
STRING_LITERAL(TMP58, "# This is the config file for the documentation generator.\012# (c"
") 2012 Andreas Rumpf\012# Feel free to edit the templates as you ne"
"ed.\012\012split.item.toc = \"20\"  \012# too long entries in the table of "
"contents wrap around\012# after this number of characters\012\012doc.sect"
"ion = \"\"\"\012<div class=\"section\" id=\"$sectionID\">\012<h1><a class=\"to"
"c-backref\" href=\"#$sectionTitleID\">$sectionTitle</a></h1>\012<dl cl"
"ass=\"item\">\012$content\012</dl></div>\012\"\"\"\012\012doc.section.toc = \"\"\"\012<li>"
"\012  <a class=\"reference\" href=\"#$sectionID\" id=\"$sectionTitleID\">"
"$sectionTitle</a>\012  <ul class=\"simple\">\012    $content\012  </ul>\012</l"
"i>\012\"\"\"\012\012doc.item = \"\"\"\012<dt id=\"$itemID\"><pre>$header</pre></dt>\012"
"<dd>\012$desc\012</dd>\012\"\"\"\012\012doc.item.toc = \"\"\"\012  <li><a class=\"referen"
"ce\" href=\"#$itemID\">$name</a></li>\012\"\"\"\012\012doc.toc = \"\"\"\012<div class"
"=\"navigation\" id=\"navigation\">\012<ul class=\"simple\">\012$content\012</ul"
">\012</div>\"\"\"\012\012doc.body_toc = \"\"\"\012$tableofcontents\012<div class=\"con"
"tent\" id=\"content\">\012$moduledesc\012$content\012</div>\012\"\"\"\012\012doc.body_no"
"_toc = \"\"\"\012$moduledesc\012$content\012\"\"\"\012\012doc.file = \"\"\"<?xml version"
"=\"1.0\" encoding=\"utf-8\" ?>\012<!DOCTYPE html PUBLIC \"-//W3C//DTD XH"
"TML 1.0 Transitional//EN\"\012  \"http://www.w3.org/TR/xhtml1/DTD/xht"
"ml1-transitional.dtd\">\012<!--  This file is generated by Nimrod. -"
"->\012<html xmlns=\"http://www.w3.org/1999/xhtml\" xml:lang=\"en\" lang"
"=\"en\">\012<head>\012<meta http-equiv=\"Content-Type\" content=\"text/html"
"; charset=utf-8\" />\012<title>$title</title>\012<style type=\"text/css\""
">\012\012span.DecNumber {color: blue}\012span.BinNumber {color: blue}\012spa"
"n.HexNumber {color: blue}\012span.OctNumber {color: blue}\012span.Floa"
"tNumber {color: blue}\012span.Identifier  {color: black}\012span.Keywo"
"rd {font-weight: bold}\012span.StringLit {color: blue}\012span.LongStr"
"ingLit {color: blue}\012span.CharLit {color: blue}\012span.EscapeSeque"
"nce {color: black}\012span.Operator {color: black}\012span.Punctation "
"{color: black}\012span.Comment, span.LongComment {font-style:italic"
"; color: green}\012span.RegularExpression  {color: DarkViolet}\012span"
".TagStart {color: DarkViolet}\012span.TagEnd {color: DarkViolet}\012sp"
"an.Key  {color: blue}\012span.Value  {color: black}\012span.RawData {c"
"olor: blue}\012span.Assembler  {color: blue}\012span.Preprocessor {col"
"or: DarkViolet}\012span.Directive  {color: DarkViolet}\012span.Command"
", span.Rule, span.Hyperlink, span.Label, span.Reference, \012span.O"
"ther  {color: black}\012\012div.navigation {\012  -moz-border-radius: 5px"
" 5px 5px 5px;\012  float: left; \012  width: 30%;\012  margin: 0; padding"
": 0;\012  border: 3px outset #7F7F7F;\012  background-color: #7F7F7F;\012"
"}\012\012div.navigation ul {\012  list-style-type: none;\012  padding-left: "
"1em;\012}\012div.navigation ul li a, div.navigation ul li a:visited {\012"
"  font-weight: bold;\012  color: #FFFFFF;\012  text-decoration: none;\012"
"}\012div.navigation ul li a:hover {\012  font-weight: bold;\012  text-dec"
"oration: none;\012  color: gold;\012}\012\012div.content {\012  margin-left: 30"
"%;\012  padding: 0 1em;\012  border-left: 4em;\012}\012\012dl.item dd, dl.item "
"dd p {\012  margin-top:3px;\012}\012dl.item dd pre {\012  margin-left: 15pt;"
"\012  border: 0px;\012}\012dl.item dt, dl.item dt pre {\012  margin:  20pt 0"
" 0 5pt;\012}\012\012pre, span.tok {\012  background-color: #F9F9F9;\012  border"
"-color: #C4C4C4;\012  border-style: solid;\012  border-width: 1px 1px "
"1px 2px;\012  color: black;\012  line-spacing: 110%;\012  padding: 2px;\012}"
"\012\012span.red {\012  color: #A80000;\012}\012\012hr {background-color:#9D9D9D; "
"border:0 none; color:#9D9D9D; height:1px; width:100%;}\012\012/*\012:Auth"
"or: David Goodger\012:Contact: goodger@python.org\012:Date: Date: 2006"
"-05-21 22:44:42 +0200 (Sun, 21 May 2006)\012:Revision: Revision: 45"
"64\012:Copyright: This stylesheet has been placed in the public dom"
"ain.\012\012Default cascading style sheet for the HTML output of Docut"
"ils.\012\012See http://docutils.sf.net/docs/howto/html-stylesheets.htm"
"l for how to\012customize this style sheet.\012*/\012/* used to remove bo"
"rders from tables and images */\012.borderless, table.borderless td"
", table.borderless th { border: 0 }\012\012table.borderless td, table."
"borderless th {\012  /* Override padding for \"table.docutils td\" wi"
"th \"! important\".\012     The right padding separates the table cel"
"ls. */\012  padding: 0 0.5em 0 0 ! important }\012\012.first { margin-top"
": 0 ! important }\012.last, .with-subtitle { margin-bottom: 0 ! imp"
"ortant }\012.hidden { display: none }\012a.toc-backref { text-decorati"
"on: none ; color: black }\012blockquote.epigraph { margin: 2em 5em "
"; }\012dl.docutils dd { margin-bottom: 0.5em }\012div.abstract { margi"
"n: 2em 5em }\012div.abstract p.topic-title { font-weight: bold ; te"
"xt-align: center }\012div.admonition, div.attention, div.caution, d"
"iv.danger, div.error,\012div.hint, div.important, div.note, div.tip"
", div.warning {\012  margin: 2em ; border: medium outset ; padding:"
" 1em }\012div.admonition p.admonition-title, div.hint p.admonition-"
"title,\012div.important p.admonition-title, div.note p.admonition-t"
"itle,\012div.tip p.admonition-title { font-weight: bold ; font-fami"
"ly: sans-serif }\012\012div.attention p.admonition-title, div.caution "
"p.admonition-title,\012div.danger p.admonition-title, div.error p.a"
"dmonition-title,\012div.warning p.admonition-title { color: red ; f"
"ont-weight: bold ;\012  font-family: sans-serif }\012\012/* Uncomment (an"
"d remove this text!) to get reduced vertical space in\012   compoun"
"d paragraphs.\012div.compound .compound-first, div.compound .compou"
"nd-middle {\012  margin-bottom: 0.5em }\012\012div.compound .compound-las"
"t, div.compound .compound-middle {\012  margin-top: 0.5em }\012*/\012\012div"
".dedication { margin: 2em 5em ; text-align: center ; font-style:"
" italic }\012div.dedication p.topic-title { font-weight: bold ; fon"
"t-style: normal }\012div.figure { margin-left: 2em ; margin-right: "
"2em }\012div.footer, div.header { clear: both; font-size: smaller }"
"\012div.line-block { display: block ; margin-top: 1em ; margin-bott"
"om: 1em }\012div.line-block div.line-block { margin-top: 0 ; margin"
"-bottom: 0 ;\012  margin-left: 1.5em }\012div.sidebar { margin-left: 1"
"em ; border: medium outset ;\012  padding: 1em ; background-color: "
"#ffffee ; /*width: 40% ;*/ float: right ;\012  clear: right }\012\012div."
"sidebar p.rubric { font-family: sans-serif ; font-size: medium }"
"\012div.system-messages { margin: 5em }\012div.system-messages h1 { co"
"lor: red }\012div.system-message { border: medium outset ; padding:"
" 1em }\012div.system-message p.system-message-title { color: red ; "
"font-weight: bold }\012div.topic { margin: 2em;}\012h1.section-subtitl"
"e, h2.section-subtitle, h3.section-subtitle,\012h4.section-subtitle"
", h5.section-subtitle, h6.section-subtitle {\012  margin-top: 0.4em"
" }\012h1.title { text-align: center }\012h2.subtitle { text-align: cen"
"ter }\012/* hr.docutils { width: 75% } */\012img.align-left { clear: l"
"eft }\012img.align-right { clear: right }\012ol.simple, ul.simple { ma"
"rgin-bottom: 1em }\012ol.arabic { list-style: decimal }\012ol.loweralp"
"ha { list-style: lower-alpha }\012ol.upperalpha { list-style: upper"
"-alpha }\012ol.lowerroman { list-style: lower-roman }\012ol.upperroman"
" { list-style: upper-roman }\012p.attribution { text-align: right ;"
" margin-left: 50% }\012p.caption { font-style: italic }\012p.credits {"
" font-style: italic ; font-size: smaller }\012p.label { white-space"
": nowrap }\012p.rubric { font-weight:bold;font-size:larger;color:ma"
"roon;text-align:center}\012p.sidebar-title {font-family: sans-serif"
" ;font-weight: bold ;font-size: larger }\012p.sidebar-subtitle {fon"
"t-family: sans-serif ; font-weight: bold }\012p.topic-title {\012font-"
"weight: bold;\012background-color: #6D6D6D;\012border-bottom: 1px soli"
"d #000000;\012border-top: 1px solid black;\012color: white;\012text-align"
": center;\012margin: 0;\012}\012pre.address { margin-bottom: 0;margin-top"
":0;font-family:serif;font-size:100% }\012pre.literal-block, pre.doc"
"test-block {margin-left: 2em ;margin-right: 2em }\012span.classifie"
"r {font-family: sans-serif;font-style: oblique }\012span.classifier"
"-delimiter {font-family: sans-serif;font-weight: bold }\012span.int"
"erpreted {font-family: sans-serif }\012span.option {white-space: no"
"wrap }\012span.pre {white-space: pre }\012span.problematic {color: red"
" }\012span.section-subtitle {\012  /* font-size relative to parent (h1"
"..h6 element) */\012  font-size: 80% }\012\012table.citation { border-lef"
"t: solid 1px gray; margin-left: 1px }\012table.docinfo {margin: 2em"
" 4em }\012table.docutils {margin-top: 0.5em;margin-bottom: 0.5em; b"
"order: 0 solid #9d9d9d; border-collapse: collapse; }\012table.footn"
"ote {border-left: solid 1px black;margin-left: 1px }\012\012table.docu"
"tils td, table.docutils th,\012table.docinfo td, table.docinfo th {"
"padding-left: 0.5em;padding-right: 0.5em;\012  vertical-align: top;"
"}\012\012table.docutils td, table.docutils th { border-bottom:1px soli"
"d #9D9D9D; }\012/* color: #4d4d4d} */\012\012/* table.docutils td:hover, "
"table.docinfo td:hover {color: #000000} */\012  \012\012table.docutils th"
".field-name, table.docinfo th.docinfo-name {\012  font-weight: bold"
";text-align: left;white-space: nowrap;padding-left: 0 }\012  \012table"
".docutils th\012{\012color: black;\012font-weight:normal;\012background-colo"
"r: #E3E3E3;\012border-top: 1px solid #1d1d1d;\012border-bottom: 1px so"
"lid #1d1d1d;\012}\012  \012h1 tt.docutils, h2 tt.docutils, h3 tt.docutils"
",\012h4 tt.docutils, h5 tt.docutils, h6 tt.docutils {font-size: 100"
"% }\012ul.auto-toc { list-style-type: none }\012/*a.reference { color:"
" #E00000; font-weight:bold;}\012a.reference:hover {color: #E00000;b"
"ackground-color: #ffff00;display: margin;\012  font-weight:bold;}*/"
"\012\012</style>\012\012</head>\012<body>\012<div class=\"document\" id=\"documentId\""
">\012<h1 class=\"title\">$title</h1>\012$content\012<small>Last modified: $"
"date $time UTC</small>\012</div>\012</body>\012</html>\012\"\"\"\012", 9073);
STRING_LITERAL(TMP73, "static slurped config", 21);
STRING_LITERAL(TMP85, "command: ", 9);
STRING_LITERAL(TMP86, ": ", 2);
STRING_LITERAL(TMP87, "cannot load config from slurped contents", 40);
STRING_LITERAL(TMP125, "", 0);
STRING_LITERAL(TMP635, "doc.file", 8);
STRING_LITERAL(TMP636, "title", 5);
STRING_LITERAL(TMP637, "date", 4);
STRING_LITERAL(TMP690, "yyyy-MM-dd", 10);
STRING_LITERAL(TMP691, "time", 4);
STRING_LITERAL(TMP692, "HH:MM", 5);
STRING_LITERAL(TMP693, "content", 7);
STRING_LITERAL(TMP698, "<html><body><b>Sorry! Error parsing ", 36);
STRING_LITERAL(TMP699, " with version 0.2.0.</b><p>If possible please report it at <a h"
"ref=\"https://github.com/gradha/quicklook-rest-with-nimrod/issues"
"\">https://github.com/gradha/quicklook-rest-with-nimrod/issues</a"
"><p>", 195);
STRING_LITERAL(TMP722, " with message \'", 15);
STRING_LITERAL(TMP723, "\'</p><p>Displaying raw contents of file anyway:</p><p><tt>", 58);
STRING_LITERAL(TMP725, "\012", 1);
STRING_LITERAL(TMP726, "<br>", 4);
STRING_LITERAL(TMP727, "</tt></p></body></html>", 23);
STRING_LITERAL(TMP728, "Uh oh, wrong API usage", 22);
NimStringDesc* lastconversion_132138;
extern TSafePoint* exchandler_11826;
extern TNimType NTI125612; /* TCfgParser */
extern TNimType NTI125606; /* TCfgEvent */
extern TNimType NTI111006; /* TRstParseOption */
TNimType NTI132094; /* set[TRstParseOption] */
extern TNimType NTI120012; /* TRstGenerator */
extern TNimType NTI86403; /* TTimeInfo */
extern E_Base* currexception_11828;
extern TNimType NTI6214; /* ref E_Base */
extern tgcheap40416 gch_40444;

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_11826;
	exchandler_11826 = s;
}
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));	(*dest).Sup.len += (*src).Sup.len;
}
N_NIMCALL(tstringtable108610*, loadconfig_132010)(void) {
	tstringtable108610* result;
	tstringstream122403* f;
	result = 0;
	result = nstnewStringTable(((NU8) 2));
	f = newstringstream_122492(((NimStringDesc*) &TMP58));
	{
		tcfgparser125612 p;
		if (!!((f == NIM_NIL))) goto LA3;
		memset((void*)&p, 0, sizeof(p));
		p.Sup.Sup.m_type = (&NTI125612);
		npcopen(&p, &f->Sup, ((NimStringDesc*) &TMP73), 0);		while (1) {
			tcfgevent125606 e;
			chckNil((void*)&e);
			memset((void*)&e, 0, sizeof(e));
			e.Sup.m_type = (&NTI125606);
			npcnext(&p, &e);			switch (e.Kind) {
			case ((NU8) 0):
			{
				goto LA5;
			}			break;
			case ((NU8) 1):
			{
			}			break;
			case ((NU8) 2):
			{
				nstPut(result, e.kindU.S3.Key, e.kindU.S3.Value);			}			break;
			case ((NU8) 3):
			{
				NimStringDesc* LOC10;
				LOC10 = 0;
				LOC10 = rawNewString(e.kindU.S3.Key->Sup.len + e.kindU.S3.Value->Sup.len + 11);
appendString(LOC10, ((NimStringDesc*) &TMP85));
appendString(LOC10, e.kindU.S3.Key);
appendString(LOC10, ((NimStringDesc*) &TMP86));
appendString(LOC10, e.kindU.S3.Value);
				printf("%s\012", (LOC10)->data);
			}			break;
			case ((NU8) 4):
			{
				printf("%s\012", (e.kindU.S4.Msg)->data);
			}			break;
			}
		} LA5: ;
		npcclose(&p);	}	goto LA1;
	LA3: ;
	{
		printf("%s\012", (((NimStringDesc*) &TMP87))->data);
	}	LA1: ;
	return result;
}
N_NIMCALL(NimStringDesc*, myfindfile_132100)(NimStringDesc* filename) {
	NimStringDesc* result;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP125));
	return result;
}
N_NIMCALL(NimStringDesc*, dorstfiletohtml_132090)(NimStringDesc* filename) {
	NimStringDesc* result;
	NU8 parseoptions;
	tstringtable108610* config;
	NimStringDesc* content;
	trstgenerator120012 generator;
	NIM_BOOL hastoc;
	trstnode110012* rst;
	NimStringDesc* moddesc;
	ttimeinfo86403 lastmod;
	time_t LOC1;
	NimStringDesc* title;
	NimStringDesc* LOC2;
	NimStringDesc* LOC3;
	TY132117 LOC4;
	result = 0;
	parseoptions = 4;
	config = loadconfig_132010();
	content = readfile_9236(filename);
	memset((void*)&generator, 0, sizeof(generator));
	generator.Sup.m_type = (&NTI120012);
	hastoc = 0;
	initrstgenerator_120040(&generator, ((NU8) 0), config, filename, parseoptions, myfindfile_132100, defaultmsghandler_111603);	rst = rstparse_116472(content, filename, 1, 1, &hastoc, parseoptions, NIM_NIL, NIM_NIL);
	result = rawNewString(30000);
	moddesc = rawNewString(30000);
	renderrsttoout_120296(&generator, rst, &moddesc);	LOC1 = 0;
	LOC1 = nosgetLastModificationTime(filename);
	chckNil((void*)&lastmod);
	memset((void*)&lastmod, 0, sizeof(lastmod));
	lastmod.Sup.m_type = (&NTI86403);
	getgmtime_86445(LOC1, &lastmod);	title = copyString(generator.Meta[(((NU8) 1))- 0]);
	LOC2 = 0;
	LOC2 = nstGet(config, ((NimStringDesc*) &TMP635));
	LOC3 = 0;
	LOC3 = subex_128311(LOC2);
	memset((void*)LOC4, 0, sizeof(LOC4));
	LOC4[0] = copyString(((NimStringDesc*) &TMP636));
	LOC4[1] = copyString(title);
	LOC4[2] = copyString(((NimStringDesc*) &TMP637));
	LOC4[3] = format_88245(&lastmod, ((NimStringDesc*) &TMP690));
	LOC4[4] = copyString(((NimStringDesc*) &TMP691));
	LOC4[5] = format_88245(&lastmod, ((NimStringDesc*) &TMP692));
	LOC4[6] = copyString(((NimStringDesc*) &TMP693));
	LOC4[7] = copyString(moddesc);
	result = nfrmtFormatOpenArray(LOC3, LOC4, 8);
	return result;
}
static N_INLINE(void, popSafePoint)(void) {
	exchandler_11826 = (*exchandler_11826).prev;
}
static N_INLINE(E_Base*, getCurrentException)(void) {
	E_Base* result;
	result = 0;
	result = currexception_11828;
	return result;
}
static N_INLINE(NimStringDesc*, getcurrentexceptionmsg_73833)(void) {
	NimStringDesc* result;
	E_Base* e;
	result = 0;
	e = getCurrentException();
	{
		if (!(e == NIM_NIL)) goto LA3;
		result = copyString(((NimStringDesc*) &TMP125));
	}	goto LA1;
	LA3: ;
	{
		result = copyString((*e).message);
	}	LA1: ;
	goto BeforeRet;
	BeforeRet: ;	return result;
}
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
static N_INLINE(void, popCurrentException)(void) {
	asgnRefNoCycle((void**) &currexception_11828, (*currexception_11828).parent);
}
N_NIMCALL(NimStringDesc*, rstfiletohtml_132123)(NimStringDesc* filename) {
	NimStringDesc* result;
	TSafePoint TMP42;
	result = 0;
	pushSafePoint(&TMP42);
	TMP42.status = setjmp(TMP42.context);
	if (TMP42.status == 0) {
		result = dorstfiletohtml_132090(filename);
		popSafePoint();
	}	else {
		popSafePoint();
		{
			E_Base* volatile e;
			NimStringDesc* volatile msg;
			NimStringDesc* volatile content;
			NimStringDesc* LOC4;
			NimStringDesc* LOC5;
			NimStringDesc* LOC6;
			NimStringDesc* LOC7;
			NimStringDesc* LOC8;
			NimStringDesc* LOC9;
			TMP42.status = 0;
			e = getCurrentException();
			msg = getcurrentexceptionmsg_73833();
			LOC4 = 0;
			LOC4 = readfile_9236(filename);
			content = xmlencode_130253(LOC4);
			LOC5 = 0;
			LOC6 = 0;
			LOC6 = xmlencode_130253(filename);
			LOC7 = 0;
			LOC7 = xmlencode_130253(reprAny(e, (&NTI6214)));
			LOC8 = 0;
			LOC8 = xmlencode_130253(msg);
			LOC9 = 0;
			LOC9 = nsuReplaceStr(content, ((NimStringDesc*) &TMP725), ((NimStringDesc*) &TMP726));
			LOC5 = rawNewString(LOC6->Sup.len + LOC7->Sup.len + LOC8->Sup.len + LOC9->Sup.len + 327);
appendString(LOC5, ((NimStringDesc*) &TMP698));
appendString(LOC5, LOC6);
appendString(LOC5, ((NimStringDesc*) &TMP699));
appendString(LOC5, LOC7);
appendString(LOC5, ((NimStringDesc*) &TMP722));
appendString(LOC5, LOC8);
appendString(LOC5, ((NimStringDesc*) &TMP723));
appendString(LOC5, LOC9);
appendString(LOC5, ((NimStringDesc*) &TMP727));
			result = LOC5;
			popCurrentException();
		}	}	if (TMP42.status != 0) reraiseException();
	return result;
}
N_NIMCALL(NI, txt_to_rst)(NCSTRING inputfilename) {
	NI result;
	NimStringDesc* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = cstrToNimstr(inputfilename);
	asgnRefNoCycle((void**) &lastconversion_132138, rstfiletohtml_132123(LOC1));
	result = lastconversion_132138->Sup.len;
	return result;
}
N_NIMCALL(void, get_global_html)(void* outputbuffer) {
	{
		if (!lastconversion_132138 == 0) goto LA3;
		quit_74628(((NimStringDesc*) &TMP728), 1);	}	LA3: ;
	memcpy(outputbuffer, ((void*) (&lastconversion_132138->data[0])), lastconversion_132138->Sup.len);}
static N_INLINE(void, initStackBottom)(void) {
	void* volatile locals;
	locals = 0;
	locals = ((void*) (&locals));
	setStackBottom(locals);}int cmdCount;
char** cmdLine;
char** gEnv;
N_CDECL(void, NimMain)(void) {
	systemDatInit();
	pureparseutilsDatInit();
	purestrutilsDatInit();
	puretimesDatInit();
	posixposixDatInit();
	pureosDatInit();
	purehashesDatInit();
	purestrtabsDatInit();
	docutilsrstastDatInit();
	docutilsrstDatInit();
	docutilshighliteDatInit();
	docutilsrstgenDatInit();
	purestreamsDatInit();
	purelexbaseDatInit();
	pureparsecfgDatInit();
	puresubexesDatInit();
	purecookiesDatInit();
	purecgiDatInit();
	resterDatInit();
	initStackBottom();
	systemInit();
	pureparseutilsInit();
	purestrutilsInit();
	puretimesInit();
	posixposixInit();
	pureosInit();
	purehashesInit();
	purestrtabsInit();
	docutilsrstastInit();
	docutilsrstInit();
	docutilshighliteInit();
	docutilsrstgenInit();
	purestreamsInit();
	purelexbaseInit();
	pureparsecfgInit();
	puresubexesInit();
	purecookiesInit();
	purecgiInit();
	resterInit();
}
N_NOINLINE(void, resterInit)(void) {
}

N_NOINLINE(void, resterDatInit)(void) {
static TNimNode TMP5[1];
NTI132094.size = sizeof(NU8);
NTI132094.kind = 19;
NTI132094.base = (&NTI111006);
NTI132094.flags = 3;
TMP5[0].len = 0; TMP5[0].kind = 0;
NTI132094.node = &TMP5[0];
}

