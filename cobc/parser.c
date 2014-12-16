/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



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
     ASCII = 283,
     ASSIGN = 284,
     AT = 285,
     ATTRIBUTE = 286,
     AUTO = 287,
     AUTOMATIC = 288,
     AWAY_FROM_ZERO = 289,
     BACKGROUND_COLOR = 290,
     BASED = 291,
     BEFORE = 292,
     BELL = 293,
     BINARY = 294,
     BINARY_C_LONG = 295,
     BINARY_CHAR = 296,
     BINARY_DOUBLE = 297,
     BINARY_LONG = 298,
     BINARY_SHORT = 299,
     BLANK = 300,
     BLINK = 301,
     BLOCK = 302,
     BOTTOM = 303,
     BY = 304,
     BYTE_LENGTH = 305,
     CALL = 306,
     CANCEL = 307,
     CF = 308,
     CH = 309,
     CHAINING = 310,
     CHARACTER = 311,
     CHARACTERS = 312,
     CLASS = 313,
     CLASSIFICATION = 314,
     CLOSE = 315,
     CODE = 316,
     CODE_SET = 317,
     COLLATING = 318,
     COL = 319,
     COLS = 320,
     COLUMN = 321,
     COLUMNS = 322,
     COMMA = 323,
     COMMAND_LINE = 324,
     COMMA_DELIM = 325,
     COMMIT = 326,
     COMMON = 327,
     COMP = 328,
     COMPUTE = 329,
     COMP_1 = 330,
     COMP_2 = 331,
     COMP_3 = 332,
     COMP_4 = 333,
     COMP_5 = 334,
     COMP_6 = 335,
     COMP_X = 336,
     CONCATENATE_FUNC = 337,
     CONDITION = 338,
     CONFIGURATION = 339,
     CONSTANT = 340,
     CONTAINS = 341,
     CONTENT = 342,
     CONTINUE = 343,
     CONTROL = 344,
     CONTROLS = 345,
     CONVERSION = 346,
     CONVERTING = 347,
     COPY = 348,
     CORRESPONDING = 349,
     COUNT = 350,
     CRT = 351,
     CRT_UNDER = 352,
     CURRENCY = 353,
     CURRENT_DATE_FUNC = 354,
     CURSOR = 355,
     CYCLE = 356,
     DATA = 357,
     DATE = 358,
     DAY = 359,
     DAY_OF_WEEK = 360,
     DE = 361,
     DEBUGGING = 362,
     DECIMAL_POINT = 363,
     DECLARATIVES = 364,
     DEFAULT = 365,
     DELETE = 366,
     DELIMITED = 367,
     DELIMITER = 368,
     DEPENDING = 369,
     DESCENDING = 370,
     DETAIL = 371,
     DISC = 372,
     DISK = 373,
     DISPLAY = 374,
     DISPLAY_OF_FUNC = 375,
     DIVIDE = 376,
     DIVISION = 377,
     DOWN = 378,
     DUPLICATES = 379,
     DYNAMIC = 380,
     EBCDIC = 381,
     EC = 382,
     ELSE = 383,
     END = 384,
     END_ACCEPT = 385,
     END_ADD = 386,
     END_CALL = 387,
     END_COMPUTE = 388,
     END_DELETE = 389,
     END_DISPLAY = 390,
     END_DIVIDE = 391,
     END_EVALUATE = 392,
     END_FUNCTION = 393,
     END_IF = 394,
     END_MULTIPLY = 395,
     END_PERFORM = 396,
     END_PROGRAM = 397,
     END_READ = 398,
     END_RETURN = 399,
     END_REWRITE = 400,
     END_SEARCH = 401,
     END_START = 402,
     END_STRING = 403,
     END_SUBTRACT = 404,
     END_UNSTRING = 405,
     END_WRITE = 406,
     ENTRY = 407,
     ENVIRONMENT = 408,
     ENVIRONMENT_NAME = 409,
     ENVIRONMENT_VALUE = 410,
     EOL = 411,
     EOP = 412,
     EOS = 413,
     EQUAL = 414,
     ERASE = 415,
     ERROR = 416,
     ESCAPE = 417,
     EVALUATE = 418,
     EVENT_STATUS = 419,
     EXCEPTION = 420,
     EXCEPTION_CONDITION = 421,
     EXCLUSIVE = 422,
     EXIT = 423,
     EXPONENTIATION = 424,
     EXTEND = 425,
     EXTERNAL = 426,
     FD = 427,
     FILE_CONTROL = 428,
     FILE_ID = 429,
     FILLER = 430,
     FINAL = 431,
     FIRST = 432,
     FLOAT_BINARY_128 = 433,
     FLOAT_BINARY_32 = 434,
     FLOAT_BINARY_64 = 435,
     FLOAT_DECIMAL_16 = 436,
     FLOAT_DECIMAL_34 = 437,
     FLOAT_DECIMAL_7 = 438,
     FLOAT_EXTENDED = 439,
     FLOAT_LONG = 440,
     FLOAT_SHORT = 441,
     FOOTING = 442,
     FOR = 443,
     FOREGROUND_COLOR = 444,
     FOREVER = 445,
     FORMATTED_CURRENT_FUNC = 446,
     FORMATTED_DATE_FUNC = 447,
     FORMATTED_DATETIME_FUNC = 448,
     FORMATTED_TIME_FUNC = 449,
     FREE = 450,
     FROM = 451,
     FROM_CRT = 452,
     FULL = 453,
     FUNCTION = 454,
     FUNCTION_ID = 455,
     FUNCTION_NAME = 456,
     GENERATE = 457,
     GIVING = 458,
     GLOBAL = 459,
     GO = 460,
     GOBACK = 461,
     GREATER = 462,
     GREATER_OR_EQUAL = 463,
     GROUP = 464,
     HEADING = 465,
     HIGHLIGHT = 466,
     HIGH_VALUE = 467,
     ID = 468,
     IDENTIFICATION = 469,
     IF = 470,
     IGNORE = 471,
     IGNORING = 472,
     IN = 473,
     INDEX = 474,
     INDEXED = 475,
     INDICATE = 476,
     INITIALIZE = 477,
     INITIALIZED = 478,
     INITIATE = 479,
     INPUT = 480,
     INPUT_OUTPUT = 481,
     INSPECT = 482,
     INTO = 483,
     INTRINSIC = 484,
     INVALID = 485,
     INVALID_KEY = 486,
     IS = 487,
     I_O = 488,
     I_O_CONTROL = 489,
     JUSTIFIED = 490,
     KEPT = 491,
     KEY = 492,
     KEYBOARD = 493,
     LABEL = 494,
     LAST = 495,
     LEADING = 496,
     LEFT = 497,
     LEFTLINE = 498,
     LENGTH = 499,
     LENGTH_OF = 500,
     LESS = 501,
     LESS_OR_EQUAL = 502,
     LIMIT = 503,
     LIMITS = 504,
     LINAGE = 505,
     LINAGE_COUNTER = 506,
     LINE = 507,
     LINE_COUNTER = 508,
     LINES = 509,
     LINKAGE = 510,
     LITERAL = 511,
     LOCALE = 512,
     LOCALE_DATE_FUNC = 513,
     LOCALE_TIME_FUNC = 514,
     LOCALE_TIME_FROM_FUNC = 515,
     LOCAL_STORAGE = 516,
     LOCK = 517,
     LOWER = 518,
     LOWER_CASE_FUNC = 519,
     LOWLIGHT = 520,
     LOW_VALUE = 521,
     MANUAL = 522,
     MEMORY = 523,
     MERGE = 524,
     MINUS = 525,
     MNEMONIC_NAME = 526,
     MODE = 527,
     MOVE = 528,
     MULTIPLE = 529,
     MULTIPLY = 530,
     NAME = 531,
     NATIONAL = 532,
     NATIONAL_EDITED = 533,
     NATIONAL_OF_FUNC = 534,
     NATIVE = 535,
     NEAREST_AWAY_FROM_ZERO = 536,
     NEAREST_EVEN = 537,
     NEAREST_TOWARD_ZERO = 538,
     NEGATIVE = 539,
     NEXT = 540,
     NEXT_PAGE = 541,
     NO = 542,
     NO_ECHO = 543,
     NORMAL = 544,
     NOT = 545,
     NOT_END = 546,
     NOT_EOP = 547,
     NOT_EQUAL = 548,
     NOT_EXCEPTION = 549,
     NOT_INVALID_KEY = 550,
     NOT_OVERFLOW = 551,
     NOT_SIZE_ERROR = 552,
     NO_ADVANCING = 553,
     NUMBER = 554,
     NUMBERS = 555,
     NUMERIC = 556,
     NUMERIC_EDITED = 557,
     NUMVALC_FUNC = 558,
     OBJECT_COMPUTER = 559,
     OCCURS = 560,
     OF = 561,
     OFF = 562,
     OMITTED = 563,
     ON = 564,
     ONLY = 565,
     OPEN = 566,
     OPTIONAL = 567,
     OR = 568,
     ORDER = 569,
     ORGANIZATION = 570,
     OTHER = 571,
     OUTPUT = 572,
     OVERLINE = 573,
     PACKED_DECIMAL = 574,
     PADDING = 575,
     PAGE = 576,
     PAGE_COUNTER = 577,
     PARAGRAPH = 578,
     PERFORM = 579,
     PH = 580,
     PF = 581,
     PICTURE = 582,
     PICTURE_SYMBOL = 583,
     PLUS = 584,
     POINTER = 585,
     POSITION = 586,
     POSITIVE = 587,
     PRESENT = 588,
     PREVIOUS = 589,
     PRINTER = 590,
     PRINTING = 591,
     PROCEDURE = 592,
     PROCEDURES = 593,
     PROCEED = 594,
     PROGRAM = 595,
     PROGRAM_ID = 596,
     PROGRAM_NAME = 597,
     PROGRAM_POINTER = 598,
     PROHIBITED = 599,
     PROMPT = 600,
     QUOTE = 601,
     RANDOM = 602,
     RD = 603,
     READ = 604,
     READY_TRACE = 605,
     RECORD = 606,
     RECORDING = 607,
     RECORDS = 608,
     RECURSIVE = 609,
     REDEFINES = 610,
     REEL = 611,
     REFERENCE = 612,
     REFERENCES = 613,
     RELATIVE = 614,
     RELEASE = 615,
     REMAINDER = 616,
     REMOVAL = 617,
     RENAMES = 618,
     REPLACE = 619,
     REPLACING = 620,
     REPORT = 621,
     REPORTING = 622,
     REPORTS = 623,
     REPOSITORY = 624,
     REPO_FUNCTION = 625,
     REQUIRED = 626,
     RESERVE = 627,
     RESET = 628,
     RESET_TRACE = 629,
     RETURN = 630,
     RETURNING = 631,
     REVERSE_FUNC = 632,
     REVERSE_VIDEO = 633,
     REVERSED = 634,
     REWIND = 635,
     REWRITE = 636,
     RF = 637,
     RH = 638,
     RIGHT = 639,
     ROLLBACK = 640,
     ROUNDED = 641,
     RUN = 642,
     SAME = 643,
     SCREEN = 644,
     SCREEN_CONTROL = 645,
     SCROLL = 646,
     SD = 647,
     SEARCH = 648,
     SECTION = 649,
     SECURE = 650,
     SEGMENT_LIMIT = 651,
     SELECT = 652,
     SEMI_COLON = 653,
     SENTENCE = 654,
     SEPARATE = 655,
     SEQUENCE = 656,
     SEQUENTIAL = 657,
     SET = 658,
     SHARING = 659,
     SIGN = 660,
     SIGNED = 661,
     SIGNED_INT = 662,
     SIGNED_LONG = 663,
     SIGNED_SHORT = 664,
     SIZE = 665,
     SIZE_ERROR = 666,
     SORT = 667,
     SORT_MERGE = 668,
     SOURCE = 669,
     SOURCE_COMPUTER = 670,
     SPACE = 671,
     SPECIAL_NAMES = 672,
     STANDARD = 673,
     STANDARD_1 = 674,
     STANDARD_2 = 675,
     START = 676,
     STATIC = 677,
     STATUS = 678,
     STDCALL = 679,
     STEP = 680,
     STOP = 681,
     STRING = 682,
     SUBSTITUTE_FUNC = 683,
     SUBSTITUTE_CASE_FUNC = 684,
     SUBTRACT = 685,
     SUM = 686,
     SUPPRESS = 687,
     SYMBOLIC = 688,
     SYNCHRONIZED = 689,
     SYSTEM_DEFAULT = 690,
     TALLYING = 691,
     TAPE = 692,
     TERMINATE = 693,
     TEST = 694,
     THAN = 695,
     THEN = 696,
     THRU = 697,
     TIME = 698,
     TIMEOUT = 699,
     TIMES = 700,
     TO = 701,
     TOK_AMPER = 702,
     TOK_CLOSE_PAREN = 703,
     TOK_COLON = 704,
     TOK_DIV = 705,
     TOK_DOT = 706,
     TOK_EQUAL = 707,
     TOK_FALSE = 708,
     TOK_FILE = 709,
     TOK_GREATER = 710,
     TOK_INITIAL = 711,
     TOK_LESS = 712,
     TOK_MINUS = 713,
     TOK_MUL = 714,
     TOK_NULL = 715,
     TOK_OVERFLOW = 716,
     TOK_OPEN_PAREN = 717,
     TOK_PLUS = 718,
     TOK_TRUE = 719,
     TOP = 720,
     TOWARD_GREATER = 721,
     TOWARD_LESSER = 722,
     TRAILING = 723,
     TRANSFORM = 724,
     TRIM_FUNC = 725,
     TRUNCATION = 726,
     TYPE = 727,
     UNDERLINE = 728,
     UNIT = 729,
     UNLOCK = 730,
     UNSIGNED = 731,
     UNSIGNED_INT = 732,
     UNSIGNED_LONG = 733,
     UNSIGNED_SHORT = 734,
     UNSTRING = 735,
     UNTIL = 736,
     UP = 737,
     UPDATE = 738,
     UPON = 739,
     UPON_ARGUMENT_NUMBER = 740,
     UPON_COMMAND_LINE = 741,
     UPON_ENVIRONMENT_NAME = 742,
     UPON_ENVIRONMENT_VALUE = 743,
     UPPER = 744,
     UPPER_CASE_FUNC = 745,
     USAGE = 746,
     USE = 747,
     USER = 748,
     USER_DEFAULT = 749,
     USER_FUNCTION_NAME = 750,
     USER_REPO_FUNCTION = 751,
     USING = 752,
     VALUE = 753,
     VARYING = 754,
     WAIT = 755,
     WHEN = 756,
     WHEN_COMPILED_FUNC = 757,
     WITH = 758,
     WORD = 759,
     WORDS = 760,
     WORKING_STORAGE = 761,
     WRITE = 762,
     YYYYDDD = 763,
     YYYYMMDD = 764,
     ZERO = 765,
     SHIFT_PREFER = 766
   };
#endif
/* Tokens.  */
#define TOKEN_EOF 0
#define ACCEPT 258
#define ACCESS 259
#define ADD 260
#define ADDRESS 261
#define ADVANCING 262
#define AFTER 263
#define ALL 264
#define ALLOCATE 265
#define ALPHABET 266
#define ALPHABETIC 267
#define ALPHABETIC_LOWER 268
#define ALPHABETIC_UPPER 269
#define ALPHANUMERIC 270
#define ALPHANUMERIC_EDITED 271
#define ALSO 272
#define ALTER 273
#define ALTERNATE 274
#define AND 275
#define ANY 276
#define ARE 277
#define AREA 278
#define ARGUMENT_NUMBER 279
#define ARGUMENT_VALUE 280
#define AS 281
#define ASCENDING 282
#define ASCII 283
#define ASSIGN 284
#define AT 285
#define ATTRIBUTE 286
#define AUTO 287
#define AUTOMATIC 288
#define AWAY_FROM_ZERO 289
#define BACKGROUND_COLOR 290
#define BASED 291
#define BEFORE 292
#define BELL 293
#define BINARY 294
#define BINARY_C_LONG 295
#define BINARY_CHAR 296
#define BINARY_DOUBLE 297
#define BINARY_LONG 298
#define BINARY_SHORT 299
#define BLANK 300
#define BLINK 301
#define BLOCK 302
#define BOTTOM 303
#define BY 304
#define BYTE_LENGTH 305
#define CALL 306
#define CANCEL 307
#define CF 308
#define CH 309
#define CHAINING 310
#define CHARACTER 311
#define CHARACTERS 312
#define CLASS 313
#define CLASSIFICATION 314
#define CLOSE 315
#define CODE 316
#define CODE_SET 317
#define COLLATING 318
#define COL 319
#define COLS 320
#define COLUMN 321
#define COLUMNS 322
#define COMMA 323
#define COMMAND_LINE 324
#define COMMA_DELIM 325
#define COMMIT 326
#define COMMON 327
#define COMP 328
#define COMPUTE 329
#define COMP_1 330
#define COMP_2 331
#define COMP_3 332
#define COMP_4 333
#define COMP_5 334
#define COMP_6 335
#define COMP_X 336
#define CONCATENATE_FUNC 337
#define CONDITION 338
#define CONFIGURATION 339
#define CONSTANT 340
#define CONTAINS 341
#define CONTENT 342
#define CONTINUE 343
#define CONTROL 344
#define CONTROLS 345
#define CONVERSION 346
#define CONVERTING 347
#define COPY 348
#define CORRESPONDING 349
#define COUNT 350
#define CRT 351
#define CRT_UNDER 352
#define CURRENCY 353
#define CURRENT_DATE_FUNC 354
#define CURSOR 355
#define CYCLE 356
#define DATA 357
#define DATE 358
#define DAY 359
#define DAY_OF_WEEK 360
#define DE 361
#define DEBUGGING 362
#define DECIMAL_POINT 363
#define DECLARATIVES 364
#define DEFAULT 365
#define DELETE 366
#define DELIMITED 367
#define DELIMITER 368
#define DEPENDING 369
#define DESCENDING 370
#define DETAIL 371
#define DISC 372
#define DISK 373
#define DISPLAY 374
#define DISPLAY_OF_FUNC 375
#define DIVIDE 376
#define DIVISION 377
#define DOWN 378
#define DUPLICATES 379
#define DYNAMIC 380
#define EBCDIC 381
#define EC 382
#define ELSE 383
#define END 384
#define END_ACCEPT 385
#define END_ADD 386
#define END_CALL 387
#define END_COMPUTE 388
#define END_DELETE 389
#define END_DISPLAY 390
#define END_DIVIDE 391
#define END_EVALUATE 392
#define END_FUNCTION 393
#define END_IF 394
#define END_MULTIPLY 395
#define END_PERFORM 396
#define END_PROGRAM 397
#define END_READ 398
#define END_RETURN 399
#define END_REWRITE 400
#define END_SEARCH 401
#define END_START 402
#define END_STRING 403
#define END_SUBTRACT 404
#define END_UNSTRING 405
#define END_WRITE 406
#define ENTRY 407
#define ENVIRONMENT 408
#define ENVIRONMENT_NAME 409
#define ENVIRONMENT_VALUE 410
#define EOL 411
#define EOP 412
#define EOS 413
#define EQUAL 414
#define ERASE 415
#define ERROR 416
#define ESCAPE 417
#define EVALUATE 418
#define EVENT_STATUS 419
#define EXCEPTION 420
#define EXCEPTION_CONDITION 421
#define EXCLUSIVE 422
#define EXIT 423
#define EXPONENTIATION 424
#define EXTEND 425
#define EXTERNAL 426
#define FD 427
#define FILE_CONTROL 428
#define FILE_ID 429
#define FILLER 430
#define FINAL 431
#define FIRST 432
#define FLOAT_BINARY_128 433
#define FLOAT_BINARY_32 434
#define FLOAT_BINARY_64 435
#define FLOAT_DECIMAL_16 436
#define FLOAT_DECIMAL_34 437
#define FLOAT_DECIMAL_7 438
#define FLOAT_EXTENDED 439
#define FLOAT_LONG 440
#define FLOAT_SHORT 441
#define FOOTING 442
#define FOR 443
#define FOREGROUND_COLOR 444
#define FOREVER 445
#define FORMATTED_CURRENT_FUNC 446
#define FORMATTED_DATE_FUNC 447
#define FORMATTED_DATETIME_FUNC 448
#define FORMATTED_TIME_FUNC 449
#define FREE 450
#define FROM 451
#define FROM_CRT 452
#define FULL 453
#define FUNCTION 454
#define FUNCTION_ID 455
#define FUNCTION_NAME 456
#define GENERATE 457
#define GIVING 458
#define GLOBAL 459
#define GO 460
#define GOBACK 461
#define GREATER 462
#define GREATER_OR_EQUAL 463
#define GROUP 464
#define HEADING 465
#define HIGHLIGHT 466
#define HIGH_VALUE 467
#define ID 468
#define IDENTIFICATION 469
#define IF 470
#define IGNORE 471
#define IGNORING 472
#define IN 473
#define INDEX 474
#define INDEXED 475
#define INDICATE 476
#define INITIALIZE 477
#define INITIALIZED 478
#define INITIATE 479
#define INPUT 480
#define INPUT_OUTPUT 481
#define INSPECT 482
#define INTO 483
#define INTRINSIC 484
#define INVALID 485
#define INVALID_KEY 486
#define IS 487
#define I_O 488
#define I_O_CONTROL 489
#define JUSTIFIED 490
#define KEPT 491
#define KEY 492
#define KEYBOARD 493
#define LABEL 494
#define LAST 495
#define LEADING 496
#define LEFT 497
#define LEFTLINE 498
#define LENGTH 499
#define LENGTH_OF 500
#define LESS 501
#define LESS_OR_EQUAL 502
#define LIMIT 503
#define LIMITS 504
#define LINAGE 505
#define LINAGE_COUNTER 506
#define LINE 507
#define LINE_COUNTER 508
#define LINES 509
#define LINKAGE 510
#define LITERAL 511
#define LOCALE 512
#define LOCALE_DATE_FUNC 513
#define LOCALE_TIME_FUNC 514
#define LOCALE_TIME_FROM_FUNC 515
#define LOCAL_STORAGE 516
#define LOCK 517
#define LOWER 518
#define LOWER_CASE_FUNC 519
#define LOWLIGHT 520
#define LOW_VALUE 521
#define MANUAL 522
#define MEMORY 523
#define MERGE 524
#define MINUS 525
#define MNEMONIC_NAME 526
#define MODE 527
#define MOVE 528
#define MULTIPLE 529
#define MULTIPLY 530
#define NAME 531
#define NATIONAL 532
#define NATIONAL_EDITED 533
#define NATIONAL_OF_FUNC 534
#define NATIVE 535
#define NEAREST_AWAY_FROM_ZERO 536
#define NEAREST_EVEN 537
#define NEAREST_TOWARD_ZERO 538
#define NEGATIVE 539
#define NEXT 540
#define NEXT_PAGE 541
#define NO 542
#define NO_ECHO 543
#define NORMAL 544
#define NOT 545
#define NOT_END 546
#define NOT_EOP 547
#define NOT_EQUAL 548
#define NOT_EXCEPTION 549
#define NOT_INVALID_KEY 550
#define NOT_OVERFLOW 551
#define NOT_SIZE_ERROR 552
#define NO_ADVANCING 553
#define NUMBER 554
#define NUMBERS 555
#define NUMERIC 556
#define NUMERIC_EDITED 557
#define NUMVALC_FUNC 558
#define OBJECT_COMPUTER 559
#define OCCURS 560
#define OF 561
#define OFF 562
#define OMITTED 563
#define ON 564
#define ONLY 565
#define OPEN 566
#define OPTIONAL 567
#define OR 568
#define ORDER 569
#define ORGANIZATION 570
#define OTHER 571
#define OUTPUT 572
#define OVERLINE 573
#define PACKED_DECIMAL 574
#define PADDING 575
#define PAGE 576
#define PAGE_COUNTER 577
#define PARAGRAPH 578
#define PERFORM 579
#define PH 580
#define PF 581
#define PICTURE 582
#define PICTURE_SYMBOL 583
#define PLUS 584
#define POINTER 585
#define POSITION 586
#define POSITIVE 587
#define PRESENT 588
#define PREVIOUS 589
#define PRINTER 590
#define PRINTING 591
#define PROCEDURE 592
#define PROCEDURES 593
#define PROCEED 594
#define PROGRAM 595
#define PROGRAM_ID 596
#define PROGRAM_NAME 597
#define PROGRAM_POINTER 598
#define PROHIBITED 599
#define PROMPT 600
#define QUOTE 601
#define RANDOM 602
#define RD 603
#define READ 604
#define READY_TRACE 605
#define RECORD 606
#define RECORDING 607
#define RECORDS 608
#define RECURSIVE 609
#define REDEFINES 610
#define REEL 611
#define REFERENCE 612
#define REFERENCES 613
#define RELATIVE 614
#define RELEASE 615
#define REMAINDER 616
#define REMOVAL 617
#define RENAMES 618
#define REPLACE 619
#define REPLACING 620
#define REPORT 621
#define REPORTING 622
#define REPORTS 623
#define REPOSITORY 624
#define REPO_FUNCTION 625
#define REQUIRED 626
#define RESERVE 627
#define RESET 628
#define RESET_TRACE 629
#define RETURN 630
#define RETURNING 631
#define REVERSE_FUNC 632
#define REVERSE_VIDEO 633
#define REVERSED 634
#define REWIND 635
#define REWRITE 636
#define RF 637
#define RH 638
#define RIGHT 639
#define ROLLBACK 640
#define ROUNDED 641
#define RUN 642
#define SAME 643
#define SCREEN 644
#define SCREEN_CONTROL 645
#define SCROLL 646
#define SD 647
#define SEARCH 648
#define SECTION 649
#define SECURE 650
#define SEGMENT_LIMIT 651
#define SELECT 652
#define SEMI_COLON 653
#define SENTENCE 654
#define SEPARATE 655
#define SEQUENCE 656
#define SEQUENTIAL 657
#define SET 658
#define SHARING 659
#define SIGN 660
#define SIGNED 661
#define SIGNED_INT 662
#define SIGNED_LONG 663
#define SIGNED_SHORT 664
#define SIZE 665
#define SIZE_ERROR 666
#define SORT 667
#define SORT_MERGE 668
#define SOURCE 669
#define SOURCE_COMPUTER 670
#define SPACE 671
#define SPECIAL_NAMES 672
#define STANDARD 673
#define STANDARD_1 674
#define STANDARD_2 675
#define START 676
#define STATIC 677
#define STATUS 678
#define STDCALL 679
#define STEP 680
#define STOP 681
#define STRING 682
#define SUBSTITUTE_FUNC 683
#define SUBSTITUTE_CASE_FUNC 684
#define SUBTRACT 685
#define SUM 686
#define SUPPRESS 687
#define SYMBOLIC 688
#define SYNCHRONIZED 689
#define SYSTEM_DEFAULT 690
#define TALLYING 691
#define TAPE 692
#define TERMINATE 693
#define TEST 694
#define THAN 695
#define THEN 696
#define THRU 697
#define TIME 698
#define TIMEOUT 699
#define TIMES 700
#define TO 701
#define TOK_AMPER 702
#define TOK_CLOSE_PAREN 703
#define TOK_COLON 704
#define TOK_DIV 705
#define TOK_DOT 706
#define TOK_EQUAL 707
#define TOK_FALSE 708
#define TOK_FILE 709
#define TOK_GREATER 710
#define TOK_INITIAL 711
#define TOK_LESS 712
#define TOK_MINUS 713
#define TOK_MUL 714
#define TOK_NULL 715
#define TOK_OVERFLOW 716
#define TOK_OPEN_PAREN 717
#define TOK_PLUS 718
#define TOK_TRUE 719
#define TOP 720
#define TOWARD_GREATER 721
#define TOWARD_LESSER 722
#define TRAILING 723
#define TRANSFORM 724
#define TRIM_FUNC 725
#define TRUNCATION 726
#define TYPE 727
#define UNDERLINE 728
#define UNIT 729
#define UNLOCK 730
#define UNSIGNED 731
#define UNSIGNED_INT 732
#define UNSIGNED_LONG 733
#define UNSIGNED_SHORT 734
#define UNSTRING 735
#define UNTIL 736
#define UP 737
#define UPDATE 738
#define UPON 739
#define UPON_ARGUMENT_NUMBER 740
#define UPON_COMMAND_LINE 741
#define UPON_ENVIRONMENT_NAME 742
#define UPON_ENVIRONMENT_VALUE 743
#define UPPER 744
#define UPPER_CASE_FUNC 745
#define USAGE 746
#define USE 747
#define USER 748
#define USER_DEFAULT 749
#define USER_FUNCTION_NAME 750
#define USER_REPO_FUNCTION 751
#define USING 752
#define VALUE 753
#define VARYING 754
#define WAIT 755
#define WHEN 756
#define WHEN_COMPILED_FUNC 757
#define WITH 758
#define WORD 759
#define WORDS 760
#define WORKING_STORAGE 761
#define WRITE 762
#define YYYYDDD 763
#define YYYYMMDD 764
#define ZERO 765
#define SHIFT_PREFER 766




/* Copy the first part of user declarations.  */
#line 27 "parser.y"

#include "config.h"

#include <stdlib.h>
#include <string.h>

#define	COB_IN_PARSER	1
#include "cobc.h"
#include "tree.h"

#ifndef	_STDLIB_H
#define	_STDLIB_H 1
#endif

#define YYSTYPE			cb_tree
#define yyerror			cb_error

#define PENDING(x)		cb_warning (_("'%s' not implemented"), x)
#define PENDINGDEV(x)		cb_warning (_("'%s' currently in development"), x)

#define emit_statement(x) \
do { \
  if (!skip_statements) { \
	CB_ADD_TO_CHAIN (x, current_program->exec_list); \
  } \
} while (0)

#define push_expr(type, node) \
  current_expr = cb_build_list (cb_int (type), node, current_expr)

/* Statement terminator definitions */
#define TERM_NONE		0
#define TERM_ACCEPT		1U
#define TERM_ADD		2U
#define TERM_CALL		3U
#define TERM_COMPUTE		4U
#define TERM_DELETE		5U
#define TERM_DISPLAY		6U
#define TERM_DIVIDE		7U
#define TERM_EVALUATE		8U
#define TERM_IF			9U
#define TERM_MULTIPLY		10U
#define TERM_PERFORM		11U
#define TERM_READ		12U
#define TERM_RECEIVE		13U
#define TERM_RETURN		14U
#define TERM_REWRITE		15U
#define TERM_SEARCH		16U
#define TERM_START		17U
#define TERM_STRING		18U
#define TERM_SUBTRACT		19U
#define TERM_UNSTRING		20U
#define TERM_WRITE		21U
#define TERM_MAX		22U

#define	TERMINATOR_WARNING(x,z)	terminator_warning (x, TERM_##z, #z)
#define	TERMINATOR_ERROR(x,z)	terminator_error (x, TERM_##z, #z)
#define	TERMINATOR_CLEAR(x,z)	terminator_clear (x, TERM_##z)

/* Defines for duplicate checks */
/* Note - We use <= 16 for common item definitons and */
/* > 16 for non-common item definitions eg. REPORT and SCREEN */
#define	SYN_CLAUSE_1		(1U << 0)
#define	SYN_CLAUSE_2		(1U << 1)
#define	SYN_CLAUSE_3		(1U << 2)
#define	SYN_CLAUSE_4		(1U << 3)
#define	SYN_CLAUSE_5		(1U << 4)
#define	SYN_CLAUSE_6		(1U << 5)
#define	SYN_CLAUSE_7		(1U << 6)
#define	SYN_CLAUSE_8		(1U << 7)
#define	SYN_CLAUSE_9		(1U << 8)
#define	SYN_CLAUSE_10		(1U << 9)
#define	SYN_CLAUSE_11		(1U << 10)
#define	SYN_CLAUSE_12		(1U << 11)
#define	SYN_CLAUSE_13		(1U << 12)
#define	SYN_CLAUSE_14		(1U << 13)
#define	SYN_CLAUSE_15		(1U << 14)
#define	SYN_CLAUSE_16		(1U << 15)
#define	SYN_CLAUSE_17		(1U << 16)
#define	SYN_CLAUSE_18		(1U << 17)
#define	SYN_CLAUSE_19		(1U << 18)
#define	SYN_CLAUSE_20		(1U << 19)
#define	SYN_CLAUSE_21		(1U << 20)
#define	SYN_CLAUSE_22		(1U << 21)
#define	SYN_CLAUSE_23		(1U << 22)
#define	SYN_CLAUSE_24		(1U << 23)
#define	SYN_CLAUSE_25		(1U << 24)
#define	SYN_CLAUSE_26		(1U << 25)
#define	SYN_CLAUSE_27		(1U << 26)
#define	SYN_CLAUSE_28		(1U << 27)
#define	SYN_CLAUSE_29		(1U << 28)
#define	SYN_CLAUSE_30		(1U << 29)
#define	SYN_CLAUSE_31		(1U << 30)
#define	SYN_CLAUSE_32		(1U << 31)

#define	EVAL_DEPTH		32
#define	PROG_DEPTH		16

/* Global variables */

struct cb_program		*current_program = NULL;
struct cb_statement		*current_statement = NULL;
struct cb_label			*current_section = NULL;
struct cb_label			*current_paragraph = NULL;
char				*cobc_glob_line = NULL;

cb_tree				cobc_printer_node = NULL;
int				functions_are_all = 0;
int				non_const_word = 0;
unsigned int			cobc_in_procedure = 0;
unsigned int			cobc_in_repository = 0;
unsigned int			cobc_force_literal = 0;
unsigned int			cobc_cs_check = 0;

/* Local variables */

static struct cb_statement	*main_statement;

static cb_tree			current_expr;
static struct cb_field		*current_field;
static struct cb_field		*control_field;
static struct cb_field		*description_field;
static struct cb_file		*current_file;
static struct cb_report		*current_report;
static struct cb_report		*report_instance;

static struct cb_file		*linage_file;
static cb_tree			next_label_list;

static char			*stack_progid[PROG_DEPTH];

static enum cb_storage		current_storage;

static cb_tree			perform_stack;
static cb_tree			qualifier;

static cb_tree			save_tree;
static cb_tree			start_tree;

static unsigned int		check_unreached;
static unsigned int		in_declaratives;
static unsigned int		in_debugging;
static unsigned int		current_linage;
static unsigned int		report_count;
static unsigned int		prog_end;
static unsigned int		use_global_ind;
static unsigned int		samearea;
static unsigned int		inspect_keyword;
static unsigned int		main_flag_set;
static int			next_label_id;
static int			eval_level;
static int			eval_inc;
static int			eval_inc2;
static int			depth;
static int			call_mode;
static int			size_mode;
static int			setattr_val_on;
static int			setattr_val_off;
static unsigned int		check_duplicate;
static unsigned int		check_pic_duplicate;
static unsigned int		check_comp_duplicate;
static unsigned int		skip_statements;
static unsigned int		start_debug;
static unsigned int		save_debug;
static unsigned int		needs_field_debug;
static unsigned int		needs_debug_item;
static unsigned int		env_div_seen;
static unsigned int		header_check;

static int			term_array[TERM_MAX];
static cb_tree			eval_check[EVAL_DEPTH][EVAL_DEPTH];

/* Defines for header presence */

#define	COBC_HD_ENVIRONMENT_DIVISION	(1U << 0)
#define	COBC_HD_CONFIGURATION_SECTION	(1U << 1)
#define	COBC_HD_SPECIAL_NAMES		(1U << 2)
#define	COBC_HD_INPUT_OUTPUT_SECTION	(1U << 3)
#define	COBC_HD_FILE_CONTROL		(1U << 4)
#define	COBC_HD_I_O_CONTROL		(1U << 5)
#define	COBC_HD_DATA_DIVISION		(1U << 6)
#define	COBC_HD_FILE_SECTION		(1U << 7)
#define	COBC_HD_WORKING_STORAGE_SECTION	(1U << 8)
#define	COBC_HD_LOCAL_STORAGE_SECTION	(1U << 9)
#define	COBC_HD_LINKAGE_SECTION		(1U << 10)
#define	COBC_HD_COMMUNICATIONS_SECTION	(1U << 11)
#define	COBC_HD_REPORT_SECTION		(1U << 12)
#define	COBC_HD_SCREEN_SECTION		(1U << 13)
#define	COBC_HD_PROCEDURE_DIVISION	(1U << 14)
#define	COBC_HD_PROGRAM_ID		(1U << 15)

/* Static functions */

static void
begin_statement (const char *name, const unsigned int term)
{
	if (cb_warn_unreachable && check_unreached) {
		cb_warning (_("Unreachable statement '%s'"), name);
	}
	current_paragraph->flag_statement = 1;
	current_statement = cb_build_statement (name);
	CB_TREE (current_statement)->source_file = cb_source_file;
	CB_TREE (current_statement)->source_line = cb_source_line;
	current_statement->statement = cobc_glob_line;
	current_statement->flag_in_debug = in_debugging;
	emit_statement (CB_TREE (current_statement));
	if (term) {
		term_array[term]++;
	}
	main_statement = current_statement;
}

static void
begin_implicit_statement (void)
{
	current_statement = cb_build_statement (NULL);
	current_statement->flag_in_debug = !!in_debugging;
	main_statement->body = cb_list_add (main_statement->body,
					    CB_TREE (current_statement));
}

static void
emit_entry (const char *name, const int encode, cb_tree using_list)
{
	cb_tree		l;
	cb_tree		label;
	cb_tree		x;
	struct cb_field	*f;
	int		parmnum;
	char		buff[COB_MINI_BUFF];

	snprintf (buff, (size_t)COB_MINI_MAX, "E$%s", name);
	label = cb_build_label (cb_build_reference (buff), NULL);
	if (encode) {
		CB_LABEL (label)->name = cb_encode_program_id (name);
		CB_LABEL (label)->orig_name = name;
	} else {
		CB_LABEL (label)->name = name;
		CB_LABEL (label)->orig_name = current_program->orig_program_id;
	}
	CB_LABEL (label)->flag_begin = 1;
	CB_LABEL (label)->flag_entry = 1;
	label->source_file = cb_source_file;
	label->source_line = cb_source_line;
	emit_statement (label);

	if (current_program->flag_debugging) {
		emit_statement (cb_build_debug (cb_debug_contents,
						"START PROGRAM", NULL));
	}

	parmnum = 1;
	for (l = using_list; l; l = CB_CHAIN (l)) {
		x = CB_VALUE (l);
		if (CB_VALID_TREE (x) && cb_ref (x) != cb_error_node) {
			f = CB_FIELD (cb_ref (x));
			if (f->level != 01 && f->level != 77) {
				cb_error_x (x, _("'%s' not level 01 or 77"), cb_name (x));
			}
			if (!current_program->flag_chained) {
				if (f->storage != CB_STORAGE_LINKAGE) {
					cb_error_x (x, _("'%s' is not in LINKAGE SECTION"), cb_name (x));
				}
				if (f->flag_item_based || f->flag_external) {
					cb_error_x (x, _("'%s' can not be BASED/EXTERNAL"), cb_name (x));
				}
				f->flag_is_pdiv_parm = 1;
			} else {
				if (f->storage != CB_STORAGE_WORKING) {
					cb_error_x (x, _("'%s' is not in WORKING-STORAGE SECTION"), cb_name (x));
				}
				f->flag_chained = 1;
				f->param_num = parmnum;
				parmnum++;
			}
			if (f->redefines) {
				cb_error_x (x, _("'%s' REDEFINES field not allowed here"), cb_name (x));
			}
		}
	}

	/* Check dangling LINKAGE items */
	if (cb_warn_linkage) {
		for (f = current_program->linkage_storage; f; f = f->sister) {
			if (current_program->returning) {
				if (cb_ref (current_program->returning) != cb_error_node) {
					if (f == CB_FIELD (cb_ref (current_program->returning))) {
						continue;
					}
				}
			}
			for (l = using_list; l; l = CB_CHAIN (l)) {
				x = CB_VALUE (l);
				if (CB_VALID_TREE (x) && cb_ref (x) != cb_error_node) {
					if (f == CB_FIELD (cb_ref (x))) {
						break;
					}
				}
			}
			if (!l && !f->redefines) {
				cb_warning (_("LINKAGE item '%s' is not a PROCEDURE USING parameter"), f->name);
			}
		}
	}

	/* Check returning item against using items when FUNCTION */
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		for (l = using_list; l; l = CB_CHAIN (l)) {
			x = CB_VALUE (l);
			if (CB_VALID_TREE (x) && current_program->returning &&
			    cb_ref (x) == cb_ref (current_program->returning)) {
				cb_error_x (x, _("'%s' USING item duplicates RETURNING item"), cb_name (x));
			}
		}
	}

	for (l = current_program->entry_list; l; l = CB_CHAIN (l)) {
		if (strcmp ((const char *)name,
			    (const char *)(CB_LABEL(CB_PURPOSE(l))->name)) == 0) {
			cb_error_x (CB_TREE (current_statement),
				    _("ENTRY '%s' duplicated"), name);
		}
	}

	current_program->entry_list =
		cb_list_append (current_program->entry_list,
				CB_BUILD_PAIR (label, using_list));
}

static size_t
increment_depth (void)
{
	if (++depth >= PROG_DEPTH) {
		cb_error (_("Maximum nested program depth exceeded (%d)"),
			  PROG_DEPTH);
		return 1;
	}
	return 0;
}

static void
terminator_warning (cb_tree stmt, const unsigned int termid,
		    const char *name)
{
	check_unreached = 0;
	if (term_array[termid]) {
		term_array[termid]--;
		if (cb_warn_terminator) {
			cb_warning_x (stmt,
				_("%s statement not terminated by END-%s"),
				name, name);
		}
	}
	/* Free tree assocated with terminator */
	cobc_parse_free (stmt);
}

static void
terminator_error (cb_tree stmt, const unsigned int termid, const char *name)
{
	check_unreached = 0;
	cb_error_x (CB_TREE (current_statement),
			_("%s statement not terminated by END-%s"),
			name, name);
	if (term_array[termid]) {
		term_array[termid]--;
	}
	/* Free tree assocated with terminator */
	cobc_parse_free (stmt);
}

static void
terminator_clear (cb_tree stmt, const unsigned int termid)
{
	check_unreached = 0;
	if (term_array[termid]) {
		term_array[termid]--;
	}
	/* Free tree assocated with terminator */
	cobc_parse_free (stmt);
}

static int
literal_value (cb_tree x)
{
	if (x == cb_space) {
		return ' ';
	} else if (x == cb_zero) {
		return '0';
	} else if (x == cb_quote) {
		return cb_flag_apostrophe ? '\'' : '"';
	} else if (x == cb_null) {
		return 0;
	} else if (x == cb_low) {
		return 0;
	} else if (x == cb_high) {
		return 255;
	} else if (CB_TREE_CLASS (x) == CB_CLASS_NUMERIC) {
		return cb_get_int (x);
	} else {
		return CB_LITERAL (x)->data[0];
	}
}

static void
setup_use_file (struct cb_file *fileptr)
{
	struct cb_file	*newptr;

	if (fileptr->organization == COB_ORG_SORT) {
		cb_error (_("USE statement invalid for SORT file"));
	}
	if (fileptr->flag_global) {
		newptr = cobc_parse_malloc (sizeof(struct cb_file));
		*newptr = *fileptr;
		newptr->handler = current_section;
		newptr->handler_prog = current_program;
		if (!use_global_ind) {
			current_program->local_file_list =
				cb_list_add (current_program->local_file_list,
					     CB_TREE (newptr));
		} else {
			current_program->global_file_list =
				cb_list_add (current_program->global_file_list,
					     CB_TREE (newptr));
		}
	} else {
		fileptr->handler = current_section;
	}
}

static void
build_nested_special (const int ndepth)
{
	cb_tree		x;
	cb_tree		y;

	if (!ndepth) {
		return;
	}

	/* Inherit special name mnemonics from parent */
	for (x = current_program->mnemonic_spec_list; x; x = CB_CHAIN (x)) {
		y = cb_build_reference (cb_name(CB_PURPOSE(x)));
		if (CB_SYSTEM_NAME_P (CB_VALUE(x))) {
			cb_define (y, CB_VALUE(x));
		} else {
			cb_build_constant (y, CB_VALUE(x));
		}
	}
}

static void
clear_initial_values (void)
{
	perform_stack = NULL;
	current_statement = NULL;
	main_statement = NULL;
	qualifier = NULL;
	in_declaratives = 0;
	in_debugging = 0;
	use_global_ind = 0;
	check_duplicate = 0;
	check_pic_duplicate = 0;
	check_comp_duplicate = 0;
	skip_statements = 0;
	start_debug = 0;
	save_debug = 0;
	needs_field_debug = 0;
	needs_debug_item = 0;
	env_div_seen = 0;
	header_check = 0;
	next_label_id = 0;
	current_linage = 0;
	setattr_val_on = 0;
	setattr_val_off = 0;
	report_count = 0;
	current_storage = CB_STORAGE_WORKING;
	eval_level = 0;
	eval_inc = 0;
	eval_inc2 = 0;
	inspect_keyword = 0;
	check_unreached = 0;
	cobc_in_procedure = 0;
	cobc_in_repository = 0;
	cobc_force_literal = 0;
	non_const_word = 0;
	samearea = 1;
	memset ((void *)eval_check, 0, sizeof(eval_check));
	memset ((void *)term_array, 0, sizeof(term_array));
	linage_file = NULL;
	current_file = NULL;
	current_report = NULL;
	report_instance = NULL;
	next_label_list = NULL;
	if (cobc_glob_line) {
		free (cobc_glob_line);
		cobc_glob_line = NULL;
	}
}

static void
check_repeated (const char *clause, const unsigned int bitval)
{
	if (check_duplicate & bitval) {
		if (cb_relaxed_syntax_check) {
			cb_warning (_("Duplicate %s clause"), clause);
		} else {
			cb_error (_("Duplicate %s clause"), clause);
		}
	} else {
		check_duplicate |= bitval;
	}
}

static void
check_pic_repeated (const char *clause, const unsigned int bitval)
{
	if (check_pic_duplicate & bitval) {
		if (cb_relaxed_syntax_check) {
			cb_warning (_("Duplicate %s clause"), clause);
		} else {
			cb_error (_("Duplicate %s clause"), clause);
		}
	} else {
		check_pic_duplicate |= bitval;
	}
}

static void
check_comp_repeated (const char *clause, const unsigned int bitval)
{
	if (check_comp_duplicate & bitval) {
		if (cb_relaxed_syntax_check) {
			cb_warning (_("Duplicate %s clause"), clause);
		} else {
			cb_error (_("Duplicate %s clause"), clause);
		}
	} else {
		check_comp_duplicate |= bitval;
	}
}

static void
check_screen_attr (const char *clause, const int bitval)
{
	if (current_field->screen_flag & bitval) {
		if (cb_relaxed_syntax_check) {
			cb_warning (_("Duplicate %s clause"), clause);
		} else {
			cb_error (_("Duplicate %s clause"), clause);
		}
	} else {
		current_field->screen_flag |= bitval;
	}
}

static void
bit_set_attr (const cb_tree onoff, const int attrval)
{
	if (onoff == cb_int1) {
		setattr_val_on |= attrval;
	} else {
		setattr_val_off |= attrval;
	}
}

static void
check_attribs (cb_tree fgc, cb_tree bgc, cb_tree scroll,
	       cb_tree timeout, cb_tree prompt, int attribs)
{
	/* Attach attributes to current_statement */
	if (!current_statement->attr_ptr) {
		current_statement->attr_ptr =
			cobc_parse_malloc (sizeof(struct cb_attr_struct));
	}
	if (fgc) {
		current_statement->attr_ptr->fgc = fgc;
	}
	if (bgc) {
		current_statement->attr_ptr->bgc = bgc;
	}
	if (scroll) {
		current_statement->attr_ptr->scroll = scroll;
	}
	if (timeout) {
		current_statement->attr_ptr->timeout = timeout;
	}
	if (prompt) {
		current_statement->attr_ptr->prompt = prompt;
	}
	current_statement->attr_ptr->dispattrs |= attribs;
}

static void
check_set_usage (const enum cb_usage usage)
{
	check_pic_repeated ("USAGE", SYN_CLAUSE_5);
	current_field->usage = usage;
}

static void
check_relaxed_syntax (const unsigned int lev)
{
	const char	*s;

	switch (lev) {
	case COBC_HD_ENVIRONMENT_DIVISION:
		s = "ENVIRONMENT DIVISION";
		break;
	case COBC_HD_CONFIGURATION_SECTION:
		s = "CONFIGURATION SECTION";
		break;
	case COBC_HD_SPECIAL_NAMES:
		s = "SPECIAL-NAMES";
		break;
	case COBC_HD_INPUT_OUTPUT_SECTION:
		s = "INPUT-OUTPUT SECTION";
		break;
	case COBC_HD_FILE_CONTROL:
		s = "FILE-CONTROL";
		break;
	case COBC_HD_I_O_CONTROL:
		s = "I-O-CONTROL";
		break;
	case COBC_HD_DATA_DIVISION:
		s = "DATA DIVISION";
		break;
	case COBC_HD_FILE_SECTION:
		s = "FILE SECTION";
		break;
	case COBC_HD_WORKING_STORAGE_SECTION:
		s = "WORKING-STORAGE SECTION";
		break;
	case COBC_HD_LOCAL_STORAGE_SECTION:
		s = "LOCAL-STORAGE SECTION";
		break;
	case COBC_HD_LINKAGE_SECTION:
		s = "LINKAGE SECTION";
		break;
	case COBC_HD_COMMUNICATIONS_SECTION:
		s = "COMMUNICATIONS SECTION";
		break;
	case COBC_HD_REPORT_SECTION:
		s = "REPORT SECTION";
		break;
	case COBC_HD_SCREEN_SECTION:
		s = "SCREEN SECTION";
		break;
	case COBC_HD_PROCEDURE_DIVISION:
		s = "PROCEDURE DIVISION";
		break;
	case COBC_HD_PROGRAM_ID:
		s = "PROGRAM-ID";
		break;
	default:
		s = "Unknown";
		break;
	}
	if (cb_relaxed_syntax_check) {
		cb_warning (_("%s header missing - assumed"), s);
	} else {
		cb_error (_("%s header missing"), s);
	}
}

static void
check_headers_present (const unsigned int lev1, const unsigned int lev2,
		       const unsigned int lev3, const unsigned int lev4)
{
	/* Lev1 is always present and checked */
	/* Lev2/3/4, if non-zero (forced) may be present */
	if (!(header_check & lev1)) {
		header_check |= lev1;
		check_relaxed_syntax (lev1);
	}
	if (lev2) {
		if (!(header_check & lev2)) {
			header_check |= lev2;
			check_relaxed_syntax (lev2);
		}
	}
	if (lev3) {
		if (!(header_check & lev3)) {
			header_check |= lev3;
			check_relaxed_syntax (lev3);
		}
	}
	if (lev4) {
		if (!(header_check & lev4)) {
			header_check |= lev4;
			check_relaxed_syntax (lev4);
		}
	}
}



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 1828 "parser.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   7832

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  512
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  813
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1900
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2709

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   766

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    11,    13,    16,    18,
      20,    21,    24,    29,    34,    38,    39,    41,    44,    45,
      47,    51,    52,    54,    58,    59,    60,    61,    82,    83,
      91,    97,    99,   101,   102,   105,   106,   110,   112,   115,
     117,   119,   121,   123,   124,   128,   129,   133,   134,   137,
     139,   141,   143,   145,   147,   148,   153,   154,   158,   159,
     163,   164,   169,   170,   173,   177,   180,   182,   185,   187,
     189,   191,   193,   199,   203,   207,   212,   214,   216,   218,
     220,   222,   225,   226,   231,   232,   235,   239,   241,   244,
     248,   252,   256,   258,   260,   261,   264,   266,   269,   272,
     275,   279,   281,   284,   286,   288,   290,   292,   294,   296,
     298,   300,   302,   304,   306,   308,   309,   313,   316,   320,
     324,   326,   327,   329,   333,   338,   339,   345,   347,   349,
     351,   353,   355,   357,   359,   362,   364,   368,   369,   374,
     376,   380,   382,   384,   386,   388,   390,   392,   395,   396,
     399,   403,   405,   408,   412,   414,   417,   419,   422,   427,
     429,   432,   434,   438,   443,   449,   450,   454,   458,   464,
     468,   473,   477,   481,   482,   486,   487,   490,   491,   494,
     495,   498,   499,   506,   510,   511,   514,   516,   518,   520,
     522,   524,   526,   528,   530,   532,   534,   536,   538,   540,
     546,   552,   558,   564,   570,   572,   574,   576,   578,   579,
     583,   584,   586,   588,   590,   592,   593,   595,   597,   602,
     604,   606,   608,   615,   619,   624,   625,   627,   629,   630,
     636,   639,   642,   644,   645,   650,   656,   659,   663,   665,
     667,   671,   673,   676,   681,   686,   691,   693,   697,   702,
     707,   711,   713,   715,   719,   722,   725,   728,   729,   732,
     736,   738,   741,   743,   745,   751,   752,   754,   756,   758,
     759,   766,   768,   771,   774,   775,   778,   779,   783,   784,
     788,   789,   792,   795,   796,   802,   806,   808,   810,   811,
     814,   817,   820,   822,   824,   826,   828,   830,   832,   834,
     836,   838,   844,   845,   847,   849,   854,   861,   871,   872,
     876,   877,   880,   881,   884,   888,   894,   900,   902,   904,
     906,   908,   912,   918,   919,   922,   924,   926,   928,   933,
     936,   939,   944,   948,   951,   954,   957,   959,   962,   963,
     964,   970,   971,   972,   975,   978,   982,   985,   987,   988,
     993,   997,  1000,  1001,  1003,  1005,  1007,  1008,  1011,  1013,
    1016,  1019,  1023,  1025,  1027,  1029,  1031,  1033,  1035,  1037,
    1039,  1041,  1043,  1045,  1047,  1050,  1052,  1054,  1056,  1058,
    1060,  1062,  1064,  1066,  1068,  1074,  1077,  1080,  1081,  1084,
    1086,  1088,  1090,  1092,  1094,  1096,  1098,  1100,  1102,  1104,
    1106,  1108,  1110,  1112,  1115,  1119,  1120,  1123,  1126,  1128,
    1130,  1134,  1136,  1138,  1140,  1142,  1144,  1146,  1148,  1150,
    1152,  1154,  1156,  1158,  1160,  1162,  1164,  1166,  1168,  1170,
    1172,  1174,  1177,  1180,  1183,  1186,  1189,  1192,  1195,  1198,
    1201,  1204,  1206,  1208,  1210,  1212,  1214,  1216,  1218,  1220,
    1222,  1224,  1228,  1232,  1239,  1240,  1243,  1251,  1252,  1255,
    1256,  1260,  1262,  1263,  1269,  1271,  1273,  1274,  1278,  1280,
    1283,  1285,  1288,  1291,  1295,  1297,  1298,  1304,  1306,  1309,
    1311,  1315,  1316,  1321,  1324,  1329,  1332,  1335,  1336,  1337,
    1343,  1344,  1345,  1351,  1352,  1353,  1359,  1360,  1363,  1364,
    1371,  1372,  1375,  1378,  1381,  1385,  1387,  1389,  1392,  1395,
    1397,  1399,  1401,  1403,  1406,  1408,  1413,  1415,  1418,  1423,
    1425,  1427,  1428,  1431,  1433,  1435,  1437,  1439,  1441,  1445,
    1450,  1455,  1460,  1464,  1465,  1468,  1469,  1475,  1476,  1479,
    1481,  1483,  1485,  1487,  1489,  1491,  1493,  1495,  1497,  1499,
    1501,  1503,  1505,  1507,  1509,  1511,  1513,  1517,  1519,  1521,
    1524,  1527,  1529,  1531,  1533,  1534,  1536,  1538,  1539,  1541,
    1543,  1548,  1550,  1553,  1556,  1558,  1561,  1563,  1565,  1567,
    1572,  1573,  1577,  1580,  1582,  1584,  1588,  1595,  1598,  1601,
    1603,  1606,  1609,  1610,  1613,  1615,  1617,  1620,  1624,  1627,
    1631,  1634,  1637,  1640,  1642,  1647,  1650,  1654,  1655,  1656,
    1662,  1663,  1665,  1668,  1672,  1674,  1675,  1680,  1684,  1685,
    1688,  1691,  1694,  1696,  1698,  1701,  1704,  1706,  1708,  1710,
    1712,  1714,  1716,  1718,  1720,  1722,  1724,  1729,  1731,  1733,
    1739,  1745,  1749,  1753,  1755,  1757,  1759,  1761,  1763,  1765,
    1767,  1769,  1772,  1775,  1778,  1780,  1782,  1784,  1786,  1787,
    1789,  1791,  1792,  1794,  1796,  1800,  1803,  1804,  1805,  1806,
    1816,  1817,  1822,  1823,  1824,  1828,  1829,  1833,  1835,  1838,
    1843,  1844,  1847,  1850,  1851,  1855,  1859,  1864,  1869,  1873,
    1874,  1876,  1877,  1880,  1881,  1882,  1890,  1891,  1894,  1896,
    1898,  1901,  1903,  1905,  1906,  1913,  1914,  1917,  1920,  1922,
    1923,  1925,  1926,  1927,  1931,  1932,  1935,  1938,  1940,  1942,
    1944,  1946,  1948,  1950,  1952,  1954,  1956,  1958,  1960,  1962,
    1964,  1966,  1968,  1970,  1972,  1974,  1976,  1978,  1980,  1982,
    1984,  1986,  1988,  1990,  1992,  1994,  1996,  1998,  2000,  2002,
    2004,  2006,  2008,  2010,  2012,  2014,  2016,  2018,  2020,  2022,
    2024,  2026,  2028,  2030,  2032,  2034,  2036,  2039,  2042,  2043,
    2048,  2055,  2059,  2063,  2068,  2072,  2077,  2081,  2085,  2090,
    2095,  2099,  2104,  2108,  2113,  2119,  2123,  2128,  2132,  2136,
    2138,  2140,  2142,  2145,  2146,  2148,  2152,  2156,  2159,  2162,
    2165,  2169,  2173,  2177,  2178,  2180,  2181,  2185,  2186,  2189,
    2191,  2194,  2196,  2198,  2200,  2202,  2204,  2206,  2208,  2210,
    2212,  2214,  2216,  2221,  2223,  2225,  2227,  2229,  2231,  2233,
    2235,  2239,  2243,  2247,  2251,  2255,  2256,  2258,  2259,  2264,
    2269,  2275,  2282,  2283,  2286,  2287,  2289,  2290,  2294,  2298,
    2303,  2304,  2307,  2308,  2312,  2314,  2317,  2322,  2323,  2326,
    2327,  2332,  2339,  2340,  2342,  2344,  2346,  2347,  2348,  2352,
    2354,  2357,  2360,  2364,  2365,  2368,  2371,  2374,  2375,  2379,
    2382,  2387,  2389,  2391,  2393,  2395,  2396,  2399,  2400,  2403,
    2404,  2406,  2407,  2411,  2413,  2416,  2417,  2421,  2424,  2428,
    2429,  2431,  2435,  2439,  2442,  2443,  2448,  2453,  2454,  2456,
    2458,  2460,  2461,  2466,  2470,  2473,  2475,  2478,  2479,  2481,
    2482,  2487,  2491,  2495,  2499,  2503,  2508,  2511,  2516,  2518,
    2519,  2523,  2529,  2530,  2533,  2536,  2539,  2542,  2543,  2546,
    2548,  2550,  2551,  2554,  2555,  2557,  2559,  2562,  2564,  2567,
    2570,  2572,  2574,  2577,  2580,  2582,  2584,  2586,  2588,  2590,
    2594,  2598,  2602,  2606,  2607,  2609,  2610,  2615,  2620,  2627,
    2634,  2643,  2652,  2653,  2655,  2656,  2660,  2663,  2664,  2669,
    2672,  2674,  2678,  2680,  2682,  2684,  2687,  2689,  2691,  2694,
    2697,  2701,  2704,  2708,  2710,  2714,  2717,  2719,  2721,  2723,
    2724,  2727,  2728,  2730,  2731,  2735,  2736,  2738,  2740,  2743,
    2745,  2747,  2749,  2750,  2754,  2756,  2757,  2761,  2763,  2764,
    2768,  2772,  2773,  2777,  2779,  2780,  2787,  2791,  2794,  2796,
    2797,  2799,  2800,  2804,  2810,  2811,  2814,  2815,  2819,  2823,
    2824,  2827,  2829,  2832,  2837,  2839,  2841,  2843,  2845,  2847,
    2849,  2851,  2852,  2856,  2857,  2861,  2863,  2866,  2867,  2871,
    2874,  2876,  2878,  2880,  2883,  2885,  2887,  2889,  2890,  2894,
    2897,  2903,  2905,  2908,  2911,  2914,  2916,  2918,  2920,  2923,
    2925,  2928,  2933,  2936,  2937,  2939,  2941,  2943,  2945,  2950,
    2951,  2954,  2958,  2962,  2963,  2967,  2968,  2972,  2976,  2981,
    2982,  2987,  2992,  2999,  3000,  3002,  3003,  3007,  3012,  3018,
    3020,  3022,  3024,  3026,  3027,  3031,  3032,  3036,  3039,  3041,
    3042,  3046,  3049,  3050,  3055,  3058,  3059,  3061,  3063,  3065,
    3067,  3071,  3072,  3075,  3077,  3081,  3085,  3086,  3090,  3092,
    3094,  3096,  3100,  3108,  3109,  3114,  3122,  3123,  3126,  3127,
    3130,  3133,  3137,  3141,  3145,  3148,  3149,  3153,  3155,  3157,
    3158,  3160,  3162,  3163,  3167,  3170,  3172,  3173,  3178,  3183,
    3184,  3186,  3187,  3192,  3197,  3198,  3201,  3205,  3206,  3208,
    3210,  3211,  3216,  3221,  3228,  3229,  3232,  3233,  3236,  3238,
    3241,  3245,  3246,  3248,  3249,  3253,  3255,  3257,  3259,  3261,
    3263,  3265,  3267,  3269,  3271,  3273,  3278,  3282,  3284,  3287,
    3290,  3293,  3296,  3299,  3302,  3305,  3308,  3311,  3316,  3320,
    3325,  3327,  3330,  3334,  3336,  3339,  3343,  3347,  3348,  3352,
    3353,  3361,  3362,  3368,  3369,  3372,  3373,  3376,  3377,  3381,
    3382,  3385,  3390,  3391,  3394,  3399,  3400,  3405,  3410,  3411,
    3415,  3416,  3421,  3423,  3425,  3427,  3430,  3433,  3436,  3439,
    3441,  3443,  3446,  3448,  3449,  3451,  3452,  3457,  3460,  3461,
    3464,  3467,  3472,  3477,  3478,  3480,  3482,  3484,  3486,  3488,
    3489,  3494,  3500,  3502,  3505,  3507,  3511,  3515,  3516,  3521,
    3522,  3524,  3525,  3530,  3535,  3542,  3549,  3550,  3552,  3555,
    3556,  3558,  3559,  3563,  3565,  3568,  3569,  3573,  3579,  3580,
    3584,  3587,  3588,  3590,  3592,  3593,  3598,  3605,  3606,  3610,
    3612,  3616,  3619,  3622,  3625,  3629,  3630,  3634,  3635,  3639,
    3640,  3644,  3645,  3647,  3648,  3652,  3654,  3656,  3658,  3660,
    3668,  3669,  3671,  3673,  3675,  3677,  3679,  3681,  3686,  3688,
    3691,  3693,  3696,  3700,  3701,  3703,  3706,  3708,  3713,  3715,
    3717,  3719,  3720,  3725,  3731,  3732,  3735,  3736,  3741,  3745,
    3749,  3751,  3753,  3755,  3757,  3758,  3760,  3763,  3764,  3767,
    3768,  3771,  3774,  3775,  3778,  3779,  3782,  3785,  3786,  3789,
    3790,  3793,  3796,  3797,  3800,  3801,  3804,  3807,  3809,  3812,
    3814,  3816,  3819,  3822,  3825,  3827,  3829,  3832,  3835,  3838,
    3839,  3842,  3843,  3846,  3847,  3850,  3852,  3854,  3855,  3858,
    3860,  3863,  3866,  3868,  3870,  3872,  3874,  3876,  3878,  3880,
    3882,  3884,  3886,  3888,  3890,  3892,  3894,  3896,  3898,  3900,
    3902,  3904,  3906,  3908,  3910,  3912,  3914,  3916,  3919,  3921,
    3923,  3925,  3927,  3929,  3931,  3933,  3937,  3938,  3940,  3942,
    3946,  3950,  3952,  3956,  3960,  3962,  3966,  3968,  3971,  3974,
    3976,  3980,  3982,  3984,  3988,  3990,  3994,  3996,  4000,  4002,
    4005,  4008,  4010,  4012,  4014,  4017,  4019,  4021,  4023,  4026,
    4028,  4029,  4032,  4034,  4036,  4038,  4042,  4044,  4046,  4049,
    4051,  4053,  4055,  4058,  4060,  4062,  4064,  4066,  4068,  4070,
    4073,  4075,  4077,  4081,  4083,  4086,  4088,  4090,  4092,  4094,
    4097,  4100,  4103,  4108,  4112,  4114,  4116,  4119,  4121,  4123,
    4125,  4127,  4129,  4131,  4133,  4136,  4139,  4142,  4144,  4146,
    4148,  4150,  4152,  4154,  4156,  4158,  4160,  4162,  4164,  4166,
    4168,  4170,  4172,  4174,  4176,  4178,  4180,  4182,  4184,  4186,
    4188,  4190,  4192,  4194,  4197,  4199,  4203,  4206,  4209,  4211,
    4213,  4215,  4219,  4222,  4225,  4227,  4229,  4233,  4237,  4242,
    4248,  4250,  4252,  4254,  4256,  4258,  4260,  4262,  4264,  4266,
    4268,  4270,  4272,  4275,  4277,  4281,  4283,  4285,  4287,  4289,
    4291,  4293,  4295,  4298,  4304,  4310,  4316,  4321,  4327,  4333,
    4339,  4342,  4345,  4347,  4349,  4351,  4353,  4355,  4357,  4359,
    4361,  4362,  4367,  4373,  4374,  4378,  4381,  4383,  4387,  4391,
    4393,  4397,  4399,  4403,  4404,  4405,  4407,  4408,  4410,  4411,
    4413,  4414,  4417,  4418,  4421,  4422,  4424,  4426,  4427,  4429,
    4430,  4432,  4435,  4436,  4439,  4440,  4444,  4446,  4448,  4450,
    4452,  4454,  4456,  4458,  4460,  4461,  4464,  4466,  4468,  4470,
    4472,  4474,  4476,  4478,  4480,  4482,  4484,  4486,  4488,  4490,
    4492,  4494,  4496,  4498,  4500,  4502,  4504,  4506,  4508,  4510,
    4512,  4514,  4516,  4518,  4520,  4522,  4524,  4526,  4528,  4530,
    4532,  4534,  4536,  4538,  4540,  4542,  4544,  4546,  4548,  4550,
    4552,  4554,  4556,  4558,  4560,  4562,  4564,  4566,  4568,  4570,
    4572,  4574,  4576,  4578,  4580,  4582,  4584,  4586,  4588,  4590,
    4592,  4594,  4596,  4598,  4600,  4602,  4604,  4605,  4607,  4608,
    4610,  4611,  4613,  4614,  4616,  4617,  4619,  4620,  4622,  4623,
    4625,  4626,  4628,  4629,  4631,  4632,  4634,  4635,  4637,  4638,
    4640,  4641,  4643,  4644,  4646,  4647,  4649,  4650,  4652,  4653,
    4655,  4658,  4659,  4661,  4662,  4664,  4665,  4667,  4668,  4670,
    4671,  4673,  4675,  4676,  4678,  4679,  4681,  4683,  4684,  4686,
    4688,  4689,  4692,  4695,  4696,  4698,  4699,  4701,  4702,  4704,
    4705,  4707,  4709,  4710,  4712,  4713,  4715,  4716,  4719,  4721,
    4723,  4724,  4726,  4727,  4729,  4730,  4732,  4733,  4735,  4736,
    4738,  4739,  4741,  4742,  4744,  4745,  4747,  4750,  4751,  4753,
    4754,  4756,  4757,  4759,  4760,  4762,  4763,  4765,  4766,  4768,
    4769,  4771,  4772,  4774,  4776,  4777,  4779,  4780,  4784,  4785,
    4787,  4790,  4792,  4794,  4796,  4798,  4800,  4802,  4804,  4806,
    4808,  4810,  4812,  4814,  4816,  4818,  4820,  4822,  4824,  4826,
    4828,  4830,  4832,  4835,  4838,  4840,  4842,  4844,  4846,  4848,
    4850,  4853,  4855,  4859,  4862,  4864,  4866,  4868,  4871,  4873,
    4876,  4878,  4881,  4883,  4886,  4888,  4891,  4893,  4896,  4898,
    4901
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     513,     0,    -1,    -1,   514,   515,    -1,   518,    -1,   516,
      -1,   517,    -1,   516,   517,    -1,   520,    -1,   522,    -1,
      -1,   519,   528,    -1,   532,   528,   523,   524,    -1,   532,
     528,   523,   525,    -1,   534,   528,   526,    -1,    -1,   521,
      -1,   523,   521,    -1,    -1,   525,    -1,   142,   535,   451,
      -1,    -1,   527,    -1,   138,   535,   451,    -1,    -1,    -1,
      -1,   540,   541,   542,   603,   604,   606,   605,   638,   529,
     648,   649,   650,   530,   679,   732,   734,   736,   787,   531,
     801,    -1,    -1,   341,   451,   535,   536,   533,   537,   451,
      -1,   200,   451,   535,   536,   451,    -1,   342,    -1,   256,
      -1,    -1,    26,   256,    -1,    -1,  1268,   538,  1283,    -1,
      72,    -1,    72,   539,    -1,   539,    -1,   171,    -1,   456,
      -1,   354,    -1,    -1,   153,   122,   451,    -1,    -1,    84,
     394,   451,    -1,    -1,   542,   543,    -1,   544,    -1,   548,
      -1,   567,    -1,   568,    -1,   559,    -1,    -1,   415,   451,
     545,   546,    -1,    -1,   558,   547,   451,    -1,    -1,  1299,
     107,   272,    -1,    -1,   304,   451,   549,   550,    -1,    -1,
     558,   451,    -1,   558,   551,   451,    -1,   551,   451,    -1,
     552,    -1,   551,   552,    -1,   553,    -1,   554,    -1,   555,
      -1,   556,    -1,   268,   410,  1268,  1218,  1310,    -1,  1316,
    1268,  1185,    -1,   396,  1268,  1218,    -1,  1256,    59,  1268,
     557,    -1,  1185,    -1,   257,    -1,   494,    -1,   435,    -1,
     504,    -1,   558,   504,    -1,    -1,   369,   451,   560,   561,
      -1,    -1,   562,   451,    -1,   562,     1,   451,    -1,   563,
      -1,   562,   563,    -1,   199,     9,   229,    -1,   199,   564,
     565,    -1,   199,   566,   229,    -1,   370,    -1,   496,    -1,
      -1,    26,   256,    -1,   370,    -1,   566,   370,    -1,   417,
     451,    -1,   569,   451,    -1,   569,     1,   451,    -1,   570,
      -1,   569,   570,    -1,   571,    -1,   576,    -1,   584,    -1,
     594,    -1,   591,    -1,   595,    -1,   597,    -1,   598,    -1,
     599,    -1,   600,    -1,   601,    -1,   602,    -1,    -1,   504,
     572,   573,    -1,  1268,    96,    -1,  1218,  1268,  1189,    -1,
    1268,  1189,   574,    -1,   575,    -1,    -1,   575,    -1,  1036,
    1280,  1189,    -1,   575,  1036,  1280,  1189,    -1,    -1,    11,
    1189,   577,  1268,   578,    -1,   280,    -1,   419,    -1,   420,
      -1,   126,    -1,    28,    -1,   579,    -1,   580,    -1,   579,
     580,    -1,   583,    -1,   583,   442,   583,    -1,    -1,   583,
      17,   581,   582,    -1,   583,    -1,   582,    17,   583,    -1,
     256,    -1,   416,    -1,   510,    -1,   346,    -1,   212,    -1,
     266,    -1,   586,   585,    -1,    -1,   218,   504,    -1,   433,
    1257,   587,    -1,   588,    -1,   587,   588,    -1,   589,  1269,
     590,    -1,  1190,    -1,   589,  1190,    -1,  1219,    -1,   590,
    1219,    -1,    58,  1189,  1268,   592,    -1,   593,    -1,   592,
     593,    -1,  1221,    -1,  1221,   442,  1221,    -1,   257,  1189,
    1268,   256,    -1,    98,  1286,  1268,   256,   596,    -1,    -1,
    1299,   328,   256,    -1,   108,  1268,    68,    -1,   301,   405,
    1268,   468,   400,    -1,   100,  1268,  1184,    -1,    96,   423,
    1268,  1184,    -1,   390,  1268,  1184,    -1,   164,  1268,  1184,
      -1,    -1,   226,   394,   451,    -1,    -1,   173,   451,    -1,
      -1,   234,   451,    -1,    -1,   606,   607,    -1,    -1,   397,
    1242,  1189,   608,   609,   451,    -1,   397,     1,   451,    -1,
      -1,   609,   610,    -1,   611,    -1,   617,    -1,   619,    -1,
     620,    -1,   621,    -1,   623,    -1,   627,    -1,   629,    -1,
     630,    -1,   631,    -1,   633,    -1,   634,    -1,   636,    -1,
      29,  1296,   614,   613,   615,    -1,    29,  1296,   614,   612,
     616,    -1,    29,  1296,   614,   119,   616,    -1,    29,  1296,
     614,   238,   616,    -1,    29,  1296,   614,   335,   616,    -1,
     117,    -1,   118,    -1,   437,    -1,   347,    -1,    -1,   252,
       7,  1260,    -1,    -1,   171,    -1,   125,    -1,   256,    -1,
    1215,    -1,    -1,   256,    -1,  1215,    -1,     4,  1275,  1268,
     618,    -1,   402,    -1,   125,    -1,   347,    -1,    19,  1284,
    1270,  1268,   632,  1236,    -1,  1300,  1268,   504,    -1,   622,
     423,  1268,  1184,    -1,    -1,   454,    -1,   412,    -1,    -1,
     624,   262,  1275,  1268,   625,    -1,   267,   626,    -1,    33,
     626,    -1,   167,    -1,    -1,   503,   262,   309,  1309,    -1,
     503,   262,   309,   274,  1309,    -1,   503,   385,    -1,   315,
    1268,   628,    -1,   628,    -1,   220,    -1,  1284,  1254,   402,
      -1,   359,    -1,   252,   402,    -1,   320,  1256,  1268,  1188,
      -1,   351,   113,  1268,   419,    -1,   351,  1270,  1268,   632,
      -1,  1184,    -1,  1184,   452,  1183,    -1,  1184,   414,  1268,
    1183,    -1,   359,  1270,  1268,  1184,    -1,   372,   635,  1251,
      -1,   287,    -1,  1218,    -1,   404,  1299,   637,    -1,     9,
    1281,    -1,   287,  1281,    -1,   349,   310,    -1,    -1,   639,
     451,    -1,   639,     1,   451,    -1,   640,    -1,   639,   640,
      -1,   641,    -1,   643,    -1,   388,   642,  1251,  1261,  1174,
      -1,    -1,   351,    -1,   412,    -1,   413,    -1,    -1,   274,
     644,  1260,  1292,  1258,   645,    -1,   646,    -1,   645,   646,
      -1,  1175,   647,    -1,    -1,   331,  1218,    -1,    -1,   102,
     122,   451,    -1,    -1,   454,   394,   451,    -1,    -1,   650,
     651,    -1,   652,   681,    -1,    -1,   654,  1175,   653,   655,
     451,    -1,   654,     1,   451,    -1,   172,    -1,   392,    -1,
      -1,   655,   656,    -1,  1268,   171,    -1,  1268,   204,    -1,
     657,    -1,   659,    -1,   663,    -1,   664,    -1,   667,    -1,
     668,    -1,   674,    -1,   675,    -1,   676,    -1,    47,  1258,
    1218,   662,   658,    -1,    -1,   353,    -1,    57,    -1,   351,
    1258,  1218,  1257,    -1,   351,  1258,  1218,   446,  1218,  1257,
      -1,   351,  1268,   499,  1263,  1289,   661,   662,  1257,   660,
      -1,    -1,   114,  1279,  1184,    -1,    -1,  1262,  1218,    -1,
      -1,   446,  1218,    -1,   239,  1311,  1307,    -1,   498,   306,
     665,  1268,   666,    -1,   498,   306,   174,  1268,   666,    -1,
     504,    -1,   213,    -1,   256,    -1,  1215,    -1,   102,  1311,
    1186,    -1,   250,  1268,  1188,  1274,   669,    -1,    -1,   669,
     670,    -1,   671,    -1,   672,    -1,   673,    -1,  1299,   187,
    1253,  1188,    -1,   465,  1188,    -1,    48,  1188,    -1,   352,
    1275,  1268,   504,    -1,    62,  1268,   504,    -1,   677,   678,
      -1,   366,  1268,    -1,   368,  1250,    -1,  1189,    -1,   678,
    1189,    -1,    -1,    -1,   506,   394,   451,   680,   681,    -1,
      -1,    -1,   682,   683,    -1,   684,   451,    -1,   683,   684,
     451,    -1,   683,   451,    -1,   696,    -1,    -1,   686,   687,
     685,   698,    -1,   686,     1,   451,    -1,  1234,   504,    -1,
      -1,   175,    -1,   504,    -1,   504,    -1,    -1,  1268,   204,
      -1,  1222,    -1,   245,   691,    -1,   244,   691,    -1,    50,
    1278,   691,    -1,  1212,    -1,    41,    -1,    44,    -1,    43,
      -1,    42,    -1,    40,    -1,   695,    -1,   707,    -1,   708,
      -1,   692,    -1,   693,    -1,   694,    -1,     1,   451,    -1,
     179,    -1,   183,    -1,   180,    -1,   181,    -1,   178,    -1,
     182,    -1,   184,    -1,   330,    -1,   343,    -1,   686,   688,
      85,   689,   697,    -1,  1252,   690,    -1,   196,   504,    -1,
      -1,   698,   699,    -1,   700,    -1,   701,    -1,   703,    -1,
     704,    -1,   705,    -1,   709,    -1,   712,    -1,   721,    -1,
     722,    -1,   723,    -1,   724,    -1,   725,    -1,   730,    -1,
     731,    -1,   355,  1212,    -1,  1268,   171,   702,    -1,    -1,
      26,   256,    -1,  1268,   204,    -1,   327,    -1,   706,    -1,
     491,  1268,   706,    -1,    39,    -1,    73,    -1,   707,    -1,
     708,    -1,    77,    -1,    78,    -1,    79,    -1,    80,    -1,
      81,    -1,   119,    -1,   219,    -1,   319,    -1,   330,    -1,
     343,    -1,   409,    -1,   407,    -1,   408,    -1,   479,    -1,
     477,    -1,   478,    -1,    41,  1287,    -1,    41,   476,    -1,
      44,  1287,    -1,    44,   476,    -1,    43,  1287,    -1,    43,
     476,    -1,    42,  1287,    -1,    42,   476,    -1,    40,  1287,
      -1,    40,   476,    -1,   179,    -1,   180,    -1,   178,    -1,
     181,    -1,   182,    -1,   277,    -1,    75,    -1,   186,    -1,
      76,    -1,   185,    -1,  1288,   241,  1246,    -1,  1288,   468,
    1246,    -1,   305,  1218,   713,  1294,   714,   711,    -1,    -1,
     425,  1218,    -1,   305,  1218,   713,  1294,   714,   715,   718,
      -1,    -1,   446,  1218,    -1,    -1,   114,  1279,  1184,    -1,
     716,    -1,    -1,   716,   717,  1270,  1268,  1183,    -1,    27,
      -1,   115,    -1,    -1,   220,  1255,   719,    -1,   720,    -1,
     719,   720,    -1,   504,    -1,   235,  1285,    -1,   434,  1271,
      -1,    45,  1297,   510,    -1,    36,    -1,    -1,   498,  1269,
     727,   726,   729,    -1,   728,    -1,   727,   728,    -1,  1222,
      -1,  1222,   442,  1222,    -1,    -1,  1298,   453,  1268,  1222,
      -1,   363,  1215,    -1,   363,  1215,   442,  1215,    -1,    21,
     244,    -1,    21,   301,    -1,    -1,    -1,   261,   394,   451,
     733,   681,    -1,    -1,    -1,   255,   394,   451,   735,   681,
      -1,    -1,    -1,   366,   394,   451,   737,   738,    -1,    -1,
     738,   739,    -1,    -1,   348,  1176,   740,   741,   451,   758,
      -1,    -1,   741,   742,    -1,     1,   451,    -1,  1268,   204,
      -1,    61,  1268,  1202,    -1,   743,    -1,   748,    -1,  1324,
     744,    -1,   745,   746,    -1,   745,    -1,   746,    -1,   176,
      -1,   747,    -1,   746,   747,    -1,  1211,    -1,   321,  1273,
     749,   751,    -1,   750,    -1,   750,  1308,    -1,   750,  1308,
     750,  1302,    -1,  1220,    -1,  1211,    -1,    -1,   751,   752,
      -1,   753,    -1,   754,    -1,   755,    -1,   756,    -1,   757,
      -1,   210,  1268,   750,    -1,   177,  1317,  1268,   750,    -1,
     240,  1318,  1268,   750,    -1,   240,  1317,  1268,   750,    -1,
     187,  1268,   750,    -1,    -1,   758,   759,    -1,    -1,   686,
     687,   760,   761,   451,    -1,    -1,   761,   762,    -1,   763,
      -1,   767,    -1,   775,    -1,   780,    -1,   704,    -1,   786,
      -1,   709,    -1,   721,    -1,   781,    -1,   723,    -1,   784,
      -1,   770,    -1,   725,    -1,   773,    -1,   785,    -1,   710,
      -1,   774,    -1,   472,  1268,   764,    -1,  1322,    -1,  1320,
      -1,  1318,   765,    -1,  1319,   766,    -1,  1317,    -1,  1321,
      -1,  1323,    -1,    -1,  1211,    -1,   176,    -1,    -1,  1211,
      -1,   176,    -1,   285,   209,  1268,   768,    -1,  1218,    -1,
     329,  1218,    -1,   463,  1218,    -1,   769,    -1,   285,   321,
      -1,   286,    -1,   321,    -1,   285,    -1,   431,  1278,  1195,
     771,    -1,    -1,   373,  1279,   772,    -1,   484,  1211,    -1,
    1211,    -1,   176,    -1,   333,   501,  1151,    -1,   499,  1211,
     196,  1197,    49,  1197,    -1,   776,   777,    -1,   252,   778,
      -1,   779,    -1,   329,  1220,    -1,   463,  1220,    -1,    -1,
     299,   232,    -1,   299,    -1,  1220,    -1,   285,   321,    -1,
     309,   285,   321,    -1,   782,   783,    -1,  1301,  1277,  1269,
      -1,  1302,  1250,    -1,   329,  1220,    -1,   463,  1220,    -1,
    1220,    -1,   414,  1268,  1197,  1243,    -1,   209,  1265,    -1,
     491,  1268,   119,    -1,    -1,    -1,   389,   394,   451,   788,
     789,    -1,    -1,   790,    -1,   791,   451,    -1,   790,   791,
     451,    -1,   696,    -1,    -1,   686,   687,   792,   793,    -1,
     686,     1,   451,    -1,    -1,   793,   794,    -1,    45,   252,
      -1,    45,   389,    -1,    38,    -1,    46,    -1,   160,   156,
      -1,   160,   158,    -1,   211,    -1,   265,    -1,   378,    -1,
     473,    -1,   318,    -1,   243,    -1,    32,    -1,   395,    -1,
     371,    -1,   198,    -1,   345,    56,  1268,  1202,    -1,   345,
      -1,   456,    -1,   252,  1276,  1268,   797,  1204,    -1,  1301,
    1276,  1268,   798,  1204,    -1,   189,  1268,  1204,    -1,    35,
    1268,  1204,    -1,   705,    -1,   723,    -1,   800,    -1,   721,
      -1,   709,    -1,   725,    -1,   704,    -1,   799,    -1,   497,
    1211,    -1,   196,  1203,    -1,   446,  1211,    -1,   329,    -1,
     463,    -1,   270,    -1,   458,    -1,    -1,   795,    -1,   796,
      -1,    -1,   795,    -1,   796,    -1,   305,  1218,  1294,    -1,
    1268,   204,    -1,    -1,    -1,    -1,   337,   122,   805,   813,
     451,   802,   814,   803,   816,    -1,    -1,   804,   827,   451,
     816,    -1,    -1,    -1,   497,   806,   808,    -1,    -1,    55,
     807,   808,    -1,   809,    -1,   808,   809,    -1,   810,   811,
     812,   504,    -1,    -1,  1255,   357,    -1,  1255,   498,    -1,
      -1,   410,  1268,    32,    -1,   410,  1268,   110,    -1,   476,
     410,  1268,    32,    -1,   476,   410,  1268,  1218,    -1,   410,
    1268,  1218,    -1,    -1,   312,    -1,    -1,   376,   504,    -1,
      -1,    -1,   109,   451,   815,   816,   129,   109,   451,    -1,
      -1,   816,   817,    -1,   818,    -1,   821,    -1,   827,   451,
      -1,   822,    -1,   451,    -1,    -1,   504,   394,   823,   451,
     819,   820,    -1,    -1,  1107,   451,    -1,   504,   451,    -1,
     504,    -1,    -1,  1218,    -1,    -1,    -1,   825,   826,   827,
      -1,    -1,   828,   829,    -1,   827,   829,    -1,   830,    -1,
     845,    -1,   850,    -1,   854,    -1,   859,    -1,   874,    -1,
     877,    -1,   885,    -1,   881,    -1,   886,    -1,   887,    -1,
     892,    -1,   906,    -1,   910,    -1,   913,    -1,   927,    -1,
     930,    -1,   933,    -1,   936,    -1,   940,    -1,   941,    -1,
     945,    -1,   955,    -1,   958,    -1,   975,    -1,   977,    -1,
     980,    -1,   984,    -1,   990,    -1,  1002,    -1,  1010,    -1,
    1011,    -1,  1014,    -1,  1015,    -1,  1019,    -1,  1024,    -1,
    1025,    -1,  1033,    -1,  1048,    -1,  1058,    -1,  1067,    -1,
    1072,    -1,  1079,    -1,  1083,    -1,  1085,    -1,  1088,    -1,
    1091,    -1,  1095,    -1,  1120,    -1,   285,   399,    -1,     1,
    1247,    -1,    -1,     3,   831,   832,   844,    -1,   833,   835,
     839,   840,   841,  1128,    -1,  1211,   196,   834,    -1,  1211,
     196,  1302,    -1,  1211,   196,   103,   509,    -1,  1211,   196,
     103,    -1,  1211,   196,   104,   508,    -1,  1211,   196,   104,
      -1,  1211,   196,   105,    -1,  1211,   196,   162,   237,    -1,
    1211,   196,   165,   423,    -1,  1211,   196,   443,    -1,  1211,
     196,   493,   276,    -1,  1211,   196,    69,    -1,  1211,   196,
     155,  1128,    -1,  1211,   196,   153,  1200,  1128,    -1,  1211,
     196,    24,    -1,  1211,   196,    25,  1128,    -1,  1211,   196,
    1178,    -1,  1211,   196,   504,    -1,  1211,    -1,   308,    -1,
     254,    -1,   252,   299,    -1,    -1,   836,    -1,  1253,   837,
     838,    -1,  1253,   838,   837,    -1,  1253,   837,    -1,  1253,
     838,    -1,    30,  1200,    -1,   252,  1276,  1204,    -1,  1301,
    1276,  1204,    -1,   331,  1276,  1204,    -1,    -1,   197,    -1,
      -1,   272,  1268,    47,    -1,    -1,   503,   842,    -1,   843,
      -1,   842,   843,    -1,    32,    -1,    38,    -1,    46,    -1,
      91,    -1,   198,    -1,   211,    -1,   243,    -1,   263,    -1,
     265,    -1,   288,    -1,   318,    -1,   345,    56,  1268,  1202,
      -1,   345,    -1,   371,    -1,   378,    -1,   395,    -1,   473,
      -1,   483,    -1,   489,    -1,   189,  1268,  1204,    -1,    35,
    1268,  1204,    -1,   391,   482,  1150,    -1,   391,   123,  1150,
      -1,   444,  1249,  1205,    -1,    -1,   130,    -1,    -1,     5,
     846,   847,   849,    -1,  1193,   446,  1170,  1134,    -1,  1193,
     848,   203,  1170,  1134,    -1,    94,  1211,   446,  1211,  1243,
    1134,    -1,    -1,   446,  1194,    -1,    -1,   131,    -1,    -1,
      10,   851,   852,    -1,  1211,  1237,   853,    -1,  1164,    57,
    1238,   853,    -1,    -1,   376,  1192,    -1,    -1,    18,   855,
     856,    -1,   857,    -1,   856,   857,    -1,  1180,   446,   858,
    1180,    -1,    -1,   339,   446,    -1,    -1,    51,   860,   861,
     873,    -1,   862,  1203,   863,   868,   871,   872,    -1,    -1,
     422,    -1,   424,    -1,   271,    -1,    -1,    -1,   497,   864,
     865,    -1,   866,    -1,   865,   866,    -1,   867,   308,    -1,
     867,   811,  1194,    -1,    -1,  1255,   357,    -1,  1255,    87,
      -1,  1255,   498,    -1,    -1,   869,  1267,  1211,    -1,   869,
     870,    -1,   869,     6,  1278,  1211,    -1,   376,    -1,   203,
      -1,   460,    -1,   308,    -1,    -1,  1305,   824,    -1,    -1,
     294,   824,    -1,    -1,   132,    -1,    -1,    52,   875,   876,
      -1,  1202,    -1,   876,  1202,    -1,    -1,    60,   878,   879,
      -1,  1175,   880,    -1,   879,  1175,   880,    -1,    -1,  1312,
      -1,  1312,  1261,   362,    -1,  1299,   287,   380,    -1,  1299,
     262,    -1,    -1,    74,   882,   883,   884,    -1,  1170,  1303,
    1164,  1134,    -1,    -1,   133,    -1,    71,    -1,    88,    -1,
      -1,   111,   888,   889,   891,    -1,  1175,  1284,  1147,    -1,
     454,   890,    -1,  1175,    -1,   890,  1175,    -1,    -1,   134,
      -1,    -1,   119,   893,   894,   905,    -1,  1202,   487,  1131,
      -1,  1202,   488,  1131,    -1,  1202,   485,  1131,    -1,  1202,
     486,  1131,    -1,  1193,   898,   902,  1131,    -1,   895,  1131,
      -1,  1194,   503,   903,  1131,    -1,   897,    -1,    -1,   895,
     896,   897,    -1,  1194,   836,   899,   840,   901,    -1,    -1,
     484,  1178,    -1,   484,   504,    -1,   484,   335,    -1,   484,
      96,    -1,    -1,   484,   900,    -1,    96,    -1,    97,    -1,
      -1,   503,   903,    -1,    -1,   298,    -1,   904,    -1,   903,
     904,    -1,    38,    -1,    45,   252,    -1,    45,   389,    -1,
      46,    -1,    91,    -1,   160,   156,    -1,   160,   158,    -1,
     211,    -1,   265,    -1,   318,    -1,   378,    -1,   473,    -1,
     189,  1268,  1204,    -1,    35,  1268,  1204,    -1,   391,   482,
    1150,    -1,   391,   123,  1150,    -1,    -1,   135,    -1,    -1,
     121,   907,   908,   909,    -1,  1194,   228,  1170,  1134,    -1,
    1194,   228,  1194,   203,  1170,  1134,    -1,  1194,    49,  1194,
     203,  1170,  1134,    -1,  1194,   228,  1194,   203,  1171,   361,
    1171,  1134,    -1,  1194,    49,  1194,   203,  1171,   361,  1171,
    1134,    -1,    -1,   136,    -1,    -1,   152,   911,   912,    -1,
     256,   863,    -1,    -1,   163,   914,   915,   926,    -1,   916,
     918,    -1,   917,    -1,   916,    17,   917,    -1,  1152,    -1,
     464,    -1,   453,    -1,   919,   921,    -1,   919,    -1,   920,
      -1,   919,   920,    -1,   922,   824,    -1,   501,   316,   824,
      -1,   501,   923,    -1,   922,   501,   923,    -1,   924,    -1,
     923,    17,   924,    -1,  1153,   925,    -1,    21,    -1,   464,
      -1,   453,    -1,    -1,   442,  1152,    -1,    -1,   137,    -1,
      -1,   168,   928,   929,    -1,    -1,   340,    -1,   199,    -1,
     324,   101,    -1,   324,    -1,   394,    -1,   323,    -1,    -1,
     195,   931,   932,    -1,  1191,    -1,    -1,   202,   934,   935,
      -1,  1215,    -1,    -1,   205,   937,   938,    -1,  1295,  1179,
     939,    -1,    -1,   114,  1279,  1211,    -1,   206,    -1,    -1,
     215,   942,  1151,  1293,   943,   944,    -1,   824,   128,   824,
      -1,   128,   824,    -1,   824,    -1,    -1,   139,    -1,    -1,
     222,   946,   947,    -1,  1191,   948,   949,   950,   954,    -1,
      -1,  1299,   175,    -1,    -1,     9,  1295,   498,    -1,   953,
    1295,   498,    -1,    -1,   365,   951,    -1,   952,    -1,   951,
     952,    -1,   953,  1259,    49,  1194,    -1,    12,    -1,    15,
      -1,   301,    -1,    16,    -1,   302,    -1,   277,    -1,   278,
      -1,    -1,  1293,  1295,   110,    -1,    -1,   224,   956,   957,
      -1,  1176,    -1,   957,  1176,    -1,    -1,   227,   959,   960,
      -1,   961,   962,    -1,  1211,    -1,  1222,    -1,  1225,    -1,
     963,   965,    -1,   963,    -1,   965,    -1,   966,    -1,    -1,
     436,   964,   967,    -1,   365,   969,    -1,    92,  1200,   446,
    1201,   973,    -1,   968,    -1,   967,   968,    -1,  1200,   188,
      -1,    57,   973,    -1,     9,    -1,   241,    -1,   468,    -1,
    1200,   973,    -1,   970,    -1,   969,   970,    -1,    57,    49,
    1200,   973,    -1,   971,   972,    -1,    -1,     9,    -1,   241,
      -1,   177,    -1,   468,    -1,  1200,    49,  1201,   973,    -1,
      -1,   973,   974,    -1,    37,  1266,  1194,    -1,     8,  1266,
    1194,    -1,    -1,   269,   976,  1050,    -1,    -1,   273,   978,
     979,    -1,  1194,   446,  1191,    -1,    94,  1194,   446,  1191,
      -1,    -1,   275,   981,   982,   983,    -1,  1194,    49,  1170,
    1134,    -1,  1194,    49,  1194,   203,  1170,  1134,    -1,    -1,
     140,    -1,    -1,   311,   985,   986,    -1,   987,   988,  1174,
     989,    -1,   986,   987,   988,  1174,   989,    -1,   225,    -1,
     317,    -1,   233,    -1,   170,    -1,    -1,   404,  1299,   637,
      -1,    -1,  1299,   287,   380,    -1,  1299,   262,    -1,   379,
      -1,    -1,   324,   991,   992,    -1,   996,   997,    -1,    -1,
     997,   993,   824,   994,    -1,   997,   995,    -1,    -1,   141,
      -1,   141,    -1,   451,    -1,  1180,    -1,  1180,   442,  1180,
      -1,    -1,  1203,   445,    -1,   190,    -1,   998,   481,   999,
      -1,   998,   499,  1000,    -1,    -1,  1299,   439,  1125,    -1,
     168,    -1,  1151,    -1,  1001,    -1,  1000,     8,  1001,    -1,
    1211,   196,  1194,    49,  1194,   481,  1151,    -1,    -1,   349,
    1003,  1004,  1009,    -1,  1175,  1240,  1284,  1005,  1006,  1007,
    1008,    -1,    -1,   228,  1211,    -1,    -1,   217,   262,    -1,
    1299,   262,    -1,  1299,   236,   262,    -1,  1299,   287,   262,
      -1,  1299,   216,   262,    -1,  1299,   500,    -1,    -1,   237,
    1268,  1211,    -1,  1147,    -1,  1141,    -1,    -1,   143,    -1,
     350,    -1,    -1,   360,  1012,  1013,    -1,  1172,  1123,    -1,
     374,    -1,    -1,   375,  1016,  1017,  1018,    -1,  1175,  1284,
    1005,  1140,    -1,    -1,   144,    -1,    -1,   381,  1020,  1021,
    1023,    -1,  1172,  1123,  1022,  1147,    -1,    -1,  1299,   262,
      -1,  1299,   287,   262,    -1,    -1,   145,    -1,   385,    -1,
      -1,   393,  1026,  1027,  1032,    -1,  1173,  1028,  1029,  1030,
      -1,     9,  1173,  1029,   501,  1152,   824,    -1,    -1,   499,
    1211,    -1,    -1,   129,   824,    -1,  1031,    -1,  1031,  1030,
      -1,   501,  1151,   824,    -1,    -1,   146,    -1,    -1,   403,
    1034,  1035,    -1,  1038,    -1,  1039,    -1,  1042,    -1,  1043,
      -1,  1044,    -1,  1046,    -1,   309,    -1,   307,    -1,   482,
      -1,   123,    -1,   153,  1200,   446,  1200,    -1,  1208,    31,
    1040,    -1,  1041,    -1,  1040,  1041,    -1,    38,  1036,    -1,
      46,  1036,    -1,   211,  1036,    -1,   265,  1036,    -1,   378,
    1036,    -1,   473,  1036,    -1,   243,  1036,    -1,   318,  1036,
      -1,  1191,   446,   152,  1199,    -1,  1191,   446,  1194,    -1,
    1191,  1037,    49,  1194,    -1,  1045,    -1,  1044,  1045,    -1,
    1177,   446,  1036,    -1,  1047,    -1,  1046,  1047,    -1,  1191,
     446,   464,    -1,  1191,   446,   453,    -1,    -1,   412,  1049,
    1050,    -1,    -1,  1209,  1052,  1054,  1055,  1051,  1056,  1057,
      -1,    -1,  1052,  1279,   717,  1270,  1053,    -1,    -1,  1053,
    1215,    -1,    -1,  1315,  1264,    -1,    -1,  1300,  1268,  1184,
      -1,    -1,   497,  1174,    -1,   225,   337,  1268,   996,    -1,
      -1,   203,  1174,    -1,   317,   337,  1268,   996,    -1,    -1,
     421,  1059,  1060,  1066,    -1,  1175,  1062,  1061,  1147,    -1,
      -1,  1299,  1314,  1164,    -1,    -1,   237,  1268,  1063,  1211,
      -1,   177,    -1,   240,    -1,  1157,    -1,  1241,  1158,    -1,
    1241,  1159,    -1,  1241,  1160,    -1,  1241,  1161,    -1,  1064,
      -1,  1065,    -1,   290,  1157,    -1,   293,    -1,    -1,   147,
      -1,    -1,   426,   387,  1068,  1069,    -1,   426,  1071,    -1,
      -1,   376,  1194,    -1,   203,  1194,    -1,  1299,   161,  1291,
    1070,    -1,  1299,   289,  1291,  1070,    -1,    -1,  1194,    -1,
     256,    -1,   416,    -1,   510,    -1,   346,    -1,    -1,   427,
    1073,  1074,  1078,    -1,  1075,   228,  1211,  1077,  1137,    -1,
    1076,    -1,  1075,  1076,    -1,  1194,    -1,   112,  1255,   410,
      -1,   112,  1255,  1194,    -1,    -1,  1299,   330,  1268,  1211,
      -1,    -1,   148,    -1,    -1,   430,  1080,  1081,  1082,    -1,
    1193,   196,  1170,  1134,    -1,  1193,   196,  1194,   203,  1170,
    1134,    -1,    94,  1211,   196,  1211,  1243,  1134,    -1,    -1,
     149,    -1,   432,  1084,    -1,    -1,   336,    -1,    -1,   438,
    1086,  1087,    -1,  1176,    -1,  1087,  1176,    -1,    -1,   469,
    1089,  1090,    -1,  1211,   196,  1200,   446,  1201,    -1,    -1,
     475,  1092,  1093,    -1,  1175,  1094,    -1,    -1,   351,    -1,
     353,    -1,    -1,   480,  1096,  1097,  1106,    -1,  1211,  1098,
    1101,  1077,  1105,  1137,    -1,    -1,   112,  1255,  1099,    -1,
    1100,    -1,  1099,   313,  1100,    -1,  1235,  1200,    -1,   228,
    1102,    -1,  1101,  1102,    -1,  1211,  1103,  1104,    -1,    -1,
     113,  1263,  1211,    -1,    -1,    95,  1263,  1211,    -1,    -1,
     436,  1263,  1211,    -1,    -1,   150,    -1,    -1,   492,  1108,
    1109,    -1,  1110,    -1,  1113,    -1,  1117,    -1,  1118,    -1,
    1111,  1249,  1290,  1304,  1282,  1279,  1112,    -1,    -1,   204,
      -1,  1174,    -1,   225,    -1,   317,    -1,   233,    -1,   170,
      -1,  1261,   107,  1279,  1114,    -1,  1115,    -1,  1114,  1115,
      -1,  1181,    -1,     9,   338,    -1,     9,  1116,  1215,    -1,
      -1,   358,    -1,   358,   306,    -1,   306,    -1,  1111,    37,
     367,  1211,    -1,  1119,    -1,   166,    -1,   127,    -1,    -1,
     507,  1121,  1122,  1127,    -1,  1172,  1123,  1124,  1022,  1126,
      -1,    -1,   196,  1207,    -1,    -1,  1125,  1248,  1204,  1272,
      -1,  1125,  1248,  1178,    -1,  1125,  1248,   321,    -1,    37,
      -1,     8,    -1,  1147,    -1,  1144,    -1,    -1,   151,    -1,
    1129,  1130,    -1,    -1,   165,   824,    -1,    -1,   294,   824,
      -1,  1132,  1133,    -1,    -1,   165,   824,    -1,    -1,   294,
     824,    -1,  1135,  1136,    -1,    -1,   411,   824,    -1,    -1,
     297,   824,    -1,  1138,  1139,    -1,    -1,   461,   824,    -1,
      -1,   296,   824,    -1,  1142,  1143,    -1,  1142,    -1,  1142,
    1143,    -1,  1142,    -1,  1143,    -1,   129,   824,    -1,   291,
     824,    -1,  1145,  1146,    -1,  1145,    -1,  1146,    -1,   157,
     824,    -1,   292,   824,    -1,  1148,  1149,    -1,    -1,   231,
     824,    -1,    -1,   295,   824,    -1,    -1,  1206,  1313,    -1,
    1152,    -1,  1153,    -1,    -1,  1154,  1155,    -1,  1156,    -1,
    1155,   232,    -1,  1155,  1156,    -1,  1194,    -1,   462,    -1,
     448,    -1,   463,    -1,   458,    -1,   459,    -1,   450,    -1,
     169,    -1,  1157,    -1,  1158,    -1,  1159,    -1,  1160,    -1,
    1161,    -1,   293,    -1,   290,    -1,    20,    -1,   313,    -1,
     308,    -1,   301,    -1,    12,    -1,    13,    -1,    14,    -1,
     332,    -1,   284,    -1,   452,    -1,   159,  1295,    -1,   455,
      -1,   207,    -1,   457,    -1,   246,    -1,   208,    -1,   247,
      -1,  1164,    -1,  1162,  1163,  1164,    -1,    -1,    70,    -1,
     398,    -1,  1164,   463,  1165,    -1,  1164,   458,  1165,    -1,
    1165,    -1,  1165,   459,  1166,    -1,  1165,   450,  1166,    -1,
    1166,    -1,  1167,   169,  1166,    -1,  1167,    -1,   463,  1168,
      -1,   458,  1168,    -1,  1168,    -1,   462,  1164,   448,    -1,
    1197,    -1,   251,    -1,   251,  1306,   504,    -1,   253,    -1,
     253,  1306,   504,    -1,   322,    -1,   322,  1306,   504,    -1,
    1171,    -1,  1170,  1171,    -1,  1192,  1243,    -1,  1215,    -1,
    1215,    -1,  1175,    -1,  1174,  1175,    -1,   504,    -1,   504,
      -1,  1178,    -1,  1177,  1178,    -1,   271,    -1,    -1,  1179,
    1180,    -1,  1181,    -1,  1215,    -1,  1182,    -1,  1182,  1306,
    1182,    -1,   256,    -1,  1184,    -1,  1183,  1184,    -1,  1215,
      -1,   504,    -1,  1187,    -1,  1186,  1187,    -1,   504,    -1,
    1184,    -1,   256,    -1,   504,    -1,   504,    -1,  1192,    -1,
    1191,  1192,    -1,  1213,    -1,  1223,    -1,     6,  1278,  1212,
      -1,  1194,    -1,  1193,  1194,    -1,  1211,    -1,  1222,    -1,
    1225,    -1,  1169,    -1,   245,  1212,    -1,   245,  1223,    -1,
     245,  1225,    -1,     6,  1278,  1198,  1199,    -1,     6,  1278,
    1212,    -1,   271,    -1,  1197,    -1,  1195,  1197,    -1,  1211,
      -1,  1223,    -1,  1225,    -1,  1211,    -1,  1223,    -1,  1225,
      -1,  1169,    -1,   245,  1212,    -1,   245,  1223,    -1,   245,
    1225,    -1,   340,    -1,   152,    -1,  1212,    -1,   256,    -1,
    1211,    -1,  1223,    -1,  1211,    -1,  1222,    -1,  1211,    -1,
     256,    -1,  1211,    -1,   256,    -1,  1225,    -1,  1208,    -1,
    1218,    -1,   510,    -1,  1208,    -1,  1220,    -1,  1208,    -1,
    1218,    -1,  1211,    -1,  1222,    -1,  1225,    -1,  1210,    -1,
    1210,    -1,  1215,    -1,  1215,  1216,    -1,  1212,    -1,  1215,
    1216,  1217,    -1,  1215,  1216,    -1,  1215,  1217,    -1,  1215,
      -1,  1214,    -1,  1169,    -1,  1215,  1216,  1217,    -1,  1215,
    1216,    -1,  1215,  1217,    -1,  1215,    -1,   504,    -1,   504,
    1306,  1215,    -1,   462,  1162,   448,    -1,   462,  1164,   449,
     448,    -1,   462,  1164,   449,  1164,   448,    -1,   256,    -1,
     256,    -1,   256,    -1,   510,    -1,   256,    -1,   416,    -1,
     510,    -1,   346,    -1,   212,    -1,   266,    -1,   460,    -1,
    1223,    -1,     9,  1224,    -1,  1224,    -1,  1223,   447,  1224,
      -1,   256,    -1,   416,    -1,   510,    -1,   346,    -1,   212,
      -1,   266,    -1,   460,    -1,  1226,  1229,    -1,  1227,   462,
    1196,   448,  1229,    -1,  1228,   462,  1162,   448,  1229,    -1,
     470,   462,  1231,   448,  1229,    -1,   303,   462,  1232,   448,
      -1,   258,   462,  1233,   448,  1229,    -1,   259,   462,  1233,
     448,  1229,    -1,   260,   462,  1233,   448,  1229,    -1,   201,
    1230,    -1,   495,  1230,    -1,    99,    -1,   502,    -1,   490,
      -1,   264,    -1,   377,    -1,    82,    -1,   428,    -1,   429,
      -1,    -1,   462,  1164,   449,   448,    -1,   462,  1164,   449,
    1164,   448,    -1,    -1,   462,  1162,   448,    -1,   462,   448,
      -1,  1196,    -1,  1196,  1163,   241,    -1,  1196,  1163,   468,
      -1,  1196,    -1,  1196,  1163,  1196,    -1,  1164,    -1,  1164,
    1163,  1184,    -1,    -1,    -1,     9,    -1,    -1,  1315,    -1,
      -1,   223,    -1,    -1,   223,  1239,    -1,    -1,   446,  1201,
      -1,    -1,   285,    -1,   334,    -1,    -1,   290,    -1,    -1,
     312,    -1,   290,   312,    -1,    -1,   386,  1244,    -1,    -1,
     272,  1268,  1245,    -1,    34,    -1,   281,    -1,   282,    -1,
     283,    -1,   344,    -1,   466,    -1,   467,    -1,   471,    -1,
      -1,   400,  1256,    -1,   451,    -1,     3,    -1,     5,    -1,
      10,    -1,    18,    -1,    51,    -1,    52,    -1,    60,    -1,
      71,    -1,    74,    -1,    88,    -1,   111,    -1,   119,    -1,
     121,    -1,   128,    -1,   152,    -1,   163,    -1,   168,    -1,
     195,    -1,   202,    -1,   205,    -1,   206,    -1,   215,    -1,
     222,    -1,   224,    -1,   227,    -1,   269,    -1,   273,    -1,
     275,    -1,   285,    -1,   311,    -1,   324,    -1,   349,    -1,
     360,    -1,   375,    -1,   381,    -1,   385,    -1,   393,    -1,
     403,    -1,   412,    -1,   421,    -1,   426,    -1,   427,    -1,
     430,    -1,   432,    -1,   438,    -1,   469,    -1,   475,    -1,
     480,    -1,   507,    -1,   130,    -1,   131,    -1,   132,    -1,
     133,    -1,   134,    -1,   135,    -1,   136,    -1,   137,    -1,
     139,    -1,   140,    -1,   141,    -1,   143,    -1,   144,    -1,
     145,    -1,   146,    -1,   147,    -1,   148,    -1,   149,    -1,
     150,    -1,   151,    -1,    -1,     7,    -1,    -1,     8,    -1,
      -1,    22,    -1,    -1,    23,    -1,    -1,    26,    -1,    -1,
      30,    -1,    -1,    39,    -1,    -1,    49,    -1,    -1,    56,
      -1,    -1,    57,    -1,    -1,    86,    -1,    -1,   102,    -1,
      -1,   454,    -1,    -1,   188,    -1,    -1,   196,    -1,    -1,
     218,    -1,    -1,   314,    -1,   218,   314,    -1,    -1,   221,
      -1,    -1,   456,    -1,    -1,   228,    -1,    -1,   232,    -1,
      -1,   232,    -1,    22,    -1,    -1,   237,    -1,    -1,   242,
      -1,   384,    -1,    -1,   252,    -1,   254,    -1,    -1,   248,
    1268,    -1,   249,  1250,    -1,    -1,   254,    -1,    -1,   272,
      -1,    -1,   299,    -1,    -1,   299,    -1,   300,    -1,    -1,
     306,    -1,    -1,   309,    -1,    -1,   423,   232,    -1,   423,
      -1,   232,    -1,    -1,   316,    -1,    -1,   337,    -1,    -1,
     340,    -1,    -1,   351,    -1,    -1,   384,    -1,    -1,   405,
      -1,    -1,   406,    -1,    -1,   405,    -1,   405,   232,    -1,
      -1,   410,    -1,    -1,   418,    -1,    -1,   423,    -1,    -1,
     437,    -1,    -1,   441,    -1,    -1,   445,    -1,    -1,   446,
      -1,    -1,   446,    -1,   497,    -1,    -1,   501,    -1,    -1,
     501,   403,   446,    -1,    -1,   503,    -1,    63,   401,    -1,
     401,    -1,    66,    -1,    64,    -1,    67,    -1,    65,    -1,
     452,    -1,   159,    -1,   165,    -1,   161,    -1,   165,    -1,
     461,    -1,   218,    -1,   306,    -1,   418,    -1,   308,    -1,
     252,    -1,   254,    -1,   351,    -1,   353,    -1,    57,    -1,
     505,    -1,   351,  1268,    -1,   353,  1250,    -1,   356,    -1,
     474,    -1,   252,    -1,   254,    -1,   410,    -1,   244,    -1,
     503,   124,    -1,   124,    -1,   340,    63,   401,    -1,    63,
     401,    -1,   401,    -1,   116,    -1,   106,    -1,    89,   210,
      -1,    54,    -1,    89,   187,    -1,    53,    -1,   321,   210,
      -1,   325,    -1,   321,   187,    -1,   326,    -1,   366,   210,
      -1,   383,    -1,   366,   187,    -1,   382,    -1,    89,  1268,
      -1,    90,  1250,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,  1342,  1342,  1342,  1374,  1375,  1379,  1380,  1384,  1385,
    1389,  1389,  1412,  1419,  1426,  1432,  1433,  1434,  1438,  1439,
    1443,  1467,  1468,  1472,  1506,  1512,  1524,  1498,  1534,  1533,
    1571,  1606,  1607,  1611,  1612,  1615,  1616,  1620,  1629,  1638,
    1639,  1643,  1647,  1656,  1657,  1665,  1666,  1676,  1677,  1681,
    1682,  1683,  1684,  1685,  1692,  1691,  1704,  1705,  1708,  1709,
    1723,  1722,  1732,  1733,  1734,  1735,  1739,  1740,  1744,  1745,
    1746,  1747,  1751,  1758,  1765,  1772,  1783,  1787,  1791,  1795,
    1802,  1803,  1810,  1809,  1820,  1821,  1822,  1829,  1830,  1834,
    1838,  1850,  1854,  1855,  1860,  1863,  1870,  1875,  1886,  1899,
    1900,  1908,  1909,  1913,  1914,  1915,  1916,  1917,  1918,  1919,
    1920,  1921,  1922,  1923,  1924,  1932,  1931,  1950,  1960,  1973,
    1981,  1984,  1985,  1989,  1999,  2015,  2014,  2038,  2044,  2050,
    2056,  2062,  2068,  2078,  2082,  2089,  2093,  2098,  2097,  2108,
    2112,  2119,  2120,  2121,  2122,  2123,  2124,  2131,  2146,  2149,
    2156,  2164,  2168,  2179,  2199,  2207,  2218,  2219,  2225,  2246,
    2247,  2251,  2255,  2276,  2299,  2381,  2384,  2393,  2412,  2428,
    2446,  2464,  2481,  2497,  2498,  2505,  2506,  2514,  2515,  2525,
    2526,  2531,  2530,  2551,  2561,  2562,  2566,  2567,  2568,  2569,
    2570,  2571,  2572,  2573,  2574,  2575,  2576,  2577,  2578,  2585,
    2591,  2601,  2614,  2627,  2643,  2644,  2645,  2646,  2649,  2650,
    2656,  2657,  2661,  2665,  2666,  2671,  2674,  2675,  2682,  2690,
    2691,  2692,  2699,  2726,  2737,  2744,  2746,  2747,  2753,  2753,
    2760,  2765,  2770,  2777,  2778,  2779,  2783,  2794,  2795,  2799,
    2804,  2809,  2814,  2825,  2836,  2846,  2854,  2855,  2856,  2862,
    2873,  2880,  2881,  2887,  2895,  2896,  2897,  2903,  2904,  2905,
    2912,  2913,  2917,  2918,  2924,  2952,  2953,  2954,  2955,  2962,
    2961,  2977,  2978,  2982,  2985,  2986,  2992,  2993,  3001,  3002,
    3010,  3011,  3015,  3036,  3035,  3052,  3059,  3063,  3069,  3070,
    3074,  3084,  3099,  3100,  3101,  3102,  3103,  3104,  3105,  3106,
    3107,  3114,  3121,  3121,  3121,  3127,  3147,  3181,  3212,  3213,
    3220,  3221,  3225,  3226,  3233,  3244,  3249,  3260,  3261,  3265,
    3266,  3272,  3283,  3301,  3302,  3306,  3307,  3308,  3312,  3319,
    3326,  3335,  3347,  3399,  3414,  3415,  3419,  3431,  3473,  3475,
    3474,  3490,  3493,  3493,  3511,  3512,  3514,  3518,  3520,  3519,
    3554,  3567,  3575,  3580,  3586,  3595,  3605,  3608,  3620,  3621,
    3622,  3623,  3627,  3631,  3635,  3639,  3643,  3647,  3651,  3655,
    3659,  3663,  3667,  3671,  3675,  3686,  3687,  3691,  3692,  3696,
    3697,  3698,  3702,  3703,  3707,  3733,  3737,  3746,  3750,  3759,
    3760,  3761,  3762,  3763,  3764,  3765,  3766,  3767,  3768,  3769,
    3770,  3771,  3772,  3779,  3803,  3831,  3834,  3843,  3868,  3879,
    3880,  3884,  3888,  3892,  3896,  3900,  3904,  3908,  3912,  3916,
    3920,  3924,  3928,  3932,  3937,  3942,  3946,  3950,  3958,  3962,
    3966,  3974,  3978,  3982,  3986,  3990,  3994,  3998,  4002,  4006,
    4014,  4022,  4026,  4030,  4034,  4038,  4042,  4050,  4051,  4055,
    4056,  4062,  4068,  4080,  4098,  4099,  4108,  4132,  4133,  4136,
    4137,  4144,  4168,  4169,  4186,  4187,  4190,  4191,  4198,  4199,
    4204,  4215,  4226,  4237,  4248,  4277,  4276,  4285,  4286,  4290,
    4291,  4294,  4295,  4308,  4321,  4342,  4351,  4365,  4367,  4366,
    4386,  4388,  4387,  4403,  4405,  4404,  4415,  4416,  4423,  4422,
    4451,  4452,  4453,  4460,  4466,  4470,  4471,  4477,  4484,  4485,
    4486,  4490,  4497,  4498,  4502,  4512,  4552,  4562,  4572,  4590,
    4591,  4594,  4595,  4600,  4601,  4602,  4603,  4604,  4608,  4619,
    4630,  4641,  4652,  4662,  4663,  4668,  4667,  4688,  4689,  4693,
    4694,  4695,  4696,  4697,  4698,  4699,  4700,  4701,  4702,  4703,
    4704,  4705,  4706,  4707,  4708,  4709,  4713,  4720,  4724,  4728,
    4729,  4730,  4737,  4741,  4748,  4751,  4756,  4763,  4766,  4771,
    4778,  4785,  4794,  4799,  4804,  4811,  4812,  4813,  4814,  4818,
    4826,  4827,  4828,  4835,  4839,  4846,  4854,  4858,  4866,  4870,
    4876,  4891,  4908,  4909,  4910,  4914,  4931,  4935,  4942,  4949,
    4950,  4954,  4962,  4970,  4989,  4997,  5005,  5013,  5015,  5014,
    5035,  5036,  5040,  5041,  5045,  5047,  5046,  5103,  5121,  5122,
    5126,  5130,  5134,  5138,  5142,  5146,  5150,  5154,  5158,  5162,
    5166,  5170,  5174,  5178,  5182,  5186,  5190,  5195,  5199,  5203,
    5208,  5213,  5218,  5223,  5224,  5225,  5226,  5227,  5228,  5229,
    5230,  5231,  5238,  5243,  5252,  5253,  5257,  5258,  5263,  5266,
    5270,  5278,  5281,  5285,  5293,  5304,  5312,  5314,  5324,  5313,
    5351,  5351,  5384,  5388,  5387,  5401,  5400,  5420,  5421,  5426,
    5433,  5435,  5439,  5449,  5451,  5459,  5467,  5475,  5504,  5535,
    5537,  5547,  5552,  5579,  5581,  5580,  5616,  5617,  5621,  5622,
    5623,  5640,  5641,  5652,  5651,  5701,  5702,  5706,  5754,  5767,
    5770,  5789,  5794,  5788,  5807,  5807,  5837,  5844,  5845,  5846,
    5847,  5848,  5849,  5850,  5851,  5852,  5853,  5854,  5855,  5856,
    5857,  5858,  5859,  5860,  5861,  5862,  5863,  5864,  5865,  5866,
    5867,  5868,  5869,  5870,  5871,  5872,  5873,  5874,  5875,  5876,
    5877,  5878,  5879,  5880,  5881,  5882,  5883,  5884,  5885,  5886,
    5887,  5888,  5889,  5890,  5891,  5892,  5893,  5907,  5919,  5918,
    5927,  5933,  5937,  5941,  5946,  5951,  5956,  5961,  5965,  5969,
    5973,  5977,  5982,  5986,  5990,  5994,  5998,  6002,  6006,  6013,
    6014,  6021,  6022,  6026,  6027,  6031,  6032,  6033,  6034,  6035,
    6039,  6043,  6044,  6047,  6048,  6051,  6052,  6058,  6059,  6063,
    6064,  6068,  6072,  6076,  6080,  6084,  6088,  6092,  6096,  6100,
    6104,  6108,  6112,  6116,  6120,  6124,  6128,  6132,  6136,  6140,
    6144,  6148,  6152,  6156,  6160,  6167,  6171,  6182,  6181,  6190,
    6194,  6198,  6204,  6205,  6212,  6216,  6227,  6226,  6235,  6239,
    6251,  6252,  6260,  6259,  6268,  6269,  6273,  6279,  6279,  6286,
    6285,  6295,  6315,  6319,  6324,  6329,  6350,  6354,  6353,  6370,
    6371,  6376,  6384,  6408,  6410,  6414,  6423,  6436,  6439,  6443,
    6447,  6470,  6471,  6475,  6476,  6481,  6484,  6492,  6496,  6504,
    6508,  6519,  6518,  6526,  6530,  6541,  6540,  6548,  6553,  6561,
    6562,  6563,  6564,  6565,  6573,  6572,  6581,  6588,  6592,  6602,
    6613,  6631,  6630,  6639,  6643,  6647,  6652,  6660,  6664,  6675,
    6674,  6684,  6688,  6692,  6696,  6700,  6704,  6705,  6714,  6716,
    6715,  6723,  6732,  6739,  6743,  6747,  6751,  6761,  6763,  6767,
    6768,  6771,  6773,  6780,  6781,  6785,  6786,  6791,  6795,  6799,
    6803,  6807,  6811,  6815,  6819,  6823,  6827,  6831,  6835,  6839,
    6843,  6847,  6851,  6858,  6862,  6873,  6872,  6881,  6885,  6889,
    6893,  6897,  6904,  6908,  6919,  6918,  6926,  6946,  6945,  6969,
    6977,  6978,  6983,  6994,  7005,  7019,  7023,  7030,  7031,  7036,
    7045,  7054,  7059,  7068,  7069,  7074,  7136,  7137,  7138,  7142,
    7143,  7147,  7151,  7162,  7161,  7173,  7174,  7192,  7206,  7228,
    7250,  7270,  7296,  7295,  7303,  7314,  7313,  7322,  7335,  7334,
    7347,  7356,  7360,  7371,  7384,  7383,  7392,  7396,  7400,  7407,
    7411,  7422,  7421,  7429,  7437,  7438,  7442,  7443,  7444,  7449,
    7452,  7459,  7463,  7471,  7478,  7479,  7480,  7481,  7482,  7483,
    7484,  7489,  7492,  7502,  7501,  7509,  7516,  7529,  7528,  7537,
    7541,  7545,  7549,  7556,  7557,  7558,  7559,  7566,  7565,  7579,
    7589,  7598,  7599,  7603,  7604,  7605,  7606,  7607,  7608,  7612,
    7613,  7617,  7622,  7629,  7630,  7631,  7632,  7633,  7637,  7665,
    7668,  7675,  7679,  7689,  7688,  7701,  7700,  7708,  7712,  7723,
    7722,  7731,  7735,  7742,  7746,  7757,  7756,  7764,  7785,  7809,
    7810,  7811,  7812,  7816,  7817,  7821,  7822,  7823,  7824,  7836,
    7835,  7846,  7852,  7851,  7862,  7870,  7878,  7885,  7889,  7902,
    7909,  7921,  7924,  7929,  7933,  7944,  7951,  7952,  7956,  7957,
    7960,  7961,  7966,  8006,  8005,  8014,  8041,  8042,  8047,  8050,
    8054,  8058,  8062,  8066,  8070,  8077,  8078,  8082,  8083,  8087,
    8091,  8101,  8112,  8111,  8119,  8129,  8140,  8139,  8148,  8155,
    8159,  8170,  8169,  8181,  8190,  8193,  8197,  8204,  8208,  8218,
    8230,  8229,  8238,  8242,  8251,  8252,  8257,  8260,  8268,  8272,
    8279,  8287,  8291,  8302,  8301,  8315,  8316,  8317,  8318,  8319,
    8320,  8324,  8325,  8329,  8330,  8336,  8345,  8352,  8353,  8357,
    8361,  8365,  8369,  8373,  8377,  8381,  8385,  8394,  8398,  8407,
    8416,  8417,  8421,  8430,  8431,  8435,  8439,  8450,  8449,  8458,
    8457,  8488,  8491,  8511,  8512,  8515,  8516,  8524,  8525,  8530,
    8535,  8545,  8561,  8566,  8576,  8593,  8592,  8602,  8615,  8618,
    8626,  8629,  8634,  8639,  8647,  8648,  8649,  8650,  8651,  8652,
    8656,  8664,  8665,  8669,  8673,  8684,  8683,  8693,  8706,  8709,
    8713,  8717,  8725,  8737,  8740,  8747,  8748,  8749,  8750,  8757,
    8756,  8765,  8772,  8773,  8777,  8778,  8779,  8783,  8784,  8788,
    8792,  8803,  8802,  8811,  8815,  8819,  8826,  8830,  8840,  8851,
    8852,  8859,  8858,  8866,  8873,  8886,  8885,  8893,  8907,  8906,
    8914,  8927,  8929,  8930,  8938,  8937,  8946,  8954,  8955,  8960,
    8961,  8966,  8973,  8974,  8979,  8986,  8987,  8991,  8992,  8996,
    8997,  9001,  9005,  9016,  9015,  9024,  9025,  9026,  9027,  9031,
    9058,  9061,  9073,  9083,  9088,  9093,  9098,  9106,  9144,  9145,
    9149,  9189,  9199,  9222,  9223,  9224,  9225,  9229,  9260,  9269,
    9270,  9277,  9276,  9288,  9298,  9299,  9304,  9307,  9311,  9315,
    9322,  9323,  9327,  9328,  9332,  9336,  9348,  9351,  9352,  9361,
    9362,  9371,  9374,  9375,  9384,  9385,  9396,  9399,  9400,  9409,
    9410,  9422,  9425,  9427,  9437,  9438,  9450,  9451,  9455,  9456,
    9457,  9461,  9470,  9481,  9482,  9483,  9487,  9496,  9507,  9512,
    9513,  9522,  9523,  9534,  9538,  9548,  9555,  9562,  9562,  9572,
    9573,  9574,  9578,  9587,  9588,  9590,  9591,  9592,  9593,  9594,
    9596,  9597,  9598,  9599,  9600,  9601,  9603,  9604,  9605,  9607,
    9608,  9609,  9610,  9611,  9614,  9615,  9619,  9620,  9624,  9625,
    9629,  9630,  9634,  9638,  9644,  9648,  9654,  9655,  9656,  9660,
    9661,  9662,  9666,  9667,  9668,  9672,  9676,  9680,  9681,  9682,
    9685,  9686,  9696,  9708,  9717,  9733,  9742,  9758,  9773,  9774,
    9779,  9788,  9794,  9814,  9818,  9839,  9880,  9894,  9895,  9900,
    9906,  9907,  9912,  9924,  9925,  9926,  9933,  9944,  9945,  9949,
    9957,  9965,  9969,  9976,  9985,  9986,  9992, 10006, 10023, 10027,
   10034, 10035, 10036, 10043, 10047, 10054, 10055, 10056, 10057, 10058,
   10062, 10066, 10070, 10074, 10078, 10099, 10103, 10110, 10111, 10112,
   10116, 10117, 10118, 10119, 10120, 10124, 10128, 10135, 10136, 10140,
   10141, 10145, 10146, 10150, 10151, 10162, 10163, 10167, 10168, 10169,
   10173, 10174, 10175, 10182, 10183, 10187, 10188, 10192, 10193, 10194,
   10200, 10204, 10208, 10209, 10213, 10217, 10224, 10231, 10238, 10248,
   10252, 10259, 10269, 10279, 10289, 10302, 10306, 10314, 10322, 10326,
   10336, 10351, 10374, 10394, 10401, 10417, 10418, 10419, 10420, 10421,
   10422, 10426, 10430, 10447, 10451, 10458, 10459, 10460, 10461, 10462,
   10463, 10464, 10470, 10474, 10478, 10482, 10486, 10490, 10494, 10498,
   10502, 10506, 10513, 10514, 10518, 10519, 10520, 10524, 10525, 10526,
   10530, 10534, 10538, 10545, 10549, 10553, 10560, 10567, 10574, 10584,
   10591, 10601, 10608, 10620, 10628, 10629, 10633, 10634, 10638, 10639,
   10644, 10647, 10655, 10658, 10665, 10667, 10668, 10672, 10673, 10677,
   10678, 10679, 10684, 10687, 10700, 10704, 10712, 10716, 10720, 10724,
   10728, 10732, 10736, 10740, 10747, 10748, 10754, 10755, 10756, 10757,
   10758, 10759, 10760, 10761, 10762, 10763, 10764, 10765, 10766, 10767,
   10768, 10769, 10770, 10771, 10772, 10773, 10774, 10775, 10776, 10777,
   10778, 10779, 10780, 10781, 10782, 10783, 10784, 10785, 10786, 10787,
   10788, 10789, 10790, 10791, 10792, 10793, 10794, 10795, 10796, 10797,
   10798, 10799, 10800, 10801, 10802, 10803, 10804, 10805, 10806, 10807,
   10808, 10809, 10810, 10811, 10812, 10813, 10814, 10815, 10816, 10817,
   10818, 10819, 10820, 10821, 10822, 10823, 10830, 10830, 10831, 10831,
   10832, 10832, 10833, 10833, 10834, 10834, 10835, 10835, 10836, 10836,
   10837, 10837, 10838, 10838, 10839, 10839, 10840, 10840, 10841, 10841,
   10842, 10842, 10843, 10843, 10844, 10844, 10845, 10845, 10846, 10846,
   10846, 10847, 10847, 10848, 10848, 10849, 10849, 10850, 10850, 10851,
   10851, 10851, 10852, 10852, 10853, 10853, 10853, 10854, 10854, 10854,
   10855, 10855, 10855, 10856, 10856, 10857, 10857, 10858, 10858, 10859,
   10859, 10859, 10860, 10860, 10861, 10861, 10862, 10862, 10862, 10862,
   10863, 10863, 10864, 10864, 10865, 10865, 10866, 10866, 10867, 10867,
   10868, 10868, 10869, 10869, 10870, 10870, 10870, 10871, 10871, 10872,
   10872, 10873, 10873, 10874, 10874, 10875, 10875, 10876, 10876, 10877,
   10877, 10878, 10878, 10878, 10879, 10879, 10880, 10880, 10881, 10881,
   10885, 10885, 10886, 10886, 10887, 10887, 10888, 10888, 10889, 10889,
   10890, 10890, 10891, 10891, 10892, 10892, 10893, 10893, 10894, 10894,
   10895, 10895, 10896, 10896, 10897, 10897, 10898, 10898, 10899, 10899,
   10900, 10900, 10903, 10904, 10905, 10909, 10909, 10910, 10910, 10911,
   10911, 10912, 10912, 10913, 10913, 10914, 10914, 10915, 10915, 10916,
   10916
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "$undefined", "ACCEPT", "ACCESS", "ADD",
  "ADDRESS", "ADVANCING", "AFTER", "ALL", "ALLOCATE", "ALPHABET",
  "ALPHABETIC", "\"ALPHABETIC-LOWER\"", "\"ALPHABETIC-UPPER\"",
  "ALPHANUMERIC", "\"ALPHANUMERIC-EDITED\"", "ALSO", "ALTER", "ALTERNATE",
  "AND", "ANY", "ARE", "AREA", "\"ARGUMENT-NUMBER\"", "\"ARGUMENT-VALUE\"",
  "AS", "ASCENDING", "ASCII", "ASSIGN", "AT", "ATTRIBUTE", "AUTO",
  "AUTOMATIC", "\"AWAY-FROM-ZERO\"", "\"BACKGROUND-COLOR\"", "BASED",
  "BEFORE", "BELL", "BINARY", "\"BINARY-C-LONG\"", "\"BINARY-CHAR\"",
  "\"BINARY-DOUBLE\"", "\"BINARY-LONG\"", "\"BINARY-SHORT\"", "BLANK",
  "BLINK", "BLOCK", "BOTTOM", "BY", "\"BYTE-LENGTH\"", "CALL", "CANCEL",
  "CF", "CH", "CHAINING", "CHARACTER", "CHARACTERS", "CLASS",
  "CLASSIFICATION", "CLOSE", "CODE", "\"CODE-SET\"", "COLLATING", "COL",
  "COLS", "COLUMN", "COLUMNS", "COMMA", "\"COMMAND-LINE\"",
  "\"comma delimiter\"", "COMMIT", "COMMON", "COMP", "COMPUTE",
  "\"COMP-1\"", "\"COMP-2\"", "\"COMP-3\"", "\"COMP-4\"", "\"COMP-5\"",
  "\"COMP-6\"", "\"COMP-X\"", "\"FUNCTION CONCATENATE\"", "CONDITION",
  "CONFIGURATION", "CONSTANT", "CONTAINS", "CONTENT", "CONTINUE",
  "CONTROL", "CONTROLS", "CONVERSION", "CONVERTING", "COPY",
  "CORRESPONDING", "COUNT", "CRT", "\"CRT-UNDER\"", "CURRENCY",
  "\"FUNCTION CURRENT-DATE\"", "CURSOR", "CYCLE", "DATA", "DATE", "DAY",
  "\"DAY-OF-WEEK\"", "DE", "DEBUGGING", "\"DECIMAL-POINT\"",
  "DECLARATIVES", "DEFAULT", "DELETE", "DELIMITED", "DELIMITER",
  "DEPENDING", "DESCENDING", "DETAIL", "DISC", "DISK", "DISPLAY",
  "\"FUNCTION DISPLAY-OF\"", "DIVIDE", "DIVISION", "DOWN", "DUPLICATES",
  "DYNAMIC", "EBCDIC", "EC", "ELSE", "END", "\"END-ACCEPT\"",
  "\"END-ADD\"", "\"END-CALL\"", "\"END-COMPUTE\"", "\"END-DELETE\"",
  "\"END-DISPLAY\"", "\"END-DIVIDE\"", "\"END-EVALUATE\"",
  "\"END FUNCTION\"", "\"END-IF\"", "\"END-MULTIPLY\"", "\"END-PERFORM\"",
  "\"END PROGRAM\"", "\"END-READ\"", "\"END-RETURN\"", "\"END-REWRITE\"",
  "\"END-SEARCH\"", "\"END-START\"", "\"END-STRING\"", "\"END-SUBTRACT\"",
  "\"END-UNSTRING\"", "\"END-WRITE\"", "ENTRY", "ENVIRONMENT",
  "\"ENVIRONMENT-NAME\"", "\"ENVIRONMENT-VALUE\"", "EOL", "EOP", "EOS",
  "EQUAL", "ERASE", "ERROR", "ESCAPE", "EVALUATE", "\"EVENT STATUS\"",
  "EXCEPTION", "\"EXCEPTION CONDITION\"", "EXCLUSIVE", "EXIT",
  "\"Exponentiation operator\"", "EXTEND", "EXTERNAL", "FD",
  "\"FILE-CONTROL\"", "\"FILE-ID\"", "FILLER", "FINAL", "FIRST",
  "\"FLOAT-BINARY-128\"", "\"FLOAT-BINARY-32\"", "\"FLOAT-BINARY-64\"",
  "\"FLOAT-DECIMAL-16\"", "\"FLOAT-DECIMAL-34\"", "\"FLOAT-DECIMAL-7\"",
  "\"FLOAT-EXTENDED\"", "\"FLOAT-LONG\"", "\"FLOAT-SHORT\"", "FOOTING",
  "FOR", "\"FOREGROUND-COLOR\"", "FOREVER",
  "\"FUNCTION FORMATTED-CURRENT-DATE\"", "\"FUNCTION FORMATTED-DATE\"",
  "\"FUNCTION FORMATTED-DATETIME\"", "\"FUNCTION FORMATTED-TIME\"", "FREE",
  "FROM", "\"FROM CRT\"", "FULL", "FUNCTION", "\"FUNCTION-ID\"",
  "\"FUNCTION\"", "GENERATE", "GIVING", "GLOBAL", "GO", "GOBACK",
  "GREATER", "\"GREATER OR EQUAL\"", "GROUP", "HEADING", "HIGHLIGHT",
  "\"HIGH-VALUE\"", "ID", "IDENTIFICATION", "IF", "IGNORE", "IGNORING",
  "IN", "INDEX", "INDEXED", "INDICATE", "INITIALIZE", "INITIALIZED",
  "INITIATE", "INPUT", "\"INPUT-OUTPUT\"", "INSPECT", "INTO", "INTRINSIC",
  "INVALID", "\"INVALID KEY\"", "IS", "\"I-O\"", "\"I-O-CONTROL\"",
  "JUSTIFIED", "KEPT", "KEY", "KEYBOARD", "LABEL", "LAST", "LEADING",
  "LEFT", "LEFTLINE", "LENGTH", "\"LENGTH OF\"", "LESS",
  "\"LESS OR EQUAL\"", "LIMIT", "LIMITS", "LINAGE", "\"LINAGE-COUNTER\"",
  "LINE", "\"LINE-COUNTER\"", "LINES", "LINKAGE", "\"Literal\"", "LOCALE",
  "\"FUNCTION LOCALE-DATE\"", "\"FUNCTION LOCALE-TIME\"",
  "\"FUNCTION LOCALE-TIME-FROM-SECONDS\"", "\"LOCAL-STORAGE\"", "LOCK",
  "LOWER", "\"FUNCTION LOWER-CASE\"", "LOWLIGHT", "\"LOW-VALUE\"",
  "MANUAL", "MEMORY", "MERGE", "MINUS", "\"MNEMONIC NAME\"", "MODE",
  "MOVE", "MULTIPLE", "MULTIPLY", "NAME", "NATIONAL",
  "\"NATIONAL-EDITED\"", "\"FUNCTION NATIONAL-OF\"", "NATIVE",
  "\"NEAREST-AWAY-FROM-ZERO\"", "\"NEAREST-EVEN\"",
  "\"NEAREST-TOWARD-ZERO\"", "NEGATIVE", "NEXT", "\"NEXT PAGE\"", "NO",
  "\"NO-ECHO\"", "NORMAL", "NOT", "\"NOT END\"", "\"NOT EOP\"",
  "\"NOT EQUAL\"", "\"NOT EXCEPTION\"", "\"NOT INVALID KEY\"",
  "\"NOT OVERFLOW\"", "\"NOT SIZE ERROR\"", "\"NO ADVANCING\"", "NUMBER",
  "NUMBERS", "NUMERIC", "\"NUMERIC-EDITED\"", "\"FUNCTION NUMVAL-C\"",
  "\"OBJECT-COMPUTER\"", "OCCURS", "OF", "OFF", "OMITTED", "ON", "ONLY",
  "OPEN", "OPTIONAL", "OR", "ORDER", "ORGANIZATION", "OTHER", "OUTPUT",
  "OVERLINE", "\"PACKED-DECIMAL\"", "PADDING", "PAGE", "\"PAGE-COUNTER\"",
  "PARAGRAPH", "PERFORM", "PH", "PF", "PICTURE", "\"PICTURE SYMBOL\"",
  "PLUS", "POINTER", "POSITION", "POSITIVE", "PRESENT", "PREVIOUS",
  "PRINTER", "PRINTING", "PROCEDURE", "PROCEDURES", "PROCEED", "PROGRAM",
  "\"PROGRAM-ID\"", "\"Program name\"", "\"PROGRAM-POINTER\"",
  "PROHIBITED", "PROMPT", "QUOTE", "RANDOM", "RD", "READ",
  "\"READY TRACE\"", "RECORD", "RECORDING", "RECORDS", "RECURSIVE",
  "REDEFINES", "REEL", "REFERENCE", "REFERENCES", "RELATIVE", "RELEASE",
  "REMAINDER", "REMOVAL", "RENAMES", "REPLACE", "REPLACING", "REPORT",
  "REPORTING", "REPORTS", "REPOSITORY", "\"Intrinsic function name\"",
  "REQUIRED", "RESERVE", "RESET", "\"RESET TRACE\"", "RETURN", "RETURNING",
  "\"FUNCTION REVERSE\"", "\"REVERSE-VIDEO\"", "REVERSED", "REWIND",
  "REWRITE", "RF", "RH", "RIGHT", "ROLLBACK", "ROUNDED", "RUN", "SAME",
  "SCREEN", "\"SCREEN-CONTROL\"", "SCROLL", "SD", "SEARCH", "SECTION",
  "SECURE", "\"SEGMENT-LIMIT\"", "SELECT", "\"semi-colon\"", "SENTENCE",
  "SEPARATE", "SEQUENCE", "SEQUENTIAL", "SET", "SHARING", "SIGN", "SIGNED",
  "\"SIGNED-INT\"", "\"SIGNED-LONG\"", "\"SIGNED-SHORT\"", "SIZE",
  "\"SIZE ERROR\"", "SORT", "\"SORT-MERGE\"", "SOURCE",
  "\"SOURCE-COMPUTER\"", "SPACE", "\"SPECIAL-NAMES\"", "STANDARD",
  "\"STANDARD-1\"", "\"STANDARD-2\"", "START", "STATIC", "STATUS",
  "STDCALL", "STEP", "STOP", "STRING", "\"FUNCTION SUBSTITUTE\"",
  "\"FUNCTION SUBSTITUTE-CASE\"", "SUBTRACT", "SUM", "SUPPRESS",
  "SYMBOLIC", "SYNCHRONIZED", "\"SYSTEM-DEFAULT\"", "TALLYING", "TAPE",
  "TERMINATE", "TEST", "THAN", "THEN", "THRU", "TIME", "TIMEOUT", "TIMES",
  "TO", "\"&\"", "\")\"", "\":\"", "\"/\"", "\".\"", "\"=\"", "\"FALSE\"",
  "\"FILE\"", "\">\"", "\"INITIAL\"", "\"<\"", "\"-\"", "\"*\"",
  "\"NULL\"", "\"OVERFLOW\"", "\"(\"", "\"+\"", "\"TRUE\"", "TOP",
  "\"TOWARD-GREATER\"", "\"TOWARD-LESSER\"", "TRAILING", "TRANSFORM",
  "\"FUNCTION TRIM\"", "TRUNCATION", "TYPE", "UNDERLINE", "UNIT", "UNLOCK",
  "UNSIGNED", "\"UNSIGNED-INT\"", "\"UNSIGNED-LONG\"",
  "\"UNSIGNED-SHORT\"", "UNSTRING", "UNTIL", "UP", "UPDATE", "UPON",
  "\"UPON ARGUMENT-NUMBER\"", "\"UPON COMMAND-LINE\"",
  "\"UPON ENVIRONMENT-NAME\"", "\"UPON ENVIRONMENT-VALUE\"", "UPPER",
  "\"FUNCTION UPPER-CASE\"", "USAGE", "USE", "USER", "\"USER-DEFAULT\"",
  "\"User FUNCTION\"", "\"User FUNCTION name\"", "USING", "VALUE",
  "VARYING", "WAIT", "WHEN", "\"FUNCTION WHEN-COMPILED\"", "WITH",
  "\"Identifier\"", "WORDS", "\"WORKING-STORAGE\"", "WRITE", "YYYYDDD",
  "YYYYMMDD", "ZERO", "SHIFT_PREFER", "$accept", "start", "@1",
  "nested_list", "nested_progs", "source_element", "simple_prog", "@2",
  "program_definition", "program_mandatory", "function_definition",
  "nested_prog", "end_program", "end_mandatory", "end_function",
  "end_function_mandatory", "program_body", "@3", "@4", "@5",
  "program_identification", "@6", "function_identification",
  "program_name", "as_literal", "program_type", "program_type_clause",
  "_init_or_recurs", "environment_header", "configuration_header",
  "configuration_list", "configuration_paragraph",
  "source_computer_paragraph", "@7", "source_computer_entry",
  "with_debugging_mode", "object_computer_paragraph", "@8",
  "object_computer_entry", "object_clauses_list", "object_clauses",
  "object_computer_memory", "object_computer_sequence",
  "object_computer_segment", "object_computer_class", "locale_class",
  "computer_words", "repository_paragraph", "@9", "repository_entry",
  "repository_list", "repository_name", "user_or_intrinsic",
  "_as_literal_intrinsic", "repository_name_list",
  "special_names_paragraph", "special_names_entry", "special_name_list",
  "special_name", "mnemonic_name_clause", "@10", "mnemonic_choices",
  "special_name_mnemonic_on_off", "on_off_clauses", "alphabet_name_clause",
  "@11", "alphabet_definition", "alphabet_literal_list",
  "alphabet_literal", "@12", "alphabet_also_sequence", "alphabet_lits",
  "symbolic_characters_clause", "sym_in_word", "symbolic_collection",
  "symbolic_chars_list", "symbolic_chars_phrase", "char_list",
  "integer_list", "class_name_clause", "class_item_list", "class_item",
  "locale_clause", "currency_sign_clause", "with_pic_symbol",
  "decimal_point_clause", "numeric_sign_clause", "cursor_clause",
  "crt_status_clause", "screen_control", "event_status",
  "input_output_header", "file_control_header", "i_o_control_header",
  "file_control_sequence", "file_control_entry", "@13",
  "select_clause_sequence", "select_clause", "assign_clause",
  "device_name", "_line_adv_file", "_ext_clause", "assignment_name",
  "opt_assignment_name", "access_mode_clause", "access_mode",
  "alternative_record_key_clause", "collating_sequence_clause",
  "file_status_clause", "file_or_sort", "lock_mode_clause", "@14",
  "lock_mode", "lock_with", "organization_clause", "organization",
  "padding_character_clause", "record_delimiter_clause",
  "record_key_clause", "opt_splitk", "relative_key_clause",
  "reserve_clause", "no_or_integer", "sharing_clause", "sharing_option",
  "opt_i_o_control", "i_o_control_list", "i_o_control_clause",
  "same_clause", "same_option", "multiple_file_tape_clause", "@15",
  "multiple_file_list", "multiple_file", "multiple_file_position",
  "data_division_header", "file_section_header",
  "file_description_sequence", "file_description",
  "file_description_entry", "@16", "file_type",
  "file_description_clause_sequence", "file_description_clause",
  "block_contains_clause", "_records_or_characters", "record_clause",
  "record_depending", "opt_from_integer", "opt_to_integer",
  "label_records_clause", "value_of_clause", "file_id", "valueof_name",
  "data_records_clause", "linage_clause", "linage_sequence",
  "linage_lines", "linage_footing", "linage_top", "linage_bottom",
  "recording_mode_clause", "code_set_clause", "report_clause",
  "report_keyword", "rep_name_list", "working_storage_section", "@17",
  "record_description_list", "@18", "record_description_list_2",
  "data_description", "@19", "level_number", "entry_name", "const_name",
  "const_global", "lit_or_length", "con_identifier", "fp32_usage",
  "fp64_usage", "fp128_usage", "pointer_len", "constant_entry",
  "constant_source", "data_description_clause_sequence",
  "data_description_clause", "redefines_clause", "external_clause",
  "as_extname", "global_clause", "picture_clause", "usage_clause", "usage",
  "float_usage", "double_usage", "sign_clause", "report_occurs_clause",
  "occurs_step", "occurs_clause", "occurs_to_integer", "occurs_depending",
  "occurs_keys", "occurs_key_list", "ascending_or_descending",
  "occurs_indexed", "occurs_index_list", "occurs_index",
  "justified_clause", "synchronized_clause", "blank_clause",
  "based_clause", "value_clause", "@20", "value_item_list", "value_item",
  "false_is", "renames_clause", "any_length_clause",
  "local_storage_section", "@21", "linkage_section", "@22",
  "report_section", "@23", "report_description_sequence",
  "report_description", "@24", "report_description_options",
  "report_description_option", "control_clause", "control_field_list",
  "control_final_tag", "identifier_list", "control_identifier",
  "page_limit_clause", "page_line_column", "report_int_ident",
  "page_heading_list", "page_detail", "heading_clause", "first_detail",
  "last_heading", "last_detail", "footing_clause",
  "report_group_description_list", "report_group_description_entry", "@25",
  "report_group_options", "report_group_option", "type_clause",
  "type_option", "control_heading_final", "control_footing_final",
  "next_group_clause", "next_group_plus", "next_page", "sum_clause_list",
  "reset_clause", "data_or_final", "present_when_condition",
  "varying_clause", "line_clause", "line_keyword_clause",
  "line_clause_options", "number_is", "line_clause_integer",
  "line_clause_next_page", "column_clause", "col_keyword_clause",
  "col_or_plus", "source_clause", "group_indicate_clause",
  "report_usage_clause", "screen_section", "@26",
  "opt_screen_description_list", "screen_description_list",
  "screen_description", "@27", "screen_options", "screen_option",
  "plus_plus", "minus_minus", "screen_line_plus_minus",
  "screen_col_plus_minus", "screen_occurs_clause", "global_screen_opt",
  "procedure_division", "@28", "@29", "@30", "procedure_using_chaining",
  "@31", "@32", "procedure_param_list", "procedure_param",
  "procedure_type", "size_optional", "procedure_optional",
  "procedure_returning", "procedure_declaratives", "@33", "procedure_list",
  "procedure", "section_header", "@34", "opt_use_statement",
  "paragraph_header", "invalid_statement", "opt_segment", "statement_list",
  "@35", "@36", "statements", "@37", "statement", "accept_statement",
  "@38", "accept_body", "accp_identifier", "lines_or_number",
  "opt_at_line_column", "at_line_column", "line_number", "column_number",
  "opt_at_from", "opt_at_block", "opt_accp_attr", "accp_attrs",
  "accp_attr", "end_accept", "add_statement", "@39", "add_body", "add_to",
  "end_add", "allocate_statement", "@40", "allocate_body",
  "allocate_returning", "alter_statement", "@41", "alter_body",
  "alter_entry", "_proceed_to", "call_statement", "@42", "call_body",
  "mnemonic_conv", "call_using", "@43", "call_param_list", "call_param",
  "call_type", "call_returning", "return_give", "null_or_omitted",
  "call_on_exception", "call_not_on_exception", "end_call",
  "cancel_statement", "@44", "cancel_body", "close_statement", "@45",
  "close_body", "close_option", "compute_statement", "@46", "compute_body",
  "end_compute", "commit_statement", "continue_statement",
  "delete_statement", "@47", "delete_body", "delete_file_list",
  "end_delete", "display_statement", "@48", "display_body", "display_list",
  "@49", "display_atom", "display_upon", "display_upon_crt", "crt_under",
  "with_clause", "with_no_adv_clause", "disp_attrs", "disp_attr",
  "end_display", "divide_statement", "@50", "divide_body", "end_divide",
  "entry_statement", "@51", "entry_body", "evaluate_statement", "@52",
  "evaluate_body", "evaluate_subject_list", "evaluate_subject",
  "evaluate_condition_list", "evaluate_case_list", "evaluate_case",
  "evaluate_other", "evaluate_when_list", "evaluate_object_list",
  "evaluate_object", "opt_evaluate_thru_expr", "end_evaluate",
  "exit_statement", "@53", "exit_body", "free_statement", "@54",
  "free_body", "generate_statement", "@55", "generate_body",
  "goto_statement", "@56", "go_body", "goto_depending", "goback_statement",
  "if_statement", "@57", "if_else_statements", "end_if",
  "initialize_statement", "@58", "initialize_body", "initialize_filler",
  "initialize_value", "initialize_replacing", "initialize_replacing_list",
  "initialize_replacing_item", "initialize_category", "initialize_default",
  "initiate_statement", "@59", "initiate_body", "inspect_statement", "@60",
  "inspect_body", "send_identifier", "inspect_list", "inspect_tallying",
  "@61", "inspect_replacing", "inspect_converting", "tallying_list",
  "tallying_item", "replacing_list", "replacing_item", "rep_keyword",
  "replacing_region", "inspect_region", "inspect_before_after",
  "merge_statement", "@62", "move_statement", "@63", "move_body",
  "multiply_statement", "@64", "multiply_body", "end_multiply",
  "open_statement", "@65", "open_body", "open_mode", "open_sharing",
  "open_option", "perform_statement", "@66", "perform_body", "@67",
  "end_perform", "term_or_dot", "perform_procedure", "perform_option",
  "perform_test", "cond_or_exit", "perform_varying_list",
  "perform_varying", "read_statement", "@68", "read_body", "read_into",
  "with_lock", "read_key", "read_handler", "end_read", "ready_statement",
  "release_statement", "@69", "release_body", "reset_statement",
  "return_statement", "@70", "return_body", "end_return",
  "rewrite_statement", "@71", "rewrite_body", "write_lock", "end_rewrite",
  "rollback_statement", "search_statement", "@72", "search_body",
  "search_varying", "search_at_end", "search_whens", "search_when",
  "end_search", "set_statement", "@73", "set_body", "on_or_off",
  "up_or_down", "set_environment", "set_attr", "set_attr_clause",
  "set_attr_one", "set_to", "set_up_down", "set_to_on_off_sequence",
  "set_to_on_off", "set_to_true_false_sequence", "set_to_true_false",
  "sort_statement", "@74", "sort_body", "@75", "sort_key_list",
  "opt_key_list", "sort_duplicates", "sort_collating", "sort_input",
  "sort_output", "start_statement", "@76", "start_body", "sizelen_clause",
  "start_key", "start_op", "disallowed_op", "not_equal_op", "end_start",
  "stop_statement", "@77", "stop_returning", "_opt_status", "stop_literal",
  "string_statement", "@78", "string_body", "string_item_list",
  "string_item", "opt_with_pointer", "end_string", "subtract_statement",
  "@79", "subtract_body", "end_subtract", "suppress_statement",
  "_printing", "terminate_statement", "@80", "terminate_body",
  "transform_statement", "@81", "transform_body", "unlock_statement",
  "@82", "unlock_body", "opt_record", "unstring_statement", "@83",
  "unstring_body", "unstring_delimited", "unstring_delimited_list",
  "unstring_delimited_item", "unstring_into", "unstring_into_item",
  "unstring_into_delimiter", "unstring_into_count", "unstring_tallying",
  "end_unstring", "use_statement", "@84", "use_phrase",
  "use_file_exception", "use_global", "use_file_exception_target",
  "use_debugging", "debugging_list", "debugging_target", "all_refs",
  "use_reporting", "use_exception", "use_ex_keyw", "write_statement",
  "@85", "write_body", "from_option", "write_option", "before_or_after",
  "write_handler", "end_write", "on_accp_exception",
  "opt_on_accp_exception", "opt_not_on_accp_exception",
  "on_disp_exception", "opt_on_disp_exception",
  "opt_not_on_disp_exception", "on_size_error", "opt_on_size_error",
  "opt_not_on_size_error", "on_overflow", "opt_on_overflow",
  "opt_not_on_overflow", "return_at_end", "at_end", "at_end_clause",
  "not_at_end_clause", "at_eop", "at_eop_clause", "not_at_eop_clause",
  "invalid_key", "opt_invalid_key_sentence",
  "opt_not_invalid_key_sentence", "_opt_scroll_lines", "condition", "expr",
  "partial_expr", "@86", "expr_tokens", "expr_token", "eq", "gt", "lt",
  "ge", "le", "exp_list", "e_sep", "exp", "exp_term", "exp_factor",
  "exp_unary", "exp_atom", "line_linage_page_counter", "arithmetic_x_list",
  "arithmetic_x", "record_name", "table_name", "file_name_list",
  "file_name", "report_name", "mnemonic_name_list", "mnemonic_name",
  "procedure_name_list", "procedure_name", "label", "integer_label",
  "reference_list", "reference", "single_reference", "opt_reference_list",
  "opt_reference", "reference_or_literal", "undefined_word", "unique_word",
  "target_x_list", "target_x", "x_list", "x", "report_x_list", "expr_x",
  "arith_x", "prog_or_entry", "alnum_or_id", "simple_value",
  "simple_all_value", "id_or_lit", "id_or_lit_or_func", "num_id_or_lit",
  "positive_id_or_lit", "pos_num_id_or_lit", "from_parameter",
  "sub_identifier", "sort_identifier", "sub_identifier_1", "identifier",
  "identifier_1", "target_identifier", "target_identifier_1",
  "qualified_word", "subref", "refmod", "integer", "symbolic_integer",
  "report_integer", "class_value", "literal", "basic_literal",
  "basic_value", "function", "func_no_parm", "func_one_parm",
  "func_multi_parm", "func_refmod", "func_args", "trim_args",
  "numvalc_args", "locale_dt_args", "not_const_word", "flag_all",
  "flag_duplicates", "flag_initialized", "flag_initialized_to",
  "to_init_val", "flag_next", "flag_not", "flag_optional", "flag_rounded",
  "round_mode", "round_choice", "flag_separate", "error_stmt_recover",
  "_advancing", "_after", "_are", "_area", "_as", "_at", "_binary", "_by",
  "_character", "_characters", "_contains", "_data", "_file", "_for",
  "_from", "_in", "_in_order", "_indicate", "_initial", "_into", "_is",
  "_is_are", "_key", "_left_or_right", "_line_or_lines", "_limits",
  "_lines", "_mode", "_number", "_numbers", "_of", "_on", "_onoff_status",
  "_other", "_procedure", "_program", "_record", "_right", "_sign",
  "_signed", "_sign_is", "_size", "_standard", "_status", "_tape", "_then",
  "_times", "_to", "_to_using", "_when", "_when_set_to", "_with",
  "coll_sequence", "column_or_col", "columns_or_cols", "comp_equal",
  "exception_or_error", "exception_or_overflow", "in_of", "label_option",
  "line_or_lines", "lock_records", "object_char_or_word", "records",
  "reel_or_unit", "scroll_line_or_lines", "size_or_length", "with_dups",
  "prog_coll_sequence", "detail_keyword", "ch_keyword", "cf_keyword",
  "ph_keyword", "pf_keyword", "rh_keyword", "rf_keyword",
  "control_keyword", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   563,   564,
     565,   566,   567,   568,   569,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,   587,   588,   589,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,   607,   608,   609,   610,   611,   612,   613,   614,
     615,   616,   617,   618,   619,   620,   621,   622,   623,   624,
     625,   626,   627,   628,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     645,   646,   647,   648,   649,   650,   651,   652,   653,   654,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
     665,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,   679,   680,   681,   682,   683,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,   701,   702,   703,   704,
     705,   706,   707,   708,   709,   710,   711,   712,   713,   714,
     715,   716,   717,   718,   719,   720,   721,   722,   723,   724,
     725,   726,   727,   728,   729,   730,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,   741,   742,   743,   744,
     745,   746,   747,   748,   749,   750,   751,   752,   753,   754,
     755,   756,   757,   758,   759,   760,   761,   762,   763,   764,
     765,   766
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   512,   514,   513,   515,   515,   516,   516,   517,   517,
     519,   518,   520,   521,   522,   523,   523,   523,   524,   524,
     525,   526,   526,   527,   529,   530,   531,   528,   533,   532,
     534,   535,   535,   536,   536,   537,   537,   538,   538,   538,
     538,   539,   539,   540,   540,   541,   541,   542,   542,   543,
     543,   543,   543,   543,   545,   544,   546,   546,   547,   547,
     549,   548,   550,   550,   550,   550,   551,   551,   552,   552,
     552,   552,   553,   554,   555,   556,   557,   557,   557,   557,
     558,   558,   560,   559,   561,   561,   561,   562,   562,   563,
     563,   563,   564,   564,   565,   565,   566,   566,   567,   568,
     568,   569,   569,   570,   570,   570,   570,   570,   570,   570,
     570,   570,   570,   570,   570,   572,   571,   573,   573,   573,
     573,   574,   574,   575,   575,   577,   576,   578,   578,   578,
     578,   578,   578,   579,   579,   580,   580,   581,   580,   582,
     582,   583,   583,   583,   583,   583,   583,   584,   585,   585,
     586,   587,   587,   588,   589,   589,   590,   590,   591,   592,
     592,   593,   593,   594,   595,   596,   596,   597,   598,   599,
     600,   601,   602,   603,   603,   604,   604,   605,   605,   606,
     606,   608,   607,   607,   609,   609,   610,   610,   610,   610,
     610,   610,   610,   610,   610,   610,   610,   610,   610,   611,
     611,   611,   611,   611,   612,   612,   612,   612,   613,   613,
     614,   614,   614,   615,   615,   616,   616,   616,   617,   618,
     618,   618,   619,   620,   621,   622,   622,   622,   624,   623,
     625,   625,   625,   626,   626,   626,   626,   627,   627,   628,
     628,   628,   628,   629,   630,   631,   632,   632,   632,   633,
     634,   635,   635,   636,   637,   637,   637,   638,   638,   638,
     639,   639,   640,   640,   641,   642,   642,   642,   642,   644,
     643,   645,   645,   646,   647,   647,   648,   648,   649,   649,
     650,   650,   651,   653,   652,   652,   654,   654,   655,   655,
     656,   656,   656,   656,   656,   656,   656,   656,   656,   656,
     656,   657,   658,   658,   658,   659,   659,   659,   660,   660,
     661,   661,   662,   662,   663,   664,   664,   665,   665,   666,
     666,   667,   668,   669,   669,   670,   670,   670,   671,   672,
     673,   674,   675,   676,   677,   677,   678,   678,   679,   680,
     679,   681,   682,   681,   683,   683,   683,   684,   685,   684,
     684,   686,   687,   687,   687,   688,   689,   689,   690,   690,
     690,   690,   691,   691,   691,   691,   691,   691,   691,   691,
     691,   691,   691,   691,   691,   692,   692,   693,   693,   694,
     694,   694,   695,   695,   696,   697,   697,   698,   698,   699,
     699,   699,   699,   699,   699,   699,   699,   699,   699,   699,
     699,   699,   699,   700,   701,   702,   702,   703,   704,   705,
     705,   706,   706,   706,   706,   706,   706,   706,   706,   706,
     706,   706,   706,   706,   706,   706,   706,   706,   706,   706,
     706,   706,   706,   706,   706,   706,   706,   706,   706,   706,
     706,   706,   706,   706,   706,   706,   706,   707,   707,   708,
     708,   709,   709,   710,   711,   711,   712,   713,   713,   714,
     714,   715,   716,   716,   717,   717,   718,   718,   719,   719,
     720,   721,   722,   723,   724,   726,   725,   727,   727,   728,
     728,   729,   729,   730,   730,   731,   731,   732,   733,   732,
     734,   735,   734,   736,   737,   736,   738,   738,   740,   739,
     741,   741,   741,   742,   742,   742,   742,   743,   744,   744,
     744,   745,   746,   746,   747,   748,   749,   749,   749,   750,
     750,   751,   751,   752,   752,   752,   752,   752,   753,   754,
     755,   756,   757,   758,   758,   760,   759,   761,   761,   762,
     762,   762,   762,   762,   762,   762,   762,   762,   762,   762,
     762,   762,   762,   762,   762,   762,   763,   764,   764,   764,
     764,   764,   764,   764,   765,   765,   765,   766,   766,   766,
     767,   768,   768,   768,   768,   769,   769,   769,   769,   770,
     771,   771,   771,   772,   772,   773,   774,   775,   776,   777,
     777,   777,   778,   778,   778,   779,   780,   780,   781,   782,
     782,   783,   783,   783,   784,   785,   786,   787,   788,   787,
     789,   789,   790,   790,   791,   792,   791,   791,   793,   793,
     794,   794,   794,   794,   794,   794,   794,   794,   794,   794,
     794,   794,   794,   794,   794,   794,   794,   794,   794,   794,
     794,   794,   794,   794,   794,   794,   794,   794,   794,   794,
     794,   794,   794,   794,   795,   795,   796,   796,   797,   797,
     797,   798,   798,   798,   799,   800,   801,   802,   803,   801,
     804,   801,   805,   806,   805,   807,   805,   808,   808,   809,
     810,   810,   810,   811,   811,   811,   811,   811,   811,   812,
     812,   813,   813,   814,   815,   814,   816,   816,   817,   817,
     817,   817,   817,   819,   818,   820,   820,   821,   822,   823,
     823,   825,   826,   824,   828,   827,   827,   829,   829,   829,
     829,   829,   829,   829,   829,   829,   829,   829,   829,   829,
     829,   829,   829,   829,   829,   829,   829,   829,   829,   829,
     829,   829,   829,   829,   829,   829,   829,   829,   829,   829,
     829,   829,   829,   829,   829,   829,   829,   829,   829,   829,
     829,   829,   829,   829,   829,   829,   829,   829,   831,   830,
     832,   832,   832,   832,   832,   832,   832,   832,   832,   832,
     832,   832,   832,   832,   832,   832,   832,   832,   832,   833,
     833,   834,   834,   835,   835,   836,   836,   836,   836,   836,
     837,   838,   838,   839,   839,   840,   840,   841,   841,   842,
     842,   843,   843,   843,   843,   843,   843,   843,   843,   843,
     843,   843,   843,   843,   843,   843,   843,   843,   843,   843,
     843,   843,   843,   843,   843,   844,   844,   846,   845,   847,
     847,   847,   848,   848,   849,   849,   851,   850,   852,   852,
     853,   853,   855,   854,   856,   856,   857,   858,   858,   860,
     859,   861,   862,   862,   862,   862,   863,   864,   863,   865,
     865,   866,   866,   867,   867,   867,   867,   868,   868,   868,
     868,   869,   869,   870,   870,   871,   871,   872,   872,   873,
     873,   875,   874,   876,   876,   878,   877,   879,   879,   880,
     880,   880,   880,   880,   882,   881,   883,   884,   884,   885,
     886,   888,   887,   889,   889,   890,   890,   891,   891,   893,
     892,   894,   894,   894,   894,   894,   894,   894,   895,   896,
     895,   897,   898,   898,   898,   898,   898,   899,   899,   900,
     900,   901,   901,   902,   902,   903,   903,   904,   904,   904,
     904,   904,   904,   904,   904,   904,   904,   904,   904,   904,
     904,   904,   904,   905,   905,   907,   906,   908,   908,   908,
     908,   908,   909,   909,   911,   910,   912,   914,   913,   915,
     916,   916,   917,   917,   917,   918,   918,   919,   919,   920,
     921,   922,   922,   923,   923,   924,   924,   924,   924,   925,
     925,   926,   926,   928,   927,   929,   929,   929,   929,   929,
     929,   929,   931,   930,   932,   934,   933,   935,   937,   936,
     938,   939,   939,   940,   942,   941,   943,   943,   943,   944,
     944,   946,   945,   947,   948,   948,   949,   949,   949,   950,
     950,   951,   951,   952,   953,   953,   953,   953,   953,   953,
     953,   954,   954,   956,   955,   957,   957,   959,   958,   960,
     961,   961,   961,   962,   962,   962,   962,   964,   963,   965,
     966,   967,   967,   968,   968,   968,   968,   968,   968,   969,
     969,   970,   970,   971,   971,   971,   971,   971,   972,   973,
     973,   974,   974,   976,   975,   978,   977,   979,   979,   981,
     980,   982,   982,   983,   983,   985,   984,   986,   986,   987,
     987,   987,   987,   988,   988,   989,   989,   989,   989,   991,
     990,   992,   993,   992,   992,   994,   994,   995,   995,   996,
     996,   997,   997,   997,   997,   997,   998,   998,   999,   999,
    1000,  1000,  1001,  1003,  1002,  1004,  1005,  1005,  1006,  1006,
    1006,  1006,  1006,  1006,  1006,  1007,  1007,  1008,  1008,  1009,
    1009,  1010,  1012,  1011,  1013,  1014,  1016,  1015,  1017,  1018,
    1018,  1020,  1019,  1021,  1022,  1022,  1022,  1023,  1023,  1024,
    1026,  1025,  1027,  1027,  1028,  1028,  1029,  1029,  1030,  1030,
    1031,  1032,  1032,  1034,  1033,  1035,  1035,  1035,  1035,  1035,
    1035,  1036,  1036,  1037,  1037,  1038,  1039,  1040,  1040,  1041,
    1041,  1041,  1041,  1041,  1041,  1041,  1041,  1042,  1042,  1043,
    1044,  1044,  1045,  1046,  1046,  1047,  1047,  1049,  1048,  1051,
    1050,  1052,  1052,  1053,  1053,  1054,  1054,  1055,  1055,  1056,
    1056,  1056,  1057,  1057,  1057,  1059,  1058,  1060,  1061,  1061,
    1062,  1062,  1062,  1062,  1063,  1063,  1063,  1063,  1063,  1063,
    1064,  1065,  1065,  1066,  1066,  1068,  1067,  1067,  1069,  1069,
    1069,  1069,  1069,  1070,  1070,  1071,  1071,  1071,  1071,  1073,
    1072,  1074,  1075,  1075,  1076,  1076,  1076,  1077,  1077,  1078,
    1078,  1080,  1079,  1081,  1081,  1081,  1082,  1082,  1083,  1084,
    1084,  1086,  1085,  1087,  1087,  1089,  1088,  1090,  1092,  1091,
    1093,  1094,  1094,  1094,  1096,  1095,  1097,  1098,  1098,  1099,
    1099,  1100,  1101,  1101,  1102,  1103,  1103,  1104,  1104,  1105,
    1105,  1106,  1106,  1108,  1107,  1109,  1109,  1109,  1109,  1110,
    1111,  1111,  1112,  1112,  1112,  1112,  1112,  1113,  1114,  1114,
    1115,  1115,  1115,  1116,  1116,  1116,  1116,  1117,  1118,  1119,
    1119,  1121,  1120,  1122,  1123,  1123,  1124,  1124,  1124,  1124,
    1125,  1125,  1126,  1126,  1127,  1127,  1128,  1129,  1129,  1130,
    1130,  1131,  1132,  1132,  1133,  1133,  1134,  1135,  1135,  1136,
    1136,  1137,  1138,  1138,  1139,  1139,  1140,  1140,  1141,  1141,
    1141,  1142,  1143,  1144,  1144,  1144,  1145,  1146,  1147,  1148,
    1148,  1149,  1149,  1150,  1150,  1151,  1152,  1154,  1153,  1155,
    1155,  1155,  1156,  1156,  1156,  1156,  1156,  1156,  1156,  1156,
    1156,  1156,  1156,  1156,  1156,  1156,  1156,  1156,  1156,  1156,
    1156,  1156,  1156,  1156,  1156,  1156,  1157,  1157,  1158,  1158,
    1159,  1159,  1160,  1161,  1162,  1162,  1163,  1163,  1163,  1164,
    1164,  1164,  1165,  1165,  1165,  1166,  1166,  1167,  1167,  1167,
    1168,  1168,  1169,  1169,  1169,  1169,  1169,  1169,  1170,  1170,
    1171,  1172,  1173,  1174,  1174,  1175,  1176,  1177,  1177,  1178,
    1179,  1179,  1180,  1181,  1181,  1181,  1182,  1183,  1183,  1184,
    1185,  1186,  1186,  1187,  1188,  1188,  1189,  1190,  1191,  1191,
    1192,  1192,  1192,  1193,  1193,  1194,  1194,  1194,  1194,  1194,
    1194,  1194,  1194,  1194,  1194,  1195,  1195,  1196,  1196,  1196,
    1197,  1197,  1197,  1197,  1197,  1197,  1197,  1198,  1198,  1199,
    1199,  1200,  1200,  1201,  1201,  1202,  1202,  1203,  1203,  1203,
    1204,  1204,  1204,  1205,  1205,  1206,  1206,  1207,  1207,  1207,
    1208,  1209,  1210,  1210,  1211,  1212,  1212,  1212,  1212,  1213,
    1213,  1214,  1214,  1214,  1214,  1215,  1215,  1216,  1217,  1217,
    1218,  1219,  1220,  1220,  1221,  1221,  1221,  1221,  1221,  1221,
    1221,  1222,  1222,  1223,  1223,  1224,  1224,  1224,  1224,  1224,
    1224,  1224,  1225,  1225,  1225,  1225,  1225,  1225,  1225,  1225,
    1225,  1225,  1226,  1226,  1227,  1227,  1227,  1228,  1228,  1228,
    1229,  1229,  1229,  1230,  1230,  1230,  1231,  1231,  1231,  1232,
    1232,  1233,  1233,  1234,  1235,  1235,  1236,  1236,  1237,  1237,
    1238,  1238,  1239,  1239,  1240,  1240,  1240,  1241,  1241,  1242,
    1242,  1242,  1243,  1243,  1244,  1244,  1245,  1245,  1245,  1245,
    1245,  1245,  1245,  1245,  1246,  1246,  1247,  1247,  1247,  1247,
    1247,  1247,  1247,  1247,  1247,  1247,  1247,  1247,  1247,  1247,
    1247,  1247,  1247,  1247,  1247,  1247,  1247,  1247,  1247,  1247,
    1247,  1247,  1247,  1247,  1247,  1247,  1247,  1247,  1247,  1247,
    1247,  1247,  1247,  1247,  1247,  1247,  1247,  1247,  1247,  1247,
    1247,  1247,  1247,  1247,  1247,  1247,  1247,  1247,  1247,  1247,
    1247,  1247,  1247,  1247,  1247,  1247,  1247,  1247,  1247,  1247,
    1247,  1247,  1247,  1247,  1247,  1247,  1248,  1248,  1249,  1249,
    1250,  1250,  1251,  1251,  1252,  1252,  1253,  1253,  1254,  1254,
    1255,  1255,  1256,  1256,  1257,  1257,  1258,  1258,  1259,  1259,
    1260,  1260,  1261,  1261,  1262,  1262,  1263,  1263,  1264,  1264,
    1264,  1265,  1265,  1266,  1266,  1267,  1267,  1268,  1268,  1269,
    1269,  1269,  1270,  1270,  1271,  1271,  1271,  1272,  1272,  1272,
    1273,  1273,  1273,  1274,  1274,  1275,  1275,  1276,  1276,  1277,
    1277,  1277,  1278,  1278,  1279,  1279,  1280,  1280,  1280,  1280,
    1281,  1281,  1282,  1282,  1283,  1283,  1284,  1284,  1285,  1285,
    1286,  1286,  1287,  1287,  1288,  1288,  1288,  1289,  1289,  1290,
    1290,  1291,  1291,  1292,  1292,  1293,  1293,  1294,  1294,  1295,
    1295,  1296,  1296,  1296,  1297,  1297,  1298,  1298,  1299,  1299,
    1300,  1300,  1301,  1301,  1302,  1302,  1303,  1303,  1304,  1304,
    1305,  1305,  1306,  1306,  1307,  1307,  1308,  1308,  1309,  1309,
    1310,  1310,  1311,  1311,  1312,  1312,  1313,  1313,  1314,  1314,
    1315,  1315,  1316,  1316,  1316,  1317,  1317,  1318,  1318,  1319,
    1319,  1320,  1320,  1321,  1321,  1322,  1322,  1323,  1323,  1324,
    1324
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     2,     1,     1,
       0,     2,     4,     4,     3,     0,     1,     2,     0,     1,
       3,     0,     1,     3,     0,     0,     0,    20,     0,     7,
       5,     1,     1,     0,     2,     0,     3,     1,     2,     1,
       1,     1,     1,     0,     3,     0,     3,     0,     2,     1,
       1,     1,     1,     1,     0,     4,     0,     3,     0,     3,
       0,     4,     0,     2,     3,     2,     1,     2,     1,     1,
       1,     1,     5,     3,     3,     4,     1,     1,     1,     1,
       1,     2,     0,     4,     0,     2,     3,     1,     2,     3,
       3,     3,     1,     1,     0,     2,     1,     2,     2,     2,
       3,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     3,     2,     3,     3,
       1,     0,     1,     3,     4,     0,     5,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     3,     0,     4,     1,
       3,     1,     1,     1,     1,     1,     1,     2,     0,     2,
       3,     1,     2,     3,     1,     2,     1,     2,     4,     1,
       2,     1,     3,     4,     5,     0,     3,     3,     5,     3,
       4,     3,     3,     0,     3,     0,     2,     0,     2,     0,
       2,     0,     6,     3,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       5,     5,     5,     5,     1,     1,     1,     1,     0,     3,
       0,     1,     1,     1,     1,     0,     1,     1,     4,     1,
       1,     1,     6,     3,     4,     0,     1,     1,     0,     5,
       2,     2,     1,     0,     4,     5,     2,     3,     1,     1,
       3,     1,     2,     4,     4,     4,     1,     3,     4,     4,
       3,     1,     1,     3,     2,     2,     2,     0,     2,     3,
       1,     2,     1,     1,     5,     0,     1,     1,     1,     0,
       6,     1,     2,     2,     0,     2,     0,     3,     0,     3,
       0,     2,     2,     0,     5,     3,     1,     1,     0,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     5,     0,     1,     1,     4,     6,     9,     0,     3,
       0,     2,     0,     2,     3,     5,     5,     1,     1,     1,
       1,     3,     5,     0,     2,     1,     1,     1,     4,     2,
       2,     4,     3,     2,     2,     2,     1,     2,     0,     0,
       5,     0,     0,     2,     2,     3,     2,     1,     0,     4,
       3,     2,     0,     1,     1,     1,     0,     2,     1,     2,
       2,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     5,     2,     2,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     3,     0,     2,     2,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     6,     0,     2,     7,     0,     2,     0,
       3,     1,     0,     5,     1,     1,     0,     3,     1,     2,
       1,     2,     2,     3,     1,     0,     5,     1,     2,     1,
       3,     0,     4,     2,     4,     2,     2,     0,     0,     5,
       0,     0,     5,     0,     0,     5,     0,     2,     0,     6,
       0,     2,     2,     2,     3,     1,     1,     2,     2,     1,
       1,     1,     1,     2,     1,     4,     1,     2,     4,     1,
       1,     0,     2,     1,     1,     1,     1,     1,     3,     4,
       4,     4,     3,     0,     2,     0,     5,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     2,
       2,     1,     1,     1,     0,     1,     1,     0,     1,     1,
       4,     1,     2,     2,     1,     2,     1,     1,     1,     4,
       0,     3,     2,     1,     1,     3,     6,     2,     2,     1,
       2,     2,     0,     2,     1,     1,     2,     3,     2,     3,
       2,     2,     2,     1,     4,     2,     3,     0,     0,     5,
       0,     1,     2,     3,     1,     0,     4,     3,     0,     2,
       2,     2,     1,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     1,     1,     5,
       5,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     1,     1,     1,     1,     0,     1,
       1,     0,     1,     1,     3,     2,     0,     0,     0,     9,
       0,     4,     0,     0,     3,     0,     3,     1,     2,     4,
       0,     2,     2,     0,     3,     3,     4,     4,     3,     0,
       1,     0,     2,     0,     0,     7,     0,     2,     1,     1,
       2,     1,     1,     0,     6,     0,     2,     2,     1,     0,
       1,     0,     0,     3,     0,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     0,     4,
       6,     3,     3,     4,     3,     4,     3,     3,     4,     4,
       3,     4,     3,     4,     5,     3,     4,     3,     3,     1,
       1,     1,     2,     0,     1,     3,     3,     2,     2,     2,
       3,     3,     3,     0,     1,     0,     3,     0,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     3,     3,     3,     0,     1,     0,     4,     4,
       5,     6,     0,     2,     0,     1,     0,     3,     3,     4,
       0,     2,     0,     3,     1,     2,     4,     0,     2,     0,
       4,     6,     0,     1,     1,     1,     0,     0,     3,     1,
       2,     2,     3,     0,     2,     2,     2,     0,     3,     2,
       4,     1,     1,     1,     1,     0,     2,     0,     2,     0,
       1,     0,     3,     1,     2,     0,     3,     2,     3,     0,
       1,     3,     3,     2,     0,     4,     4,     0,     1,     1,
       1,     0,     4,     3,     2,     1,     2,     0,     1,     0,
       4,     3,     3,     3,     3,     4,     2,     4,     1,     0,
       3,     5,     0,     2,     2,     2,     2,     0,     2,     1,
       1,     0,     2,     0,     1,     1,     2,     1,     2,     2,
       1,     1,     2,     2,     1,     1,     1,     1,     1,     3,
       3,     3,     3,     0,     1,     0,     4,     4,     6,     6,
       8,     8,     0,     1,     0,     3,     2,     0,     4,     2,
       1,     3,     1,     1,     1,     2,     1,     1,     2,     2,
       3,     2,     3,     1,     3,     2,     1,     1,     1,     0,
       2,     0,     1,     0,     3,     0,     1,     1,     2,     1,
       1,     1,     0,     3,     1,     0,     3,     1,     0,     3,
       3,     0,     3,     1,     0,     6,     3,     2,     1,     0,
       1,     0,     3,     5,     0,     2,     0,     3,     3,     0,
       2,     1,     2,     4,     1,     1,     1,     1,     1,     1,
       1,     0,     3,     0,     3,     1,     2,     0,     3,     2,
       1,     1,     1,     2,     1,     1,     1,     0,     3,     2,
       5,     1,     2,     2,     2,     1,     1,     1,     2,     1,
       2,     4,     2,     0,     1,     1,     1,     1,     4,     0,
       2,     3,     3,     0,     3,     0,     3,     3,     4,     0,
       4,     4,     6,     0,     1,     0,     3,     4,     5,     1,
       1,     1,     1,     0,     3,     0,     3,     2,     1,     0,
       3,     2,     0,     4,     2,     0,     1,     1,     1,     1,
       3,     0,     2,     1,     3,     3,     0,     3,     1,     1,
       1,     3,     7,     0,     4,     7,     0,     2,     0,     2,
       2,     3,     3,     3,     2,     0,     3,     1,     1,     0,
       1,     1,     0,     3,     2,     1,     0,     4,     4,     0,
       1,     0,     4,     4,     0,     2,     3,     0,     1,     1,
       0,     4,     4,     6,     0,     2,     0,     2,     1,     2,
       3,     0,     1,     0,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     3,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     4,     3,     4,
       1,     2,     3,     1,     2,     3,     3,     0,     3,     0,
       7,     0,     5,     0,     2,     0,     2,     0,     3,     0,
       2,     4,     0,     2,     4,     0,     4,     4,     0,     3,
       0,     4,     1,     1,     1,     2,     2,     2,     2,     1,
       1,     2,     1,     0,     1,     0,     4,     2,     0,     2,
       2,     4,     4,     0,     1,     1,     1,     1,     1,     0,
       4,     5,     1,     2,     1,     3,     3,     0,     4,     0,
       1,     0,     4,     4,     6,     6,     0,     1,     2,     0,
       1,     0,     3,     1,     2,     0,     3,     5,     0,     3,
       2,     0,     1,     1,     0,     4,     6,     0,     3,     1,
       3,     2,     2,     2,     3,     0,     3,     0,     3,     0,
       3,     0,     1,     0,     3,     1,     1,     1,     1,     7,
       0,     1,     1,     1,     1,     1,     1,     4,     1,     2,
       1,     2,     3,     0,     1,     2,     1,     4,     1,     1,
       1,     0,     4,     5,     0,     2,     0,     4,     3,     3,
       1,     1,     1,     1,     0,     1,     2,     0,     2,     0,
       2,     2,     0,     2,     0,     2,     2,     0,     2,     0,
       2,     2,     0,     2,     0,     2,     2,     1,     2,     1,
       1,     2,     2,     2,     1,     1,     2,     2,     2,     0,
       2,     0,     2,     0,     2,     1,     1,     0,     2,     1,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     3,     0,     1,     1,     3,
       3,     1,     3,     3,     1,     3,     1,     2,     2,     1,
       3,     1,     1,     3,     1,     3,     1,     3,     1,     2,
       2,     1,     1,     1,     2,     1,     1,     1,     2,     1,
       0,     2,     1,     1,     1,     3,     1,     1,     2,     1,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     3,     1,     2,     1,     1,     1,     1,     2,
       2,     2,     4,     3,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     3,     2,     2,     1,     1,
       1,     3,     2,     2,     1,     1,     3,     3,     4,     5,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     2,     5,     5,     5,     4,     5,     5,     5,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     4,     5,     0,     3,     2,     1,     3,     3,     1,
       3,     1,     3,     0,     0,     1,     0,     1,     0,     1,
       0,     2,     0,     2,     0,     1,     1,     0,     1,     0,
       1,     2,     0,     2,     0,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       2,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     1,     0,     1,     0,     1,     1,     0,     1,     1,
       0,     2,     2,     0,     1,     0,     1,     0,     1,     0,
       1,     1,     0,     1,     0,     1,     0,     2,     1,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     2,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     1,     0,     1,     0,     3,     0,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     1,     1,     1,     1,     1,     1,
       2,     1,     3,     2,     1,     1,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,    10,     1,     0,     0,     3,     5,     6,     4,
      43,     8,     9,    43,    43,     0,     0,     7,     0,    11,
      45,    15,    21,    32,    31,    33,    33,     0,     0,    47,
      16,    18,    43,     0,    14,    22,     0,     0,    28,    44,
       0,   173,     0,    17,    12,    19,    15,     0,    34,    30,
    1777,    46,     0,     0,     0,  1820,  1777,  1777,  1777,     0,
       0,     0,     0,     0,  1777,     0,     0,  1754,   115,    48,
      49,    50,    53,    51,    52,     0,   101,   103,   104,   105,
     148,   107,   106,   108,   109,   110,   111,   112,   113,   114,
     175,     0,     0,    23,  1778,     0,     0,  1506,   125,  1777,
    1777,  1821,  1777,     0,     0,     0,     0,  1777,  1777,    60,
      82,     0,    54,    98,  1755,     0,  1777,     0,    99,   102,
       0,   147,     0,   179,    20,    13,    29,    37,    40,    42,
      41,  1814,    39,  1777,     0,     0,     0,  1575,   169,  1499,
     167,   172,   174,     0,     0,    62,    84,   171,    56,  1507,
     150,   151,  1779,   154,  1580,  1202,  1201,   116,   120,  1806,
    1777,     0,   100,   149,   176,   177,    38,  1815,    36,     0,
    1588,  1584,  1589,  1587,  1585,  1590,  1586,   158,   159,   161,
     170,   165,  1862,  1863,     0,   163,     0,  1753,     0,     0,
       0,  1777,  1884,    80,    61,  1752,    66,    68,    69,    70,
      71,  1752,     0,  1777,     0,    83,     0,    87,    55,    58,
     152,  1781,  1780,   155,     0,  1806,  1809,  1808,     0,     0,
     117,   121,     0,     0,   257,   180,   131,   130,   145,   141,
     146,   127,   144,   142,   128,   129,   143,   126,   132,   133,
     135,   160,     0,  1849,   164,     0,  1576,   168,  1883,  1777,
       0,     0,    65,    67,    63,    81,  1752,  1777,     0,     0,
      92,    93,    94,     0,     0,    85,    88,     0,     0,  1581,
     153,   156,     0,  1807,   123,   118,   119,   122,   178,     0,
       0,  1650,     0,   269,   265,    24,     0,   260,   262,   263,
     134,   137,     0,   162,     0,     0,  1882,    74,    64,     0,
    1500,    73,    89,     0,    90,    91,    97,    86,    57,     0,
     157,   124,   183,  1651,   181,  1760,   266,   267,   268,  1742,
     276,     0,   258,   261,     0,   136,   166,     0,    77,    79,
      78,    75,    76,    95,    59,   184,  1761,  1833,  1743,  1762,
       0,   278,   259,   138,   139,  1870,  1871,    72,  1816,  1834,
    1756,  1763,     0,     0,     0,   280,     0,  1795,  1816,  1841,
       0,   239,     0,  1777,  1752,  1782,   241,     0,  1851,  1848,
     227,   182,   226,   185,   186,   187,   188,   189,   190,     0,
     191,     0,   192,   238,   193,   194,   195,   196,   197,   198,
    1748,  1777,  1757,     0,  1485,   264,  1483,   277,     0,    25,
     140,  1796,  1777,  1817,  1782,  1842,  1843,   210,  1850,   242,
    1816,  1777,  1777,  1783,  1777,  1777,   251,  1742,   252,     0,
    1777,  1795,  1749,     0,     0,   270,   271,   274,  1484,   279,
     286,   287,   338,   281,   341,     0,     0,  1777,   212,   211,
     208,   241,   237,     0,     0,     0,     0,   250,  1810,  1810,
       0,   253,     0,  1777,   240,   223,   272,     0,   273,     0,
     487,   282,  1633,     0,   283,   220,   221,   219,   218,     0,
     204,   205,   215,   215,     0,   215,   207,   206,   215,     0,
    1505,  1504,   243,   244,   245,   246,   249,  1811,   254,   255,
     256,   224,     0,   275,     0,     0,   490,   343,     0,     0,
     347,     0,   285,   288,  1636,   216,   201,   217,   202,  1760,
     203,   200,   213,   199,   214,  1777,     0,   233,   232,   233,
     229,   339,     0,     0,   493,   346,     0,   344,     0,   353,
     354,   348,     0,   351,  1777,  1881,     0,   222,  1637,   209,
       0,   247,  1497,     0,   231,   230,   341,   488,     0,     0,
     607,   345,   350,   387,   356,  1756,  1777,     0,     0,  1777,
    1756,  1795,  1777,  1740,   284,     0,   289,   292,   293,   294,
     295,   296,   297,   298,   299,   300,     0,     0,  1880,   248,
    1498,     0,   236,   340,   341,   491,     0,     0,    26,  1777,
    1744,     0,     0,     0,  1777,  1740,     0,     0,     0,     0,
       0,  1777,   334,  1741,   335,     0,   333,   336,   290,   291,
       0,   489,   341,   494,     0,   670,     0,   474,   411,  1822,
    1822,  1822,  1822,  1822,  1844,   412,   447,   449,   415,   416,
     417,   418,   419,   420,   443,   441,   442,   444,   445,   450,
     448,   421,  1818,   446,     0,   422,   408,   423,   424,     0,
       0,  1825,   426,   427,   425,  1784,   429,   430,   428,  1777,
    1779,   388,   389,   390,   391,   392,   393,   409,   413,   414,
     394,   395,   396,   397,   398,   399,   400,   401,   402,     0,
       0,  1745,     0,   384,     0,   357,   312,   332,  1872,  1873,
    1503,   321,  1501,  1865,  1864,   314,  1793,  1754,  1766,     0,
    1777,   318,   317,  1777,   337,     0,  1868,  1869,   234,   492,
     496,   608,     0,    27,   714,   485,   486,  1823,   440,   439,
     432,   431,   438,   437,   436,   435,   434,   433,  1845,     0,
    1819,   471,   457,   403,  1568,   483,  1826,  1785,  1786,   472,
       0,     0,   405,   407,  1664,  1664,   386,     0,  1802,  1599,
       0,     0,  1595,  1600,  1598,  1596,  1601,  1597,   385,   358,
    1591,  1593,     0,   302,  1502,  1794,   323,     0,   305,  1767,
    1827,   331,     0,     0,   235,   495,   610,   672,     0,     0,
     473,     0,  1837,     0,  1566,  1567,     0,   410,   475,   477,
     479,     0,   404,  1752,   451,   452,  1592,  1803,     0,     0,
     367,   363,   366,   365,   364,   379,   375,   377,   378,   380,
     376,   381,   382,   383,   360,   371,   372,   373,   368,   369,
     370,   362,   359,     0,   313,   304,   303,   301,   322,  1754,
    1828,   310,   319,   316,   320,   315,     0,   497,     0,   614,
     609,   611,     0,   675,   673,   691,     0,   768,   837,   846,
     852,   859,   891,   895,   909,   904,   910,   911,   919,   965,
     974,   977,  1003,  1012,  1015,  1018,  1023,  1024,  1031,  1053,
    1057,  1093,  1095,  1099,     0,  1105,  1119,  1143,  1161,  1162,
    1165,  1166,  1171,  1179,  1180,  1193,  1227,  1245,     0,  1279,
    1291,  1299,  1301,   696,  1305,  1308,  1314,  1361,   716,   717,
     718,   719,   720,   721,   722,   723,   725,   724,   726,   727,
     728,   729,   730,   731,   732,   733,   734,   735,   736,   737,
     738,   739,   740,   741,   742,   743,   744,   745,   746,   747,
     748,   749,   750,   751,   752,   753,   754,   755,   756,   757,
     758,   759,   760,   761,   762,   763,   764,   765,   715,   458,
    1838,   459,  1617,  1612,  1623,     0,  1472,  1474,     0,     0,
       0,  1615,     0,  1476,  1616,  1618,  1619,     0,     0,     0,
       0,  1614,  1623,  1613,  1456,  1454,  1461,  1464,  1466,  1469,
    1533,  1471,  1530,  1564,  1531,  1532,  1620,     0,     0,     0,
    1565,   484,   481,   478,     0,   406,  1665,   361,   374,  1594,
       0,     0,   324,   325,   326,   327,     0,   306,  1765,   312,
       0,  1486,   498,     0,   615,     0,   612,   680,   680,     0,
       0,  1667,  1668,  1669,  1670,  1671,  1672,  1673,  1674,  1675,
    1676,  1677,  1678,  1679,  1680,  1716,  1717,  1718,  1719,  1720,
    1721,  1722,  1723,  1724,  1725,  1726,  1727,  1728,  1729,  1730,
    1731,  1732,  1733,  1734,  1735,  1681,  1682,  1683,  1684,  1685,
    1686,  1687,  1688,  1689,  1690,  1691,  1692,  1693,  1694,  1695,
    1696,  1697,  1698,  1699,  1700,  1701,  1702,  1703,  1704,  1705,
    1706,  1707,  1708,  1709,  1710,  1711,  1666,  1712,  1713,  1714,
    1715,   767,     0,     0,     0,     0,   862,     0,     0,     0,
       0,     0,     0,     0,  1417,  1005,     0,     0,  1839,  1417,
       0,     0,     0,     0,     0,     0,   766,     0,  1131,     0,
       0,     0,     0,     0,     0,     0,     0,  1275,  1278,  1265,
    1276,  1277,  1267,     0,     0,  1300,  1298,     0,   714,     0,
       0,     0,     0,  1804,   462,     0,  1610,  1534,  1535,  1536,
       0,     0,     0,     0,     0,     0,     0,  1468,     0,  1467,
       0,  1611,  1457,  1458,  1577,     0,     0,     0,     0,     0,
       0,     0,     0,  1602,     0,     0,     0,     0,   476,     0,
     480,   330,   329,  1746,  1754,   311,     0,   617,   618,   613,
    1751,   680,   677,   683,     0,   680,   692,   667,   790,   835,
     793,   789,  1802,     0,     0,  1524,   844,  1518,   842,  1513,
    1515,  1516,  1517,   847,     0,  1638,  1496,   853,   854,     0,
    1492,  1494,  1493,   865,   863,   864,   889,     0,  1546,   892,
     893,  1545,   896,   899,  1802,   907,  1570,     0,  1478,  1652,
    1510,  1569,  1574,  1511,     0,   917,  1816,  1595,   963,  1382,
     928,   932,  1513,     0,  1515,   972,     0,   866,   975,   984,
     983,  1001,     0,   980,   982,  1416,     0,  1007,  1011,  1009,
    1006,  1010,  1004,  1013,  1014,  1508,  1016,  1017,  1840,  1019,
    1490,  1835,  1415,  1032,  1034,  1054,  1055,  1058,     0,  1060,
    1061,  1062,  1094,  1231,  1561,  1562,     0,  1096,     0,  1103,
       0,  1112,  1109,  1111,  1110,  1106,  1113,  1133,  1496,  1120,
    1131,  1122,     0,  1129,     0,  1547,  1493,  1549,     0,  1159,
    1644,  1163,  1364,  1481,  1169,  1816,  1177,  1364,     0,  1191,
    1184,  1482,     0,  1489,  1194,  1195,  1196,  1197,  1198,  1199,
    1220,  1200,  1223,     0,  1487,     0,     0,  1560,  1574,  1228,
    1263,  1250,  1268,  1750,  1289,     0,  1282,  1284,     0,  1296,
       0,  1302,  1303,   702,   708,   697,   698,   699,   701,     0,
    1306,     0,  1309,  1311,  1331,  1317,  1374,  1364,  1805,     0,
     466,   461,  1625,  1456,  1454,  1473,  1475,  1456,     0,     0,
       0,  1456,  1527,  1528,  1529,     0,  1477,  1470,  1456,     0,
    1455,  1578,     0,  1460,  1459,  1463,  1462,  1465,     0,     0,
    1456,     0,  1777,  1747,     0,   308,     0,  1777,  1824,   678,
    1777,     0,   689,   681,   682,   693,   836,   769,  1747,   803,
     794,     0,     0,     0,     0,  1519,  1520,  1521,   845,   838,
       0,     0,  1514,  1640,  1639,   850,   855,   857,     0,   890,
     860,  1548,   866,   894,   899,  1874,  1875,   897,     0,   900,
       0,   908,   905,  1857,  1856,  1479,     0,  1654,  1480,  1572,
    1573,   914,   915,   918,   912,  1409,   964,   920,   711,     0,
     926,  1384,     0,   943,     0,   937,  1382,  1382,  1382,  1382,
     973,   966,     0,     0,   867,   976,  1002,   978,  1417,  1417,
     979,   986,   987,   711,  1441,  1442,  1443,  1437,  1839,  1429,
    1449,  1452,  1451,  1453,  1445,  1436,  1435,  1440,  1439,  1438,
    1444,  1424,  1428,  1446,  1448,  1450,  1426,  1427,  1423,  1425,
    1418,  1419,  1430,  1431,  1432,  1433,  1434,  1422,  1008,  1509,
    1021,  1836,   711,  1036,     0,  1056,     0,  1083,  1067,  1059,
    1064,  1065,  1066,  1235,     0,  1563,     0,     0,  1104,  1100,
       0,  1113,  1848,     0,  1121,  1127,  1128,   711,  1124,  1417,
       0,     0,  1132,     0,  1160,  1144,  1645,  1646,  1816,     0,
    1164,  1170,  1167,  1146,  1178,  1172,  1174,  1186,  1192,  1181,
       0,  1186,     0,  1541,  1542,  1221,  1224,     0,     0,  1488,
    1204,     0,  1203,     0,     0,  1572,  1264,  1246,  1252,  1777,
    1253,  1248,     0,     0,  1266,     0,     0,  1290,  1280,     0,
    1283,     0,  1297,  1292,     0,  1304,   709,   707,   700,     0,
    1312,  1313,  1310,  1332,  1315,  1750,     0,  1375,  1362,  1366,
     460,  1750,   456,   464,   465,  1782,  1624,     0,  1620,  1620,
    1620,     0,  1606,     0,  1620,  1579,     0,  1620,  1620,  1847,
       0,   328,  1804,   307,   502,  1777,  1777,  1740,  1790,   533,
     501,   505,   506,     0,     0,   632,  1777,   622,  1844,   623,
    1853,  1852,     0,  1777,     0,   635,   626,   631,  1797,   627,
       0,   630,   637,   634,   628,   633,     0,   638,   629,     0,
     649,   643,   647,   646,   644,   648,   619,   650,   645,     0,
    1797,     0,  1777,   690,     0,     0,   668,   799,   804,   805,
    1797,  1797,   797,   798,  1797,   785,  1377,  1855,  1854,   782,
     774,   776,   777,     0,  1377,     0,     0,     0,   791,   780,
       0,   788,   771,   787,   772,  1538,  1537,     0,  1523,     0,
    1802,  1570,  1387,   843,  1574,  1511,     0,  1642,   850,     0,
     848,     0,     0,  1495,   877,   898,   903,     0,     0,  1512,
    1387,  1777,  1653,  1571,   916,   711,   913,  1411,  1383,   712,
     930,  1746,   711,  1381,   936,   935,   934,   933,   944,  1382,
    1777,   947,     0,   950,   951,     0,  1777,   954,   955,   956,
     957,     0,   958,  1382,   945,     0,   805,   923,   924,   921,
     922,     0,  1387,     0,   873,   981,   996,   998,   997,   991,
     993,   999,  1417,   988,   985,  1417,   989,  1447,  1420,  1421,
    1804,  1020,  1491,   711,  1028,  1029,  1839,  1044,  1045,  1047,
    1049,  1050,  1046,  1048,  1039,  1839,  1035,     0,  1084,     0,
    1086,  1085,  1087,  1069,  1079,     0,     0,  1063,  1237,     0,
    1768,     0,  1097,  1387,     0,     0,     0,  1115,  1125,  1138,
    1134,  1139,  1135,  1140,     0,  1130,  1371,  1370,  1137,  1146,
    1365,  1557,  1558,  1559,     0,     0,  1409,     0,   711,     0,
    1185,     0,     0,     0,  1222,     0,  1226,  1225,  1218,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1206,  1207,
    1647,  1409,     0,  1270,  1269,  1831,  1831,  1285,  1286,  1287,
       0,  1387,     0,     0,   710,     0,  1634,     0,  1287,  1174,
    1736,     0,  1777,  1632,  1607,  1608,  1609,  1630,  1627,  1628,
    1605,  1621,     0,  1603,  1604,   482,     0,     0,  1899,  1900,
    1777,  1740,     0,   499,   503,   511,   507,   509,   510,   512,
     514,     0,   620,   621,   624,   625,     0,   652,  1798,  1777,
    1837,  1777,   653,   651,   665,  1777,   684,   685,   688,     0,
     679,   694,   696,  1777,   807,     0,     0,   795,   796,     0,
     711,   786,  1379,   773,   775,  1377,   783,   778,   779,   792,
     781,  1540,  1522,  1539,  1652,     0,   711,   839,  1389,  1572,
    1573,  1387,     0,  1641,   849,   851,   858,   856,   882,   881,
     885,  1775,   902,   901,   906,     0,  1410,   711,  1408,   714,
    1385,   925,     0,   948,   949,   952,   953,     0,  1413,  1413,
     946,   927,   939,   940,   938,   941,     0,   967,     0,   868,
     869,   683,     0,  1417,  1417,   995,   711,   992,     0,  1027,
     711,  1030,  1025,     0,     0,  1051,     0,     0,     0,  1080,
    1082,     0,  1075,  1089,  1076,  1077,  1068,  1071,  1089,  1229,
    1777,  1782,     0,  1769,  1236,  1098,  1101,     0,  1115,  1114,
    1118,  1107,     0,  1126,  1123,     0,     0,  1148,  1147,   711,
    1168,  1397,  1173,  1175,     0,  1187,  1417,  1417,  1182,  1188,
    1205,  1217,  1219,  1209,  1210,  1211,  1215,  1212,  1216,  1213,
    1214,  1208,  1648,  1262,     0,  1259,  1260,  1254,     0,  1247,
    1879,  1878,     0,  1832,  1273,  1273,  1392,     0,  1652,  1293,
       0,   703,     0,  1635,  1318,  1319,     0,  1322,  1325,  1329,
    1323,  1409,  1737,     0,   470,   467,   468,     0,  1622,   309,
     504,  1791,  1792,  1582,  1583,   521,   516,   520,   519,   352,
     534,   508,   513,  1552,   642,  1550,  1551,   641,   658,   664,
       0,   661,   686,   687,   696,   714,     0,     0,  1377,   800,
     802,   801,  1378,   711,  1376,   784,  1387,  1512,  1388,   711,
    1386,  1571,   840,  1643,  1543,  1544,  1860,  1861,   887,   711,
    1802,  1776,   884,   883,   879,     0,  1656,  1657,  1658,  1659,
    1660,  1661,  1662,  1663,  1655,  1412,     0,   960,   959,   962,
       0,  1555,  1556,   961,     0,   931,  1387,  1478,  1387,  1478,
     870,   871,     0,   875,   874,   876,   994,  1000,   990,  1022,
    1026,  1037,  1040,  1041,  1758,  1033,  1839,  1038,  1089,  1089,
       0,  1074,  1072,  1073,  1078,  1239,     0,  1233,  1770,  1387,
    1108,  1117,     0,  1141,     0,     0,  1155,     0,  1401,   711,
    1396,  1176,   711,   711,  1189,  1261,  1251,  1255,  1256,  1257,
    1258,  1249,  1271,  1274,  1272,   711,  1281,  1394,  1777,  1387,
    1387,   705,  1307,  1634,  1321,  1766,  1327,  1766,  1392,   711,
     711,  1363,  1373,  1404,  1405,  1372,  1369,  1368,  1787,   469,
     463,   515,  1866,  1867,   517,   354,   535,   656,   654,   657,
     655,   659,   660,     0,   636,   662,   663,     0,   714,   806,
     811,  1777,   812,   813,   814,  1777,   815,   816,   817,   818,
     819,   820,   821,   823,   824,   825,     0,   826,  1738,   827,
     828,   829,   808,   809,   770,  1380,   841,  1390,   711,   861,
     886,     0,   878,  1876,  1877,  1414,   942,   969,     0,   968,
       0,   872,  1042,  1759,     0,     0,  1070,  1081,  1089,  1773,
    1773,  1090,     0,     0,  1242,  1238,  1232,  1102,  1116,     0,
    1149,  1777,  1409,     0,     0,  1150,     0,  1154,  1402,  1183,
    1190,  1393,   711,  1391,     0,  1295,  1294,  1333,   704,     0,
    1320,     0,  1766,  1324,     0,  1316,  1406,  1407,  1403,  1788,
    1789,  1367,     0,  1777,  1777,     0,   522,   523,   524,   525,
     526,   527,     0,   537,   639,   640,     0,     0,     0,  1777,
    1413,  1413,  1739,     0,   810,   888,   880,  1387,  1387,     0,
    1052,  1088,  1774,     0,     0,  1777,  1240,     0,     0,  1230,
    1234,     0,     0,  1145,  1158,  1399,  1400,  1157,  1153,  1151,
    1152,  1395,  1288,  1340,   706,  1326,     0,  1330,  1886,  1885,
    1777,     0,     0,  1888,     0,  1777,  1777,   518,  1824,     0,
     831,   830,     0,   833,   832,   834,  1553,  1554,   971,   970,
    1043,  1092,  1091,     0,  1243,  1777,  1417,  1156,  1398,  1360,
    1359,  1341,  1334,  1335,  1738,  1336,  1337,  1338,  1358,     0,
    1328,     0,   532,   528,  1887,     0,     0,  1771,   592,     0,
       0,     0,     0,  1777,  1802,   536,  1777,  1777,     0,   543,
     545,   554,   546,   548,   551,   538,   539,   540,   550,   552,
     555,   541,     0,   542,   547,     0,   549,   553,   544,  1799,
    1740,   695,   822,  1241,     0,  1142,     0,  1829,  1804,   529,
     531,   530,  1772,   605,   594,   588,  1777,   596,   457,     0,
    1417,     0,     0,     0,     0,     0,     0,     0,   587,   589,
     595,     0,     0,   598,   603,  1800,  1801,  1779,   600,  1244,
       0,  1830,     0,     0,   593,     0,  1837,   597,   585,  1652,
     580,  1525,  1890,     0,     0,  1892,  1894,     0,  1898,  1896,
     556,   561,   564,   567,   558,   562,   557,   563,   606,     0,
     590,   591,   601,   602,   599,  1357,  1859,  1858,  1812,  1353,
    1347,  1348,  1350,   578,   576,   577,     0,     0,   570,   574,
     571,   459,   604,  1804,     0,   579,  1526,  1889,  1893,  1891,
    1897,  1895,   566,   559,   565,   569,   560,   568,     0,  1813,
    1804,  1356,  1351,  1354,     0,  1349,   575,   572,   573,   454,
       0,   582,     0,     0,  1355,  1352,     0,   453,   584,   581,
     583,   586,  1346,  1343,  1345,  1344,  1339,  1342,   455
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     6,     7,     8,     9,    10,    11,    30,
      12,    31,    44,    45,    34,    35,    19,   320,   432,   615,
      32,    50,    14,    25,    37,    95,   131,   132,    20,    29,
      41,    69,    70,   148,   208,   267,    71,   145,   194,   195,
     196,   197,   198,   199,   200,   331,   201,    72,   146,   205,
     206,   207,   262,   304,   263,    73,    74,    75,    76,    77,
     116,   157,   276,   158,    78,   133,   237,   238,   239,   324,
     343,   240,    79,   121,    80,   150,   151,   152,   270,    81,
     177,   178,    82,    83,   244,    84,    85,    86,    87,    88,
      89,    90,   123,   224,   165,   225,   335,   348,   373,   374,
     478,   479,   440,   513,   506,   375,   468,   376,   377,   378,
     379,   380,   381,   520,   544,   382,   383,   384,   385,   386,
     484,   387,   388,   417,   389,   451,   285,   286,   287,   288,
     319,   289,   315,   425,   426,   458,   341,   355,   399,   433,
     434,   503,   435,   534,   566,   567,   827,   568,  1663,  1009,
     763,   569,   570,   703,   833,   571,   572,   828,  1002,  1003,
    1004,  1005,   573,   574,   575,   576,   606,   460,   546,   461,
     462,   497,   498,   553,   499,   531,   532,   590,   758,   814,
     815,   816,   817,   818,   500,   683,   589,   661,   662,   663,
     792,   664,   665,   666,   667,   668,   669,   670,  2551,  2697,
     671,   782,  1144,  1380,  1381,  1645,  1642,  2155,  2156,   672,
     673,   674,   675,   676,   992,   788,   789,  1178,   677,   678,
     496,   584,   524,   612,   550,   710,   775,   837,  1186,  1417,
    1670,  1671,  1956,  1957,  1958,  1959,  1672,  2165,  2166,  2321,
    2436,  2437,  2438,  2439,  2440,  2441,  1953,  2170,  2443,  2498,
    2555,  2556,  2630,  2673,  2676,  2557,  2658,  2659,  2558,  2665,
    2699,  2559,  2560,  2561,  2562,  2598,  2585,  2599,  2563,  2564,
    2565,  2603,  2566,  2567,  2568,   588,   776,   840,   841,   842,
    1188,  1418,  1706,  2331,  2332,  2333,  2337,  1707,  1708,   713,
    1425,  1982,   714,   845,  1018,  1017,  1191,  1192,  1193,  1422,
    1714,  1020,  1716,  2184,  1138,  1365,  1366,  2301,  2418,  1367,
    1368,  1923,  1778,  1779,  2029,  1369,   779,   898,   899,  1092,
    1199,  1200,  1742,  1429,  1485,  1722,  1723,  1719,  1984,  2188,
    2362,  2363,  1427,   900,  1093,  1206,  1441,  1439,   901,  1094,
    1213,  1760,   902,  1095,  1217,  1218,  1762,   903,  1096,  1226,
    1227,  1495,  1814,  2049,  2050,  2051,  2020,  2021,  2214,  2208,
    2369,  1450,   904,  1097,  1229,   905,  1098,  1232,  1457,   906,
    1099,  1235,  1462,   907,   908,   909,  1100,  1245,  1471,  1474,
     910,  1101,  1248,  1249,  1479,  1250,  1483,  1806,  2044,  2235,
    1789,  1803,  1804,  1477,   911,  1102,  1255,  1491,   912,  1103,
    1258,   913,  1104,  1261,  1262,  1263,  1500,  1501,  1502,  1824,
    1503,  1819,  1820,  2055,  1497,   914,  1105,  1272,   915,  1106,
    1273,   916,  1107,  1276,   917,  1108,  1279,  1831,   918,   919,
    1109,  1835,  2062,   920,  1110,  1283,  1543,  1844,  2065,  2252,
    2253,  2254,  2255,   921,  1111,  1285,   922,  1112,  1287,  1288,
    1549,  1550,  1856,  1551,  1552,  2076,  2077,  1853,  1854,  1855,
    2070,  2261,  2391,   923,  1113,   924,  1114,  1297,   925,  1115,
    1299,  1559,   926,  1117,  1305,  1306,  1563,  2091,   927,  1118,
    1309,  1567,  2094,  1568,  1310,  1311,  1312,  1870,  1872,  1873,
     928,  1119,  1319,  1885,  2276,  2402,  2473,  1575,   929,   930,
    1120,  1321,   931,   932,  1121,  1324,  1582,   933,  1122,  1326,
    1886,  1585,   934,   935,  1123,  1329,  1591,  1889,  2108,  2109,
    1589,   936,  1124,  1334,   159,  1603,  1335,  1336,  1908,  1909,
    1337,  1338,  1339,  1340,  1341,  1342,   937,  1125,  1292,  2265,
    1553,  2396,  1858,  2079,  2394,  2469,   938,  1126,  1350,  1911,
    1611,  2124,  2125,  2126,  1607,   939,  1352,  1614,  2292,  1132,
     940,  1133,  1354,  1355,  1356,  2136,  1618,   941,  1134,  1359,
    1623,   942,  1136,   943,  1137,  1361,   944,  1139,  1370,   945,
    1140,  1372,  1632,   946,  1141,  1374,  1636,  2144,  2145,  1928,
    2147,  2306,  2423,  2308,  1634,  2419,  2483,  2522,  2523,  2524,
    2706,  2525,  2650,  2651,  2684,  2526,  2527,  2528,   947,  1142,
    1376,  1580,  1929,  1878,  2311,  1638,  1991,  1992,  2194,  1480,
    1481,  1783,  2007,  2008,  2200,  2296,  2297,  2413,  2100,  2474,
    2101,  2280,  2312,  2313,  2314,  1776,  1777,  2028,  2229,  1281,
    1282,  1265,  1266,  1530,  1531,  1532,  1533,  1534,  1535,  1536,
     974,  1165,  1384,   976,   977,   978,   979,  1236,  1237,  1465,
    1322,  1330,   395,   396,  1012,  1343,  1344,  1540,  1313,  1220,
    1221,   541,   481,   301,   691,   692,   482,    98,   153,  1274,
    1239,  1208,  1442,  2620,  1391,   981,  1747,  2002,  2078,  2203,
    1230,  1314,  2174,  2505,  2230,  1880,  2175,  1293,  1347,  1210,
     983,  1240,  1241,   734,   784,   785,  2176,   271,  2168,   179,
    1211,   760,   761,  1212,   986,   987,   988,  1173,  1146,  1399,
    1395,  1388,   501,  2146,   537,  1445,  1758,  2013,  1578,  2128,
     282,  1468,  1772,  2224,   794,  1091,  2153,  2453,   604,   339,
     684,  1431,   423,  1194,   202,   115,   393,  2384,   337,   352,
    1010,   770,  2084,  2583,  2463,  2215,    96,   214,   414,   739,
    2431,  1952,   766,   402,  1969,  2607,   798,  1379,   218,   488,
    2680,   168,   390,   731,   102,   719,   680,   831,  2612,  2134,
     350,  1542,   951,  1280,   407,   729,  1179,  1318,   391,  1724,
    1744,  1466,  2648,  2209,   184,   695,  2324,   708,   347,   596,
    1459,  2375,  2132,   538,   203,  2490,  2496,  2633,  2634,  2635,
    2636,  2637,  1674
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2221
static const yytype_int16 yypact[] =
{
   -2221,   264,   547, -2221,   224,   266, -2221,   547, -2221, -2221,
     639, -2221, -2221,   639,   639,   -61,   -61, -2221,   779, -2221,
     860,   611,   821, -2221, -2221,  1021,  1021,   599,   801, -2221,
   -2221,   142,   639,   -61, -2221, -2221,   993,   764, -2221, -2221,
     804,  1573,   -61, -2221, -2221, -2221,   611,   871, -2221, -2221,
    -118, -2221,   869,   869,  1025,  1040,  1232,  1232,  1232,  1097,
     869,  1072,  1052,  1055,  1232,  1063,  1088,  1471, -2221, -2221,
   -2221, -2221, -2221, -2221, -2221,   528, -2221, -2221, -2221, -2221,
    1332, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,
    1398,  1148,   142, -2221, -2221,  1152,    49, -2221, -2221,  1232,
    1232, -2221,  1232,  1081,  1543,  1081,  1172,  1232,  1232, -2221,
   -2221,  1081, -2221, -2221, -2221,  1120,   941,  1181, -2221, -2221,
    1163, -2221,  1187, -2221, -2221, -2221, -2221,  -153, -2221, -2221,
   -2221,  1307, -2221,  1232,  1022,  1081,  1424,   -46, -2221, -2221,
   -2221, -2221, -2221,  1428,  1220,   211,  1490, -2221,  1188, -2221,
    1120, -2221,    53, -2221, -2221, -2221, -2221, -2221,  1265,   348,
    1232,    50, -2221, -2221, -2221,   450, -2221, -2221, -2221,   684,
   -2221, -2221, -2221, -2221, -2221, -2221, -2221,  1022, -2221,  1251,
   -2221,   346, -2221, -2221,  1081, -2221,  1291, -2221,  1294,  1288,
    1642,  1232, -2221, -2221, -2221,   399, -2221, -2221, -2221, -2221,
   -2221,   369,  1647,  1232,    96, -2221,    73, -2221, -2221,    12,
   -2221, -2221, -2221, -2221,  1454,   348, -2221,  1480,   869,   869,
   -2221,  1265,  1262,    84,   771, -2221, -2221, -2221, -2221, -2221,
   -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,   876, -2221,
     152, -2221,  1022, -2221, -2221,  1395, -2221, -2221, -2221,  1232,
    1325,  1475, -2221, -2221, -2221, -2221,   411,  1232,  1223,  1507,
     586, -2221,  1712,   654,  1289, -2221, -2221,  1290,  1636, -2221,
    1454, -2221,   869, -2221, -2221, -2221, -2221,  1265, -2221,  1296,
    1438, -2221,   869, -2221,   959, -2221,   148, -2221, -2221, -2221,
   -2221, -2221,   876, -2221,  1493,  1475, -2221, -2221, -2221,   786,
   -2221, -2221, -2221,  1495, -2221, -2221, -2221, -2221, -2221,  1483,
   -2221, -2221, -2221, -2221, -2221,  1302, -2221, -2221, -2221,  1755,
    1677,  1333, -2221, -2221,   876, -2221, -2221,    37, -2221, -2221,
   -2221, -2221, -2221, -2221, -2221, -2221, -2221,  1346, -2221,  1599,
    1667,  1336, -2221,  1776, -2221, -2221, -2221, -2221,  1150, -2221,
    1715, -2221,  1301,  1347,  1413, -2221,   876,  1538,  1462,   438,
    1415, -2221,  1412,  1232,  1761,    95,   -32,  1018, -2221,  1316,
   -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,  1397,
   -2221,  1559, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,
    1783,  1232, -2221,  1301, -2221,  1301, -2221, -2221,  1372,   257,
   -2221, -2221,  1232, -2221,  1587, -2221, -2221,  1086, -2221, -2221,
     935,  1232,  1232, -2221,  1232,  1232, -2221,  1755, -2221,   431,
    1232,  1538, -2221,  1425,  1322,  1301, -2221,  1497, -2221, -2221,
   -2221, -2221,  1326, -2221,  1330,    63,   104,  1232, -2221, -2221,
     966, -2221, -2221,  -102,  1416,  1081,  1081, -2221,  1520,  1520,
    1527, -2221,  1081,  1232, -2221, -2221, -2221,  1475, -2221,  1444,
    1578, -2221, -2221,  1389, -2221, -2221, -2221, -2221, -2221,  1081,
   -2221, -2221,   -68,   -68,  1834,   -68, -2221, -2221,   -68,   -45,
   -2221, -2221, -2221, -2221, -2221,  -181, -2221, -2221, -2221, -2221,
   -2221, -2221,   627, -2221,  1391,  1450,  1591,   470,  1402,  6181,
   -2221,  1345, -2221, -2221,   -11, -2221, -2221, -2221, -2221,  1302,
   -2221, -2221, -2221, -2221, -2221,  1232,  1081,  1348, -2221,  1348,
   -2221, -2221,  1405,  1458,  1491, -2221,  1408, -2221,  1409, -2221,
    1777, -2221,  1780, -2221,  1378, -2221,  1743, -2221, -2221, -2221,
    1081,  1081, -2221,   616, -2221, -2221,  1330, -2221,  1419,  1477,
    1484, -2221, -2221, -2221,  1102,  1715,  1232,  1249,  1249,  1232,
      14,  1538,  1232,  1850, -2221,  1569, -2221, -2221, -2221, -2221,
   -2221, -2221, -2221, -2221, -2221, -2221,   869,    59, -2221,  1081,
   -2221,  1572, -2221, -2221,  1330, -2221,  1427,  1496, -2221,  6489,
     603,  1680,  1475,  1383,  1232,  1850,  1385,   448,  -102,  1475,
    1393,  1232, -2221, -2221, -2221,   -63,   869, -2221, -2221, -2221,
     807, -2221,  1330, -2221,  1443,   690,    21, -2221, -2221,  -199,
     437,   593,   691,   730,  1390, -2221, -2221, -2221, -2221, -2221,
   -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,
   -2221, -2221,  1512, -2221,  1475, -2221, -2221, -2221, -2221,  1081,
    1081,  1665, -2221, -2221, -2221,   434, -2221, -2221, -2221,  1232,
     135, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,
   -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,  1075,
     182, -2221,  1396, -2221,   498, -2221,  1455, -2221, -2221, -2221,
   -2221,  1385, -2221, -2221, -2221, -2221,  1648,    44,  1685,  1403,
    1232, -2221, -2221,  1232, -2221,  1263, -2221, -2221, -2221, -2221,
   -2221, -2221,  1784, -2221, -2221, -2221, -2221, -2221, -2221, -2221,
   -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,  1404,
   -2221, -2221,  1459, -2221,  1448,  1473, -2221, -2221, -2221, -2221,
    6656,    71,  1887, -2221,  1516,  1516, -2221,  1197,  1611, -2221,
     134,   134, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,
    1472, -2221,  1475,    91, -2221, -2221, -2221,  1475, -2221, -2221,
    1508, -2221,    10,    10, -2221,  1574,  1420,    47,  3347,  3807,
   -2221,  1475,  1478,  7171,  1463, -2221,  1081, -2221,    71, -2221,
    1485,  1664, -2221,  1761, -2221, -2221, -2221, -2221,   134,  1481,
   -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,
   -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,
   -2221, -2221, -2221,  1197, -2221, -2221, -2221, -2221,    68,  1471,
   -2221,   451, -2221, -2221, -2221, -2221,  1422, -2221,  5999, -2221,
   -2221,  1420,  1482, -2221, -2221,  1555,  4191, -2221, -2221, -2221,
   -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,
   -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,
   -2221, -2221, -2221, -2221,  1542, -2221, -2221, -2221, -2221, -2221,
   -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,   746, -2221,
   -2221,  1601, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,
   -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,
   -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,
   -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,
   -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,
   -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,
   -2221,  1830, -2221, -2221,  1486,  7286,   -46,   -46,  1487,  1492,
    1494, -2221,  1500,   -46, -2221, -2221, -2221,  7322,  7171,  7322,
    1502, -2221,  1486, -2221,   210,   942,  1046, -2221,  1778, -2221,
   -2221, -2221, -2221, -2221,  1472, -2221,  1506,  1510,  1511,  7171,
   -2221, -2221,   510, -2221,    71, -2221, -2221, -2221, -2221, -2221,
    -102,  -102, -2221, -2221, -2221, -2221,  1763, -2221, -2221,  1455,
    1475, -2221, -2221,  1501, -2221,  1504, -2221,    43,    43,  1453,
    1518, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,
   -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,
   -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,
   -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,
   -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,
   -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,
   -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,
   -2221, -2221,   323,   722,  7171,   129,   806,   331,  1301,  1042,
     633,  5397,  5517,  1702,  1077,   929,  1042,  1081,  1524, -2221,
    1042,  1422,  2024,  1081,  4105,  5517, -2221,  1039,  2438,  1301,
    1081,  1301,  1081,    62,   479,  1081,  1301, -2221, -2221, -2221,
   -2221, -2221, -2221,  4728,  4812, -2221, -2221,  1422,    89,  1081,
    1301,  1081,  1081,  1666, -2221,  6794, -2221, -2221,  1472, -2221,
    1470,  1474,  7171,  7171,  7171,  7286,  1476, -2221,  1041, -2221,
    7286, -2221, -2221, -2221, -2221,  7171,  6916,  7171,  7171,  7171,
    7171,  7171,  7171, -2221,  7286,  7171,   942,  1580, -2221,  1523,
   -2221, -2221, -2221,  1947,  1471, -2221,  1246, -2221, -2221, -2221,
   -2221,   243, -2221,  -189,   499,   357, -2221, -2221, -2221,  1855,
     760,  1790,  1611,  1081,  7286, -2221,  1856, -2221,  4998, -2221,
   -2221, -2221, -2221, -2221,   177,   222, -2221,   129, -2221,  1545,
   -2221,   -46, -2221, -2221, -2221, -2221,  1860,  1765, -2221,   331,
   -2221, -2221,  1301,   948,  1611,  1861, -2221,   963, -2221,  1607,
   -2221, -2221,  1448,  1472,  1301,  1862,  1462,  1121,  1866,  5082,
   -2221,  5120,   153,  1134,  1247,  1859,   118,  1513, -2221, -2221,
   -2221,  1868,    52, -2221, -2221, -2221,  4690, -2221, -2221,  1902,
   -2221, -2221, -2221, -2221,  1042, -2221, -2221, -2221, -2221, -2221,
   -2221,  1566, -2221, -2221,  1065,  1422, -2221, -2221,    66, -2221,
   -2221, -2221, -2221, -2221, -2221,  1550,  5517, -2221,  1567,  1874,
    1967, -2221, -2221, -2221, -2221,  1039,  1614, -2221,  1575, -2221,
    3613,   -31,   642,  1577,  1581, -2221,   956, -2221,  1583,  1884,
     614, -2221,  1835, -2221,  1886,  1462,  1889,  1835,  1081,  1897,
    1533, -2221,  1244, -2221, -2221, -2221, -2221, -2221, -2221,  1764,
   -2221,  1042, -2221,  -110, -2221,   447,  2013, -2221,    75, -2221,
    1898,    67,   -35,  1997,  1899,  2561, -2221, -2221,  1081,  1900,
    5261,  1422, -2221, -2221,   680, -2221, -2221, -2221, -2221,  3618,
   -2221,  1852, -2221,  1276,  1901,  1940,  1904,  1835, -2221,  1081,
    1833,   179, -2221,   241,  1013, -2221, -2221,   390,  1610,  1612,
    1613,   256, -2221,  1472, -2221,  1615, -2221, -2221,   268,  1616,
    1013, -2221,  1049,  1046,  1046, -2221, -2221, -2221,  1066,  1618,
     339,  1621,  1232, -2221,  -102,  1948,  1619,   167,  6706, -2221,
    1232,  1659,  1759, -2221, -2221,  1963, -2221, -2221,  1244,  1878,
   -2221,   815,  1935,   -10,  1632, -2221,  1472, -2221, -2221, -2221,
    5653,  1879, -2221,  1863, -2221,  1708, -2221,  1746,  1836, -2221,
   -2221, -2221,  1513, -2221,   948, -2221, -2221, -2221,  1144,   477,
    1081, -2221, -2221, -2221, -2221, -2221,  7171,  1817, -2221,  1463,
   -2221,  1301, -2221, -2221, -2221,  1864, -2221, -2221, -2221,  5517,
   -2221,  1797,   117,  1796,  1488,  1617,  1931,  1931,  1931,  1931,
   -2221, -2221,  5517,  5653, -2221, -2221, -2221, -2221,  1077,   145,
   -2221,  1597, -2221,  1598, -2221, -2221, -2221, -2221,  1524, -2221,
   -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,
   -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,
    4423, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,
     -15, -2221,  1974,  1779,  1929, -2221,  1244,   183, -2221, -2221,
    1740, -2221, -2221,    70,  7171, -2221,  1661,  1042, -2221, -2221,
    5653,  1614,  1316,  1301, -2221, -2221, -2221, -2221, -2221,  1942,
    1081,   129, -2221,  1309, -2221, -2221, -2221, -2221,  1462,  2024,
   -2221, -2221, -2221,  1880, -2221, -2221,   555,  1982, -2221, -2221,
    1081,  1982,  1668, -2221,  1472, -2221, -2221,   937,  1265, -2221,
   -2221,  2539, -2221,  2064,   711,    76, -2221, -2221, -2221,  1232,
   -2221,  -111,  5517,  5517, -2221,    55,  5381, -2221, -2221,  1081,
   -2221,  1919, -2221, -2221,  5653, -2221,  1475, -2221, -2221,  1244,
   -2221, -2221, -2221, -2221, -2221,  1997,  1888, -2221, -2221,  1309,
   -2221,  1997, -2221, -2221, -2221,  1587, -2221,  1081,  1506,  1506,
    1506,  7286, -2221,   194,  1506, -2221,  7067,  1506,  1506, -2221,
      71, -2221,  1666, -2221, -2221,  1232,  1232,  1850,     0, -2221,
   -2221, -2221, -2221,  1913,     6, -2221,  1232, -2221,   -87, -2221,
   -2221, -2221,  1437,  1232,  1765, -2221, -2221, -2221,  1819, -2221,
    1475, -2221,  2063, -2221, -2221, -2221,  1081, -2221, -2221,  1081,
   -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,  1916,
    1819,   757,  1232, -2221,  1622,  1673, -2221, -2221, -2221,  1853,
    1819,  1819,   186,  1875,  1819, -2221,  1964, -2221, -2221, -2221,
    1623,  1626, -2221,  1244,  1964,  1891,  1707,  1832, -2221, -2221,
    1865, -2221, -2221, -2221, -2221, -2221, -2221,   388, -2221,  1081,
    1611,  1933,   112, -2221,     9,   -86,  1042,  1691,  1708,  1042,
   -2221,  1692,   129, -2221,   483, -2221, -2221,  1760,  1781, -2221,
     917,  1232, -2221, -2221, -2221, -2221, -2221,  1844, -2221, -2221,
   -2221,  2114, -2221, -2221, -2221, -2221, -2221, -2221, -2221,  1931,
    1232, -2221,   514, -2221, -2221,  1440,  1232, -2221, -2221, -2221,
   -2221,   -36, -2221,  1620, -2221,  1469,  1853, -2221, -2221, -2221,
   -2221,  1943,   112,  1944,   106, -2221, -2221, -2221, -2221,  2128,
   -2221,  1706,   138, -2221, -2221,   145, -2221, -2221, -2221, -2221,
    1666, -2221, -2221, -2221,  2021,  2012,  1524, -2221, -2221, -2221,
   -2221, -2221, -2221, -2221,  1787,  1524, -2221,  1709, -2221,  2104,
   -2221, -2221, -2221,  1126, -2221,  1244,  1218, -2221,    74,   179,
     537,  1042,  1042,   112,  1951,  1301,   431,   662,  2016, -2221,
   -2221, -2221,  2150, -2221,  1968, -2221, -2221, -2221, -2221,  1880,
   -2221, -2221, -2221, -2221,  1081,  2030,  1864,  1162, -2221,  1669,
   -2221,  1670,  1244,  1083, -2221,   388, -2221, -2221, -2221,  5517,
    1265,  1265,  1265,  1265,  1265,  1265,  1265,  1265,   711, -2221,
     493,  1864,   458, -2221, -2221,  1737,  1737, -2221, -2221,   515,
    1081,   112,  1969,  1716, -2221,  1728,  2166,  1081,   468,   555,
    2169,  1674,  1232, -2221, -2221, -2221, -2221, -2221, -2221, -2221,
   -2221, -2221,  1050, -2221, -2221, -2221,  1081,   331, -2221, -2221,
    1232,  1850,   101,  1420, -2221, -2221, -2221,  1081,  1081, -2221,
   -2221,   432, -2221, -2221, -2221, -2221,   432, -2221, -2221,  1232,
    1478,  1232, -2221, -2221, -2221,  1232, -2221, -2221, -2221,   121,
   -2221, -2221, -2221,  1232,  1676,   432,   432, -2221, -2221,   432,
   -2221, -2221,  1883, -2221, -2221,  1964, -2221, -2221, -2221, -2221,
   -2221, -2221, -2221, -2221,  1607,   -10, -2221, -2221,  1893,    29,
    1977,   112,   729, -2221, -2221, -2221, -2221, -2221, -2221, -2221,
     -40,    72, -2221, -2221, -2221,   589, -2221, -2221, -2221, -2221,
   -2221, -2221,   432, -2221, -2221, -2221, -2221,   432,   401,   401,
   -2221, -2221, -2221, -2221, -2221,  1681,  1042, -2221,  1042,  2408,
   -2221,   550,   116,   145, -2221, -2221, -2221,  2128,  1081, -2221,
   -2221, -2221, -2221,  1687,  1184,   317,  1688,   729,  1244, -2221,
   -2221,  2139, -2221, -2221, -2221, -2221,  1218, -2221,  2003, -2221,
    1232,  1587,  1881, -2221, -2221,  1042, -2221,  1042,   662, -2221,
   -2221, -2221,  1173, -2221, -2221,  1081,  5517,   936, -2221, -2221,
   -2221,  1905, -2221, -2221,  1930, -2221, -2221, -2221, -2221,  1670,
   -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,
   -2221, -2221,     5, -2221,  1081, -2221, -2221, -2221,   719, -2221,
   -2221, -2221,  7171, -2221,  5517,  5517,  1739,  1872,  1607, -2221,
    1042, -2221,   729, -2221,  1894, -2221,  1244, -2221,  2091,  1772,
   -2221,   970, -2221,   566, -2221,  1674, -2221,  1081, -2221, -2221,
   -2221, -2221, -2221, -2221, -2221, -2221,  1387, -2221, -2221,   -39,
   -2221,  1081, -2221, -2221, -2221, -2221, -2221, -2221,   685, -2221,
     331,   685, -2221, -2221, -2221,   109,  2162,  3173,  1964, -2221,
   -2221, -2221, -2221, -2221, -2221, -2221,  1799,  2008, -2221, -2221,
   -2221,  2009, -2221, -2221, -2221, -2221, -2221, -2221,  1920, -2221,
    1611, -2221, -2221, -2221, -2221,  1081, -2221, -2221, -2221, -2221,
   -2221, -2221, -2221, -2221, -2221, -2221,  3027, -2221, -2221, -2221,
    1392, -2221, -2221, -2221,  1488, -2221,   112,  1854,   112,  1857,
   -2221, -2221,  5517, -2221, -2221, -2221, -2221, -2221, -2221, -2221,
   -2221, -2221,  1184, -2221,  2111, -2221,  1524, -2221, -2221, -2221,
     729,  1352, -2221, -2221,  1352,   -93,  1081, -2221, -2221,   112,
   -2221, -2221,  1839, -2221,  2167,  1958,  1984,    -1, -2221, -2221,
   -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,
   -2221,  1013, -2221, -2221, -2221, -2221, -2221,  1927,  1232,  1799,
     112,  1732, -2221,  2166, -2221,  1685,  2131,  1685,  1739, -2221,
   -2221, -2221, -2221,  1936, -2221, -2221, -2221, -2221,  1400, -2221,
    1081,  1153, -2221, -2221,   101, -2221, -2221, -2221, -2221, -2221,
   -2221, -2221, -2221,   432, -2221, -2221, -2221,   432,   169, -2221,
   -2221,  1232, -2221, -2221, -2221,  1232, -2221, -2221, -2221, -2221,
   -2221, -2221, -2221,  2173, -2221, -2221,     4, -2221,  2223, -2221,
   -2221, -2221,  3173, -2221, -2221, -2221, -2221, -2221, -2221, -2221,
   -2221,  1081, -2221, -2221, -2221, -2221,  1488, -2221,  1042, -2221,
    1042, -2221, -2221, -2221,  2183,  2123,  1352,  1352, -2221,  1782,
    1782, -2221,  1903,  1301,   861, -2221,  1081, -2221, -2221,  5517,
   -2221,  1232,   976,  1975,  1979, -2221,  1980, -2221, -2221, -2221,
   -2221, -2221, -2221, -2221,  1081, -2221, -2221, -2221, -2221,  1788,
   -2221,  1081,  1685, -2221,  1081, -2221, -2221, -2221, -2221, -2221,
   -2221, -2221,  1024,  1232,  1232,  1154, -2221, -2221, -2221, -2221,
   -2221, -2221,  1603, -2221, -2221, -2221,  2134,   432,   432,  1232,
     401,   401, -2221,   101, -2221, -2221, -2221,  1799,  1799,  5517,
   -2221,  1352, -2221,  5517,  5517,  1232,  1301,  1301,  1907, -2221,
   -2221,  1766,  1081, -2221, -2221,  1905, -2221, -2221, -2221, -2221,
   -2221, -2221, -2221,  1238, -2221, -2221,  1081, -2221, -2221, -2221,
    1232,   101,   101, -2221,  2035,  1232,  1232, -2221,  3228,  1798,
   -2221, -2221,   331, -2221, -2221, -2221, -2221, -2221, -2221, -2221,
   -2221, -2221, -2221,   129,  1301,  1232, -2221, -2221, -2221, -2221,
   -2221, -2221, -2221, -2221,  1373, -2221, -2221, -2221, -2221,  2141,
   -2221,   101, -2221, -2221, -2221,   101,   101,  2029,  1952,    34,
    1475,  1971,  1751,  1232,  1611, -2221,  1232,  1232,  1081, -2221,
   -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,
   -2221, -2221,   490, -2221, -2221,   553, -2221, -2221, -2221,  1281,
    1850, -2221, -2221, -2221,   129, -2221,  1890,  1840,  1666, -2221,
   -2221, -2221, -2221, -2221,  2022, -2221,  1232, -2221,  1459,  1932,
   -2221,  3649,  3649,  1529,  2140,  2065,   -14,   -14, -2221, -2221,
   -2221,   -14,   -14, -2221, -2221, -2221, -2221,   135, -2221, -2221,
    1081, -2221,   739,    79, -2221,  1056,  1478, -2221, -2221,  1607,
    7187, -2221, -2221,   847,  1242, -2221, -2221,  1245, -2221, -2221,
   -2221, -2221,    22,    97, -2221, -2221, -2221, -2221, -2221,  3649,
   -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,  1925,  1038,
      79, -2221, -2221,  1945, -2221, -2221,  1475,  1475, -2221, -2221,
   -2221,  1830, -2221,  1666,  1081, -2221, -2221, -2221, -2221, -2221,
   -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,  2214, -2221,
    1666, -2221, -2221,  1962,  1081, -2221, -2221, -2221, -2221,  1845,
      99, -2221,  3649,   598, -2221, -2221,  1475, -2221, -2221, -2221,
   -2221, -2221, -2221, -2221, -2221, -2221, -2221,  1301, -2221
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2221, -2221, -2221, -2221, -2221,  2257, -2221, -2221, -2221,   833,
   -2221,  2225, -2221,  2180, -2221, -2221,  1311, -2221, -2221, -2221,
    1546, -2221, -2221,  1401,  2247, -2221, -2221,  2147, -2221, -2221,
   -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,  2075,
     985, -2221, -2221, -2221, -2221, -2221,  2130, -2221, -2221, -2221,
   -2221,  2073, -2221, -2221, -2221, -2221, -2221, -2221,  2206, -2221,
   -2221, -2221, -2221,  2066, -2221, -2221, -2221, -2221,  2047, -2221,
   -2221,   973, -2221, -2221, -2221, -2221,  2136, -2221, -2221, -2221,
   -2221,  2112, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,
   -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,
   -2221, -2221, -2221, -2221,  1062, -2221, -2221, -2221, -2221, -2221,
   -2221, -2221, -2221, -2221,  1773, -2221,  1885, -2221, -2221, -2221,
    1822, -2221, -2221, -2221, -2221,   430, -2221, -2221,  2011, -2221,
   -2221, -2221, -2221, -2221,  1873, -2221, -2221, -2221, -2221, -2221,
   -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,
    1292, -2221, -2221, -2221,  1530, -2221, -2221, -2221, -2221, -2221,
   -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,   736,
   -2221, -2221,  1803, -2221,  -751,  -822, -2221, -2221, -2221,   568,
   -2221, -2221, -2221, -2221,  -551, -2221, -2221, -2221, -2221, -2221,
   -2221, -2221, -1380,   884,  1564,   486,   648, -1379, -2221, -2221,
   -2221,  -283,  -355, -2221, -2221,   452, -2221, -2221,   155, -1377,
   -2221, -1374, -2221, -1372, -2221, -2221,  1519, -2221, -2221, -2221,
   -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,
   -2221, -2221, -2221, -2221,   352, -1774, -2221, -2221, -1177, -2221,
   -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,
   -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,
   -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,
   -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,  1489,
   -2221, -2221, -2221,   133,   136, -2221, -2221, -2221, -2221, -2221,
   -2221, -2221, -2221, -2221, -2221, -2221,  1298,   366, -2221,   267,
   -2221, -2221, -2221, -2221, -1791, -2221, -2221, -2221, -2221, -2221,
   -2221, -2221, -1363, -2221, -2221,  -696, -2221,  1540, -2221, -2221,
   -2221, -2221, -2221, -2221,  1122,   600,   604, -2221,   519, -2221,
   -2221,   -41, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,
   -2221,   570, -2221, -2221, -2221,  1112, -2221, -2221, -2221, -2221,
   -2221,   879, -2221, -2221,   283, -2221, -2221, -2221, -2221, -2221,
   -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,   880, -2221,
   -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,
   -2221, -2221, -2221, -2221, -2221,   854, -2221, -2221, -2221, -2221,
   -2221,   102, -1742, -2221, -2221, -2221, -2221, -2221, -2221, -2221,
   -2221, -2221, -2221, -2221, -2221,   837, -2221, -2221,   838, -2221,
   -2221,   517,   287, -2221, -2221, -2221, -2221, -2221, -2221, -2221,
   -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,
   -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,
      94,   800, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,
   -2221, -2221, -2221,   799, -2221, -2221,   277, -2221,   501, -2221,
   -2221, -1908, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,
   -2221, -2221, -2221, -2221, -2221,  1051,   796,   270, -2221, -2221,
   -2221, -2221, -2221, -2221, -1308,  1053, -2221, -2221, -2221,   265,
   -2221, -2221, -2221,   482, -2221, -2221, -2221, -2221, -2221, -2221,
   -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,
     435, -2221, -2221, -2221, -2221, -2221, -2221,   780,   263, -2221,
   -2221, -2221, -2221, -2221,  -132, -2221, -2221, -2221, -2221,   465,
   -2221, -2221, -2221,  1036, -2221,  1035, -2221, -2221,  1252, -2221,
   -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,
   -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,   252, -2221,
   -2221, -2221, -2221, -2221,  1037,   462, -2221, -2221, -2221, -2221,
   -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,
   -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,    88, -2221,
     466, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,
   -2221, -2221, -2221,  -257, -2221, -2221, -2221, -2221, -2221, -2221,
   -2221,  -287, -2221,   756, -2221, -2221, -1661, -2221, -2221,  -612,
   -2221, -2221, -1735, -2221, -2221,    90, -2221, -2221, -2221, -2221,
      -6, -2179, -2221, -2221,    87, -1820, -2221, -2221, -1931, -1539,
   -1070, -1436, -2221, -2221,   872, -1769,   271,   275,   276,   278,
      86,    92,  -771,   421,   407, -2221,   718,   549, -1400, -1078,
    -834,  1079, -1536,  -392,   -65, -2221, -1293, -2221, -1036, -1585,
     957,  -531,   -98,  2109, -2221,  1718,  -553,    19,  2259, -1059,
   -1048,   250,  -971, -2221, -1090, -1265, -2221,   520, -1277, -1262,
   -1082, -1141, -1727, -2221, -2221, -2221, -1101, -2221,   308,   -59,
    -627, -2221, -2221,  -103, -1175,  -764,   -99,  2142,  -820,  2174,
    -673,  1214,   139,  -393, -2221, -2221, -2221,   154,  1447, -2221,
   -2221,   522, -2221, -2221, -2221, -2221, -2221, -2221, -2221, -2221,
   -2221, -1948, -2221, -2221,  1675, -2221, -2221,  -101,  -589,  2004,
   -2221,  1239, -2221, -1296,  -281,  -615,  1003, -2221,  1915, -1431,
   -2221, -1416, -2221, -2221,    35, -2221,    -4,  -656,  -356, -2221,
   -2221, -2221, -2221,   433,  -165, -2221, -1187, -1524,  2211,  1985,
   -2221, -2221,  -334, -2221, -2221,  1143, -2221, -2221, -2221,   521,
   -2221,   370, -1939, -1472, -2221, -2221, -2221,  -167,   573, -1369,
   -2220, -2221, -2221, -2221,  -160, -2221, -2221,  1731, -2221,  1892,
   -2221, -2221, -2221,   885, -2221, -1691,  -151, -2221, -2221, -2221,
   -2221, -2221, -2221
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1849
static const yytype_int16 yytable[] =
{
     139,   427,   139,   428,   741,   138,   689,   141,   139,   579,
     415,   759,   975,   147,   245,  1433,  1014,   160,   778,  1253,
     990,  1238,   733,  1346,   404,   838,   215,  1867,  1768,  1859,
    1871,  2179,   139,   427,  1264,  2024,  1827,   180,  1700,  1702,
    1752,  1703,   268,   464,  1704,   696,  1705,  1460,   437,  1710,
    1599,  1284,   103,   104,   105,  1592,  2196,  1616,  1275,  1219,
     111,  2040,  1275,  1821,   463,  1345,  2102,  1469,   790,  1498,
    1398,  1328,    99,  1996,   264,   211,  1275,  2047,  2210,   107,
     747,   246,   768,   411,  1409,   279,  1452,  2038,  2649,  -671,
     838,  2129,  1190,  1812,   345,   134,   135, -1804,   136,  1830,
     392,   114,   843,   143,   144,   259, -1562, -1563,  2233,  -669,
    1565,   700,   161,   535,    94,   790,  1000, -1591,  1234, -1848,
    1555,   127,  1209,   821,   821,  2206, -1848,  2450,  2086,   169,
    1252,  1256,  2392, -1848, -1817,   799,   529,   360,  1946,  1743,
    1826,  2127,  1745,  1298,  1300,   215,   220,  1453,   825,   321,
     701,  1717,   297,  2182,   480,  1190,   219,   211,  1546,  1816,
    1863,  1333,  1357,  1209,  1508,  1962,  1816,  1492,  1612,   291,
    2264,   821,   182,  1605,   800,   801,   802,   803,   804,  1834,
     221,  1219,  1955,  1428,  2172, -1804,  2139,   251,   505,  1787,
    2299,  2185,  1848, -1750,   535,    23,   327,  1158,  2672,   258,
   -1782,   129,   419,  2243,  1868,   413,  1643,   717,   412,   626,
     627,   512, -1568,  1784,  1007,  2403,  1915, -1746,  1176, -1746,
     128,  1420,  2497,  2476,  1921,   839,  1539,  -671,  1665,   465,
     608,  -671, -1566,   515,  1443,  2404,  1539,   274,   275,  2177,
    1849,  1216,  2163,  2586,  1608,   295,    94,  -669,  1950,  1951,
    1680,  -669,  1681,   299, -1848, -1848,  1666,  1667,  2189,  2190,
     183,  2405,  2191,   609,     3,   715,   832,   187,   418,  1847,
   -1752,   516,   204,  2675,   188,  2698,  2202,   718,  2570, -1530,
    1162,    24,  1597,   749,    42,   212,  2406,  1421,  1327,  -671,
     839,   311,  1190,  1275,  1644,  1537,  2518,  1539,  2446, -1848,
    2211,   314,  1963,   130,  1609,  2227,  2058,  1610,  1377,  -669,
    2228,  1162,   805,   806,   807,   808,   809,   810,   811,   639,
     640,  1180,   716,  1214,   749,  1556,  1162,   752,  1147,  2088,
    1746,  2315,   413,   -35,  2195,  1216,  1598,   753,  1162,  1926,
     139,  1613,   139,   139,  1916,  1931,  1493,   485,   486,   139,
    2386,  2387,  1925,  2285,   491,  2587,  2011,  2163,   493,   410,
    1850,   823,  1238,   956,  2063,   957,   139,   212,   752,   507,
     507,   485,   507,  2066,   280,   507,   514,   154,   753,  1378,
    2212,  1387,  1387,  1387,  1357,  1216,  1821,   424,  1333,  1821,
     985, -1530,   243,  2338,  1400,  1402,   281,  2172,   436,    94,
   -1750,  1408,   137,   129,  2393, -1746,  1190,   443,   444,  1162,
     445,   446,  2026,   139,   728,  1238,   452,   754,   542,  2030,
    1566,  2207,   283,   744,  1851,   187,  2318, -1835,  1264,   430,
    -671,  1547,   188,   469,   963,  1938,   137,   139,   139,  1290,
     448,   702,   542,   580,   826,  1444,  2039,  1181,  1182,   492,
    -669,   466,  1785,  1234,  2056,   187,  1995,  1523,   754,   137,
    1162,  2366,   188, -1750,   812,  2325,   260,   187,   243,  1753,
    2059,   783, -1782,  2244,   188,   368,   139,   813,  1470,   189,
    2461,   580,  1238,     5, -1746,  1234,  2451,   755,  1668,   137,
     767,   989,   536,   686,   137,   139,  2164, -1817,  1862,  2407,
     697,  2377,  1548,  2379,  1832,   130,   467,   747,  1781,  1275,
     137,   540,   996, -1777,   137,   243,   255,  1721,  2052,  2503,
    2504,  1811,  1813,  2006,   265,  2105,   137,  2364,   755,   117,
     577,   756,  2213,  1001,  2397,  1875,   284,   783,   989,    52,
    1363, -1750,   346,  1967,   844,   732,  1238,   735,   748,  1539,
     591,   190,   593,  1499,    97,   598,   600,   149,   602,  1537,
    1363,  1937,  1149,  2005,  2415,  2416,   137,   394,  2283,  1415,
    1600,   243,   756,   536,   985,   985,   985,  1435,  2071,  2009,
     216,   757,  2477,   137,  1470,   679,    53,  1228, -1649,  1864,
     688,  1817,   261,  1364,   292,   607,   985,   699,  1817,   322,
   -1750,   137,  1818,   137, -1750,   137,  2444,   191,  1163,  1818,
    2445,  2164,   192,  1364,  2245,  2110,   137,  1821,  1669,  -676,
    1363,  1786,   757,  2216,    54,   704,    55,  2192,    56,   681,
    1898,  1198,  1332,   137,  2040,  1167,    57,   189,   137,  1163,
    1168,  1913,  1914,  2198,  2001,  1918,  2236,  1008,  2238,   431,
     745,  1852,  1508,  1922,  1163,   740,  1484,   154,  1164,   749,
     517,  1006,  1939,   824,  2225,   351,  1163,   189,   829,   834,
     834,  2662, -1530,  1364, -1848,    15,   737,  2661,  1238,   189,
   -1530, -1530,   949,   991,   222, -1530,  2018,  2269,   154,  1646,
    -666,   749,    58,  2248,  -676,  1770,   772,  2250,   956,   773,
     957,   985,  2130,   752, -1629,  1773,  1233, -1764,  1246,   190,
     749,  2015,   226,   753, -1750,   193, -1626,    16,   449,  1291,
    2500,  2501,  2508,  2509,   982,  1317,  2017,  1320,  1202,  1325,
     956,   747,   957,  -674,  1351,   752,  2278,  1163,   747,   190,
    2300, -1750,   750,   751,  2495,   753,  2163,     4,  1373,  1900,
    1333,   190,   985,  2052,   752,  2082,   693,  1901,  1541,   985,
     985,   985,  1394, -1835,   753,   191,  2033,  1394,  2702,   963,
     192,   217,   985,   985,   985,   985,   985,   985,   985,   985,
     450,  1394,   985,  2122,  2385,    60,  2123,  1658,  1163,  1976,
    1428,  2259,    18,   754,   518,   191,  1150,  1151, -1848,   682,
     192,   963,  2085,  1156,   952,  2258,  1748,   191,  -674,  2163,
     227,  1437,   192,  1275,  1539,   -96,  1203, -1848,   738,  2596,
     254,   953,   154,  2703, -1746,   754, -1746,   137,  -666,    61,
    2365,  2704,  -666,  1769,  1317,   137,  2367,  1333, -1631, -1762,
    1454,  1773, -1848,   717,   754, -1848,  2370,   223,  1167,   243,
     252,  2083,  1472,  1168,   453, -1750,  1423,  2466,  2241,  2019,
    2317,  1661,   298,   755,    43,  2160,   694,  1977,  2131,  2304,
    2217,  2218,  2219,   255,  1807,  1808,  1809,  1810,   581,  1680,
    2302,  1681,  2601,   305,   405,  1942,   796,  2316,     5,  2421,
    -666,  2424,   137,  1601,   519,   755,   228,   139,   139,  1576,
    2646,    27,  2631,  2034,  2647,   137,  1882,   756,   982,   982,
     982,  1185,  1475,   720,   755,  2705,  2408,  1317,    64,  2409,
    2410,   525,  1902,   954, -1848,    43,  1510,  1511,  2112,  1602,
     982,  2514,  2411,  2220,   749,   406,   137,  2231,  2231,   756,
     229,   749,  2173,  1234,    28,  1523,  2426,  2427,  1577, -1848,
     230,   137,     5,  2597,  1903,  2327,   -96,   757,   756,    33,
    1420,    67,   999, -1846,   231,  1512,  1513,  1204,  2237,  1234,
    2239,   243,   137,   956, -1633,   957,  1904,  2575,   752,   118,
     958,   959,   960,   137,  2247,   752,   961,  1945,   753,   757,
    2010,  1583,  1222,  1205,   601,   753,  1242,  1424,  2388,   717,
    2164,   582,  1127,  1242,  1277,  2455,  2486,  1242,   757,  1238,
    1295,  1177, -1746,   154,  2328,  1316,  2602,  1323,   243,  1323,
    1331,  1348,  1295,  2371,   306,   962,  1421,   712,  2652,  1905,
     232,  -666,    68,  1201,  2667,  1215,  2282,  1539,  1231,  1323,
    1586,  2090,  1254,   328,   963,   283,  1286,    36,  1234,  2481,
      39,  2618,  2529,  1289,  2613,  2221,  2222,  2534,   243,  1315,
    2223,  1448,  1238,  2164,  2467,  2652,  1458,  1720,   754,   722,
     137,  1234,  1362,   985,  1626,   754,  2173,  1223,  1949,  1774,
    1371,   705,  1375,   470,   471,   472,   982,  1244,   228,  1906,
    1639, -1746,  1128,   982,   982,   982,  1392,   717,  2334,   964,
     233,  1392,   394,   234,   235,  2099,   982,   982,   982,   982,
     982,   982,   982,   982,  1222,  1392,   982,  1544,  2549,  2550,
    2003,  2552,  1463,  1569,  2553,  2274,  2554,  2309,  1267,  2569,
    2488,  1627,   229,  1129,  1242,  1848,   717,   394,   755,  2690,
    2489,  1570,   230,  2329,  1434,   755,  1721,  2442,  2330,   749,
     965,   966, -1848,  2275,   357,   361,  2693,  2707,   706,   284,
     707,   985,  1130,  2293,  2293,   243,   394,   724,  1315,   358,
    1231,  1242, -1848,    94,  1524,   749,  1525,  2031,  2468,   359,
     253,  1242,   756,  1849,  1907,  1615,  1883,   362,   956,   756,
     957,  2041,   970,   752,   236,    40,  1837,   154, -1848,  1838,
    1839,  1775,  2169,   753,   473,  2573,   726,  1775,  2493,  1301,
   -1848,   438,   971,   360,   956,    49,   957,   972,   474,   752,
    1545,   329,   232, -1848,   973,  1331,   137,  2072,  1224,   753,
    1225,  1383,   757,   137,   170, -1848,   819,   819,  1242,   757,
   -1848,   253,  1242,  2494,  1879,  2201,   742,  1416,   155,    48,
     156,  1315,  1268,  1269,   749,    51,  1131,   439,  1394,   963,
    2488,  1410,  2310,   985,  1302,   325,  2609,  2279,  2003,  1270,
    2489,  2381,  1303,  1593,   154,  2073,   139,   749,   171,   743,
     330,  1640,   583,   754,   819,   963,   403,  1458,   172,  1932,
     300,  1317,   233,   956,   441,   957,  1625,   344,   752,  1621,
    2457,   475,  2458,  1850,  1455,   416, -1777,  -500,   753,   754,
     316,   139,   154,   476,  2532,  2533,   956,  1876,   957,   822,
     611,   752,    93,  1271,    21,    22,  2619,  2621,  2006,   400,
    2432,   753,   980,  2226,    94,  -500,  -500,  1754, -1083,  2205,
    2433,  2653,  2654,    46,  2681, -1762,  1877,  2326,   709,  2231,
    2231,  1251,  2506,   755,  2579,  2666,  1304,  2592,  2580,  2581,
    2389,  2291,  2162,  2434,   963,  2519,   997,  1851,   173,  1593,
     361,   317,   318,    97,  2678,  1167,  2682,  2655,  2197,   755,
    1168,  2452, -1083,  1893,  1360,  2656,   236,   963,   754,  2390,
    1754,  1166, -1083,  2435,  2205,  1866,  2683,   756,   820,   820,
    1167, -1568,   362,   477,  2520,  1168,  1766,   982,  1660,   749,
    2576,   754,  -228,  1673,  1709,  1464,  1711,    26,   783,  1887,
    2572,  1294,  1456,   756,  2103,   555,   351,  2701,  2471,  2668,
     749,  1767,  2670,  1294,    47,  2271, -1848,  1222,   174,   243,
     556,   137,  2521,    91,  1912,   101,   820,   757,   100,  2104,
    -500,   243,  2669,   752,  1242,  2671,   749,  1754,   755,  2074,
    2272,  1840,  1841,   753,    94,   363,  1894,   137,  1222,  2205,
     364,  1167, -1083,   757,   752,   428,  1168,   108,  -500,  1647,
     557,   755,   175,  1651,   753,  1842,  1843,  1593,  2510,  1397,
    1653,   106,  2511,  2512,  1242,   982,  1169,  1655,  2158,  1167,
     752,   365,   756,   109,  1168,  1170,   110,  1167,  1167,   366,
     753,  1874,  1168,  1168,   112,  1656,   980,   980,   980,  2657,
    1881,  1754,   367,  1790,  1167,   756,  1791,  1924,   114,  1168,
    1259,  1890,   176,  1792,  1793,   508,  1896,   510,   980,   113,
     511,  1260, -1083,   754,   139,  1975,   137,  1897,    13,  1933,
     120,   368,   757,    13,   369,  1985,  1986,  1419,   592,  1989,
    1919,  1419,   370,   599,   754,  2042,  2043,  -500,   243,   137,
    1593,   122,   155,  -225,   156,   757,  1405,  1406,  1407,  1794,
    2605,  2606,  2622,  2493,    52,   137, -1083,  2205,  1403,  1404,
     754,  1970,  1392,  1964,  1852,  1965,  2035,   982,  2036,   124,
     594,   371,   595,   126,   372,  1910, -1546, -1546, -1546, -1546,
      94,   140,  1978,   755,   706,  1960,   707,   558,  2623,  1486,
    1487,  1488,  1489,   142,   149,  1315,  2320,  1630,   559,  1631,
   -1083,    53,   162,  2507,   755,  2488, -1083,  1972,   164,  2322,
    1973,  2323,  1207,   980,  2373,  2489,  2374,   167,  1795,  1242,
    1207,  1207,  2429,  1242,  2430,  1790,  1242,   756,  1791,  1222,
     755,  1947,  1948,  1207,  1207,  1792,  1793,   163,  1727,    54,
    1728,    55,  1961,    56,  1593,  1389,  1390,  1796,   756,  1966,
     181,    57,  1207,  1207,   185,  1157,  2075,  1159,   186,   204,
    2004,   247,   193,   242,   980,   248,   428,  -500,   249,  1797,
    2092,   980,   980,   980,   756,   250,   257,   757,  1979,  1242,
     269,  1794,   273,   278,   980,   980,   980,   980,   980,   980,
     980,   980,   137,   294,   980,  2267,   296,   300,   757,   560,
     561,   154, -1545, -1545, -1545, -1545,   302,    58,   303,   985,
     307,   308,  2600,   309,   562,  2604,   563,   312,   137,   326,
     313,   333,  2137,  1798,   757,   334,   336,  1207,  1242,  1242,
    1242,  2137,  1887,   721,   723,   725,   727,  2025,  2113,  2114,
    2115,  2116,  2117,  2118,  2119,  2120,  2640,  2641,   338,   340,
    1795,  2642,  2643,   349,   342,  1478,  2032,   351,  1836,   353,
     354,  1837,  2037,   356,  1838,  1839,  1593,  1593,   397,    59,
    1207,   392,  1934,  1935,  1936,   394,  1799,   398,  1940,  1796,
     401,  1943,  1944,   403,   409,  1207,   408,   187,  1242,   243,
     420,   421,   422,   429,   413,  2098,   455,   454,   457,   564,
      60,  1797,   459,  1593,  -342,   483,   487,   490,   494,   495,
     502,   509,   521,   139,   522,  1207,   523,   952,  2159,   533,
    2624,   543,   548,   527,  2625,  2626,   547,   549,  1295,   551,
     552,  2138,  -355,  1295,   953,   554,  1800,   578,  2148,  2148,
     585,   586,   603,   587,    61,   605,   565,    62,   613,  1801,
    2183,   610,  1295,  1295,   685,  1798,  1295,   687,  1231,   690,
     614,   728,   698,  2167,   711,  2627,   730,   736,  1960,  1960,
     746,   762,   765,   769,  1207,   781,   777,   771,  1242,  1207,
     783,  2628,  2629,   791,   780,   786,   793,   797,   830,   823,
     995,  2092,   836,   950, -1633,   989,  1011,   994,  2157,  1295,
    2277,  1019,   998,  1016,  1295,  1295,  1295,  1135,  1799,  2232,
    2232,  1116,    63,  1242,  1143,  1242,  2161,  1171,  1145,  1152,
    1183,  2644,  1187,  2204,  1153,  1189,  1154,  1196,  1257,  1725,
    1726,  1802,  1155,    64,  1160,  2178,   954,  2180,  1172,  1197,
    1278,  2181,  1174,  1175,  1385,  1378,  1412,  1413,  1386,  2186,
    1396,  2608,  1242,  1411,  1242,  1426,  1432,  1438,    65,  1751,
      66,  1447,  1449,  1467,  1461,  1490,  1473,   984,  1800,  2249,
    1727,  1476,  1728,  1538,  1729,  1496,    67,  1541,  2204,  1593,
    1494,  1801,  1554,  1557,  1558,   980,  1560,  1593,  1562,  1571,
   -1548,  1451,  1573,   958,   959,   960,  1572,  1574,  1207,   961,
    1581,  1579,  1590,   747,  1584,  1333,  1874,  1242,  1730,  1731,
    1732,  1207,  1751,  1588,  1604,  1606,  1190,  1617,  1629,  1622,
    1295,  1633,  1635,  1641,   139,  1637,  1840,  1841,  1648,   542,
    1649,  1650,  1662,  1652,  1654,  2286,  1657,  1659,   962,  1712,
    1664,  1713,  1715,   982,   428,  1718,  2266,    68,  1749,  1207,
    1842,  1843,  1756,  2204,  1759,  1761,  1757,  1593,  1733,  1771,
    1734,  1782,  1216,  1802,  1788,  1775,  1478,  1735,  1822,  1825,
    1736,  1805,  1833,   980,  1846,  1547,   952,  1861,  1884,  1751,
    1869,  1888,  1960,  1899,  1892,  1920,  1927,  1954,  1968,  1971,
    1974,  1231,   428,   953,  1981,  1983,  1980,  1720,  1997,  1990,
    1998,  1999,  1993,  1242,  1994,  1242, -1518,  2012,  2016,  2027,
    2022,  2000,   964,  2023,  1428,  2053,  2046,  2048,  2054,  2060,
    1207,  2061,  2064,  2068,  2087,  2067,  2372,  2093,  2095,  2099,
    2133,  1207,  1207,   139,  2096,  1207,  1242,  2141,  2395,  1148,
    2106,  2107,  2140,  1751,  2142,  2143,  2152,  2193,  2154,  2187,
   -1567,   984,   984,   984,  2234,  2251,  2257,  1737,  2260,  1738,
    2199,  2263,  2281,   965,   966,  2268,  2279,  1242,   985,   985,
    2295,  2204,  2298,   984,  2305,   980,  1333,  2303,  2307,  2339,
    2006, -1523, -1565,  2383,  2368,  2378,  2399,   139,  2380,  2398,
    2400,  2401,   580,  2412,  2417,   954,  2422,   985,  2310,  2449,
    1295,  2452,  2459,  2460,  1295,   970,   749,  2478,  2462,  2484,
    2465,  2479,  2480,  2499,  2515,  2534,   985,  2516,  2578,  2571,
    2582,  2584,  2590,  2617,  2614,   971,  2589,  2610,  2611,  2638,
     972,  2639,  2679,  2692,    17,  2167,  2686,   973,  2694,   137,
    2696,    92,   125,    38,   166,  1242,   256,  1242,   209,   266,
     752,   119,   958,   959,   960,   290,   210,   277,   961,   241,
     753,   504,   545,  2470,  2414,   442,  2089,   323,   456,   985,
     526,  1184,  1701,   835,   787,  2616,  2689,   993,   984,  2171,
    2319,  2081,  2456,  1243,  2335,   428,  1195,  2336,  2242,   948,
    1243,  2454,  1430,  1988,  1243,  2045,  1987,   962,  2014,  1446,
    1015,  1764,  2240,  1780,  1765,  1815,  2376,  2447,  1243,  1823,
    2246,  2448,  2057,  1845,  1295,  1295,  2382,  1295,  1295,  1857,
    1295,  2232,  2232,  2262,  2069,  2482,  1561,  1865,  2270,   984,
    2273,  2097,  2485,  1564,  2151,  2487,   984,   984,   984,  1393,
     754,  1891,  2284,  2121,  1393,  1595,  1596,  1349,  1739,   984,
     984,   984,   984,   984,   984,   984,   984,  2294,  1393,   984,
    2149,  2420,  1620,  2685,  2150,  1930,  2475,  2472,  2425,  2287,
    2428,   964,  1829,  2288,  2289,  1763,  2290,  1587,   332,   764,
    1222,   213,   310,  2517,  -873,  2111,   293,  -873,  1436,  1161,
     795,   447,  1414,  2577,   539,  2464,   272,  2530,  1740,  2491,
    2492,  2080,  2167,  2167,   489,  2256,   774,  2135,  1860,  1741,
     755,  2588,  2632,  1231,     0,  2502,     0,     0,  1207,     0,
     597,  1243,   965,   966,     0,     0,     0,  1190,     0,     0,
       0,  2513,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1222,  2167,     0,     0,     0,  2167,  2167,     0,     0,
       0,     0,     0,     0,   756,     0,  2531,     0,  1243,  2595,
    -873,  2535,  2536,     0,   970, -1750,     0,     0,  1243,     0,
       0,     0,     0,     0,     0,     0,     0,  -873,     0,     0,
    1222,  2574,     0,     0,   971,     0,  2660,     0,     0,   972,
     952,     0,     0,     0,     0,     0,   973,     0,   137,     0,
       0,     0,   982,   982,   757,     0,     0,   953,     0,  2591,
       0,     0,  2593,  2594,     0,  1202,  1594,  1222,   747,     0,
       0,  2645,     0,     0,     0,  1243,     0,  2687,  2688,  1243,
       0,   982,     0,     0,     0,     0,     0,  1202,     0,     0,
     747,     0,     0,  2674,  2677,     0,     0,     0,     0,     0,
     982,  2695,  2615,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2708,     0,     0,
       0,     0,     0,     0,     0,  2691,     0,     0,     0,  -873,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -873,   952,     0,     0,     0,     0,     0,     0,  1307,     0,
       0,  2700,     0,   982,     0,     0,     0,     0,   953,   954,
       0,     0,  1594,   952,     0,  1207,     0,     0,     0,     0,
       0,     0,     0,  -873,  1755,     0,     0,     0,     0,  -873,
     953,  -873,     0,     0,  -873,     0,  -873,  -873,  -873,     0,
       0,     0,  -873,  1353,  -873,     0,     0,     0,     0,  -873,
     984,   980,     0,  1207,  1207,     0,     0,     0,     0,     0,
       0,  1895,     0,     0,  1308,     0,   958,   959,   960,     0,
       0,     0,   961,     0,     0,     0,     0,  1755,     0,     0,
       0,  -873,     0,     0,     0,     0,  -873,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -873,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     954,   962,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   749,     0,     0,  -873,     0,     0,     0,     0,     0,
    1594,     0,   954,     0,     0, -1750,     0,     0,   984,     0,
       0,  1243,     0,   749,  1755,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1204,  -873,     0,     0,     0,  1619,
     956,  1207,   957,     0,     0,   752,     0,   958,   959,   960,
       0,     0,     0,   961,     0,   753,  1204,     0,     0,     0,
    1205,  1243,   956,     0,   957,   964,     0,   752,  -873,   958,
     959,   960,     0,     0,  -873,   961,     0,   753,     0,     0,
       0,     0,  1205,     0,     0,     0,  -873,  -873,  1755,     0,
       0,     0,   962,  1594,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   963,     0,     0,   962,  1393,   965,   966,  -873,     0,
     984,     0,     0,     0,     0,     0,     0, -1848,  -873,     0,
       0,     0,     0,   963,  -873,   754,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -873,     0,
       0,     0,     0,  -873,     0,     0, -1750,   754,   970,     0,
    -873,     0,  -873,     0,     0,     0,   964,     0,  -873, -1136,
       0,     0,     0,     0,     0,     0,     0,     0,   971,     0,
       0,     0,     0,   972,     0,     0,     0, -1136,   964,     0,
     973,   243,   137,     0,     0,     0,     0,  1594,  1207,     0,
       0,     0,     0,     0,     0,   755,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1243,   965,   966,     0,
    1243,     0,     0,  1243,     0,     0,     0,   755,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   965,
     966,     0,  1896,     0,     0,     0,     0,     0,     0,   756,
       0,     0,     0,  1897,     0,     0,     0,     0,  1207,   970,
       0,     0,  1207,  1207,     0,     0,     0,     0,     0,     0,
       0,   756,     0,     0,     0,     0,  1243,     0,   846,   971,
     847,   970,   848,     0,   972,     0,     0,   849,     0,     0,
       0,   973,     0,   137,     0,   850,     0,     0,     0,   757,
       0,   971,     0,     0,     0,     0,   972,     0,     0,     0,
       0,     0,     0,   973,     0,   137,     0,     0,     0,  1594,
    1594,   757,     0,     0,     0,  1243,  1243,  1243,   851,   852,
       0,     0,     0,     0,     0,     0,     0,   853,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   854,     0,
       0,   855,     0,     0,     0,     0,  1594,     0,     0,     0,
       0,     0,     0,     0,     0,   856,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1243,     0,     0,   857,     0,
     980,   980,     0,     0,     0,     0,   858,     0,   859,     0,
       0,     0,     0,     0,     0,  -713,     0,  -713,  -713,  -713,
    -713,  -713,  -713,  -713,  -713,     0,  -713,  -713,  -713,   980,
    -713,  -713,  -713,  -713,  -713,  -713,  -713,  -713,  -713,   860,
       0,     0,     0,     0,     0,     0,     0,     0,   980,     0,
     861,     0,     0,     0,     0,   862,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2340,     0,     0,  2341,     0,
       0,  2342,     0,     0,     0,     0,     0,     0,     0,  2343,
       0,     0,   863,     0,     0,  1243,     0,     0,     0,   864,
       0,     0,   865,   866,     0,     0,     0,     0,     0,     0,
       0,   980,   867,     0,     0,     0,     0,     0,     0,   868,
       0,   869,     0,     0,   870,     0,     0,     0,     0,     0,
    1243,     0,  1243,     0,  2344,     0,     0,     0,     0,     0,
       0,     0,     0,   624,     0,     0,     0,     0,     0,     0,
       0,     0,  1594,     0,     0,     0,     0,     0,     0,     0,
    1594,     0,  1680,  1727,  1681,  1728,   871,     0,     0,  1243,
     872,  1243,   873,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   874,     0,     0,     0,     0,     0,  -713,  -713,
       0,  -713,  -713,  -713,  -713,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   875,     0,
       0,     0,     0,     0,     0,     0,   984,     0,   846,     0,
     847,   876,   848,     0,  1243,     0,     0,   849,     0,     0,
    1594,     0,  2345,     0,     0,   850,     0,     0,     0,     0,
       0,  2346,     0,     0,     0,     0,   877,   878,     0,     0,
       0,     0,     0,     0,  2347,     0,     0,   879,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   851,   852,
       0,   880,   881,     0,     0,     0,     0,   853,   882,     0,
       0,     0,   883,     0,     0,     0,  2348,     0,   854,     0,
     884,   855,     0,     0,     0,     0,     0,     0,     0,     0,
     885,     0,     0,     0,     0,   856,  2349,  2537,  2350,   886,
       0,     0,     0,     0,     0,     0,     0,     0,   887,     0,
    1243,     0,  1243,   888,   889,     0,     0,   890,   857,   891,
       0,  2351,     0,   642,     0,   892,   858,     0,   859,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -713,     0,
    2538,     0,     0,  1243,     0,     0,     0,     0,     0,     0,
       0,  2352,     0,     0,     0,     0,   894,     0,     0,   860,
       0,     0,   895,     0,     0,     0,     0,   896,     0,     0,
     861,     0,     0,  2539,  1243,   862,     0,     0,  2353,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -713,     0,
       0,     0,     0,  2540,   897,     0,     0,  2541,     0,     0,
       0,     0,   863,     0,  2354,     0,     0,     0,     0,   864,
       0,  2355,   865,   866,     0,   646,     0,     0,     0,     0,
       0,  2542,   867,     0,  2356,     0,     0,     0,  2357,   868,
       0,   869,     0,     0,   870,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1243,     0,  1243,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   871,  2358,     0,   846,
     872,   847,   873,   848,     0,     0,     0,     0,   849,     0,
       0,     0,   874,   651,     0,     0,   850,     0,     0,     0,
       0,     0,  2543,     0,     0,     0,  2359,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2360,     0,   875,  2544,
       0,     0,  2361,     0,     0,     0,     0,     0,     0,   851,
     852,   876,     0,     0,     0,     0,     0,     0,   853,  2545,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   854,
       0,     0,   855,     0,     0,   952,   877,   878,     0,     0,
    2546,     0,     0,     0,     0,     0,   856,   879,     0,     0,
       0,     0,   953,     0,     0,     0,     0,     0,     0,  2547,
       0,   880,   881,     0,     0,     0,   660,  2548,   882,   857,
       0,   952,   883,     0,     0,     0,     0,   858,     0,   859,
     884,     0,     0,     0,     0,     0,     0,     0,   953,     0,
     885,     0,     0,     0,     0,     0,     0,     0,     0,   886,
       0,     0,     0,     0,     0,     0,     0,     0,   887,     0,
     860,     0,     0,   888,   889,     0,     0,   890,     0,   891,
       0,   861,     0,     0,     0,   892,   862,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   893,     0,
       0,     0,     0,  1307,     0,   984,   984,     0,   846,     0,
     847,     0,   848,   863,   954,     0,   894,   849,     0,     0,
     864,     0,   895,   865,   866,   850,     0,   896,     0,     0,
       0,     0,     0,   867,   984,     0,     0,     0,     0,     0,
     868,     0,   869,     0,     0,   870,     0,     0,     0,     0,
     954,     0,     0,   984,   897,     0,     0,     0,   851,   852,
       0,   749,     0,     0,     0,     0,     0,   853,     0,  1451,
       0,   958,   959,   960,     0,     0,     0,   961,   854,     0,
       0,   855,     0,     0,     0,     0,     0,   871,     0,     0,
       0,   872,     0,   873,   955,   856,     0,     0,     0,     0,
     956,     0,   957,   874,     0,   752,   984,   958,   959,   960,
       0,     0,     0,   961,     0,   753,   962,     0,   857,     0,
       0,     0,     0,     0,     0,     0,   858,     0,   859,   875,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   876,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   962,     0,     0,     0,     0,     0,     0,   860,
       0,     0,     0,     0,     0,     0,     0,   877,   878,     0,
     861,   963,     0,     0,     0,   862,     0,     0,   879,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     964,     0,   880,   881,     0,   754,     0,     0,     0,   882,
       0,     0,   863,   883,     0,     0,     0,     0,     0,   864,
       0,   884,   865,   866,     0,     0,     0,     0,     0,     0,
       0,   885,   867,     0,     0,     0,   964,     0,     0,   868,
     886,   869,     0,     0,   870,     0,     0,     0,     0,   887,
       0,   965,   966,     0,   888,   889,     0,     0,   890,     0,
     891,     0, -1848,     0,     0,     0,   892,     0,     0,     0,
       0,     0,     0,     0,     0,   755,     0,     0,     0,  1628,
       0,     0,     0,     0,     0,     0,   871,   965,   966,     0,
     872,     0,   873,   970,     0,     0,     0,   894,     0,     0,
       0,     0,   874,   895, -1136,     0,     0,     0,   896,     0,
       0,     0,     0,   971,     0,     0,     0,     0,   972,   756,
       0,  1202, -1136,     0,   747,   973,   243,   137,   875,   970,
       0,     0,     0,     0,     0,   897,     0,     0,     0,     0,
       0,   876,     0,     0,     0,     0,     0,     0,     0,   971,
       0,     0,     0,     0,   972,     0,     0,     0,     0,     0,
       0,   973,     0,   137,     0,     0,   877,   878,     0,   757,
       0,     0,     0,     0,     0,     0,     0,   879,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   880,   881,     0,     0,     0,     0,   952,   882,     0,
       0,     0,   883,     0,  1021,     0,  1022,     0,     0,  1296,
     884,  1023,     0,     0,   953,     0,     0,     0,     0,  1024,
     885,     0,     0,     0,     0,     0,     0,     0,     0,   886,
       0,     0,     0,     0,     0,     0,     0,     0,   887,     0,
       0,     0,     0,   888,   889,     0,     0,   890,     0,   891,
       0,     0,  1025,  1026,     0,   892,     0,     0,     0,     0,
       0,  1027,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1028,     0,     0,  1029,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   894,     0,     0,  1030,
       0,     0,   895,     0,     0,     0,     0,   896,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1031,     0,     0,     0,   954,     0,     0,     0,
    1032,     0,  1033,     0,   897,     0,     0,   749,     0,  1034,
       0,  1035,  1036,  1037,  1038,  1039,  1040,  1041,  1042,     0,
    1043,  1044,  1045,     0,  1046,  1047,  1048,  1049,  1050,  1051,
    1052,  1053,  1054,  1055,     0,     0,     0,     0,     0,     0,
    1204,     0,     0,     0,  1056,     0,   956,     0,   957,  1057,
       0,   752,     0,   958,   959,   960,     0,     0,     0,   961,
       0,   753,     0,     0,     0,     0,  1205,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1058,     0,     0,     0,
       0,     0,     0,  1059,     0,     0,  1060,  1061,     0,     0,
       0,     0,     0,     0,     0,     0,  1062,     0,   962,     0,
       0,     0,     0,  1063,     0,  1064,     0,     0,  1065,     0,
       0,     0,     0,     0,     0,     0,     0,   963,     0,  1202,
       0,     0,   747,     0,     0,  1504,  1505,  1506,     0,     0,
       0,     0,     0,  1507,     0,     0,     0,     0,     0,     0,
       0,   754,     0,     0,     0,     0,     0,     0,     0,     0,
    1066,     0,     0,     0,  1067,     0,  1068,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1069,     0,     0,     0,
       0,     0,   964,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1070,     0,     0,   952,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1071,     0,     0,     0,     0,
       0,   755,   953,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   965,   966,     0,     0,     0,     0,     0,
    1072,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1073,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   756,  1074,     0,     0,     0,
       0,     0,  1075,     0,     0,   970,  1076,     0,     0,     0,
       0,     0,  1508,     0,  1077,     0,     0,     0,     0,     0,
       0,     0,  1509,     0,  1078,   971,     0,     0,     0,     0,
     972,     0,     0,  1079,     0,     0,     0,   973,     0,   137,
       0,     0,  1080,     0,     0,   757,     0,  1081,  1082,     0,
       0,  1083,     0,  1084,   954,     0,     0,     0,     0,  1085,
    1510,  1511,     0,     0,     0,   749,     0,     0,     0,     0,
       0,     0,  1086,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1828,     0,     0,     0,     0,
    1087,     0,     0,     0,     0,     0,  1088,     0,  1204,  1512,
    1513,  1089,     0,     0,   956,     0,   957,     0,     0,   752,
       0,   958,   959,   960,     0,     0,     0,   961,     0,   753,
       0,     0,     0,     0,  1205,     0,  1202,     0,  1090,   747,
       0,     0,  1504,  1505,  1506,     0,     0,  1514,     0,     0,
    1507,     0,     0,  1515,     0,     0,  1516,     0,     0,     0,
       0,     0,     0,     0,  1517,     0,   962,     0,     0,     0,
       0,  1518,     0,     0,  1202,     0,  1519,   747,     0,     0,
       0,     0,     0,     0,     0,   963,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1520,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   754,
       0,     0,   952,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   953,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     964,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     952,     0,     0,     0,     0,     0,     0,     0,  1202,     0,
       0,   747,     0,     0,     0,     0,     0,   953,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   755,
    1353,     0,     0,     0,     0,     0,     0,     0,     0,  1508,
       0,   965,   966,     0,     0,     0,     0,     0,     0,  1509,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1521,     0,  1522,     0,  1523,     0,     0,  1524,     0,
    1525,  1526,  1527,   756,     0,  1528,  1529,     0,     0,     0,
       0,   954,     0,   970,   952,     0,     0,  1510,  1511,     0,
       0,     0,   749,     0,     0,     0,  1358,     0,     0,     0,
       0,   953,     0,   971,     0,     0,     0,     0,   972,     0,
       0,     0,     0,     0,     0,   973,     0,   137,     0,   954,
       0,     0,     0,   757,     0,  1204,  1512,  1513,     0,     0,
     749,   956,     0,   957,     0,     0,   752,     0,   958,   959,
     960,     0,     0,     0,   961,     0,   753,     0,     0,     0,
       0,  1205,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1204,  1514,     0,     0,     0,     0,   956,
    1515,   957,     0,  1516,   752,     0,   958,   959,   960,     0,
       0,  1517,   961,   962,   753,     0,     0,     0,  1518,  1205,
       0,     0,     0,  1519,  1202,     0,     0,   747,     0,     0,
       0,     0,   963,   954,     0,     0,     0,     0,     0,     0,
       0,     0,  1520,     0,   749,     0,     0,     0,     0,     0,
       0,   962,     0,     0,     0,     0,   754,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     963,     0,     0,     0,     0,     0,     0,  1204,     0,     0,
       0,     0,     0,   956,     0,   957,     0,   964,   752,     0,
     958,   959,   960,     0,   754,     0,   961,     0,   753,     0,
     952,     0,     0,  1205,     0,     0,     0,     0,  -929,     0,
       0,  -929,     0,     0,     0,     0,     0,   953,     0,     0,
       0,     0,     0,     0,     0,   964,   755,     0,     0,     0,
       0,     0,     0,     0,     0,   962,     0,     0,   965,   966,
       0,     0,     0,     0,     0,     0,  1202,     0,     0,   747,
       0,     0,     0,     0,   963,     0,     0,     0,  1521,     0,
    1522,     0,  1523,     0,   755,  1524,     0,  1525,  1526,  1527,
     756,     0,  1528,  1529,     0,     0,   965,   966,   754,     0,
     970,     0,     0,     0,  -929,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     971,  -929,     0,     0,     0,   972,     0,     0,   756,   964,
       0,     0,   973,     0,   137,     0,     0,     0,   970,   954,
     757,     0,   952,     0,     0,     0,     0,     0,     0,     0,
     749,     0,     0,     0,     0,     0,     0,     0,   971,   953,
       0,     0,     0,   972,     0,     0,     0,     0,   755,     0,
     973,     0,   137,     0,     0,     0,     0,     0,   757,     0,
     965,   966,     0,  1204,     0,     0,     0,  1478,     0,   956,
       0,   957,     0,     0,   752,     0,   958,   959,   960,     0,
       0,     0,   961,     0,   753,     0,     0,  1202,     0,  1205,
     747,     0,   756,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   970,  -929,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -929,     0,     0,     0,     0,     0,
       0,   962,   971,     0,     0,     0,     0,   972,     0,     0,
       0,     0,     0,     0,   973,     0,   137,     0,     0,     0,
     963,   954,   757,     0,     0,     0,     0,  -929,     0,     0,
       0,     0,   749,  -929,     0,  -929,     0,     0,  -929,     0,
    -929,  -929,  -929,   952,   754,     0,  -929,     0,  -929,     0,
       0,     0,     0,  -929,     0,     0,     0,     0,     0,     0,
     953,     0,     0,     0,     0,  1204,     0,     0,     0,     0,
       0,   956,     0,   957,     0,   964,   752,     0,   958,   959,
     960,     0,     0,     0,   961,  -929,   753,  1202,     0,     0,
     747,  1205,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1202,  -929,     0,   747,     0,     0,     0,
       0,     0,     0,     0,   755,     0,     0,     0,     0,     0,
       0,     0,     0,   962,     0,     0,   965,   966,  -929,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   963,     0,  1440,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1624,   756,  -929,
       0,     0,   954,   952,     0,     0,   754,     0,   970,     0,
       0,     0,     0,   749,     0,     0,     0,     0,     0,   952,
     953,     0,     0,     0,     0,     0,     0,     0,   971,     0,
       0,     0,     0,   972,     0,     0,   953,   964,  -929,     0,
     973,     0,   137,     0,     0,     0,  1204,     0,   757,     0,
    -929,  -929,   956,     0,   957,     0,     0,   752,     0,   958,
     959,   960,     0,  1202,     0,   961,   747,   753,     0,     0,
       0,     0,  1205,     0,     0,     0,   755,     0,     0,     0,
       0,     0,  -929,     0,     0,     0,     0,     0,   965,   966,
       0,     0,  -929,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   962,     0,     0,     0,     0,     0,
       0,     0,  -929,     0,     0,     0,     0,  -929,     0,     0,
     756,     0,   954,   963,  -929,     0,  -929,     0,     0,     0,
     970,     0,  -929,   749,     0,     0,     0,     0,   954,   952,
       0,     0,     0,     0,  1482,     0,     0,   754,     0,   749,
     971,     0,     0,     0,     0,   972,   953,     0,     0,     0,
       0,     0,   973,     0,   137,     0,  1204,     0,     0,     0,
     757,     0,   956,     0,   957,     0,     0,   752,   964,   958,
     959,   960,  1204,     0,     0,   961,     0,   753,   956,     0,
     957,     0,  1205,  1247,     0,   958,   959,   960,     0,  1750,
       0,   961,   747,   753,     0,     0,     0,     0,  1205,     0,
       0,     0,     0,     0,     0,     0,     0,   755,     0,     0,
       0,     0,     0,     0,   962,     0,     0,     0,     0,   965,
     966,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     962,     0,     0,   963,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   954,   963,
       0,   756,     0,     0,     0,     0,     0,   754,     0,   749,
       0,   970,     0,     0,     0,   952,     0,     0,     0,     0,
       0,     0,     0,   754,     0,     0,     0,     0,     0,     0,
       0,   971,   953,     0,     0,     0,   972,     0,   964,     0,
       0,     0,  1204,   973,     0,   137,     0,     0,   956,     0,
     957,   757,     0,   752,   964,   958,   959,   960,     0,     0,
       0,   961,     0,   753,     0,     0,     0,     0,  1205,     0,
       0,  1917,     0,     0,     0,     0,     0,   755,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   965,
     966,     0,     0,   755,     0,     0,     0,     0,     0,     0,
     962,     0,     0,     0,     0,   965,   966,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   963,
       0,   756,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   970,     0,     0,   954,     0,     0,   756,     0,     0,
       0,     0,     0,   754,     0,   749,     0,   970,     0,     0,
       0,   971,     0,     0,     0,     0,   972,     0,     0,     0,
       0,     0,     0,   973,     0,   137,     0,   971,     0,     0,
       0,   757,   972,     0,   964,     0,     0,     0,  1204,   973,
       0,   137,     0,     0,   956,     0,   957,   757,     0,   752,
       0,   958,   959,   960,     0,     0,     0,   961,     0,   753,
       0,     0,     0,     0,  1205,     0,     0,     0,     0,     0,
       0,     0,     0,   755,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   965,   966,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   962,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   963,     0,   756,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   970,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   754,
    1013,     0,     0,     0,     0,     0,     0,   971,     0,     0,
       0,     0,   972,     0,     0,     0,     0,     0,     0,   973,
       0,   137,     0,     0,     0,     0,     0,   757,     0,     0,
     964,  -352,     0,     0,  -352,     0,     0,  -352,  -352,  -352,
    -352,  -352,  -352,  -352,  -352,  -352,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -352,     0,  -352,     0,     0,     0,   755,
       0,     0,  -352,     0,  -352,  -352,  -352,  -352,  -352,  -352,
    -352,   965,   966,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   756,     0,     0,     0,     0,  -352,     0,
       0,     0,     0,   970,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   971,     0,     0,     0,     0,   972,     0,
       0,     0,     0,     0,     0,   973,     0,   137,     0,  -352,
       0,     0,     0,   757,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   529,     0,     0,  -352,  -352,  -352,
    -352,  -352,   528,     0,  -352,  -352,     0,     0,  -352,     0,
       0,     0,     0,     0,     0,  -352,     0,  -352,     0,     0,
       0,     0,  -352,  -352,     0,     0,     0,     0,     0,     0,
    -352,     0,     0,     0,     0,     0,     0,  -352,  -352,     0,
    -352,  -352,  -352,  -352,  -352,  -352,  -352,     0,     0,     0,
       0,  -352,     0,     0,  -352,     0,     0,     0,     0,     0,
    -352,     0,  -352,     0,     0,     0,     0,     0,     0,     0,
       0,  -352,     0,     0,  -352,     0,  -352,  -352,  -352,  -352,
    -352,  -352,  -352,     0,  -352,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -352,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -352,     0,     0,     0,  -352,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -352,  -352,     0,
       0,     0,     0,     0,     0,     0,  -352,     0,     0,  -352,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -352,     0,  -352,     0,     0,     0,     0,     0,
       0,     0,  -352,     0,     0,     0,   529,     0,     0,  -352,
    -352,  -352,  -352,  -352,     0,     0,  -352,  -352,     0,     0,
    -352,     0,     0,     0,     0,     0,     0,  -352,     0,     0,
       0,     0,     0,     0,     0,  -352,     0,     0,     0,     0,
       0,     0,     0,     0,  -352,     0,     0,     0,     0,     0,
    -352,     0,     0,     0,  -352,     0,  -352,  -352,  -352,     0,
       0,     0,     0,  -352,     0,     0,  -352,     0,     0,     0,
       0,     0,  -352,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -352,     0,     0,     0,     0,
    -352,     0,     0,     0,     0,  -352,     0,     0,  -352,     0,
       0,     0,     0,     0,     0,     0,     0,  -352,     0,     0,
       0,     0,  -352,     0,     0,     0,  -352,  -352,  -352,     0,
       0,     0,     0,     0,     0,     0,  -352,     0,     0,     0,
    -352,     0,     0,     0,     0,     0,  -352,  -352,     0,     0,
    -352,     0,     0,   530,     0,     0,     0,     0,  -352,     0,
     616,  -352,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -352,   617,     0,     0,   618,   619,
     620,   621,   622,   623,   624,     0,  -352,     0,     0,     0,
       0,     0,     0,     0,  -352,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   625,     0,   626,   627,   628,   629,   630,   631,
     632,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -352,     0,  -352,  -352,
    -352,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   633,     0,
       0,     0,     0,     0,     0,  -352,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -352,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -352,
       0,     0,     0,     0,     0,     0,     0,     0,  -352,  -352,
    -352,     0,     0,     0,     0,     0,     0,   634,   635,   636,
     637,   638,  -352,     0,   639,   640,     0,     0,     0,  -352,
       0,     0,     0,     0,     0,   530,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   618,   619,   620,   621,   622,
     623,     0,     0,     0,     0,     0,     0,     0,   641,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    94,     0,     0,   642,     0,     0,     0,     0,   625,
   -1824,   626,   627,   628,   629,   630,   631,   632,  1675,     0,
       0,  1676,     0,     0,  1677,   618,   619,   620,   621,   622,
     623,  1678,  1679,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   643,     0,     0,     0,
    1680,     0,  1681,     0,     0,   633,     0,     0,     0,   625,
       0,   626,   627,   628,   629,   630,   631,   632,     0,     0,
       0,     0,     0,     0,   644,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   645,     0,
       0,     0,     0,     0,     0,     0,   646,     0,     0,   647,
       0,     0,     0,     0,     0,   633,     0,     0,     0,     0,
       0,     0,   648,     0,   634,   635,   636,   637,   638,     0,
       0,   639,   640,     0,   649,     0,     0,     0,     0,     0,
       0,     0,   650,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1682,     0,     0,     0,
       0,     0,     0,     0,     0,   641,   952,     0,     0,     0,
       0,     0,     0,     0,   634,   635,   636,   637,   638,     0,
       0,   639,   640,   953,   651,  1683,   652,   653,   654,     0,
       0,     0,  1684,     0,  1685,     0,     0,     0,     0,     0,
   -1777,     0,     0,     0,     0,     0,     0,  1686,     0,     0,
       0,     0,     0,   655,     0,   641,     0,     0,     0,     0,
       0,     0,     0,   643,     0,     0,     0,     0,    94,     0,
    -349,   642,     0,     0,     0,     0,     0,     0,     0,  1687,
       0,     0,     0,     0,     0,     0,     0, -1824,  1688,     0,
       0,     0,     0,     0,     0,     0,   656,   657,   658,     0,
       0,  1689,     0,     0,     0,   645,     0,     0,     0,     0,
     659,     0,     0,   643,     0,     0,   647,   660,     0,     0,
       0,     0,     0,     0,     0,   954,     0,     0,   952,   648,
       0,     0,     0,     0,     0,     0,   749,     0,     0,     0,
       0,  1690,     0,     0,     0,   953,     0,     0,     0,     0,
       0,     0,     0,     0,  1691,   645,     0,     0,     0,     0,
       0,     0,     0,   646,     0,     0,   647,     0,     0,   955,
       0,     0,     0,     0,     0,   956,     0,   957,     0,   648,
     752,  1692,   958,   959,   960,     0,     0,     0,   961,     0,
     753,     0,     0,   652,   653,   654,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1693,     0,     0,
       0,     0,     0,     0,  1694,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   962,     0,     0,
       0,  1695,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   651,     0,   652,   653,   654,   963,   954,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   749,     0,
       0,     0,     0,   656,   657,   658,     0,     0,     0,     0,
     754,     0,     0,     0,     0,     0,     0,     0,     0,   952,
       0,     0,  1696,     0,     0,     0,     0,  -616,     0,     0,
       0,   955,  1697,     0,     0,     0,   953,   956,     0,   957,
       0,   964,   752,     0,   958,   959,   960,     0,     0,  1698,
     961,     0,   753,   656,   657,   658,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   659,     0,     0,
       0,     0,     0,  1699,   660,     0,     0,     0,     0,     0,
     755,     0,     0,     0,     0,     0,     0,     0,     0,   962,
       0,     0,   965,   966,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   963,     0,
       0,     0,  1382,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   967,   952,   756,     0,   968,   969,     0,     0,
       0,     0,   754,     0,   970,     0,     0,     0,   954,   952,
     953,     0,     0,     0,     0,     0,     0,     0,     0,   749,
       0,     0,     0,     0,   971,     0,   953,     0,     0,   972,
       0,     0,     0,   964,     0,     0,   973,     0,   137,     0,
       0,     0,     0,     0,   757,     0,     0,     0,     0,     0,
       0,     0,   955,     0,     0,     0,     0,     0,   956,     0,
     957,     0,     0,   752,     0,   958,   959,   960,     0,     0,
       0,   961,   755,   753,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   965,   966,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1401,     0,     0,     0,   952,     0,
     962,     0,   954,     0,   967,     0,   756,     0,   968,   969,
       0,     0,     0,   749,     0,   953,   970,     0,   954,   963,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   749,
       0,     0,     0,     0,   952,     0,   971,     0,     0,     0,
       0,   972,     0,   754,     0,     0,   955,     0,   973,     0,
     137,   953,   956,     0,   957,     0,   757,   752,     0,   958,
     959,   960,   955,     0,     0,   961,     0,   753,   956,     0,
     957,     0,     0,   752,   964,   958,   959,   960,     0,     0,
       0,   961,     0,   753,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   962,     0,     0,     0,     0,     0,
       0,     0,     0,   755,     0,     0,     0,   954,     0,     0,
     962,     0,     0,   963,     0,   965,   966,     0,   749,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   963,
       0,     0,     0,     0,     0,  1941,     0,   754,     0,     0,
       0,     0,     0,   954,     0,   967,     0,   756,     0,   968,
     969,     0,     0,   754,   749,     0,     0,   970,     0,     0,
       0,     0,   752,     0,   958,   959,   960,     0,   964,     0,
     961,     0,   753,     0,     0,     0,     0,   971,     0,     0,
    2663,     0,   972,     0,   964,     0,     0,   955,     0,   973,
       0,   137,     0,   956,     0,   957,     0,   757,   752,     0,
     958,   959,   960,     0,     0,     0,   961,   755,   753,   962,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   965,
     966,     0,     0,   755,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   965,   966,     0,     0,     0,
       0,     0,     0,     0,     0,   962,     0,     0,     0,   967,
       0,   756,   754,   968,   969,     0,     0,     0,     0,     0,
       0,   970,     0,     0,   963,     0,     0,   756,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   970,     0,     0,
       0,   971,     0,   964,     0,     0,   972,     0,   754,     0,
       0,  2664,     0,   973,     0,   137,     0,   971,     0,     0,
       0,   757,   972,     0,     0,     0,     0,     0,     0,   973,
       0,   137,     0,     0,     0,     0,     0,   757,     0,   964,
       0,     0,   755,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   965,   966,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   755,     0,
       0,     0,     0,     0,     0,     0,   756,     0,     0,     0,
     965,   966,     0,     0,     0,     0,   970,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   971,     0,     0,     0,
       0,   972,   756,     0,   968,     0,     0,     0,   973,     0,
     137,     0,   970,     0,     0,     0,   757,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   971,     0,     0,     0,     0,   972,     0,     0,
       0,     0,     0,     0,   973,     0,   137,     0,     0,     0,
       0,     0,   757
};

static const yytype_int16 yycheck[] =
{
     103,   393,   105,   395,   660,   103,   595,   105,   111,   540,
     366,   684,   783,   111,   181,  1202,   838,   116,   714,  1101,
     784,  1099,   649,  1124,   358,   776,   158,  1563,  1459,  1553,
    1569,  1970,   135,   425,  1104,  1770,  1508,   135,  1418,  1418,
    1440,  1418,   209,   435,  1418,   598,  1418,  1234,   404,  1418,
    1343,  1110,    56,    57,    58,  1332,  2004,  1353,  1106,  1095,
      64,  1803,  1110,  1499,     1,  1124,  1886,  1242,   741,    17,
    1160,     9,    53,  1734,     1,    22,  1124,  1812,     6,    60,
       9,   184,   697,   364,  1174,     1,  1227,   123,     9,     0,
     841,  1911,    49,  1493,    57,    99,   100,    27,   102,   114,
      86,    57,    55,   107,   108,     9,    31,    31,  2039,     0,
     141,   174,   116,   124,   232,   788,    48,   203,     6,   107,
    1295,    72,  1093,   750,   751,   165,   161,   123,  1863,   133,
    1101,  1102,   225,   244,    39,     1,   175,    63,  1662,  1432,
    1503,  1910,   152,  1114,  1115,   277,    96,  1229,    57,     1,
     213,  1428,   251,    32,   256,    49,   160,    22,    92,    21,
    1560,   271,  1133,  1134,   159,   252,    21,    49,   203,    17,
    2078,   798,   218,  1348,    40,    41,    42,    43,    44,  1542,
     161,  1217,   176,    30,  1958,   115,  1921,   191,   256,  1482,
    2138,  1982,     9,    87,   124,   256,   295,   968,   176,   203,
     232,   354,   369,    87,  1567,   237,    27,   406,   113,    75,
      76,   256,   203,    96,   829,   216,   161,    64,   989,    66,
     171,   410,  2442,  2402,  1624,   776,  1274,   138,    61,   125,
     171,   142,   203,   414,    57,   236,  1284,   218,   219,  1966,
      57,   256,   256,   209,   177,   249,   232,   138,   248,   249,
      64,   142,    66,   257,   289,   187,    89,    90,  1985,  1986,
     306,   262,  1989,   204,     0,   244,   256,    56,   367,  1546,
      59,   452,   199,   176,    63,   176,  2011,   476,  2498,    57,
      70,   342,  1341,   212,   142,   232,   287,   476,  1122,   200,
     841,   272,    49,  1341,   115,  1266,  2475,  1345,   129,   410,
     228,   282,   389,   456,   237,  2032,  1830,   240,  1142,   200,
    2037,    70,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   994,   301,  1094,   212,  1296,    70,   256,   955,  1865,
     340,  2151,   237,   451,  1995,   256,   446,   266,    70,  1635,
     443,   376,   445,   446,   289,  1641,   228,   445,   446,   452,
    2258,  2259,  1629,  2122,   452,   321,  1756,   256,   457,   363,
     177,   447,  1440,   251,  1836,   253,   469,   232,   256,   472,
     473,   469,   475,  1845,   290,   478,   479,   256,   266,   309,
     308,  1152,  1153,  1154,  1355,   256,  1822,   391,   271,  1825,
     783,   169,   503,  2184,  1165,  1166,   312,  2171,   402,   232,
     357,  1172,   504,   354,   497,   252,    49,   411,   412,    70,
     414,   415,  1775,   516,   501,  1493,   420,   346,   516,  1782,
     451,   461,   274,   241,   241,    56,  2153,   110,  1498,   172,
     341,   365,    63,   437,   322,   241,   504,   540,   541,  1112,
       9,   504,   540,   541,   353,   223,   482,  1000,  1001,   453,
     341,   347,   335,     6,   316,    56,  1733,   452,   346,   504,
      70,  2196,    63,   357,   330,   504,   370,    56,   503,  1440,
    1833,   462,   504,   357,    63,   401,   579,   343,  1242,   268,
    2388,   579,  1560,   341,   331,     6,   482,   416,   321,   504,
     446,   462,   503,   592,   504,   598,   510,   402,  1557,   500,
     599,  2236,   436,  2238,  1540,   456,   402,     9,  1479,  1557,
     504,   515,   793,   499,   504,   503,   504,   331,  1814,  2450,
    2451,  1492,  1493,   411,   451,  1888,   504,  2188,   416,     1,
     534,   460,   460,   465,  2269,  1571,   388,   462,   462,    11,
     451,   498,   505,  1684,   497,   644,  1624,   650,    50,  1597,
     554,   340,   556,   501,   504,   559,   560,   504,   562,  1530,
     451,  1651,   955,  1750,  2299,  2300,   504,   504,  2107,  1184,
     123,   503,   460,   503,   967,   968,   969,  1204,  1855,  1754,
     232,   510,  2402,   504,  1348,   589,    58,   256,   504,  1560,
     594,   453,   496,   504,   442,   576,   989,   601,   453,   451,
     357,   504,   464,   504,   498,   504,  2333,   396,   398,   464,
    2337,   510,   401,   504,   498,  1892,   504,  2053,   451,   376,
     451,   504,   510,    34,    96,   606,    98,  1990,   100,    26,
    1601,   308,   153,   504,  2376,   458,   108,   268,   504,   398,
     463,  1612,  1613,  2006,   256,  1616,  2046,   196,  2048,   392,
     468,   468,   159,  1624,   398,   659,   503,   256,   448,   212,
      33,   828,   468,   762,  2027,   188,   398,   268,   767,   772,
     773,  2619,   450,   504,   328,   451,   242,  2616,  1756,   268,
     458,   459,   781,   786,   234,   463,   203,  2087,   256,   448,
       0,   212,   164,  2056,   451,  1466,   700,  2060,   251,   703,
     253,  1094,   244,   256,   448,  1469,  1098,   256,  1100,   340,
     212,  1759,    28,   266,   357,   504,   448,   451,   287,  1112,
    2447,  2448,  2457,  2458,   783,  1118,  1762,  1119,     6,  1121,
     251,     9,   253,   376,  1126,   256,  2099,   398,     9,   340,
    2140,   498,   244,   245,  2435,   266,   256,   200,  1140,    38,
     271,   340,  1145,  2049,   256,   218,   308,    46,   441,  1152,
    1153,  1154,  1155,   446,   266,   396,   252,  1160,   170,   322,
     401,   423,  1165,  1166,  1167,  1168,  1169,  1170,  1171,  1172,
     349,  1174,  1175,   290,  2256,   257,   293,   448,   398,    32,
      30,  2068,   153,   346,   167,   396,   956,   957,   330,   196,
     401,   322,  1861,   963,    82,  2067,  1433,   396,   451,   256,
     126,  1204,   401,  1861,  1862,   229,    94,   262,   384,   329,
     451,    99,   256,   225,    64,   346,    66,   504,   138,   301,
    2193,   233,   142,  1460,  1227,   504,  2199,   271,   448,   362,
    1232,  1605,   287,   406,   346,   330,  2209,   397,   458,   503,
     451,   314,  1244,   463,   421,   498,   357,  2393,   308,   376,
    2153,  1414,   451,   416,    31,  1947,   418,   110,   410,  2146,
     281,   282,   283,   504,  1486,  1487,  1488,  1489,   262,    64,
    2142,    66,   329,   229,   446,  1656,   747,   321,   341,  2305,
     200,  2307,   504,   446,   267,   416,   212,  1000,  1001,   285,
     161,   122,  2593,   389,   165,   504,  1579,   460,   967,   968,
     969,  1010,  1246,   476,   416,   317,  2279,  1310,   390,  2282,
    2283,   451,   211,   201,   262,    92,   207,   208,  1899,   482,
     989,  2467,  2295,   344,   212,   497,   504,  2038,  2039,   460,
     256,   212,   510,     6,    84,   452,  2309,  2310,   334,   287,
     266,   504,   341,   463,   243,   270,   370,   510,   460,   138,
     410,   433,   823,   453,   280,   246,   247,   245,  2046,     6,
    2048,   503,   504,   251,   504,   253,   265,  2516,   256,   451,
     258,   259,   260,   504,  2054,   256,   264,  1660,   266,   510,
    1754,  1325,  1095,   271,   561,   266,  1099,   498,  2260,   406,
     510,   385,   256,  1106,  1107,  2368,  2422,  1110,   510,  2087,
    1113,   501,   252,   256,   329,  1118,   463,  1120,   503,  1122,
    1123,  1124,  1125,  2210,   370,   303,   476,   337,  2613,   318,
     346,   341,   504,  1092,   187,  1094,  2106,  2085,  1097,  1142,
    1327,   379,  1101,   257,   322,   274,  1111,    26,     6,  2412,
     451,  2590,  2483,  1112,  2578,   466,   467,   210,   503,  1118,
     471,  1221,  2140,   510,   203,  2650,  1233,   252,   346,   476,
     504,     6,  1137,  1466,   394,   346,   510,   271,  1667,  1471,
    1139,   274,  1141,   117,   118,   119,  1145,   454,   212,   378,
    1377,   331,   346,  1152,  1153,  1154,  1155,   406,  2180,   377,
     416,  1160,   504,   419,   420,   129,  1165,  1166,  1167,  1168,
    1169,  1170,  1171,  1172,  1217,  1174,  1175,  1284,  2498,  2498,
    1747,  2498,   159,   481,  2498,  2096,  2498,   157,   199,  2498,
     106,   451,   256,   387,  1237,     9,   406,   504,   416,  2663,
     116,   499,   266,   458,  1203,   416,   331,  2324,   463,   212,
     428,   429,   216,   217,     4,   220,  2680,  2693,   351,   388,
     353,  1554,   416,  2134,  2135,   503,   504,   476,  1227,    19,
    1229,  1274,   236,   232,   455,   212,   457,  1789,   317,    29,
     195,  1284,   460,    57,   473,  1352,  1579,   252,   251,   460,
     253,  1803,   470,   256,   510,   394,    12,   256,   262,    15,
      16,   231,  1953,   266,   238,  2513,   476,   231,    54,   170,
     262,   125,   490,    63,   251,   451,   253,   495,   252,   256,
    1285,   435,   346,   287,   502,  1328,   504,     9,   422,   266,
     424,  1145,   510,   504,   212,   287,   750,   751,  1341,   510,
     175,   256,  1345,    89,  1578,  2009,   171,     1,   307,   256,
     309,  1310,   323,   324,   212,   451,   510,   171,  1651,   322,
     106,  1175,   292,  1656,   225,   292,  2574,   291,  1895,   340,
     116,  2242,   233,  1332,   256,    57,  1379,   212,   256,   204,
     494,  1379,   546,   346,   798,   322,   351,  1454,   266,  1645,
     504,  1684,   416,   251,   359,   253,  1361,   324,   256,  1358,
    2378,   335,  2380,   177,   356,   287,   204,    61,   266,   346,
     351,  1414,   256,   347,  2491,  2492,   251,     8,   253,   751,
     584,   256,   451,   394,    13,    14,  2591,  2592,   411,   356,
     177,   266,   783,  2029,   232,    89,    90,  1440,   212,  2012,
     187,   285,   286,    32,   306,   107,    37,  2169,   612,  2450,
    2451,  1101,  2453,   416,  2531,  2620,   317,  2544,  2535,  2536,
       8,  2132,  1951,   210,   322,   127,   798,   241,   346,  1428,
     220,   412,   413,   504,  2639,   458,   338,   321,  2005,   416,
     463,     8,   256,   446,  1134,   329,   510,   322,   346,    37,
    1493,   449,   266,   240,  2067,  1562,   358,   460,   750,   751,
     458,   445,   252,   437,   166,   463,   262,  1466,  1412,   212,
      37,   346,   262,  1417,  1418,   452,  1420,    16,   462,  1586,
    2502,  1113,   474,   460,   262,    47,   188,  2692,  2399,   187,
     212,   287,   187,  1125,    33,   262,   500,  1540,   416,   503,
      62,   504,   204,    42,  1611,   405,   798,   510,   423,   287,
     204,   503,   210,   256,  1557,   210,   212,  1560,   416,   241,
     287,   277,   278,   266,   232,   315,  1598,   504,  1571,  2142,
     320,   458,   346,   510,   256,  1867,   463,   405,   232,  1387,
     102,   416,   460,  1391,   266,   301,   302,  1546,  2459,   448,
    1398,   394,  2463,  2464,  1597,  1554,   450,   448,   448,   458,
     256,   351,   460,   451,   463,   459,   451,   458,   458,   359,
     266,  1570,   463,   463,   451,   449,   967,   968,   969,   463,
    1579,  1624,   372,    35,   458,   460,    38,  1626,    57,   463,
     453,  1590,   510,    45,    46,   473,   453,   475,   989,   451,
     478,   464,   416,   346,  1647,  1710,   504,   464,     2,  1647,
     218,   401,   510,     7,   404,  1720,  1721,  1191,   555,  1724,
    1619,  1195,   412,   560,   346,    96,    97,   321,   503,   504,
    1629,   173,   307,   423,   309,   510,  1169,  1170,  1171,    91,
     299,   300,    53,    54,    11,   504,   460,  2260,  1167,  1168,
     346,  1690,  1651,   156,   468,   158,   156,  1656,   158,   451,
     351,   451,   353,   451,   454,  1609,   485,   486,   487,   488,
     232,    68,  1711,   416,   351,  1674,   353,   239,    89,   485,
     486,   487,   488,   451,   504,  1684,  2157,   351,   250,   353,
     504,    58,   451,  2453,   416,   106,   510,  1696,   451,   252,
    1699,   254,  1093,  1094,   252,   116,   254,   340,   160,  1752,
    1101,  1102,   252,  1756,   254,    35,  1759,   460,    38,  1762,
     416,  1665,  1666,  1114,  1115,    45,    46,   504,    65,    96,
      67,    98,  1676,   100,  1733,  1153,  1154,   189,   460,  1683,
     256,   108,  1133,  1134,   256,   967,   468,   969,   468,   199,
    1749,   400,   504,   442,  1145,   401,  2088,   451,   410,   211,
    1867,  1152,  1153,  1154,   460,    63,    59,   510,  1712,  1812,
     256,    91,   232,   451,  1165,  1166,  1167,  1168,  1169,  1170,
    1171,  1172,   504,   328,  1175,  2081,   401,   504,   510,   351,
     352,   256,   485,   486,   487,   488,   229,   164,    26,  2132,
     451,   451,  2562,   107,   366,  2565,   368,   451,   504,   256,
     312,   256,  1919,   265,   510,   272,   454,  1208,  1861,  1862,
    1863,  1928,  1929,   620,   621,   622,   623,  1771,  1900,  1901,
    1902,  1903,  1904,  1905,  1906,  1907,  2596,  2597,    23,   102,
     160,  2601,  2602,   437,   451,   165,  1790,   188,     9,   122,
     454,    12,  1796,    17,    15,    16,  1855,  1856,   451,   226,
    1251,    86,  1648,  1649,  1650,   504,   318,   394,  1654,   189,
     272,  1657,  1658,   351,   402,  1266,   401,    56,  1921,   503,
     423,   262,    39,   451,   237,  1884,   504,   402,   331,   451,
     257,   211,   506,  1892,   504,   419,   316,   310,   394,   261,
     451,     7,   451,  1946,   394,  1296,   255,    82,  1946,   504,
     321,   503,   394,   451,   325,   326,   451,   366,  1961,   451,
     451,  1920,    85,  1966,    99,    85,   378,   124,  1927,  1928,
     451,   394,    22,   389,   301,   306,   498,   304,   451,   391,
    1979,   309,  1985,  1986,   204,   265,  1989,   504,  1947,   504,
     394,   501,   499,  1952,   451,   366,   384,   232,  1957,  1958,
     504,   446,   254,   218,  1355,   446,   122,   504,  2011,  1360,
     462,   382,   383,    26,   510,   442,   400,   306,   410,   447,
     256,  2088,   348,   445,   504,   462,   504,   442,  1932,  2032,
    2097,   376,   451,   451,  2037,  2038,  2039,   336,   318,  2038,
    2039,   399,   369,  2046,   114,  2048,  1950,   169,   462,   462,
     187,  2607,   451,  2012,   462,   451,   462,   504,   256,    24,
      25,   473,   462,   390,   462,  1969,   201,  1971,   462,   451,
     446,  1975,   462,   462,   504,   309,   453,    30,   504,  1983,
     504,  2570,  2085,   403,  2087,   130,   196,   131,   415,  1440,
     417,   446,   132,   386,   133,   136,   134,   783,   378,  2058,
      65,   135,    67,   101,    69,   137,   433,   441,  2067,  2068,
     497,   391,   462,   446,   140,  1466,    49,  2076,   404,   442,
     445,   256,   439,   258,   259,   260,   445,   143,  1479,   264,
     144,   196,   499,     9,   145,   271,  2095,  2140,   103,   104,
     105,  1492,  1493,   146,    31,   147,    49,   148,   196,   149,
    2153,   150,   112,   220,  2157,   151,   277,   278,   448,  2157,
     448,   448,   114,   448,   448,  2124,   448,   446,   303,   410,
     451,   312,   109,  2132,  2466,   197,  2080,   504,   446,  1530,
     301,   302,   203,  2142,   376,   339,   223,  2146,   153,   272,
     155,   294,   256,   473,   298,   231,   165,   162,   501,   501,
     165,   484,   128,  1554,   175,   365,    82,   446,   228,  1560,
     168,   129,  2171,    49,   446,   196,   228,   204,   299,    56,
     204,  2180,  2514,    99,   451,   272,   504,   252,   237,   165,
     423,   299,   509,  2236,   508,  2238,   203,   446,   446,   295,
     380,   276,   377,   362,    30,    17,   203,   203,   442,   128,
    1601,   139,   365,    49,   203,   446,  2215,   141,     8,   129,
     423,  1612,  1613,  2266,   196,  1616,  2269,   451,  2266,   955,
     501,   501,   203,  1624,   446,     9,     7,   294,   504,   503,
     203,   967,   968,   969,   503,   498,   498,   252,    49,   254,
     297,   188,   262,   428,   429,   314,   291,  2300,  2591,  2592,
     461,  2260,   330,   989,   113,  1656,   271,   313,   436,    47,
     411,   203,   203,   102,   294,   361,    49,  2320,   361,   380,
     262,   237,  2320,   296,   492,   201,    95,  2620,   292,    56,
    2333,     8,    49,   110,  2337,   470,   212,   262,   456,   451,
     337,   262,   262,   109,   337,   210,  2639,   481,   107,   451,
     221,   299,   501,   321,   232,   490,   285,   367,   418,   119,
     495,   196,   337,    49,     7,  2324,   321,   502,   306,   504,
     425,    46,    92,    26,   127,  2378,   201,  2380,   148,   206,
     256,    75,   258,   259,   260,   238,   150,   221,   264,   177,
     266,   469,   519,  2396,  2298,   410,  1866,   286,   425,  2692,
     497,  1009,  1418,   773,   740,  2588,  2661,   788,  1094,  1957,
    2155,  1859,  2371,  1099,  2181,  2707,  1018,  2181,  2051,   779,
    1106,  2362,  1200,  1723,  1110,  1806,  1722,   303,  1758,  1217,
     841,  1452,  2049,  1479,  1454,  1498,  2234,  2341,  1124,  1501,
    2053,  2345,  1825,  1543,  2447,  2448,  2252,  2450,  2451,  1550,
    2453,  2450,  2451,  2076,  1853,  2414,  1305,  1561,  2088,  1145,
    2095,  1879,  2421,  1310,  1929,  2424,  1152,  1153,  1154,  1155,
     346,  1591,  2109,  1908,  1160,  1339,  1341,  1125,   443,  1165,
    1166,  1167,  1168,  1169,  1170,  1171,  1172,  2135,  1174,  1175,
    1928,  2303,  1355,  2650,  1928,  1639,  2402,  2401,  2308,  2128,
    2313,   377,  1530,  2128,  2128,  1448,  2128,  1328,   299,   691,
    2513,   152,   270,  2472,     6,  1895,   242,     9,  1204,   972,
     745,   417,  1183,  2524,   509,  2390,   215,  2486,   493,  2433,
    2434,  1858,  2491,  2492,   449,  2065,   705,  1916,  1553,   504,
     416,  2540,  2593,  2502,    -1,  2449,    -1,    -1,  1899,    -1,
     558,  1237,   428,   429,    -1,    -1,    -1,    49,    -1,    -1,
      -1,  2465,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2574,  2531,    -1,    -1,    -1,  2535,  2536,    -1,    -1,
      -1,    -1,    -1,    -1,   460,    -1,  2490,    -1,  1274,  2548,
      82,  2495,  2496,    -1,   470,    87,    -1,    -1,  1284,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,
    2613,  2515,    -1,    -1,   490,    -1,  2615,    -1,    -1,   495,
      82,    -1,    -1,    -1,    -1,    -1,   502,    -1,   504,    -1,
      -1,    -1,  2591,  2592,   510,    -1,    -1,    99,    -1,  2543,
      -1,    -1,  2546,  2547,    -1,     6,  1332,  2650,     9,    -1,
      -1,  2610,    -1,    -1,    -1,  1341,    -1,  2656,  2657,  1345,
      -1,  2620,    -1,    -1,    -1,    -1,    -1,     6,    -1,    -1,
       9,    -1,    -1,  2632,  2633,    -1,    -1,    -1,    -1,    -1,
    2639,  2684,  2586,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2696,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2664,    -1,    -1,    -1,   201,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     212,    82,    -1,    -1,    -1,    -1,    -1,    -1,   190,    -1,
      -1,  2690,    -1,  2692,    -1,    -1,    -1,    -1,    99,   201,
      -1,    -1,  1428,    82,    -1,  2096,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   245,  1440,    -1,    -1,    -1,    -1,   251,
      99,   253,    -1,    -1,   256,    -1,   258,   259,   260,    -1,
      -1,    -1,   264,   112,   266,    -1,    -1,    -1,    -1,   271,
    1466,  2132,    -1,  2134,  2135,    -1,    -1,    -1,    -1,    -1,
      -1,   152,    -1,    -1,   256,    -1,   258,   259,   260,    -1,
      -1,    -1,   264,    -1,    -1,    -1,    -1,  1493,    -1,    -1,
      -1,   303,    -1,    -1,    -1,    -1,   308,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     322,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     201,   303,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   212,    -1,    -1,   346,    -1,    -1,    -1,    -1,    -1,
    1546,    -1,   201,    -1,    -1,   357,    -1,    -1,  1554,    -1,
      -1,  1557,    -1,   212,  1560,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   245,   377,    -1,    -1,    -1,   228,
     251,  2242,   253,    -1,    -1,   256,    -1,   258,   259,   260,
      -1,    -1,    -1,   264,    -1,   266,   245,    -1,    -1,    -1,
     271,  1597,   251,    -1,   253,   377,    -1,   256,   410,   258,
     259,   260,    -1,    -1,   416,   264,    -1,   266,    -1,    -1,
      -1,    -1,   271,    -1,    -1,    -1,   428,   429,  1624,    -1,
      -1,    -1,   303,  1629,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   322,    -1,    -1,   303,  1651,   428,   429,   460,    -1,
    1656,    -1,    -1,    -1,    -1,    -1,    -1,   439,   470,    -1,
      -1,    -1,    -1,   322,   476,   346,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   490,    -1,
      -1,    -1,    -1,   495,    -1,    -1,   498,   346,   470,    -1,
     502,    -1,   504,    -1,    -1,    -1,   377,    -1,   510,   481,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   490,    -1,
      -1,    -1,    -1,   495,    -1,    -1,    -1,   499,   377,    -1,
     502,   503,   504,    -1,    -1,    -1,    -1,  1733,  2399,    -1,
      -1,    -1,    -1,    -1,    -1,   416,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1752,   428,   429,    -1,
    1756,    -1,    -1,  1759,    -1,    -1,    -1,   416,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   428,
     429,    -1,   453,    -1,    -1,    -1,    -1,    -1,    -1,   460,
      -1,    -1,    -1,   464,    -1,    -1,    -1,    -1,  2459,   470,
      -1,    -1,  2463,  2464,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   460,    -1,    -1,    -1,    -1,  1812,    -1,     1,   490,
       3,   470,     5,    -1,   495,    -1,    -1,    10,    -1,    -1,
      -1,   502,    -1,   504,    -1,    18,    -1,    -1,    -1,   510,
      -1,   490,    -1,    -1,    -1,    -1,   495,    -1,    -1,    -1,
      -1,    -1,    -1,   502,    -1,   504,    -1,    -1,    -1,  1855,
    1856,   510,    -1,    -1,    -1,  1861,  1862,  1863,    51,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,
      -1,    74,    -1,    -1,    -1,    -1,  1892,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1921,    -1,    -1,   111,    -1,
    2591,  2592,    -1,    -1,    -1,    -1,   119,    -1,   121,    -1,
      -1,    -1,    -1,    -1,    -1,   128,    -1,   130,   131,   132,
     133,   134,   135,   136,   137,    -1,   139,   140,   141,  2620,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2639,    -1,
     163,    -1,    -1,    -1,    -1,   168,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    35,    -1,
      -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      -1,    -1,   195,    -1,    -1,  2011,    -1,    -1,    -1,   202,
      -1,    -1,   205,   206,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2692,   215,    -1,    -1,    -1,    -1,    -1,    -1,   222,
      -1,   224,    -1,    -1,   227,    -1,    -1,    -1,    -1,    -1,
    2046,    -1,  2048,    -1,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2068,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2076,    -1,    64,    65,    66,    67,   269,    -1,    -1,  2085,
     273,  2087,   275,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   285,    -1,    -1,    -1,    -1,    -1,   291,   292,
      -1,   294,   295,   296,   297,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   311,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2132,    -1,     1,    -1,
       3,   324,     5,    -1,  2140,    -1,    -1,    10,    -1,    -1,
    2146,    -1,   189,    -1,    -1,    18,    -1,    -1,    -1,    -1,
      -1,   198,    -1,    -1,    -1,    -1,   349,   350,    -1,    -1,
      -1,    -1,    -1,    -1,   211,    -1,    -1,   360,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,
      -1,   374,   375,    -1,    -1,    -1,    -1,    60,   381,    -1,
      -1,    -1,   385,    -1,    -1,    -1,   243,    -1,    71,    -1,
     393,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     403,    -1,    -1,    -1,    -1,    88,   263,   209,   265,   412,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   421,    -1,
    2236,    -1,  2238,   426,   427,    -1,    -1,   430,   111,   432,
      -1,   288,    -1,   235,    -1,   438,   119,    -1,   121,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   451,    -1,
     252,    -1,    -1,  2269,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   318,    -1,    -1,    -1,    -1,   469,    -1,    -1,   152,
      -1,    -1,   475,    -1,    -1,    -1,    -1,   480,    -1,    -1,
     163,    -1,    -1,   285,  2300,   168,    -1,    -1,   345,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   501,    -1,
      -1,    -1,    -1,   305,   507,    -1,    -1,   309,    -1,    -1,
      -1,    -1,   195,    -1,   371,    -1,    -1,    -1,    -1,   202,
      -1,   378,   205,   206,    -1,   327,    -1,    -1,    -1,    -1,
      -1,   333,   215,    -1,   391,    -1,    -1,    -1,   395,   222,
      -1,   224,    -1,    -1,   227,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2378,    -1,  2380,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   269,   444,    -1,     1,
     273,     3,   275,     5,    -1,    -1,    -1,    -1,    10,    -1,
      -1,    -1,   285,   405,    -1,    -1,    18,    -1,    -1,    -1,
      -1,    -1,   414,    -1,    -1,    -1,   473,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   483,    -1,   311,   431,
      -1,    -1,   489,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      52,   324,    -1,    -1,    -1,    -1,    -1,    -1,    60,   451,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    -1,    74,    -1,    -1,    82,   349,   350,    -1,    -1,
     472,    -1,    -1,    -1,    -1,    -1,    88,   360,    -1,    -1,
      -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,   491,
      -1,   374,   375,    -1,    -1,    -1,   498,   499,   381,   111,
      -1,    82,   385,    -1,    -1,    -1,    -1,   119,    -1,   121,
     393,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,
     403,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   412,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   421,    -1,
     152,    -1,    -1,   426,   427,    -1,    -1,   430,    -1,   432,
      -1,   163,    -1,    -1,    -1,   438,   168,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   451,    -1,
      -1,    -1,    -1,   190,    -1,  2591,  2592,    -1,     1,    -1,
       3,    -1,     5,   195,   201,    -1,   469,    10,    -1,    -1,
     202,    -1,   475,   205,   206,    18,    -1,   480,    -1,    -1,
      -1,    -1,    -1,   215,  2620,    -1,    -1,    -1,    -1,    -1,
     222,    -1,   224,    -1,    -1,   227,    -1,    -1,    -1,    -1,
     201,    -1,    -1,  2639,   507,    -1,    -1,    -1,    51,    52,
      -1,   212,    -1,    -1,    -1,    -1,    -1,    60,    -1,   256,
      -1,   258,   259,   260,    -1,    -1,    -1,   264,    71,    -1,
      -1,    74,    -1,    -1,    -1,    -1,    -1,   269,    -1,    -1,
      -1,   273,    -1,   275,   245,    88,    -1,    -1,    -1,    -1,
     251,    -1,   253,   285,    -1,   256,  2692,   258,   259,   260,
      -1,    -1,    -1,   264,    -1,   266,   303,    -1,   111,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,   121,   311,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   324,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   303,    -1,    -1,    -1,    -1,    -1,    -1,   152,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   349,   350,    -1,
     163,   322,    -1,    -1,    -1,   168,    -1,    -1,   360,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     377,    -1,   374,   375,    -1,   346,    -1,    -1,    -1,   381,
      -1,    -1,   195,   385,    -1,    -1,    -1,    -1,    -1,   202,
      -1,   393,   205,   206,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   403,   215,    -1,    -1,    -1,   377,    -1,    -1,   222,
     412,   224,    -1,    -1,   227,    -1,    -1,    -1,    -1,   421,
      -1,   428,   429,    -1,   426,   427,    -1,    -1,   430,    -1,
     432,    -1,   439,    -1,    -1,    -1,   438,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   416,    -1,    -1,    -1,   451,
      -1,    -1,    -1,    -1,    -1,    -1,   269,   428,   429,    -1,
     273,    -1,   275,   470,    -1,    -1,    -1,   469,    -1,    -1,
      -1,    -1,   285,   475,   481,    -1,    -1,    -1,   480,    -1,
      -1,    -1,    -1,   490,    -1,    -1,    -1,    -1,   495,   460,
      -1,     6,   499,    -1,     9,   502,   503,   504,   311,   470,
      -1,    -1,    -1,    -1,    -1,   507,    -1,    -1,    -1,    -1,
      -1,   324,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   490,
      -1,    -1,    -1,    -1,   495,    -1,    -1,    -1,    -1,    -1,
      -1,   502,    -1,   504,    -1,    -1,   349,   350,    -1,   510,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   360,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   374,   375,    -1,    -1,    -1,    -1,    82,   381,    -1,
      -1,    -1,   385,    -1,     3,    -1,     5,    -1,    -1,    94,
     393,    10,    -1,    -1,    99,    -1,    -1,    -1,    -1,    18,
     403,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   412,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   421,    -1,
      -1,    -1,    -1,   426,   427,    -1,    -1,   430,    -1,   432,
      -1,    -1,    51,    52,    -1,   438,    -1,    -1,    -1,    -1,
      -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    -1,    -1,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   469,    -1,    -1,    88,
      -1,    -1,   475,    -1,    -1,    -1,    -1,   480,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   111,    -1,    -1,    -1,   201,    -1,    -1,    -1,
     119,    -1,   121,    -1,   507,    -1,    -1,   212,    -1,   128,
      -1,   130,   131,   132,   133,   134,   135,   136,   137,    -1,
     139,   140,   141,    -1,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,    -1,    -1,    -1,    -1,    -1,    -1,
     245,    -1,    -1,    -1,   163,    -1,   251,    -1,   253,   168,
      -1,   256,    -1,   258,   259,   260,    -1,    -1,    -1,   264,
      -1,   266,    -1,    -1,    -1,    -1,   271,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   195,    -1,    -1,    -1,
      -1,    -1,    -1,   202,    -1,    -1,   205,   206,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   215,    -1,   303,    -1,
      -1,    -1,    -1,   222,    -1,   224,    -1,    -1,   227,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,    -1,     6,
      -1,    -1,     9,    -1,    -1,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   346,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     269,    -1,    -1,    -1,   273,    -1,   275,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   285,    -1,    -1,    -1,
      -1,    -1,   377,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   311,    -1,    -1,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   324,    -1,    -1,    -1,    -1,
      -1,   416,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   428,   429,    -1,    -1,    -1,    -1,    -1,
     349,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   360,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   460,   375,    -1,    -1,    -1,
      -1,    -1,   381,    -1,    -1,   470,   385,    -1,    -1,    -1,
      -1,    -1,   159,    -1,   393,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   169,    -1,   403,   490,    -1,    -1,    -1,    -1,
     495,    -1,    -1,   412,    -1,    -1,    -1,   502,    -1,   504,
      -1,    -1,   421,    -1,    -1,   510,    -1,   426,   427,    -1,
      -1,   430,    -1,   432,   201,    -1,    -1,    -1,    -1,   438,
     207,   208,    -1,    -1,    -1,   212,    -1,    -1,    -1,    -1,
      -1,    -1,   451,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   232,    -1,    -1,    -1,    -1,
     469,    -1,    -1,    -1,    -1,    -1,   475,    -1,   245,   246,
     247,   480,    -1,    -1,   251,    -1,   253,    -1,    -1,   256,
      -1,   258,   259,   260,    -1,    -1,    -1,   264,    -1,   266,
      -1,    -1,    -1,    -1,   271,    -1,     6,    -1,   507,     9,
      -1,    -1,    12,    13,    14,    -1,    -1,   284,    -1,    -1,
      20,    -1,    -1,   290,    -1,    -1,   293,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   301,    -1,   303,    -1,    -1,    -1,
      -1,   308,    -1,    -1,     6,    -1,   313,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   322,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   332,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   346,
      -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     377,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     6,    -1,
      -1,     9,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   416,
     112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,
      -1,   428,   429,    -1,    -1,    -1,    -1,    -1,    -1,   169,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   448,    -1,   450,    -1,   452,    -1,    -1,   455,    -1,
     457,   458,   459,   460,    -1,   462,   463,    -1,    -1,    -1,
      -1,   201,    -1,   470,    82,    -1,    -1,   207,   208,    -1,
      -1,    -1,   212,    -1,    -1,    -1,    94,    -1,    -1,    -1,
      -1,    99,    -1,   490,    -1,    -1,    -1,    -1,   495,    -1,
      -1,    -1,    -1,    -1,    -1,   502,    -1,   504,    -1,   201,
      -1,    -1,    -1,   510,    -1,   245,   246,   247,    -1,    -1,
     212,   251,    -1,   253,    -1,    -1,   256,    -1,   258,   259,
     260,    -1,    -1,    -1,   264,    -1,   266,    -1,    -1,    -1,
      -1,   271,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   245,   284,    -1,    -1,    -1,    -1,   251,
     290,   253,    -1,   293,   256,    -1,   258,   259,   260,    -1,
      -1,   301,   264,   303,   266,    -1,    -1,    -1,   308,   271,
      -1,    -1,    -1,   313,     6,    -1,    -1,     9,    -1,    -1,
      -1,    -1,   322,   201,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   332,    -1,   212,    -1,    -1,    -1,    -1,    -1,
      -1,   303,    -1,    -1,    -1,    -1,   346,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     322,    -1,    -1,    -1,    -1,    -1,    -1,   245,    -1,    -1,
      -1,    -1,    -1,   251,    -1,   253,    -1,   377,   256,    -1,
     258,   259,   260,    -1,   346,    -1,   264,    -1,   266,    -1,
      82,    -1,    -1,   271,    -1,    -1,    -1,    -1,     6,    -1,
      -1,     9,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   377,   416,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   303,    -1,    -1,   428,   429,
      -1,    -1,    -1,    -1,    -1,    -1,     6,    -1,    -1,     9,
      -1,    -1,    -1,    -1,   322,    -1,    -1,    -1,   448,    -1,
     450,    -1,   452,    -1,   416,   455,    -1,   457,   458,   459,
     460,    -1,   462,   463,    -1,    -1,   428,   429,   346,    -1,
     470,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     490,    99,    -1,    -1,    -1,   495,    -1,    -1,   460,   377,
      -1,    -1,   502,    -1,   504,    -1,    -1,    -1,   470,   201,
     510,    -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     212,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   490,    99,
      -1,    -1,    -1,   495,    -1,    -1,    -1,    -1,   416,    -1,
     502,    -1,   504,    -1,    -1,    -1,    -1,    -1,   510,    -1,
     428,   429,    -1,   245,    -1,    -1,    -1,   165,    -1,   251,
      -1,   253,    -1,    -1,   256,    -1,   258,   259,   260,    -1,
      -1,    -1,   264,    -1,   266,    -1,    -1,     6,    -1,   271,
       9,    -1,   460,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   470,   201,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   212,    -1,    -1,    -1,    -1,    -1,
      -1,   303,   490,    -1,    -1,    -1,    -1,   495,    -1,    -1,
      -1,    -1,    -1,    -1,   502,    -1,   504,    -1,    -1,    -1,
     322,   201,   510,    -1,    -1,    -1,    -1,   245,    -1,    -1,
      -1,    -1,   212,   251,    -1,   253,    -1,    -1,   256,    -1,
     258,   259,   260,    82,   346,    -1,   264,    -1,   266,    -1,
      -1,    -1,    -1,   271,    -1,    -1,    -1,    -1,    -1,    -1,
      99,    -1,    -1,    -1,    -1,   245,    -1,    -1,    -1,    -1,
      -1,   251,    -1,   253,    -1,   377,   256,    -1,   258,   259,
     260,    -1,    -1,    -1,   264,   303,   266,     6,    -1,    -1,
       9,   271,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     6,   322,    -1,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   416,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   303,    -1,    -1,   428,   429,   346,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   322,    -1,   446,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,   460,   377,
      -1,    -1,   201,    82,    -1,    -1,   346,    -1,   470,    -1,
      -1,    -1,    -1,   212,    -1,    -1,    -1,    -1,    -1,    82,
      99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   490,    -1,
      -1,    -1,    -1,   495,    -1,    -1,    99,   377,   416,    -1,
     502,    -1,   504,    -1,    -1,    -1,   245,    -1,   510,    -1,
     428,   429,   251,    -1,   253,    -1,    -1,   256,    -1,   258,
     259,   260,    -1,     6,    -1,   264,     9,   266,    -1,    -1,
      -1,    -1,   271,    -1,    -1,    -1,   416,    -1,    -1,    -1,
      -1,    -1,   460,    -1,    -1,    -1,    -1,    -1,   428,   429,
      -1,    -1,   470,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   303,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   490,    -1,    -1,    -1,    -1,   495,    -1,    -1,
     460,    -1,   201,   322,   502,    -1,   504,    -1,    -1,    -1,
     470,    -1,   510,   212,    -1,    -1,    -1,    -1,   201,    82,
      -1,    -1,    -1,    -1,   484,    -1,    -1,   346,    -1,   212,
     490,    -1,    -1,    -1,    -1,   495,    99,    -1,    -1,    -1,
      -1,    -1,   502,    -1,   504,    -1,   245,    -1,    -1,    -1,
     510,    -1,   251,    -1,   253,    -1,    -1,   256,   377,   258,
     259,   260,   245,    -1,    -1,   264,    -1,   266,   251,    -1,
     253,    -1,   271,   256,    -1,   258,   259,   260,    -1,     6,
      -1,   264,     9,   266,    -1,    -1,    -1,    -1,   271,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   416,    -1,    -1,
      -1,    -1,    -1,    -1,   303,    -1,    -1,    -1,    -1,   428,
     429,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     303,    -1,    -1,   322,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   201,   322,
      -1,   460,    -1,    -1,    -1,    -1,    -1,   346,    -1,   212,
      -1,   470,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   346,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   490,    99,    -1,    -1,    -1,   495,    -1,   377,    -1,
      -1,    -1,   245,   502,    -1,   504,    -1,    -1,   251,    -1,
     253,   510,    -1,   256,   377,   258,   259,   260,    -1,    -1,
      -1,   264,    -1,   266,    -1,    -1,    -1,    -1,   271,    -1,
      -1,   410,    -1,    -1,    -1,    -1,    -1,   416,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   428,
     429,    -1,    -1,   416,    -1,    -1,    -1,    -1,    -1,    -1,
     303,    -1,    -1,    -1,    -1,   428,   429,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,
      -1,   460,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   470,    -1,    -1,   201,    -1,    -1,   460,    -1,    -1,
      -1,    -1,    -1,   346,    -1,   212,    -1,   470,    -1,    -1,
      -1,   490,    -1,    -1,    -1,    -1,   495,    -1,    -1,    -1,
      -1,    -1,    -1,   502,    -1,   504,    -1,   490,    -1,    -1,
      -1,   510,   495,    -1,   377,    -1,    -1,    -1,   245,   502,
      -1,   504,    -1,    -1,   251,    -1,   253,   510,    -1,   256,
      -1,   258,   259,   260,    -1,    -1,    -1,   264,    -1,   266,
      -1,    -1,    -1,    -1,   271,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   416,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   428,   429,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   303,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   322,    -1,   460,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   470,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   346,
       1,    -1,    -1,    -1,    -1,    -1,    -1,   490,    -1,    -1,
      -1,    -1,   495,    -1,    -1,    -1,    -1,    -1,    -1,   502,
      -1,   504,    -1,    -1,    -1,    -1,    -1,   510,    -1,    -1,
     377,    32,    -1,    -1,    35,    -1,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    66,    -1,    -1,    -1,   416,
      -1,    -1,    73,    -1,    75,    76,    77,    78,    79,    80,
      81,   428,   429,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   460,    -1,    -1,    -1,    -1,   119,    -1,
      -1,    -1,    -1,   470,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   490,    -1,    -1,    -1,    -1,   495,    -1,
      -1,    -1,    -1,    -1,    -1,   502,    -1,   504,    -1,   160,
      -1,    -1,    -1,   510,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   175,    -1,    -1,   178,   179,   180,
     181,   182,     1,    -1,   185,   186,    -1,    -1,   189,    -1,
      -1,    -1,    -1,    -1,    -1,   196,    -1,   198,    -1,    -1,
      -1,    -1,    21,   204,    -1,    -1,    -1,    -1,    -1,    -1,
     211,    -1,    -1,    -1,    -1,    -1,    -1,    36,   219,    -1,
      39,    40,    41,    42,    43,    44,    45,    -1,    -1,    -1,
      -1,   232,    -1,    -1,   235,    -1,    -1,    -1,    -1,    -1,
     241,    -1,   243,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   252,    -1,    -1,    73,    -1,    75,    76,    77,    78,
      79,    80,    81,    -1,   265,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   277,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     119,    -1,    -1,    -1,   305,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   318,   319,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   327,    -1,    -1,   330,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   343,    -1,   345,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   171,    -1,    -1,    -1,   175,    -1,    -1,   178,
     179,   180,   181,   182,    -1,    -1,   185,   186,    -1,    -1,
     371,    -1,    -1,    -1,    -1,    -1,    -1,   378,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   204,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   395,    -1,    -1,    -1,    -1,    -1,
     219,    -1,    -1,    -1,   405,    -1,   407,   408,   409,    -1,
      -1,    -1,    -1,   232,    -1,    -1,   235,    -1,    -1,    -1,
      -1,    -1,   241,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   446,    -1,    -1,    -1,    -1,
     451,    -1,    -1,    -1,    -1,   456,    -1,    -1,   277,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   468,    -1,    -1,
      -1,    -1,   473,    -1,    -1,    -1,   477,   478,   479,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,    -1,
     491,    -1,    -1,    -1,    -1,    -1,   497,   498,    -1,    -1,
     319,    -1,    -1,   504,    -1,    -1,    -1,    -1,   327,    -1,
      21,   330,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   343,    36,    -1,    -1,    39,    40,
      41,    42,    43,    44,    45,    -1,   355,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   363,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    -1,    75,    76,    77,    78,    79,    80,
      81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   405,    -1,   407,   408,
     409,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,
      -1,    -1,    -1,    -1,    -1,   434,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   451,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   468,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   477,   478,
     479,    -1,    -1,    -1,    -1,    -1,    -1,   178,   179,   180,
     181,   182,   491,    -1,   185,   186,    -1,    -1,    -1,   498,
      -1,    -1,    -1,    -1,    -1,   504,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    40,    41,    42,    43,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   232,    -1,    -1,   235,    -1,    -1,    -1,    -1,    73,
     241,    75,    76,    77,    78,    79,    80,    81,    32,    -1,
      -1,    35,    -1,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   277,    -1,    -1,    -1,
      64,    -1,    66,    -1,    -1,   119,    -1,    -1,    -1,    73,
      -1,    75,    76,    77,    78,    79,    80,    81,    -1,    -1,
      -1,    -1,    -1,    -1,   305,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   319,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   327,    -1,    -1,   330,
      -1,    -1,    -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,
      -1,    -1,   343,    -1,   178,   179,   180,   181,   182,    -1,
      -1,   185,   186,    -1,   355,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   363,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   219,    82,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   178,   179,   180,   181,   182,    -1,
      -1,   185,   186,    99,   405,   189,   407,   408,   409,    -1,
      -1,    -1,   196,    -1,   198,    -1,    -1,    -1,    -1,    -1,
     204,    -1,    -1,    -1,    -1,    -1,    -1,   211,    -1,    -1,
      -1,    -1,    -1,   434,    -1,   219,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   277,    -1,    -1,    -1,    -1,   232,    -1,
     451,   235,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   243,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   468,   252,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   477,   478,   479,    -1,
      -1,   265,    -1,    -1,    -1,   319,    -1,    -1,    -1,    -1,
     491,    -1,    -1,   277,    -1,    -1,   330,   498,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   201,    -1,    -1,    82,   343,
      -1,    -1,    -1,    -1,    -1,    -1,   212,    -1,    -1,    -1,
      -1,   305,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   318,   319,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   327,    -1,    -1,   330,    -1,    -1,   245,
      -1,    -1,    -1,    -1,    -1,   251,    -1,   253,    -1,   343,
     256,   345,   258,   259,   260,    -1,    -1,    -1,   264,    -1,
     266,    -1,    -1,   407,   408,   409,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   371,    -1,    -1,
      -1,    -1,    -1,    -1,   378,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   303,    -1,    -1,
      -1,   395,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   405,    -1,   407,   408,   409,   322,   201,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   212,    -1,
      -1,    -1,    -1,   477,   478,   479,    -1,    -1,    -1,    -1,
     346,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    -1,   446,    -1,    -1,    -1,    -1,   451,    -1,    -1,
      -1,   245,   456,    -1,    -1,    -1,    99,   251,    -1,   253,
      -1,   377,   256,    -1,   258,   259,   260,    -1,    -1,   473,
     264,    -1,   266,   477,   478,   479,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   491,    -1,    -1,
      -1,    -1,    -1,   497,   498,    -1,    -1,    -1,    -1,    -1,
     416,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   303,
      -1,    -1,   428,   429,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,    -1,
      -1,    -1,   448,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   458,    82,   460,    -1,   462,   463,    -1,    -1,
      -1,    -1,   346,    -1,   470,    -1,    -1,    -1,   201,    82,
      99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   212,
      -1,    -1,    -1,    -1,   490,    -1,    99,    -1,    -1,   495,
      -1,    -1,    -1,   377,    -1,    -1,   502,    -1,   504,    -1,
      -1,    -1,    -1,    -1,   510,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   245,    -1,    -1,    -1,    -1,    -1,   251,    -1,
     253,    -1,    -1,   256,    -1,   258,   259,   260,    -1,    -1,
      -1,   264,   416,   266,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   428,   429,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   448,    -1,    -1,    -1,    82,    -1,
     303,    -1,   201,    -1,   458,    -1,   460,    -1,   462,   463,
      -1,    -1,    -1,   212,    -1,    99,   470,    -1,   201,   322,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   212,
      -1,    -1,    -1,    -1,    82,    -1,   490,    -1,    -1,    -1,
      -1,   495,    -1,   346,    -1,    -1,   245,    -1,   502,    -1,
     504,    99,   251,    -1,   253,    -1,   510,   256,    -1,   258,
     259,   260,   245,    -1,    -1,   264,    -1,   266,   251,    -1,
     253,    -1,    -1,   256,   377,   258,   259,   260,    -1,    -1,
      -1,   264,    -1,   266,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   303,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   416,    -1,    -1,    -1,   201,    -1,    -1,
     303,    -1,    -1,   322,    -1,   428,   429,    -1,   212,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,
      -1,    -1,    -1,    -1,    -1,   448,    -1,   346,    -1,    -1,
      -1,    -1,    -1,   201,    -1,   458,    -1,   460,    -1,   462,
     463,    -1,    -1,   346,   212,    -1,    -1,   470,    -1,    -1,
      -1,    -1,   256,    -1,   258,   259,   260,    -1,   377,    -1,
     264,    -1,   266,    -1,    -1,    -1,    -1,   490,    -1,    -1,
     373,    -1,   495,    -1,   377,    -1,    -1,   245,    -1,   502,
      -1,   504,    -1,   251,    -1,   253,    -1,   510,   256,    -1,
     258,   259,   260,    -1,    -1,    -1,   264,   416,   266,   303,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   428,
     429,    -1,    -1,   416,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   428,   429,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   303,    -1,    -1,    -1,   458,
      -1,   460,   346,   462,   463,    -1,    -1,    -1,    -1,    -1,
      -1,   470,    -1,    -1,   322,    -1,    -1,   460,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   470,    -1,    -1,
      -1,   490,    -1,   377,    -1,    -1,   495,    -1,   346,    -1,
      -1,   484,    -1,   502,    -1,   504,    -1,   490,    -1,    -1,
      -1,   510,   495,    -1,    -1,    -1,    -1,    -1,    -1,   502,
      -1,   504,    -1,    -1,    -1,    -1,    -1,   510,    -1,   377,
      -1,    -1,   416,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   428,   429,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   416,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   460,    -1,    -1,    -1,
     428,   429,    -1,    -1,    -1,    -1,   470,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   490,    -1,    -1,    -1,
      -1,   495,   460,    -1,   462,    -1,    -1,    -1,   502,    -1,
     504,    -1,   470,    -1,    -1,    -1,   510,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   490,    -1,    -1,    -1,    -1,   495,    -1,    -1,
      -1,    -1,    -1,    -1,   502,    -1,   504,    -1,    -1,    -1,
      -1,    -1,   510
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   513,   514,     0,   200,   341,   515,   516,   517,   518,
     519,   520,   522,   532,   534,   451,   451,   517,   153,   528,
     540,   528,   528,   256,   342,   535,   535,   122,    84,   541,
     521,   523,   532,   138,   526,   527,    26,   536,   536,   451,
     394,   542,   142,   521,   524,   525,   528,   535,   256,   451,
     533,   451,    11,    58,    96,    98,   100,   108,   164,   226,
     257,   301,   304,   369,   390,   415,   417,   433,   504,   543,
     544,   548,   559,   567,   568,   569,   570,   571,   576,   584,
     586,   591,   594,   595,   597,   598,   599,   600,   601,   602,
     603,   535,   523,   451,   232,   537,  1268,   504,  1189,  1189,
     423,   405,  1286,  1268,  1268,  1268,   394,  1189,   405,   451,
     451,  1268,   451,   451,    57,  1257,   572,     1,   451,   570,
     218,   585,   173,   604,   451,   525,   451,    72,   171,   354,
     456,   538,   539,   577,  1268,  1268,  1268,   504,  1184,  1215,
      68,  1184,   451,  1268,  1268,   549,   560,  1184,   545,   504,
     587,   588,   589,  1190,   256,   307,   309,   573,   575,  1036,
    1218,  1268,   451,   504,   451,   606,   539,   340,  1283,  1268,
     212,   256,   266,   346,   416,   460,   510,   592,   593,  1221,
    1184,   256,   218,   306,  1306,   256,   468,    56,    63,   268,
     340,   396,   401,   504,   550,   551,   552,   553,   554,   555,
     556,   558,  1256,  1316,   199,   561,   562,   563,   546,   558,
     588,    22,   232,  1190,  1269,  1036,   232,   423,  1280,  1268,
      96,  1189,   234,   397,   605,   607,    28,   126,   212,   256,
     266,   280,   346,   416,   419,   420,   510,   578,   579,   580,
     583,   593,   442,   503,   596,  1299,  1215,   400,   401,   410,
      63,  1268,   451,   552,   451,   504,   551,    59,  1268,     9,
     370,   496,   564,   566,     1,   451,   563,   547,  1299,   256,
     590,  1219,  1280,   232,  1189,  1189,   574,   575,   451,     1,
     290,   312,  1242,   274,   388,   638,   639,   640,   641,   643,
     580,    17,   442,  1221,   328,  1268,   401,  1218,   451,  1268,
     504,  1185,   229,    26,   565,   229,   370,   451,   451,   107,
    1219,  1189,   451,   312,  1189,   644,   351,   412,   413,   642,
     529,     1,   451,   640,   581,   583,   256,  1218,   257,   435,
     494,   557,  1185,   256,   272,   608,   454,  1260,    23,  1251,
     102,   648,   451,   582,   583,    57,   505,  1310,   609,   437,
    1292,   188,  1261,   122,   454,   649,    17,     4,    19,    29,
      63,   220,   252,   315,   320,   351,   359,   372,   401,   404,
     412,   451,   454,   610,   611,   617,   619,   620,   621,   622,
     623,   624,   627,   628,   629,   630,   631,   633,   634,   636,
    1284,  1300,    86,  1258,   504,  1174,  1175,   451,   394,   650,
     583,   272,  1275,   351,  1284,   446,   497,  1296,   401,   402,
    1268,  1256,   113,   237,  1270,  1270,   287,   635,  1218,  1299,
     423,   262,    39,  1254,  1268,   645,   646,  1175,  1175,   451,
     172,   392,   530,   651,   652,   654,  1268,  1270,   125,   171,
     614,   359,   628,  1268,  1268,  1268,  1268,  1251,     9,   287,
     349,   637,  1268,  1275,   402,   504,   646,   331,   647,   506,
     679,   681,   682,     1,  1175,   125,   347,   402,   618,  1268,
     117,   118,   119,   238,   252,   335,   347,   437,   612,   613,
     256,  1184,  1188,   419,   632,  1184,  1184,   316,  1281,  1281,
     310,  1184,  1268,  1218,   394,   261,   732,   683,   684,   686,
     696,  1234,   451,   653,   632,   256,   616,  1215,   616,     7,
     616,   616,   256,   615,  1215,   414,   452,    33,   167,   267,
     625,   451,   394,   255,   734,   451,   684,   451,     1,   175,
     504,   687,   688,   504,   655,   124,   503,  1236,  1315,  1260,
    1268,  1183,  1184,   503,   626,   626,   680,   451,   394,   366,
     736,   451,   451,   685,    85,    47,    62,   102,   239,   250,
     351,   352,   366,   368,   451,   498,   656,   657,   659,   663,
     664,   667,   668,   674,   675,   676,   677,  1268,   124,  1183,
    1184,   262,   385,   681,   733,   451,   394,   389,   787,   698,
     689,  1268,  1258,  1268,   351,   353,  1311,  1311,  1268,  1258,
    1268,  1275,  1268,    22,  1250,   306,   678,  1189,   171,   204,
     309,   681,   735,   451,   394,   531,    21,    36,    39,    40,
      41,    42,    43,    44,    45,    73,    75,    76,    77,    78,
      79,    80,    81,   119,   178,   179,   180,   181,   182,   185,
     186,   219,   235,   277,   305,   319,   327,   330,   343,   355,
     363,   405,   407,   408,   409,   434,   477,   478,   479,   491,
     498,   699,   700,   701,   703,   704,   705,   706,   707,   708,
     709,   712,   721,   722,   723,   724,   725,   730,   731,  1268,
    1288,    26,   196,   697,  1252,   204,  1218,   504,  1268,  1250,
     504,  1186,  1187,   308,   418,  1307,  1188,  1218,   499,  1268,
     174,   213,   504,   665,  1189,   274,   351,   353,  1309,   681,
     737,   451,   337,   801,   804,   244,   301,   406,   476,  1287,
     476,  1287,   476,  1287,   476,  1287,   476,  1287,   501,  1297,
     384,  1285,  1218,  1212,  1215,  1215,   232,   242,   384,  1271,
    1268,  1269,   171,   204,   241,   468,   504,     9,    50,   212,
     244,   245,   256,   266,   346,   416,   460,   510,   690,  1222,
    1223,  1224,   446,   662,  1187,   254,  1274,   446,  1257,   218,
    1263,   504,  1268,  1268,  1309,   738,   788,   122,   827,   828,
     510,   446,   713,   462,  1216,  1217,   442,   706,   727,   728,
    1222,    26,   702,   400,  1246,  1246,  1224,   306,  1278,     1,
      40,    41,    42,    43,    44,   178,   179,   180,   181,   182,
     183,   184,   330,   343,   691,   692,   693,   694,   695,   707,
     708,  1212,   691,   447,  1218,    57,   353,   658,   669,  1218,
     410,  1289,   256,   666,  1215,   666,   348,   739,   686,   696,
     789,   790,   791,    55,   497,   805,     1,     3,     5,    10,
      18,    51,    52,    60,    71,    74,    88,   111,   119,   121,
     152,   163,   168,   195,   202,   205,   206,   215,   222,   224,
     227,   269,   273,   275,   285,   311,   324,   349,   350,   360,
     374,   375,   381,   385,   393,   403,   412,   421,   426,   427,
     430,   432,   438,   451,   469,   475,   480,   507,   829,   830,
     845,   850,   854,   859,   874,   877,   881,   885,   886,   887,
     892,   906,   910,   913,   927,   930,   933,   936,   940,   941,
     945,   955,   958,   975,   977,   980,   984,   990,  1002,  1010,
    1011,  1014,  1015,  1019,  1024,  1025,  1033,  1048,  1058,  1067,
    1072,  1079,  1083,  1085,  1088,  1091,  1095,  1120,   829,  1218,
     445,  1294,    82,    99,   201,   245,   251,   253,   258,   259,
     260,   264,   303,   322,   377,   428,   429,   458,   462,   463,
     470,   490,   495,   502,  1162,  1164,  1165,  1166,  1167,  1168,
    1169,  1197,  1211,  1212,  1223,  1225,  1226,  1227,  1228,   462,
    1217,  1215,   726,   728,   442,   256,  1256,   691,   451,  1224,
      48,   465,   670,   671,   672,   673,  1299,  1257,   196,   661,
    1262,   504,  1176,     1,   687,   791,   451,   807,   806,   376,
     813,     3,     5,    10,    18,    51,    52,    60,    71,    74,
      88,   111,   119,   121,   128,   130,   131,   132,   133,   134,
     135,   136,   137,   139,   140,   141,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   163,   168,   195,   202,
     205,   206,   215,   222,   224,   227,   269,   273,   275,   285,
     311,   324,   349,   360,   375,   381,   385,   393,   403,   412,
     421,   426,   427,   430,   432,   438,   451,   469,   475,   480,
     507,  1247,   831,   846,   851,   855,   860,   875,   878,   882,
     888,   893,   907,   911,   914,   928,   931,   934,   937,   942,
     946,   956,   959,   976,   978,   981,   399,   985,   991,  1003,
    1012,  1016,  1020,  1026,  1034,  1049,  1059,   256,   346,   387,
     416,   510,  1071,  1073,  1080,   336,  1084,  1086,   816,  1089,
    1092,  1096,  1121,   114,   714,   462,  1230,  1212,  1223,  1225,
    1306,  1306,   462,   462,   462,   462,  1306,  1168,  1164,  1168,
     462,  1230,    70,   398,   448,  1163,   449,   458,   463,   450,
     459,   169,   462,  1229,   462,   462,  1164,   501,   729,  1298,
    1222,  1188,  1188,   187,   662,  1218,   740,   451,   792,   451,
      49,   808,   809,   810,  1255,   808,   504,   451,   308,   832,
     833,  1211,     6,    94,   245,   271,   847,  1169,  1193,  1194,
    1211,  1222,  1225,   852,  1164,  1211,   256,   856,   857,  1180,
    1181,  1182,  1215,   271,   422,   424,   861,   862,   256,   876,
    1202,  1211,   879,  1175,     6,   883,  1169,  1170,  1171,  1192,
    1213,  1214,  1215,  1223,   454,   889,  1175,   256,   894,   895,
     897,  1193,  1194,  1202,  1211,   908,  1194,   256,   912,   453,
     464,   915,   916,   917,  1152,  1153,  1154,   199,   323,   324,
     340,   394,   929,   932,  1191,  1192,   935,  1215,   446,   938,
    1295,  1151,  1152,   947,  1191,   957,  1176,   960,   961,  1211,
    1222,  1225,  1050,  1209,  1210,  1215,    94,   979,  1194,   982,
    1194,   170,   225,   233,   317,   986,   987,   190,   256,   992,
     996,   997,   998,  1180,  1203,  1211,  1215,  1225,  1299,  1004,
    1175,  1013,  1172,  1215,  1017,  1175,  1021,  1172,     9,  1027,
    1173,  1215,   153,   271,  1035,  1038,  1039,  1042,  1043,  1044,
    1045,  1046,  1047,  1177,  1178,  1191,  1208,  1210,  1215,  1050,
    1060,  1175,  1068,   112,  1074,  1075,  1076,  1194,    94,  1081,
    1193,  1087,  1176,   451,   504,   817,   818,   821,   822,   827,
    1090,  1211,  1093,  1175,  1097,  1211,  1122,  1172,   309,  1279,
     715,   716,   448,  1162,  1164,   504,   504,  1164,  1233,  1233,
    1233,  1196,  1211,  1223,  1225,  1232,   504,   448,  1196,  1231,
    1164,   448,  1164,  1165,  1165,  1166,  1166,  1166,  1164,  1196,
    1162,   403,   453,    30,  1253,  1257,     1,   741,   793,   809,
     410,   476,   811,   357,   498,   802,   130,   844,    30,   835,
     836,  1253,   196,  1278,  1211,  1212,  1223,  1225,   131,   849,
     446,   848,  1194,    57,   223,  1237,   857,   446,  1306,   132,
     873,   256,  1203,  1202,  1175,   356,   474,   880,  1299,  1312,
    1278,   133,   884,   159,   452,  1171,  1303,   386,  1243,  1216,
    1217,   890,  1175,   134,   891,  1284,   135,   905,   165,   896,
    1131,  1132,   484,   898,   503,   836,   485,   486,   487,   488,
     136,   909,    49,   228,   497,   863,   137,   926,    17,   501,
     918,   919,   920,   922,    12,    13,    14,    20,   159,   169,
     207,   208,   246,   247,   284,   290,   293,   301,   308,   313,
     332,   448,   450,   452,   455,   457,   458,   459,   462,   463,
    1155,  1156,  1157,  1158,  1159,  1160,  1161,  1194,   101,  1192,
    1179,   441,  1293,   948,  1299,  1176,    92,   365,   436,   962,
     963,   965,   966,  1052,   462,  1216,  1194,   446,   140,   983,
      49,   987,   404,   988,   997,   141,   451,   993,   995,   481,
     499,   442,   445,   439,   143,  1009,   285,   334,  1240,   196,
    1123,   144,  1018,  1284,   145,  1023,  1123,  1173,   146,  1032,
     499,  1028,  1200,  1211,  1223,  1045,  1047,  1191,   446,  1178,
     123,   446,   482,  1037,    31,  1216,   147,  1066,   177,   237,
     240,  1062,   203,   376,  1069,  1299,  1255,   148,  1078,   228,
    1076,  1211,   149,  1082,   196,  1176,   394,   451,   451,   196,
     351,   353,  1094,   150,  1106,   112,  1098,   151,  1127,  1123,
    1184,   220,   718,    27,   115,   717,   448,  1163,   448,   448,
     448,  1163,   448,  1163,   448,   448,   449,   448,   448,   446,
    1268,  1188,   114,   660,   451,    61,    89,    90,   321,   451,
     742,   743,   748,  1268,  1324,    32,    35,    38,    45,    46,
      64,    66,   160,   189,   196,   198,   211,   243,   252,   265,
     305,   318,   345,   371,   378,   395,   446,   456,   473,   497,
     704,   705,   709,   721,   723,   725,   794,   799,   800,  1268,
    1301,  1268,   410,   312,   812,   109,   814,  1200,   197,   839,
     252,   331,   837,   838,  1301,    24,    25,    65,    67,    69,
     103,   104,   105,   153,   155,   162,   165,   252,   254,   443,
     493,   504,   834,  1178,  1302,   152,   340,  1198,  1212,   446,
       6,  1169,  1170,  1194,  1215,  1223,   203,   223,  1238,   376,
     853,   339,   858,  1182,   863,   880,   262,   287,  1261,  1212,
    1164,   272,  1244,  1217,  1175,   231,  1147,  1148,   824,   825,
     897,  1194,   294,  1133,    96,   335,   504,  1178,   298,   902,
      35,    38,    45,    46,    91,   160,   189,   211,   265,   318,
     378,   391,   473,   903,   904,   484,   899,  1131,  1131,  1131,
    1131,  1194,  1170,  1194,   864,   917,    21,   453,   464,   923,
     924,  1153,   501,   920,   921,   501,   824,  1295,   232,  1156,
     114,   939,  1180,   128,   824,   943,     9,    12,    15,    16,
     277,   278,   301,   302,   949,   953,   175,  1200,     9,    57,
     177,   241,   468,   969,   970,   971,   964,   965,  1054,  1279,
    1315,   446,  1191,  1170,  1194,   988,  1299,  1174,   824,   168,
     999,  1151,  1000,  1001,  1211,  1180,     8,    37,  1125,  1284,
    1207,  1211,  1222,  1225,   228,  1005,  1022,  1299,   129,  1029,
    1211,  1029,   446,   446,  1036,   152,   453,   464,  1194,    49,
      38,    46,   211,   243,   265,   318,   378,   473,  1040,  1041,
    1268,  1061,  1299,  1194,  1194,   161,   289,   410,  1194,  1211,
     196,  1170,  1194,   823,  1218,  1200,  1255,   228,  1101,  1124,
    1125,  1255,  1270,  1184,  1229,  1229,  1229,  1196,   241,   468,
    1229,   448,  1164,  1229,  1229,  1222,  1279,  1268,  1268,  1250,
     248,   249,  1273,   758,   204,   176,   744,   745,   746,   747,
    1211,  1268,   252,   389,   156,   158,  1268,  1203,   299,  1276,
    1218,    56,  1211,  1211,   204,  1276,    32,   110,  1218,  1268,
     504,   451,   803,   272,   840,  1276,  1276,   838,   837,  1276,
     165,  1128,  1129,   509,   508,  1200,  1128,   237,   423,   299,
     276,   256,  1199,  1212,  1211,  1278,   411,  1134,  1135,  1216,
    1217,  1170,   446,  1239,   853,  1192,   446,  1180,   203,   376,
     868,   869,   380,   362,  1134,  1268,   824,   295,  1149,   826,
     824,  1131,  1268,   252,   389,   156,   158,  1268,   123,   482,
     904,  1131,    96,    97,   900,   840,   203,  1134,   203,   865,
     866,   867,  1255,    17,   442,   925,   316,   923,  1279,   824,
     128,   139,   944,  1295,   365,   950,  1295,   446,    49,   970,
     972,  1200,     9,    57,   241,   468,   967,   968,  1200,  1055,
    1300,   717,   218,   314,  1264,  1191,  1134,   203,  1174,   637,
     379,   989,  1299,   141,   994,     8,   196,  1005,  1211,   129,
    1140,  1142,  1147,   262,   287,   824,   501,   501,  1030,  1031,
    1200,  1199,  1194,  1036,  1036,  1036,  1036,  1036,  1036,  1036,
    1036,  1041,   290,   293,  1063,  1064,  1065,  1157,  1241,  1147,
     244,   410,  1314,   423,  1291,  1291,  1077,  1299,  1211,  1134,
     203,   451,   446,     9,  1099,  1100,  1235,  1102,  1211,  1077,
    1102,  1022,     7,  1248,   504,   719,   720,  1268,   448,  1184,
    1202,  1268,  1250,   256,   510,   749,   750,  1211,  1220,   686,
     759,   746,   747,   510,  1204,  1208,  1218,  1204,  1268,  1294,
    1268,  1268,    32,  1218,   815,   816,  1268,   503,   841,  1204,
    1204,  1204,   824,   294,  1130,  1128,  1243,  1212,   824,   297,
    1136,  1217,  1134,  1201,  1211,  1222,   165,   461,   871,  1305,
       6,   228,   308,   460,   870,  1267,    34,   281,   282,   283,
     344,   466,   467,   471,  1245,   824,   827,  1204,  1204,  1150,
    1206,  1208,  1218,  1150,   503,   901,  1170,  1171,  1170,  1171,
     866,   308,   811,    87,   357,   498,   924,  1152,   824,  1211,
     824,   498,   951,   952,   953,   954,  1293,   498,  1201,  1200,
      49,   973,   968,   188,   973,  1051,  1268,  1270,   314,  1170,
     989,   262,   287,  1001,  1194,   217,  1006,  1299,   824,   291,
    1143,   262,  1152,  1151,  1030,  1157,  1211,  1158,  1159,  1160,
    1161,  1164,  1070,  1194,  1070,   461,  1137,  1138,   330,  1243,
    1170,   819,  1201,   313,  1200,   113,  1103,   436,  1105,   157,
     292,  1126,  1144,  1145,  1146,  1147,   321,  1178,  1204,   720,
    1183,   751,   252,   254,  1308,   504,   687,   270,   329,   458,
     463,   795,   796,   797,  1202,   795,   796,   798,   816,    47,
      32,    35,    38,    46,    91,   189,   198,   211,   243,   263,
     265,   288,   318,   345,   371,   378,   391,   395,   444,   473,
     483,   489,   842,   843,  1128,   824,  1134,   824,   294,   872,
     824,  1278,  1211,   252,   254,  1313,   903,  1134,   361,  1134,
     361,  1194,   952,   102,  1259,  1295,   973,   973,  1201,     8,
      37,   974,   225,   497,  1056,  1184,  1053,  1134,   380,    49,
     262,   237,  1007,   216,   236,   262,   287,   500,   824,   824,
     824,   824,   296,  1139,  1268,  1134,  1134,   492,   820,  1107,
    1100,  1263,    95,  1104,  1263,  1137,   824,   824,  1146,   252,
     254,  1272,   177,   187,   210,   240,   752,   753,   754,   755,
     756,   757,   750,   760,  1204,  1204,   129,  1268,  1268,    56,
     123,   482,     8,  1249,   843,   824,  1211,  1171,  1171,    49,
     110,   973,   456,  1266,  1266,   337,  1174,   203,   317,  1057,
    1215,  1194,  1268,  1008,  1141,  1142,  1143,  1147,   262,   262,
     262,   824,  1211,  1108,   451,  1211,  1263,  1211,   106,   116,
    1317,  1268,  1268,    54,    89,  1317,  1318,  1302,   761,   109,
    1204,  1204,  1268,  1150,  1150,  1205,  1208,  1220,  1134,  1134,
    1194,  1194,  1194,  1268,  1174,   337,   481,  1211,  1143,   127,
     166,   204,  1109,  1110,  1111,  1113,  1117,  1118,  1119,  1261,
    1211,  1268,   750,   750,   210,  1268,  1268,   209,   252,   285,
     305,   309,   333,   414,   431,   451,   472,   491,   499,   704,
     709,   710,   721,   723,   725,   762,   763,   767,   770,   773,
     774,   775,   776,   780,   781,   782,   784,   785,   786,  1301,
    1302,   451,  1202,   996,  1268,  1151,    37,  1249,   107,   750,
     750,   750,   221,  1265,   299,   778,   209,   321,  1218,   285,
     501,  1268,  1278,  1268,  1268,  1211,   329,   463,   777,   779,
    1220,   329,   463,   783,  1220,   299,   300,  1277,  1250,   996,
     367,   418,  1290,  1279,   232,  1268,   713,   321,  1151,  1197,
    1195,  1197,    53,    89,   321,   325,   326,   366,   382,   383,
     764,  1317,  1318,  1319,  1320,  1321,  1322,  1323,   119,   196,
    1220,  1220,  1220,  1220,  1269,  1211,   161,   165,  1304,     9,
    1114,  1115,  1181,   285,   286,   321,   329,   463,   768,   769,
    1218,  1294,  1243,   373,   484,   771,  1197,   187,   187,   210,
     187,   210,   176,   765,  1211,   176,   766,  1211,  1197,   337,
    1282,   306,   338,   358,  1116,  1115,   321,  1218,  1218,   714,
    1279,  1211,    49,  1279,   306,  1215,   425,   711,   176,   772,
    1211,  1197,   170,   225,   233,   317,  1112,  1174,  1218
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 1342 "parser.y"
    {
	clear_initial_values ();
	current_program = NULL;
	cobc_cs_check = 0;
	prog_end = 0;
	depth = 0;
	main_flag_set = 0;
	current_program = cb_build_program (NULL, 0);
	cb_build_registers ();
  ;}
    break;

  case 3:
#line 1353 "parser.y"
    {
	if (!current_program->flag_validated) {
		current_program->flag_validated = 1;
		cb_validate_program_body (current_program);
	}
	if (depth > 1) {
		cb_error (_("Multiple PROGRAM-ID's without matching END PROGRAM"));
	}
	if (cobc_flag_main && !main_flag_set) {
		cb_error (_("Executable requested but no program found"));
	}
	if (errorcount > 0) {
		YYABORT;
	}
	if (!current_program->entry_list) {
		emit_entry (current_program->program_id, 0, NULL);
	}
  ;}
    break;

  case 10:
#line 1389 "parser.y"
    {
	cb_tree		l;

	current_section = NULL;
	current_paragraph = NULL;
	prog_end = 1;
	if (increment_depth ()) {
		YYABORT;
	}
	l = cb_build_alphanumeric_literal (demangle_name,
					   strlen (demangle_name));
	current_program->program_id = cb_build_program_id (l, NULL, 0);
	current_program->prog_type = CB_PROGRAM_TYPE;
	if (!main_flag_set) {
		main_flag_set = 1;
		current_program->flag_main = cobc_flag_main;
	}
	check_relaxed_syntax (COBC_HD_PROGRAM_ID);
  ;}
    break;

  case 20:
#line 1444 "parser.y"
    {
	char	*s;

	if (CB_LITERAL_P ((yyvsp[(2) - (3)]))) {
		s = (char *)(CB_LITERAL ((yyvsp[(2) - (3)]))->data);
	} else {
		s = (char *)(CB_NAME ((yyvsp[(2) - (3)])));
	}
	if (depth) {
		depth--;
	}
	if (strcmp (stack_progid[depth], s)) {
		cb_error (_("END PROGRAM '%s' is different to PROGRAM-ID '%s'"),
			s, stack_progid[depth]);
	}
	if (!current_program->flag_validated) {
		current_program->flag_validated = 1;
		cb_validate_program_body (current_program);
	}
  ;}
    break;

  case 23:
#line 1473 "parser.y"
    {
	char	*s;

	if (CB_LITERAL_P ((yyvsp[(2) - (3)]))) {
		s = (char *)(CB_LITERAL ((yyvsp[(2) - (3)]))->data);
	} else {
		s = (char *)(CB_NAME ((yyvsp[(2) - (3)])));
	}
	if (depth) {
		depth--;
	}
	if (strcmp (stack_progid[depth], s)) {
		cb_error (_("END FUNCTION '%s' is different to FUNCTION-ID '%s'"),
			s, stack_progid[depth]);
	}
	if (!current_program->flag_validated) {
		current_program->flag_validated = 1;
		cb_validate_program_body (current_program);
	}
  ;}
    break;

  case 24:
#line 1506 "parser.y"
    {
	cb_validate_program_environment (current_program);
  ;}
    break;

  case 25:
#line 1512 "parser.y"
    {
	current_storage = CB_STORAGE_WORKING;
  ;}
    break;

  case 26:
#line 1524 "parser.y"
    {
	cb_validate_program_data (current_program);
  ;}
    break;

  case 28:
#line 1534 "parser.y"
    {
	current_section = NULL;
	current_paragraph = NULL;
	if (CB_LITERAL_P ((yyvsp[(3) - (4)]))) {
		stack_progid[depth] = (char *)(CB_LITERAL ((yyvsp[(3) - (4)]))->data);
	} else {
		stack_progid[depth] = (char *)(CB_NAME ((yyvsp[(3) - (4)])));
	}
	if (prog_end) {
		if (!current_program->flag_validated) {
			current_program->flag_validated = 1;
			cb_validate_program_body (current_program);
		}
		clear_initial_values ();
		current_program = cb_build_program (current_program, depth);
		build_nested_special (depth);
		cb_build_registers ();
	} else {
		prog_end = 1;
	}
	if (increment_depth ()) {
		YYABORT;
	}
	current_program->program_id = cb_build_program_id ((yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]), 0);
	current_program->prog_type = CB_PROGRAM_TYPE;
	if (!main_flag_set) {
		main_flag_set = 1;
		current_program->flag_main = !!cobc_flag_main;
	}
  ;}
    break;

  case 29:
#line 1565 "parser.y"
    {
	cobc_cs_check = 0;
  ;}
    break;

  case 30:
#line 1572 "parser.y"
    {
#if	0	/* RXWRXW - FUNCTION-ID */
	cb_error (_("FUNCTION-ID is not yet implemented"));
#endif
	current_section = NULL;
	current_paragraph = NULL;
	if (CB_LITERAL_P ((yyvsp[(3) - (5)]))) {
		stack_progid[depth] = (char *)(CB_LITERAL ((yyvsp[(3) - (5)]))->data);
	} else {
		stack_progid[depth] = (char *)(CB_NAME ((yyvsp[(3) - (5)])));
	}
	if (prog_end) {
		if (!current_program->flag_validated) {
			current_program->flag_validated = 1;
			cb_validate_program_body (current_program);
		}
		clear_initial_values ();
		current_program = cb_build_program (current_program, depth);
		build_nested_special (depth);
		cb_build_registers ();
	} else {
		prog_end = 1;
	}
	if (increment_depth ()) {
		YYABORT;
	}
	current_program->program_id = cb_build_program_id ((yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]), 1);
	current_program->prog_type = CB_FUNCTION_TYPE;
	current_program->flag_recursive = 1;
	cobc_cs_check = 0;
  ;}
    break;

  case 33:
#line 1611 "parser.y"
    { (yyval) = NULL; ;}
    break;

  case 34:
#line 1612 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); ;}
    break;

  case 37:
#line 1621 "parser.y"
    {
	if (!current_program->nested_level) {
		cb_error (_("COMMON may only be used in a contained program"));
	} else {
		current_program->flag_common = 1;
		cb_add_common_prog (current_program);
	}
  ;}
    break;

  case 38:
#line 1630 "parser.y"
    {
	if (!current_program->nested_level) {
		cb_error (_("COMMON may only be used in a contained program"));
	} else {
		current_program->flag_common = 1;
		cb_add_common_prog (current_program);
	}
  ;}
    break;

  case 41:
#line 1644 "parser.y"
    {
	current_program->flag_initial = 1;
  ;}
    break;

  case 42:
#line 1648 "parser.y"
    {
	current_program->flag_recursive = 1;
  ;}
    break;

  case 44:
#line 1658 "parser.y"
    {
	header_check |= COBC_HD_ENVIRONMENT_DIVISION;
  ;}
    break;

  case 46:
#line 1667 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_CONFIGURATION_SECTION;
	if (current_program->nested_level) {
		cb_error (_("CONFIGURATION SECTION not allowed in nested programs"));
	}
  ;}
    break;

  case 54:
#line 1692 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_comp_repeated ("SOURCE-COMPUTER", SYN_CLAUSE_1);
	if (warningopt && (check_comp_duplicate & SYN_CLAUSE_2)) {
		cb_warning (_("Phrases in non-standard order"));
	}
  ;}
    break;

  case 59:
#line 1710 "parser.y"
    {
	cb_verify (cb_debugging_line, "DEBUGGING MODE");
	current_program->flag_debugging = 1;
	needs_debug_item = 1;
	cobc_cs_check = 0;
	cb_build_debug_item ();
  ;}
    break;

  case 60:
#line 1723 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_comp_repeated ("OBJECT-COMPUTER", SYN_CLAUSE_2);
  ;}
    break;

  case 72:
#line 1752 "parser.y"
    {
	cb_verify (cb_memory_size_clause, "MEMORY SIZE");
  ;}
    break;

  case 73:
#line 1759 "parser.y"
    {
	current_program->collating_sequence = (yyvsp[(3) - (3)]);
  ;}
    break;

  case 74:
#line 1766 "parser.y"
    {
	/* Ignore */
  ;}
    break;

  case 75:
#line 1773 "parser.y"
    {
	if (current_program->classification) {
		cb_error (_("Duplicate CLASSIFICATION clause"));
	} else {
		current_program->classification = (yyvsp[(4) - (4)]);
	}
  ;}
    break;

  case 76:
#line 1784 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  ;}
    break;

  case 77:
#line 1788 "parser.y"
    {
	(yyval) = NULL;
  ;}
    break;

  case 78:
#line 1792 "parser.y"
    {
	(yyval) = cb_int1;
  ;}
    break;

  case 79:
#line 1796 "parser.y"
    {
	(yyval) = cb_int1;
  ;}
    break;

  case 82:
#line 1810 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
  ;}
    break;

  case 83:
#line 1815 "parser.y"
    {
	cobc_in_repository = 0;
  ;}
    break;

  case 86:
#line 1823 "parser.y"
    {
	yyerrok;
  ;}
    break;

  case 89:
#line 1835 "parser.y"
    {
	functions_are_all = 1;
  ;}
    break;

  case 90:
#line 1839 "parser.y"
    {
	cb_tree		x;

	if ((yyvsp[(3) - (3)])) {
		x = (yyvsp[(3) - (3)]);
	} else {
		x = (yyvsp[(2) - (3)]);
	}
	current_program->user_spec_list =
		cb_list_add (current_program->user_spec_list, x);
  ;}
    break;

  case 94:
#line 1860 "parser.y"
    {
	(yyval) = NULL;
  ;}
    break;

  case 95:
#line 1864 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  ;}
    break;

  case 96:
#line 1871 "parser.y"
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[(1) - (1)]));
  ;}
    break;

  case 97:
#line 1876 "parser.y"
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[(2) - (2)]));
  ;}
    break;

  case 98:
#line 1887 "parser.y"
    {
	check_duplicate = 0;
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	header_check |= COBC_HD_SPECIAL_NAMES;
	if (current_program->nested_level) {
		cb_error (_("SPECIAL-NAMES not allowed in nested programs"));
	}
  ;}
    break;

  case 100:
#line 1901 "parser.y"
    {
	cobc_cs_check = 0;
	yyerrok;
  ;}
    break;

  case 115:
#line 1932 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("SPECIAL-NAMES not allowed in nested programs"));
		save_tree = NULL;
	} else {
		save_tree = lookup_system_name (CB_NAME ((yyvsp[(1) - (1)])));
		if (!save_tree) {
			cb_error_x ((yyvsp[(1) - (1)]), _("Invalid system-name '%s'"), CB_NAME ((yyvsp[(1) - (1)])));
		}
	}
  ;}
    break;

  case 117:
#line 1951 "parser.y"
    {
	if (save_tree) {
		if (CB_SYSTEM_NAME(save_tree)->token != CB_DEVICE_CONSOLE) {
			cb_error_x (save_tree, _("Invalid CRT clause"));
		} else {
			current_program->flag_console_is_crt = 1;
		}
	}
  ;}
    break;

  case 118:
#line 1961 "parser.y"
    {
	if (save_tree) {
		if (CB_SYSTEM_NAME(save_tree)->token != CB_FEATURE_CONVENTION) {
			cb_error_x (save_tree, _("Invalid special names clause"));
		} else if (CB_VALID_TREE ((yyvsp[(3) - (3)]))) {
			CB_SYSTEM_NAME(save_tree)->value = (yyvsp[(1) - (3)]);
			cb_define ((yyvsp[(3) - (3)]), save_tree);
			CB_CHAIN_PAIR (current_program->mnemonic_spec_list,
					(yyvsp[(3) - (3)]), save_tree);
		}
	}
  ;}
    break;

  case 119:
#line 1974 "parser.y"
    {
	if (save_tree && CB_VALID_TREE ((yyvsp[(2) - (3)]))) {
		cb_define ((yyvsp[(2) - (3)]), save_tree);
		CB_CHAIN_PAIR (current_program->mnemonic_spec_list,
				(yyvsp[(2) - (3)]), save_tree);
	}
  ;}
    break;

  case 123:
#line 1990 "parser.y"
    {
	cb_tree		x;

	/* cb_define_switch_name checks param validity */
	x = cb_define_switch_name ((yyvsp[(3) - (3)]), save_tree, (yyvsp[(1) - (3)]) == cb_int1);
	if (x) {
		CB_CHAIN_PAIR (current_program->mnemonic_spec_list, (yyvsp[(3) - (3)]), x);
	}
  ;}
    break;

  case 124:
#line 2000 "parser.y"
    {
	cb_tree		x;

	/* cb_define_switch_name checks param validity */
	x = cb_define_switch_name ((yyvsp[(4) - (4)]), save_tree, (yyvsp[(2) - (4)]) == cb_int1);
	if (x) {
		CB_CHAIN_PAIR (current_program->mnemonic_spec_list, (yyvsp[(4) - (4)]), x);
	}
  ;}
    break;

  case 125:
#line 2015 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("SPECIAL-NAMES not allowed in nested programs"));
		(yyval) = NULL;
	} else {
		/* Returns null on error */
		(yyval) = cb_build_alphabet_name ((yyvsp[(2) - (2)]));
	}
  ;}
    break;

  case 126:
#line 2028 "parser.y"
    {
	if ((yyvsp[(3) - (5)])) {
		current_program->alphabet_name_list =
			cb_list_add (current_program->alphabet_name_list, (yyvsp[(3) - (5)]));
	}
	cobc_cs_check = 0;
  ;}
    break;

  case 127:
#line 2039 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_NATIVE;
	}
  ;}
    break;

  case 128:
#line 2045 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  ;}
    break;

  case 129:
#line 2051 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  ;}
    break;

  case 130:
#line 2057 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_EBCDIC;
	}
  ;}
    break;

  case 131:
#line 2063 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  ;}
    break;

  case 132:
#line 2069 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_CUSTOM;
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->custom_list = (yyvsp[(1) - (1)]);
	}
  ;}
    break;

  case 133:
#line 2079 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  ;}
    break;

  case 134:
#line 2083 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  ;}
    break;

  case 135:
#line 2090 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  ;}
    break;

  case 136:
#line 2094 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  ;}
    break;

  case 137:
#line 2098 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (2)]));
  ;}
    break;

  case 138:
#line 2102 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (4)]);
  ;}
    break;

  case 139:
#line 2109 "parser.y"
    {
	cb_list_add ((yyvsp[(0) - (1)]), (yyvsp[(1) - (1)]));
  ;}
    break;

  case 140:
#line 2113 "parser.y"
    {
	cb_list_add ((yyvsp[(0) - (3)]), (yyvsp[(3) - (3)]));
  ;}
    break;

  case 141:
#line 2119 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 142:
#line 2120 "parser.y"
    { (yyval) = cb_space; ;}
    break;

  case 143:
#line 2121 "parser.y"
    { (yyval) = cb_zero; ;}
    break;

  case 144:
#line 2122 "parser.y"
    { (yyval) = cb_quote; ;}
    break;

  case 145:
#line 2123 "parser.y"
    { (yyval) = cb_norm_high; ;}
    break;

  case 146:
#line 2124 "parser.y"
    { (yyval) = cb_norm_low; ;}
    break;

  case 147:
#line 2132 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("SPECIAL-NAMES not allowed in nested programs"));
	} else if ((yyvsp[(1) - (2)])) {
		CB_CHAIN_PAIR (current_program->symbolic_char_list, (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	}
  ;}
    break;

  case 148:
#line 2146 "parser.y"
    {
	(yyval) = NULL;
  ;}
    break;

  case 149:
#line 2150 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  ;}
    break;

  case 150:
#line 2158 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  ;}
    break;

  case 151:
#line 2165 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  ;}
    break;

  case 152:
#line 2169 "parser.y"
    {
	if ((yyvsp[(2) - (2)])) {
		(yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	} else {
		(yyval) = (yyvsp[(1) - (2)]);
	}
  ;}
    break;

  case 153:
#line 2180 "parser.y"
    {
	cb_tree		l1;
	cb_tree		l2;

	if (cb_list_length ((yyvsp[(1) - (3)])) != cb_list_length ((yyvsp[(3) - (3)]))) {
		cb_error (_("Invalid SYMBOLIC clause"));
		(yyval) = NULL;
	} else {
		l1 = (yyvsp[(1) - (3)]);
		l2 = (yyvsp[(3) - (3)]);
		for (; l1; l1 = CB_CHAIN (l1), l2 = CB_CHAIN (l2)) {
			CB_PURPOSE (l1) = CB_VALUE (l2);
		}
		(yyval) = (yyvsp[(1) - (3)]);
	}
  ;}
    break;

  case 154:
#line 2200 "parser.y"
    {
	if ((yyvsp[(1) - (1)]) == NULL) {
		(yyval) = NULL;
	} else {
		(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	}
  ;}
    break;

  case 155:
#line 2208 "parser.y"
    {
	if ((yyvsp[(2) - (2)]) == NULL) {
		(yyval) = (yyvsp[(1) - (2)]);
	} else {
		(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	}
  ;}
    break;

  case 156:
#line 2218 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); ;}
    break;

  case 157:
#line 2219 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); ;}
    break;

  case 158:
#line 2226 "parser.y"
    {
	cb_tree		x;

	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("SPECIAL-NAMES not allowed in nested programs"));
	} else {
		/* Returns null on error */
		x = cb_build_class_name ((yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
		if (x) {
			current_program->class_name_list =
				cb_list_add (current_program->class_name_list, x);
		}
	}
  ;}
    break;

  case 159:
#line 2246 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); ;}
    break;

  case 160:
#line 2247 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); ;}
    break;

  case 161:
#line 2252 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  ;}
    break;

  case 162:
#line 2256 "parser.y"
    {
	if (CB_TREE_CLASS ((yyvsp[(1) - (3)])) != CB_CLASS_NUMERIC &&
	    CB_LITERAL_P ((yyvsp[(1) - (3)])) && CB_LITERAL ((yyvsp[(1) - (3)]))->size != 1) {
		cb_error (_("CLASS literal with THRU must have size 1"));
	}
	if (CB_TREE_CLASS ((yyvsp[(3) - (3)])) != CB_CLASS_NUMERIC &&
	    CB_LITERAL_P ((yyvsp[(3) - (3)])) && CB_LITERAL ((yyvsp[(3) - (3)]))->size != 1) {
		cb_error (_("CLASS literal with THRU must have size 1"));
	}
	if (literal_value ((yyvsp[(1) - (3)])) <= literal_value ((yyvsp[(3) - (3)]))) {
		(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
	} else {
		(yyval) = CB_BUILD_PAIR ((yyvsp[(3) - (3)]), (yyvsp[(1) - (3)]));
	}
  ;}
    break;

  case 163:
#line 2277 "parser.y"
    {
	cb_tree	l;

	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("SPECIAL-NAMES not allowed in nested programs"));
	} else {
		/* Returns null on error */
		l = cb_build_locale_name ((yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
		if (l) {
			current_program->locale_list =
				cb_list_add (current_program->locale_list, l);
		}
	}
  ;}
    break;

  case 164:
#line 2300 "parser.y"
    {
	unsigned char	*s = CB_LITERAL ((yyvsp[(4) - (5)]))->data;
	unsigned int	error_ind = 0;

	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("SPECIAL-NAMES not allowed in nested programs"));
		error_ind = 1;
	}
	check_repeated ("CURRENCY", SYN_CLAUSE_1);
	if ((yyvsp[(5) - (5)])) {
		PENDING ("PICTURE SYMBOL");
	}
	if (CB_LITERAL ((yyvsp[(4) - (5)]))->size != 1) {
		cb_error_x ((yyvsp[(4) - (5)]), _("Invalid currency sign '%s'"), (char *)s);
		error_ind = 1;
	}
	switch (*s) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'N':
	case 'P':
	case 'R':
	case 'S':
	case 'V':
	case 'X':
	case 'Z':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'n':
	case 'p':
	case 'r':
	case 's':
	case 'v':
	case 'x':
	case 'z':
	case '+':
	case '-':
	case ',':
	case '.':
	case '*':
	case '/':
	case ';':
	case '(':
	case ')':
	case '=':
	case '\'':
	case '"':
	case ' ':
		cb_error_x ((yyvsp[(4) - (5)]), _("Invalid currency sign '%s'"), (char *)s);
		break;
	default:
		if (!error_ind) {
			current_program->currency_symbol = s[0];
		}
		break;
	}
  ;}
    break;

  case 165:
#line 2381 "parser.y"
    {
	(yyval) = NULL;
  ;}
    break;

  case 166:
#line 2385 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  ;}
    break;

  case 167:
#line 2394 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("SPECIAL-NAMES not allowed in nested programs"));
	} else {
		check_repeated ("DECIMAL-POINT", SYN_CLAUSE_2);
		current_program->decimal_point = ',';
		current_program->numeric_separator = '.';
	}
  ;}
    break;

  case 168:
#line 2413 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("SPECIAL-NAMES not allowed in nested programs"));
	} else {
		current_program->flag_trailing_separate = 1;
	}
  ;}
    break;

  case 169:
#line 2429 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("SPECIAL-NAMES not allowed in nested programs"));
	} else {
		check_repeated ("CURSOR", SYN_CLAUSE_3);
		current_program->cursor_pos = (yyvsp[(3) - (3)]);
	}
  ;}
    break;

  case 170:
#line 2447 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("SPECIAL-NAMES not allowed in nested programs"));
	} else {
		check_repeated ("CRT STATUS", SYN_CLAUSE_4);
		current_program->crt_status = (yyvsp[(4) - (4)]);
	}
  ;}
    break;

  case 171:
#line 2465 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("SPECIAL-NAMES not allowed in nested programs"));
	} else {
		check_repeated ("SCREEN CONTROL", SYN_CLAUSE_5);
		PENDING ("SCREEN CONTROL");
	}
  ;}
    break;

  case 172:
#line 2482 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("SPECIAL-NAMES not allowed in nested programs"));
	} else {
		check_repeated ("EVENT STATUS", SYN_CLAUSE_6);
		PENDING ("EVENT STATUS");
	}
  ;}
    break;

  case 174:
#line 2499 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_INPUT_OUTPUT_SECTION;
  ;}
    break;

  case 176:
#line 2507 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_FILE_CONTROL;
  ;}
    break;

  case 178:
#line 2516 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_I_O_CONTROL;
  ;}
    break;

  case 181:
#line 2531 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION,
			       COBC_HD_FILE_CONTROL, 0);
	check_duplicate = 0;
	if (CB_INVALID_TREE ((yyvsp[(3) - (3)]))) {
		YYERROR;
	}

	/* Build new file */
	current_file = build_file ((yyvsp[(3) - (3)]));
	current_file->optional = CB_INTEGER ((yyvsp[(2) - (3)]))->val;

	/* Add file to current program list */
	CB_ADD_TO_CHAIN (CB_TREE (current_file), current_program->file_list);
  ;}
    break;

  case 182:
#line 2548 "parser.y"
    {
	validate_file (current_file, (yyvsp[(3) - (6)]));
  ;}
    break;

  case 183:
#line 2552 "parser.y"
    {
	yyerrok;
	current_file = NULL;
	if (current_program->file_list) {
		current_program->file_list = CB_CHAIN (current_program->file_list);
	}
  ;}
    break;

  case 199:
#line 2586 "parser.y"
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1);
	cobc_cs_check = 0;
	current_file->assign = cb_build_assignment_name (current_file, (yyvsp[(5) - (5)]));
  ;}
    break;

  case 200:
#line 2592 "parser.y"
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1);
	cobc_cs_check = 0;
	if ((yyvsp[(5) - (5)])) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[(5) - (5)]));
	} else {
		current_file->flag_fileid = 1;
	}
  ;}
    break;

  case 201:
#line 2602 "parser.y"
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1);
	cobc_cs_check = 0;
	if ((yyvsp[(5) - (5)])) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[(5) - (5)]));
	} else {
		current_file->flag_ext_assign = 0;
		current_file->assign =
			cb_build_alphanumeric_literal ("stdout", (size_t)6);
		current_file->special = COB_SELECT_STDOUT;
	}
  ;}
    break;

  case 202:
#line 2615 "parser.y"
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1);
	cobc_cs_check = 0;
	if ((yyvsp[(5) - (5)])) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[(5) - (5)]));
	} else {
		current_file->flag_ext_assign = 0;
		current_file->assign =
			cb_build_alphanumeric_literal ("stdin", (size_t)5);
		current_file->special = COB_SELECT_STDIN;
	}
  ;}
    break;

  case 203:
#line 2628 "parser.y"
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1);
	cobc_cs_check = 0;
	current_file->organization = COB_ORG_LINE_SEQUENTIAL;
	if ((yyvsp[(5) - (5)])) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[(5) - (5)]));
	} else {
		current_file->flag_ext_assign = 0;
		current_file->assign =
			cb_build_alphanumeric_literal ("LPT1", (size_t)4);
	}
  ;}
    break;

  case 209:
#line 2651 "parser.y"
    {
	current_file->flag_line_adv = 1;
  ;}
    break;

  case 211:
#line 2658 "parser.y"
    {
	current_file->flag_ext_assign = 1;
  ;}
    break;

  case 215:
#line 2671 "parser.y"
    {
	(yyval) = NULL;
  ;}
    break;

  case 218:
#line 2683 "parser.y"
    {
	cobc_cs_check = 0;
	check_repeated ("ACCESS", SYN_CLAUSE_2);
  ;}
    break;

  case 219:
#line 2690 "parser.y"
    { current_file->access_mode = COB_ACCESS_SEQUENTIAL; ;}
    break;

  case 220:
#line 2691 "parser.y"
    { current_file->access_mode = COB_ACCESS_DYNAMIC; ;}
    break;

  case 221:
#line 2692 "parser.y"
    { current_file->access_mode = COB_ACCESS_RANDOM; ;}
    break;

  case 222:
#line 2700 "parser.y"
    {
	struct cb_alt_key *p;
	struct cb_alt_key *l;

	p = cobc_parse_malloc (sizeof (struct cb_alt_key));
	p->key = (yyvsp[(5) - (6)]);
	p->duplicates = CB_INTEGER ((yyvsp[(6) - (6)]))->val;
	p->next = NULL;

	/* Add to the end of list */
	if (current_file->alt_key_list == NULL) {
		current_file->alt_key_list = p;
	} else {
		l = current_file->alt_key_list;
		for (; l->next; l = l->next) {
			;
		}
		l->next = p;
	}
  ;}
    break;

  case 223:
#line 2727 "parser.y"
    {
	check_repeated ("COLLATING", SYN_CLAUSE_3);
	PENDING ("COLLATING SEQUENCE");
  ;}
    break;

  case 224:
#line 2738 "parser.y"
    {
	check_repeated ("STATUS", SYN_CLAUSE_4);
	current_file->file_status = (yyvsp[(4) - (4)]);
  ;}
    break;

  case 228:
#line 2753 "parser.y"
    {
	check_repeated ("LOCK", SYN_CLAUSE_5);
  ;}
    break;

  case 230:
#line 2761 "parser.y"
    {
	current_file->lock_mode = COB_LOCK_MANUAL;
	cobc_cs_check = 0;
  ;}
    break;

  case 231:
#line 2766 "parser.y"
    {
	current_file->lock_mode = COB_LOCK_AUTOMATIC;
	cobc_cs_check = 0;
  ;}
    break;

  case 232:
#line 2771 "parser.y"
    {
	current_file->lock_mode = COB_LOCK_EXCLUSIVE;
	cobc_cs_check = 0;
  ;}
    break;

  case 235:
#line 2780 "parser.y"
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
  ;}
    break;

  case 236:
#line 2784 "parser.y"
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
	PENDING ("WITH ROLLBACK");
  ;}
    break;

  case 239:
#line 2800 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6);
	current_file->organization = COB_ORG_INDEXED;
  ;}
    break;

  case 240:
#line 2805 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6);
	current_file->organization = COB_ORG_SEQUENTIAL;
  ;}
    break;

  case 241:
#line 2810 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6);
	current_file->organization = COB_ORG_RELATIVE;
  ;}
    break;

  case 242:
#line 2815 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6);
	current_file->organization = COB_ORG_LINE_SEQUENTIAL;
  ;}
    break;

  case 243:
#line 2826 "parser.y"
    {
	check_repeated ("PADDING", SYN_CLAUSE_7);
	cb_verify (cb_padding_character_clause, "PADDING CHARACTER");
  ;}
    break;

  case 244:
#line 2837 "parser.y"
    {
	check_repeated ("RECORD DELIMITER", SYN_CLAUSE_8);
  ;}
    break;

  case 245:
#line 2847 "parser.y"
    {
	check_repeated ("RECORD KEY", SYN_CLAUSE_9);
	current_file->key = (yyvsp[(4) - (4)]);
  ;}
    break;

  case 246:
#line 2854 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 247:
#line 2855 "parser.y"
    { PENDING ("SPLIT KEYS"); ;}
    break;

  case 248:
#line 2856 "parser.y"
    { PENDING ("SPLIT KEYS"); ;}
    break;

  case 249:
#line 2863 "parser.y"
    {
	check_repeated ("RELATIVE KEY", SYN_CLAUSE_10);
	current_file->key = (yyvsp[(4) - (4)]);
  ;}
    break;

  case 250:
#line 2874 "parser.y"
    {
	check_repeated ("RESERVE", SYN_CLAUSE_11);
  ;}
    break;

  case 253:
#line 2888 "parser.y"
    {
	check_repeated ("SHARING", SYN_CLAUSE_12);
	current_file->sharing = (yyvsp[(3) - (3)]);
  ;}
    break;

  case 254:
#line 2895 "parser.y"
    { (yyval) = NULL; ;}
    break;

  case 255:
#line 2896 "parser.y"
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); ;}
    break;

  case 256:
#line 2897 "parser.y"
    { (yyval) = NULL; ;}
    break;

  case 259:
#line 2906 "parser.y"
    {
	yyerrok;
  ;}
    break;

  case 264:
#line 2925 "parser.y"
    {
	cb_tree l;

	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_I_O_CONTROL, 0);
	switch (CB_INTEGER ((yyvsp[(2) - (5)]))->val) {
	case 0:
		/* SAME AREA */
		break;
	case 1:
		/* SAME RECORD */
		for (l = (yyvsp[(5) - (5)]); l; l = CB_CHAIN (l)) {
			if (CB_VALID_TREE (CB_VALUE (l))) {
				CB_FILE (cb_ref (CB_VALUE (l)))->same_clause = samearea;
			}
		}
		samearea++;
		break;
	case 2:
		/* SAME SORT-MERGE */
		break;
	}
  ;}
    break;

  case 265:
#line 2952 "parser.y"
    { (yyval) = cb_int0; ;}
    break;

  case 266:
#line 2953 "parser.y"
    { (yyval) = cb_int1; ;}
    break;

  case 267:
#line 2954 "parser.y"
    { (yyval) = cb_int2; ;}
    break;

  case 268:
#line 2955 "parser.y"
    { (yyval) = cb_int2; ;}
    break;

  case 269:
#line 2962 "parser.y"
    {
	/* Fake for TAPE */
	cobc_cs_check = CB_CS_ASSIGN;
  ;}
    break;

  case 270:
#line 2967 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_I_O_CONTROL, 0);
	cb_verify (cb_multiple_file_tape_clause, "MULTIPLE FILE TAPE");
	cobc_cs_check = 0;
  ;}
    break;

  case 277:
#line 2994 "parser.y"
    {
	header_check |= COBC_HD_DATA_DIVISION;
  ;}
    break;

  case 279:
#line 3003 "parser.y"
    {
	current_storage = CB_STORAGE_FILE;
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_FILE_SECTION;
  ;}
    break;

  case 282:
#line 3017 "parser.y"
    {
	if (CB_VALID_TREE (current_file)) {
		if (CB_VALID_TREE ((yyvsp[(2) - (2)]))) {
			if (current_file->reports) {
				cb_error (_("RECORD description invalid with REPORT"));
			} else {
				finalize_file (current_file, CB_FIELD ((yyvsp[(2) - (2)])));
			}
		} else if (!current_file->reports) {
			cb_error (_("RECORD description missing or invalid"));
		}
	}
  ;}
    break;

  case 283:
#line 3036 "parser.y"
    {
	current_storage = CB_STORAGE_FILE;
	check_headers_present (COBC_HD_DATA_DIVISION,
			       COBC_HD_FILE_SECTION, 0, 0);
	check_duplicate = 0;
	if (CB_INVALID_TREE ((yyvsp[(2) - (2)])) || cb_ref ((yyvsp[(2) - (2)])) == cb_error_node) {
		YYERROR;
	}
	current_file = CB_FILE (cb_ref ((yyvsp[(2) - (2)])));
	if (CB_VALID_TREE (current_file)) {
		if ((yyvsp[(1) - (2)])) {
			current_file->organization = COB_ORG_SORT;
		}
	}
  ;}
    break;

  case 285:
#line 3053 "parser.y"
    {
	yyerrok;
  ;}
    break;

  case 286:
#line 3060 "parser.y"
    {
	(yyval) = NULL;
  ;}
    break;

  case 287:
#line 3064 "parser.y"
    {
	(yyval) = cb_int1;
  ;}
    break;

  case 290:
#line 3075 "parser.y"
    {
	check_repeated ("EXTERNAL", SYN_CLAUSE_1);
#if	0	/* RXWRXW - Global/External */
	if (current_file->flag_global) {
		cb_error (_("File cannot have both EXTERNAL and GLOBAL clauses"));
	}
#endif
	current_file->flag_external = 1;
  ;}
    break;

  case 291:
#line 3085 "parser.y"
    {
	check_repeated ("GLOBAL", SYN_CLAUSE_2);
#if	0	/* RXWRXW - Global/External */
	if (current_file->flag_external) {
		cb_error (_("File cannot have both EXTERNAL and GLOBAL clauses"));
	}
#endif
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("GLOBAL is invalid in a user FUNCTION"));
	} else {
		current_file->flag_global = 1;
		current_program->flag_file_global = 1;
	}
  ;}
    break;

  case 301:
#line 3115 "parser.y"
    {
	check_repeated ("BLOCK", SYN_CLAUSE_3);
	/* ignore */
  ;}
    break;

  case 305:
#line 3128 "parser.y"
    {
	check_repeated ("RECORD", SYN_CLAUSE_4);
	if (current_file->organization == COB_ORG_LINE_SEQUENTIAL) {
		if (warningopt) {
			cb_warning (_("RECORD clause ignored for LINE SEQUENTIAL"));
		}
	} else {
		current_file->record_max = cb_get_int ((yyvsp[(3) - (4)]));
		if (current_file->record_max < 1)  {
			current_file->record_max = 1;
			cb_error (_("RECORD clause invalid"));
		}
		if (current_file->record_max > MAX_FD_RECORD)  {
			current_file->record_max = MAX_FD_RECORD;
			cb_error (_("RECORD size exceeds maximum allowed (%d)"),
				  MAX_FD_RECORD);
		}
	}
  ;}
    break;

  case 306:
#line 3148 "parser.y"
    {
	int	error_ind = 0;

	check_repeated ("RECORD", SYN_CLAUSE_4);
	if (current_file->organization == COB_ORG_LINE_SEQUENTIAL) {
		if (warningopt) {
			cb_warning (_("RECORD clause ignored for LINE SEQUENTIAL"));
		}
	} else {
		current_file->record_min = cb_get_int ((yyvsp[(3) - (6)]));
		current_file->record_max = cb_get_int ((yyvsp[(5) - (6)]));
		if (current_file->record_min < 0)  {
			current_file->record_min = 0;
			error_ind = 1;
		}
		if (current_file->record_max < 1)  {
			current_file->record_max = 1;
			error_ind = 1;
		}
		if (current_file->record_max > MAX_FD_RECORD)  {
			current_file->record_max = MAX_FD_RECORD;
			cb_error (_("RECORD size exceeds maximum allowed (%d)"),
				  MAX_FD_RECORD);
			error_ind = 1;
		}
		if (current_file->record_max <= current_file->record_min)  {
			error_ind = 1;
		}
		if (error_ind) {
			cb_error (_("RECORD clause invalid"));
		}
	}
  ;}
    break;

  case 307:
#line 3183 "parser.y"
    {
	int	error_ind = 0;

	check_repeated ("RECORD", SYN_CLAUSE_4);
	current_file->record_min = (yyvsp[(6) - (9)]) ? cb_get_int ((yyvsp[(6) - (9)])) : 0;
	current_file->record_max = (yyvsp[(7) - (9)]) ? cb_get_int ((yyvsp[(7) - (9)])) : 0;
	if ((yyvsp[(6) - (9)]) && current_file->record_min < 0)  {
		current_file->record_min = 0;
		error_ind = 1;
	}
	if ((yyvsp[(7) - (9)]) && current_file->record_max < 1)  {
		current_file->record_max = 1;
		error_ind = 1;
	}
	if ((yyvsp[(7) - (9)]) && current_file->record_max > MAX_FD_RECORD)  {
		current_file->record_max = MAX_FD_RECORD;
		cb_error (_("RECORD size exceeds maximum allowed (%d)"),
			  MAX_FD_RECORD);
		error_ind = 1;
	}
	if (((yyvsp[(6) - (9)]) || (yyvsp[(7) - (9)])) && current_file->record_max <= current_file->record_min)  {
		error_ind = 1;
	}
	if (error_ind) {
		cb_error (_("RECORD clause invalid"));
	}
  ;}
    break;

  case 309:
#line 3214 "parser.y"
    {
	current_file->record_depending = (yyvsp[(3) - (3)]);
  ;}
    break;

  case 310:
#line 3220 "parser.y"
    { (yyval) = NULL; ;}
    break;

  case 311:
#line 3221 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); ;}
    break;

  case 312:
#line 3225 "parser.y"
    { (yyval) = NULL; ;}
    break;

  case 313:
#line 3226 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); ;}
    break;

  case 314:
#line 3234 "parser.y"
    {
	check_repeated ("LABEL", SYN_CLAUSE_5);
	cb_verify (cb_label_records_clause, "LABEL RECORDS");
  ;}
    break;

  case 315:
#line 3245 "parser.y"
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6);
	cb_verify (cb_value_of_clause, "VALUE OF");
  ;}
    break;

  case 316:
#line 3250 "parser.y"
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6);
	cb_verify (cb_value_of_clause, "VALUE OF");
	if (!current_file->assign) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[(5) - (5)]));
	}
  ;}
    break;

  case 321:
#line 3273 "parser.y"
    {
	check_repeated ("DATA", SYN_CLAUSE_7);
	cb_verify (cb_data_records_clause, "DATA RECORDS");
  ;}
    break;

  case 322:
#line 3285 "parser.y"
    {
	check_repeated ("LINAGE", SYN_CLAUSE_8);
	if (current_file->organization != COB_ORG_LINE_SEQUENTIAL &&
	    current_file->organization != COB_ORG_SEQUENTIAL) {
		cb_error (_("LINAGE clause with wrong file type"));
	} else {
		current_file->linage = (yyvsp[(3) - (5)]);
		current_file->organization = COB_ORG_LINE_SEQUENTIAL;
		if (current_linage == 0) {
			linage_file = current_file;
		}
		current_linage++;
	}
  ;}
    break;

  case 328:
#line 3313 "parser.y"
    {
	current_file->latfoot = (yyvsp[(4) - (4)]);
  ;}
    break;

  case 329:
#line 3320 "parser.y"
    {
	current_file->lattop = (yyvsp[(2) - (2)]);
  ;}
    break;

  case 330:
#line 3327 "parser.y"
    {
	current_file->latbot = (yyvsp[(2) - (2)]);
  ;}
    break;

  case 331:
#line 3336 "parser.y"
    {
	cobc_cs_check = 0;
	check_repeated ("RECORDING", SYN_CLAUSE_9);
	/* ignore */
  ;}
    break;

  case 332:
#line 3348 "parser.y"
    {
	check_repeated ("CODE SET", SYN_CLAUSE_10);
	if (CB_VALID_TREE ((yyvsp[(3) - (3)]))) {
		cb_tree			x;
		struct cb_alphabet_name	*al;

		x = cb_ref ((yyvsp[(3) - (3)]));
		if (current_file->organization != COB_ORG_LINE_SEQUENTIAL &&
		    current_file->organization != COB_ORG_SEQUENTIAL) {
			cb_error (_("CODE-SET clause invalid for file type"));
		}
		if (!CB_ALPHABET_NAME_P (x)) {
			cb_error_x ((yyvsp[(3) - (3)]), _("Alphabet-name is expected '%s'"), cb_name ((yyvsp[(3) - (3)])));
		} else {
			al = CB_ALPHABET_NAME (x);
			switch (al->alphabet_type) {
#ifdef	COB_EBCDIC_MACHINE
			case CB_ALPHABET_ASCII:
			case CB_ALPHABET_CUSTOM:
				current_file->code_set = al;
				break;
			default:
				if (warningopt) {
					cb_warning_x ((yyvsp[(3) - (3)]), _("Ignoring CODE-SET '%s'"),
						      cb_name ((yyvsp[(3) - (3)])));
				}
				break;
#else
			case CB_ALPHABET_EBCDIC:
			case CB_ALPHABET_CUSTOM:
				current_file->code_set = al;
				break;
			default:
				if (warningopt) {
					cb_warning_x ((yyvsp[(3) - (3)]), _("Ignoring CODE-SET '%s'"),
						      cb_name ((yyvsp[(3) - (3)])));
				}
				break;
#endif
			}
			if (warningopt) {
				PENDING ("CODE-SET");
			}
		}
	}
  ;}
    break;

  case 333:
#line 3400 "parser.y"
    {
	check_repeated ("REPORT", SYN_CLAUSE_11);
	if (current_file->organization != COB_ORG_LINE_SEQUENTIAL &&
	    current_file->organization != COB_ORG_SEQUENTIAL) {
		cb_error (_("REPORT clause with wrong file type"));
	} else {
		current_file->reports = (yyvsp[(2) - (2)]);
		current_file->organization = COB_ORG_LINE_SEQUENTIAL;
		current_file->flag_line_adv = 1;
	}
  ;}
    break;

  case 336:
#line 3420 "parser.y"
    {
	current_report = build_report ((yyvsp[(1) - (1)]));
	current_report->file = current_file;
	current_program->report_list =
				cb_list_add (current_program->report_list,
					     CB_TREE (current_report));
	if (report_count == 0) {
		report_instance = current_report;
	}
	report_count++;
  ;}
    break;

  case 337:
#line 3432 "parser.y"
    {
	current_report = build_report ((yyvsp[(2) - (2)]));
	current_report->file = current_file;
	current_program->report_list =
				cb_list_add (current_program->report_list,
					     CB_TREE (current_report));
	if (report_count == 0) {
		report_instance = current_report;
	}
	report_count++;
  ;}
    break;

  case 339:
#line 3475 "parser.y"
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_WORKING_STORAGE_SECTION;
	current_storage = CB_STORAGE_WORKING;
  ;}
    break;

  case 340:
#line 3481 "parser.y"
    {
	if ((yyvsp[(5) - (5)])) {
		CB_FIELD_ADD (current_program->working_storage, CB_FIELD ((yyvsp[(5) - (5)])));
	}
  ;}
    break;

  case 341:
#line 3490 "parser.y"
    {
	(yyval) = NULL;
  ;}
    break;

  case 342:
#line 3493 "parser.y"
    {
	current_field = NULL;
	control_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  ;}
    break;

  case 343:
#line 3500 "parser.y"
    {
	struct cb_field *p;

	for (p = description_field; p; p = p->sister) {
		cb_validate_field (p);
	}
	(yyval) = CB_TREE (description_field);
  ;}
    break;

  case 348:
#line 3520 "parser.y"
    {
	cb_tree x;

	x = cb_build_field_tree ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), current_field, current_storage,
				 current_file, 0);
	/* Free tree assocated with level number */
	cobc_parse_free ((yyvsp[(1) - (2)]));
	if (CB_INVALID_TREE (x)) {
		YYERROR;
	} else {
		current_field = CB_FIELD (x);
		check_pic_duplicate = 0;
	}
  ;}
    break;

  case 349:
#line 3535 "parser.y"
    {
	if (!qualifier && (current_field->level == 88 ||
	    current_field->level == 66 || current_field->flag_item_78)) {
		cb_error (_("Item requires a data name"));
	}
	if (!qualifier) {
		current_field->flag_filler = 1;
	}
	if (current_field->level == 88) {
		cb_validate_88_item (current_field);
	}
	if (current_field->flag_item_78) {
		/* Reset to last non-78 item */
		current_field = cb_validate_78_item (current_field, 0);
	}
	if (!description_field) {
		description_field = current_field;
	}
  ;}
    break;

  case 350:
#line 3555 "parser.y"
    {
	/* Free tree assocated with level number */
	cobc_parse_free ((yyvsp[(1) - (3)]));
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
	current_field = cb_get_real_field ();
  ;}
    break;

  case 351:
#line 3568 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  ;}
    break;

  case 352:
#line 3575 "parser.y"
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  ;}
    break;

  case 353:
#line 3581 "parser.y"
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  ;}
    break;

  case 354:
#line 3587 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	qualifier = (yyvsp[(1) - (1)]);
	non_const_word = 0;
  ;}
    break;

  case 355:
#line 3596 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	qualifier = (yyvsp[(1) - (1)]);
	non_const_word = 0;
  ;}
    break;

  case 356:
#line 3605 "parser.y"
    {
	(yyval)= NULL;
  ;}
    break;

  case 357:
#line 3609 "parser.y"
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("GLOBAL is invalid in a user FUNCTION"));
		(yyval)= NULL;
	} else {
		(yyval) = cb_null;
	}
  ;}
    break;

  case 358:
#line 3620 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 359:
#line 3621 "parser.y"
    { (yyval) = cb_build_const_length ((yyvsp[(2) - (2)])); ;}
    break;

  case 360:
#line 3622 "parser.y"
    { (yyval) = cb_build_const_length ((yyvsp[(2) - (2)])); ;}
    break;

  case 361:
#line 3623 "parser.y"
    { (yyval) = cb_build_const_length ((yyvsp[(3) - (3)])); ;}
    break;

  case 362:
#line 3628 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  ;}
    break;

  case 363:
#line 3632 "parser.y"
    {
	(yyval) = cb_int1;
  ;}
    break;

  case 364:
#line 3636 "parser.y"
    {
	(yyval) = cb_int2;
  ;}
    break;

  case 365:
#line 3640 "parser.y"
    {
	(yyval) = cb_int4;
  ;}
    break;

  case 366:
#line 3644 "parser.y"
    {
	(yyval) = cb_int (8);
  ;}
    break;

  case 367:
#line 3648 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(long));
  ;}
    break;

  case 368:
#line 3652 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(void *));
  ;}
    break;

  case 369:
#line 3656 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(float));
  ;}
    break;

  case 370:
#line 3660 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(double));
  ;}
    break;

  case 371:
#line 3664 "parser.y"
    {
	(yyval) = cb_int (4);
  ;}
    break;

  case 372:
#line 3668 "parser.y"
    {
	(yyval) = cb_int (8);
  ;}
    break;

  case 373:
#line 3672 "parser.y"
    {
	(yyval) = cb_int (16);
  ;}
    break;

  case 374:
#line 3676 "parser.y"
    {
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
	current_field = cb_get_real_field ();
  ;}
    break;

  case 384:
#line 3708 "parser.y"
    {
	cb_tree x;
	int	level;

	cobc_cs_check = 0;
	level = cb_get_level ((yyvsp[(1) - (5)]));
	/* Free tree assocated with level number */
	cobc_parse_free ((yyvsp[(1) - (5)]));
	if (level != 1) {
		cb_error (_("CONSTANT item not at 01 level"));
	} else if ((yyvsp[(5) - (5)])) {
		x = cb_build_constant ((yyvsp[(2) - (5)]), (yyvsp[(5) - (5)]));
		CB_FIELD (x)->flag_item_78 = 1;
		CB_FIELD (x)->level = 1;
		cb_needs_01 = 1;
		if ((yyvsp[(4) - (5)])) {
			CB_FIELD (x)->flag_is_global = 1;
		}
		/* Ignore return value */
		(void)cb_validate_78_item (CB_FIELD (x), 0);
	}
  ;}
    break;

  case 385:
#line 3734 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  ;}
    break;

  case 386:
#line 3738 "parser.y"
    {
	PENDING ("CONSTANT FROM clause");
	(yyval) = NULL;
  ;}
    break;

  case 387:
#line 3746 "parser.y"
    {
	/* Required to check redefines */
	(yyval) = NULL;
  ;}
    break;

  case 388:
#line 3752 "parser.y"
    {
	/* Required to check redefines */
	(yyval) = cb_true;
  ;}
    break;

  case 403:
#line 3780 "parser.y"
    {
	check_pic_repeated ("REDEFINES", SYN_CLAUSE_1);
	if ((yyvsp[(0) - (2)]) != NULL) {
		if (cb_relaxed_syntax_check) {
			cb_warning_x ((yyvsp[(2) - (2)]), _("REDEFINES clause should follow entry-name"));
		} else {
			cb_error_x ((yyvsp[(2) - (2)]), _("REDEFINES clause must follow entry-name"));
		}
	}

	current_field->redefines = cb_resolve_redefines (current_field, (yyvsp[(2) - (2)]));
	if (current_field->redefines == NULL) {
		current_field->flag_is_verified = 1;
		current_field->flag_invalid = 1;
		YYERROR;
	}
  ;}
    break;

  case 404:
#line 3804 "parser.y"
    {
	check_pic_repeated ("EXTERNAL", SYN_CLAUSE_2);
	if (current_storage != CB_STORAGE_WORKING) {
		cb_error (_("EXTERNAL not allowed here"));
	} else if (current_field->level != 1 && current_field->level != 77) {
		cb_error (_("EXTERNAL only allowed at 01/77 level"));
	} else if (!qualifier) {
		cb_error (_("EXTERNAL requires a data name"));
#if	0	/* RXWRXW - Global/External */
	} else if (current_field->flag_is_global) {
		cb_error (_("GLOBAL and EXTERNAL are mutually exclusive"));
#endif
	} else if (current_field->flag_item_based) {
		cb_error (_("BASED and EXTERNAL are mutually exclusive"));
	} else if (current_field->redefines) {
		cb_error (_("EXTERNAL and REDEFINES are mutually exclusive"));
	} else if (current_field->flag_occurs) {
		cb_error (_("EXTERNAL and OCCURS are mutually exclusive"));
	} else {
		current_field->flag_external = 1;
		current_program->flag_has_external = 1;
	}
  ;}
    break;

  case 405:
#line 3831 "parser.y"
    {
	current_field->ename = cb_to_cname (current_field->name);
  ;}
    break;

  case 406:
#line 3835 "parser.y"
    {
	current_field->ename = cb_to_cname ((const char *)CB_LITERAL ((yyvsp[(2) - (2)]))->data);
  ;}
    break;

  case 407:
#line 3844 "parser.y"
    {
	check_pic_repeated ("GLOBAL", SYN_CLAUSE_3);
	if (current_field->level != 1 && current_field->level != 77) {
		cb_error (_("GLOBAL only allowed at 01/77 level"));
	} else if (!qualifier) {
		cb_error (_("GLOBAL requires a data name"));
#if	0	/* RXWRXW - Global/External */
	} else if (current_field->flag_external) {
		cb_error (_("GLOBAL and EXTERNAL are mutually exclusive"));
#endif
	} else if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("GLOBAL is invalid in a user FUNCTION"));
	} else if (current_storage == CB_STORAGE_LOCAL) {
		cb_error (_("GLOBAL not allowed here"));
	} else {
		current_field->flag_is_global = 1;
	}
  ;}
    break;

  case 408:
#line 3869 "parser.y"
    {
	check_pic_repeated ("PICTURE", SYN_CLAUSE_4);
	current_field->pic = CB_PICTURE ((yyvsp[(1) - (1)]));
  ;}
    break;

  case 411:
#line 3885 "parser.y"
    {
	check_set_usage (CB_USAGE_BINARY);
  ;}
    break;

  case 412:
#line 3889 "parser.y"
    {
	check_set_usage (CB_USAGE_BINARY);
  ;}
    break;

  case 413:
#line 3893 "parser.y"
    {
	check_set_usage (CB_USAGE_FLOAT);
  ;}
    break;

  case 414:
#line 3897 "parser.y"
    {
	check_set_usage (CB_USAGE_DOUBLE);
  ;}
    break;

  case 415:
#line 3901 "parser.y"
    {
	check_set_usage (CB_USAGE_PACKED);
  ;}
    break;

  case 416:
#line 3905 "parser.y"
    {
	check_set_usage (CB_USAGE_BINARY);
  ;}
    break;

  case 417:
#line 3909 "parser.y"
    {
	check_set_usage (CB_USAGE_COMP_5);
  ;}
    break;

  case 418:
#line 3913 "parser.y"
    {
	check_set_usage (CB_USAGE_COMP_6);
  ;}
    break;

  case 419:
#line 3917 "parser.y"
    {
	check_set_usage (CB_USAGE_COMP_X);
  ;}
    break;

  case 420:
#line 3921 "parser.y"
    {
	check_set_usage (CB_USAGE_DISPLAY);
  ;}
    break;

  case 421:
#line 3925 "parser.y"
    {
	check_set_usage (CB_USAGE_INDEX);
  ;}
    break;

  case 422:
#line 3929 "parser.y"
    {
	check_set_usage (CB_USAGE_PACKED);
  ;}
    break;

  case 423:
#line 3933 "parser.y"
    {
	check_set_usage (CB_USAGE_POINTER);
	current_field->flag_is_pointer = 1;
  ;}
    break;

  case 424:
#line 3938 "parser.y"
    {
	check_set_usage (CB_USAGE_PROGRAM_POINTER);
	current_field->flag_is_pointer = 1;
  ;}
    break;

  case 425:
#line 3943 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  ;}
    break;

  case 426:
#line 3947 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  ;}
    break;

  case 427:
#line 3951 "parser.y"
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_SIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_SIGNED_LONG);
	}
  ;}
    break;

  case 428:
#line 3959 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  ;}
    break;

  case 429:
#line 3963 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  ;}
    break;

  case 430:
#line 3967 "parser.y"
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_UNSIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_UNSIGNED_LONG);
	}
  ;}
    break;

  case 431:
#line 3975 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_CHAR);
  ;}
    break;

  case 432:
#line 3979 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_CHAR);
  ;}
    break;

  case 433:
#line 3983 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  ;}
    break;

  case 434:
#line 3987 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  ;}
    break;

  case 435:
#line 3991 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  ;}
    break;

  case 436:
#line 3995 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  ;}
    break;

  case 437:
#line 3999 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_LONG);
  ;}
    break;

  case 438:
#line 4003 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_LONG);
  ;}
    break;

  case 439:
#line 4007 "parser.y"
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_SIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_SIGNED_LONG);
	}
  ;}
    break;

  case 440:
#line 4015 "parser.y"
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_UNSIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_UNSIGNED_LONG);
	}
  ;}
    break;

  case 441:
#line 4023 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_BIN32);
  ;}
    break;

  case 442:
#line 4027 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_BIN64);
  ;}
    break;

  case 443:
#line 4031 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_BIN128);
  ;}
    break;

  case 444:
#line 4035 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_DEC64);
  ;}
    break;

  case 445:
#line 4039 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_DEC128);
  ;}
    break;

  case 446:
#line 4043 "parser.y"
    {
	check_pic_repeated ("USAGE", SYN_CLAUSE_5);
	PENDING ("USAGE NATIONAL");
  ;}
    break;

  case 451:
#line 4063 "parser.y"
    {
	check_pic_repeated ("SIGN", SYN_CLAUSE_6);
	current_field->flag_sign_separate = ((yyvsp[(3) - (3)]) ? 1 : 0);
	current_field->flag_sign_leading  = 1;
  ;}
    break;

  case 452:
#line 4069 "parser.y"
    {
	check_pic_repeated ("SIGN", SYN_CLAUSE_6);
	current_field->flag_sign_separate = ((yyvsp[(3) - (3)]) ? 1 : 0);
	current_field->flag_sign_leading  = 0;
  ;}
    break;

  case 453:
#line 4082 "parser.y"
    {
	check_pic_repeated ("OCCURS", SYN_CLAUSE_7);
	if (current_field->depending && !((yyvsp[(3) - (6)]))) {
		cb_verify (cb_odo_without_to, "ODO without TO clause");
	}
	current_field->occurs_min = (yyvsp[(3) - (6)]) ? cb_get_int ((yyvsp[(2) - (6)])) : 1;
	current_field->occurs_max = (yyvsp[(3) - (6)]) ? cb_get_int ((yyvsp[(3) - (6)])) : cb_get_int ((yyvsp[(2) - (6)]));
	current_field->indexes++;
	if (current_field->indexes > COB_MAX_SUBSCRIPTS) {
		cb_error (_("Maximum OCCURS depth exceeded (%d)"),
			  COB_MAX_SUBSCRIPTS);
	}
	current_field->flag_occurs = 1;
  ;}
    break;

  case 455:
#line 4100 "parser.y"
    {
	current_field->step_count = cb_get_int ((yyvsp[(2) - (2)]));
  ;}
    break;

  case 456:
#line 4110 "parser.y"
    {
	check_pic_repeated ("OCCURS", SYN_CLAUSE_7);
	if (current_field->depending && !((yyvsp[(3) - (7)]))) {
		cb_verify (cb_odo_without_to, "ODO without TO clause");
	}
	current_field->occurs_min = (yyvsp[(3) - (7)]) ? cb_get_int ((yyvsp[(2) - (7)])) : 1;
	current_field->occurs_max = (yyvsp[(3) - (7)]) ? cb_get_int ((yyvsp[(3) - (7)])) : cb_get_int ((yyvsp[(2) - (7)]));
	current_field->indexes++;
	if (current_field->indexes > COB_MAX_SUBSCRIPTS) {
		cb_error (_("Maximum OCCURS depth exceeded (%d)"),
			  COB_MAX_SUBSCRIPTS);
	}
	if (current_field->flag_item_based) {
		cb_error (_("BASED and OCCURS are mutually exclusive"));
	} else if (current_field->flag_external) {
		cb_error (_("EXTERNAL and OCCURS are mutually exclusive"));
	}
	current_field->flag_occurs = 1;
  ;}
    break;

  case 457:
#line 4132 "parser.y"
    { (yyval) = NULL; ;}
    break;

  case 458:
#line 4133 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); ;}
    break;

  case 460:
#line 4138 "parser.y"
    {
	current_field->depending = (yyvsp[(3) - (3)]);
  ;}
    break;

  case 461:
#line 4145 "parser.y"
    {
	if ((yyvsp[(1) - (1)])) {
		cb_tree		l;
		struct cb_key	*keys;
		int		i;
		int		nkeys;

		l = (yyvsp[(1) - (1)]);
		nkeys = cb_list_length ((yyvsp[(1) - (1)]));
		keys = cobc_parse_malloc (sizeof (struct cb_key) * nkeys);

		for (i = 0; i < nkeys; i++) {
			keys[i].dir = CB_PURPOSE_INT (l);
			keys[i].key = CB_VALUE (l);
			l = CB_CHAIN (l);
		}
		current_field->keys = keys;
		current_field->nkeys = nkeys;
	}
  ;}
    break;

  case 462:
#line 4168 "parser.y"
    { (yyval) = NULL; ;}
    break;

  case 463:
#line 4171 "parser.y"
    {
	cb_tree l;

	for (l = (yyvsp[(5) - (5)]); l; l = CB_CHAIN (l)) {
		CB_PURPOSE (l) = (yyvsp[(2) - (5)]);
		if (qualifier && !CB_REFERENCE(CB_VALUE(l))->chain &&
		    strcasecmp (CB_NAME(CB_VALUE(l)), CB_NAME(qualifier))) {
			CB_REFERENCE(CB_VALUE(l))->chain = qualifier;
		}
	}
	(yyval) = cb_list_append ((yyvsp[(1) - (5)]), (yyvsp[(5) - (5)]));
  ;}
    break;

  case 464:
#line 4186 "parser.y"
    { (yyval) = cb_int (COB_ASCENDING); ;}
    break;

  case 465:
#line 4187 "parser.y"
    { (yyval) = cb_int (COB_DESCENDING); ;}
    break;

  case 467:
#line 4192 "parser.y"
    {
	current_field->index_list = (yyvsp[(3) - (3)]);
  ;}
    break;

  case 468:
#line 4198 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); ;}
    break;

  case 469:
#line 4200 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); ;}
    break;

  case 470:
#line 4205 "parser.y"
    {
	(yyval) = cb_build_index ((yyvsp[(1) - (1)]), cb_int1, 1U, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  ;}
    break;

  case 471:
#line 4216 "parser.y"
    {
	check_pic_repeated ("JUSTIFIED", SYN_CLAUSE_8);
	current_field->flag_justified = 1;
  ;}
    break;

  case 472:
#line 4227 "parser.y"
    {
	check_pic_repeated ("SYNCHRONIZED", SYN_CLAUSE_9);
	current_field->flag_synchronized = 1;
  ;}
    break;

  case 473:
#line 4238 "parser.y"
    {
	check_pic_repeated ("BLANK", SYN_CLAUSE_10);
	current_field->flag_blank_zero = 1;
  ;}
    break;

  case 474:
#line 4249 "parser.y"
    {
	check_pic_repeated ("BASED", SYN_CLAUSE_11);
	if (current_storage != CB_STORAGE_WORKING &&
	    current_storage != CB_STORAGE_LINKAGE &&
	    current_storage != CB_STORAGE_LOCAL) {
		cb_error (_("BASED not allowed here"));
	} else if (current_field->level != 1 && current_field->level != 77) {
		cb_error (_("BASED only allowed at 01/77 level"));
	} else if (!qualifier) {
		cb_error (_("BASED requires a data name"));
	} else if (current_field->flag_external) {
		cb_error (_("BASED and EXTERNAL are mutually exclusive"));
	} else if (current_field->redefines) {
		cb_error (_("BASED and REDEFINES are mutually exclusive"));
	} else if (current_field->flag_any_length) {
		cb_error (_("BASED and ANY LENGTH are mutually exclusive"));
	} else if (current_field->flag_occurs) {
		cb_error (_("BASED and OCCURS are mutually exclusive"));
	} else {
		current_field->flag_item_based = 1;
	}
  ;}
    break;

  case 475:
#line 4277 "parser.y"
    {
	check_pic_repeated ("VALUE", SYN_CLAUSE_12);
	current_field->values = (yyvsp[(3) - (3)]);
  ;}
    break;

  case 477:
#line 4285 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); ;}
    break;

  case 478:
#line 4286 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); ;}
    break;

  case 479:
#line 4290 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 480:
#line 4291 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 482:
#line 4296 "parser.y"
    {
	if (current_field->level != 88) {
		cb_error (_("FALSE clause only allowed for 88 level"));
	}
	current_field->false_88 = CB_LIST_INIT ((yyvsp[(4) - (4)]));
  ;}
    break;

  case 483:
#line 4309 "parser.y"
    {
	check_pic_repeated ("RENAMES", SYN_CLAUSE_13);
	if (cb_ref ((yyvsp[(2) - (2)])) != cb_error_node) {
		if (CB_FIELD (cb_ref ((yyvsp[(2) - (2)])))->level == 01 ||
		    CB_FIELD (cb_ref ((yyvsp[(2) - (2)])))->level > 50) {
			cb_error (_("RENAMES may not reference a level 01 or > 50"));
		} else {
			current_field->redefines = CB_FIELD (cb_ref ((yyvsp[(2) - (2)])));
			current_field->pic = current_field->redefines->pic;
		}
	}
  ;}
    break;

  case 484:
#line 4322 "parser.y"
    {
	check_pic_repeated ("RENAMES", SYN_CLAUSE_13);
	if (cb_ref ((yyvsp[(2) - (4)])) != cb_error_node && cb_ref ((yyvsp[(4) - (4)])) != cb_error_node) {
		if (CB_FIELD (cb_ref ((yyvsp[(2) - (4)])))->level == 01 ||
		    CB_FIELD (cb_ref ((yyvsp[(2) - (4)])))->level > 50) {
			cb_error (_("RENAMES may not reference a level 01 or > 50"));
		} else if (CB_FIELD (cb_ref ((yyvsp[(4) - (4)])))->level == 01 ||
		    CB_FIELD (cb_ref ((yyvsp[(4) - (4)])))->level > 50) {
			cb_error (_("RENAMES may not reference a level 01 or > 50"));
		} else {
			current_field->redefines = CB_FIELD (cb_ref ((yyvsp[(2) - (4)])));
			current_field->rename_thru = CB_FIELD (cb_ref ((yyvsp[(4) - (4)])));
		}
	}
  ;}
    break;

  case 485:
#line 4343 "parser.y"
    {
	check_pic_repeated ("ANY", SYN_CLAUSE_14);
	if (current_field->flag_item_based) {
		cb_error (_("BASED and ANY clause are mutually exclusive"));
	} else {
		current_field->flag_any_length = 1;
	}
  ;}
    break;

  case 486:
#line 4352 "parser.y"
    {
	check_pic_repeated ("ANY", SYN_CLAUSE_14);
	if (current_field->flag_item_based) {
		cb_error (_("BASED and ANY clause are mutually exclusive"));
	} else {
		current_field->flag_any_length = 1;
		current_field->flag_any_numeric = 1;
	}
  ;}
    break;

  case 488:
#line 4367 "parser.y"
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LOCAL_STORAGE_SECTION;
	current_storage = CB_STORAGE_LOCAL;
	if (current_program->nested_level) {
		cb_error (_("LOCAL-STORAGE not allowed in nested programs"));
	}
  ;}
    break;

  case 489:
#line 4376 "parser.y"
    {
	if ((yyvsp[(5) - (5)])) {
		current_program->local_storage = CB_FIELD ((yyvsp[(5) - (5)]));
	}
  ;}
    break;

  case 491:
#line 4388 "parser.y"
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LINKAGE_SECTION;
	current_storage = CB_STORAGE_LINKAGE;
  ;}
    break;

  case 492:
#line 4394 "parser.y"
    {
	if ((yyvsp[(5) - (5)])) {
		current_program->linkage_storage = CB_FIELD ((yyvsp[(5) - (5)]));
	}
  ;}
    break;

  case 494:
#line 4405 "parser.y"
    {
	header_check |= COBC_HD_REPORT_SECTION;
	current_storage = CB_STORAGE_REPORT;
	description_field = NULL;
	current_program->flag_report = 1;
	cb_clear_real_field ();
  ;}
    break;

  case 498:
#line 4423 "parser.y"
    {
	if (CB_INVALID_TREE ((yyvsp[(2) - (2)]))) {
		YYERROR;
	} else {
		current_field = NULL;
		control_field = NULL;
		description_field = NULL;
		current_report = CB_REPORT (cb_ref ((yyvsp[(2) - (2)])));
	}
	check_duplicate = 0;
  ;}
    break;

  case 499:
#line 4436 "parser.y"
    {
	struct cb_field *p;

	for (p = description_field; p; p = p->sister) {
		cb_validate_field (p);
	}
	current_program->report_storage = description_field;
	current_program->flag_report = 1;
	if(current_report->records == NULL)
		current_report->records = description_field;
	finalize_report (current_report, description_field);
	(yyval) = CB_TREE (description_field);
  ;}
    break;

  case 502:
#line 4454 "parser.y"
    {
	yyerrok;
  ;}
    break;

  case 503:
#line 4461 "parser.y"
    {
	check_repeated ("GLOBAL", SYN_CLAUSE_1);
	current_report->global = 1;
	cb_error (_("GLOBAL is not allowed with RD"));
  ;}
    break;

  case 504:
#line 4467 "parser.y"
    {
	check_repeated ("CODE", SYN_CLAUSE_2);
  ;}
    break;

  case 507:
#line 4478 "parser.y"
    {
	check_repeated ("CONTROL", SYN_CLAUSE_3);
  ;}
    break;

  case 511:
#line 4491 "parser.y"
    {
      current_report->control_final = 1;
  ;}
    break;

  case 514:
#line 4503 "parser.y"
    {
	/* Add field to current control list */
	CB_ADD_TO_CHAIN ((yyvsp[(1) - (1)]), current_report->controls);
  ;}
    break;

  case 515:
#line 4514 "parser.y"
    {
	check_repeated ("PAGE", SYN_CLAUSE_4);
	if (!current_report->heading) {
		current_report->heading = 1;
	}
	if (!current_report->first_detail) {
		current_report->first_detail = current_report->heading;
	}
	if (!current_report->last_control) {
		if (current_report->last_detail) {
			current_report->last_control = current_report->last_detail;
		} else if (current_report->footing) {
			current_report->last_control = current_report->footing;
		} else {
			current_report->last_control = current_report->lines;
		}
		if (current_report->t_last_detail) {
			current_report->t_last_control = current_report->t_last_detail;
		} else if (current_report->t_footing) {
			current_report->t_last_control = current_report->t_footing;
		} else if(current_report->t_lines) {
			current_report->t_last_control = current_report->t_lines;
		}

	}
	if (!current_report->last_detail && !current_report->footing) {
		current_report->last_detail = current_report->lines;
		current_report->footing = current_report->lines;
	} else if (!current_report->last_detail) {
		current_report->last_detail = current_report->footing;
	} else if (!current_report->footing) {
		current_report->footing = current_report->last_detail;
	}
	/* PAGE LIMIT values checked in finalize_report in typeck.c */
  ;}
    break;

  case 516:
#line 4553 "parser.y"
    {
	if (CB_LITERAL_P ((yyvsp[(1) - (1)]))) {
		current_report->lines = cb_get_int ((yyvsp[(1) - (1)]));
		if(current_report->lines > 999)
			cb_error (_("PAGE LIMIT lines > 999"));
	} else {
		current_report->t_lines = (yyvsp[(1) - (1)]);
	}
  ;}
    break;

  case 517:
#line 4563 "parser.y"
    {
	if (CB_LITERAL_P ((yyvsp[(1) - (2)]))) {
		current_report->lines = cb_get_int ((yyvsp[(1) - (2)]));
		if(current_report->lines > 999)
			cb_error (_("PAGE LIMIT lines > 999"));
	} else {
		current_report->t_lines = (yyvsp[(1) - (2)]);
	}
  ;}
    break;

  case 518:
#line 4573 "parser.y"
    {
	if (CB_LITERAL_P ((yyvsp[(1) - (4)]))) {
		current_report->lines = cb_get_int ((yyvsp[(1) - (4)]));
		if(current_report->lines > 999)
			cb_error (_("PAGE LIMIT lines > 999"));
	} else {
		current_report->t_lines = (yyvsp[(1) - (4)]);
	}
	if (CB_LITERAL_P ((yyvsp[(3) - (4)]))) {
		current_report->columns = cb_get_int ((yyvsp[(3) - (4)]));
	} else {
		current_report->t_columns = (yyvsp[(3) - (4)]);
	}
  ;}
    break;

  case 528:
#line 4609 "parser.y"
    {
	if (CB_LITERAL_P ((yyvsp[(3) - (3)]))) {
		current_report->heading = cb_get_int ((yyvsp[(3) - (3)]));
	} else {
		current_report->t_heading = (yyvsp[(3) - (3)]);
	}
  ;}
    break;

  case 529:
#line 4620 "parser.y"
    {
	if (CB_LITERAL_P ((yyvsp[(4) - (4)]))) {
		current_report->first_detail = cb_get_int ((yyvsp[(4) - (4)]));
	} else {
		current_report->t_first_detail = (yyvsp[(4) - (4)]);
	}
  ;}
    break;

  case 530:
#line 4631 "parser.y"
    {
	if (CB_LITERAL_P ((yyvsp[(4) - (4)]))) {
		current_report->last_control = cb_get_int ((yyvsp[(4) - (4)]));
	} else {
		current_report->t_last_control = (yyvsp[(4) - (4)]);
	}
  ;}
    break;

  case 531:
#line 4642 "parser.y"
    {
	if (CB_LITERAL_P ((yyvsp[(4) - (4)]))) {
		current_report->last_detail = cb_get_int ((yyvsp[(4) - (4)]));
	} else {
		current_report->t_last_detail = (yyvsp[(4) - (4)]);
	}
  ;}
    break;

  case 532:
#line 4653 "parser.y"
    {
	if (CB_LITERAL_P ((yyvsp[(3) - (3)]))) {
		current_report->footing = cb_get_int ((yyvsp[(3) - (3)]));
	} else {
		current_report->t_footing = (yyvsp[(3) - (3)]);
	}
  ;}
    break;

  case 535:
#line 4668 "parser.y"
    {
	cb_tree	x;

	x = cb_build_field_tree ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), current_field, current_storage,
				 current_file, 0);
	/* Free tree assocated with level number */
	cobc_parse_free ((yyvsp[(1) - (2)]));
	check_pic_duplicate = 0;
	if (CB_INVALID_TREE (x)) {
		YYERROR;
	}

	current_field = CB_FIELD (x);
	if (!description_field) {
		description_field = current_field;
	}
  ;}
    break;

  case 556:
#line 4714 "parser.y"
    {
	check_pic_repeated ("TYPE", SYN_CLAUSE_16);
  ;}
    break;

  case 557:
#line 4721 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_HEADING;
  ;}
    break;

  case 558:
#line 4725 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_PAGE_HEADING;
  ;}
    break;

  case 561:
#line 4731 "parser.y"
    {
	if(current_report != NULL) {
		current_report->has_detail = 1;
	}
      current_field->report_flag |= COB_REPORT_DETAIL;
  ;}
    break;

  case 562:
#line 4738 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_PAGE_FOOTING;
  ;}
    break;

  case 563:
#line 4742 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_FOOTING;
  ;}
    break;

  case 564:
#line 4748 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_CONTROL_HEADING;
  ;}
    break;

  case 565:
#line 4752 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_CONTROL_HEADING;
      current_field->report_control = (yyvsp[(1) - (1)]);
  ;}
    break;

  case 566:
#line 4757 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_CONTROL_HEADING_FINAL;
  ;}
    break;

  case 567:
#line 4763 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_CONTROL_FOOTING;
  ;}
    break;

  case 568:
#line 4767 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_CONTROL_FOOTING;
      current_field->report_control = (yyvsp[(1) - (1)]);
  ;}
    break;

  case 569:
#line 4772 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_CONTROL_FOOTING_FINAL;
  ;}
    break;

  case 570:
#line 4779 "parser.y"
    {
	check_pic_repeated ("NEXT GROUP", SYN_CLAUSE_17);
  ;}
    break;

  case 571:
#line 4786 "parser.y"
    {
	if (CB_LITERAL ((yyvsp[(1) - (1)]))->sign > 0) {
		current_field->report_flag |= COB_REPORT_NEXT_GROUP_PLUS;
	} else {
		current_field->report_flag |= COB_REPORT_NEXT_GROUP_LINE;
	}
	current_field->next_group_line = cb_get_int((yyvsp[(1) - (1)]));
  ;}
    break;

  case 572:
#line 4795 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_NEXT_GROUP_PLUS;
      current_field->next_group_line = cb_get_int((yyvsp[(2) - (2)]));
  ;}
    break;

  case 573:
#line 4800 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_NEXT_GROUP_PLUS;
      current_field->next_group_line = cb_get_int((yyvsp[(2) - (2)]));
  ;}
    break;

  case 574:
#line 4805 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_NEXT_GROUP_PAGE;
  ;}
    break;

  case 579:
#line 4819 "parser.y"
    {
	check_pic_repeated ("SUM", SYN_CLAUSE_19);
	current_field->report_sum_list = (yyvsp[(3) - (4)]);
	build_sum_counter( current_report, current_field);
  ;}
    break;

  case 582:
#line 4829 "parser.y"
    {
      current_field->report_sum_upon = (yyvsp[(2) - (2)]);
  ;}
    break;

  case 583:
#line 4836 "parser.y"
    {
      current_field->report_reset = (yyvsp[(1) - (1)]);
  ;}
    break;

  case 584:
#line 4840 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_RESET_FINAL;
  ;}
    break;

  case 585:
#line 4847 "parser.y"
    {
	check_pic_repeated ("PRESENT", SYN_CLAUSE_20);
	current_field->report_when = (yyvsp[(3) - (3)]);
  ;}
    break;

  case 587:
#line 4859 "parser.y"
    {
	check_pic_repeated ("LINE", SYN_CLAUSE_21);
	current_field->report_flag |= COB_REPORT_LINE;
  ;}
    break;

  case 589:
#line 4871 "parser.y"
    {
	if(current_field->report_line == 0) {
		cb_warning (_("LINE 0 not implemented"));
	}
  ;}
    break;

  case 590:
#line 4877 "parser.y"
    {
	current_field->report_flag |= COB_REPORT_LINE_PLUS;
	current_field->report_line = cb_get_int((yyvsp[(2) - (2)]));
	if((yyvsp[(2) - (2)]) != cb_int0
	&& (yyvsp[(2) - (2)]) != cb_int1) {
		if (CB_LITERAL ((yyvsp[(2) - (2)]))->sign < 0
		|| current_field->report_line < 0) {
			cb_error (_("Positive Integer value expected"));
		}
	}
	if(current_field->report_line == 0) {
		cb_warning (_("LINE PLUS 0 not implemented"));
	}
  ;}
    break;

  case 591:
#line 4892 "parser.y"
    {
	current_field->report_flag |= COB_REPORT_LINE_PLUS;
	current_field->report_line = cb_get_int((yyvsp[(2) - (2)]));
	if((yyvsp[(2) - (2)]) != cb_int0
	&& (yyvsp[(2) - (2)]) != cb_int1) {
		if (CB_LITERAL ((yyvsp[(2) - (2)]))->sign < 0
		|| current_field->report_line < 0) {
			cb_error (_("Positive Integer value expected"));
		}
	}
	if(current_field->report_line == 0) {
		cb_warning (_("LINE PLUS 0 not implemented"));
	}
  ;}
    break;

  case 595:
#line 4915 "parser.y"
    {
	current_field->report_line = cb_get_int((yyvsp[(1) - (1)]));
	if((yyvsp[(1) - (1)]) != cb_int0) {
		if (CB_LITERAL ((yyvsp[(1) - (1)]))->sign > 0) {
			current_field->report_flag |= COB_REPORT_LINE_PLUS;
		} else if (CB_LITERAL ((yyvsp[(1) - (1)]))->sign < 0
		|| current_field->report_line < 0) {
			cb_error (_("Positive Integer value expected"));
			current_field->report_line = 1;
			current_field->report_flag |= COB_REPORT_LINE_PLUS;
		}
	}
  ;}
    break;

  case 596:
#line 4932 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_LINE_NEXT_PAGE;
  ;}
    break;

  case 597:
#line 4936 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_LINE_NEXT_PAGE;
  ;}
    break;

  case 598:
#line 4943 "parser.y"
    {
	check_pic_repeated ("COLUMN", SYN_CLAUSE_18);
  ;}
    break;

  case 601:
#line 4955 "parser.y"
    {
	current_field->report_column = cb_get_int ((yyvsp[(2) - (2)]));
	if(current_field->report_column > 0)
		current_field->report_flag |= COB_REPORT_COLUMN_PLUS;
	else
		current_field->report_column = 0;
  ;}
    break;

  case 602:
#line 4963 "parser.y"
    {
	current_field->report_column = cb_get_int ((yyvsp[(2) - (2)]));
	if(current_field->report_column > 0)
		current_field->report_flag |= COB_REPORT_COLUMN_PLUS;
	else
		current_field->report_column = 0;
  ;}
    break;

  case 603:
#line 4971 "parser.y"
    {
	current_field->report_column = cb_get_int ((yyvsp[(1) - (1)]));
	if (CB_LITERAL ((yyvsp[(1) - (1)]))->sign > 0) {
		current_field->report_flag |= COB_REPORT_COLUMN_PLUS;
	}
	if((yyvsp[(1) - (1)]) != cb_int1
	&& (yyvsp[(1) - (1)]) != cb_int0) {
		if (current_field->report_column <= 0
		|| CB_LITERAL ((yyvsp[(1) - (1)]))->sign < 0) {
			cb_error (_("Invalid COLUMN integer; Must be > 0"));
			current_field->report_column = 0;
			(yyval) = cb_int0;
		}
	}
  ;}
    break;

  case 604:
#line 4990 "parser.y"
    {
	check_pic_repeated ("SOURCE", SYN_CLAUSE_22);
	current_field->report_source = (yyvsp[(3) - (4)]);
  ;}
    break;

  case 605:
#line 4998 "parser.y"
    {
	check_pic_repeated ("GROUP", SYN_CLAUSE_23);
	current_field->report_flag |= COB_REPORT_GROUP_INDICATE;
  ;}
    break;

  case 606:
#line 5006 "parser.y"
    {
	check_pic_repeated ("USAGE", SYN_CLAUSE_24);
  ;}
    break;

  case 608:
#line 5015 "parser.y"
    {
	current_storage = CB_STORAGE_SCREEN;
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  ;}
    break;

  case 609:
#line 5022 "parser.y"
    {
	struct cb_field *p;

	if (description_field) {
		for (p = description_field; p; p = p->sister) {
			cb_validate_field (p);
		}
		current_program->screen_storage = description_field;
		current_program->flag_screen = 1;
	}
  ;}
    break;

  case 615:
#line 5047 "parser.y"
    {
	cb_tree	x;
	int	flags;

	x = cb_build_field_tree ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), current_field, current_storage,
				 current_file, 0);
	/* Free tree assocated with level number */
	cobc_parse_free ((yyvsp[(1) - (2)]));
	check_pic_duplicate = 0;
	if (CB_INVALID_TREE (x)) {
		YYERROR;
	}

	current_field = CB_FIELD (x);
	if (current_field->parent) {
		flags = current_field->parent->screen_flag;
		flags &= ~COB_SCREEN_BLANK_LINE;
		flags &= ~COB_SCREEN_BLANK_SCREEN;
		flags &= ~COB_SCREEN_ERASE_EOL;
		flags &= ~COB_SCREEN_ERASE_EOS;
		flags &= ~COB_SCREEN_LINE_PLUS;
		flags &= ~COB_SCREEN_LINE_MINUS;
		flags &= ~COB_SCREEN_COLUMN_PLUS;
		flags &= ~COB_SCREEN_COLUMN_MINUS;
		current_field->screen_flag |= flags;
		current_field->screen_foreg = current_field->parent->screen_foreg;
		current_field->screen_backg = current_field->parent->screen_backg;
		current_field->screen_prompt = current_field->parent->screen_prompt;
	}
  ;}
    break;

  case 616:
#line 5078 "parser.y"
    {
	if (!qualifier && (current_field->level == 88 ||
	    current_field->level == 66 ||
	    current_field->flag_item_78)) {
		cb_error (_("Item requires a data name"));
	}
	if (current_field->screen_flag & COB_SCREEN_INITIAL) {
		if (!(current_field->screen_flag & COB_SCREEN_INPUT)) {
			cb_error (_("INITIAL specified on non-input field"));
		}
	}
	if (!qualifier) {
		current_field->flag_filler = 1;
	}
	if (current_field->level == 88) {
		cb_validate_88_item (current_field);
	}
	if (current_field->flag_item_78) {
		/* Reset to last non-78 item */
		current_field = cb_validate_78_item (current_field, 0);
	}
	if (!description_field) {
		description_field = current_field;
	}
  ;}
    break;

  case 617:
#line 5104 "parser.y"
    {
	/* Free tree assocated with level number */
	cobc_parse_free ((yyvsp[(1) - (3)]));
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
#if	1	/* RXWRXW Screen field */
	if (current_field) {
		current_field->flag_is_verified = 1;
		current_field->flag_invalid = 1;
	}
#endif
	current_field = cb_get_real_field ();
  ;}
    break;

  case 620:
#line 5127 "parser.y"
    {
	check_screen_attr ("BLANK LINE", COB_SCREEN_BLANK_LINE);
  ;}
    break;

  case 621:
#line 5131 "parser.y"
    {
	check_screen_attr ("BLANK SCREEN", COB_SCREEN_BLANK_SCREEN);
  ;}
    break;

  case 622:
#line 5135 "parser.y"
    {
	check_screen_attr ("BELL", COB_SCREEN_BELL);
  ;}
    break;

  case 623:
#line 5139 "parser.y"
    {
	check_screen_attr ("BLINK", COB_SCREEN_BLINK);
  ;}
    break;

  case 624:
#line 5143 "parser.y"
    {
	check_screen_attr ("ERASE EOL", COB_SCREEN_ERASE_EOL);
  ;}
    break;

  case 625:
#line 5147 "parser.y"
    {
	check_screen_attr ("ERASE EOS", COB_SCREEN_ERASE_EOS);
  ;}
    break;

  case 626:
#line 5151 "parser.y"
    {
	check_screen_attr ("HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  ;}
    break;

  case 627:
#line 5155 "parser.y"
    {
	check_screen_attr ("LOWLIGHT", COB_SCREEN_LOWLIGHT);
  ;}
    break;

  case 628:
#line 5159 "parser.y"
    {
	check_screen_attr ("REVERSE-VIDEO", COB_SCREEN_REVERSE);
  ;}
    break;

  case 629:
#line 5163 "parser.y"
    {
	check_screen_attr ("UNDERLINE", COB_SCREEN_UNDERLINE);
  ;}
    break;

  case 630:
#line 5167 "parser.y"
    {
	check_screen_attr ("OVERLINE", COB_SCREEN_OVERLINE);
  ;}
    break;

  case 631:
#line 5171 "parser.y"
    {
	check_screen_attr ("LEFTLINE", COB_SCREEN_LEFTLINE);
  ;}
    break;

  case 632:
#line 5175 "parser.y"
    {
	check_screen_attr ("AUTO", COB_SCREEN_AUTO);
  ;}
    break;

  case 633:
#line 5179 "parser.y"
    {
	check_screen_attr ("SECURE", COB_SCREEN_SECURE);
  ;}
    break;

  case 634:
#line 5183 "parser.y"
    {
	check_screen_attr ("REQUIRED", COB_SCREEN_REQUIRED);
  ;}
    break;

  case 635:
#line 5187 "parser.y"
    {
	check_screen_attr ("FULL", COB_SCREEN_FULL);
  ;}
    break;

  case 636:
#line 5191 "parser.y"
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
	current_field->screen_prompt = (yyvsp[(4) - (4)]);
  ;}
    break;

  case 637:
#line 5196 "parser.y"
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
  ;}
    break;

  case 638:
#line 5200 "parser.y"
    {
	check_screen_attr ("INITIAL", COB_SCREEN_INITIAL);
  ;}
    break;

  case 639:
#line 5204 "parser.y"
    {
	check_pic_repeated ("LINE", SYN_CLAUSE_16);
	current_field->screen_line = (yyvsp[(5) - (5)]);
  ;}
    break;

  case 640:
#line 5209 "parser.y"
    {
	check_pic_repeated ("COLUMN", SYN_CLAUSE_17);
	current_field->screen_column = (yyvsp[(5) - (5)]);
  ;}
    break;

  case 641:
#line 5214 "parser.y"
    {
	check_pic_repeated ("FOREGROUND-COLOR", SYN_CLAUSE_18);
	current_field->screen_foreg = (yyvsp[(3) - (3)]);
  ;}
    break;

  case 642:
#line 5219 "parser.y"
    {
	check_pic_repeated ("BACKGROUND-COLOR", SYN_CLAUSE_19);
	current_field->screen_backg = (yyvsp[(3) - (3)]);
  ;}
    break;

  case 651:
#line 5232 "parser.y"
    {
	check_pic_repeated ("USING", SYN_CLAUSE_20);
	current_field->screen_from = (yyvsp[(2) - (2)]);
	current_field->screen_to = (yyvsp[(2) - (2)]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  ;}
    break;

  case 652:
#line 5239 "parser.y"
    {
	check_pic_repeated ("FROM", SYN_CLAUSE_21);
	current_field->screen_from = (yyvsp[(2) - (2)]);
  ;}
    break;

  case 653:
#line 5244 "parser.y"
    {
	check_pic_repeated ("TO", SYN_CLAUSE_22);
	current_field->screen_to = (yyvsp[(2) - (2)]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  ;}
    break;

  case 658:
#line 5263 "parser.y"
    {
	/* Nothing */
  ;}
    break;

  case 659:
#line 5267 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_LINE_PLUS;
  ;}
    break;

  case 660:
#line 5271 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_LINE_MINUS;
  ;}
    break;

  case 661:
#line 5278 "parser.y"
    {
	/* Nothing */
  ;}
    break;

  case 662:
#line 5282 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_PLUS;
  ;}
    break;

  case 663:
#line 5286 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_MINUS;
  ;}
    break;

  case 664:
#line 5294 "parser.y"
    {
	check_pic_repeated ("OCCURS", SYN_CLAUSE_23);
	current_field->occurs_max = cb_get_int ((yyvsp[(2) - (3)]));
	current_field->occurs_min = current_field->occurs_max;
	current_field->indexes++;
	current_field->flag_occurs = 1;
  ;}
    break;

  case 665:
#line 5305 "parser.y"
    {
	cb_error (_("GLOBAL is not allowed with screen items"));
  ;}
    break;

  case 667:
#line 5314 "parser.y"
    {
	current_section = NULL;
	current_paragraph = NULL;
	check_pic_duplicate = 0;
	check_duplicate = 0;
	cobc_in_procedure = 1U;
	cb_set_system_names ();
	header_check |= COBC_HD_PROCEDURE_DIVISION;
  ;}
    break;

  case 668:
#line 5324 "parser.y"
    {
	if (current_program->flag_main && !current_program->flag_chained && (yyvsp[(3) - (7)])) {
		cb_error (_("Executable program requested but PROCEDURE/ENTRY has USING clause"));
	}
	/* Main entry point */
	emit_entry (current_program->program_id, 0, (yyvsp[(3) - (7)]));
	current_program->num_proc_params = cb_list_length ((yyvsp[(3) - (7)]));
	if (current_program->source_name) {
		emit_entry (current_program->source_name, 1, (yyvsp[(3) - (7)]));
	}
  ;}
    break;

  case 669:
#line 5336 "parser.y"
    {
	if (current_paragraph) {
		if (current_paragraph->exit_label) {
			emit_statement (current_paragraph->exit_label);
		}
		emit_statement (cb_build_perform_exit (current_paragraph));
	}
	if (current_section) {
		if (current_section->exit_label) {
			emit_statement (current_section->exit_label);
		}
		emit_statement (cb_build_perform_exit (current_section));
	}
  ;}
    break;

  case 670:
#line 5351 "parser.y"
    {
	cb_tree label;

	/* No PROCEDURE DIVISION header ! */
	/* Only a statement is allowed as first element */
	/* Thereafter, sections/paragraphs may be used */
	check_pic_duplicate = 0;
	check_duplicate = 0;
	cobc_in_procedure = 1U;
	label = cb_build_reference ("MAIN SECTION");
	current_section = CB_LABEL (cb_build_label (label, NULL));
	current_section->flag_section = 1;
	current_section->flag_dummy_section = 1;
	current_section->flag_skip_label = !!skip_statements;
	current_section->flag_declaratives = !!in_declaratives;
	CB_TREE (current_section)->source_file = cb_source_file;
	CB_TREE (current_section)->source_line = cb_source_line;
	emit_statement (CB_TREE (current_section));
	label = cb_build_reference ("MAIN PARAGRAPH");
	current_paragraph = CB_LABEL (cb_build_label (label, NULL));
	current_paragraph->flag_declaratives = !!in_declaratives;
	current_paragraph->flag_skip_label = !!skip_statements;
	current_paragraph->flag_dummy_paragraph = 1;
	CB_TREE (current_paragraph)->source_file = cb_source_file;
	CB_TREE (current_paragraph)->source_line = cb_source_line;
	emit_statement (CB_TREE (current_paragraph));
	cb_set_system_names ();
  ;}
    break;

  case 672:
#line 5384 "parser.y"
    {
	(yyval) = NULL;
  ;}
    break;

  case 673:
#line 5388 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  ;}
    break;

  case 674:
#line 5393 "parser.y"
    {
	if (cb_list_length ((yyvsp[(3) - (3)])) > COB_MAX_FIELD_PARAMS) {
		cb_error (_("Number of parameters exceeds maximum %d"),
			  COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[(3) - (3)]);
  ;}
    break;

  case 675:
#line 5401 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("CHAINING invalid in user FUNCTION"));
	} else {
		current_program->flag_chained = 1;
	}
  ;}
    break;

  case 676:
#line 5410 "parser.y"
    {
	if (cb_list_length ((yyvsp[(3) - (3)])) > COB_MAX_FIELD_PARAMS) {
		cb_error (_("Number of parameters exceeds maximum %d"),
			  COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[(3) - (3)]);
  ;}
    break;

  case 677:
#line 5420 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 678:
#line 5422 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); ;}
    break;

  case 679:
#line 5427 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR (cb_int (call_mode), cb_build_identifier ((yyvsp[(4) - (4)]), 0));
	CB_SIZES ((yyval)) = size_mode;
  ;}
    break;

  case 681:
#line 5436 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
  ;}
    break;

  case 682:
#line 5440 "parser.y"
    {
	if (current_program->flag_chained) {
		cb_error (_("BY VALUE not allowed in CHAINED program"));
	} else {
		call_mode = CB_CALL_BY_VALUE;
	}
  ;}
    break;

  case 684:
#line 5452 "parser.y"
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO;
	}
  ;}
    break;

  case 685:
#line 5460 "parser.y"
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_4;
	}
  ;}
    break;

  case 686:
#line 5468 "parser.y"
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO | CB_SIZE_UNSIGNED;
	}
  ;}
    break;

  case 687:
#line 5476 "parser.y"
    {
	unsigned char *s = CB_LITERAL ((yyvsp[(4) - (4)]))->data;

	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else if (CB_LITERAL ((yyvsp[(4) - (4)]))->size != 1) {
		cb_error_x ((yyvsp[(4) - (4)]), _("Invalid value for SIZE"));
	} else {
		size_mode = CB_SIZE_UNSIGNED;
		switch (*s) {
		case '1':
			size_mode |= CB_SIZE_1;
			break;
		case '2':
			size_mode |= CB_SIZE_2;
			break;
		case '4':
			size_mode |= CB_SIZE_4;
			break;
		case '8':
			size_mode |= CB_SIZE_8;
			break;
		default:
			cb_error_x ((yyvsp[(4) - (4)]), _("Invalid value for SIZE"));
			break;
		}
	}
  ;}
    break;

  case 688:
#line 5505 "parser.y"
    {
	unsigned char *s = CB_LITERAL ((yyvsp[(3) - (3)]))->data;

	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else if (CB_LITERAL ((yyvsp[(3) - (3)]))->size != 1) {
		cb_error_x ((yyvsp[(3) - (3)]), _("Invalid value for SIZE"));
	} else {
		size_mode = 0;
		switch (*s) {
		case '1':
			size_mode = CB_SIZE_1;
			break;
		case '2':
			size_mode = CB_SIZE_2;
			break;
		case '4':
			size_mode = CB_SIZE_4;
			break;
		case '8':
			size_mode = CB_SIZE_8;
			break;
		default:
			cb_error_x ((yyvsp[(3) - (3)]), _("Invalid value for SIZE"));
			break;
		}
	}
  ;}
    break;

  case 690:
#line 5538 "parser.y"
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error (_("OPTIONAL only allowed for BY REFERENCE items"));
	}
  ;}
    break;

  case 691:
#line 5547 "parser.y"
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("RETURNING clause is required for a FUNCTION"));
	}
  ;}
    break;

  case 692:
#line 5553 "parser.y"
    {
	struct cb_field	*f;

	if (cb_ref ((yyvsp[(2) - (2)])) != cb_error_node) {
		f = CB_FIELD_PTR ((yyvsp[(2) - (2)]));
/* RXWRXW
		if (f->storage != CB_STORAGE_LINKAGE) {
			cb_error (_("RETURNING item is not defined in LINKAGE SECTION"));
		} else if (f->level != 1 && f->level != 77) {
*/
		if (f->level != 1 && f->level != 77) {
			cb_error (_("RETURNING item must have level 01"));
		} else if(f->flag_occurs) {
			cb_error(_("RETURNING item should not have OCCURS"));
		} else if(f->storage == CB_STORAGE_LOCAL) {
			cb_error (_("RETURNING item should not be in LOCAL-STORAGE"));
		} else {
			if (current_program->prog_type == CB_FUNCTION_TYPE) {
				f->flag_is_returning = 1;
			}
			current_program->returning = (yyvsp[(2) - (2)]);
		}
	}
  ;}
    break;

  case 694:
#line 5581 "parser.y"
    {
	in_declaratives = 1;
	emit_statement (cb_build_comment ("DECLARATIVES"));
  ;}
    break;

  case 695:
#line 5587 "parser.y"
    {
	if (needs_field_debug) {
		start_debug = 1;
	}
	in_declaratives = 0;
	in_debugging = 0;
	if (current_paragraph) {
		if (current_paragraph->exit_label) {
			emit_statement (current_paragraph->exit_label);
		}
		emit_statement (cb_build_perform_exit (current_paragraph));
		current_paragraph = NULL;
	}
	if (current_section) {
		if (current_section->exit_label) {
			emit_statement (current_section->exit_label);
		}
		current_section->flag_fatal_check = 1;
		emit_statement (cb_build_perform_exit (current_section));
		current_section = NULL;
	}
	skip_statements = 0;
	emit_statement (cb_build_comment ("END DECLARATIVES"));
  ;}
    break;

  case 700:
#line 5624 "parser.y"
    {
	if (next_label_list) {
		cb_tree	plabel;
		char	name[32];

		snprintf (name, sizeof(name), "L$%d", next_label_id);
		plabel = cb_build_label (cb_build_reference (name), NULL);
		CB_LABEL (plabel)->flag_next_sentence = 1;
		emit_statement (plabel);
		current_program->label_list =
			cb_list_append (current_program->label_list, next_label_list);
		next_label_list = NULL;
		next_label_id++;
	}
	/* check_unreached = 0; */
  ;}
    break;

  case 702:
#line 5642 "parser.y"
    {
	/* check_unreached = 0; */
  ;}
    break;

  case 703:
#line 5652 "parser.y"
    {
	non_const_word = 0;
	check_unreached = 0;
	if (cb_build_section_name ((yyvsp[(1) - (4)]), 0) == cb_error_node) {
		YYERROR;
	}

	/* Exit the last paragraph/section */
	if (current_paragraph) {
		if (current_paragraph->exit_label) {
			emit_statement (current_paragraph->exit_label);
		}
		emit_statement (cb_build_perform_exit (current_paragraph));
	}
	if (current_section) {
		if (current_section->exit_label) {
			emit_statement (current_section->exit_label);
		}
		emit_statement (cb_build_perform_exit (current_section));
	}
	if (current_program->flag_debugging && !in_debugging) {
		if (current_paragraph || current_section) {
			emit_statement (cb_build_comment (
					"DEBUGGING - Fall through"));
			emit_statement (cb_build_debug (cb_debug_contents,
					"FALL THROUGH", NULL));
		}
	}

	/* Begin a new section */
	current_section = CB_LABEL (cb_build_label ((yyvsp[(1) - (4)]), NULL));
	if ((yyvsp[(3) - (4)])) {
		current_section->segment = cb_get_int ((yyvsp[(3) - (4)]));
	}
	current_section->flag_section = 1;
	/* Careful here, one negation */
	current_section->flag_real_label = !in_debugging;
	current_section->flag_declaratives = !!in_declaratives;
	current_section->flag_skip_label = !!skip_statements;
	CB_TREE (current_section)->source_file = cb_source_file;
	CB_TREE (current_section)->source_line = cb_source_line;
	current_paragraph = NULL;
  ;}
    break;

  case 704:
#line 5696 "parser.y"
    {
	emit_statement (CB_TREE (current_section));
  ;}
    break;

  case 707:
#line 5707 "parser.y"
    {
	cb_tree label;

	non_const_word = 0;
	check_unreached = 0;
	if (cb_build_section_name ((yyvsp[(1) - (2)]), 1) == cb_error_node) {
		YYERROR;
	}

	/* Exit the last paragraph */
	if (current_paragraph) {
		if (current_paragraph->exit_label) {
			emit_statement (current_paragraph->exit_label);
		}
		emit_statement (cb_build_perform_exit (current_paragraph));
		if (current_program->flag_debugging && !in_debugging) {
			emit_statement (cb_build_comment (
					"DEBUGGING - Fall through"));
			emit_statement (cb_build_debug (cb_debug_contents,
					"FALL THROUGH", NULL));
		}
	}

	/* Begin a new paragraph */
	if (!current_section) {
		label = cb_build_reference ("MAIN SECTION");
		current_section = CB_LABEL (cb_build_label (label, NULL));
		current_section->flag_section = 1;
		current_section->flag_dummy_section = 1;
		current_section->flag_declaratives = !!in_declaratives;
		current_section->flag_skip_label = !!skip_statements;
		CB_TREE (current_section)->source_file = cb_source_file;
		CB_TREE (current_section)->source_line = cb_source_line;
		emit_statement (CB_TREE (current_section));
	}
	current_paragraph = CB_LABEL (cb_build_label ((yyvsp[(1) - (2)]), current_section));
	current_paragraph->flag_declaratives =!! in_declaratives;
	current_paragraph->flag_skip_label = !!skip_statements;
	current_paragraph->flag_real_label = !in_debugging;
	current_paragraph->segment = current_section->segment;
	CB_TREE (current_paragraph)->source_file = cb_source_file;
	CB_TREE (current_paragraph)->source_line = cb_source_line;
	emit_statement (CB_TREE (current_paragraph));
  ;}
    break;

  case 708:
#line 5755 "parser.y"
    {
	non_const_word = 0;
	check_unreached = 0;
	if (cb_build_section_name ((yyvsp[(1) - (1)]), 0) != cb_error_node) {
		cb_error_x ((yyvsp[(1) - (1)]), _("Unknown statement '%s'"), CB_NAME ((yyvsp[(1) - (1)])));
	}
	YYERROR;
  ;}
    break;

  case 709:
#line 5767 "parser.y"
    {
	(yyval) = NULL;
  ;}
    break;

  case 710:
#line 5771 "parser.y"
    {
	if (in_declaratives) {
		cb_error (_("SECTION segment invalid within DECLARATIVE"));
	}
	if (cb_verify (cb_section_segments, "SECTION segment")) {
		current_program->flag_segments = 1;
		(yyval) = (yyvsp[(1) - (1)]);
	} else {
		(yyval) = NULL;
	}
  ;}
    break;

  case 711:
#line 5789 "parser.y"
    {
	(yyval) = current_program->exec_list;
	current_program->exec_list = NULL;
	check_unreached = 0;
  ;}
    break;

  case 712:
#line 5794 "parser.y"
    {
	(yyval) = CB_TREE (current_statement);
	current_statement = NULL;
  ;}
    break;

  case 713:
#line 5799 "parser.y"
    {
	(yyval) = cb_list_reverse (current_program->exec_list);
	current_program->exec_list = (yyvsp[(1) - (3)]);
	current_statement = CB_STATEMENT ((yyvsp[(2) - (3)]));
  ;}
    break;

  case 714:
#line 5807 "parser.y"
    {
	cb_tree label;

	if (!current_section) {
		label = cb_build_reference ("MAIN SECTION");
		current_section = CB_LABEL (cb_build_label (label, NULL));
		current_section->flag_section = 1;
		current_section->flag_dummy_section = 1;
		current_section->flag_skip_label = !!skip_statements;
		current_section->flag_declaratives = !!in_declaratives;
		CB_TREE (current_section)->source_file = cb_source_file;
		CB_TREE (current_section)->source_line = cb_source_line;
		emit_statement (CB_TREE (current_section));
	}
	if (!current_paragraph) {
		label = cb_build_reference ("MAIN PARAGRAPH");
		current_paragraph = CB_LABEL (cb_build_label (label, NULL));
		current_paragraph->flag_declaratives = !!in_declaratives;
		current_paragraph->flag_skip_label = !!skip_statements;
		current_paragraph->flag_dummy_paragraph = 1;
		CB_TREE (current_paragraph)->source_file = cb_source_file;
		CB_TREE (current_paragraph)->source_line = cb_source_line;
		emit_statement (CB_TREE (current_paragraph));
	}
	check_headers_present (COBC_HD_PROCEDURE_DIVISION, 0, 0, 0);
  ;}
    break;

  case 715:
#line 5834 "parser.y"
    {
	cobc_cs_check = 0;
  ;}
    break;

  case 716:
#line 5838 "parser.y"
    {
	cobc_cs_check = 0;
  ;}
    break;

  case 766:
#line 5894 "parser.y"
    {
	if (cb_verify (cb_next_sentence_phrase, "NEXT SENTENCE")) {
		cb_tree label;
		char	name[32];

		begin_statement ("NEXT SENTENCE", 0);
		sprintf (name, "L$%d", next_label_id);
		label = cb_build_reference (name);
		next_label_list = cb_list_add (next_label_list, label);
		emit_statement (cb_build_goto (label, NULL));
	}
	check_unreached = 0;
  ;}
    break;

  case 767:
#line 5908 "parser.y"
    {
	yyerrok;
	cobc_cs_check = 0;
  ;}
    break;

  case 768:
#line 5919 "parser.y"
    {
	begin_statement ("ACCEPT", TERM_ACCEPT);
  ;}
    break;

  case 770:
#line 5929 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept ((yyvsp[(1) - (6)]), (yyvsp[(2) - (6)]), current_statement->attr_ptr);
  ;}
    break;

  case 771:
#line 5934 "parser.y"
    {
	cb_emit_accept_line_or_col ((yyvsp[(1) - (3)]), 0);
  ;}
    break;

  case 772:
#line 5938 "parser.y"
    {
	cb_emit_accept_line_or_col ((yyvsp[(1) - (3)]), 1);
  ;}
    break;

  case 773:
#line 5942 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_date_yyyymmdd ((yyvsp[(1) - (4)]));
  ;}
    break;

  case 774:
#line 5947 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_date ((yyvsp[(1) - (3)]));
  ;}
    break;

  case 775:
#line 5952 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_day_yyyyddd ((yyvsp[(1) - (4)]));
  ;}
    break;

  case 776:
#line 5957 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_day ((yyvsp[(1) - (3)]));
  ;}
    break;

  case 777:
#line 5962 "parser.y"
    {
	cb_emit_accept_day_of_week ((yyvsp[(1) - (3)]));
  ;}
    break;

  case 778:
#line 5966 "parser.y"
    {
	cb_emit_accept_escape_key ((yyvsp[(1) - (4)]));
  ;}
    break;

  case 779:
#line 5970 "parser.y"
    {
	cb_emit_accept_exception_status ((yyvsp[(1) - (4)]));
  ;}
    break;

  case 780:
#line 5974 "parser.y"
    {
	cb_emit_accept_time ((yyvsp[(1) - (3)]));
  ;}
    break;

  case 781:
#line 5978 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_user_name ((yyvsp[(1) - (4)]));
  ;}
    break;

  case 782:
#line 5983 "parser.y"
    {
	cb_emit_accept_command_line ((yyvsp[(1) - (3)]));
  ;}
    break;

  case 783:
#line 5987 "parser.y"
    {
	cb_emit_accept_environment ((yyvsp[(1) - (4)]));
  ;}
    break;

  case 784:
#line 5991 "parser.y"
    {
	cb_emit_get_environment ((yyvsp[(4) - (5)]), (yyvsp[(1) - (5)]));
  ;}
    break;

  case 785:
#line 5995 "parser.y"
    {
	cb_emit_accept_arg_number ((yyvsp[(1) - (3)]));
  ;}
    break;

  case 786:
#line 5999 "parser.y"
    {
	cb_emit_accept_arg_value ((yyvsp[(1) - (4)]));
  ;}
    break;

  case 787:
#line 6003 "parser.y"
    {
	cb_emit_accept_mnemonic ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  ;}
    break;

  case 788:
#line 6007 "parser.y"
    {
	cb_emit_accept_name ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  ;}
    break;

  case 790:
#line 6015 "parser.y"
    {
	(yyval) = cb_null;
  ;}
    break;

  case 793:
#line 6026 "parser.y"
    { (yyval) = NULL; ;}
    break;

  case 794:
#line 6027 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 795:
#line 6031 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 796:
#line 6032 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(3) - (3)]), (yyvsp[(2) - (3)])); ;}
    break;

  case 797:
#line 6033 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (2)]), cb_int0); ;}
    break;

  case 798:
#line 6034 "parser.y"
    { (yyval) = CB_BUILD_PAIR (cb_int0, (yyvsp[(2) - (2)])); ;}
    break;

  case 799:
#line 6035 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); ;}
    break;

  case 800:
#line 6039 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); ;}
    break;

  case 801:
#line 6043 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); ;}
    break;

  case 802:
#line 6044 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); ;}
    break;

  case 806:
#line 6053 "parser.y"
    {
	cobc_cs_check = 0;
  ;}
    break;

  case 811:
#line 6069 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_AUTO);
  ;}
    break;

  case 812:
#line 6073 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  ;}
    break;

  case 813:
#line 6077 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  ;}
    break;

  case 814:
#line 6081 "parser.y"
    {
	cb_warning (_("Ignoring CONVERSION"));
  ;}
    break;

  case 815:
#line 6085 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_FULL);
  ;}
    break;

  case 816:
#line 6089 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_HIGHLIGHT);
  ;}
    break;

  case 817:
#line 6093 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LEFTLINE);
  ;}
    break;

  case 818:
#line 6097 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWER);
  ;}
    break;

  case 819:
#line 6101 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWLIGHT);
  ;}
    break;

  case 820:
#line 6105 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_NO_ECHO);
  ;}
    break;

  case 821:
#line 6109 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  ;}
    break;

  case 822:
#line 6113 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, (yyvsp[(4) - (4)]), COB_SCREEN_PROMPT);
  ;}
    break;

  case 823:
#line 6117 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_PROMPT);
  ;}
    break;

  case 824:
#line 6121 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REQUIRED);
  ;}
    break;

  case 825:
#line 6125 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  ;}
    break;

  case 826:
#line 6129 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_SECURE);
  ;}
    break;

  case 827:
#line 6133 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  ;}
    break;

  case 828:
#line 6137 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPDATE);
  ;}
    break;

  case 829:
#line 6141 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPPER);
  ;}
    break;

  case 830:
#line 6145 "parser.y"
    {
	check_attribs ((yyvsp[(3) - (3)]), NULL, NULL, NULL, NULL, 0);
  ;}
    break;

  case 831:
#line 6149 "parser.y"
    {
	check_attribs (NULL, (yyvsp[(3) - (3)]), NULL, NULL, NULL, 0);
  ;}
    break;

  case 832:
#line 6153 "parser.y"
    {
	check_attribs (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, 0);
  ;}
    break;

  case 833:
#line 6157 "parser.y"
    {
	check_attribs (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  ;}
    break;

  case 834:
#line 6161 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, (yyvsp[(3) - (3)]), NULL, 0);
  ;}
    break;

  case 835:
#line 6168 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ACCEPT);
  ;}
    break;

  case 836:
#line 6172 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), ACCEPT);
  ;}
    break;

  case 837:
#line 6182 "parser.y"
    {
	begin_statement ("ADD", TERM_ADD);
  ;}
    break;

  case 839:
#line 6191 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '+', cb_build_binary_list ((yyvsp[(1) - (4)]), '+'));
  ;}
    break;

  case 840:
#line 6195 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(4) - (5)]), 0, cb_build_binary_list ((yyvsp[(1) - (5)]), '+'));
  ;}
    break;

  case 841:
#line 6199 "parser.y"
    {
	cb_emit_corresponding (cb_build_add, (yyvsp[(4) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(5) - (6)]));
  ;}
    break;

  case 843:
#line 6206 "parser.y"
    {
	cb_list_add ((yyvsp[(0) - (2)]), (yyvsp[(2) - (2)]));
  ;}
    break;

  case 844:
#line 6213 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ADD);
  ;}
    break;

  case 845:
#line 6217 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), ADD);
  ;}
    break;

  case 846:
#line 6227 "parser.y"
    {
	begin_statement ("ALLOCATE", 0);
	current_statement->flag_no_based = 1;
  ;}
    break;

  case 848:
#line 6236 "parser.y"
    {
	cb_emit_allocate ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]), NULL, (yyvsp[(2) - (3)]));
  ;}
    break;

  case 849:
#line 6240 "parser.y"
    {
	if ((yyvsp[(4) - (4)]) == NULL) {
		cb_error_x (CB_TREE (current_statement),
			    _("ALLOCATE CHARACTERS requires RETURNING clause"));
	} else {
		cb_emit_allocate (NULL, (yyvsp[(4) - (4)]), (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
	}
  ;}
    break;

  case 850:
#line 6251 "parser.y"
    { (yyval) = NULL; ;}
    break;

  case 851:
#line 6252 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); ;}
    break;

  case 852:
#line 6260 "parser.y"
    {
	begin_statement ("ALTER", 0);
	cb_verify (cb_alter_statement, "ALTER statement");
  ;}
    break;

  case 856:
#line 6274 "parser.y"
    {
	cb_emit_alter ((yyvsp[(1) - (4)]), (yyvsp[(4) - (4)]));
  ;}
    break;

  case 859:
#line 6286 "parser.y"
    {
	begin_statement ("CALL", TERM_CALL);
	cobc_cs_check = CB_CS_CALL;
  ;}
    break;

  case 861:
#line 6301 "parser.y"
    {
	if (CB_LITERAL_P ((yyvsp[(2) - (6)])) &&
	    current_program->prog_type == CB_PROGRAM_TYPE &&
	    !current_program->flag_recursive &&
	    !strcmp ((const char *)(CB_LITERAL((yyvsp[(2) - (6)]))->data), current_program->orig_program_id)) {
		cb_warning_x ((yyvsp[(2) - (6)]), _("Recursive program call - assuming RECURSIVE attribute"));
		current_program->flag_recursive = 1;
	}
	cb_emit_call ((yyvsp[(2) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(4) - (6)]), (yyvsp[(5) - (6)]), (yyvsp[(6) - (6)]), (yyvsp[(1) - (6)]));
  ;}
    break;

  case 862:
#line 6315 "parser.y"
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  ;}
    break;

  case 863:
#line 6320 "parser.y"
    {
	(yyval) = cb_int (CB_CONV_STATIC_LINK);
	cobc_cs_check = 0;
  ;}
    break;

  case 864:
#line 6325 "parser.y"
    {
	(yyval) = cb_int (CB_CONV_STDCALL);
	cobc_cs_check = 0;
  ;}
    break;

  case 865:
#line 6330 "parser.y"
    {
	cb_tree		x;

	x = cb_ref ((yyvsp[(1) - (1)]));
	if (CB_VALID_TREE (x)) {
		if (CB_SYSTEM_NAME(x)->token != CB_FEATURE_CONVENTION) {
			cb_error_x ((yyvsp[(1) - (1)]), _("Invalid mnemonic name"));
			(yyval) = NULL;
		} else {
			(yyval) = CB_SYSTEM_NAME(x)->value;
		}
	} else {
		(yyval) = NULL;
	}
	cobc_cs_check = 0;
  ;}
    break;

  case 866:
#line 6350 "parser.y"
    {
	(yyval) = NULL;
  ;}
    break;

  case 867:
#line 6354 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  ;}
    break;

  case 868:
#line 6359 "parser.y"
    {
	if (cb_list_length ((yyvsp[(3) - (3)])) > COB_MAX_FIELD_PARAMS) {
		cb_error_x (CB_TREE (current_statement),
			    _("Number of parameters exceeds maximum %d"),
			    COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[(3) - (3)]);
  ;}
    break;

  case 869:
#line 6370 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 870:
#line 6372 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); ;}
    break;

  case 871:
#line 6377 "parser.y"
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error_x (CB_TREE (current_statement),
			    _("OMITTED only allowed with BY REFERENCE"));
	}
	(yyval) = CB_BUILD_PAIR (cb_int (call_mode), cb_null);
  ;}
    break;

  case 872:
#line 6385 "parser.y"
    {
	int	save_mode;

	save_mode = call_mode;
	if (call_mode != CB_CALL_BY_REFERENCE) {
		if (CB_FILE_P ((yyvsp[(3) - (3)])) || (CB_REFERENCE_P ((yyvsp[(3) - (3)])) &&
		    CB_FILE_P (CB_REFERENCE ((yyvsp[(3) - (3)]))->value))) {
			cb_error_x (CB_TREE (current_statement),
				    _("Invalid file name reference"));
		} else if (call_mode == CB_CALL_BY_VALUE) {
			if (cb_category_is_alpha ((yyvsp[(3) - (3)]))) {
				cb_warning_x ((yyvsp[(3) - (3)]),
					      _("BY CONTENT assumed for alphanumeric item"));
				save_mode = CB_CALL_BY_CONTENT;
			}
		}
	}
	(yyval) = CB_BUILD_PAIR (cb_int (save_mode), (yyvsp[(3) - (3)]));
	CB_SIZES ((yyval)) = size_mode;
	call_mode = save_mode;
  ;}
    break;

  case 874:
#line 6411 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
  ;}
    break;

  case 875:
#line 6415 "parser.y"
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("BY CONTENT not allowed in CHAINED program"));
	} else {
		call_mode = CB_CALL_BY_CONTENT;
	}
  ;}
    break;

  case 876:
#line 6424 "parser.y"
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("BY VALUE not allowed in CHAINED program"));
	} else {
		call_mode = CB_CALL_BY_VALUE;
	}
  ;}
    break;

  case 877:
#line 6436 "parser.y"
    {
	(yyval) = NULL;
  ;}
    break;

  case 878:
#line 6440 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  ;}
    break;

  case 879:
#line 6444 "parser.y"
    {
	(yyval) = cb_null;
  ;}
    break;

  case 880:
#line 6448 "parser.y"
    {
	struct cb_field	*f;

	if (cb_ref ((yyvsp[(4) - (4)])) != cb_error_node) {
		f = CB_FIELD_PTR ((yyvsp[(4) - (4)]));
		if (f->level != 1 && f->level != 77) {
			cb_error (_("RETURNING item must have level 01 or 77"));
			(yyval) = NULL;
		} else if (f->storage != CB_STORAGE_LINKAGE &&
			   !f->flag_item_based) {
			cb_error (_("RETURNING item is neither in LINKAGE SECTION nor is it BASED"));
			(yyval) = NULL;
		} else {
			(yyval) = cb_build_address ((yyvsp[(4) - (4)]));
		}
	} else {
		(yyval) = NULL;
	}
  ;}
    break;

  case 885:
#line 6481 "parser.y"
    {
	(yyval) = NULL;
  ;}
    break;

  case 886:
#line 6486 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  ;}
    break;

  case 887:
#line 6493 "parser.y"
    {
	(yyval) = NULL;
  ;}
    break;

  case 888:
#line 6498 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  ;}
    break;

  case 889:
#line 6505 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), CALL);
  ;}
    break;

  case 890:
#line 6509 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), CALL);
  ;}
    break;

  case 891:
#line 6519 "parser.y"
    {
	begin_statement ("CANCEL", 0);
  ;}
    break;

  case 893:
#line 6527 "parser.y"
    {
	cb_emit_cancel ((yyvsp[(1) - (1)]));
  ;}
    break;

  case 894:
#line 6531 "parser.y"
    {
	cb_emit_cancel ((yyvsp[(2) - (2)]));
  ;}
    break;

  case 895:
#line 6541 "parser.y"
    {
	begin_statement ("CLOSE", 0);
  ;}
    break;

  case 897:
#line 6549 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  ;}
    break;

  case 898:
#line 6554 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
  ;}
    break;

  case 899:
#line 6561 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_NORMAL); ;}
    break;

  case 900:
#line 6562 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_UNIT); ;}
    break;

  case 901:
#line 6563 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_UNIT_REMOVAL); ;}
    break;

  case 902:
#line 6564 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_NO_REWIND); ;}
    break;

  case 903:
#line 6565 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_LOCK); ;}
    break;

  case 904:
#line 6573 "parser.y"
    {
	begin_statement ("COMPUTE", TERM_COMPUTE);
  ;}
    break;

  case 906:
#line 6582 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(1) - (4)]), 0, (yyvsp[(3) - (4)]));
  ;}
    break;

  case 907:
#line 6589 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), COMPUTE);
  ;}
    break;

  case 908:
#line 6593 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), COMPUTE);
  ;}
    break;

  case 909:
#line 6603 "parser.y"
    {
	begin_statement ("COMMIT", 0);
	cb_emit_commit ();
  ;}
    break;

  case 910:
#line 6614 "parser.y"
    {
	size_t	save_unreached;

	/* Do not check unreached for CONTINUE */
	save_unreached = check_unreached;
	check_unreached = 0;
	begin_statement ("CONTINUE", 0);
	cb_emit_continue ();
	check_unreached = (unsigned int) save_unreached;
  ;}
    break;

  case 911:
#line 6631 "parser.y"
    {
	begin_statement ("DELETE", TERM_DELETE);
  ;}
    break;

  case 913:
#line 6640 "parser.y"
    {
	cb_emit_delete ((yyvsp[(1) - (3)]));
  ;}
    break;

  case 915:
#line 6648 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[(1) - (1)]));
  ;}
    break;

  case 916:
#line 6653 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[(2) - (2)]));
  ;}
    break;

  case 917:
#line 6661 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DELETE);
  ;}
    break;

  case 918:
#line 6665 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DELETE);
  ;}
    break;

  case 919:
#line 6675 "parser.y"
    {
	begin_statement ("DISPLAY", TERM_DISPLAY);
	cobc_cs_check = CB_CS_DISPLAY;
  ;}
    break;

  case 921:
#line 6685 "parser.y"
    {
	cb_emit_env_name ((yyvsp[(1) - (3)]));
  ;}
    break;

  case 922:
#line 6689 "parser.y"
    {
	cb_emit_env_value ((yyvsp[(1) - (3)]));
  ;}
    break;

  case 923:
#line 6693 "parser.y"
    {
	cb_emit_arg_number ((yyvsp[(1) - (3)]));
  ;}
    break;

  case 924:
#line 6697 "parser.y"
    {
	cb_emit_command_line ((yyvsp[(1) - (3)]));
  ;}
    break;

  case 925:
#line 6701 "parser.y"
    {
	cb_emit_display ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]), NULL, NULL);
  ;}
    break;

  case 927:
#line 6706 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_display (CB_LIST_INIT ((yyvsp[(1) - (4)])), cb_null, cb_int1,
			 NULL, current_statement->attr_ptr);
  ;}
    break;

  case 929:
#line 6716 "parser.y"
    {
	begin_implicit_statement ();
  ;}
    break;

  case 931:
#line 6724 "parser.y"
    {
	cb_emit_display (CB_LIST_INIT ((yyvsp[(1) - (5)])), cb_null, cb_int1,
			 (yyvsp[(2) - (5)]), current_statement->attr_ptr);
  ;}
    break;

  case 932:
#line 6732 "parser.y"
    {
	if (current_program->flag_console_is_crt) {
		(yyval) = cb_null;
	} else {
		(yyval) = cb_int0;
	}
  ;}
    break;

  case 933:
#line 6740 "parser.y"
    {
	(yyval) = cb_build_display_mnemonic ((yyvsp[(2) - (2)]));
  ;}
    break;

  case 934:
#line 6744 "parser.y"
    {
	(yyval) = cb_build_display_name ((yyvsp[(2) - (2)]));
  ;}
    break;

  case 935:
#line 6748 "parser.y"
    {
	(yyval) = cb_int0;
  ;}
    break;

  case 936:
#line 6752 "parser.y"
    {
	if (current_program->flag_console_is_crt) {
		(yyval) = cb_null;
	} else {
		(yyval) = cb_int0;
	}
  ;}
    break;

  case 942:
#line 6774 "parser.y"
    {
	cobc_cs_check = 0;
  ;}
    break;

  case 943:
#line 6780 "parser.y"
    { (yyval) = cb_int1; ;}
    break;

  case 944:
#line 6781 "parser.y"
    { (yyval) = cb_int0; ;}
    break;

  case 947:
#line 6792 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  ;}
    break;

  case 948:
#line 6796 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLANK_LINE);
  ;}
    break;

  case 949:
#line 6800 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLANK_SCREEN);
  ;}
    break;

  case 950:
#line 6804 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  ;}
    break;

  case 951:
#line 6808 "parser.y"
    {
	cb_warning (_("Ignoring CONVERSION"));
  ;}
    break;

  case 952:
#line 6812 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_ERASE_EOL);
  ;}
    break;

  case 953:
#line 6816 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_ERASE_EOS);
  ;}
    break;

  case 954:
#line 6820 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_HIGHLIGHT);
  ;}
    break;

  case 955:
#line 6824 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWLIGHT);
  ;}
    break;

  case 956:
#line 6828 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  ;}
    break;

  case 957:
#line 6832 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  ;}
    break;

  case 958:
#line 6836 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  ;}
    break;

  case 959:
#line 6840 "parser.y"
    {
	check_attribs ((yyvsp[(3) - (3)]), NULL, NULL, NULL, NULL, 0);
  ;}
    break;

  case 960:
#line 6844 "parser.y"
    {
	check_attribs (NULL, (yyvsp[(3) - (3)]), NULL, NULL, NULL, 0);
  ;}
    break;

  case 961:
#line 6848 "parser.y"
    {
	check_attribs (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, 0);
  ;}
    break;

  case 962:
#line 6852 "parser.y"
    {
	check_attribs (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  ;}
    break;

  case 963:
#line 6859 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DISPLAY);
  ;}
    break;

  case 964:
#line 6863 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DISPLAY);
  ;}
    break;

  case 965:
#line 6873 "parser.y"
    {
	begin_statement ("DIVIDE", TERM_DIVIDE);
  ;}
    break;

  case 967:
#line 6882 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '/', (yyvsp[(1) - (4)]));
  ;}
    break;

  case 968:
#line 6886 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_op ((yyvsp[(3) - (6)]), '/', (yyvsp[(1) - (6)])));
  ;}
    break;

  case 969:
#line 6890 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_op ((yyvsp[(1) - (6)]), '/', (yyvsp[(3) - (6)])));
  ;}
    break;

  case 970:
#line 6894 "parser.y"
    {
	cb_emit_divide ((yyvsp[(3) - (8)]), (yyvsp[(1) - (8)]), (yyvsp[(5) - (8)]), (yyvsp[(7) - (8)]));
  ;}
    break;

  case 971:
#line 6898 "parser.y"
    {
	cb_emit_divide ((yyvsp[(1) - (8)]), (yyvsp[(3) - (8)]), (yyvsp[(5) - (8)]), (yyvsp[(7) - (8)]));
  ;}
    break;

  case 972:
#line 6905 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DIVIDE);
  ;}
    break;

  case 973:
#line 6909 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DIVIDE);
  ;}
    break;

  case 974:
#line 6919 "parser.y"
    {
	begin_statement ("ENTRY", 0);
  ;}
    break;

  case 976:
#line 6927 "parser.y"
    {
	if (current_program->nested_level) {
		cb_error (_("ENTRY is invalid in nested program"));
	} else if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("ENTRY is invalid in a user FUNCTION"));
	} else if (cb_verify (cb_entry_statement, "ENTRY")) {
		if (!cobc_check_valid_name ((char *)(CB_LITERAL ((yyvsp[(1) - (2)]))->data), 1U)) {
			emit_entry ((char *)(CB_LITERAL ((yyvsp[(1) - (2)]))->data), 1, (yyvsp[(2) - (2)]));
		}
	}
	check_unreached = 0;
  ;}
    break;

  case 977:
#line 6946 "parser.y"
    {
	begin_statement ("EVALUATE", TERM_EVALUATE);
	eval_level++;
	if (eval_level >= EVAL_DEPTH) {
		cb_error (_("Maximum evaluate depth exceeded (%d)"),
			  EVAL_DEPTH);
		eval_level = 0;
		eval_inc = 0;
		eval_inc2 = 0;
		YYERROR;
	} else {
		for (eval_inc = 0; eval_inc < EVAL_DEPTH; ++eval_inc) {
			eval_check[eval_level][eval_inc] = NULL;
		}
		eval_inc = 0;
		eval_inc2 = 0;
	}
  ;}
    break;

  case 979:
#line 6970 "parser.y"
    {
	cb_emit_evaluate ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	eval_level--;
  ;}
    break;

  case 980:
#line 6977 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); ;}
    break;

  case 981:
#line 6979 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 982:
#line 6984 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	eval_check[eval_level][eval_inc++] = (yyvsp[(1) - (1)]);
	if (eval_inc >= EVAL_DEPTH) {
		cb_error (_("Maximum evaluate depth exceeded (%d)"),
			  EVAL_DEPTH);
		eval_inc = 0;
		YYERROR;
	}
  ;}
    break;

  case 983:
#line 6995 "parser.y"
    {
	(yyval) = cb_true;
	eval_check[eval_level][eval_inc++] = NULL;
	if (eval_inc >= EVAL_DEPTH) {
		cb_error (_("Maximum evaluate depth exceeded (%d)"),
			  EVAL_DEPTH);
		eval_inc = 0;
		YYERROR;
	}
  ;}
    break;

  case 984:
#line 7006 "parser.y"
    {
	(yyval) = cb_false;
	eval_check[eval_level][eval_inc++] = NULL;
	if (eval_inc >= EVAL_DEPTH) {
		cb_error (_("Maximum evaluate depth exceeded (%d)"),
			  EVAL_DEPTH);
		eval_inc = 0;
		YYERROR;
	}
  ;}
    break;

  case 985:
#line 7020 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  ;}
    break;

  case 986:
#line 7024 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  ;}
    break;

  case 987:
#line 7030 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); ;}
    break;

  case 988:
#line 7032 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); ;}
    break;

  case 989:
#line 7038 "parser.y"
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
	eval_inc2 = 0;
  ;}
    break;

  case 990:
#line 7047 "parser.y"
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[(3) - (3)]), NULL);
	eval_inc2 = 0;
  ;}
    break;

  case 991:
#line 7055 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(2) - (2)]));
	eval_inc2 = 0;
  ;}
    break;

  case 992:
#line 7061 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
	eval_inc2 = 0;
  ;}
    break;

  case 993:
#line 7068 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); ;}
    break;

  case 994:
#line 7070 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 995:
#line 7075 "parser.y"
    {
	cb_tree	not0;
	cb_tree	e1;
	cb_tree	e2;
	cb_tree	x;
	cb_tree	parm1;

	not0 = cb_int0;
	e2 = (yyvsp[(2) - (2)]);
	x = NULL;
	parm1 = (yyvsp[(1) - (2)]);
	if (eval_check[eval_level][eval_inc2]) {
		/* Check if the first token is NOT */
		/* It may belong to the EVALUATE, however see */
		/* below when it may be part of a partial expression */
		if (CB_PURPOSE_INT (parm1) == '!') {
			/* Pop stack if subject not TRUE / FALSE */
			not0 = cb_int1;
			x = parm1;
			parm1 = CB_CHAIN (parm1);
		}
		/* Partial expression handling */
		switch (CB_PURPOSE_INT (parm1)) {
		/* Relational conditions */
		case '<':
		case '>':
		case '[':
		case ']':
		case '~':
		case '=':
		/* Class conditions */
		case '9':
		case 'A':
		case 'L':
		case 'U':
		case 'P':
		case 'N':
		case 'O':
		case 'C':
			if (e2) {
				cb_error_x (e2, _("Invalid THROUGH usage"));
				e2 = NULL;
			}
			not0 = CB_PURPOSE (parm1);
			if (x) {
				/* Rebind the NOT to the partial expression */
				parm1 = cb_build_list (cb_int ('!'), NULL, parm1);
			}
			/* Insert subject at head of list */
			parm1 = cb_build_list (cb_int ('x'),
					    eval_check[eval_level][eval_inc2], parm1);
			break;
		}
	}

	/* Build expr now */
	e1 = cb_build_expr (parm1);

	eval_inc2++;
	(yyval) = CB_BUILD_PAIR (not0, CB_BUILD_PAIR (e1, e2));
  ;}
    break;

  case 996:
#line 7136 "parser.y"
    { (yyval) = cb_any; eval_inc2++; ;}
    break;

  case 997:
#line 7137 "parser.y"
    { (yyval) = cb_true; eval_inc2++; ;}
    break;

  case 998:
#line 7138 "parser.y"
    { (yyval) = cb_false; eval_inc2++; ;}
    break;

  case 999:
#line 7142 "parser.y"
    { (yyval) = NULL; ;}
    break;

  case 1000:
#line 7143 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); ;}
    break;

  case 1001:
#line 7148 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), EVALUATE);
  ;}
    break;

  case 1002:
#line 7152 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), EVALUATE);
  ;}
    break;

  case 1003:
#line 7162 "parser.y"
    {
	begin_statement ("EXIT", 0);
	cobc_cs_check = CB_CS_EXIT;
  ;}
    break;

  case 1004:
#line 7167 "parser.y"
    {
	cobc_cs_check = 0;
  ;}
    break;

  case 1006:
#line 7175 "parser.y"
    {
	if (in_declaratives && use_global_ind) {
		cb_error_x (CB_TREE (current_statement),
			    _("EXIT PROGRAM is not allowed within a USE GLOBAL procedure"));
	}
	if (current_program->prog_type != CB_PROGRAM_TYPE) {
		cb_error_x (CB_TREE (current_statement),
			    _("EXIT PROGRAM only allowed within a PROGRAM type"));
	}
	if (current_program->flag_main) {
		check_unreached = 0;
	} else {
		check_unreached = 1;
	}
	current_statement->name = (const char *)"EXIT PROGRAM";
	cb_emit_exit (0);
  ;}
    break;

  case 1007:
#line 7193 "parser.y"
    {
	if (in_declaratives && use_global_ind) {
		cb_error_x (CB_TREE (current_statement),
			    _("EXIT FUNCTION is not allowed within a USE GLOBAL procedure"));
	}
	if (current_program->prog_type != CB_FUNCTION_TYPE) {
		cb_error_x (CB_TREE (current_statement),
			    _("EXIT FUNCTION only allowed within a FUNCTION type"));
	}
	check_unreached = 1;
	current_statement->name = (const char *)"EXIT FUNCTION";
	cb_emit_exit (0);
  ;}
    break;

  case 1008:
#line 7207 "parser.y"
    {
	struct cb_perform	*p;
	cb_tree			plabel;
	char			name[64];

	if (!perform_stack) {
		cb_error_x (CB_TREE (current_statement),
			    _("EXIT PERFORM is only valid with inline PERFORM"));
	} else if (CB_VALUE (perform_stack) != cb_error_node) {
		p = CB_PERFORM (CB_VALUE (perform_stack));
		if (!p->cycle_label) {
			sprintf (name, "EXIT PERFORM CYCLE %d", cb_id);
			p->cycle_label = cb_build_reference (name);
			plabel = cb_build_label (p->cycle_label, NULL);
			CB_LABEL (plabel)->flag_begin = 1;
			CB_LABEL (plabel)->flag_dummy_exit = 1;
		}
		current_statement->name = (const char *)"EXIT PERFORM CYCLE";
		cb_emit_goto (CB_LIST_INIT (p->cycle_label), NULL);
	}
  ;}
    break;

  case 1009:
#line 7229 "parser.y"
    {
	struct cb_perform	*p;
	cb_tree			plabel;
	char			name[64];

	if (!perform_stack) {
		cb_error_x (CB_TREE (current_statement),
			    _("EXIT PERFORM is only valid with inline PERFORM"));
	} else if (CB_VALUE (perform_stack) != cb_error_node) {
		p = CB_PERFORM (CB_VALUE (perform_stack));
		if (!p->exit_label) {
			sprintf (name, "EXIT PERFORM %d", cb_id);
			p->exit_label = cb_build_reference (name);
			plabel = cb_build_label (p->exit_label, NULL);
			CB_LABEL (plabel)->flag_begin = 1;
			CB_LABEL (plabel)->flag_dummy_exit = 1;
		}
		current_statement->name = (const char *)"EXIT PERFORM";
		cb_emit_goto (CB_LIST_INIT (p->exit_label), NULL);
	}
  ;}
    break;

  case 1010:
#line 7251 "parser.y"
    {
	cb_tree	plabel;
	char	name[64];

	if (!current_section) {
		cb_error_x (CB_TREE (current_statement),
			    _("EXIT SECTION is only valid with an active SECTION"));
	} else {
		if (!current_section->exit_label) {
			sprintf (name, "EXIT SECTION %d", cb_id);
			current_section->exit_label = cb_build_reference (name);
			plabel = cb_build_label (current_section->exit_label, NULL);
			CB_LABEL (plabel)->flag_begin = 1;
			CB_LABEL (plabel)->flag_dummy_exit = 1;
		}
		current_statement->name = (const char *)"EXIT SECTION";
		cb_emit_goto (CB_LIST_INIT (current_section->exit_label), NULL);
	}
  ;}
    break;

  case 1011:
#line 7271 "parser.y"
    {
	cb_tree	plabel;
	char	name[64];

	if (!current_paragraph) {
		cb_error_x (CB_TREE (current_statement),
			    _("EXIT PARAGRAPH is only valid with an active PARAGRAPH"));
	} else {
		if (!current_paragraph->exit_label) {
			sprintf (name, "EXIT PARAGRAPH %d", cb_id);
			current_paragraph->exit_label = cb_build_reference (name);
			plabel = cb_build_label (current_paragraph->exit_label, NULL);
			CB_LABEL (plabel)->flag_begin = 1;
			CB_LABEL (plabel)->flag_dummy_exit = 1;
		}
		current_statement->name = (const char *)"EXIT PARAGRAPH";
		cb_emit_goto (CB_LIST_INIT (current_paragraph->exit_label), NULL);
	}
  ;}
    break;

  case 1012:
#line 7296 "parser.y"
    {
	begin_statement ("FREE", 0);
  ;}
    break;

  case 1014:
#line 7304 "parser.y"
    {
	cb_emit_free ((yyvsp[(1) - (1)]));
  ;}
    break;

  case 1015:
#line 7314 "parser.y"
    {
	begin_statement ("GENERATE", 0);
  ;}
    break;

  case 1017:
#line 7323 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(1) - (1)]) != cb_error_node) {
		cb_emit_generate((yyvsp[(1) - (1)]));
	}
  ;}
    break;

  case 1018:
#line 7335 "parser.y"
    {
	if (!current_paragraph->flag_statement) {
		current_paragraph->flag_first_is_goto = 1;
	}
	begin_statement ("GO TO", 0);
	save_debug = start_debug;
	start_debug = 0;
  ;}
    break;

  case 1020:
#line 7348 "parser.y"
    {
	cb_emit_goto ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
	start_debug = save_debug;
  ;}
    break;

  case 1021:
#line 7356 "parser.y"
    {
	check_unreached = 1;
	(yyval) = NULL;
  ;}
    break;

  case 1022:
#line 7361 "parser.y"
    {
	check_unreached = 0;
	(yyval) = (yyvsp[(3) - (3)]);
  ;}
    break;

  case 1023:
#line 7372 "parser.y"
    {
	begin_statement ("GOBACK", 0);
	check_unreached = 1;
	cb_emit_exit (1U);
  ;}
    break;

  case 1024:
#line 7384 "parser.y"
    {
	begin_statement ("IF", TERM_IF);
  ;}
    break;

  case 1026:
#line 7393 "parser.y"
    {
	cb_emit_if ((yyvsp[(-1) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  ;}
    break;

  case 1027:
#line 7397 "parser.y"
    {
	cb_emit_if ((yyvsp[(-1) - (2)]), NULL, (yyvsp[(2) - (2)]));
  ;}
    break;

  case 1028:
#line 7401 "parser.y"
    {
	cb_emit_if ((yyvsp[(-1) - (1)]), (yyvsp[(1) - (1)]), NULL);
  ;}
    break;

  case 1029:
#line 7408 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), IF);
  ;}
    break;

  case 1030:
#line 7412 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), IF);
  ;}
    break;

  case 1031:
#line 7422 "parser.y"
    {
	begin_statement ("INITIALIZE", 0);
  ;}
    break;

  case 1033:
#line 7431 "parser.y"
    {
	cb_emit_initialize ((yyvsp[(1) - (5)]), (yyvsp[(2) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]), (yyvsp[(5) - (5)]));
  ;}
    break;

  case 1034:
#line 7437 "parser.y"
    { (yyval) = NULL; ;}
    break;

  case 1035:
#line 7438 "parser.y"
    { (yyval) = cb_true; ;}
    break;

  case 1036:
#line 7442 "parser.y"
    { (yyval) = NULL; ;}
    break;

  case 1037:
#line 7443 "parser.y"
    { (yyval) = cb_true; ;}
    break;

  case 1038:
#line 7444 "parser.y"
    { (yyval) = (yyvsp[(1) - (3)]); ;}
    break;

  case 1039:
#line 7449 "parser.y"
    {
	(yyval) = NULL;
  ;}
    break;

  case 1040:
#line 7453 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  ;}
    break;

  case 1041:
#line 7460 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  ;}
    break;

  case 1042:
#line 7465 "parser.y"
    {
	(yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  ;}
    break;

  case 1043:
#line 7472 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (4)]), (yyvsp[(4) - (4)]));
  ;}
    break;

  case 1044:
#line 7478 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_ALPHABETIC); ;}
    break;

  case 1045:
#line 7479 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC); ;}
    break;

  case 1046:
#line 7480 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC); ;}
    break;

  case 1047:
#line 7481 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC_EDITED); ;}
    break;

  case 1048:
#line 7482 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC_EDITED); ;}
    break;

  case 1049:
#line 7483 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL); ;}
    break;

  case 1050:
#line 7484 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL_EDITED); ;}
    break;

  case 1051:
#line 7489 "parser.y"
    {
	(yyval) = NULL;
  ;}
    break;

  case 1052:
#line 7493 "parser.y"
    {
	(yyval) = cb_true;
  ;}
    break;

  case 1053:
#line 7502 "parser.y"
    {
	begin_statement ("INITIATE", 0);
  ;}
    break;

  case 1055:
#line 7510 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(1) - (1)]) != cb_error_node) {
	    cb_emit_initiate((yyvsp[(1) - (1)]));
	}
  ;}
    break;

  case 1056:
#line 7517 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(2) - (2)]) != cb_error_node) {
	    cb_emit_initiate((yyvsp[(2) - (2)]));
	}
  ;}
    break;

  case 1057:
#line 7529 "parser.y"
    {
	begin_statement ("INSPECT", 0);
	inspect_keyword = 0;
  ;}
    break;

  case 1060:
#line 7542 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  ;}
    break;

  case 1061:
#line 7546 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  ;}
    break;

  case 1062:
#line 7550 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  ;}
    break;

  case 1067:
#line 7566 "parser.y"
    {
	cb_init_tallying ();
  ;}
    break;

  case 1068:
#line 7570 "parser.y"
    {
	cb_emit_inspect ((yyvsp[(0) - (3)]), (yyvsp[(3) - (3)]), cb_int0, 0);
	(yyval) = (yyvsp[(0) - (3)]);
  ;}
    break;

  case 1069:
#line 7580 "parser.y"
    {
	cb_emit_inspect ((yyvsp[(0) - (2)]), (yyvsp[(2) - (2)]), cb_int1, 1);
	inspect_keyword = 0;
  ;}
    break;

  case 1070:
#line 7590 "parser.y"
    {
	cb_tree		x;
	x = cb_build_converting ((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]), (yyvsp[(5) - (5)]));
	cb_emit_inspect ((yyvsp[(0) - (5)]), x, cb_int0, 2);
  ;}
    break;

  case 1071:
#line 7598 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 1072:
#line 7599 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); ;}
    break;

  case 1073:
#line 7603 "parser.y"
    { (yyval) = cb_build_tallying_data ((yyvsp[(1) - (2)])); ;}
    break;

  case 1074:
#line 7604 "parser.y"
    { (yyval) = cb_build_tallying_characters ((yyvsp[(2) - (2)])); ;}
    break;

  case 1075:
#line 7605 "parser.y"
    { (yyval) = cb_build_tallying_all (); ;}
    break;

  case 1076:
#line 7606 "parser.y"
    { (yyval) = cb_build_tallying_leading (); ;}
    break;

  case 1077:
#line 7607 "parser.y"
    { (yyval) = cb_build_tallying_trailing (); ;}
    break;

  case 1078:
#line 7608 "parser.y"
    { (yyval) = cb_build_tallying_value ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); ;}
    break;

  case 1079:
#line 7612 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 1080:
#line 7613 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); ;}
    break;

  case 1081:
#line 7618 "parser.y"
    {
	(yyval) = cb_build_replacing_characters ((yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));
	inspect_keyword = 0;
  ;}
    break;

  case 1082:
#line 7623 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  ;}
    break;

  case 1083:
#line 7629 "parser.y"
    { /* Nothing */ ;}
    break;

  case 1084:
#line 7630 "parser.y"
    { inspect_keyword = 1; ;}
    break;

  case 1085:
#line 7631 "parser.y"
    { inspect_keyword = 2; ;}
    break;

  case 1086:
#line 7632 "parser.y"
    { inspect_keyword = 3; ;}
    break;

  case 1087:
#line 7633 "parser.y"
    { inspect_keyword = 4; ;}
    break;

  case 1088:
#line 7638 "parser.y"
    {
	switch (inspect_keyword) {
		case 1:
			(yyval) = cb_build_replacing_all ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));
			break;
		case 2:
			(yyval) = cb_build_replacing_leading ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));
			break;
		case 3:
			(yyval) = cb_build_replacing_first ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));
			break;
		case 4:
			(yyval) = cb_build_replacing_trailing ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));
			break;
		default:
			cb_error_x (CB_TREE (current_statement),
				    _("INSPECT missing a keyword"));
			(yyval) = cb_build_replacing_all ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));
			break;
	}
  ;}
    break;

  case 1089:
#line 7665 "parser.y"
    {
	(yyval) = cb_build_inspect_region_start ();
  ;}
    break;

  case 1090:
#line 7669 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  ;}
    break;

  case 1091:
#line 7676 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(0) - (3)]), CB_BUILD_FUNCALL_1 ("cob_inspect_before", (yyvsp[(3) - (3)])));
  ;}
    break;

  case 1092:
#line 7680 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(0) - (3)]), CB_BUILD_FUNCALL_1 ("cob_inspect_after", (yyvsp[(3) - (3)])));
  ;}
    break;

  case 1093:
#line 7689 "parser.y"
    {
	begin_statement ("MERGE", 0);
	current_statement->flag_merge = 1;
  ;}
    break;

  case 1095:
#line 7701 "parser.y"
    {
	begin_statement ("MOVE", 0);
  ;}
    break;

  case 1097:
#line 7709 "parser.y"
    {
	cb_emit_move ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  ;}
    break;

  case 1098:
#line 7713 "parser.y"
    {
	cb_emit_move_corresponding ((yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
  ;}
    break;

  case 1099:
#line 7723 "parser.y"
    {
	begin_statement ("MULTIPLY", TERM_MULTIPLY);
  ;}
    break;

  case 1101:
#line 7732 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '*', (yyvsp[(1) - (4)]));
  ;}
    break;

  case 1102:
#line 7736 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_op ((yyvsp[(1) - (6)]), '*', (yyvsp[(3) - (6)])));
  ;}
    break;

  case 1103:
#line 7743 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), MULTIPLY);
  ;}
    break;

  case 1104:
#line 7747 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), MULTIPLY);
  ;}
    break;

  case 1105:
#line 7757 "parser.y"
    {
	begin_statement ("OPEN", 0);
  ;}
    break;

  case 1107:
#line 7765 "parser.y"
    {
	cb_tree l;
	cb_tree x;

	if ((yyvsp[(2) - (4)]) && (yyvsp[(4) - (4)])) {
		cb_error_x (CB_TREE (current_statement),
			    _("SHARING and LOCK clauses are mutually exclusive"));
	}
	if ((yyvsp[(4) - (4)])) {
		x = (yyvsp[(4) - (4)]);
	} else {
		x = (yyvsp[(2) - (4)]);
	}
	for (l = (yyvsp[(3) - (4)]); l; l = CB_CHAIN (l)) {
		if (CB_VALID_TREE (CB_VALUE (l))) {
			begin_implicit_statement ();
			cb_emit_open (CB_VALUE (l), (yyvsp[(1) - (4)]), x);
		}
	}
  ;}
    break;

  case 1108:
#line 7786 "parser.y"
    {
	cb_tree l;
	cb_tree x;

	if ((yyvsp[(3) - (5)]) && (yyvsp[(5) - (5)])) {
		cb_error_x (CB_TREE (current_statement),
			    _("SHARING and LOCK clauses are mutually exclusive"));
	}
	if ((yyvsp[(5) - (5)])) {
		x = (yyvsp[(5) - (5)]);
	} else {
		x = (yyvsp[(3) - (5)]);
	}
	for (l = (yyvsp[(4) - (5)]); l; l = CB_CHAIN (l)) {
		if (CB_VALID_TREE (CB_VALUE (l))) {
			begin_implicit_statement ();
			cb_emit_open (CB_VALUE (l), (yyvsp[(2) - (5)]), x);
		}
	}
  ;}
    break;

  case 1109:
#line 7809 "parser.y"
    { (yyval) = cb_int (COB_OPEN_INPUT); ;}
    break;

  case 1110:
#line 7810 "parser.y"
    { (yyval) = cb_int (COB_OPEN_OUTPUT); ;}
    break;

  case 1111:
#line 7811 "parser.y"
    { (yyval) = cb_int (COB_OPEN_I_O); ;}
    break;

  case 1112:
#line 7812 "parser.y"
    { (yyval) = cb_int (COB_OPEN_EXTEND); ;}
    break;

  case 1113:
#line 7816 "parser.y"
    { (yyval) = NULL; ;}
    break;

  case 1114:
#line 7817 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); ;}
    break;

  case 1115:
#line 7821 "parser.y"
    { (yyval) = NULL; ;}
    break;

  case 1116:
#line 7822 "parser.y"
    { (yyval) = NULL; ;}
    break;

  case 1117:
#line 7823 "parser.y"
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); ;}
    break;

  case 1118:
#line 7825 "parser.y"
    {
	(void)cb_verify (CB_OBSOLETE, "REVERSED");
	(yyval) = NULL;
  ;}
    break;

  case 1119:
#line 7836 "parser.y"
    {
	begin_statement ("PERFORM", TERM_PERFORM);
	/* Turn off field debug - PERFORM is special */
	save_debug = start_debug;
	start_debug = 0;
  ;}
    break;

  case 1121:
#line 7847 "parser.y"
    {
	cb_emit_perform ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
	start_debug = save_debug;
  ;}
    break;

  case 1122:
#line 7852 "parser.y"
    {
	CB_ADD_TO_CHAIN ((yyvsp[(1) - (1)]), perform_stack);
	/* Restore field debug before inline statements */
	start_debug = save_debug;
  ;}
    break;

  case 1123:
#line 7858 "parser.y"
    {
	perform_stack = CB_CHAIN (perform_stack);
	cb_emit_perform ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
  ;}
    break;

  case 1124:
#line 7863 "parser.y"
    {
	cb_emit_perform ((yyvsp[(1) - (2)]), NULL);
	start_debug = save_debug;
  ;}
    break;

  case 1125:
#line 7871 "parser.y"
    {
	if (cb_relaxed_syntax_check) {
		TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), PERFORM);
	} else {
		TERMINATOR_ERROR ((yyvsp[(-4) - (0)]), PERFORM);
	}
  ;}
    break;

  case 1126:
#line 7879 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), PERFORM);
  ;}
    break;

  case 1127:
#line 7886 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), PERFORM);
  ;}
    break;

  case 1128:
#line 7890 "parser.y"
    {
	if (cb_relaxed_syntax_check) {
		TERMINATOR_WARNING ((yyvsp[(-2) - (1)]), PERFORM);
	} else {
		TERMINATOR_ERROR ((yyvsp[(-2) - (1)]), PERFORM);
	}
	/* Put the dot token back into the stack for reparse */
	cb_unput_dot ();
  ;}
    break;

  case 1129:
#line 7903 "parser.y"
    {
	/* Return from $1 */
	CB_REFERENCE ((yyvsp[(1) - (1)]))->length = cb_true;
	CB_REFERENCE ((yyvsp[(1) - (1)]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (1)]), (yyvsp[(1) - (1)]));
  ;}
    break;

  case 1130:
#line 7910 "parser.y"
    {
	/* Return from $3 */
	CB_REFERENCE ((yyvsp[(3) - (3)]))->length = cb_true;
	CB_REFERENCE ((yyvsp[(1) - (3)]))->flag_decl_ok = 1;
	CB_REFERENCE ((yyvsp[(3) - (3)]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  ;}
    break;

  case 1131:
#line 7921 "parser.y"
    {
	(yyval) = cb_build_perform_once (NULL);
  ;}
    break;

  case 1132:
#line 7925 "parser.y"
    {
	(yyval) = cb_build_perform_times ((yyvsp[(1) - (2)]));
	current_program->loop_counter++;
  ;}
    break;

  case 1133:
#line 7930 "parser.y"
    {
	(yyval) = cb_build_perform_forever (NULL);
  ;}
    break;

  case 1134:
#line 7934 "parser.y"
    {
	cb_tree varying;

	if (!(yyvsp[(3) - (3)])) {
		(yyval) = cb_build_perform_forever (NULL);
	} else {
		varying = CB_LIST_INIT (cb_build_perform_varying (NULL, NULL, NULL, (yyvsp[(3) - (3)])));
		(yyval) = cb_build_perform_until ((yyvsp[(1) - (3)]), varying);
	}
  ;}
    break;

  case 1135:
#line 7945 "parser.y"
    {
	(yyval) = cb_build_perform_until ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  ;}
    break;

  case 1136:
#line 7951 "parser.y"
    { (yyval) = CB_BEFORE; ;}
    break;

  case 1137:
#line 7952 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); ;}
    break;

  case 1138:
#line 7956 "parser.y"
    { (yyval) = NULL; ;}
    break;

  case 1139:
#line 7957 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 1140:
#line 7960 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); ;}
    break;

  case 1141:
#line 7962 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 1142:
#line 7967 "parser.y"
    {
	cb_tree		x;
	int		dataTypeOk = 1;

	if (cb_tree_category ((yyvsp[(1) - (7)])) != CB_CATEGORY_NUMERIC) {
		x = cb_ref ((yyvsp[(1) - (7)]));
		cb_error_x (CB_TREE (current_statement),
			_("PERFORM VARYING '%s' (Line %d of %s) is not a numeric field"), 
					cb_name (x),x->source_line, x->source_file);
		(yyval) = cb_int1;
		dataTypeOk = 0;
	} 
	if (cb_tree_category ((yyvsp[(3) - (7)])) != CB_CATEGORY_NUMERIC) {
		x = cb_ref ((yyvsp[(3) - (7)]));
		cb_error_x (CB_TREE (current_statement),
			_("PERFORM VARYING '%s' (Line %d of %s) is not a numeric field"), 
					cb_name (x),x->source_line, x->source_file);
		(yyval) = cb_int1;
		dataTypeOk = 0;
	} 
	if (cb_tree_category ((yyvsp[(5) - (7)])) != CB_CATEGORY_NUMERIC) {
		x = cb_ref ((yyvsp[(5) - (7)]));
		cb_error_x (CB_TREE (current_statement),
			_("PERFORM VARYING '%s' (Line %d of %s) is not a numeric field"), 
					cb_name (x),x->source_line, x->source_file);
		(yyval) = cb_int1;
		dataTypeOk = 0;
	} 
	if(dataTypeOk) {
		(yyval) = cb_build_perform_varying ((yyvsp[(1) - (7)]), (yyvsp[(3) - (7)]), (yyvsp[(5) - (7)]), (yyvsp[(7) - (7)]));
	}
  ;}
    break;

  case 1143:
#line 8006 "parser.y"
    {
	begin_statement ("READ", TERM_READ);
  ;}
    break;

  case 1145:
#line 8015 "parser.y"
    {
	if (CB_VALID_TREE ((yyvsp[(1) - (7)]))) {
		struct cb_file	*cf;

		cf = CB_FILE(cb_ref ((yyvsp[(1) - (7)])));
		if ((yyvsp[(5) - (7)]) && (cf->lock_mode & COB_LOCK_AUTOMATIC)) {
			cb_error_x (CB_TREE (current_statement),
				    _("LOCK clause invalid with file LOCK AUTOMATIC"));
		} else if ((yyvsp[(6) - (7)]) &&
		      (cf->organization != COB_ORG_RELATIVE &&
		       cf->organization != COB_ORG_INDEXED)) {
			cb_error_x (CB_TREE (current_statement),
				    _("KEY clause invalid with this file type"));
		} else if (current_statement->handler_id == COB_EC_I_O_INVALID_KEY &&
			   (cf->organization != COB_ORG_RELATIVE &&
			    cf->organization != COB_ORG_INDEXED)) {
			cb_error_x (CB_TREE (current_statement),
				    _("INVALID KEY clause invalid with this file type"));
		} else {
			cb_emit_read ((yyvsp[(1) - (7)]), (yyvsp[(2) - (7)]), (yyvsp[(4) - (7)]), (yyvsp[(6) - (7)]), (yyvsp[(5) - (7)]));
		}
	}
  ;}
    break;

  case 1146:
#line 8041 "parser.y"
    { (yyval) = NULL; ;}
    break;

  case 1147:
#line 8042 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); ;}
    break;

  case 1148:
#line 8047 "parser.y"
    {
	(yyval) = NULL;
  ;}
    break;

  case 1149:
#line 8051 "parser.y"
    {
	(yyval) = cb_int3;
  ;}
    break;

  case 1150:
#line 8055 "parser.y"
    {
	(yyval) = cb_int1;
  ;}
    break;

  case 1151:
#line 8059 "parser.y"
    {
	(yyval) = cb_int1;
  ;}
    break;

  case 1152:
#line 8063 "parser.y"
    {
	(yyval) = cb_int2;
  ;}
    break;

  case 1153:
#line 8067 "parser.y"
    {
	(yyval) = cb_int3;
  ;}
    break;

  case 1154:
#line 8071 "parser.y"
    {
	(yyval) = cb_int4;
  ;}
    break;

  case 1155:
#line 8077 "parser.y"
    { (yyval) = NULL; ;}
    break;

  case 1156:
#line 8078 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); ;}
    break;

  case 1159:
#line 8088 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), READ);
  ;}
    break;

  case 1160:
#line 8092 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), READ);
  ;}
    break;

  case 1161:
#line 8102 "parser.y"
    {
	begin_statement ("READY TRACE", 0);
	cb_emit_ready_trace ();
  ;}
    break;

  case 1162:
#line 8112 "parser.y"
    {
	begin_statement ("RELEASE", 0);
  ;}
    break;

  case 1164:
#line 8120 "parser.y"
    {
	cb_emit_release ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  ;}
    break;

  case 1165:
#line 8130 "parser.y"
    {
	begin_statement ("RESET TRACE", 0);
	cb_emit_reset_trace ();
  ;}
    break;

  case 1166:
#line 8140 "parser.y"
    {
	begin_statement ("RETURN", TERM_RETURN);
  ;}
    break;

  case 1168:
#line 8149 "parser.y"
    {
	cb_emit_return ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
  ;}
    break;

  case 1169:
#line 8156 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), RETURN);
  ;}
    break;

  case 1170:
#line 8160 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), RETURN);
  ;}
    break;

  case 1171:
#line 8170 "parser.y"
    {
	begin_statement ("REWRITE", TERM_REWRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  ;}
    break;

  case 1173:
#line 8182 "parser.y"
    {
	cb_emit_rewrite ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]));
	start_debug = save_debug;
  ;}
    break;

  case 1174:
#line 8190 "parser.y"
    {
	(yyval) = NULL;
  ;}
    break;

  case 1175:
#line 8194 "parser.y"
    {
	(yyval) = cb_int1;
  ;}
    break;

  case 1176:
#line 8198 "parser.y"
    {
	(yyval) = cb_int2;
  ;}
    break;

  case 1177:
#line 8205 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), REWRITE);
  ;}
    break;

  case 1178:
#line 8209 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), REWRITE);
  ;}
    break;

  case 1179:
#line 8219 "parser.y"
    {
	begin_statement ("ROLLBACK", 0);
	cb_emit_rollback ();
  ;}
    break;

  case 1180:
#line 8230 "parser.y"
    {
	begin_statement ("SEARCH", TERM_SEARCH);
  ;}
    break;

  case 1182:
#line 8239 "parser.y"
    {
	cb_emit_search ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));
  ;}
    break;

  case 1183:
#line 8244 "parser.y"
    {
	current_statement->name = (const char *)"SEARCH ALL";
	cb_emit_search_all ((yyvsp[(2) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]), (yyvsp[(6) - (6)]));
  ;}
    break;

  case 1184:
#line 8251 "parser.y"
    { (yyval) = NULL; ;}
    break;

  case 1185:
#line 8252 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); ;}
    break;

  case 1186:
#line 8257 "parser.y"
    {
	(yyval) = NULL;
  ;}
    break;

  case 1187:
#line 8262 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  ;}
    break;

  case 1188:
#line 8269 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  ;}
    break;

  case 1189:
#line 8273 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
  ;}
    break;

  case 1190:
#line 8281 "parser.y"
    {
	(yyval) = cb_build_if_check_break ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
  ;}
    break;

  case 1191:
#line 8288 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SEARCH);
  ;}
    break;

  case 1192:
#line 8292 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SEARCH);
  ;}
    break;

  case 1193:
#line 8302 "parser.y"
    {
	begin_statement ("SET", 0);
	setattr_val_on = 0;
	setattr_val_off = 0;
	cobc_cs_check = CB_CS_SET;
  ;}
    break;

  case 1194:
#line 8309 "parser.y"
    {
	cobc_cs_check = 0;
  ;}
    break;

  case 1201:
#line 8324 "parser.y"
    { (yyval) = cb_int1; ;}
    break;

  case 1202:
#line 8325 "parser.y"
    { (yyval) = cb_int0; ;}
    break;

  case 1203:
#line 8329 "parser.y"
    { (yyval) = cb_int0; ;}
    break;

  case 1204:
#line 8330 "parser.y"
    { (yyval) = cb_int1; ;}
    break;

  case 1205:
#line 8337 "parser.y"
    {
	cb_emit_setenv ((yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
  ;}
    break;

  case 1206:
#line 8346 "parser.y"
    {
	cb_emit_set_attribute ((yyvsp[(1) - (3)]), setattr_val_on, setattr_val_off);
  ;}
    break;

  case 1209:
#line 8358 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_BELL);
  ;}
    break;

  case 1210:
#line 8362 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_BLINK);
  ;}
    break;

  case 1211:
#line 8366 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_HIGHLIGHT);
  ;}
    break;

  case 1212:
#line 8370 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_LOWLIGHT);
  ;}
    break;

  case 1213:
#line 8374 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_REVERSE);
  ;}
    break;

  case 1214:
#line 8378 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_UNDERLINE);
  ;}
    break;

  case 1215:
#line 8382 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_LEFTLINE);
  ;}
    break;

  case 1216:
#line 8386 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_OVERLINE);
  ;}
    break;

  case 1217:
#line 8395 "parser.y"
    {
	cb_emit_set_to ((yyvsp[(1) - (4)]), cb_build_ppointer ((yyvsp[(4) - (4)])));
  ;}
    break;

  case 1218:
#line 8399 "parser.y"
    {
	cb_emit_set_to ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  ;}
    break;

  case 1219:
#line 8408 "parser.y"
    {
	cb_emit_set_up_down ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
  ;}
    break;

  case 1222:
#line 8422 "parser.y"
    {
	cb_emit_set_on_off ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  ;}
    break;

  case 1225:
#line 8436 "parser.y"
    {
	cb_emit_set_true ((yyvsp[(1) - (3)]));
  ;}
    break;

  case 1226:
#line 8440 "parser.y"
    {
	cb_emit_set_false ((yyvsp[(1) - (3)]));
  ;}
    break;

  case 1227:
#line 8450 "parser.y"
    {
	begin_statement ("SORT", 0);
  ;}
    break;

  case 1229:
#line 8458 "parser.y"
    {
	cb_tree		x;

	x = cb_ref ((yyvsp[(1) - (4)]));
	if (CB_VALID_TREE (x)) {
		if (CB_INVALID_TREE ((yyvsp[(2) - (4)]))) {
			if (CB_FILE_P (x)) {
				cb_error (_("File sort requires KEY phrase"));
			} else {
				cb_error (_("Table sort without keys not implemented yet"));
			}
			(yyval) = NULL;
		} else {
			cb_emit_sort_init ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
			(yyval)= (yyvsp[(1) - (4)]);
		}
	} else {
		(yyval) = NULL;
	}
  ;}
    break;

  case 1230:
#line 8479 "parser.y"
    {
	if ((yyvsp[(5) - (7)]) && CB_VALID_TREE ((yyvsp[(1) - (7)]))) {
		cb_emit_sort_finish ((yyvsp[(1) - (7)]));
	}
  ;}
    break;

  case 1231:
#line 8488 "parser.y"
    {
	(yyval) = NULL;
  ;}
    break;

  case 1232:
#line 8493 "parser.y"
    {
	cb_tree l;
	cb_tree lparm;

	if ((yyvsp[(5) - (5)]) == NULL) {
		l = CB_LIST_INIT (NULL);
	} else {
		l = (yyvsp[(5) - (5)]);
	}
	lparm = l;
	for (; l; l = CB_CHAIN (l)) {
		CB_PURPOSE (l) = (yyvsp[(3) - (5)]);
	}
	(yyval) = cb_list_append ((yyvsp[(1) - (5)]), lparm);
  ;}
    break;

  case 1233:
#line 8511 "parser.y"
    { (yyval) = NULL; ;}
    break;

  case 1234:
#line 8512 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); ;}
    break;

  case 1236:
#line 8517 "parser.y"
    {
	/* The OC sort is a stable sort. ie. Dups are per default in order */
	/* Therefore nothing to do here */
  ;}
    break;

  case 1237:
#line 8524 "parser.y"
    { (yyval) = cb_null; ;}
    break;

  case 1238:
#line 8525 "parser.y"
    { (yyval) = cb_ref ((yyvsp[(3) - (3)])); ;}
    break;

  case 1239:
#line 8530 "parser.y"
    {
	if ((yyvsp[(0) - (0)]) && CB_FILE_P (cb_ref ((yyvsp[(0) - (0)])))) {
		cb_error (_("File sort requires USING or INPUT PROCEDURE"));
	}
  ;}
    break;

  case 1240:
#line 8536 "parser.y"
    {
	if ((yyvsp[(0) - (2)])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[(0) - (2)])))) {
			cb_error (_("USING invalid with table SORT"));
		} else {
			cb_emit_sort_using ((yyvsp[(0) - (2)]), (yyvsp[(2) - (2)]));
		}
	}
  ;}
    break;

  case 1241:
#line 8546 "parser.y"
    {
	if ((yyvsp[(0) - (4)])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[(0) - (4)])))) {
			cb_error (_("INPUT PROCEDURE invalid with table SORT"));
		} else if (current_statement->flag_merge) {
			cb_error (_("INPUT PROCEDURE invalid with MERGE"));
		} else {
			cb_emit_sort_input ((yyvsp[(4) - (4)]));
		}
	}
  ;}
    break;

  case 1242:
#line 8561 "parser.y"
    {
	if ((yyvsp[(-1) - (0)]) && CB_FILE_P (cb_ref ((yyvsp[(-1) - (0)])))) {
		cb_error (_("File sort requires GIVING or OUTPUT PROCEDURE"));
	}
  ;}
    break;

  case 1243:
#line 8567 "parser.y"
    {
	if ((yyvsp[(-1) - (2)])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[(-1) - (2)])))) {
			cb_error (_("GIVING invalid with table SORT"));
		} else {
			cb_emit_sort_giving ((yyvsp[(-1) - (2)]), (yyvsp[(2) - (2)]));
		}
	}
  ;}
    break;

  case 1244:
#line 8577 "parser.y"
    {
	if ((yyvsp[(-1) - (4)])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[(-1) - (4)])))) {
			cb_error (_("OUTPUT PROCEDURE invalid with table SORT"));
		} else {
			cb_emit_sort_output ((yyvsp[(4) - (4)]));
		}
	}
  ;}
    break;

  case 1245:
#line 8593 "parser.y"
    {
	begin_statement ("START", TERM_START);
	start_tree = cb_int (COB_EQ);
  ;}
    break;

  case 1247:
#line 8603 "parser.y"
    {
	if ((yyvsp[(3) - (4)]) && !(yyvsp[(2) - (4)])) {
		cb_error_x (CB_TREE (current_statement),
			    _("SIZE/LENGTH invalid here"));
	} else {
		cb_emit_start ((yyvsp[(1) - (4)]), start_tree, (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]));
	}
  ;}
    break;

  case 1248:
#line 8615 "parser.y"
    {
	(yyval) = NULL;
  ;}
    break;

  case 1249:
#line 8619 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  ;}
    break;

  case 1250:
#line 8626 "parser.y"
    {
	(yyval) = NULL;
  ;}
    break;

  case 1251:
#line 8630 "parser.y"
    {
	start_tree = (yyvsp[(3) - (4)]);
	(yyval) = (yyvsp[(4) - (4)]);
  ;}
    break;

  case 1252:
#line 8635 "parser.y"
    {
	start_tree = cb_int (COB_FI);
	(yyval) = NULL;
  ;}
    break;

  case 1253:
#line 8640 "parser.y"
    {
	start_tree = cb_int (COB_LA);
	(yyval) = NULL;
  ;}
    break;

  case 1254:
#line 8647 "parser.y"
    { (yyval) = cb_int (COB_EQ); ;}
    break;

  case 1255:
#line 8648 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_LE : COB_GT); ;}
    break;

  case 1256:
#line 8649 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_GE : COB_LT); ;}
    break;

  case 1257:
#line 8650 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_LT : COB_GE); ;}
    break;

  case 1258:
#line 8651 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_GT : COB_LE); ;}
    break;

  case 1259:
#line 8652 "parser.y"
    { (yyval) = cb_int (COB_NE); ;}
    break;

  case 1260:
#line 8657 "parser.y"
    {
	cb_error_x (CB_TREE (current_statement),
		    _("NOT EQUAL condition disallowed on START statement"));
  ;}
    break;

  case 1263:
#line 8670 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), START);
  ;}
    break;

  case 1264:
#line 8674 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), START);
  ;}
    break;

  case 1265:
#line 8684 "parser.y"
    {
	begin_statement ("STOP RUN", 0);
  ;}
    break;

  case 1266:
#line 8688 "parser.y"
    {
	cb_emit_stop_run ((yyvsp[(4) - (4)]));
	check_unreached = 1;
	cobc_cs_check = 0;
  ;}
    break;

  case 1267:
#line 8694 "parser.y"
    {
	begin_statement ("STOP", 0);
	cb_verify (cb_stop_literal_statement, "STOP literal");
	cb_emit_display (CB_LIST_INIT ((yyvsp[(2) - (2)])), cb_int0, cb_int1, NULL,
			 NULL);
	cb_emit_accept (NULL, NULL, NULL);
	cobc_cs_check = 0;
  ;}
    break;

  case 1268:
#line 8706 "parser.y"
    {
	(yyval) = current_program->cb_return_code;
  ;}
    break;

  case 1269:
#line 8710 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  ;}
    break;

  case 1270:
#line 8714 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  ;}
    break;

  case 1271:
#line 8718 "parser.y"
    {
	if ((yyvsp[(4) - (4)])) {
		(yyval) = (yyvsp[(4) - (4)]);
	} else {
		(yyval) = cb_int1;
	}
  ;}
    break;

  case 1272:
#line 8726 "parser.y"
    {
	if ((yyvsp[(4) - (4)])) {
		(yyval) = (yyvsp[(4) - (4)]);
	} else {
		(yyval) = cb_int0;
	}
  ;}
    break;

  case 1273:
#line 8737 "parser.y"
    {
	(yyval) = NULL;
  ;}
    break;

  case 1274:
#line 8741 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  ;}
    break;

  case 1275:
#line 8747 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 1276:
#line 8748 "parser.y"
    { (yyval) = cb_space; ;}
    break;

  case 1277:
#line 8749 "parser.y"
    { (yyval) = cb_zero; ;}
    break;

  case 1278:
#line 8750 "parser.y"
    { (yyval) = cb_quote; ;}
    break;

  case 1279:
#line 8757 "parser.y"
    {
	begin_statement ("STRING", TERM_STRING);
  ;}
    break;

  case 1281:
#line 8766 "parser.y"
    {
	cb_emit_string ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]));
  ;}
    break;

  case 1282:
#line 8772 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); ;}
    break;

  case 1283:
#line 8773 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); ;}
    break;

  case 1284:
#line 8777 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 1285:
#line 8778 "parser.y"
    { (yyval) = CB_BUILD_PAIR (cb_int0, NULL); ;}
    break;

  case 1286:
#line 8779 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(3) - (3)]), NULL); ;}
    break;

  case 1287:
#line 8783 "parser.y"
    { (yyval) = NULL; ;}
    break;

  case 1288:
#line 8784 "parser.y"
    { (yyval) = (yyvsp[(4) - (4)]); ;}
    break;

  case 1289:
#line 8789 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), STRING);
  ;}
    break;

  case 1290:
#line 8793 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), STRING);
  ;}
    break;

  case 1291:
#line 8803 "parser.y"
    {
	begin_statement ("SUBTRACT", TERM_SUBTRACT);
  ;}
    break;

  case 1293:
#line 8812 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '-', cb_build_binary_list ((yyvsp[(1) - (4)]), '+'));
  ;}
    break;

  case 1294:
#line 8816 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_list (CB_BUILD_CHAIN ((yyvsp[(3) - (6)]), (yyvsp[(1) - (6)])), '-'));
  ;}
    break;

  case 1295:
#line 8820 "parser.y"
    {
	cb_emit_corresponding (cb_build_sub, (yyvsp[(4) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(5) - (6)]));
  ;}
    break;

  case 1296:
#line 8827 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SUBTRACT);
  ;}
    break;

  case 1297:
#line 8831 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SUBTRACT);
  ;}
    break;

  case 1298:
#line 8841 "parser.y"
    {
	begin_statement ("SUPPRESS", 0);
	if (!in_declaratives) {
		cb_error_x (CB_TREE (current_statement),
			    _("SUPPRESS statement must be within DECLARATIVES"));
	}
	cb_emit_suppress(control_field);
  ;}
    break;

  case 1301:
#line 8859 "parser.y"
    {
	begin_statement ("TERMINATE", 0);
  ;}
    break;

  case 1303:
#line 8867 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(1) - (1)]) != cb_error_node) {
	    cb_emit_terminate((yyvsp[(1) - (1)]));
	}
  ;}
    break;

  case 1304:
#line 8874 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(2) - (2)]) != cb_error_node) {
	    cb_emit_terminate((yyvsp[(2) - (2)]));
	}
  ;}
    break;

  case 1305:
#line 8886 "parser.y"
    {
	begin_statement ("TRANSFORM", 0);
  ;}
    break;

  case 1307:
#line 8894 "parser.y"
    {
	cb_tree		x;

	x = cb_build_converting ((yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), cb_build_inspect_region_start ());
	cb_emit_inspect ((yyvsp[(1) - (5)]), x, cb_int0, 2);
  ;}
    break;

  case 1308:
#line 8907 "parser.y"
    {
	begin_statement ("UNLOCK", 0);
  ;}
    break;

  case 1310:
#line 8915 "parser.y"
    {
	if (CB_VALID_TREE ((yyvsp[(1) - (2)]))) {
		if (CB_FILE (cb_ref ((yyvsp[(1) - (2)])))->organization == COB_ORG_SORT) {
			cb_error_x (CB_TREE (current_statement),
				    _("UNLOCK invalid for SORT files"));
		} else {
			cb_emit_unlock ((yyvsp[(1) - (2)]));
		}
	}
  ;}
    break;

  case 1314:
#line 8938 "parser.y"
    {
	begin_statement ("UNSTRING", TERM_UNSTRING);
  ;}
    break;

  case 1316:
#line 8948 "parser.y"
    {
	cb_emit_unstring ((yyvsp[(1) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(4) - (6)]), (yyvsp[(5) - (6)]));
  ;}
    break;

  case 1317:
#line 8954 "parser.y"
    { (yyval) = NULL; ;}
    break;

  case 1318:
#line 8956 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); ;}
    break;

  case 1319:
#line 8960 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); ;}
    break;

  case 1320:
#line 8962 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 1321:
#line 8967 "parser.y"
    {
	(yyval) = cb_build_unstring_delimited ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  ;}
    break;

  case 1322:
#line 8973 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(2) - (2)])); ;}
    break;

  case 1323:
#line 8975 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); ;}
    break;

  case 1324:
#line 8980 "parser.y"
    {
	(yyval) = cb_build_unstring_into ((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
  ;}
    break;

  case 1325:
#line 8986 "parser.y"
    { (yyval) = NULL; ;}
    break;

  case 1326:
#line 8987 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); ;}
    break;

  case 1327:
#line 8991 "parser.y"
    { (yyval) = NULL; ;}
    break;

  case 1328:
#line 8992 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); ;}
    break;

  case 1329:
#line 8996 "parser.y"
    { (yyval) = NULL; ;}
    break;

  case 1330:
#line 8997 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); ;}
    break;

  case 1331:
#line 9002 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), UNSTRING);
  ;}
    break;

  case 1332:
#line 9006 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), UNSTRING);
  ;}
    break;

  case 1333:
#line 9016 "parser.y"
    {
	skip_statements = 0;
	in_debugging = 0;
  ;}
    break;

  case 1339:
#line 9033 "parser.y"
    {
	if (!in_declaratives) {
		cb_error (_("USE statement must be within DECLARATIVES"));
	} else if (!current_section) {
		cb_error (_("SECTION header missing before USE statement"));
	} else {
		current_section->flag_begin = 1;
		current_section->flag_return = 1;
		current_section->flag_declarative_exit = 1;
		current_section->flag_real_label = 1;
		current_section->flag_skip_label = 0;
		CB_EXCEPTION_ENABLE (COB_EC_I_O) = 1;
		if (use_global_ind) {
			current_section->flag_global = 1;
			current_program->global_list =
				cb_list_add (current_program->global_list,
					     CB_TREE (current_section));
		}
		emit_statement (cb_build_comment ("USE AFTER ERROR"));
	}
  ;}
    break;

  case 1340:
#line 9058 "parser.y"
    {
	use_global_ind = 0;
  ;}
    break;

  case 1341:
#line 9062 "parser.y"
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("GLOBAL is invalid in a user FUNCTION"));
	} else {
		use_global_ind = 1;
		current_program->flag_global_use = 1;
	}
  ;}
    break;

  case 1342:
#line 9074 "parser.y"
    {
	cb_tree		l;

	for (l = (yyvsp[(1) - (1)]); l; l = CB_CHAIN (l)) {
		if (CB_VALID_TREE (CB_VALUE (l))) {
			setup_use_file (CB_FILE (cb_ref (CB_VALUE (l))));
		}
	}
  ;}
    break;

  case 1343:
#line 9084 "parser.y"
    {
	current_program->global_handler[COB_OPEN_INPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_INPUT].handler_prog = current_program;
  ;}
    break;

  case 1344:
#line 9089 "parser.y"
    {
	current_program->global_handler[COB_OPEN_OUTPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_OUTPUT].handler_prog = current_program;
  ;}
    break;

  case 1345:
#line 9094 "parser.y"
    {
	current_program->global_handler[COB_OPEN_I_O].handler_label = current_section;
	current_program->global_handler[COB_OPEN_I_O].handler_prog = current_program;
  ;}
    break;

  case 1346:
#line 9099 "parser.y"
    {
	current_program->global_handler[COB_OPEN_EXTEND].handler_label = current_section;
	current_program->global_handler[COB_OPEN_EXTEND].handler_prog = current_program;
  ;}
    break;

  case 1347:
#line 9107 "parser.y"
    {
	cb_tree		plabel;
	char		name[64];

	if (!in_declaratives) {
		cb_error (_("USE statement must be within DECLARATIVES"));
	} else if (current_program->nested_level) {
		cb_error (_("USE DEBUGGING not supported in contained program"));
	} else {
		in_debugging = 1;
		current_section->flag_begin = 1;
		current_section->flag_return = 1;
		current_section->flag_declarative_exit = 1;
		current_section->flag_real_label = 0;
		current_section->flag_is_debug_sect = 1;
		if (!needs_debug_item) {
			needs_debug_item = 1;
			cb_build_debug_item ();
		}
		if (!current_program->flag_debugging) {
			skip_statements = 1;
			current_section->flag_skip_label = 1;
		} else {
			current_program->flag_gen_debug = 1;
			sprintf (name, "EXIT SECTION %d", cb_id);
			plabel = cb_build_reference (name);
			plabel = cb_build_label (plabel, NULL);
			CB_LABEL (plabel)->flag_begin = 1;
			CB_LABEL (plabel)->flag_dummy_exit = 1;
			current_section->exit_label = plabel;
			emit_statement (cb_build_comment ("USE FOR DEBUGGING"));
		}
	}
  ;}
    break;

  case 1350:
#line 9150 "parser.y"
    {
	cb_tree		l;
	cb_tree		x;
	cb_tree		z;

	if (current_program->flag_debugging) {
		CB_REFERENCE ((yyvsp[(1) - (1)]))->debug_section = current_section;
		CB_REFERENCE ((yyvsp[(1) - (1)]))->flag_debug_code = 1;
		CB_REFERENCE ((yyvsp[(1) - (1)]))->flag_all_debug = 0;
		z = CB_LIST_INIT ((yyvsp[(1) - (1)]));
		current_program->debug_list =
			cb_list_append (current_program->debug_list, z);
		/* Check backward refs to file/data names */
		/* Label refs will be checked later (forward/backward ref) */
		if (CB_WORD_COUNT ((yyvsp[(1) - (1)])) > 0) {
			l = CB_VALUE(CB_WORD_ITEMS ((yyvsp[(1) - (1)])));
			switch (CB_TREE_TAG (l)) {
			case CB_TAG_FILE:
				CB_FILE (l)->debug_section = current_section;
				CB_FILE (l)->flag_fl_debug = 1;
				break;
			case CB_TAG_FIELD:
				{
					x = cb_ref((yyvsp[(1) - (1)]));
					if(CB_INVALID_TREE(x)) {
						break;
					}
					needs_field_debug = 1;
					CB_FIELD(x)->debug_section = current_section;
					CB_FIELD(x)->flag_field_debug = 1;
					CB_PURPOSE(z) = x;
					break;
				}
			default:
				break;
			}
		}
	}
  ;}
    break;

  case 1351:
#line 9190 "parser.y"
    {
	if (current_program->flag_debugging) {
		if (current_program->all_procedure) {
			cb_error (_("Duplicate USE DEBUGGING ON ALL PROCEDURES"));
		} else {
			current_program->all_procedure = current_section;
		}
	}
  ;}
    break;

  case 1352:
#line 9200 "parser.y"
    {
	cb_tree		x;

	if (current_program->flag_debugging) {
		/* Reference must be a data item */
		x = cb_ref ((yyvsp[(3) - (3)]));
		if (CB_INVALID_TREE (x) || !CB_FIELD_P (x)) {
			cb_error (_("Invalid target for DEBUGGING ALL"));
		} else {
			needs_field_debug = 1;
			CB_FIELD (x)->debug_section = current_section;
			CB_FIELD (x)->flag_field_debug = 1;
			CB_FIELD (x)->flag_all_debug = 1;
			CB_REFERENCE ((yyvsp[(3) - (3)]))->debug_section = current_section;
			CB_REFERENCE ((yyvsp[(3) - (3)]))->flag_debug_code = 1;
			CB_REFERENCE ((yyvsp[(3) - (3)]))->flag_all_debug = 1;
			CB_CHAIN_PAIR (current_program->debug_list, x, (yyvsp[(3) - (3)]));
		}
	}
  ;}
    break;

  case 1357:
#line 9230 "parser.y"
    {
	char wrk[80];
	cb_tree x;
	struct cb_field		*f;
	struct cb_report	*r;

	x = cb_ref ((yyvsp[(4) - (4)]));
	if (!CB_FIELD_P (x)) {
		cb_error_x ((yyvsp[(4) - (4)]), _("'%s' is not a report group"), CB_NAME ((yyvsp[(4) - (4)])));
		(yyval) = cb_error_node;
	} else {
		control_field = f = CB_FIELD (x);
		f->report_decl_id = current_section->id;
		if((r = f->report) != NULL) {
			r->has_declarative = 1;
		}
	}
	sprintf(wrk,"USE BEFORE REPORTING %s is l_%d",cb_name((yyvsp[(4) - (4)])),current_section->id);
	current_section->flag_real_label = 1;
	current_section->flag_declaratives = 1;
	current_section->flag_begin = 1;
	current_section->flag_return = 1;
	current_section->flag_declarative_exit = 1;
	current_section->flag_real_label = 1;
	current_section->flag_skip_label = 0;
	emit_statement (cb_build_comment (strdup(wrk)));
  ;}
    break;

  case 1358:
#line 9261 "parser.y"
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE AFTER EXCEPTION CONDITION"));
	PENDING ("USE AFTER EXCEPTION CONDITION");
  ;}
    break;

  case 1361:
#line 9277 "parser.y"
    {
	begin_statement ("WRITE", TERM_WRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  ;}
    break;

  case 1363:
#line 9289 "parser.y"
    {
	if (CB_VALID_TREE ((yyvsp[(1) - (5)]))) {
		cb_emit_write ((yyvsp[(1) - (5)]), (yyvsp[(2) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]));
	}
	start_debug = save_debug;
  ;}
    break;

  case 1364:
#line 9298 "parser.y"
    { (yyval) = NULL; ;}
    break;

  case 1365:
#line 9299 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); ;}
    break;

  case 1366:
#line 9304 "parser.y"
    {
	(yyval) = cb_int0;
  ;}
    break;

  case 1367:
#line 9308 "parser.y"
    {
	(yyval) = cb_build_write_advancing_lines ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
  ;}
    break;

  case 1368:
#line 9312 "parser.y"
    {
	(yyval) = cb_build_write_advancing_mnemonic ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  ;}
    break;

  case 1369:
#line 9316 "parser.y"
    {
	(yyval) = cb_build_write_advancing_page ((yyvsp[(1) - (3)]));
  ;}
    break;

  case 1370:
#line 9322 "parser.y"
    { (yyval) = CB_BEFORE; ;}
    break;

  case 1371:
#line 9323 "parser.y"
    { (yyval) = CB_AFTER; ;}
    break;

  case 1374:
#line 9333 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), WRITE);
  ;}
    break;

  case 1375:
#line 9337 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), WRITE);
  ;}
    break;

  case 1378:
#line 9354 "parser.y"
    {
	current_statement->handler_id = COB_EC_IMP_ACCEPT;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  ;}
    break;

  case 1380:
#line 9364 "parser.y"
    {
	current_statement->handler_id = COB_EC_IMP_ACCEPT;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  ;}
    break;

  case 1383:
#line 9377 "parser.y"
    {
	current_statement->handler_id = COB_EC_IMP_DISPLAY;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  ;}
    break;

  case 1385:
#line 9387 "parser.y"
    {
	current_statement->handler_id = COB_EC_IMP_DISPLAY;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  ;}
    break;

  case 1388:
#line 9402 "parser.y"
    {
	current_statement->handler_id = COB_EC_SIZE;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  ;}
    break;

  case 1390:
#line 9412 "parser.y"
    {
	current_statement->handler_id = COB_EC_SIZE;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  ;}
    break;

  case 1393:
#line 9429 "parser.y"
    {
	current_statement->handler_id = COB_EC_OVERFLOW;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  ;}
    break;

  case 1395:
#line 9440 "parser.y"
    {
	current_statement->handler_id = COB_EC_OVERFLOW;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  ;}
    break;

  case 1401:
#line 9463 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_AT_END;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  ;}
    break;

  case 1402:
#line 9472 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_AT_END;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  ;}
    break;

  case 1406:
#line 9489 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_EOP;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  ;}
    break;

  case 1407:
#line 9498 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_EOP;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  ;}
    break;

  case 1410:
#line 9515 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_INVALID_KEY;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  ;}
    break;

  case 1412:
#line 9525 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_INVALID_KEY;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  ;}
    break;

  case 1413:
#line 9535 "parser.y"
    {
	(yyval) = cb_one;
  ;}
    break;

  case 1414:
#line 9539 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
  ;}
    break;

  case 1415:
#line 9549 "parser.y"
    {
	(yyval) = cb_build_cond ((yyvsp[(1) - (1)]));
  ;}
    break;

  case 1416:
#line 9556 "parser.y"
    {
	(yyval) = cb_build_expr ((yyvsp[(1) - (1)]));
  ;}
    break;

  case 1417:
#line 9562 "parser.y"
    {
	current_expr = NULL;
  ;}
    break;

  case 1418:
#line 9566 "parser.y"
    {
	(yyval) = cb_list_reverse (current_expr);
  ;}
    break;

  case 1422:
#line 9579 "parser.y"
    {
	if (CB_REFERENCE_P ((yyvsp[(1) - (1)])) && CB_CLASS_NAME_P (cb_ref ((yyvsp[(1) - (1)])))) {
		push_expr ('C', (yyvsp[(1) - (1)]));
	} else {
		push_expr ('x', (yyvsp[(1) - (1)]));
	}
  ;}
    break;

  case 1423:
#line 9587 "parser.y"
    { push_expr ('(', NULL); ;}
    break;

  case 1424:
#line 9588 "parser.y"
    { push_expr (')', NULL); ;}
    break;

  case 1425:
#line 9590 "parser.y"
    { push_expr ('+', NULL); ;}
    break;

  case 1426:
#line 9591 "parser.y"
    { push_expr ('-', NULL); ;}
    break;

  case 1427:
#line 9592 "parser.y"
    { push_expr ('*', NULL); ;}
    break;

  case 1428:
#line 9593 "parser.y"
    { push_expr ('/', NULL); ;}
    break;

  case 1429:
#line 9594 "parser.y"
    { push_expr ('^', NULL); ;}
    break;

  case 1430:
#line 9596 "parser.y"
    { push_expr ('=', NULL); ;}
    break;

  case 1431:
#line 9597 "parser.y"
    { push_expr ('>', NULL); ;}
    break;

  case 1432:
#line 9598 "parser.y"
    { push_expr ('<', NULL); ;}
    break;

  case 1433:
#line 9599 "parser.y"
    { push_expr (']', NULL); ;}
    break;

  case 1434:
#line 9600 "parser.y"
    { push_expr ('[', NULL); ;}
    break;

  case 1435:
#line 9601 "parser.y"
    { push_expr ('~', NULL); ;}
    break;

  case 1436:
#line 9603 "parser.y"
    { push_expr ('!', NULL); ;}
    break;

  case 1437:
#line 9604 "parser.y"
    { push_expr ('&', NULL); ;}
    break;

  case 1438:
#line 9605 "parser.y"
    { push_expr ('|', NULL); ;}
    break;

  case 1439:
#line 9607 "parser.y"
    { push_expr ('O', NULL); ;}
    break;

  case 1440:
#line 9608 "parser.y"
    { push_expr ('9', NULL); ;}
    break;

  case 1441:
#line 9609 "parser.y"
    { push_expr ('A', NULL); ;}
    break;

  case 1442:
#line 9610 "parser.y"
    { push_expr ('L', NULL); ;}
    break;

  case 1443:
#line 9611 "parser.y"
    { push_expr ('U', NULL); ;}
    break;

  case 1444:
#line 9614 "parser.y"
    { push_expr ('P', NULL); ;}
    break;

  case 1445:
#line 9615 "parser.y"
    { push_expr ('N', NULL); ;}
    break;

  case 1454:
#line 9645 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  ;}
    break;

  case 1455:
#line 9649 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  ;}
    break;

  case 1459:
#line 9660 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '+', (yyvsp[(3) - (3)])); ;}
    break;

  case 1460:
#line 9661 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '-', (yyvsp[(3) - (3)])); ;}
    break;

  case 1461:
#line 9662 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 1462:
#line 9666 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '*', (yyvsp[(3) - (3)])); ;}
    break;

  case 1463:
#line 9667 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '/', (yyvsp[(3) - (3)])); ;}
    break;

  case 1464:
#line 9668 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 1465:
#line 9673 "parser.y"
    {
	(yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '^', (yyvsp[(3) - (3)]));
  ;}
    break;

  case 1466:
#line 9676 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 1467:
#line 9680 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); ;}
    break;

  case 1468:
#line 9681 "parser.y"
    { (yyval) = cb_build_binary_op (cb_zero, '-', (yyvsp[(2) - (2)])); ;}
    break;

  case 1469:
#line 9682 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 1470:
#line 9685 "parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); ;}
    break;

  case 1471:
#line 9686 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 1472:
#line 9697 "parser.y"
    {
	if (current_linage > 1) {
		cb_error (_("LINAGE-COUNTER must be qualified here"));
		(yyval) = cb_error_node;
	} else if (current_linage == 0) {
		cb_error (_("Invalid LINAGE-COUNTER usage"));
		(yyval) = cb_error_node;
	} else {
		(yyval) = linage_file->linage_ctr;
	}
  ;}
    break;

  case 1473:
#line 9709 "parser.y"
    {
	if (CB_FILE_P (cb_ref ((yyvsp[(3) - (3)])))) {
		(yyval) = CB_FILE (cb_ref ((yyvsp[(3) - (3)])))->linage_ctr;
	} else {
		cb_error_x ((yyvsp[(3) - (3)]), _("'%s' is not a file name"), CB_NAME ((yyvsp[(3) - (3)])));
		(yyval) = cb_error_node;
	}
  ;}
    break;

  case 1474:
#line 9718 "parser.y"
    {
	  if (report_count > 1
	  && current_report != NULL) {
		(yyval) = current_report->line_counter;
	  } else
	if (report_count > 1) {
		cb_error (_("LINE-COUNTER must be qualified here"));
		(yyval) = cb_error_node;
	} else if (report_count == 0) {
		cb_error (_("Invalid LINE-COUNTER usage"));
		(yyval) = cb_error_node;
	} else {
		(yyval) = report_instance->line_counter;
	}
  ;}
    break;

  case 1475:
#line 9734 "parser.y"
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[(3) - (3)])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[(3) - (3)])))->line_counter;
	} else {
		cb_error_x ((yyvsp[(3) - (3)]), _("'%s' is not a report name"), CB_NAME ((yyvsp[(3) - (3)])));
		(yyval) = cb_error_node;
	}
  ;}
    break;

  case 1476:
#line 9743 "parser.y"
    {
	  if (report_count > 1
	  && current_report != NULL) {
		(yyval) = current_report->page_counter;
	  } else
	if (report_count > 1) {
		cb_error (_("PAGE-COUNTER must be qualified here"));
		(yyval) = cb_error_node;
	} else if (report_count == 0) {
		cb_error (_("Invalid PAGE-COUNTER usage"));
		(yyval) = cb_error_node;
	} else {
		(yyval) = report_instance->page_counter;
	}
  ;}
    break;

  case 1477:
#line 9759 "parser.y"
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[(3) - (3)])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[(3) - (3)])))->page_counter;
	} else {
		cb_error_x ((yyvsp[(3) - (3)]), _("'%s' is not a report name"), CB_NAME ((yyvsp[(3) - (3)])));
		(yyval) = cb_error_node;
	}
  ;}
    break;

  case 1478:
#line 9773 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 1479:
#line 9775 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); ;}
    break;

  case 1480:
#line 9780 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
  ;}
    break;

  case 1481:
#line 9788 "parser.y"
    { cb_build_identifier ((yyvsp[(1) - (1)]), 0); ;}
    break;

  case 1482:
#line 9795 "parser.y"
    {
	cb_tree x;

	x = cb_ref ((yyvsp[(1) - (1)]));
	if (!CB_FIELD_P (x)) {
		(yyval) = cb_error_node;
	} else if (!CB_FIELD (x)->index_list) {
		cb_error_x ((yyvsp[(1) - (1)]), _("'%s' not indexed"), cb_name ((yyvsp[(1) - (1)])));
		cb_error_x (x, _("'%s' defined here"), cb_name (x));
		(yyval) = cb_error_node;
	} else {
		(yyval) = (yyvsp[(1) - (1)]);
	}
  ;}
    break;

  case 1483:
#line 9815 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  ;}
    break;

  case 1484:
#line 9819 "parser.y"
    {
	cb_tree		l;

	if (CB_VALID_TREE ((yyvsp[(2) - (2)]))) {
		for (l = (yyvsp[(1) - (2)]); l; l = CB_CHAIN (l)) {
			if (CB_VALID_TREE (CB_VALUE (l)) &&
			    !strcasecmp (CB_NAME ((yyvsp[(2) - (2)])), CB_NAME (CB_VALUE (l)))) {
				cb_error_x ((yyvsp[(2) - (2)]), _("Multiple reference to '%s' "),
					    CB_NAME ((yyvsp[(2) - (2)])));
				break;
			}
		}
		if (!l) {
			(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
		}
	}
  ;}
    break;

  case 1485:
#line 9840 "parser.y"
    {
	if (CB_FILE_P (cb_ref ((yyvsp[(1) - (1)])))) {
		(yyval) = (yyvsp[(1) - (1)]);
	} else {
		cb_error_x ((yyvsp[(1) - (1)]), _("'%s' is not a file name"), CB_NAME ((yyvsp[(1) - (1)])));
		(yyval) = cb_error_node;
	}
  ;}
    break;

  case 1486:
#line 9881 "parser.y"
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[(1) - (1)])))) {
		(yyval) = (yyvsp[(1) - (1)]);
	} else {
		cb_error (_("'%s' is not a valid report name"), CB_NAME ((yyvsp[(1) - (1)])));
		(yyval) = cb_error_node;
	}
  ;}
    break;

  case 1487:
#line 9894 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); ;}
    break;

  case 1488:
#line 9896 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); ;}
    break;

  case 1489:
#line 9900 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 1490:
#line 9906 "parser.y"
    { (yyval) = NULL; ;}
    break;

  case 1491:
#line 9908 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); ;}
    break;

  case 1492:
#line 9913 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_REFERENCE ((yyval))->offset = CB_TREE (current_section);
	CB_REFERENCE ((yyval))->flag_in_decl = !!in_declaratives;
	CB_REFERENCE ((yyval))->section = current_section;
	CB_REFERENCE ((yyval))->paragraph = current_paragraph;
	CB_ADD_TO_CHAIN ((yyval), current_program->label_list);
  ;}
    break;

  case 1495:
#line 9927 "parser.y"
    {
	CB_REFERENCE ((yyvsp[(1) - (3)]))->chain = (yyvsp[(3) - (3)]);
  ;}
    break;

  case 1496:
#line 9934 "parser.y"
    {
	(yyval) = cb_build_reference ((char *)(CB_LITERAL ((yyvsp[(1) - (1)]))->data));
	(yyval)->source_file = (yyvsp[(1) - (1)])->source_file;
	(yyval)->source_line = (yyvsp[(1) - (1)])->source_line;
  ;}
    break;

  case 1497:
#line 9944 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); ;}
    break;

  case 1498:
#line 9945 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); ;}
    break;

  case 1499:
#line 9950 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  ;}
    break;

  case 1500:
#line 9958 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  ;}
    break;

  case 1501:
#line 9966 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  ;}
    break;

  case 1502:
#line 9970 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  ;}
    break;

  case 1503:
#line 9977 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_REFERENCE((yyval))->flag_optional = 1;
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  ;}
    break;

  case 1506:
#line 9993 "parser.y"
    {
	if (CB_WORD_COUNT ((yyvsp[(1) - (1)])) > 0) {
		redefinition_error ((yyvsp[(1) - (1)]));
		(yyval) = cb_error_node;
	} else {
		(yyval) = (yyvsp[(1) - (1)]);
	}
  ;}
    break;

  case 1507:
#line 10007 "parser.y"
    {
	if (CB_REFERENCE ((yyvsp[(1) - (1)]))->flag_duped || CB_WORD_COUNT ((yyvsp[(1) - (1)])) > 0) {
		redefinition_error ((yyvsp[(1) - (1)]));
		(yyval) = NULL;
	} else {
		CB_WORD_COUNT ((yyvsp[(1) - (1)]))++;
		(yyval) = (yyvsp[(1) - (1)]);
	}
  ;}
    break;

  case 1508:
#line 10024 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  ;}
    break;

  case 1509:
#line 10028 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  ;}
    break;

  case 1512:
#line 10037 "parser.y"
    {
	(yyval) = cb_build_address ((yyvsp[(3) - (3)]));
  ;}
    break;

  case 1513:
#line 10044 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  ;}
    break;

  case 1514:
#line 10048 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  ;}
    break;

  case 1519:
#line 10059 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  ;}
    break;

  case 1520:
#line 10063 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  ;}
    break;

  case 1521:
#line 10067 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  ;}
    break;

  case 1522:
#line 10071 "parser.y"
    {
	(yyval) = cb_build_ppointer ((yyvsp[(4) - (4)]));
  ;}
    break;

  case 1523:
#line 10075 "parser.y"
    {
	(yyval) = cb_build_address ((yyvsp[(3) - (3)]));
  ;}
    break;

  case 1524:
#line 10079 "parser.y"
    {
	cb_tree		x;
	cb_tree		switch_id;

	x = cb_ref ((yyvsp[(1) - (1)]));
	if (CB_VALID_TREE (x)) {
		if (CB_SYSTEM_NAME (x)->category != CB_SWITCH_NAME) {
			cb_error_x (x, _("Invalid mnemonic identifier"));
			(yyval) = cb_error_node;
		} else {
			switch_id = cb_int (CB_SYSTEM_NAME (x)->token);
			(yyval) = CB_BUILD_FUNCALL_1 ("cob_switch_value", switch_id);
		}
	} else {
		(yyval) = cb_error_node;
	}
  ;}
    break;

  case 1525:
#line 10100 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  ;}
    break;

  case 1526:
#line 10104 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  ;}
    break;

  case 1534:
#line 10121 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  ;}
    break;

  case 1535:
#line 10125 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  ;}
    break;

  case 1536:
#line 10129 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  ;}
    break;

  case 1552:
#line 10176 "parser.y"
    {
	(yyval) = cb_zero;
  ;}
    break;

  case 1560:
#line 10200 "parser.y"
    { (yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0); ;}
    break;

  case 1561:
#line 10204 "parser.y"
    { (yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 1); ;}
    break;

  case 1562:
#line 10208 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 1563:
#line 10209 "parser.y"
    { (yyval) = (yyvsp[(1) - (2)]); ;}
    break;

  case 1564:
#line 10213 "parser.y"
    { (yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0); ;}
    break;

  case 1565:
#line 10218 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (3)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (3)]));
	}
  ;}
    break;

  case 1566:
#line 10225 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (2)]));
	}
  ;}
    break;

  case 1567:
#line 10232 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (2)]));
	}
  ;}
    break;

  case 1568:
#line 10239 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (1)]));
	}
  ;}
    break;

  case 1569:
#line 10249 "parser.y"
    {
	(yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0);
  ;}
    break;

  case 1570:
#line 10253 "parser.y"
    {
	(yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0);
  ;}
    break;

  case 1571:
#line 10260 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (3)]);
	if (CB_REFERENCE_P ((yyvsp[(1) - (3)]))) {
		CB_REFERENCE ((yyvsp[(1) - (3)]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (3)]));
	}
  ;}
    break;

  case 1572:
#line 10270 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
	if (CB_REFERENCE_P ((yyvsp[(1) - (2)]))) {
		CB_REFERENCE ((yyvsp[(1) - (2)]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (2)]));
	}
  ;}
    break;

  case 1573:
#line 10280 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
	if (CB_REFERENCE_P ((yyvsp[(1) - (2)]))) {
		CB_REFERENCE ((yyvsp[(1) - (2)]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (2)]));
	}
  ;}
    break;

  case 1574:
#line 10290 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	if (CB_REFERENCE_P ((yyvsp[(1) - (1)]))) {
		CB_REFERENCE ((yyvsp[(1) - (1)]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (1)]));
	}
  ;}
    break;

  case 1575:
#line 10303 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  ;}
    break;

  case 1576:
#line 10307 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (3)]);
	CB_REFERENCE ((yyvsp[(1) - (3)]))->chain = (yyvsp[(3) - (3)]);
  ;}
    break;

  case 1577:
#line 10315 "parser.y"
    {
	(yyval) = (yyvsp[(0) - (3)]);
	CB_REFERENCE ((yyvsp[(0) - (3)]))->subs = cb_list_reverse ((yyvsp[(2) - (3)]));
  ;}
    break;

  case 1578:
#line 10323 "parser.y"
    {
	CB_REFERENCE ((yyvsp[(0) - (4)]))->offset = (yyvsp[(2) - (4)]);
  ;}
    break;

  case 1579:
#line 10327 "parser.y"
    {
	CB_REFERENCE ((yyvsp[(0) - (5)]))->offset = (yyvsp[(2) - (5)]);
	CB_REFERENCE ((yyvsp[(0) - (5)]))->length = (yyvsp[(4) - (5)]);
  ;}
    break;

  case 1580:
#line 10337 "parser.y"
    {
	if (cb_tree_category ((yyvsp[(1) - (1)])) != CB_CATEGORY_NUMERIC) {
		cb_error (_("Integer value expected"));
		(yyval) = cb_int1;
	} else if (CB_LITERAL ((yyvsp[(1) - (1)]))->sign < 0 || CB_LITERAL ((yyvsp[(1) - (1)]))->scale) {
		cb_error (_("Integer value expected"));
		(yyval) = cb_int1;
	} else {
		(yyval) = (yyvsp[(1) - (1)]);
	}
  ;}
    break;

  case 1581:
#line 10352 "parser.y"
    {
	int	n;

	if (cb_tree_category ((yyvsp[(1) - (1)])) != CB_CATEGORY_NUMERIC) {
		cb_error (_("Integer value expected"));
		(yyval) = cb_int1;
	} else if (CB_LITERAL ((yyvsp[(1) - (1)]))->sign || CB_LITERAL ((yyvsp[(1) - (1)]))->scale) {
		cb_error (_("Integer value expected"));
		(yyval) = cb_int1;
	} else {
		n = cb_get_int ((yyvsp[(1) - (1)]));
		if (n < 1 || n > 256) {
			cb_error (_("Invalid SYMBOLIC integer"));
			(yyval) = cb_int1;
		} else {
			(yyval) = (yyvsp[(1) - (1)]);
		}
	}
  ;}
    break;

  case 1582:
#line 10375 "parser.y"
    {
	int	n;

	if (cb_tree_category ((yyvsp[(1) - (1)])) != CB_CATEGORY_NUMERIC) {
		cb_error (_("Integer value expected"));
		(yyval) = cb_int1;
	} else if (CB_LITERAL ((yyvsp[(1) - (1)]))->sign < 0 || CB_LITERAL ((yyvsp[(1) - (1)]))->scale) {
		cb_error (_("Positive Integer value expected"));
		(yyval) = cb_int1;
	} else {
		n = cb_get_int ((yyvsp[(1) - (1)]));
		if (n < 0) {
			cb_error (_("Invalid integer"));
			(yyval) = cb_int1;
		} else {
			(yyval) = (yyvsp[(1) - (1)]);
		}
	}
  ;}
    break;

  case 1583:
#line 10395 "parser.y"
    {
	(yyval) = cb_int0;
  ;}
    break;

  case 1584:
#line 10402 "parser.y"
    {
	int	n;

	if (cb_tree_category ((yyvsp[(1) - (1)])) == CB_CATEGORY_NUMERIC) {
		if (CB_LITERAL ((yyvsp[(1) - (1)]))->sign || CB_LITERAL ((yyvsp[(1) - (1)]))->scale) {
			cb_error (_("Integer value expected"));
		} else {
			n = cb_get_int ((yyvsp[(1) - (1)]));
			if (n < 1 || n > 256) {
				cb_error (_("Invalid CLASS value"));
			}
		}
	}
	(yyval) = (yyvsp[(1) - (1)]);
  ;}
    break;

  case 1585:
#line 10417 "parser.y"
    { (yyval) = cb_space; ;}
    break;

  case 1586:
#line 10418 "parser.y"
    { (yyval) = cb_zero; ;}
    break;

  case 1587:
#line 10419 "parser.y"
    { (yyval) = cb_quote; ;}
    break;

  case 1588:
#line 10420 "parser.y"
    { (yyval) = cb_high; ;}
    break;

  case 1589:
#line 10421 "parser.y"
    { (yyval) = cb_low; ;}
    break;

  case 1590:
#line 10422 "parser.y"
    { (yyval) = cb_null; ;}
    break;

  case 1591:
#line 10427 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  ;}
    break;

  case 1592:
#line 10431 "parser.y"
    {
	struct cb_literal	*l;

	if (CB_LITERAL_P ((yyvsp[(2) - (2)]))) {
		/* We must not alter the original definition */
		l = cobc_parse_malloc (sizeof(struct cb_literal));
		*l = *(CB_LITERAL((yyvsp[(2) - (2)])));
		l->all = 1;
		(yyval) = CB_TREE (l);
	} else {
		(yyval) = (yyvsp[(2) - (2)]);
	}
  ;}
    break;

  case 1593:
#line 10448 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  ;}
    break;

  case 1594:
#line 10452 "parser.y"
    {
	(yyval) = cb_concat_literals ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  ;}
    break;

  case 1595:
#line 10458 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 1596:
#line 10459 "parser.y"
    { (yyval) = cb_space; ;}
    break;

  case 1597:
#line 10460 "parser.y"
    { (yyval) = cb_zero; ;}
    break;

  case 1598:
#line 10461 "parser.y"
    { (yyval) = cb_quote; ;}
    break;

  case 1599:
#line 10462 "parser.y"
    { (yyval) = cb_high; ;}
    break;

  case 1600:
#line 10463 "parser.y"
    { (yyval) = cb_low; ;}
    break;

  case 1601:
#line 10464 "parser.y"
    { (yyval) = cb_null; ;}
    break;

  case 1602:
#line 10471 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (2)]), NULL, (yyvsp[(2) - (2)]), 0);
  ;}
    break;

  case 1603:
#line 10475 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), CB_LIST_INIT ((yyvsp[(3) - (5)])), (yyvsp[(5) - (5)]), 0);
  ;}
    break;

  case 1604:
#line 10479 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  ;}
    break;

  case 1605:
#line 10483 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  ;}
    break;

  case 1606:
#line 10487 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]), NULL, 0);
  ;}
    break;

  case 1607:
#line 10491 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  ;}
    break;

  case 1608:
#line 10495 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  ;}
    break;

  case 1609:
#line 10499 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  ;}
    break;

  case 1610:
#line 10503 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), NULL, 0);
  ;}
    break;

  case 1611:
#line 10507 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), NULL, 1);
  ;}
    break;

  case 1620:
#line 10531 "parser.y"
    {
	(yyval) = NULL;
  ;}
    break;

  case 1621:
#line 10535 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (4)]), NULL);
  ;}
    break;

  case 1622:
#line 10539 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));
  ;}
    break;

  case 1623:
#line 10546 "parser.y"
    {
	(yyval) = NULL;
  ;}
    break;

  case 1624:
#line 10550 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (3)]);
  ;}
    break;

  case 1625:
#line 10554 "parser.y"
    {
	(yyval) = NULL;
  ;}
    break;

  case 1626:
#line 10561 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	(yyval) = cb_list_add (x, cb_int0);
  ;}
    break;

  case 1627:
#line 10568 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, cb_int1);
  ;}
    break;

  case 1628:
#line 10575 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, cb_int2);
  ;}
    break;

  case 1629:
#line 10585 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	(yyval) = cb_list_add (x, cb_null);
  ;}
    break;

  case 1630:
#line 10592 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, (yyvsp[(3) - (3)]));
  ;}
    break;

  case 1631:
#line 10602 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	(yyval) = cb_list_add (x, cb_null);
  ;}
    break;

  case 1632:
#line 10609 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, cb_ref ((yyvsp[(3) - (3)])));
  ;}
    break;

  case 1633:
#line 10620 "parser.y"
    {
	non_const_word = 1;
  ;}
    break;

  case 1634:
#line 10628 "parser.y"
    { (yyval) = cb_int0; ;}
    break;

  case 1635:
#line 10629 "parser.y"
    { (yyval) = cb_int1; ;}
    break;

  case 1636:
#line 10633 "parser.y"
    { (yyval) = cb_int0; ;}
    break;

  case 1637:
#line 10634 "parser.y"
    { (yyval) = cb_int1; ;}
    break;

  case 1638:
#line 10638 "parser.y"
    { (yyval) = NULL; ;}
    break;

  case 1639:
#line 10639 "parser.y"
    { (yyval) = cb_int1; ;}
    break;

  case 1640:
#line 10644 "parser.y"
    {
	(yyval) = NULL;
  ;}
    break;

  case 1641:
#line 10648 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  ;}
    break;

  case 1642:
#line 10655 "parser.y"
    {
	(yyval) = NULL;
  ;}
    break;

  case 1643:
#line 10659 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  ;}
    break;

  case 1644:
#line 10666 "parser.y"
    { (yyval) = cb_int0; ;}
    break;

  case 1645:
#line 10667 "parser.y"
    { (yyval) = cb_int1; ;}
    break;

  case 1646:
#line 10668 "parser.y"
    { (yyval) = cb_int2; ;}
    break;

  case 1647:
#line 10672 "parser.y"
    { (yyval) = NULL; ;}
    break;

  case 1648:
#line 10673 "parser.y"
    { (yyval) = cb_true; ;}
    break;

  case 1649:
#line 10677 "parser.y"
    { (yyval) = cb_int (cb_flag_optional_file); ;}
    break;

  case 1650:
#line 10678 "parser.y"
    { (yyval) = cb_int1; ;}
    break;

  case 1651:
#line 10679 "parser.y"
    { (yyval) = cb_int0; ;}
    break;

  case 1652:
#line 10684 "parser.y"
    {
	(yyval) = cb_int0;
  ;}
    break;

  case 1653:
#line 10688 "parser.y"
    {
	if ((yyvsp[(2) - (2)])) {
		(yyval) = (yyvsp[(2) - (2)]);
	} else {
		(yyval) = cb_int (COB_STORE_ROUND);
	}
	cobc_cs_check = 0;
  ;}
    break;

  case 1654:
#line 10700 "parser.y"
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  ;}
    break;

  case 1655:
#line 10705 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
	cobc_cs_check = 0;
  ;}
    break;

  case 1656:
#line 10713 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_AWAY_FROM_ZERO);
  ;}
    break;

  case 1657:
#line 10717 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_AWAY_FROM_ZERO);
  ;}
    break;

  case 1658:
#line 10721 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_EVEN);
  ;}
    break;

  case 1659:
#line 10725 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_TOWARD_ZERO);
  ;}
    break;

  case 1660:
#line 10729 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_PROHIBITED);
  ;}
    break;

  case 1661:
#line 10733 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_GREATER);
  ;}
    break;

  case 1662:
#line 10737 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_LESSER);
  ;}
    break;

  case 1663:
#line 10741 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TRUNCATION);
  ;}
    break;

  case 1664:
#line 10747 "parser.y"
    { (yyval) = NULL; ;}
    break;

  case 1665:
#line 10748 "parser.y"
    { (yyval) = cb_int1; ;}
    break;


/* Line 1267 of yacc.c.  */
#line 17245 "parser.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 10918 "parser.y"


