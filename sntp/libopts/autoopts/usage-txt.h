/*   -*- buffer-read-only: t -*- vi: set ro:
 *  
 *  DO NOT EDIT THIS FILE   (usage-txt.h)
 *  
 *  It has been AutoGen-ed  December 18, 2010 at 12:13:32 PM by AutoGen 5.11.6pre4
 *  From the definitions    usage-txt.def
 *  and the template file   usage-txt.tpl
 *
 *  This file handles all the bookkeeping required for tracking all the little
 *  tiny strings used by the AutoOpts library.  There are 140
 *  of them.  This is not versioned because it is entirely internal to the
 *  library and accessed by client code only in a very well-controlled way:
 *  they may substitute translated strings using a procedure that steps through
 *  all the string pointers.
 *
 *  AutoOpts is free software: you can redistribute it and/or modify it
 *  under the terms of the GNU Lesser General Public License as published
 *  by the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *  
 *  AutoOpts is distributed in the hope that it will be useful, but
 *  WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *  See the GNU Lesser General Public License for more details.
 *  
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef AUTOOPTS_USAGE_TXT_H_GUARD
#define AUTOOPTS_USAGE_TXT_H_GUARD 1

#undef  cch_t
#define cch_t char const

/*
 *  One structure to hold all the pointers to all the stringlets.
 */
typedef struct {
  int       field_ct;
  char*     utpz_GnuBoolArg;
  char*     utpz_GnuKeyArg;
  char*     utpz_GnuFileArg;
  char*     utpz_GnuKeyLArg;
  char*     utpz_GnuTimeArg;
  char*     utpz_GnuNumArg;
  char*     utpz_GnuStrArg;
  cch_t*    apz_str[ 133 ];
} usage_text_t;

/*
 *  Declare the global structure with all the pointers to translated
 *  strings.  This is then used by the usage generation procedure.
 */
extern usage_text_t option_usage_text;

#if defined(AUTOOPTS_INTERNAL) /* DEFINE ALL THE STRINGS = = = = = */
/*
 *  Provide a mapping from a short name to fields in this structure.
 */
