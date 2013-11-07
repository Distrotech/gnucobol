/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TOKEN_EOF = 0,
     ACCEPT = 258,
     ACCESS = 259,
     ADD = 260,
     ADDRESS = 261,
     ADVANCING = 262,
     AFTER = 263,
     ALL = 264,
     ALLOCATE = 265,
     ALPHABET = 266,
     ALPHABETIC = 267,
     ALPHABETIC_LOWER = 268,
     ALPHABETIC_UPPER = 269,
     ALPHANUMERIC = 270,
     ALPHANUMERIC_EDITED = 271,
     ALSO = 272,
     ALTER = 273,
     ALTERNATE = 274,
     AND = 275,
     ANY = 276,
     ARE = 277,
     AREA = 278,
     ARGUMENT_NUMBER = 279,
     ARGUMENT_VALUE = 280,
     AS = 281,
     ASCENDING = 282,
     ASSIGN = 283,
     AT = 284,
     AUTO = 285,
     AUTOMATIC = 286,
     BACKGROUND_COLOR = 287,
     BASED = 288,
     BEFORE = 289,
     BELL = 290,
     BINARY = 291,
     BINARY_C_LONG = 292,
     BINARY_CHAR = 293,
     BINARY_DOUBLE = 294,
     BINARY_LONG = 295,
     BINARY_SHORT = 296,
     BLANK = 297,
     BLANK_LINE = 298,
     BLANK_SCREEN = 299,
     BLINK = 300,
     BLOCK = 301,
     BOTTOM = 302,
     BY = 303,
     BYTE_LENGTH = 304,
     CALL = 305,
     CANCEL = 306,
     CH = 307,
     CHAINING = 308,
     CHARACTER = 309,
     CHARACTERS = 310,
     CLASS = 311,
     CLOSE = 312,
     CODE = 313,
     CODE_SET = 314,
     COLLATING = 315,
     COL = 316,
     COLS = 317,
     COLUMN = 318,
     COLUMNS = 319,
     COMMA = 320,
     COMMAND_LINE = 321,
     COMMA_DELIM = 322,
     COMMIT = 323,
     COMMON = 324,
     COMP = 325,
     COMPUTE = 326,
     COMP_1 = 327,
     COMP_2 = 328,
     COMP_3 = 329,
     COMP_4 = 330,
     COMP_5 = 331,
     COMP_X = 332,
     CONCATENATE_FUNC = 333,
     CONFIGURATION = 334,
     CONSTANT = 335,
     CONTAINS = 336,
     CONTENT = 337,
     CONTINUE = 338,
     CONTROL = 339,
     CONTROLS = 340,
     CONTROL_FOOTING = 341,
     CONTROL_HEADING = 342,
     CONVERTING = 343,
     CORRESPONDING = 344,
     COUNT = 345,
     CRT = 346,
     CURRENCY = 347,
     CURRENT_DATE_FUNC = 348,
     CURSOR = 349,
     CYCLE = 350,
     DATA = 351,
     DATE = 352,
     DAY = 353,
     DAY_OF_WEEK = 354,
     DE = 355,
     DEBUGGING = 356,
     DECIMAL_POINT = 357,
     DECLARATIVES = 358,
     DEFAULT = 359,
     DELETE = 360,
     DELIMITED = 361,
     DELIMITER = 362,
     DEPENDING = 363,
     DESCENDING = 364,
     DETAIL = 365,
     DISK = 366,
     DISPLAY = 367,
     DIVIDE = 368,
     DIVISION = 369,
     DOWN = 370,
     DUPLICATES = 371,
     DYNAMIC = 372,
     EBCDIC = 373,
     ELSE = 374,
     END = 375,
     END_ACCEPT = 376,
     END_ADD = 377,
     END_CALL = 378,
     END_COMPUTE = 379,
     END_DELETE = 380,
     END_DISPLAY = 381,
     END_DIVIDE = 382,
     END_EVALUATE = 383,
     END_FUNCTION = 384,
     END_IF = 385,
     END_MULTIPLY = 386,
     END_PERFORM = 387,
     END_PROGRAM = 388,
     END_READ = 389,
     END_RETURN = 390,
     END_REWRITE = 391,
     END_SEARCH = 392,
     END_START = 393,
     END_STRING = 394,
     END_SUBTRACT = 395,
     END_UNSTRING = 396,
     END_WRITE = 397,
     ENTRY = 398,
     ENVIRONMENT = 399,
     ENVIRONMENT_NAME = 400,
     ENVIRONMENT_VALUE = 401,
     EOL = 402,
     EOP = 403,
     EOS = 404,
     EQUAL = 405,
     EQUALS = 406,
     ERASE = 407,
     ERROR = 408,
     ESCAPE = 409,
     EVALUATE = 410,
     EVENT_STATUS = 411,
     EXCEPTION = 412,
     EXCLUSIVE = 413,
     EXIT = 414,
     EXTEND = 415,
     EXTERNAL = 416,
     FD = 417,
     FILE_CONTROL = 418,
     FILE_ID = 419,
     FILLER = 420,
     FINAL = 421,
     FIRST = 422,
     FOOTING = 423,
     FOR = 424,
     FOREGROUND_COLOR = 425,
     FOREVER = 426,
     FREE = 427,
     FROM = 428,
     FULL = 429,
     FUNCTION = 430,
     FUNCTION_ID = 431,
     FUNCTION_NAME = 432,
     GE = 433,
     GENERATE = 434,
     GIVING = 435,
     GLOBAL = 436,
     GO = 437,
     GOBACK = 438,
     GREATER = 439,
     GROUP = 440,
     HEADING = 441,
     HIGHLIGHT = 442,
     HIGH_VALUE = 443,
     IDENTIFICATION = 444,
     IF = 445,
     IGNORE = 446,
     IGNORING = 447,
     IN = 448,
     INDEX = 449,
     INDEXED = 450,
     INDICATE = 451,
     INITIALIZE = 452,
     INITIALIZED = 453,
     INITIATE = 454,
     INPUT = 455,
     INPUT_OUTPUT = 456,
     INSPECT = 457,
     INTO = 458,
     INTRINSIC = 459,
     INVALID = 460,
     INVALID_KEY = 461,
     IS = 462,
     I_O = 463,
     I_O_CONTROL = 464,
     JUSTIFIED = 465,
     KEY = 466,
     LABEL = 467,
     LAST = 468,
     LAST_DETAIL = 469,
     LE = 470,
     LEADING = 471,
     LEFT = 472,
     LENGTH = 473,
     LESS = 474,
     LIMIT = 475,
     LIMITS = 476,
     LINAGE = 477,
     LINAGE_COUNTER = 478,
     LINE = 479,
     LINES = 480,
     LINKAGE = 481,
     LITERAL = 482,
     LOCALE = 483,
     LOCALE_DT_FUNC = 484,
     LOCAL_STORAGE = 485,
     LOCK = 486,
     LOWER_CASE_FUNC = 487,
     LOWLIGHT = 488,
     LOW_VALUE = 489,
     MANUAL = 490,
     MEMORY = 491,
     MERGE = 492,
     MINUS = 493,
     MNEMONIC_NAME = 494,
     MODE = 495,
     MOVE = 496,
     MULTIPLE = 497,
     MULTIPLY = 498,
     NATIONAL = 499,
     NATIONAL_EDITED = 500,
     NATIVE = 501,
     NE = 502,
     NEGATIVE = 503,
     NEXT = 504,
     NEXT_SENTENCE = 505,
     NO = 506,
     NOT = 507,
     NOT_END = 508,
     NOT_EOP = 509,
     NOT_EXCEPTION = 510,
     NOT_INVALID_KEY = 511,
     NOT_OVERFLOW = 512,
     NOT_SIZE_ERROR = 513,
     NO_ADVANCING = 514,
     NUMBER = 515,
     NUMBERS = 516,
     NUMERIC = 517,
     NUMERIC_EDITED = 518,
     NUMVALC_FUNC = 519,
     OBJECT_COMPUTER = 520,
     OCCURS = 521,
     OF = 522,
     OFF = 523,
     OMITTED = 524,
     ON = 525,
     ONLY = 526,
     OPEN = 527,
     OPTIONAL = 528,
     OR = 529,
     ORDER = 530,
     ORGANIZATION = 531,
     OTHER = 532,
     OUTPUT = 533,
     OVERFLOW = 534,
     OVERLINE = 535,
     PACKED_DECIMAL = 536,
     PADDING = 537,
     PAGE = 538,
     PAGE_FOOTING = 539,
     PAGE_HEADING = 540,
     PARAGRAPH = 541,
     PERFORM = 542,
     PICTURE = 543,
     PLUS = 544,
     POINTER = 545,
     POSITION = 546,
     POSITIVE = 547,
     PRESENT = 548,
     PREVIOUS = 549,
     PRINTER = 550,
     PRINTING = 551,
     PROCEDURE = 552,
     PROCEDURES = 553,
     PROCEED = 554,
     PROGRAM = 555,
     PROGRAM_ID = 556,
     PROGRAM_NAME = 557,
     PROGRAM_POINTER = 558,
     PROMPT = 559,
     QUOTE = 560,
     RANDOM = 561,
     RD = 562,
     READ = 563,
     RECORD = 564,
     RECORDING = 565,
     RECORDS = 566,
     RECURSIVE = 567,
     REDEFINES = 568,
     REEL = 569,
     REFERENCE = 570,
     RELATIVE = 571,
     RELEASE = 572,
     REMAINDER = 573,
     REMOVAL = 574,
     RENAMES = 575,
     REPLACING = 576,
     REPORT = 577,
     REPORTING = 578,
     REPORTS = 579,
     REPORT_FOOTING = 580,
     REPORT_HEADING = 581,
     REPOSITORY = 582,
     REQUIRED = 583,
     RESERVE = 584,
     RETURN = 585,
     RETURNING = 586,
     REVERSE_FUNC = 587,
     REVERSE_VIDEO = 588,
     REWIND = 589,
     REWRITE = 590,
     RIGHT = 591,
     ROLLBACK = 592,
     ROUNDED = 593,
     RUN = 594,
     SAME = 595,
     SCREEN = 596,
     SCREEN_CONTROL = 597,
     SCROLL = 598,
     SD = 599,
     SEARCH = 600,
     SECTION = 601,
     SECURE = 602,
     SEGMENT_LIMIT = 603,
     SELECT = 604,
     SEMI_COLON = 605,
     SENTENCE = 606,
     SEPARATE = 607,
     SEQUENCE = 608,
     SEQUENTIAL = 609,
     SET = 610,
     SHARING = 611,
     SIGN = 612,
     SIGNED = 613,
     SIGNED_INT = 614,
     SIGNED_LONG = 615,
     SIGNED_SHORT = 616,
     SIZE = 617,
     SIZE_ERROR = 618,
     SORT = 619,
     SORT_MERGE = 620,
     SOURCE = 621,
     SOURCE_COMPUTER = 622,
     SPACE = 623,
     SPECIAL_NAMES = 624,
     STANDARD = 625,
     STANDARD_1 = 626,
     STANDARD_2 = 627,
     START = 628,
     STATUS = 629,
     STOP = 630,
     STRING = 631,
     SUBSTITUTE_FUNC = 632,
     SUBSTITUTE_CASE_FUNC = 633,
     SUBTRACT = 634,
     SUM = 635,
     SUPPRESS = 636,
     SYMBOLIC = 637,
     SYNCHRONIZED = 638,
     TALLYING = 639,
     TAPE = 640,
     TERMINATE = 641,
     TEST = 642,
     THAN = 643,
     THEN = 644,
     THRU = 645,
     TIME = 646,
     TIMES = 647,
     TO = 648,
     TOK_FALSE = 649,
     TOK_FILE = 650,
     TOK_INITIAL = 651,
     TOK_NULL = 652,
     TOK_TRUE = 653,
     TOP = 654,
     TRAILING = 655,
     TRANSFORM = 656,
     TRIM_FUNCTION = 657,
     TYPE = 658,
     UNDERLINE = 659,
     UNIT = 660,
     UNLOCK = 661,
     UNSIGNED = 662,
     UNSIGNED_INT = 663,
     UNSIGNED_LONG = 664,
     UNSIGNED_SHORT = 665,
     UNSTRING = 666,
     UNTIL = 667,
     UP = 668,
     UPDATE = 669,
     UPON = 670,
     UPON_ARGUMENT_NUMBER = 671,
     UPON_COMMAND_LINE = 672,
     UPON_ENVIRONMENT_NAME = 673,
     UPON_ENVIRONMENT_VALUE = 674,
     UPPER_CASE_FUNC = 675,
     USAGE = 676,
     USE = 677,
     USING = 678,
     VALUE = 679,
     VARYING = 680,
     WAIT = 681,
     WHEN = 682,
     WHEN_COMPILED_FUNC = 683,
     WITH = 684,
     WORD = 685,
     WORDS = 686,
     WORKING_STORAGE = 687,
     WRITE = 688,
     YYYYDDD = 689,
     YYYYMMDD = 690,
     ZERO = 691,
     UNARY_SIGN = 692
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_PARSER_H_INCLUDED  */