#define zAO_Alloc             (option_usage_text.apz_str[  0])
#define zAO_Bad               (option_usage_text.apz_str[  1])
#define zAO_Big               (option_usage_text.apz_str[  2])
#define zAO_Err               (option_usage_text.apz_str[  3])
#define zAO_Realloc           (option_usage_text.apz_str[  4])
#define zAO_Sml               (option_usage_text.apz_str[  5])
#define zAO_Strdup            (option_usage_text.apz_str[  6])
#define zAO_Ver               (option_usage_text.apz_str[  7])
#define zAO_Woops             (option_usage_text.apz_str[  8])
#define zAliasRange           (option_usage_text.apz_str[  9])
#define zAll                  (option_usage_text.apz_str[ 10])
#define zAlt                  (option_usage_text.apz_str[ 11])
#define zAmbigKey             (option_usage_text.apz_str[ 12])
#define zAmbigOptStr          (option_usage_text.apz_str[ 13])
#define zArgsMust             (option_usage_text.apz_str[ 14])
#define zAtMost               (option_usage_text.apz_str[ 15])
#define zAuto                 (option_usage_text.apz_str[ 16])
#define zBadPipe              (option_usage_text.apz_str[ 17])
#define zBadVerArg            (option_usage_text.apz_str[ 18])
#define zCantFmt              (option_usage_text.apz_str[ 19])
#define zCantSave             (option_usage_text.apz_str[ 20])
#define zCfgAO_Flags          (option_usage_text.apz_str[ 21])
#define zCfgProg              (option_usage_text.apz_str[ 22])
#define zDefaultOpt           (option_usage_text.apz_str[ 23])
#define zDis                  (option_usage_text.apz_str[ 24])
#define zDisabledErr          (option_usage_text.apz_str[ 25])
#define zDisabledOpt          (option_usage_text.apz_str[ 26])
#define zDisabledWhy          (option_usage_text.apz_str[ 27])
#define zEnab                 (option_usage_text.apz_str[ 28])
#define zEquiv                (option_usage_text.apz_str[ 29])
#define zErrOnly              (option_usage_text.apz_str[ 30])
#define zExamineFmt           (option_usage_text.apz_str[ 31])
#define zFiveSpaces           (option_usage_text.apz_str[ 32])
#define zFlagOkay             (option_usage_text.apz_str[ 33])
#define zFmtFmt               (option_usage_text.apz_str[ 34])
#define zForkFail             (option_usage_text.apz_str[ 35])
#define zFreopenFail          (option_usage_text.apz_str[ 36])
#define zFSErrOptLoad         (option_usage_text.apz_str[ 37])
#define zFSErrReadFile        (option_usage_text.apz_str[ 38])
#define zFSOptError           (option_usage_text.apz_str[ 39])
#define zFSOptErrMayExist     (option_usage_text.apz_str[ 40])
#define zFSOptErrMustExist    (option_usage_text.apz_str[ 41])
#define zFSOptErrNoExist      (option_usage_text.apz_str[ 42])
#define zFSOptErrOpen         (option_usage_text.apz_str[ 43])
#define zFSOptErrFopen        (option_usage_text.apz_str[ 44])
#define zFileCannotExist      (option_usage_text.apz_str[ 45])
#define zFileMustExist        (option_usage_text.apz_str[ 46])
#define zGenshell             (option_usage_text.apz_str[ 47])
#define zGnuBoolArg           (option_usage_text.utpz_GnuBoolArg)
#define zGnuBreak             (option_usage_text.apz_str[ 48])
#define zGnuKeyArg            (option_usage_text.utpz_GnuKeyArg)
#define zGnuFileArg           (option_usage_text.utpz_GnuFileArg)
#define zGnuKeyLArg           (option_usage_text.utpz_GnuKeyLArg)
#define zGnuTimeArg           (option_usage_text.utpz_GnuTimeArg)
#define zGnuNestArg           (option_usage_text.apz_str[ 49])
#define zGnuNumArg            (option_usage_text.utpz_GnuNumArg)
#define zGnuOptArg            (option_usage_text.apz_str[ 50])
#define zGnuOptFmt            (option_usage_text.apz_str[ 51])
#define zGnuStrArg            (option_usage_text.utpz_GnuStrArg)
#define zIllOptChr            (option_usage_text.apz_str[ 52])
#define zIllOptStr            (option_usage_text.apz_str[ 53])
#define zIllegal              (option_usage_text.apz_str[ 54])
#define zIntRange             (option_usage_text.apz_str[ 55])
#define zInvalOptDesc         (option_usage_text.apz_str[ 56])
#define zLowerBits            (option_usage_text.apz_str[ 57])
#define zMembers              (option_usage_text.apz_str[ 58])
#define zMisArg               (option_usage_text.apz_str[ 59])
#define zMultiEquiv           (option_usage_text.apz_str[ 60])
#define zMust                 (option_usage_text.apz_str[ 61])
#define zNeedOne              (option_usage_text.apz_str[ 62])
#define zNoArg                (option_usage_text.apz_str[ 63])
#define zNoArgs               (option_usage_text.apz_str[ 64])
#define zNoCreat              (option_usage_text.apz_str[ 65])
#define zNoFlags              (option_usage_text.apz_str[ 66])
#define zNoKey                (option_usage_text.apz_str[ 67])
#define zNoLim                (option_usage_text.apz_str[ 68])
#define zNoPreset             (option_usage_text.apz_str[ 69])
#define zNoResetArg           (option_usage_text.apz_str[ 70])
#define zNoRq_NoShrtTtl       (option_usage_text.apz_str[ 71])
#define zNoRq_ShrtTtl         (option_usage_text.apz_str[ 72])
#define zNoStat               (option_usage_text.apz_str[ 73])
#define zNoState              (option_usage_text.apz_str[ 74])
#define zNone                 (option_usage_text.apz_str[ 75])
#define zNotDef               (option_usage_text.apz_str[ 76])
#define zNotCmdOpt            (option_usage_text.apz_str[ 77])
#define zNotEnough            (option_usage_text.apz_str[ 78])
#define zNotFile              (option_usage_text.apz_str[ 79])
#define zNotNumber            (option_usage_text.apz_str[ 80])
#define zNrmOptFmt            (option_usage_text.apz_str[ 81])
#define zNumberOpt            (option_usage_text.apz_str[ 82])
#define zOneSpace             (option_usage_text.apz_str[ 83])
#define zOnlyOne              (option_usage_text.apz_str[ 84])
#define zOptsOnly             (option_usage_text.apz_str[ 85])
#define zOutputFail           (option_usage_text.apz_str[ 86])
#define zPathFmt              (option_usage_text.apz_str[ 87])
#define zPlsSendBugs          (option_usage_text.apz_str[ 88])
#define zPreset               (option_usage_text.apz_str[ 89])
#define zPresetFile           (option_usage_text.apz_str[ 90])
#define zPresetIntro          (option_usage_text.apz_str[ 91])
#define zProhib               (option_usage_text.apz_str[ 92])
#define zReorder              (option_usage_text.apz_str[ 93])
#define zRange                (option_usage_text.apz_str[ 94])
#define zRangeAbove           (option_usage_text.apz_str[ 95])
#define zRangeLie             (option_usage_text.apz_str[ 96])
#define zRangeBadLie          (option_usage_text.apz_str[ 97])
#define zRangeOnly            (option_usage_text.apz_str[ 98])
#define zRangeOr              (option_usage_text.apz_str[ 99])
#define zRangeErr             (option_usage_text.apz_str[100])
#define zRangeExact           (option_usage_text.apz_str[101])
#define zRangeScaled          (option_usage_text.apz_str[102])
#define zRangeUpto            (option_usage_text.apz_str[103])
#define zResetNotConfig       (option_usage_text.apz_str[104])
#define zReqFmt               (option_usage_text.apz_str[105])
#define zReqOptFmt            (option_usage_text.apz_str[106])
#define zReqThese             (option_usage_text.apz_str[107])
#define zReq_NoShrtTtl        (option_usage_text.apz_str[108])
#define zReq_ShrtTtl          (option_usage_text.apz_str[109])
#define zSepChars             (option_usage_text.apz_str[110])
#define zSetMemberSettings    (option_usage_text.apz_str[111])
#define zShrtGnuOptFmt        (option_usage_text.apz_str[112])
#define zSixSpaces            (option_usage_text.apz_str[113])
#define zStdBoolArg           (option_usage_text.apz_str[114])
#define zStdBreak             (option_usage_text.apz_str[115])
#define zStdFileArg           (option_usage_text.apz_str[116])
#define zStdKeyArg            (option_usage_text.apz_str[117])
#define zStdKeyLArg           (option_usage_text.apz_str[118])
#define zStdTimeArg           (option_usage_text.apz_str[119])
#define zStdNestArg           (option_usage_text.apz_str[120])
#define zStdNoArg             (option_usage_text.apz_str[121])
#define zStdNumArg            (option_usage_text.apz_str[122])
#define zStdOptArg            (option_usage_text.apz_str[123])
#define zStdReqArg            (option_usage_text.apz_str[124])
#define zStdStrArg            (option_usage_text.apz_str[125])
#define zTabHyp               (option_usage_text.apz_str[126])
#define zTabHypAnd            (option_usage_text.apz_str[127])
#define zTabout               (option_usage_text.apz_str[128])
#define zThreeSpaces          (option_usage_text.apz_str[129])
#define zTwoSpaces            (option_usage_text.apz_str[130])
#define zUpTo                 (option_usage_text.apz_str[131])
#define zValidKeys            (option_usage_text.apz_str[132])

  /*
   *  First, set up the strings.  Some of these are writable.  These are all in
   *  English.  This gets compiled into libopts and is distributed here so that
   *  xgettext (or equivalents) can extract these strings for translation.
   */

  static char    eng_zGnuBoolArg[] = "=T/F";
  static char    eng_zGnuKeyArg[] = "=KWd";
  static char    eng_zGnuFileArg[] = "=file";
  static char    eng_zGnuKeyLArg[] = "=Mbr";
  static char    eng_zGnuTimeArg[] = "=Tim";
  static char    eng_zGnuNumArg[] = "=num";
  static char    eng_zGnuStrArg[] = "=str";
static char const usage_txt[4326] =
    "malloc of %d bytes failed\n\0"
    "AutoOpts function called without option descriptor\n\0"
    "\tThis exceeds the compiled library version:  \0"
    "Automated Options Processing Error!\n"
    "\t%s called AutoOpts function with structure version %d:%d:%d.\n\0"
    "realloc of %d bytes at 0x%p failed\n\0"
    "\tThis is less than the minimum library version:  \0"
    "strdup of %d byte string failed\n\0"
    "Automated Options version %s\n"
    "\tcopyright (c) 1999-2010 by Bruce Korb - all rights reserved\n\0"
    "AutoOpts lib error: defaulted to option with optional arg\n\0"
    "(AutoOpts bug):  Aliasing option is out of range.\0"
    "all\0"
    "\t\t\t\t- an alternate for %s\n\0"
    "%s error:  the keyword `%s' is ambiguous for %s\n\0"
    "%s: ambiguous option -- %s\n\0"
    "%s: Command line arguments required\n\0"
    "%d %s%s options allowed\n\0"
    "version and help options:\0"
    "Error %d (%s) from the pipe(2) syscall\n\0"
    "ERROR: version option argument '%c' invalid.  Use:\n"
    "\t'v' - version only\n"
    "\t'c' - version and copyright\n"
    "\t'n' - version and copyright notice\n\0"
    "ERROR:  %s option conflicts with the %s option\n\0"
    "%s(optionSaveState): error: cannot allocate %d bytes\n\0"
    "auto-options\0"
    "program\0"
    "\t\t\t\t- default option for unnamed options\n\0"
    "\t\t\t\t- disabled as --%s\n\0"
    "%s: The ``%s'' option has been disabled\0"
    " --- %-14s %s\n\0"
    "This option has been disabled\0"
    "\t\t\t\t- enabled by default\n\0"
    "-equivalence\0"
    "ERROR:  only \0"
    " - examining environment variables named %s_*\n\0"
    "     \0"
    "Options are specified by doubled hyphens and their name\n"
    "or by a single hyphen and the flag character.\n\0"
    "%%-%ds %%s\n\0"
    "fs error %d (%s) on fork - cannot obtain %s usage\n\0"
    "fs error %d (%s) on freopen\n\0"
    "File error %d (%s) opening %s for loading options\n\0"
    "fs error %d (%s) reading file %s\n\0"
    "fs error %d (%s) on %s %s for option %s\n\0"
    "stat-ing for directory\0"
    "stat-ing for regular file\0"
    "stat-ing for non-existant file\0"
    "open-ing file\0"
    "fopen-ing file\0"
    "\t\t\t\t- file must not pre-exist\n\0"
    "\t\t\t\t- file must pre-exist\n\0"
    "\n"
    "= = = = = = = =\n\n"
    "This incarnation of genshell will produce\n"
    "a shell script to parse the options for %s:\n\n\0"
    "\n"
    "%s\n\n\0"
    "=Cplx\0"
    "[=arg]\0"
    "--%2$s%1$s\0"
    "%s: illegal option -- %c\n\0"
    "%s: illegal option -- %s\n\0"
    "illegal\0"
    "  or an integer from %d through %d\n\0"
    "AutoOpts ERROR:  invalid option descriptor for %s\n\0"
    "  or an integer mask with any of the lower %d bits set\n\0"
    "\t\t\t\t- is a set membership option\n\0"
    "%s: option `%s' requires an argument\n\0"
    "Equivalenced option '%s' was equivalenced to both\n"
    "\t'%s' and '%s'\0"
    "\t\t\t\t- must appear between %d and %d times\n\0"
    "ERROR:  The %s option is required\n\0"
    "%s: option `%s' cannot have an argument\n\0"
    "%s: Command line arguments not allowed\n\0"
    "error %d (%s) creating %s\n\0"
    "Options are specified by single or double hyphens and their name.\n\0"
    "%s error:  `%s' does not match any %s keywords\n\0"
    "\t\t\t\t- may appear multiple times\n\0"
    "\t\t\t\t- may not be preset\n\0"
    "The 'reset-option' option requires an argument\n\0"
    "   Arg Option-Name    Description\n\0"
    "  Flg Arg Option-Name    Description\n\0"
    "error %d (%s) stat-ing %s\n\0"
    "%s(optionRestore): error: no saved option state\n\0"
    "none\0"
    "'%s' not defined\n\0"
    "'%s' is not a command line option\n\0"
    "ERROR:  The %s option must appear %d times\n\0"
    "error:  cannot load options from non-regular file %s\n\0"
    "%s error:  `%s' is not a recognizable number\n\0"
    " %3s %s\0"
    "The '-#<number>' option may omit the hash char\n\0"
    " \0"
    "one %s%s option allowed\n\0"
    "All arguments are named options.\n\0"
    "Write failure to output file\0"
    " - reading file %s\0"
    "\n"
    "please send bug reports to:  %s\n\0"
    "\t\t\t\t- may NOT appear - preset only\n\0"
    "#  preset/initialization file\n"
    "#  %s#\n\0"
    "\n"
    "The following option preset mechanisms are supported:\n\0"
    "prohibits these options:\n\0"
    "Operands and options may be intermixed.  They will be reordered.\n\0"
    "%s%ld to %ld\0"
    "%sgreater than or equal to %ld\0"
    "%sIt must lie in one of the ranges:\n\0"
    "%sThis option must lie in one of the ranges:\n\0"
    "%sit must be:  \0"
    ", or\n\0"
    "%s error:  %s option value ``%s'' is out of range.\n\0"
    "%s%ld exactly\0"
    "%sis scalable with a suffix: k/K/m/M/g/G/t/T\n\0"
    "%sless than or equal to %ld\0"
    "The --reset-option has not been configured.\n\0"
    "ERROR:  %s option requires the %s option\n\0"
    " %3s %-14s %s\0"
    "requires these options:\n\0"
    "   Arg Option-Name   Req?  Description\n\0"
    "  Flg Arg Option-Name   Req?  Description\n\0"
    "-_^\0"
    "or you may use a numeric representation.  Preceding these with a '!' will\n"
    "clear the bits, specifying 'none' will clear all bits, and 'all' will set them\n"
    "all.  Multiple entries may be passed as an option argument list.\n\0"
    "%s\0"
    "      \0"
    "T/F\0"
    "\n"
    "%s\n\n"
    "%s\0"
    "Fil\0"
    "KWd\0"
    "Mbr\0"
    "Tim\0"
    "Cpx\0"
    "no \0"
    "Num\0"
    "opt\0"
    "YES\0"
    "Str\0"
    "\t\t\t\t- \0"
    "\t\t\t\t-- and \0"
    "\t\t\t\t%s\n\0"
    "   \0"
    "  \0"
    "\t\t\t\t- may appear up to %d times\n\0"
    "The valid \"%s\" option keywords are:\n\0";


  /*
   *  Now, define (and initialize) the structure that contains
   *  the pointers to all these strings.
   *  Aren't you glad you don't maintain this by hand?
   */
  usage_text_t option_usage_text = {
    140,
    eng_zGnuBoolArg, eng_zGnuKeyArg,  eng_zGnuFileArg, eng_zGnuKeyLArg,
    eng_zGnuTimeArg, eng_zGnuNumArg,  eng_zGnuStrArg,
    {
      usage_txt +   0, usage_txt +  27, usage_txt +  79, usage_txt + 125,
      usage_txt + 224, usage_txt + 260, usage_txt + 310, usage_txt + 343,
      usage_txt + 434, usage_txt + 493, usage_txt + 543, usage_txt + 547,
      usage_txt + 574, usage_txt + 623, usage_txt + 651, usage_txt + 688,
      usage_txt + 713, usage_txt + 739, usage_txt + 779, usage_txt + 916,
      usage_txt + 964, usage_txt +1018, usage_txt +1031, usage_txt +1039,
      usage_txt +1081, usage_txt +1105, usage_txt +1145, usage_txt +1160,
      usage_txt +1190, usage_txt +1216, usage_txt +1229, usage_txt +1243,
      usage_txt +1290, usage_txt +1296, usage_txt +1399, usage_txt +1411,
      usage_txt +1462, usage_txt +1491, usage_txt +1542, usage_txt +1576,
      usage_txt +1617, usage_txt +1640, usage_txt +1666, usage_txt +1697,
      usage_txt +1711, usage_txt +1726, usage_txt +1757, usage_txt +1784,
      usage_txt +1890, usage_txt +1896, usage_txt +1902, usage_txt +1909,
      usage_txt +1920, usage_txt +1946, usage_txt +1972, usage_txt +1980,
      usage_txt +2016, usage_txt +2067, usage_txt +2123, usage_txt +2157,
      usage_txt +2195, usage_txt +2260, usage_txt +2303, usage_txt +2338,
      usage_txt +2379, usage_txt +2419, usage_txt +2446, usage_txt +2513,
      usage_txt +2561, usage_txt +2594, usage_txt +2619, usage_txt +2667,
      usage_txt +2702, usage_txt +2740, usage_txt +2767, usage_txt +2816,
      usage_txt +2821, usage_txt +2839, usage_txt +2874, usage_txt +2918,
      usage_txt +2972, usage_txt +3018, usage_txt +3026, usage_txt +3074,
      usage_txt +3076, usage_txt +3101, usage_txt +3135, usage_txt +3164,
      usage_txt +3183, usage_txt +3217, usage_txt +3253, usage_txt +3291,
      usage_txt +3347, usage_txt +3373, usage_txt +3439, usage_txt +3452,
      usage_txt +3483, usage_txt +3520, usage_txt +3566, usage_txt +3582,
      usage_txt +3588, usage_txt +3640, usage_txt +3654, usage_txt +3700,
      usage_txt +3728, usage_txt +3773, usage_txt +3815, usage_txt +3829,
      usage_txt +3854, usage_txt +3894, usage_txt +3937, usage_txt +3941,
      usage_txt +4160, usage_txt +4163, usage_txt +4170, usage_txt +4174,
      usage_txt +4182, usage_txt +4186, usage_txt +4190, usage_txt +4194,
      usage_txt +4198, usage_txt +4202, usage_txt +4206, usage_txt +4210,
      usage_txt +4214, usage_txt +4218, usage_txt +4222, usage_txt +4229,
      usage_txt +4241, usage_txt +4249, usage_txt +4253, usage_txt +4256,
      usage_txt +4289
    }
  };

#endif /* DO_TRANSLATIONS */
#endif /* AUTOOPTS_USAGE_TXT_H_GUARD */