/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
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

# if 0 /* activate only for debugging purposes for attribs */
static
void printBits(unsigned int num){
	unsigned int size = sizeof(unsigned int);
	unsigned int maxPow = 1<<(size*8-1);
	int i=0;

	for(;i<size*8;++i){
		// print last bit and shift left.
		fprintf(stderr, "%u ",num&maxPow ? 1 : 0);
		num = num<<1;
	}
	fprintf(stderr, "\n");
}
#endif

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
		cobc_free (cobc_glob_line);
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
	       cb_tree timeout, cb_tree prompt, int attrib)
{
	/* Attach attribute to current_statement */
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
	current_statement->attr_ptr->dispattrs |= attrib;
}

static void
remove_attrib (int attrib)
{
	/* Remove attribute from current_statement */
	if (!current_statement->attr_ptr) {
		return;
	}
	current_statement->attr_ptr->dispattrs ^= attrib;
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



/* Line 268 of yacc.c  */
#line 794 "parser.c"

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
     CAPACITY = 308,
     CF = 309,
     CH = 310,
     CHAINING = 311,
     CHARACTER = 312,
     CHARACTERS = 313,
     CLASS = 314,
     CLASSIFICATION = 315,
     CLOSE = 316,
     CODE = 317,
     CODE_SET = 318,
     COLLATING = 319,
     COL = 320,
     COLS = 321,
     COLUMN = 322,
     COLUMNS = 323,
     COMMA = 324,
     COMMAND_LINE = 325,
     COMMA_DELIM = 326,
     COMMIT = 327,
     COMMON = 328,
     COMP = 329,
     COMPUTE = 330,
     COMP_1 = 331,
     COMP_2 = 332,
     COMP_3 = 333,
     COMP_4 = 334,
     COMP_5 = 335,
     COMP_6 = 336,
     COMP_X = 337,
     CONCATENATE_FUNC = 338,
     CONDITION = 339,
     CONFIGURATION = 340,
     CONSTANT = 341,
     CONTAINS = 342,
     CONTENT = 343,
     CONTINUE = 344,
     CONTROL = 345,
     CONTROLS = 346,
     CONVERSION = 347,
     CONVERTING = 348,
     COPY = 349,
     CORRESPONDING = 350,
     COUNT = 351,
     CRT = 352,
     CRT_UNDER = 353,
     CURRENCY = 354,
     CURRENT_DATE_FUNC = 355,
     CURSOR = 356,
     CYCLE = 357,
     DATA = 358,
     DATE = 359,
     DAY = 360,
     DAY_OF_WEEK = 361,
     DE = 362,
     DEBUGGING = 363,
     DECIMAL_POINT = 364,
     DECLARATIVES = 365,
     DEFAULT = 366,
     DELETE = 367,
     DELIMITED = 368,
     DELIMITER = 369,
     DEPENDING = 370,
     DESCENDING = 371,
     DETAIL = 372,
     DISC = 373,
     DISK = 374,
     DISPLAY = 375,
     DISPLAY_OF_FUNC = 376,
     DIVIDE = 377,
     DIVISION = 378,
     DOWN = 379,
     DUPLICATES = 380,
     DYNAMIC = 381,
     EBCDIC = 382,
     EC = 383,
     ELSE = 384,
     END = 385,
     END_ACCEPT = 386,
     END_ADD = 387,
     END_CALL = 388,
     END_COMPUTE = 389,
     END_DELETE = 390,
     END_DISPLAY = 391,
     END_DIVIDE = 392,
     END_EVALUATE = 393,
     END_FUNCTION = 394,
     END_IF = 395,
     END_MULTIPLY = 396,
     END_PERFORM = 397,
     END_PROGRAM = 398,
     END_READ = 399,
     END_RETURN = 400,
     END_REWRITE = 401,
     END_SEARCH = 402,
     END_START = 403,
     END_STRING = 404,
     END_SUBTRACT = 405,
     END_UNSTRING = 406,
     END_WRITE = 407,
     ENTRY = 408,
     ENVIRONMENT = 409,
     ENVIRONMENT_NAME = 410,
     ENVIRONMENT_VALUE = 411,
     EOL = 412,
     EOP = 413,
     EOS = 414,
     EQUAL = 415,
     ERASE = 416,
     ERROR = 417,
     ESCAPE = 418,
     EVALUATE = 419,
     EVENT_STATUS = 420,
     EXCEPTION = 421,
     EXCEPTION_CONDITION = 422,
     EXCLUSIVE = 423,
     EXIT = 424,
     EXPONENTIATION = 425,
     EXTEND = 426,
     EXTERNAL = 427,
     FD = 428,
     FILE_CONTROL = 429,
     FILE_ID = 430,
     FILLER = 431,
     FINAL = 432,
     FIRST = 433,
     FLOAT_BINARY_128 = 434,
     FLOAT_BINARY_32 = 435,
     FLOAT_BINARY_64 = 436,
     FLOAT_DECIMAL_16 = 437,
     FLOAT_DECIMAL_34 = 438,
     FLOAT_DECIMAL_7 = 439,
     FLOAT_EXTENDED = 440,
     FLOAT_LONG = 441,
     FLOAT_SHORT = 442,
     FOOTING = 443,
     FOR = 444,
     FOREGROUND_COLOR = 445,
     FOREVER = 446,
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
     TAB = 691,
     TALLYING = 692,
     TAPE = 693,
     TERMINATE = 694,
     TEST = 695,
     THAN = 696,
     THEN = 697,
     THRU = 698,
     TIME = 699,
     TIMEOUT = 700,
     TIMES = 701,
     TO = 702,
     TOK_AMPER = 703,
     TOK_CLOSE_PAREN = 704,
     TOK_COLON = 705,
     TOK_DIV = 706,
     TOK_DOT = 707,
     TOK_EQUAL = 708,
     TOK_FALSE = 709,
     TOK_FILE = 710,
     TOK_GREATER = 711,
     TOK_INITIAL = 712,
     TOK_LESS = 713,
     TOK_MINUS = 714,
     TOK_MUL = 715,
     TOK_NULL = 716,
     TOK_OVERFLOW = 717,
     TOK_OPEN_PAREN = 718,
     TOK_PLUS = 719,
     TOK_TRUE = 720,
     TOP = 721,
     TOWARD_GREATER = 722,
     TOWARD_LESSER = 723,
     TRAILING = 724,
     TRANSFORM = 725,
     TRIM_FUNC = 726,
     TRUNCATION = 727,
     TYPE = 728,
     UNDERLINE = 729,
     UNIT = 730,
     UNLOCK = 731,
     UNSIGNED = 732,
     UNSIGNED_INT = 733,
     UNSIGNED_LONG = 734,
     UNSIGNED_SHORT = 735,
     UNSTRING = 736,
     UNTIL = 737,
     UP = 738,
     UPDATE = 739,
     UPON = 740,
     UPON_ARGUMENT_NUMBER = 741,
     UPON_COMMAND_LINE = 742,
     UPON_ENVIRONMENT_NAME = 743,
     UPON_ENVIRONMENT_VALUE = 744,
     UPPER = 745,
     UPPER_CASE_FUNC = 746,
     USAGE = 747,
     USE = 748,
     USER = 749,
     USER_DEFAULT = 750,
     USER_FUNCTION_NAME = 751,
     USER_REPO_FUNCTION = 752,
     USING = 753,
     VALUE = 754,
     VARYING = 755,
     WAIT = 756,
     WHEN = 757,
     WHEN_COMPILED_FUNC = 758,
     WITH = 759,
     WORD = 760,
     WORDS = 761,
     WORKING_STORAGE = 762,
     WRITE = 763,
     YYYYDDD = 764,
     YYYYMMDD = 765,
     ZERO = 766,
     SHIFT_PREFER = 767
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 1349 "parser.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
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
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   8222

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  513
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  817
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1905
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2725

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   767

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
     505,   506,   507,   508,   509,   510,   511,   512
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
     376,   380,   382,   384,   386,   388,   390,   392,   394,   396,
     399,   400,   403,   407,   409,   412,   416,   418,   421,   423,
     426,   431,   433,   436,   438,   442,   447,   453,   454,   458,
     462,   468,   472,   477,   481,   485,   486,   490,   491,   494,
     495,   498,   499,   502,   503,   510,   514,   515,   518,   520,
     522,   524,   526,   528,   530,   532,   534,   536,   538,   540,
     542,   544,   550,   556,   562,   568,   574,   576,   578,   580,
     582,   583,   587,   588,   590,   592,   594,   596,   597,   599,
     601,   606,   608,   610,   612,   620,   621,   626,   630,   634,
     639,   640,   642,   644,   645,   651,   654,   657,   659,   660,
     665,   671,   674,   678,   680,   682,   686,   688,   691,   696,
     701,   706,   708,   712,   717,   722,   726,   728,   730,   734,
     737,   740,   743,   744,   747,   751,   753,   756,   758,   760,
     766,   767,   769,   771,   773,   774,   781,   783,   786,   789,
     790,   793,   794,   798,   799,   803,   804,   807,   810,   811,
     817,   821,   823,   825,   826,   829,   832,   835,   837,   839,
     841,   843,   845,   847,   849,   851,   853,   859,   860,   862,
     864,   869,   876,   886,   887,   891,   892,   895,   896,   899,
     903,   909,   915,   917,   919,   921,   923,   927,   933,   934,
     937,   939,   941,   943,   948,   951,   954,   959,   963,   966,
     969,   972,   974,   977,   978,   979,   985,   986,   987,   990,
     993,   997,  1000,  1002,  1003,  1008,  1012,  1015,  1016,  1018,
    1020,  1022,  1023,  1026,  1028,  1031,  1034,  1038,  1040,  1042,
    1044,  1046,  1048,  1050,  1052,  1054,  1056,  1058,  1060,  1062,
    1065,  1067,  1069,  1071,  1073,  1075,  1077,  1079,  1081,  1083,
    1089,  1092,  1095,  1096,  1099,  1101,  1103,  1105,  1107,  1109,
    1111,  1113,  1115,  1117,  1119,  1121,  1123,  1125,  1127,  1130,
    1134,  1135,  1138,  1141,  1143,  1145,  1149,  1151,  1153,  1155,
    1157,  1159,  1161,  1163,  1165,  1167,  1169,  1171,  1173,  1175,
    1177,  1179,  1181,  1183,  1185,  1187,  1189,  1192,  1195,  1198,
    1201,  1204,  1207,  1210,  1213,  1216,  1219,  1221,  1223,  1225,
    1227,  1229,  1231,  1233,  1235,  1237,  1239,  1243,  1247,  1254,
    1255,  1258,  1266,  1275,  1276,  1279,  1280,  1283,  1284,  1288,
    1289,  1293,  1294,  1296,  1298,  1299,  1305,  1307,  1309,  1310,
    1314,  1316,  1319,  1321,  1324,  1327,  1331,  1333,  1334,  1340,
    1342,  1345,  1347,  1351,  1352,  1357,  1360,  1365,  1368,  1371,
    1372,  1373,  1379,  1380,  1381,  1387,  1388,  1389,  1395,  1396,
    1399,  1400,  1407,  1408,  1411,  1414,  1417,  1421,  1423,  1425,
    1428,  1431,  1433,  1436,  1441,  1443,  1448,  1451,  1452,  1455,
    1457,  1459,  1461,  1463,  1465,  1469,  1474,  1479,  1484,  1488,
    1489,  1492,  1493,  1499,  1500,  1503,  1505,  1507,  1509,  1511,
    1513,  1515,  1517,  1519,  1521,  1523,  1525,  1527,  1529,  1531,
    1533,  1535,  1539,  1541,  1543,  1546,  1548,  1551,  1553,  1555,
    1556,  1559,  1562,  1563,  1566,  1571,  1576,  1577,  1581,  1583,
    1585,  1589,  1596,  1599,  1603,  1606,  1609,  1613,  1616,  1618,
    1621,  1624,  1626,  1628,  1630,  1633,  1636,  1638,  1643,  1646,
    1650,  1651,  1652,  1658,  1659,  1661,  1664,  1668,  1670,  1671,
    1676,  1680,  1681,  1684,  1687,  1690,  1692,  1694,  1697,  1700,
    1702,  1704,  1706,  1708,  1710,  1712,  1714,  1716,  1718,  1720,
    1725,  1727,  1729,  1735,  1741,  1745,  1749,  1751,  1753,  1755,
    1757,  1759,  1761,  1763,  1765,  1768,  1771,  1774,  1776,  1778,
    1780,  1782,  1783,  1785,  1787,  1788,  1790,  1792,  1796,  1799,
    1800,  1801,  1802,  1812,  1813,  1818,  1819,  1820,  1824,  1825,
    1829,  1831,  1834,  1839,  1840,  1843,  1846,  1847,  1851,  1855,
    1860,  1865,  1869,  1870,  1872,  1873,  1876,  1877,  1878,  1886,
    1887,  1890,  1892,  1894,  1897,  1899,  1901,  1902,  1909,  1910,
    1913,  1916,  1918,  1919,  1921,  1922,  1923,  1927,  1928,  1931,
    1934,  1936,  1938,  1940,  1942,  1944,  1946,  1948,  1950,  1952,
    1954,  1956,  1958,  1960,  1962,  1964,  1966,  1968,  1970,  1972,
    1974,  1976,  1978,  1980,  1982,  1984,  1986,  1988,  1990,  1992,
    1994,  1996,  1998,  2000,  2002,  2004,  2006,  2008,  2010,  2012,
    2014,  2016,  2018,  2020,  2022,  2024,  2026,  2028,  2030,  2032,
    2035,  2038,  2039,  2044,  2051,  2055,  2059,  2064,  2068,  2073,
    2077,  2081,  2086,  2091,  2095,  2100,  2104,  2109,  2115,  2119,
    2124,  2128,  2132,  2134,  2136,  2138,  2141,  2142,  2144,  2148,
    2152,  2155,  2158,  2161,  2165,  2169,  2173,  2174,  2176,  2177,
    2181,  2182,  2185,  2187,  2190,  2192,  2194,  2196,  2198,  2200,
    2202,  2204,  2206,  2208,  2210,  2212,  2214,  2219,  2221,  2223,
    2225,  2227,  2229,  2232,  2234,  2236,  2240,  2244,  2248,  2252,
    2256,  2258,  2260,  2261,  2263,  2264,  2269,  2274,  2280,  2287,
    2288,  2291,  2292,  2294,  2295,  2299,  2303,  2308,  2309,  2312,
    2313,  2317,  2319,  2322,  2327,  2328,  2331,  2332,  2337,  2344,
    2345,  2347,  2349,  2351,  2352,  2353,  2357,  2359,  2362,  2365,
    2369,  2370,  2373,  2376,  2379,  2380,  2384,  2387,  2392,  2394,
    2396,  2398,  2400,  2401,  2404,  2405,  2408,  2409,  2411,  2412,
    2416,  2418,  2421,  2422,  2426,  2429,  2433,  2434,  2436,  2440,
    2444,  2447,  2448,  2453,  2458,  2459,  2461,  2463,  2465,  2466,
    2471,  2475,  2478,  2480,  2483,  2484,  2486,  2487,  2492,  2496,
    2500,  2504,  2508,  2513,  2516,  2521,  2523,  2524,  2528,  2534,
    2535,  2538,  2541,  2544,  2547,  2548,  2551,  2553,  2555,  2556,
    2559,  2560,  2562,  2564,  2567,  2569,  2572,  2575,  2577,  2579,
    2582,  2585,  2587,  2589,  2591,  2593,  2595,  2599,  2603,  2607,
    2611,  2612,  2614,  2615,  2620,  2625,  2632,  2639,  2648,  2657,
    2658,  2660,  2661,  2665,  2668,  2669,  2674,  2677,  2679,  2683,
    2685,  2687,  2689,  2692,  2694,  2696,  2699,  2702,  2706,  2709,
    2713,  2715,  2719,  2722,  2724,  2726,  2728,  2729,  2732,  2733,
    2735,  2736,  2740,  2741,  2744,  2746,  2749,  2751,  2753,  2755,
    2756,  2759,  2760,  2764,  2766,  2767,  2771,  2773,  2774,  2778,
    2782,  2783,  2787,  2790,  2791,  2798,  2802,  2805,  2807,  2808,
    2810,  2811,  2815,  2821,  2822,  2825,  2826,  2830,  2834,  2835,
    2838,  2840,  2843,  2848,  2850,  2852,  2854,  2856,  2858,  2860,
    2862,  2863,  2867,  2868,  2872,  2874,  2877,  2878,  2882,  2885,
    2887,  2889,  2891,  2894,  2896,  2898,  2900,  2901,  2905,  2908,
    2914,  2916,  2919,  2922,  2925,  2927,  2929,  2931,  2934,  2936,
    2939,  2944,  2947,  2948,  2950,  2952,  2954,  2956,  2961,  2962,
    2965,  2969,  2973,  2974,  2978,  2979,  2983,  2987,  2992,  2993,
    2998,  3003,  3010,  3011,  3013,  3014,  3018,  3023,  3029,  3031,
    3033,  3035,  3037,  3038,  3042,  3043,  3047,  3050,  3052,  3053,
    3057,  3060,  3061,  3066,  3069,  3070,  3072,  3074,  3076,  3078,
    3082,  3083,  3086,  3088,  3092,  3096,  3097,  3101,  3103,  3105,
    3107,  3111,  3119,  3120,  3125,  3133,  3134,  3137,  3138,  3141,
    3144,  3148,  3152,  3156,  3159,  3160,  3164,  3166,  3168,  3169,
    3171,  3173,  3174,  3178,  3181,  3183,  3184,  3189,  3194,  3195,
    3197,  3198,  3203,  3208,  3209,  3212,  3216,  3217,  3219,  3221,
    3222,  3227,  3232,  3239,  3240,  3243,  3244,  3247,  3249,  3252,
    3256,  3257,  3259,  3260,  3264,  3266,  3268,  3270,  3272,  3274,
    3276,  3278,  3280,  3282,  3284,  3289,  3293,  3295,  3298,  3301,
    3304,  3307,  3310,  3313,  3316,  3319,  3322,  3327,  3331,  3336,
    3338,  3341,  3345,  3347,  3350,  3354,  3358,  3359,  3363,  3364,
    3372,  3373,  3379,  3380,  3383,  3384,  3387,  3388,  3392,  3393,
    3396,  3401,  3402,  3405,  3410,  3411,  3416,  3421,  3422,  3426,
    3427,  3432,  3434,  3436,  3438,  3441,  3444,  3447,  3450,  3452,
    3454,  3457,  3459,  3460,  3462,  3463,  3468,  3471,  3472,  3475,
    3480,  3485,  3486,  3488,  3490,  3492,  3494,  3496,  3497,  3502,
    3508,  3510,  3513,  3515,  3519,  3523,  3524,  3529,  3530,  3532,
    3533,  3538,  3543,  3550,  3557,  3558,  3560,  3563,  3564,  3566,
    3567,  3571,  3573,  3576,  3577,  3581,  3587,  3588,  3592,  3595,
    3596,  3598,  3600,  3601,  3606,  3613,  3614,  3618,  3620,  3624,
    3627,  3630,  3633,  3637,  3638,  3642,  3643,  3647,  3648,  3652,
    3653,  3655,  3656,  3660,  3662,  3664,  3666,  3668,  3670,  3678,
    3679,  3681,  3683,  3685,  3687,  3689,  3691,  3696,  3698,  3701,
    3703,  3706,  3710,  3711,  3713,  3716,  3718,  3722,  3724,  3726,
    3731,  3733,  3735,  3737,  3738,  3743,  3749,  3750,  3753,  3754,
    3759,  3763,  3767,  3769,  3771,  3773,  3775,  3776,  3778,  3781,
    3782,  3785,  3786,  3789,  3792,  3793,  3796,  3797,  3800,  3803,
    3804,  3807,  3808,  3811,  3814,  3815,  3818,  3819,  3822,  3825,
    3827,  3830,  3832,  3834,  3837,  3840,  3843,  3845,  3847,  3850,
    3853,  3856,  3857,  3860,  3861,  3864,  3865,  3868,  3870,  3872,
    3873,  3876,  3878,  3881,  3884,  3886,  3888,  3890,  3892,  3894,
    3896,  3898,  3900,  3902,  3904,  3906,  3908,  3910,  3912,  3914,
    3916,  3918,  3920,  3922,  3924,  3926,  3928,  3930,  3932,  3934,
    3937,  3939,  3941,  3943,  3945,  3947,  3949,  3951,  3955,  3956,
    3958,  3960,  3964,  3968,  3970,  3974,  3978,  3980,  3984,  3986,
    3989,  3992,  3994,  3998,  4000,  4002,  4006,  4008,  4012,  4014,
    4018,  4020,  4023,  4026,  4028,  4030,  4032,  4035,  4037,  4039,
    4041,  4044,  4046,  4047,  4050,  4052,  4054,  4056,  4060,  4062,
    4064,  4067,  4069,  4071,  4073,  4076,  4078,  4080,  4082,  4084,
    4086,  4088,  4091,  4093,  4095,  4099,  4101,  4104,  4106,  4108,
    4110,  4112,  4115,  4118,  4121,  4126,  4130,  4132,  4134,  4137,
    4139,  4141,  4143,  4145,  4147,  4149,  4151,  4154,  4157,  4160,
    4162,  4164,  4166,  4168,  4170,  4172,  4174,  4176,  4178,  4180,
    4182,  4184,  4186,  4188,  4190,  4192,  4194,  4196,  4198,  4200,
    4202,  4204,  4206,  4208,  4210,  4212,  4215,  4217,  4221,  4224,
    4227,  4229,  4231,  4235,  4238,  4241,  4243,  4245,  4249,  4253,
    4258,  4264,  4266,  4268,  4270,  4272,  4274,  4276,  4278,  4280,
    4282,  4284,  4286,  4289,  4291,  4295,  4297,  4299,  4301,  4303,
    4305,  4307,  4309,  4312,  4318,  4324,  4330,  4335,  4341,  4347,
    4353,  4356,  4359,  4361,  4363,  4365,  4367,  4369,  4371,  4373,
    4375,  4377,  4379,  4381,  4382,  4387,  4393,  4394,  4398,  4401,
    4403,  4407,  4411,  4413,  4417,  4419,  4423,  4424,  4425,  4427,
    4428,  4430,  4431,  4433,  4434,  4437,  4438,  4441,  4442,  4444,
    4446,  4447,  4449,  4450,  4452,  4455,  4456,  4459,  4460,  4464,
    4466,  4468,  4470,  4472,  4474,  4476,  4478,  4480,  4481,  4484,
    4486,  4488,  4490,  4492,  4494,  4496,  4498,  4500,  4502,  4504,
    4506,  4508,  4510,  4512,  4514,  4516,  4518,  4520,  4522,  4524,
    4526,  4528,  4530,  4532,  4534,  4536,  4538,  4540,  4542,  4544,
    4546,  4548,  4550,  4552,  4554,  4556,  4558,  4560,  4562,  4564,
    4566,  4568,  4570,  4572,  4574,  4576,  4578,  4580,  4582,  4584,
    4586,  4588,  4590,  4592,  4594,  4596,  4598,  4600,  4602,  4604,
    4606,  4608,  4610,  4612,  4614,  4616,  4618,  4620,  4622,  4624,
    4625,  4627,  4628,  4630,  4631,  4633,  4634,  4636,  4637,  4639,
    4640,  4642,  4643,  4645,  4646,  4648,  4649,  4651,  4652,  4654,
    4655,  4657,  4658,  4660,  4661,  4663,  4664,  4666,  4667,  4669,
    4670,  4672,  4673,  4675,  4676,  4678,  4681,  4682,  4684,  4685,
    4687,  4688,  4690,  4691,  4693,  4694,  4696,  4698,  4699,  4701,
    4702,  4704,  4706,  4707,  4709,  4711,  4712,  4715,  4718,  4719,
    4721,  4722,  4724,  4725,  4727,  4728,  4730,  4732,  4733,  4735,
    4736,  4738,  4739,  4742,  4744,  4746,  4747,  4749,  4750,  4752,
    4753,  4755,  4756,  4758,  4759,  4761,  4762,  4764,  4765,  4767,
    4768,  4770,  4773,  4774,  4776,  4777,  4779,  4780,  4782,  4783,
    4785,  4786,  4788,  4789,  4791,  4792,  4794,  4795,  4797,  4799,
    4800,  4802,  4803,  4807,  4808,  4810,  4813,  4815,  4817,  4819,
    4821,  4823,  4825,  4827,  4829,  4831,  4833,  4835,  4837,  4839,
    4841,  4843,  4845,  4847,  4849,  4851,  4853,  4855,  4858,  4861,
    4863,  4865,  4867,  4869,  4871,  4873,  4876,  4878,  4882,  4885,
    4887,  4889,  4891,  4894,  4896,  4899,  4901,  4904,  4906,  4909,
    4911,  4914,  4916,  4919,  4921,  4924
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     514,     0,    -1,    -1,   515,   516,    -1,   519,    -1,   517,
      -1,   518,    -1,   517,   518,    -1,   521,    -1,   523,    -1,
      -1,   520,   529,    -1,   533,   529,   524,   525,    -1,   533,
     529,   524,   526,    -1,   535,   529,   527,    -1,    -1,   522,
      -1,   524,   522,    -1,    -1,   526,    -1,   143,   536,   452,
      -1,    -1,   528,    -1,   139,   536,   452,    -1,    -1,    -1,
      -1,   541,   542,   543,   605,   606,   608,   607,   641,   530,
     651,   652,   653,   531,   682,   738,   740,   742,   787,   532,
     801,    -1,    -1,   341,   452,   536,   537,   534,   538,   452,
      -1,   200,   452,   536,   537,   452,    -1,   342,    -1,   256,
      -1,    -1,    26,   256,    -1,    -1,  1273,   539,  1288,    -1,
      73,    -1,    73,   540,    -1,   540,    -1,   172,    -1,   457,
      -1,   354,    -1,    -1,   154,   123,   452,    -1,    -1,    85,
     394,   452,    -1,    -1,   543,   544,    -1,   545,    -1,   549,
      -1,   568,    -1,   569,    -1,   560,    -1,    -1,   415,   452,
     546,   547,    -1,    -1,   559,   548,   452,    -1,    -1,  1304,
     108,   272,    -1,    -1,   304,   452,   550,   551,    -1,    -1,
     559,   452,    -1,   559,   552,   452,    -1,   552,   452,    -1,
     553,    -1,   552,   553,    -1,   554,    -1,   555,    -1,   556,
      -1,   557,    -1,   268,   410,  1273,  1222,  1315,    -1,  1321,
    1273,  1189,    -1,   396,  1273,  1222,    -1,  1260,    60,  1273,
     558,    -1,  1189,    -1,   257,    -1,   495,    -1,   435,    -1,
     505,    -1,   559,   505,    -1,    -1,   369,   452,   561,   562,
      -1,    -1,   563,   452,    -1,   563,     1,   452,    -1,   564,
      -1,   563,   564,    -1,   199,     9,   229,    -1,   199,   565,
     566,    -1,   199,   567,   229,    -1,   370,    -1,   497,    -1,
      -1,    26,   256,    -1,   370,    -1,   567,   370,    -1,   417,
     452,    -1,   570,   452,    -1,   570,     1,   452,    -1,   571,
      -1,   570,   571,    -1,   572,    -1,   577,    -1,   586,    -1,
     596,    -1,   593,    -1,   597,    -1,   599,    -1,   600,    -1,
     601,    -1,   602,    -1,   603,    -1,   604,    -1,    -1,   505,
     573,   574,    -1,  1273,    97,    -1,  1222,  1273,  1193,    -1,
    1273,  1193,   575,    -1,   576,    -1,    -1,   576,    -1,  1038,
    1285,  1193,    -1,   576,  1038,  1285,  1193,    -1,    -1,    11,
    1193,   578,  1273,   579,    -1,   280,    -1,   419,    -1,   420,
      -1,   127,    -1,    28,    -1,   580,    -1,   581,    -1,   580,
     581,    -1,   584,    -1,   584,   443,   584,    -1,    -1,   584,
      17,   582,   583,    -1,   584,    -1,   583,    17,   584,    -1,
     256,    -1,   416,    -1,   511,    -1,   346,    -1,   212,    -1,
     266,    -1,   416,    -1,   511,    -1,   588,   587,    -1,    -1,
     218,   505,    -1,   433,  1261,   589,    -1,   590,    -1,   589,
     590,    -1,   591,  1274,   592,    -1,  1194,    -1,   591,  1194,
      -1,  1223,    -1,   592,  1223,    -1,    59,  1193,  1273,   594,
      -1,   595,    -1,   594,   595,    -1,  1225,    -1,  1225,   443,
    1225,    -1,   257,  1193,  1273,   256,    -1,    99,  1291,  1273,
     256,   598,    -1,    -1,  1304,   328,   256,    -1,   109,  1273,
      69,    -1,   301,   405,  1273,   469,   400,    -1,   101,  1273,
    1188,    -1,    97,   423,  1273,  1188,    -1,   390,  1273,  1188,
      -1,   165,  1273,  1188,    -1,    -1,   226,   394,   452,    -1,
      -1,   174,   452,    -1,    -1,   234,   452,    -1,    -1,   608,
     609,    -1,    -1,   397,  1246,  1193,   610,   611,   452,    -1,
     397,     1,   452,    -1,    -1,   611,   612,    -1,   613,    -1,
     619,    -1,   621,    -1,   623,    -1,   624,    -1,   626,    -1,
     630,    -1,   632,    -1,   633,    -1,   634,    -1,   636,    -1,
     637,    -1,   639,    -1,    29,  1301,   616,   615,   617,    -1,
      29,  1301,   616,   614,   618,    -1,    29,  1301,   616,   120,
     618,    -1,    29,  1301,   616,   238,   618,    -1,    29,  1301,
     616,   335,   618,    -1,   118,    -1,   119,    -1,   438,    -1,
     347,    -1,    -1,   252,     7,  1264,    -1,    -1,   172,    -1,
     126,    -1,   256,    -1,  1219,    -1,    -1,   256,    -1,  1219,
      -1,     4,  1280,  1273,   620,    -1,   402,    -1,   126,    -1,
     347,    -1,    19,  1289,  1275,  1273,   635,  1240,   622,    -1,
      -1,   432,   502,     9,  1228,    -1,   432,   502,   585,    -1,
    1305,  1273,   505,    -1,   625,   423,  1273,  1188,    -1,    -1,
     455,    -1,   412,    -1,    -1,   627,   262,  1280,  1273,   628,
      -1,   267,   629,    -1,    33,   629,    -1,   168,    -1,    -1,
     504,   262,   309,  1314,    -1,   504,   262,   309,   274,  1314,
      -1,   504,   385,    -1,   315,  1273,   631,    -1,   631,    -1,
     220,    -1,  1289,  1258,   402,    -1,   359,    -1,   252,   402,
      -1,   320,  1260,  1273,  1192,    -1,   351,   114,  1273,   419,
      -1,   351,  1275,  1273,   635,    -1,  1188,    -1,  1188,   453,
    1187,    -1,  1188,   414,  1273,  1187,    -1,   359,  1275,  1273,
    1188,    -1,   372,   638,  1255,    -1,   287,    -1,  1222,    -1,
     404,  1304,   640,    -1,     9,  1286,    -1,   287,  1286,    -1,
     349,   310,    -1,    -1,   642,   452,    -1,   642,     1,   452,
      -1,   643,    -1,   642,   643,    -1,   644,    -1,   646,    -1,
     388,   645,  1255,  1266,  1178,    -1,    -1,   351,    -1,   412,
      -1,   413,    -1,    -1,   274,   647,  1264,  1297,  1262,   648,
      -1,   649,    -1,   648,   649,    -1,  1179,   650,    -1,    -1,
     331,  1222,    -1,    -1,   103,   123,   452,    -1,    -1,   455,
     394,   452,    -1,    -1,   653,   654,    -1,   655,   684,    -1,
      -1,   657,  1179,   656,   658,   452,    -1,   657,     1,   452,
      -1,   173,    -1,   392,    -1,    -1,   658,   659,    -1,  1273,
     172,    -1,  1273,   204,    -1,   660,    -1,   662,    -1,   666,
      -1,   667,    -1,   670,    -1,   671,    -1,   677,    -1,   678,
      -1,   679,    -1,    47,  1262,  1222,   665,   661,    -1,    -1,
     353,    -1,    58,    -1,   351,  1262,  1222,  1261,    -1,   351,
    1262,  1222,   447,  1222,  1261,    -1,   351,  1273,   500,  1268,
    1294,   664,   665,  1261,   663,    -1,    -1,   115,  1284,  1188,
      -1,    -1,  1267,  1222,    -1,    -1,   447,  1222,    -1,   239,
    1316,  1312,    -1,   499,   306,   668,  1273,   669,    -1,   499,
     306,   175,  1273,   669,    -1,   505,    -1,   213,    -1,   256,
      -1,  1219,    -1,   103,  1316,  1190,    -1,   250,  1273,  1192,
    1279,   672,    -1,    -1,   672,   673,    -1,   674,    -1,   675,
      -1,   676,    -1,  1304,   188,  1257,  1192,    -1,   466,  1192,
      -1,    48,  1192,    -1,   352,  1280,  1273,   505,    -1,    63,
    1273,   505,    -1,   680,   681,    -1,   366,  1273,    -1,   368,
    1254,    -1,  1193,    -1,   681,  1193,    -1,    -1,    -1,   507,
     394,   452,   683,   684,    -1,    -1,    -1,   685,   686,    -1,
     687,   452,    -1,   686,   687,   452,    -1,   686,   452,    -1,
     699,    -1,    -1,   689,   690,   688,   701,    -1,   689,     1,
     452,    -1,  1238,   505,    -1,    -1,   176,    -1,   505,    -1,
     505,    -1,    -1,  1273,   204,    -1,  1226,    -1,   245,   694,
      -1,   244,   694,    -1,    50,  1283,   694,    -1,  1216,    -1,
      41,    -1,    44,    -1,    43,    -1,    42,    -1,    40,    -1,
     698,    -1,   710,    -1,   711,    -1,   695,    -1,   696,    -1,
     697,    -1,     1,   452,    -1,   180,    -1,   184,    -1,   181,
      -1,   182,    -1,   179,    -1,   183,    -1,   185,    -1,   330,
      -1,   343,    -1,   689,   691,    86,   692,   700,    -1,  1256,
     693,    -1,   196,   505,    -1,    -1,   701,   702,    -1,   703,
      -1,   704,    -1,   706,    -1,   707,    -1,   708,    -1,   712,
      -1,   715,    -1,   727,    -1,   728,    -1,   729,    -1,   730,
      -1,   731,    -1,   736,    -1,   737,    -1,   355,  1216,    -1,
    1273,   172,   705,    -1,    -1,    26,   256,    -1,  1273,   204,
      -1,   327,    -1,   709,    -1,   492,  1273,   709,    -1,    39,
      -1,    74,    -1,   710,    -1,   711,    -1,    78,    -1,    79,
      -1,    80,    -1,    81,    -1,    82,    -1,   120,    -1,   219,
      -1,   319,    -1,   330,    -1,   343,    -1,   409,    -1,   407,
      -1,   408,    -1,   480,    -1,   478,    -1,   479,    -1,    41,
    1292,    -1,    41,   477,    -1,    44,  1292,    -1,    44,   477,
      -1,    43,  1292,    -1,    43,   477,    -1,    42,  1292,    -1,
      42,   477,    -1,    40,  1292,    -1,    40,   477,    -1,   180,
      -1,   181,    -1,   179,    -1,   182,    -1,   183,    -1,   277,
      -1,    76,    -1,   187,    -1,    77,    -1,   186,    -1,  1293,
     241,  1250,    -1,  1293,   469,  1250,    -1,   305,  1222,   716,
    1299,   718,   714,    -1,    -1,   425,  1222,    -1,   305,  1222,
     716,  1299,   718,   721,   724,    -1,   305,   126,   719,   717,
     716,   720,   721,   724,    -1,    -1,   447,  1222,    -1,    -1,
     196,  1222,    -1,    -1,   115,  1284,  1188,    -1,    -1,    53,
    1268,   505,    -1,    -1,   223,    -1,   722,    -1,    -1,   722,
     723,  1275,  1273,  1187,    -1,    27,    -1,   116,    -1,    -1,
     220,  1259,   725,    -1,   726,    -1,   725,   726,    -1,   505,
      -1,   235,  1290,    -1,   434,  1276,    -1,    45,  1302,   511,
      -1,    36,    -1,    -1,   499,  1274,   733,   732,   735,    -1,
     734,    -1,   733,   734,    -1,  1226,    -1,  1226,   443,  1226,
      -1,    -1,  1303,   454,  1273,  1226,    -1,   363,  1219,    -1,
     363,  1219,   443,  1219,    -1,    21,   244,    -1,    21,   301,
      -1,    -1,    -1,   261,   394,   452,   739,   684,    -1,    -1,
      -1,   255,   394,   452,   741,   684,    -1,    -1,    -1,   366,
     394,   452,   743,   744,    -1,    -1,   744,   745,    -1,    -1,
     348,  1180,   746,   747,   452,   761,    -1,    -1,   747,   748,
      -1,     1,   452,    -1,  1273,   204,    -1,    62,  1273,  1206,
      -1,   749,    -1,   752,    -1,  1329,   750,    -1,  1265,   751,
      -1,  1215,    -1,   751,  1215,    -1,   321,  1278,   753,   754,
      -1,  1224,    -1,  1224,  1313,  1224,  1307,    -1,  1224,  1313,
      -1,    -1,   754,   755,    -1,   756,    -1,   757,    -1,   758,
      -1,   759,    -1,   760,    -1,   210,  1273,  1224,    -1,   178,
    1322,  1273,  1224,    -1,   240,  1323,  1273,  1224,    -1,   240,
    1322,  1273,  1224,    -1,   188,  1273,  1224,    -1,    -1,   761,
     762,    -1,    -1,   689,   690,   763,   764,   452,    -1,    -1,
     764,   765,    -1,   766,    -1,   770,    -1,   776,    -1,   707,
      -1,   786,    -1,   712,    -1,   727,    -1,   778,    -1,   729,
      -1,   784,    -1,   771,    -1,   731,    -1,   774,    -1,   785,
      -1,   713,    -1,   775,    -1,   473,  1273,   767,    -1,  1327,
      -1,  1325,    -1,  1323,   768,    -1,  1322,    -1,  1324,   768,
      -1,  1326,    -1,  1328,    -1,    -1,  1215,   769,    -1,   177,
     769,    -1,    -1,   313,   321,    -1,   285,   209,  1273,   781,
      -1,   431,  1283,  1199,   772,    -1,    -1,   373,  1284,   773,
      -1,  1215,    -1,   177,    -1,   333,   502,  1155,    -1,   500,
    1215,   196,  1201,    49,  1201,    -1,   777,   780,    -1,   252,
    1282,  1274,    -1,   254,  1254,    -1,   779,   782,    -1,  1306,
    1282,  1274,    -1,  1307,  1254,    -1,   781,    -1,   780,   781,
      -1,   329,  1222,    -1,  1224,    -1,   286,    -1,   783,    -1,
     782,   783,    -1,   329,  1222,    -1,  1224,    -1,   414,  1273,
    1201,  1247,    -1,   209,  1270,    -1,   492,  1273,   120,    -1,
      -1,    -1,   389,   394,   452,   788,   789,    -1,    -1,   790,
      -1,   791,   452,    -1,   790,   791,   452,    -1,   699,    -1,
      -1,   689,   690,   792,   793,    -1,   689,     1,   452,    -1,
      -1,   793,   794,    -1,    45,   252,    -1,    45,   389,    -1,
      38,    -1,    46,    -1,   161,   157,    -1,   161,   159,    -1,
     211,    -1,   265,    -1,   378,    -1,   474,    -1,   318,    -1,
     243,    -1,    32,    -1,   395,    -1,   371,    -1,   198,    -1,
     345,    57,  1273,  1206,    -1,   345,    -1,   457,    -1,   252,
    1281,  1273,   797,  1208,    -1,  1306,  1281,  1273,   798,  1208,
      -1,   190,  1273,  1208,    -1,    35,  1273,  1208,    -1,   708,
      -1,   729,    -1,   800,    -1,   727,    -1,   712,    -1,   731,
      -1,   707,    -1,   799,    -1,   498,  1215,    -1,   196,  1207,
      -1,   447,  1215,    -1,   329,    -1,   464,    -1,   270,    -1,
     459,    -1,    -1,   795,    -1,   796,    -1,    -1,   795,    -1,
     796,    -1,   305,  1222,  1299,    -1,  1273,   204,    -1,    -1,
      -1,    -1,   337,   123,   805,   813,   452,   802,   814,   803,
     816,    -1,    -1,   804,   827,   452,   816,    -1,    -1,    -1,
     498,   806,   808,    -1,    -1,    56,   807,   808,    -1,   809,
      -1,   808,   809,    -1,   810,   811,   812,   505,    -1,    -1,
    1259,   357,    -1,  1259,   499,    -1,    -1,   410,  1273,    32,
      -1,   410,  1273,   111,    -1,   477,   410,  1273,    32,    -1,
     477,   410,  1273,  1222,    -1,   410,  1273,  1222,    -1,    -1,
     312,    -1,    -1,   376,   505,    -1,    -1,    -1,   110,   452,
     815,   816,   130,   110,   452,    -1,    -1,   816,   817,    -1,
     818,    -1,   821,    -1,   827,   452,    -1,   822,    -1,   452,
      -1,    -1,   505,   394,   823,   452,   819,   820,    -1,    -1,
    1109,   452,    -1,   505,   452,    -1,   505,    -1,    -1,  1222,
      -1,    -1,    -1,   825,   826,   827,    -1,    -1,   828,   829,
      -1,   827,   829,    -1,   830,    -1,   846,    -1,   851,    -1,
     855,    -1,   860,    -1,   875,    -1,   878,    -1,   886,    -1,
     882,    -1,   887,    -1,   888,    -1,   893,    -1,   907,    -1,
     911,    -1,   914,    -1,   928,    -1,   932,    -1,   935,    -1,
     938,    -1,   942,    -1,   943,    -1,   947,    -1,   957,    -1,
     960,    -1,   977,    -1,   979,    -1,   982,    -1,   986,    -1,
     992,    -1,  1004,    -1,  1012,    -1,  1013,    -1,  1016,    -1,
    1017,    -1,  1021,    -1,  1026,    -1,  1027,    -1,  1035,    -1,
    1050,    -1,  1060,    -1,  1069,    -1,  1074,    -1,  1081,    -1,
    1085,    -1,  1087,    -1,  1090,    -1,  1093,    -1,  1097,    -1,
    1124,    -1,   285,   399,    -1,     1,  1251,    -1,    -1,     3,
     831,   832,   845,    -1,   833,   835,   839,   840,   841,  1132,
      -1,  1215,   196,   834,    -1,  1215,   196,  1307,    -1,  1215,
     196,   104,   510,    -1,  1215,   196,   104,    -1,  1215,   196,
     105,   509,    -1,  1215,   196,   105,    -1,  1215,   196,   106,
      -1,  1215,   196,   163,   237,    -1,  1215,   196,   166,   423,
      -1,  1215,   196,   444,    -1,  1215,   196,   494,   276,    -1,
    1215,   196,    70,    -1,  1215,   196,   156,  1132,    -1,  1215,
     196,   154,  1204,  1132,    -1,  1215,   196,    24,    -1,  1215,
     196,    25,  1132,    -1,  1215,   196,  1182,    -1,  1215,   196,
     505,    -1,  1215,    -1,   308,    -1,   254,    -1,   252,   299,
      -1,    -1,   836,    -1,  1257,   837,   838,    -1,  1257,   838,
     837,    -1,  1257,   837,    -1,  1257,   838,    -1,    30,  1204,
      -1,   252,  1281,  1208,    -1,  1306,  1281,  1208,    -1,   331,
    1281,  1208,    -1,    -1,   197,    -1,    -1,   272,  1273,    47,
      -1,    -1,   504,   842,    -1,   843,    -1,   842,   843,    -1,
      32,    -1,   436,    -1,    38,    -1,    46,    -1,    92,    -1,
     198,    -1,   211,    -1,   243,    -1,   263,    -1,   265,    -1,
     288,    -1,   318,    -1,   345,    57,  1273,  1206,    -1,   345,
      -1,   371,    -1,   378,    -1,   395,    -1,   474,    -1,   287,
     844,    -1,   844,    -1,   490,    -1,   190,  1273,  1208,    -1,
      35,  1273,  1208,    -1,   391,   483,  1154,    -1,   391,   124,
    1154,    -1,   445,  1253,  1209,    -1,   484,    -1,   111,    -1,
      -1,   131,    -1,    -1,     5,   847,   848,   850,    -1,  1197,
     447,  1174,  1138,    -1,  1197,   849,   203,  1174,  1138,    -1,
      95,  1215,   447,  1215,  1247,  1138,    -1,    -1,   447,  1198,
      -1,    -1,   132,    -1,    -1,    10,   852,   853,    -1,  1215,
    1241,   854,    -1,  1168,    58,  1242,   854,    -1,    -1,   376,
    1196,    -1,    -1,    18,   856,   857,    -1,   858,    -1,   857,
     858,    -1,  1184,   447,   859,  1184,    -1,    -1,   339,   447,
      -1,    -1,    51,   861,   862,   874,    -1,   863,  1207,   864,
     869,   872,   873,    -1,    -1,   422,    -1,   424,    -1,   271,
      -1,    -1,    -1,   498,   865,   866,    -1,   867,    -1,   866,
     867,    -1,   868,   308,    -1,   868,   811,  1198,    -1,    -1,
    1259,   357,    -1,  1259,    88,    -1,  1259,   499,    -1,    -1,
     870,  1272,  1215,    -1,   870,   871,    -1,   870,     6,  1283,
    1215,    -1,   376,    -1,   203,    -1,   461,    -1,   308,    -1,
      -1,  1310,   824,    -1,    -1,   294,   824,    -1,    -1,   133,
      -1,    -1,    52,   876,   877,    -1,  1206,    -1,   877,  1206,
      -1,    -1,    61,   879,   880,    -1,  1179,   881,    -1,   880,
    1179,   881,    -1,    -1,  1317,    -1,  1317,  1266,   362,    -1,
    1304,   287,   380,    -1,  1304,   262,    -1,    -1,    75,   883,
     884,   885,    -1,  1174,  1308,  1168,  1138,    -1,    -1,   134,
      -1,    72,    -1,    89,    -1,    -1,   112,   889,   890,   892,
      -1,  1179,  1289,  1151,    -1,   455,   891,    -1,  1179,    -1,
     891,  1179,    -1,    -1,   135,    -1,    -1,   120,   894,   895,
     906,    -1,  1206,   488,  1135,    -1,  1206,   489,  1135,    -1,
    1206,   486,  1135,    -1,  1206,   487,  1135,    -1,  1197,   899,
     903,  1135,    -1,   896,  1135,    -1,  1198,   504,   904,  1135,
      -1,   898,    -1,    -1,   896,   897,   898,    -1,  1198,   836,
     900,   840,   902,    -1,    -1,   485,  1182,    -1,   485,   505,
      -1,   485,   335,    -1,   485,    97,    -1,    -1,   485,   901,
      -1,    97,    -1,    98,    -1,    -1,   504,   904,    -1,    -1,
     298,    -1,   905,    -1,   904,   905,    -1,    38,    -1,    45,
     252,    -1,    45,   389,    -1,    46,    -1,    92,    -1,   161,
     157,    -1,   161,   159,    -1,   211,    -1,   265,    -1,   318,
      -1,   378,    -1,   474,    -1,   190,  1273,  1208,    -1,    35,
    1273,  1208,    -1,   391,   483,  1154,    -1,   391,   124,  1154,
      -1,    -1,   136,    -1,    -1,   122,   908,   909,   910,    -1,
    1198,   228,  1174,  1138,    -1,  1198,   228,  1198,   203,  1174,
    1138,    -1,  1198,    49,  1198,   203,  1174,  1138,    -1,  1198,
     228,  1198,   203,  1175,   361,  1175,  1138,    -1,  1198,    49,
    1198,   203,  1175,   361,  1175,  1138,    -1,    -1,   137,    -1,
      -1,   153,   912,   913,    -1,   256,   864,    -1,    -1,   164,
     915,   916,   927,    -1,   917,   919,    -1,   918,    -1,   917,
      17,   918,    -1,  1156,    -1,   465,    -1,   454,    -1,   920,
     922,    -1,   920,    -1,   921,    -1,   920,   921,    -1,   923,
     824,    -1,   502,   316,   824,    -1,   502,   924,    -1,   923,
     502,   924,    -1,   925,    -1,   924,    17,   925,    -1,  1157,
     926,    -1,    21,    -1,   465,    -1,   454,    -1,    -1,   443,
    1156,    -1,    -1,   138,    -1,    -1,   169,   929,   930,    -1,
      -1,   340,   931,    -1,   199,    -1,   324,   102,    -1,   324,
      -1,   394,    -1,   323,    -1,    -1,   870,  1198,    -1,    -1,
     195,   933,   934,    -1,  1195,    -1,    -1,   202,   936,   937,
      -1,  1219,    -1,    -1,   205,   939,   940,    -1,  1300,  1183,
     941,    -1,    -1,   115,  1284,  1215,    -1,   206,   931,    -1,
      -1,   215,   944,  1155,  1298,   945,   946,    -1,   824,   129,
     824,    -1,   129,   824,    -1,   824,    -1,    -1,   140,    -1,
      -1,   222,   948,   949,    -1,  1195,   950,   951,   952,   956,
      -1,    -1,  1304,   176,    -1,    -1,     9,  1300,   499,    -1,
     955,  1300,   499,    -1,    -1,   365,   953,    -1,   954,    -1,
     953,   954,    -1,   955,  1263,    49,  1198,    -1,    12,    -1,
      15,    -1,   301,    -1,    16,    -1,   302,    -1,   277,    -1,
     278,    -1,    -1,  1298,  1300,   111,    -1,    -1,   224,   958,
     959,    -1,  1180,    -1,   959,  1180,    -1,    -1,   227,   961,
     962,    -1,   963,   964,    -1,  1215,    -1,  1226,    -1,  1229,
      -1,   965,   967,    -1,   965,    -1,   967,    -1,   968,    -1,
      -1,   437,   966,   969,    -1,   365,   971,    -1,    93,  1204,
     447,  1205,   975,    -1,   970,    -1,   969,   970,    -1,  1204,
     189,    -1,    58,   975,    -1,     9,    -1,   241,    -1,   469,
      -1,  1204,   975,    -1,   972,    -1,   971,   972,    -1,    58,
      49,  1204,   975,    -1,   973,   974,    -1,    -1,     9,    -1,
     241,    -1,   178,    -1,   469,    -1,  1204,    49,  1205,   975,
      -1,    -1,   975,   976,    -1,    37,  1271,  1198,    -1,     8,
    1271,  1198,    -1,    -1,   269,   978,  1052,    -1,    -1,   273,
     980,   981,    -1,  1198,   447,  1195,    -1,    95,  1198,   447,
    1195,    -1,    -1,   275,   983,   984,   985,    -1,  1198,    49,
    1174,  1138,    -1,  1198,    49,  1198,   203,  1174,  1138,    -1,
      -1,   141,    -1,    -1,   311,   987,   988,    -1,   989,   990,
    1178,   991,    -1,   988,   989,   990,  1178,   991,    -1,   225,
      -1,   317,    -1,   233,    -1,   171,    -1,    -1,   404,  1304,
     640,    -1,    -1,  1304,   287,   380,    -1,  1304,   262,    -1,
     379,    -1,    -1,   324,   993,   994,    -1,   998,   999,    -1,
      -1,   999,   995,   824,   996,    -1,   999,   997,    -1,    -1,
     142,    -1,   142,    -1,   452,    -1,  1184,    -1,  1184,   443,
    1184,    -1,    -1,  1207,   446,    -1,   191,    -1,  1000,   482,
    1001,    -1,  1000,   500,  1002,    -1,    -1,  1304,   440,  1129,
      -1,   169,    -1,  1155,    -1,  1003,    -1,  1002,     8,  1003,
      -1,  1215,   196,  1198,    49,  1198,   482,  1155,    -1,    -1,
     349,  1005,  1006,  1011,    -1,  1179,  1244,  1289,  1007,  1008,
    1009,  1010,    -1,    -1,   228,  1215,    -1,    -1,   217,   262,
      -1,  1304,   262,    -1,  1304,   236,   262,    -1,  1304,   287,
     262,    -1,  1304,   216,   262,    -1,  1304,   501,    -1,    -1,
     237,  1273,  1215,    -1,  1151,    -1,  1145,    -1,    -1,   144,
      -1,   350,    -1,    -1,   360,  1014,  1015,    -1,  1176,  1127,
      -1,   374,    -1,    -1,   375,  1018,  1019,  1020,    -1,  1179,
    1289,  1007,  1144,    -1,    -1,   145,    -1,    -1,   381,  1022,
    1023,  1025,    -1,  1176,  1127,  1024,  1151,    -1,    -1,  1304,
     262,    -1,  1304,   287,   262,    -1,    -1,   146,    -1,   385,
      -1,    -1,   393,  1028,  1029,  1034,    -1,  1177,  1030,  1031,
    1032,    -1,     9,  1177,  1031,   502,  1156,   824,    -1,    -1,
     500,  1215,    -1,    -1,   130,   824,    -1,  1033,    -1,  1033,
    1032,    -1,   502,  1155,   824,    -1,    -1,   147,    -1,    -1,
     403,  1036,  1037,    -1,  1040,    -1,  1041,    -1,  1044,    -1,
    1045,    -1,  1046,    -1,  1048,    -1,   309,    -1,   307,    -1,
     483,    -1,   124,    -1,   154,  1204,   447,  1204,    -1,  1212,
      31,  1042,    -1,  1043,    -1,  1042,  1043,    -1,    38,  1038,
      -1,    46,  1038,    -1,   211,  1038,    -1,   265,  1038,    -1,
     378,  1038,    -1,   474,  1038,    -1,   243,  1038,    -1,   318,
    1038,    -1,  1195,   447,   153,  1203,    -1,  1195,   447,  1198,
      -1,  1195,  1039,    49,  1198,    -1,  1047,    -1,  1046,  1047,
      -1,  1181,   447,  1038,    -1,  1049,    -1,  1048,  1049,    -1,
    1195,   447,   465,    -1,  1195,   447,   454,    -1,    -1,   412,
    1051,  1052,    -1,    -1,  1213,  1054,  1056,  1057,  1053,  1058,
    1059,    -1,    -1,  1054,  1284,   723,  1275,  1055,    -1,    -1,
    1055,  1219,    -1,    -1,  1320,  1269,    -1,    -1,  1305,  1273,
    1188,    -1,    -1,   498,  1178,    -1,   225,   337,  1273,   998,
      -1,    -1,   203,  1178,    -1,   317,   337,  1273,   998,    -1,
      -1,   421,  1061,  1062,  1068,    -1,  1179,  1064,  1063,  1151,
      -1,    -1,  1304,  1319,  1168,    -1,    -1,   237,  1273,  1065,
    1215,    -1,   178,    -1,   240,    -1,  1161,    -1,  1245,  1162,
      -1,  1245,  1163,    -1,  1245,  1164,    -1,  1245,  1165,    -1,
    1066,    -1,  1067,    -1,   290,  1161,    -1,   293,    -1,    -1,
     148,    -1,    -1,   426,   387,  1070,  1071,    -1,   426,  1073,
      -1,    -1,   870,  1198,    -1,  1304,   162,  1296,  1072,    -1,
    1304,   289,  1296,  1072,    -1,    -1,  1198,    -1,   256,    -1,
     416,    -1,   511,    -1,   346,    -1,    -1,   427,  1075,  1076,
    1080,    -1,  1077,   228,  1215,  1079,  1141,    -1,  1078,    -1,
    1077,  1078,    -1,  1198,    -1,   113,  1259,   410,    -1,   113,
    1259,  1198,    -1,    -1,  1304,   330,  1273,  1215,    -1,    -1,
     149,    -1,    -1,   430,  1082,  1083,  1084,    -1,  1197,   196,
    1174,  1138,    -1,  1197,   196,  1198,   203,  1174,  1138,    -1,
      95,  1215,   196,  1215,  1247,  1138,    -1,    -1,   150,    -1,
     432,  1086,    -1,    -1,   336,    -1,    -1,   439,  1088,  1089,
      -1,  1180,    -1,  1089,  1180,    -1,    -1,   470,  1091,  1092,
      -1,  1215,   196,  1204,   447,  1205,    -1,    -1,   476,  1094,
    1095,    -1,  1179,  1096,    -1,    -1,   351,    -1,   353,    -1,
      -1,   481,  1098,  1099,  1108,    -1,  1215,  1100,  1103,  1079,
    1107,  1141,    -1,    -1,   113,  1259,  1101,    -1,  1102,    -1,
    1101,   313,  1102,    -1,  1239,  1204,    -1,   228,  1104,    -1,
    1103,  1104,    -1,  1215,  1105,  1106,    -1,    -1,   114,  1268,
    1215,    -1,    -1,    96,  1268,  1215,    -1,    -1,   437,  1268,
    1215,    -1,    -1,   151,    -1,    -1,   493,  1110,  1111,    -1,
    1112,    -1,  1115,    -1,  1119,    -1,  1121,    -1,  1122,    -1,
    1113,  1253,  1295,  1309,  1287,  1284,  1114,    -1,    -1,   204,
      -1,  1178,    -1,   225,    -1,   317,    -1,   233,    -1,   171,
      -1,  1266,   108,  1284,  1116,    -1,  1117,    -1,  1116,  1117,
      -1,  1185,    -1,     9,   338,    -1,     9,  1118,  1219,    -1,
      -1,   358,    -1,   358,   306,    -1,   306,    -1,  1257,   340,
    1120,    -1,   421,    -1,   130,    -1,  1113,    37,   367,  1215,
      -1,  1123,    -1,   167,    -1,   128,    -1,    -1,   508,  1125,
    1126,  1131,    -1,  1176,  1127,  1128,  1024,  1130,    -1,    -1,
     196,  1211,    -1,    -1,  1129,  1252,  1208,  1277,    -1,  1129,
    1252,  1182,    -1,  1129,  1252,   321,    -1,    37,    -1,     8,
      -1,  1151,    -1,  1148,    -1,    -1,   152,    -1,  1133,  1134,
      -1,    -1,   166,   824,    -1,    -1,   294,   824,    -1,  1136,
    1137,    -1,    -1,   166,   824,    -1,    -1,   294,   824,    -1,
    1139,  1140,    -1,    -1,   411,   824,    -1,    -1,   297,   824,
      -1,  1142,  1143,    -1,    -1,   462,   824,    -1,    -1,   296,
     824,    -1,  1146,  1147,    -1,  1146,    -1,  1146,  1147,    -1,
    1146,    -1,  1147,    -1,   130,   824,    -1,   291,   824,    -1,
    1149,  1150,    -1,  1149,    -1,  1150,    -1,   158,   824,    -1,
     292,   824,    -1,  1152,  1153,    -1,    -1,   231,   824,    -1,
      -1,   295,   824,    -1,    -1,  1210,  1318,    -1,  1156,    -1,
    1157,    -1,    -1,  1158,  1159,    -1,  1160,    -1,  1159,   232,
      -1,  1159,  1160,    -1,  1198,    -1,   463,    -1,   449,    -1,
     464,    -1,   459,    -1,   460,    -1,   451,    -1,   170,    -1,
    1161,    -1,  1162,    -1,  1163,    -1,  1164,    -1,  1165,    -1,
     293,    -1,   290,    -1,    20,    -1,   313,    -1,   308,    -1,
     301,    -1,    12,    -1,    13,    -1,    14,    -1,   332,    -1,
     284,    -1,   453,    -1,   160,  1300,    -1,   456,    -1,   207,
      -1,   458,    -1,   246,    -1,   208,    -1,   247,    -1,  1168,
      -1,  1166,  1167,  1168,    -1,    -1,    71,    -1,   398,    -1,
    1168,   464,  1169,    -1,  1168,   459,  1169,    -1,  1169,    -1,
    1169,   460,  1170,    -1,  1169,   451,  1170,    -1,  1170,    -1,
    1171,   170,  1170,    -1,  1171,    -1,   464,  1172,    -1,   459,
    1172,    -1,  1172,    -1,   463,  1168,   449,    -1,  1201,    -1,
     251,    -1,   251,  1311,   505,    -1,   253,    -1,   253,  1311,
     505,    -1,   322,    -1,   322,  1311,   505,    -1,  1175,    -1,
    1174,  1175,    -1,  1196,  1247,    -1,  1219,    -1,  1219,    -1,
    1179,    -1,  1178,  1179,    -1,   505,    -1,   505,    -1,  1182,
      -1,  1181,  1182,    -1,   271,    -1,    -1,  1183,  1184,    -1,
    1185,    -1,  1219,    -1,  1186,    -1,  1186,  1311,  1186,    -1,
     256,    -1,  1188,    -1,  1187,  1188,    -1,  1219,    -1,   505,
      -1,  1191,    -1,  1190,  1191,    -1,   505,    -1,  1188,    -1,
     256,    -1,   505,    -1,   505,    -1,  1196,    -1,  1195,  1196,
      -1,  1217,    -1,  1227,    -1,     6,  1283,  1216,    -1,  1198,
      -1,  1197,  1198,    -1,  1215,    -1,  1226,    -1,  1229,    -1,
    1173,    -1,   245,  1216,    -1,   245,  1227,    -1,   245,  1229,
      -1,     6,  1283,  1202,  1203,    -1,     6,  1283,  1216,    -1,
     271,    -1,  1201,    -1,  1199,  1201,    -1,  1215,    -1,  1227,
      -1,  1229,    -1,  1215,    -1,  1227,    -1,  1229,    -1,  1173,
      -1,   245,  1216,    -1,   245,  1227,    -1,   245,  1229,    -1,
     340,    -1,   153,    -1,  1216,    -1,   256,    -1,  1215,    -1,
    1227,    -1,  1215,    -1,  1226,    -1,  1215,    -1,   256,    -1,
    1215,    -1,   256,    -1,  1229,    -1,  1212,    -1,  1222,    -1,
     511,    -1,  1212,    -1,  1224,    -1,  1212,    -1,  1222,    -1,
    1215,    -1,  1226,    -1,  1229,    -1,  1214,    -1,  1214,    -1,
    1219,    -1,  1219,  1220,    -1,  1216,    -1,  1219,  1220,  1221,
      -1,  1219,  1220,    -1,  1219,  1221,    -1,  1219,    -1,  1218,
      -1,  1219,  1220,  1221,    -1,  1219,  1220,    -1,  1219,  1221,
      -1,  1219,    -1,   505,    -1,   505,  1311,  1219,    -1,   463,
    1166,   449,    -1,   463,  1168,   450,   449,    -1,   463,  1168,
     450,  1168,   449,    -1,   256,    -1,   256,    -1,   256,    -1,
     256,    -1,   416,    -1,   511,    -1,   346,    -1,   212,    -1,
     266,    -1,   461,    -1,  1227,    -1,     9,  1228,    -1,  1228,
      -1,  1227,   448,  1228,    -1,   256,    -1,   416,    -1,   511,
      -1,   346,    -1,   212,    -1,   266,    -1,   461,    -1,  1230,
    1233,    -1,  1231,   463,  1200,   449,  1233,    -1,  1232,   463,
    1166,   449,  1233,    -1,   471,   463,  1235,   449,  1233,    -1,
     303,   463,  1236,   449,    -1,   258,   463,  1237,   449,  1233,
      -1,   259,   463,  1237,   449,  1233,    -1,   260,   463,  1237,
     449,  1233,    -1,   201,  1234,    -1,   496,  1234,    -1,   100,
      -1,   503,    -1,   491,    -1,   264,    -1,   377,    -1,    83,
      -1,   192,    -1,   193,    -1,   194,    -1,   428,    -1,   429,
      -1,    -1,   463,  1168,   450,   449,    -1,   463,  1168,   450,
    1168,   449,    -1,    -1,   463,  1166,   449,    -1,   463,   449,
      -1,  1200,    -1,  1200,  1167,   241,    -1,  1200,  1167,   469,
      -1,  1200,    -1,  1200,  1167,  1200,    -1,  1168,    -1,  1168,
    1167,  1188,    -1,    -1,    -1,     9,    -1,    -1,  1320,    -1,
      -1,   223,    -1,    -1,   223,  1243,    -1,    -1,   447,  1205,
      -1,    -1,   285,    -1,   334,    -1,    -1,   290,    -1,    -1,
     312,    -1,   290,   312,    -1,    -1,   386,  1248,    -1,    -1,
     272,  1273,  1249,    -1,    34,    -1,   281,    -1,   282,    -1,
     283,    -1,   344,    -1,   467,    -1,   468,    -1,   472,    -1,
      -1,   400,  1260,    -1,   452,    -1,     3,    -1,     5,    -1,
      10,    -1,    18,    -1,    51,    -1,    52,    -1,    61,    -1,
      72,    -1,    75,    -1,    89,    -1,   112,    -1,   120,    -1,
     122,    -1,   129,    -1,   153,    -1,   164,    -1,   169,    -1,
     195,    -1,   202,    -1,   205,    -1,   206,    -1,   215,    -1,
     222,    -1,   224,    -1,   227,    -1,   269,    -1,   273,    -1,
     275,    -1,   285,    -1,   311,    -1,   324,    -1,   349,    -1,
     360,    -1,   375,    -1,   381,    -1,   385,    -1,   393,    -1,
     403,    -1,   412,    -1,   421,    -1,   426,    -1,   427,    -1,
     430,    -1,   432,    -1,   439,    -1,   470,    -1,   476,    -1,
     481,    -1,   508,    -1,   131,    -1,   132,    -1,   133,    -1,
     134,    -1,   135,    -1,   136,    -1,   137,    -1,   138,    -1,
     140,    -1,   141,    -1,   142,    -1,   144,    -1,   145,    -1,
     146,    -1,   147,    -1,   148,    -1,   149,    -1,   150,    -1,
     151,    -1,   152,    -1,    -1,     7,    -1,    -1,     8,    -1,
      -1,    22,    -1,    -1,    23,    -1,    -1,    26,    -1,    -1,
      30,    -1,    -1,    39,    -1,    -1,    49,    -1,    -1,    57,
      -1,    -1,    58,    -1,    -1,    87,    -1,    -1,   103,    -1,
      -1,   455,    -1,    -1,   177,    -1,    -1,   189,    -1,    -1,
     196,    -1,    -1,   218,    -1,    -1,   314,    -1,   218,   314,
      -1,    -1,   221,    -1,    -1,   457,    -1,    -1,   228,    -1,
      -1,   232,    -1,    -1,   232,    -1,    22,    -1,    -1,   237,
      -1,    -1,   242,    -1,   384,    -1,    -1,   252,    -1,   254,
      -1,    -1,   248,  1273,    -1,   249,  1254,    -1,    -1,   254,
      -1,    -1,   272,    -1,    -1,   299,    -1,    -1,   299,    -1,
     300,    -1,    -1,   306,    -1,    -1,   309,    -1,    -1,   423,
     232,    -1,   423,    -1,   232,    -1,    -1,   316,    -1,    -1,
     337,    -1,    -1,   340,    -1,    -1,   351,    -1,    -1,   384,
      -1,    -1,   405,    -1,    -1,   406,    -1,    -1,   405,    -1,
     405,   232,    -1,    -1,   410,    -1,    -1,   418,    -1,    -1,
     423,    -1,    -1,   438,    -1,    -1,   442,    -1,    -1,   446,
      -1,    -1,   447,    -1,    -1,   447,    -1,   498,    -1,    -1,
     502,    -1,    -1,   502,   403,   447,    -1,    -1,   504,    -1,
      64,   401,    -1,   401,    -1,    67,    -1,    65,    -1,    68,
      -1,    66,    -1,   453,    -1,   160,    -1,   166,    -1,   162,
      -1,   166,    -1,   462,    -1,   218,    -1,   306,    -1,   418,
      -1,   308,    -1,   252,    -1,   254,    -1,   351,    -1,   353,
      -1,    58,    -1,   506,    -1,   351,  1273,    -1,   353,  1254,
      -1,   356,    -1,   475,    -1,   252,    -1,   254,    -1,   410,
      -1,   244,    -1,   504,   125,    -1,   125,    -1,   340,    64,
     401,    -1,    64,   401,    -1,   401,    -1,   117,    -1,   107,
      -1,    90,   210,    -1,    55,    -1,    90,   188,    -1,    54,
      -1,   321,   210,    -1,   325,    -1,   321,   188,    -1,   326,
      -1,   366,   210,    -1,   383,    -1,   366,   188,    -1,   382,
      -1,    90,  1273,    -1,    91,  1254,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,  1367,  1367,  1367,  1399,  1400,  1404,  1405,  1409,  1410,
    1414,  1414,  1437,  1444,  1451,  1457,  1458,  1459,  1463,  1464,
    1468,  1492,  1493,  1497,  1531,  1537,  1549,  1523,  1559,  1558,
    1596,  1631,  1632,  1636,  1637,  1640,  1641,  1645,  1654,  1663,
    1664,  1668,  1672,  1681,  1682,  1690,  1691,  1701,  1702,  1706,
    1707,  1708,  1709,  1710,  1717,  1716,  1729,  1730,  1733,  1734,
    1748,  1747,  1757,  1758,  1759,  1760,  1764,  1765,  1769,  1770,
    1771,  1772,  1776,  1783,  1790,  1797,  1808,  1812,  1816,  1820,
    1827,  1828,  1835,  1834,  1845,  1846,  1847,  1854,  1855,  1859,
    1863,  1875,  1879,  1880,  1885,  1888,  1895,  1900,  1911,  1924,
    1925,  1933,  1934,  1938,  1939,  1940,  1941,  1942,  1943,  1944,
    1945,  1946,  1947,  1948,  1949,  1957,  1956,  1975,  1985,  1998,
    2006,  2009,  2010,  2014,  2024,  2040,  2039,  2063,  2069,  2075,
    2081,  2087,  2093,  2103,  2107,  2114,  2118,  2123,  2122,  2133,
    2137,  2144,  2145,  2146,  2147,  2148,  2149,  2153,  2154,  2161,
    2176,  2179,  2186,  2194,  2198,  2209,  2229,  2237,  2248,  2249,
    2255,  2276,  2277,  2281,  2285,  2306,  2329,  2411,  2414,  2423,
    2442,  2458,  2476,  2494,  2511,  2527,  2528,  2535,  2536,  2544,
    2545,  2555,  2556,  2561,  2560,  2581,  2591,  2592,  2596,  2597,
    2598,  2599,  2600,  2601,  2602,  2603,  2604,  2605,  2606,  2607,
    2608,  2615,  2621,  2631,  2644,  2657,  2673,  2674,  2675,  2676,
    2679,  2680,  2686,  2687,  2691,  2695,  2696,  2701,  2704,  2705,
    2712,  2720,  2721,  2722,  2729,  2753,  2755,  2760,  2770,  2781,
    2788,  2790,  2791,  2797,  2797,  2804,  2809,  2814,  2821,  2822,
    2823,  2827,  2838,  2839,  2843,  2848,  2853,  2858,  2869,  2880,
    2890,  2898,  2899,  2900,  2906,  2917,  2924,  2925,  2931,  2939,
    2940,  2941,  2947,  2948,  2949,  2956,  2957,  2961,  2962,  2968,
    2996,  2997,  2998,  2999,  3006,  3005,  3021,  3022,  3026,  3029,
    3030,  3036,  3037,  3045,  3046,  3054,  3055,  3059,  3080,  3079,
    3096,  3103,  3107,  3113,  3114,  3118,  3128,  3143,  3144,  3145,
    3146,  3147,  3148,  3149,  3150,  3151,  3158,  3165,  3165,  3165,
    3171,  3191,  3225,  3256,  3257,  3264,  3265,  3269,  3270,  3277,
    3288,  3293,  3304,  3305,  3309,  3310,  3316,  3327,  3345,  3346,
    3350,  3351,  3352,  3356,  3363,  3370,  3379,  3391,  3443,  3458,
    3459,  3463,  3473,  3512,  3514,  3513,  3529,  3532,  3532,  3549,
    3550,  3552,  3556,  3558,  3557,  3592,  3605,  3613,  3618,  3624,
    3633,  3643,  3646,  3658,  3659,  3660,  3661,  3665,  3669,  3673,
    3677,  3681,  3685,  3689,  3693,  3697,  3701,  3705,  3709,  3713,
    3724,  3725,  3729,  3730,  3734,  3735,  3736,  3740,  3741,  3745,
    3771,  3775,  3784,  3788,  3797,  3798,  3799,  3800,  3801,  3802,
    3803,  3804,  3805,  3806,  3807,  3808,  3809,  3810,  3817,  3841,
    3869,  3872,  3881,  3906,  3917,  3918,  3922,  3926,  3930,  3934,
    3938,  3942,  3946,  3950,  3954,  3958,  3962,  3966,  3970,  3975,
    3980,  3984,  3988,  3996,  4000,  4004,  4012,  4016,  4020,  4024,
    4028,  4032,  4036,  4040,  4044,  4052,  4060,  4064,  4068,  4072,
    4076,  4080,  4088,  4089,  4093,  4094,  4100,  4106,  4118,  4136,
    4137,  4146,  4167,  4188,  4189,  4193,  4194,  4197,  4198,  4204,
    4205,  4212,  4213,  4220,  4244,  4245,  4262,  4263,  4266,  4267,
    4274,  4275,  4280,  4291,  4302,  4313,  4324,  4353,  4352,  4361,
    4362,  4366,  4367,  4370,  4371,  4384,  4397,  4418,  4427,  4441,
    4443,  4442,  4462,  4464,  4463,  4479,  4481,  4480,  4489,  4490,
    4497,  4496,  4509,  4510,  4511,  4518,  4523,  4527,  4528,  4534,
    4541,  4545,  4546,  4552,  4589,  4593,  4598,  4604,  4605,  4610,
    4611,  4612,  4613,  4614,  4618,  4625,  4632,  4639,  4646,  4652,
    4653,  4658,  4657,  4664,  4665,  4669,  4670,  4671,  4672,  4673,
    4674,  4675,  4676,  4677,  4678,  4679,  4680,  4681,  4682,  4683,
    4684,  4688,  4695,  4696,  4697,  4698,  4699,  4700,  4701,  4704,
    4705,  4706,  4709,  4710,  4714,  4721,  4727,  4728,  4732,  4733,
    4737,  4744,  4748,  4755,  4756,  4760,  4767,  4768,  4772,  4773,
    4777,  4778,  4779,  4783,  4784,  4788,  4789,  4793,  4800,  4807,
    4815,  4817,  4816,  4837,  4838,  4842,  4843,  4848,  4850,  4849,
    4906,  4924,  4925,  4929,  4933,  4937,  4941,  4945,  4949,  4953,
    4957,  4961,  4965,  4969,  4973,  4977,  4981,  4985,  4989,  4993,
    4998,  5002,  5006,  5011,  5016,  5021,  5026,  5027,  5028,  5029,
    5030,  5031,  5032,  5033,  5034,  5041,  5046,  5055,  5056,  5060,
    5061,  5066,  5069,  5073,  5081,  5084,  5088,  5096,  5107,  5115,
    5117,  5127,  5116,  5154,  5154,  5187,  5191,  5190,  5204,  5203,
    5223,  5224,  5229,  5236,  5238,  5242,  5252,  5254,  5262,  5270,
    5278,  5307,  5338,  5340,  5350,  5355,  5382,  5384,  5383,  5420,
    5421,  5425,  5426,  5427,  5444,  5445,  5456,  5455,  5505,  5506,
    5510,  5558,  5571,  5574,  5593,  5598,  5592,  5611,  5611,  5641,
    5648,  5649,  5650,  5651,  5652,  5653,  5654,  5655,  5656,  5657,
    5658,  5659,  5660,  5661,  5662,  5663,  5664,  5665,  5666,  5667,
    5668,  5669,  5670,  5671,  5672,  5673,  5674,  5675,  5676,  5677,
    5678,  5679,  5680,  5681,  5682,  5683,  5684,  5685,  5686,  5687,
    5688,  5689,  5690,  5691,  5692,  5693,  5694,  5695,  5696,  5697,
    5711,  5723,  5722,  5738,  5744,  5748,  5752,  5757,  5762,  5767,
    5772,  5776,  5780,  5784,  5788,  5793,  5797,  5801,  5805,  5809,
    5813,  5817,  5824,  5825,  5832,  5833,  5837,  5838,  5842,  5843,
    5844,  5845,  5846,  5850,  5854,  5855,  5858,  5859,  5862,  5863,
    5869,  5870,  5874,  5875,  5879,  5883,  5889,  5893,  5897,  5901,
    5905,  5909,  5913,  5917,  5921,  5925,  5929,  5933,  5937,  5941,
    5945,  5949,  5953,  5959,  5963,  5967,  5971,  5975,  5979,  5983,
    5990,  5991,  5995,  5999,  6017,  6016,  6025,  6029,  6033,  6039,
    6040,  6047,  6051,  6062,  6061,  6070,  6074,  6086,  6087,  6095,
    6094,  6103,  6104,  6108,  6114,  6114,  6121,  6120,  6130,  6150,
    6154,  6159,  6164,  6185,  6189,  6188,  6205,  6206,  6211,  6219,
    6243,  6245,  6249,  6258,  6271,  6274,  6278,  6282,  6305,  6306,
    6310,  6311,  6316,  6319,  6327,  6331,  6339,  6343,  6354,  6353,
    6361,  6365,  6376,  6375,  6383,  6388,  6396,  6397,  6398,  6399,
    6400,  6408,  6407,  6416,  6423,  6427,  6437,  6448,  6466,  6465,
    6474,  6478,  6482,  6487,  6495,  6499,  6510,  6509,  6519,  6523,
    6527,  6531,  6535,  6539,  6540,  6549,  6551,  6550,  6558,  6567,
    6574,  6578,  6582,  6586,  6596,  6598,  6602,  6603,  6606,  6608,
    6615,  6616,  6620,  6621,  6626,  6630,  6634,  6638,  6642,  6646,
    6650,  6654,  6658,  6662,  6666,  6670,  6674,  6678,  6682,  6686,
    6693,  6697,  6708,  6707,  6716,  6720,  6724,  6728,  6732,  6739,
    6743,  6754,  6753,  6762,  6781,  6780,  6804,  6812,  6813,  6818,
    6829,  6840,  6854,  6858,  6865,  6866,  6871,  6880,  6889,  6894,
    6903,  6904,  6909,  6971,  6972,  6973,  6977,  6978,  6982,  6986,
    6997,  6996,  7008,  7009,  7030,  7044,  7066,  7088,  7108,  7131,
    7132,  7140,  7139,  7148,  7159,  7158,  7168,  7175,  7174,  7187,
    7196,  7200,  7211,  7227,  7226,  7235,  7239,  7243,  7250,  7254,
    7265,  7264,  7272,  7280,  7281,  7285,  7286,  7287,  7292,  7295,
    7302,  7306,  7314,  7321,  7322,  7323,  7324,  7325,  7326,  7327,
    7332,  7335,  7345,  7344,  7353,  7359,  7371,  7370,  7379,  7383,
    7387,  7391,  7398,  7399,  7400,  7401,  7408,  7407,  7421,  7431,
    7440,  7441,  7445,  7446,  7447,  7448,  7449,  7450,  7454,  7455,
    7459,  7464,  7471,  7472,  7473,  7474,  7475,  7479,  7507,  7510,
    7517,  7521,  7531,  7530,  7543,  7542,  7550,  7554,  7565,  7564,
    7573,  7577,  7584,  7588,  7599,  7598,  7606,  7627,  7651,  7652,
    7653,  7654,  7658,  7659,  7663,  7664,  7665,  7666,  7678,  7677,
    7688,  7694,  7693,  7704,  7712,  7720,  7727,  7731,  7744,  7751,
    7763,  7766,  7771,  7775,  7786,  7793,  7794,  7798,  7799,  7802,
    7803,  7808,  7819,  7818,  7827,  7854,  7855,  7860,  7863,  7867,
    7871,  7875,  7879,  7883,  7890,  7891,  7895,  7896,  7900,  7904,
    7914,  7925,  7924,  7932,  7942,  7953,  7952,  7961,  7968,  7972,
    7983,  7982,  7994,  8003,  8006,  8010,  8017,  8021,  8031,  8043,
    8042,  8051,  8055,  8064,  8065,  8070,  8073,  8081,  8085,  8092,
    8100,  8104,  8115,  8114,  8128,  8129,  8130,  8131,  8132,  8133,
    8137,  8138,  8142,  8143,  8149,  8158,  8165,  8166,  8170,  8174,
    8178,  8182,  8186,  8190,  8194,  8198,  8207,  8211,  8220,  8229,
    8230,  8234,  8243,  8244,  8248,  8252,  8263,  8262,  8271,  8270,
    8301,  8304,  8324,  8325,  8328,  8329,  8337,  8338,  8343,  8348,
    8358,  8374,  8379,  8389,  8406,  8405,  8415,  8428,  8431,  8439,
    8442,  8447,  8452,  8460,  8461,  8462,  8463,  8464,  8465,  8469,
    8477,  8478,  8482,  8486,  8497,  8496,  8506,  8519,  8522,  8526,
    8534,  8546,  8549,  8556,  8557,  8558,  8559,  8566,  8565,  8574,
    8581,  8582,  8586,  8587,  8588,  8592,  8593,  8597,  8601,  8612,
    8611,  8620,  8624,  8628,  8635,  8639,  8649,  8660,  8661,  8668,
    8667,  8676,  8682,  8694,  8693,  8701,  8715,  8714,  8722,  8735,
    8737,  8738,  8746,  8745,  8754,  8762,  8763,  8768,  8769,  8774,
    8781,  8782,  8787,  8794,  8795,  8799,  8800,  8804,  8805,  8809,
    8813,  8824,  8823,  8832,  8833,  8834,  8835,  8836,  8840,  8867,
    8870,  8882,  8892,  8897,  8902,  8907,  8915,  8953,  8954,  8958,
    8998,  9008,  9031,  9032,  9033,  9034,  9038,  9047,  9053,  9063,
    9072,  9081,  9082,  9089,  9088,  9100,  9110,  9111,  9116,  9119,
    9123,  9127,  9134,  9135,  9139,  9140,  9144,  9148,  9160,  9163,
    9164,  9173,  9174,  9183,  9186,  9187,  9196,  9197,  9208,  9211,
    9212,  9221,  9222,  9234,  9237,  9239,  9249,  9250,  9262,  9263,
    9267,  9268,  9269,  9273,  9282,  9293,  9294,  9295,  9299,  9308,
    9319,  9324,  9325,  9334,  9335,  9346,  9350,  9360,  9367,  9374,
    9374,  9384,  9385,  9386,  9390,  9399,  9400,  9402,  9403,  9404,
    9405,  9406,  9408,  9409,  9410,  9411,  9412,  9413,  9415,  9416,
    9417,  9419,  9420,  9421,  9422,  9423,  9426,  9427,  9431,  9432,
    9436,  9437,  9441,  9442,  9446,  9450,  9456,  9460,  9466,  9467,
    9468,  9472,  9473,  9474,  9478,  9479,  9480,  9484,  9488,  9492,
    9493,  9494,  9497,  9498,  9508,  9520,  9529,  9541,  9550,  9562,
    9577,  9578,  9583,  9592,  9598,  9618,  9622,  9643,  9684,  9698,
    9699,  9704,  9710,  9711,  9716,  9728,  9729,  9730,  9737,  9748,
    9749,  9753,  9761,  9769,  9773,  9780,  9789,  9790,  9796,  9810,
    9827,  9831,  9838,  9839,  9840,  9847,  9851,  9858,  9859,  9860,
    9861,  9862,  9866,  9870,  9874,  9878,  9882,  9903,  9907,  9914,
    9915,  9916,  9920,  9921,  9922,  9923,  9924,  9928,  9932,  9939,
    9940,  9944,  9945,  9949,  9950,  9954,  9955,  9966,  9967,  9971,
    9972,  9973,  9977,  9978,  9979,  9986,  9987,  9991,  9992,  9996,
    9997,  9998, 10004, 10008, 10012, 10013, 10017, 10021, 10028, 10035,
   10042, 10052, 10059, 10069, 10079, 10089, 10102, 10106, 10114, 10122,
   10126, 10136, 10151, 10174, 10197, 10213, 10214, 10215, 10216, 10217,
   10218, 10222, 10226, 10243, 10247, 10254, 10255, 10256, 10257, 10258,
   10259, 10260, 10266, 10270, 10274, 10278, 10282, 10286, 10290, 10294,
   10298, 10302, 10309, 10310, 10314, 10315, 10316, 10320, 10321, 10322,
   10323, 10324, 10325, 10329, 10333, 10337, 10344, 10348, 10352, 10359,
   10366, 10373, 10383, 10390, 10400, 10407, 10419, 10427, 10428, 10432,
   10433, 10437, 10438, 10443, 10446, 10454, 10457, 10464, 10466, 10467,
   10471, 10472, 10476, 10477, 10478, 10483, 10486, 10499, 10503, 10511,
   10515, 10519, 10523, 10527, 10531, 10535, 10539, 10546, 10547, 10553,
   10554, 10555, 10556, 10557, 10558, 10559, 10560, 10561, 10562, 10563,
   10564, 10565, 10566, 10567, 10568, 10569, 10570, 10571, 10572, 10573,
   10574, 10575, 10576, 10577, 10578, 10579, 10580, 10581, 10582, 10583,
   10584, 10585, 10586, 10587, 10588, 10589, 10590, 10591, 10592, 10593,
   10594, 10595, 10596, 10597, 10598, 10599, 10600, 10601, 10602, 10603,
   10604, 10605, 10606, 10607, 10608, 10609, 10610, 10611, 10612, 10613,
   10614, 10615, 10616, 10617, 10618, 10619, 10620, 10621, 10622, 10629,
   10629, 10630, 10630, 10631, 10631, 10632, 10632, 10633, 10633, 10634,
   10634, 10635, 10635, 10636, 10636, 10637, 10637, 10638, 10638, 10639,
   10639, 10640, 10640, 10641, 10641, 10642, 10642, 10643, 10643, 10644,
   10644, 10645, 10645, 10646, 10646, 10646, 10647, 10647, 10648, 10648,
   10649, 10649, 10650, 10650, 10651, 10651, 10651, 10652, 10652, 10653,
   10653, 10653, 10654, 10654, 10654, 10655, 10655, 10655, 10656, 10656,
   10657, 10657, 10658, 10658, 10659, 10659, 10659, 10660, 10660, 10661,
   10661, 10662, 10662, 10662, 10662, 10663, 10663, 10664, 10664, 10665,
   10665, 10666, 10666, 10667, 10667, 10668, 10668, 10669, 10669, 10670,
   10670, 10670, 10671, 10671, 10672, 10672, 10673, 10673, 10674, 10674,
   10675, 10675, 10676, 10676, 10677, 10677, 10678, 10678, 10678, 10679,
   10679, 10680, 10680, 10681, 10681, 10685, 10685, 10686, 10686, 10687,
   10687, 10688, 10688, 10689, 10689, 10690, 10690, 10691, 10691, 10692,
   10692, 10693, 10693, 10694, 10694, 10695, 10695, 10696, 10696, 10697,
   10697, 10698, 10698, 10699, 10699, 10700, 10700, 10703, 10704, 10705,
   10709, 10709, 10710, 10710, 10711, 10711, 10712, 10712, 10713, 10713,
   10714, 10714, 10715, 10715, 10716, 10716
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
  "CAPACITY", "CF", "CH", "CHAINING", "CHARACTER", "CHARACTERS", "CLASS",
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
  "FOR", "\"FOREGROUND-COLOR\"", "FOREVER", "\"FUNCTION FORMATTED-DATE\"",
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
  "SYMBOLIC", "SYNCHRONIZED", "\"SYSTEM-DEFAULT\"", "TAB", "TALLYING",
  "TAPE", "TERMINATE", "TEST", "THAN", "THEN", "THRU", "TIME", "TIMEOUT",
  "TIMES", "TO", "\"&\"", "\")\"", "\":\"", "\"/\"", "\".\"", "\"=\"",
  "\"FALSE\"", "\"FILE\"", "\">\"", "\"INITIAL\"", "\"<\"", "\"-\"",
  "\"*\"", "\"NULL\"", "\"OVERFLOW\"", "\"(\"", "\"+\"", "\"TRUE\"", "TOP",
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
  "YYYYMMDD", "ZERO", "SHIFT_PREFER", "$accept", "start", "$@1",
  "nested_list", "nested_progs", "source_element", "simple_prog", "$@2",
  "program_definition", "program_mandatory", "function_definition",
  "nested_prog", "end_program", "end_mandatory", "end_function",
  "end_function_mandatory", "program_body", "$@3", "$@4", "$@5",
  "program_identification", "$@6", "function_identification",
  "program_name", "as_literal", "program_type", "program_type_clause",
  "_init_or_recurs", "environment_header", "configuration_header",
  "configuration_list", "configuration_paragraph",
  "source_computer_paragraph", "$@7", "source_computer_entry",
  "with_debugging_mode", "object_computer_paragraph", "$@8",
  "object_computer_entry", "object_clauses_list", "object_clauses",
  "object_computer_memory", "object_computer_sequence",
  "object_computer_segment", "object_computer_class", "locale_class",
  "computer_words", "repository_paragraph", "$@9", "repository_entry",
  "repository_list", "repository_name", "user_or_intrinsic",
  "_as_literal_intrinsic", "repository_name_list",
  "special_names_paragraph", "special_names_entry", "special_name_list",
  "special_name", "mnemonic_name_clause", "$@10", "mnemonic_choices",
  "special_name_mnemonic_on_off", "on_off_clauses", "alphabet_name_clause",
  "@11", "alphabet_definition", "alphabet_literal_list",
  "alphabet_literal", "@12", "alphabet_also_sequence", "alphabet_lits",
  "space_or_zero", "symbolic_characters_clause", "sym_in_word",
  "symbolic_collection", "symbolic_chars_list", "symbolic_chars_phrase",
  "char_list", "integer_list", "class_name_clause", "class_item_list",
  "class_item", "locale_clause", "currency_sign_clause", "with_pic_symbol",
  "decimal_point_clause", "numeric_sign_clause", "cursor_clause",
  "crt_status_clause", "screen_control", "event_status",
  "input_output_header", "file_control_header", "i_o_control_header",
  "file_control_sequence", "file_control_entry", "$@13",
  "select_clause_sequence", "select_clause", "assign_clause",
  "device_name", "_line_adv_file", "_ext_clause", "assignment_name",
  "opt_assignment_name", "access_mode_clause", "access_mode",
  "alternative_record_key_clause", "suppress_clause",
  "collating_sequence_clause", "file_status_clause", "file_or_sort",
  "lock_mode_clause", "$@14", "lock_mode", "lock_with",
  "organization_clause", "organization", "padding_character_clause",
  "record_delimiter_clause", "record_key_clause", "opt_splitk",
  "relative_key_clause", "reserve_clause", "no_or_integer",
  "sharing_clause", "sharing_option", "opt_i_o_control",
  "i_o_control_list", "i_o_control_clause", "same_clause", "same_option",
  "multiple_file_tape_clause", "$@15", "multiple_file_list",
  "multiple_file", "multiple_file_position", "data_division_header",
  "file_section_header", "file_description_sequence", "file_description",
  "file_description_entry", "$@16", "file_type",
  "file_description_clause_sequence", "file_description_clause",
  "block_contains_clause", "_records_or_characters", "record_clause",
  "record_depending", "opt_from_integer", "opt_to_integer",
  "label_records_clause", "value_of_clause", "file_id", "valueof_name",
  "data_records_clause", "linage_clause", "linage_sequence",
  "linage_lines", "linage_footing", "linage_top", "linage_bottom",
  "recording_mode_clause", "code_set_clause", "report_clause",
  "report_keyword", "rep_name_list", "working_storage_section", "$@17",
  "record_description_list", "$@18", "record_description_list_2",
  "data_description", "$@19", "level_number", "entry_name", "const_name",
  "const_global", "lit_or_length", "con_identifier", "fp32_usage",
  "fp64_usage", "fp128_usage", "pointer_len", "constant_entry",
  "constant_source", "data_description_clause_sequence",
  "data_description_clause", "redefines_clause", "external_clause",
  "as_extname", "global_clause", "picture_clause", "usage_clause", "usage",
  "float_usage", "double_usage", "sign_clause", "report_occurs_clause",
  "occurs_step", "occurs_clause", "occurs_to_integer",
  "occurs_from_integer", "occurs_depending", "capacity_in",
  "occurs_initialized", "occurs_keys", "occurs_key_list",
  "ascending_or_descending", "occurs_indexed", "occurs_index_list",
  "occurs_index", "justified_clause", "synchronized_clause",
  "blank_clause", "based_clause", "value_clause", "$@20",
  "value_item_list", "value_item", "false_is", "renames_clause",
  "any_length_clause", "local_storage_section", "$@21", "linkage_section",
  "$@22", "report_section", "$@23", "report_description_sequence",
  "report_description", "$@24", "report_description_options",
  "report_description_option", "control_clause", "control_field_list",
  "identifier_list", "page_limit_clause", "page_line_column",
  "page_heading_list", "page_detail", "heading_clause", "first_detail",
  "last_heading", "last_detail", "footing_clause",
  "report_group_description_list", "report_group_description_entry",
  "$@25", "report_group_options", "report_group_option", "type_clause",
  "type_option", "control_final", "or_page", "next_group_clause",
  "sum_clause_list", "reset_clause", "data_or_final",
  "present_when_condition", "varying_clause", "line_clause",
  "line_keyword_clause", "column_clause", "col_keyword_clause",
  "report_line_integer_list", "line_or_plus", "report_col_integer_list",
  "col_or_plus", "source_clause", "group_indicate_clause",
  "report_usage_clause", "screen_section", "$@26",
  "opt_screen_description_list", "screen_description_list",
  "screen_description", "$@27", "screen_options", "screen_option",
  "plus_plus", "minus_minus", "screen_line_plus_minus",
  "screen_col_plus_minus", "screen_occurs_clause", "global_screen_opt",
  "procedure_division", "$@28", "$@29", "$@30", "procedure_using_chaining",
  "$@31", "$@32", "procedure_param_list", "procedure_param",
  "procedure_type", "size_optional", "procedure_optional",
  "procedure_returning", "procedure_declaratives", "$@33",
  "procedure_list", "procedure", "section_header", "$@34",
  "opt_use_statement", "paragraph_header", "invalid_statement",
  "opt_segment", "statement_list", "@35", "@36", "statements", "$@37",
  "statement", "accept_statement", "$@38", "accept_body",
  "accp_identifier", "lines_or_number", "opt_at_line_column",
  "at_line_column", "line_number", "column_number", "opt_at_from",
  "opt_at_block", "opt_accp_attr", "accp_attrs", "accp_attr",
  "update_default", "end_accept", "add_statement", "$@39", "add_body",
  "add_to", "end_add", "allocate_statement", "$@40", "allocate_body",
  "allocate_returning", "alter_statement", "$@41", "alter_body",
  "alter_entry", "_proceed_to", "call_statement", "$@42", "call_body",
  "mnemonic_conv", "call_using", "$@43", "call_param_list", "call_param",
  "call_type", "call_returning", "return_give", "null_or_omitted",
  "call_on_exception", "call_not_on_exception", "end_call",
  "cancel_statement", "$@44", "cancel_body", "close_statement", "$@45",
  "close_body", "close_option", "compute_statement", "$@46",
  "compute_body", "end_compute", "commit_statement", "continue_statement",
  "delete_statement", "$@47", "delete_body", "delete_file_list",
  "end_delete", "display_statement", "$@48", "display_body",
  "display_list", "$@49", "display_atom", "display_upon",
  "display_upon_crt", "crt_under", "with_clause", "with_no_adv_clause",
  "disp_attrs", "disp_attr", "end_display", "divide_statement", "$@50",
  "divide_body", "end_divide", "entry_statement", "$@51", "entry_body",
  "evaluate_statement", "$@52", "evaluate_body", "evaluate_subject_list",
  "evaluate_subject", "evaluate_condition_list", "evaluate_case_list",
  "evaluate_case", "evaluate_other", "evaluate_when_list",
  "evaluate_object_list", "evaluate_object", "opt_evaluate_thru_expr",
  "end_evaluate", "exit_statement", "$@53", "exit_body",
  "exit_program_returning", "free_statement", "$@54", "free_body",
  "generate_statement", "$@55", "generate_body", "goto_statement", "$@56",
  "go_body", "goto_depending", "goback_statement", "if_statement", "$@57",
  "if_else_statements", "end_if", "initialize_statement", "$@58",
  "initialize_body", "initialize_filler", "initialize_value",
  "initialize_replacing", "initialize_replacing_list",
  "initialize_replacing_item", "initialize_category", "initialize_default",
  "initiate_statement", "$@59", "initiate_body", "inspect_statement",
  "$@60", "inspect_body", "send_identifier", "inspect_list",
  "inspect_tallying", "$@61", "inspect_replacing", "inspect_converting",
  "tallying_list", "tallying_item", "replacing_list", "replacing_item",
  "rep_keyword", "replacing_region", "inspect_region",
  "inspect_before_after", "merge_statement", "$@62", "move_statement",
  "$@63", "move_body", "multiply_statement", "$@64", "multiply_body",
  "end_multiply", "open_statement", "$@65", "open_body", "open_mode",
  "open_sharing", "open_option", "perform_statement", "$@66",
  "perform_body", "$@67", "end_perform", "term_or_dot",
  "perform_procedure", "perform_option", "perform_test", "cond_or_exit",
  "perform_varying_list", "perform_varying", "read_statement", "$@68",
  "read_body", "read_into", "with_lock", "read_key", "read_handler",
  "end_read", "ready_statement", "release_statement", "$@69",
  "release_body", "reset_statement", "return_statement", "$@70",
  "return_body", "end_return", "rewrite_statement", "$@71", "rewrite_body",
  "write_lock", "end_rewrite", "rollback_statement", "search_statement",
  "$@72", "search_body", "search_varying", "search_at_end", "search_whens",
  "search_when", "end_search", "set_statement", "$@73", "set_body",
  "on_or_off", "up_or_down", "set_environment", "set_attr",
  "set_attr_clause", "set_attr_one", "set_to", "set_up_down",
  "set_to_on_off_sequence", "set_to_on_off", "set_to_true_false_sequence",
  "set_to_true_false", "sort_statement", "$@74", "sort_body", "@75",
  "sort_key_list", "opt_key_list", "sort_duplicates", "sort_collating",
  "sort_input", "sort_output", "start_statement", "$@76", "start_body",
  "sizelen_clause", "start_key", "start_op", "disallowed_op",
  "not_equal_op", "end_start", "stop_statement", "$@77", "stop_returning",
  "_opt_status", "stop_literal", "string_statement", "$@78", "string_body",
  "string_item_list", "string_item", "opt_with_pointer", "end_string",
  "subtract_statement", "$@79", "subtract_body", "end_subtract",
  "suppress_statement", "_printing", "terminate_statement", "$@80",
  "terminate_body", "transform_statement", "$@81", "transform_body",
  "unlock_statement", "$@82", "unlock_body", "opt_record",
  "unstring_statement", "$@83", "unstring_body", "unstring_delimited",
  "unstring_delimited_list", "unstring_delimited_item", "unstring_into",
  "unstring_into_item", "unstring_into_delimiter", "unstring_into_count",
  "unstring_tallying", "end_unstring", "use_statement", "$@84",
  "use_phrase", "use_file_exception", "use_global",
  "use_file_exception_target", "use_debugging", "debugging_list",
  "debugging_target", "all_refs", "use_start_end", "program_start_end",
  "use_reporting", "use_exception", "use_ex_keyw", "write_statement",
  "$@85", "write_body", "from_option", "write_option", "before_or_after",
  "write_handler", "end_write", "on_accp_exception",
  "opt_on_accp_exception", "opt_not_on_accp_exception",
  "on_disp_exception", "opt_on_disp_exception",
  "opt_not_on_disp_exception", "on_size_error", "opt_on_size_error",
  "opt_not_on_size_error", "on_overflow", "opt_on_overflow",
  "opt_not_on_overflow", "return_at_end", "at_end", "at_end_clause",
  "not_at_end_clause", "at_eop", "at_eop_clause", "not_at_eop_clause",
  "invalid_key", "opt_invalid_key_sentence",
  "opt_not_invalid_key_sentence", "_opt_scroll_lines", "condition", "expr",
  "partial_expr", "$@86", "expr_tokens", "expr_token", "eq", "gt", "lt",
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
  "_character", "_characters", "_contains", "_data", "_file", "_final",
  "_for", "_from", "_in", "_in_order", "_indicate", "_initial", "_into",
  "_is", "_is_are", "_key", "_left_or_right", "_line_or_lines", "_limits",
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
     765,   766,   767
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   513,   515,   514,   516,   516,   517,   517,   518,   518,
     520,   519,   521,   522,   523,   524,   524,   524,   525,   525,
     526,   527,   527,   528,   530,   531,   532,   529,   534,   533,
     535,   536,   536,   537,   537,   538,   538,   539,   539,   539,
     539,   540,   540,   541,   541,   542,   542,   543,   543,   544,
     544,   544,   544,   544,   546,   545,   547,   547,   548,   548,
     550,   549,   551,   551,   551,   551,   552,   552,   553,   553,
     553,   553,   554,   555,   556,   557,   558,   558,   558,   558,
     559,   559,   561,   560,   562,   562,   562,   563,   563,   564,
     564,   564,   565,   565,   566,   566,   567,   567,   568,   569,
     569,   570,   570,   571,   571,   571,   571,   571,   571,   571,
     571,   571,   571,   571,   571,   573,   572,   574,   574,   574,
     574,   575,   575,   576,   576,   578,   577,   579,   579,   579,
     579,   579,   579,   580,   580,   581,   581,   582,   581,   583,
     583,   584,   584,   584,   584,   584,   584,   585,   585,   586,
     587,   587,   588,   589,   589,   590,   591,   591,   592,   592,
     593,   594,   594,   595,   595,   596,   597,   598,   598,   599,
     600,   601,   602,   603,   604,   605,   605,   606,   606,   607,
     607,   608,   608,   610,   609,   609,   611,   611,   612,   612,
     612,   612,   612,   612,   612,   612,   612,   612,   612,   612,
     612,   613,   613,   613,   613,   613,   614,   614,   614,   614,
     615,   615,   616,   616,   616,   617,   617,   618,   618,   618,
     619,   620,   620,   620,   621,   622,   622,   622,   623,   624,
     625,   625,   625,   627,   626,   628,   628,   628,   629,   629,
     629,   629,   630,   630,   631,   631,   631,   631,   632,   633,
     634,   635,   635,   635,   636,   637,   638,   638,   639,   640,
     640,   640,   641,   641,   641,   642,   642,   643,   643,   644,
     645,   645,   645,   645,   647,   646,   648,   648,   649,   650,
     650,   651,   651,   652,   652,   653,   653,   654,   656,   655,
     655,   657,   657,   658,   658,   659,   659,   659,   659,   659,
     659,   659,   659,   659,   659,   659,   660,   661,   661,   661,
     662,   662,   662,   663,   663,   664,   664,   665,   665,   666,
     667,   667,   668,   668,   669,   669,   670,   671,   672,   672,
     673,   673,   673,   674,   675,   676,   677,   678,   679,   680,
     680,   681,   681,   682,   683,   682,   684,   685,   684,   686,
     686,   686,   687,   688,   687,   687,   689,   690,   690,   690,
     691,   692,   692,   693,   693,   693,   693,   694,   694,   694,
     694,   694,   694,   694,   694,   694,   694,   694,   694,   694,
     695,   695,   696,   696,   697,   697,   697,   698,   698,   699,
     700,   700,   701,   701,   702,   702,   702,   702,   702,   702,
     702,   702,   702,   702,   702,   702,   702,   702,   703,   704,
     705,   705,   706,   707,   708,   708,   709,   709,   709,   709,
     709,   709,   709,   709,   709,   709,   709,   709,   709,   709,
     709,   709,   709,   709,   709,   709,   709,   709,   709,   709,
     709,   709,   709,   709,   709,   709,   709,   709,   709,   709,
     709,   709,   710,   710,   711,   711,   712,   712,   713,   714,
     714,   715,   715,   716,   716,   717,   717,   718,   718,   719,
     719,   720,   720,   721,   722,   722,   723,   723,   724,   724,
     725,   725,   726,   727,   728,   729,   730,   732,   731,   733,
     733,   734,   734,   735,   735,   736,   736,   737,   737,   738,
     739,   738,   740,   741,   740,   742,   743,   742,   744,   744,
     746,   745,   747,   747,   747,   748,   748,   748,   748,   749,
     750,   751,   751,   752,   753,   753,   753,   754,   754,   755,
     755,   755,   755,   755,   756,   757,   758,   759,   760,   761,
     761,   763,   762,   764,   764,   765,   765,   765,   765,   765,
     765,   765,   765,   765,   765,   765,   765,   765,   765,   765,
     765,   766,   767,   767,   767,   767,   767,   767,   767,   768,
     768,   768,   769,   769,   770,   771,   772,   772,   773,   773,
     774,   775,   776,   777,   777,   778,   779,   779,   780,   780,
     781,   781,   781,   782,   782,   783,   783,   784,   785,   786,
     787,   788,   787,   789,   789,   790,   790,   791,   792,   791,
     791,   793,   793,   794,   794,   794,   794,   794,   794,   794,
     794,   794,   794,   794,   794,   794,   794,   794,   794,   794,
     794,   794,   794,   794,   794,   794,   794,   794,   794,   794,
     794,   794,   794,   794,   794,   794,   794,   795,   795,   796,
     796,   797,   797,   797,   798,   798,   798,   799,   800,   801,
     802,   803,   801,   804,   801,   805,   806,   805,   807,   805,
     808,   808,   809,   810,   810,   810,   811,   811,   811,   811,
     811,   811,   812,   812,   813,   813,   814,   815,   814,   816,
     816,   817,   817,   817,   817,   817,   819,   818,   820,   820,
     821,   822,   823,   823,   825,   826,   824,   828,   827,   827,
     829,   829,   829,   829,   829,   829,   829,   829,   829,   829,
     829,   829,   829,   829,   829,   829,   829,   829,   829,   829,
     829,   829,   829,   829,   829,   829,   829,   829,   829,   829,
     829,   829,   829,   829,   829,   829,   829,   829,   829,   829,
     829,   829,   829,   829,   829,   829,   829,   829,   829,   829,
     829,   831,   830,   832,   832,   832,   832,   832,   832,   832,
     832,   832,   832,   832,   832,   832,   832,   832,   832,   832,
     832,   832,   833,   833,   834,   834,   835,   835,   836,   836,
     836,   836,   836,   837,   838,   838,   839,   839,   840,   840,
     841,   841,   842,   842,   843,   843,   843,   843,   843,   843,
     843,   843,   843,   843,   843,   843,   843,   843,   843,   843,
     843,   843,   843,   843,   843,   843,   843,   843,   843,   843,
     844,   844,   845,   845,   847,   846,   848,   848,   848,   849,
     849,   850,   850,   852,   851,   853,   853,   854,   854,   856,
     855,   857,   857,   858,   859,   859,   861,   860,   862,   863,
     863,   863,   863,   864,   865,   864,   866,   866,   867,   867,
     868,   868,   868,   868,   869,   869,   869,   869,   870,   870,
     871,   871,   872,   872,   873,   873,   874,   874,   876,   875,
     877,   877,   879,   878,   880,   880,   881,   881,   881,   881,
     881,   883,   882,   884,   885,   885,   886,   887,   889,   888,
     890,   890,   891,   891,   892,   892,   894,   893,   895,   895,
     895,   895,   895,   895,   895,   896,   897,   896,   898,   899,
     899,   899,   899,   899,   900,   900,   901,   901,   902,   902,
     903,   903,   904,   904,   905,   905,   905,   905,   905,   905,
     905,   905,   905,   905,   905,   905,   905,   905,   905,   905,
     906,   906,   908,   907,   909,   909,   909,   909,   909,   910,
     910,   912,   911,   913,   915,   914,   916,   917,   917,   918,
     918,   918,   919,   919,   920,   920,   921,   922,   923,   923,
     924,   924,   925,   925,   925,   925,   926,   926,   927,   927,
     929,   928,   930,   930,   930,   930,   930,   930,   930,   931,
     931,   933,   932,   934,   936,   935,   937,   939,   938,   940,
     941,   941,   942,   944,   943,   945,   945,   945,   946,   946,
     948,   947,   949,   950,   950,   951,   951,   951,   952,   952,
     953,   953,   954,   955,   955,   955,   955,   955,   955,   955,
     956,   956,   958,   957,   959,   959,   961,   960,   962,   963,
     963,   963,   964,   964,   964,   964,   966,   965,   967,   968,
     969,   969,   970,   970,   970,   970,   970,   970,   971,   971,
     972,   972,   973,   973,   973,   973,   973,   974,   975,   975,
     976,   976,   978,   977,   980,   979,   981,   981,   983,   982,
     984,   984,   985,   985,   987,   986,   988,   988,   989,   989,
     989,   989,   990,   990,   991,   991,   991,   991,   993,   992,
     994,   995,   994,   994,   996,   996,   997,   997,   998,   998,
     999,   999,   999,   999,   999,  1000,  1000,  1001,  1001,  1002,
    1002,  1003,  1005,  1004,  1006,  1007,  1007,  1008,  1008,  1008,
    1008,  1008,  1008,  1008,  1009,  1009,  1010,  1010,  1011,  1011,
    1012,  1014,  1013,  1015,  1016,  1018,  1017,  1019,  1020,  1020,
    1022,  1021,  1023,  1024,  1024,  1024,  1025,  1025,  1026,  1028,
    1027,  1029,  1029,  1030,  1030,  1031,  1031,  1032,  1032,  1033,
    1034,  1034,  1036,  1035,  1037,  1037,  1037,  1037,  1037,  1037,
    1038,  1038,  1039,  1039,  1040,  1041,  1042,  1042,  1043,  1043,
    1043,  1043,  1043,  1043,  1043,  1043,  1044,  1044,  1045,  1046,
    1046,  1047,  1048,  1048,  1049,  1049,  1051,  1050,  1053,  1052,
    1054,  1054,  1055,  1055,  1056,  1056,  1057,  1057,  1058,  1058,
    1058,  1059,  1059,  1059,  1061,  1060,  1062,  1063,  1063,  1064,
    1064,  1064,  1064,  1065,  1065,  1065,  1065,  1065,  1065,  1066,
    1067,  1067,  1068,  1068,  1070,  1069,  1069,  1071,  1071,  1071,
    1071,  1072,  1072,  1073,  1073,  1073,  1073,  1075,  1074,  1076,
    1077,  1077,  1078,  1078,  1078,  1079,  1079,  1080,  1080,  1082,
    1081,  1083,  1083,  1083,  1084,  1084,  1085,  1086,  1086,  1088,
    1087,  1089,  1089,  1091,  1090,  1092,  1094,  1093,  1095,  1096,
    1096,  1096,  1098,  1097,  1099,  1100,  1100,  1101,  1101,  1102,
    1103,  1103,  1104,  1105,  1105,  1106,  1106,  1107,  1107,  1108,
    1108,  1110,  1109,  1111,  1111,  1111,  1111,  1111,  1112,  1113,
    1113,  1114,  1114,  1114,  1114,  1114,  1115,  1116,  1116,  1117,
    1117,  1117,  1118,  1118,  1118,  1118,  1119,  1120,  1120,  1121,
    1122,  1123,  1123,  1125,  1124,  1126,  1127,  1127,  1128,  1128,
    1128,  1128,  1129,  1129,  1130,  1130,  1131,  1131,  1132,  1133,
    1133,  1134,  1134,  1135,  1136,  1136,  1137,  1137,  1138,  1139,
    1139,  1140,  1140,  1141,  1142,  1142,  1143,  1143,  1144,  1144,
    1145,  1145,  1145,  1146,  1147,  1148,  1148,  1148,  1149,  1150,
    1151,  1152,  1152,  1153,  1153,  1154,  1154,  1155,  1156,  1158,
    1157,  1159,  1159,  1159,  1160,  1160,  1160,  1160,  1160,  1160,
    1160,  1160,  1160,  1160,  1160,  1160,  1160,  1160,  1160,  1160,
    1160,  1160,  1160,  1160,  1160,  1160,  1160,  1160,  1161,  1161,
    1162,  1162,  1163,  1163,  1164,  1165,  1166,  1166,  1167,  1167,
    1167,  1168,  1168,  1168,  1169,  1169,  1169,  1170,  1170,  1171,
    1171,  1171,  1172,  1172,  1173,  1173,  1173,  1173,  1173,  1173,
    1174,  1174,  1175,  1176,  1177,  1178,  1178,  1179,  1180,  1181,
    1181,  1182,  1183,  1183,  1184,  1185,  1185,  1185,  1186,  1187,
    1187,  1188,  1189,  1190,  1190,  1191,  1192,  1192,  1193,  1194,
    1195,  1195,  1196,  1196,  1196,  1197,  1197,  1198,  1198,  1198,
    1198,  1198,  1198,  1198,  1198,  1198,  1198,  1199,  1199,  1200,
    1200,  1200,  1201,  1201,  1201,  1201,  1201,  1201,  1201,  1202,
    1202,  1203,  1203,  1204,  1204,  1205,  1205,  1206,  1206,  1207,
    1207,  1207,  1208,  1208,  1208,  1209,  1209,  1210,  1210,  1211,
    1211,  1211,  1212,  1213,  1214,  1214,  1215,  1216,  1216,  1216,
    1216,  1217,  1218,  1218,  1218,  1218,  1219,  1219,  1220,  1221,
    1221,  1222,  1223,  1224,  1225,  1225,  1225,  1225,  1225,  1225,
    1225,  1226,  1226,  1227,  1227,  1228,  1228,  1228,  1228,  1228,
    1228,  1228,  1229,  1229,  1229,  1229,  1229,  1229,  1229,  1229,
    1229,  1229,  1230,  1230,  1231,  1231,  1231,  1232,  1232,  1232,
    1232,  1232,  1232,  1233,  1233,  1233,  1234,  1234,  1234,  1235,
    1235,  1235,  1236,  1236,  1237,  1237,  1238,  1239,  1239,  1240,
    1240,  1241,  1241,  1242,  1242,  1243,  1243,  1244,  1244,  1244,
    1245,  1245,  1246,  1246,  1246,  1247,  1247,  1248,  1248,  1249,
    1249,  1249,  1249,  1249,  1249,  1249,  1249,  1250,  1250,  1251,
    1251,  1251,  1251,  1251,  1251,  1251,  1251,  1251,  1251,  1251,
    1251,  1251,  1251,  1251,  1251,  1251,  1251,  1251,  1251,  1251,
    1251,  1251,  1251,  1251,  1251,  1251,  1251,  1251,  1251,  1251,
    1251,  1251,  1251,  1251,  1251,  1251,  1251,  1251,  1251,  1251,
    1251,  1251,  1251,  1251,  1251,  1251,  1251,  1251,  1251,  1251,
    1251,  1251,  1251,  1251,  1251,  1251,  1251,  1251,  1251,  1251,
    1251,  1251,  1251,  1251,  1251,  1251,  1251,  1251,  1251,  1252,
    1252,  1253,  1253,  1254,  1254,  1255,  1255,  1256,  1256,  1257,
    1257,  1258,  1258,  1259,  1259,  1260,  1260,  1261,  1261,  1262,
    1262,  1263,  1263,  1264,  1264,  1265,  1265,  1266,  1266,  1267,
    1267,  1268,  1268,  1269,  1269,  1269,  1270,  1270,  1271,  1271,
    1272,  1272,  1273,  1273,  1274,  1274,  1274,  1275,  1275,  1276,
    1276,  1276,  1277,  1277,  1277,  1278,  1278,  1278,  1279,  1279,
    1280,  1280,  1281,  1281,  1282,  1282,  1282,  1283,  1283,  1284,
    1284,  1285,  1285,  1285,  1285,  1286,  1286,  1287,  1287,  1288,
    1288,  1289,  1289,  1290,  1290,  1291,  1291,  1292,  1292,  1293,
    1293,  1293,  1294,  1294,  1295,  1295,  1296,  1296,  1297,  1297,
    1298,  1298,  1299,  1299,  1300,  1300,  1301,  1301,  1301,  1302,
    1302,  1303,  1303,  1304,  1304,  1305,  1305,  1306,  1306,  1307,
    1307,  1308,  1308,  1309,  1309,  1310,  1310,  1311,  1311,  1312,
    1312,  1313,  1313,  1314,  1314,  1315,  1315,  1316,  1316,  1317,
    1317,  1318,  1318,  1319,  1319,  1320,  1320,  1321,  1321,  1321,
    1322,  1322,  1323,  1323,  1324,  1324,  1325,  1325,  1326,  1326,
    1327,  1327,  1328,  1328,  1329,  1329
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
       3,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       0,     2,     3,     1,     2,     3,     1,     2,     1,     2,
       4,     1,     2,     1,     3,     4,     5,     0,     3,     3,
       5,     3,     4,     3,     3,     0,     3,     0,     2,     0,
       2,     0,     2,     0,     6,     3,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     5,     5,     5,     5,     5,     1,     1,     1,     1,
       0,     3,     0,     1,     1,     1,     1,     0,     1,     1,
       4,     1,     1,     1,     7,     0,     4,     3,     3,     4,
       0,     1,     1,     0,     5,     2,     2,     1,     0,     4,
       5,     2,     3,     1,     1,     3,     1,     2,     4,     4,
       4,     1,     3,     4,     4,     3,     1,     1,     3,     2,
       2,     2,     0,     2,     3,     1,     2,     1,     1,     5,
       0,     1,     1,     1,     0,     6,     1,     2,     2,     0,
       2,     0,     3,     0,     3,     0,     2,     2,     0,     5,
       3,     1,     1,     0,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     0,     1,     1,
       4,     6,     9,     0,     3,     0,     2,     0,     2,     3,
       5,     5,     1,     1,     1,     1,     3,     5,     0,     2,
       1,     1,     1,     4,     2,     2,     4,     3,     2,     2,
       2,     1,     2,     0,     0,     5,     0,     0,     2,     2,
       3,     2,     1,     0,     4,     3,     2,     0,     1,     1,
       1,     0,     2,     1,     2,     2,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       2,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     3,
       0,     2,     2,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     6,     0,
       2,     7,     8,     0,     2,     0,     2,     0,     3,     0,
       3,     0,     1,     1,     0,     5,     1,     1,     0,     3,
       1,     2,     1,     2,     2,     3,     1,     0,     5,     1,
       2,     1,     3,     0,     4,     2,     4,     2,     2,     0,
       0,     5,     0,     0,     5,     0,     0,     5,     0,     2,
       0,     6,     0,     2,     2,     2,     3,     1,     1,     2,
       2,     1,     2,     4,     1,     4,     2,     0,     2,     1,
       1,     1,     1,     1,     3,     4,     4,     4,     3,     0,
       2,     0,     5,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     2,     1,     2,     1,     1,     0,
       2,     2,     0,     2,     4,     4,     0,     3,     1,     1,
       3,     6,     2,     3,     2,     2,     3,     2,     1,     2,
       2,     1,     1,     1,     2,     2,     1,     4,     2,     3,
       0,     0,     5,     0,     1,     2,     3,     1,     0,     4,
       3,     0,     2,     2,     2,     1,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     1,     5,     5,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     1,     1,     1,
       1,     0,     1,     1,     0,     1,     1,     3,     2,     0,
       0,     0,     9,     0,     4,     0,     0,     3,     0,     3,
       1,     2,     4,     0,     2,     2,     0,     3,     3,     4,
       4,     3,     0,     1,     0,     2,     0,     0,     7,     0,
       2,     1,     1,     2,     1,     1,     0,     6,     0,     2,
       2,     1,     0,     1,     0,     0,     3,     0,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     0,     4,     6,     3,     3,     4,     3,     4,     3,
       3,     4,     4,     3,     4,     3,     4,     5,     3,     4,
       3,     3,     1,     1,     1,     2,     0,     1,     3,     3,
       2,     2,     2,     3,     3,     3,     0,     1,     0,     3,
       0,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     1,     1,     1,
       1,     1,     2,     1,     1,     3,     3,     3,     3,     3,
       1,     1,     0,     1,     0,     4,     4,     5,     6,     0,
       2,     0,     1,     0,     3,     3,     4,     0,     2,     0,
       3,     1,     2,     4,     0,     2,     0,     4,     6,     0,
       1,     1,     1,     0,     0,     3,     1,     2,     2,     3,
       0,     2,     2,     2,     0,     3,     2,     4,     1,     1,
       1,     1,     0,     2,     0,     2,     0,     1,     0,     3,
       1,     2,     0,     3,     2,     3,     0,     1,     3,     3,
       2,     0,     4,     4,     0,     1,     1,     1,     0,     4,
       3,     2,     1,     2,     0,     1,     0,     4,     3,     3,
       3,     3,     4,     2,     4,     1,     0,     3,     5,     0,
       2,     2,     2,     2,     0,     2,     1,     1,     0,     2,
       0,     1,     1,     2,     1,     2,     2,     1,     1,     2,
       2,     1,     1,     1,     1,     1,     3,     3,     3,     3,
       0,     1,     0,     4,     4,     6,     6,     8,     8,     0,
       1,     0,     3,     2,     0,     4,     2,     1,     3,     1,
       1,     1,     2,     1,     1,     2,     2,     3,     2,     3,
       1,     3,     2,     1,     1,     1,     0,     2,     0,     1,
       0,     3,     0,     2,     1,     2,     1,     1,     1,     0,
       2,     0,     3,     1,     0,     3,     1,     0,     3,     3,
       0,     3,     2,     0,     6,     3,     2,     1,     0,     1,
       0,     3,     5,     0,     2,     0,     3,     3,     0,     2,
       1,     2,     4,     1,     1,     1,     1,     1,     1,     1,
       0,     3,     0,     3,     1,     2,     0,     3,     2,     1,
       1,     1,     2,     1,     1,     1,     0,     3,     2,     5,
       1,     2,     2,     2,     1,     1,     1,     2,     1,     2,
       4,     2,     0,     1,     1,     1,     1,     4,     0,     2,
       3,     3,     0,     3,     0,     3,     3,     4,     0,     4,
       4,     6,     0,     1,     0,     3,     4,     5,     1,     1,
       1,     1,     0,     3,     0,     3,     2,     1,     0,     3,
       2,     0,     4,     2,     0,     1,     1,     1,     1,     3,
       0,     2,     1,     3,     3,     0,     3,     1,     1,     1,
       3,     7,     0,     4,     7,     0,     2,     0,     2,     2,
       3,     3,     3,     2,     0,     3,     1,     1,     0,     1,
       1,     0,     3,     2,     1,     0,     4,     4,     0,     1,
       0,     4,     4,     0,     2,     3,     0,     1,     1,     0,
       4,     4,     6,     0,     2,     0,     2,     1,     2,     3,
       0,     1,     0,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     3,     1,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     4,     3,     4,     1,
       2,     3,     1,     2,     3,     3,     0,     3,     0,     7,
       0,     5,     0,     2,     0,     2,     0,     3,     0,     2,
       4,     0,     2,     4,     0,     4,     4,     0,     3,     0,
       4,     1,     1,     1,     2,     2,     2,     2,     1,     1,
       2,     1,     0,     1,     0,     4,     2,     0,     2,     4,
       4,     0,     1,     1,     1,     1,     1,     0,     4,     5,
       1,     2,     1,     3,     3,     0,     4,     0,     1,     0,
       4,     4,     6,     6,     0,     1,     2,     0,     1,     0,
       3,     1,     2,     0,     3,     5,     0,     3,     2,     0,
       1,     1,     0,     4,     6,     0,     3,     1,     3,     2,
       2,     2,     3,     0,     3,     0,     3,     0,     3,     0,
       1,     0,     3,     1,     1,     1,     1,     1,     7,     0,
       1,     1,     1,     1,     1,     1,     4,     1,     2,     1,
       2,     3,     0,     1,     2,     1,     3,     1,     1,     4,
       1,     1,     1,     0,     4,     5,     0,     2,     0,     4,
       3,     3,     1,     1,     1,     1,     0,     1,     2,     0,
       2,     0,     2,     2,     0,     2,     0,     2,     2,     0,
       2,     0,     2,     2,     0,     2,     0,     2,     2,     1,
       2,     1,     1,     2,     2,     2,     1,     1,     2,     2,
       2,     0,     2,     0,     2,     0,     2,     1,     1,     0,
       2,     1,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     3,     0,     1,
       1,     3,     3,     1,     3,     3,     1,     3,     1,     2,
       2,     1,     3,     1,     1,     3,     1,     3,     1,     3,
       1,     2,     2,     1,     1,     1,     2,     1,     1,     1,
       2,     1,     0,     2,     1,     1,     1,     3,     1,     1,
       2,     1,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     3,     1,     2,     1,     1,     1,
       1,     2,     2,     2,     4,     3,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     3,     2,     2,
       1,     1,     3,     2,     2,     1,     1,     3,     3,     4,
       5,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     2,     5,     5,     5,     4,     5,     5,     5,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     4,     5,     0,     3,     2,     1,
       3,     3,     1,     3,     1,     3,     0,     0,     1,     0,
       1,     0,     1,     0,     2,     0,     2,     0,     1,     1,
       0,     1,     0,     1,     2,     0,     2,     0,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     2,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     1,     0,     1,     0,
       1,     1,     0,     1,     1,     0,     2,     2,     0,     1,
       0,     1,     0,     1,     0,     1,     1,     0,     1,     0,
       1,     0,     2,     1,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     2,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     1,     0,
       1,     0,     3,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     2,     1,     3,     2,     1,
       1,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,    10,     1,     0,     0,     3,     5,     6,     4,
      43,     8,     9,    43,    43,     0,     0,     7,     0,    11,
      45,    15,    21,    32,    31,    33,    33,     0,     0,    47,
      16,    18,    43,     0,    14,    22,     0,     0,    28,    44,
       0,   175,     0,    17,    12,    19,    15,     0,    34,    30,
    1782,    46,     0,     0,     0,  1825,  1782,  1782,  1782,     0,
       0,     0,     0,     0,  1782,     0,     0,  1757,   115,    48,
      49,    50,    53,    51,    52,     0,   101,   103,   104,   105,
     150,   107,   106,   108,   109,   110,   111,   112,   113,   114,
     177,     0,     0,    23,  1783,     0,     0,  1508,   125,  1782,
    1782,  1826,  1782,     0,     0,     0,     0,  1782,  1782,    60,
      82,     0,    54,    98,  1758,     0,  1782,     0,    99,   102,
       0,   149,     0,   181,    20,    13,    29,    37,    40,    42,
      41,  1819,    39,  1782,     0,     0,     0,  1576,   171,  1501,
     169,   174,   176,     0,     0,    62,    84,   173,    56,  1509,
     152,   153,  1784,   156,  1581,  1201,  1200,   116,   120,  1811,
    1782,     0,   100,   151,   178,   179,    38,  1820,    36,     0,
    1588,  1584,  1589,  1587,  1585,  1590,  1586,   160,   161,   163,
     172,   167,  1867,  1868,     0,   165,     0,  1756,     0,     0,
       0,  1782,  1889,    80,    61,  1755,    66,    68,    69,    70,
      71,  1755,     0,  1782,     0,    83,     0,    87,    55,    58,
     154,  1786,  1785,   157,     0,  1811,  1814,  1813,     0,     0,
     117,   121,     0,     0,   262,   182,   131,   130,   145,   141,
     146,   127,   144,   142,   128,   129,   143,   126,   132,   133,
     135,   162,     0,  1854,   166,     0,  1577,   170,  1888,  1782,
       0,     0,    65,    67,    63,    81,  1755,  1782,     0,     0,
      92,    93,    94,     0,     0,    85,    88,     0,     0,  1582,
     155,   158,     0,  1812,   123,   118,   119,   122,   180,     0,
       0,  1653,     0,   274,   270,    24,     0,   265,   267,   268,
     134,   137,     0,   164,     0,     0,  1887,    74,    64,     0,
    1502,    73,    89,     0,    90,    91,    97,    86,    57,     0,
     159,   124,   185,  1654,   183,  1763,   271,   272,   273,  1745,
     281,     0,   263,   266,     0,   136,   168,     0,    77,    79,
      78,    75,    76,    95,    59,   186,  1764,  1838,  1746,  1767,
       0,   283,   264,   138,   139,  1875,  1876,    72,  1821,  1839,
    1759,  1768,     0,     0,     0,   285,     0,  1800,  1821,  1846,
       0,   244,     0,  1782,  1755,  1787,   246,     0,  1856,  1853,
     232,   184,   231,   187,   188,   189,   190,   191,   192,     0,
     193,     0,   194,   243,   195,   196,   197,   198,   199,   200,
    1751,  1782,  1760,     0,  1487,   269,  1485,   282,     0,    25,
     140,  1801,  1782,  1822,  1787,  1847,  1848,   212,  1855,   247,
    1821,  1782,  1782,  1788,  1782,  1782,   256,  1745,   257,     0,
    1782,  1800,  1752,     0,     0,   275,   276,   279,  1486,   284,
     291,   292,   343,   286,   346,     0,     0,  1782,   214,   213,
     210,   246,   242,     0,     0,     0,     0,   255,  1815,  1815,
       0,   258,     0,  1782,   245,   228,   277,     0,   278,     0,
     499,   287,  1636,     0,   288,   222,   223,   221,   220,     0,
     206,   207,   217,   217,     0,   217,   209,   208,   217,     0,
    1507,  1506,   248,   249,   250,   251,   254,  1816,   259,   260,
     261,   229,     0,   280,     0,     0,   502,   348,     0,     0,
     352,     0,   290,   293,  1639,   218,   203,   219,   204,  1763,
     205,   202,   215,   201,   216,  1782,     0,   238,   237,   238,
     234,   344,     0,     0,   505,   351,     0,   349,     0,   358,
     359,   353,     0,   356,  1782,  1886,     0,   225,  1640,   211,
       0,   252,  1499,     0,   236,   235,   346,   500,     0,     0,
     600,   350,   355,   392,   361,  1759,  1782,     0,     0,  1782,
    1759,  1800,  1782,  1743,   289,     0,   294,   297,   298,   299,
     300,   301,   302,   303,   304,   305,     0,     0,  1885,     0,
     224,   253,  1500,     0,   241,   345,   346,   503,     0,     0,
      26,  1782,  1747,     0,     0,     0,  1782,  1743,     0,     0,
       0,     0,     0,  1782,   339,  1744,   340,     0,   338,   341,
     295,   296,     0,     0,   501,   346,   506,     0,   663,     0,
     486,   416,  1827,  1827,  1827,  1827,  1827,  1849,   417,   452,
     454,   420,   421,   422,   423,   424,   425,   448,   446,   447,
     449,   450,   455,   453,   426,  1823,   451,     0,   427,   413,
     428,   429,     0,     0,  1830,   431,   432,   430,  1789,   434,
     435,   433,  1782,  1784,   393,   394,   395,   396,   397,   398,
     414,   418,   419,   399,   400,   401,   402,   403,   404,   405,
     406,   407,     0,     0,  1748,     0,   389,     0,   362,   317,
     337,  1877,  1878,  1505,   326,  1503,  1870,  1869,   319,  1798,
    1757,  1771,     0,  1782,   323,   322,  1782,   342,     0,   147,
     148,   227,     0,  1873,  1874,   239,   504,   508,   601,     0,
      27,   707,   497,   498,  1828,   445,   444,   437,   436,   443,
     442,   441,   440,   439,   438,  1850,     0,  1824,   483,   469,
     463,   408,  1570,   495,  1831,  1790,  1791,   484,     0,     0,
     410,   412,  1667,  1667,   391,     0,  1807,  1599,     0,     0,
    1595,  1600,  1598,  1596,  1601,  1597,   390,   363,  1591,  1593,
       0,   307,  1504,  1799,   328,     0,   310,  1772,  1832,   336,
       0,     0,   226,   240,   507,   603,   665,     0,     0,   485,
    1771,   465,     0,  1842,     0,  1568,  1569,     0,   415,   487,
     489,   491,     0,   409,  1755,   456,   457,  1592,  1808,     0,
       0,   372,   368,   371,   370,   369,   384,   380,   382,   383,
     385,   381,   386,   387,   388,   365,   376,   377,   378,   373,
     374,   375,   367,   364,     0,   318,   309,   308,   306,   327,
    1757,  1833,   315,   324,   321,   325,   320,     0,   509,     0,
     607,   602,   604,     0,   668,   666,   684,     0,   761,   834,
     843,   849,   856,   888,   892,   906,   901,   907,   908,   916,
     962,   971,   974,  1000,  1011,  1014,  1017,  1009,  1023,  1030,
    1052,  1056,  1092,  1094,  1098,     0,  1104,  1118,  1142,  1160,
    1161,  1164,  1165,  1170,  1178,  1179,  1192,  1226,  1244,     0,
    1277,  1289,  1297,  1299,   689,  1303,  1306,  1312,  1363,   709,
     710,   711,   712,   713,   714,   715,   716,   718,   717,   719,
     720,   721,   722,   723,   724,   725,   726,   727,   728,   729,
     730,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,   741,   742,   743,   744,   745,   746,   747,   748,   749,
     750,   751,   752,   753,   754,   755,   756,   757,   758,   708,
       0,     0,   463,   464,  1843,   467,  1617,  1612,  1618,  1619,
    1620,  1626,     0,  1474,  1476,     0,     0,     0,  1615,     0,
    1478,  1616,  1621,  1622,     0,     0,     0,     0,  1614,  1626,
    1613,  1458,  1456,  1463,  1466,  1468,  1471,  1535,  1473,  1532,
    1566,  1533,  1534,  1623,     0,     0,     0,  1567,   496,   493,
     490,     0,   411,  1668,   366,   379,  1594,     0,     0,   329,
     330,   331,   332,     0,   311,  1770,   317,     0,  1488,   510,
       0,   608,     0,   605,   673,   673,     0,     0,  1670,  1671,
    1672,  1673,  1674,  1675,  1676,  1677,  1678,  1679,  1680,  1681,
    1682,  1683,  1719,  1720,  1721,  1722,  1723,  1724,  1725,  1726,
    1727,  1728,  1729,  1730,  1731,  1732,  1733,  1734,  1735,  1736,
    1737,  1738,  1684,  1685,  1686,  1687,  1688,  1689,  1690,  1691,
    1692,  1693,  1694,  1695,  1696,  1697,  1698,  1699,  1700,  1701,
    1702,  1703,  1704,  1705,  1706,  1707,  1708,  1709,  1710,  1711,
    1712,  1713,  1714,  1669,  1715,  1716,  1717,  1718,   760,     0,
       0,     0,     0,   859,     0,     0,     0,     0,     0,     0,
       0,  1419,  1002,     0,     0,  1844,   879,   878,     0,  1022,
    1419,     0,     0,     0,     0,     0,     0,   759,     0,  1130,
       0,     0,     0,     0,     0,     0,     0,     0,  1273,  1276,
    1264,  1274,  1275,  1266,     0,     0,  1298,  1296,     0,   707,
       0,     0,     0,     0,   470,   466,   471,  1809,   474,     0,
    1610,  1536,  1537,  1538,     0,     0,     0,     0,     0,     0,
       0,  1470,     0,  1469,     0,  1611,  1459,  1460,  1578,     0,
       0,     0,     0,     0,     0,     0,     0,  1602,     0,     0,
       0,     0,   488,     0,   492,   335,   334,  1749,  1757,   316,
       0,   610,   611,   606,  1754,   673,   670,   676,     0,   673,
     685,   660,   783,   832,   786,   782,  1807,     0,     0,  1526,
     841,  1520,   839,  1515,  1517,  1518,  1519,   844,     0,  1641,
    1498,   850,   851,     0,  1494,  1496,  1495,   862,   860,   861,
     886,     0,  1548,   889,   890,  1547,   893,   896,  1807,   904,
       0,  1480,  1655,  1512,  1571,  1575,  1513,     0,   914,  1821,
    1595,   960,  1384,   925,   929,  1515,     0,  1517,   969,     0,
     863,   972,   981,   980,   998,     0,   977,   979,  1418,     0,
    1004,  1008,  1006,  1009,  1007,  1001,  1012,  1013,  1510,  1015,
    1016,  1845,  1018,  1492,  1010,  1840,  1417,  1031,  1033,  1053,
    1054,  1057,     0,  1059,  1060,  1061,  1093,  1230,  1563,  1564,
       0,  1095,     0,  1102,     0,  1111,  1108,  1110,  1109,  1105,
    1112,  1132,  1498,  1119,  1130,  1121,     0,  1128,     0,  1549,
    1495,  1551,     0,  1158,  1647,  1162,  1366,  1483,  1168,  1821,
    1176,  1366,     0,  1190,  1183,  1484,     0,  1491,  1193,  1194,
    1195,  1196,  1197,  1198,  1219,  1199,  1222,     0,  1489,     0,
       0,  1562,  1575,  1227,  1262,  1249,  1267,  1753,  1287,     0,
    1280,  1282,     0,  1294,     0,  1300,  1301,   695,   701,   690,
     691,   692,   694,     0,  1304,     0,  1307,  1309,  1329,  1315,
    1376,  1366,   472,   474,  1810,     0,   478,   473,  1628,  1458,
    1456,  1475,  1477,  1458,     0,     0,     0,  1458,  1529,  1530,
    1531,     0,  1479,  1472,  1458,     0,  1457,  1579,     0,  1462,
    1461,  1465,  1464,  1467,     0,     0,  1458,     0,  1782,  1750,
       0,   313,     0,  1782,  1829,   671,  1782,     0,   682,   674,
     675,   686,   833,   762,  1750,   796,   787,     0,     0,     0,
       0,  1521,  1522,  1523,   842,   835,     0,     0,  1516,  1643,
    1642,   847,   852,   854,     0,   887,   857,  1550,   863,   891,
     896,  1879,  1880,   894,     0,   897,     0,   905,   902,  1862,
    1861,  1481,     0,  1657,  1482,  1573,  1574,   911,   912,   915,
     909,  1411,   961,   917,   704,     0,   923,  1386,     0,   940,
       0,   934,  1384,  1384,  1384,  1384,   970,   963,     0,     0,
     864,   973,   999,   975,  1419,  1419,   976,   983,   984,   704,
    1443,  1444,  1445,  1439,  1844,  1431,  1451,  1454,  1453,  1455,
    1447,  1438,  1437,  1442,  1441,  1440,  1446,  1426,  1430,  1448,
    1450,  1452,  1428,  1429,  1425,  1427,  1420,  1421,  1432,  1433,
    1434,  1435,  1436,  1424,  1005,  1003,  1511,  1020,  1841,   704,
    1035,     0,  1055,     0,  1082,  1066,  1058,  1063,  1064,  1065,
    1234,     0,  1565,     0,     0,  1103,  1099,     0,  1112,  1853,
       0,  1120,  1126,  1127,   704,  1123,  1419,     0,     0,  1131,
       0,  1159,  1143,  1648,  1649,  1821,     0,  1163,  1169,  1166,
    1145,  1177,  1171,  1173,  1185,  1191,  1180,     0,  1185,     0,
    1543,  1544,  1220,  1223,     0,     0,  1490,  1203,     0,  1202,
       0,     0,  1573,  1263,  1245,  1251,  1782,  1252,  1247,     0,
    1265,     0,     0,  1288,  1278,     0,  1281,     0,  1295,  1290,
       0,  1302,   702,   700,   693,     0,  1310,  1311,  1308,  1330,
    1313,  1753,     0,  1377,  1364,  1368,   478,   468,  1753,   461,
     476,   477,  1787,  1627,     0,  1623,  1623,  1623,     0,  1606,
       0,  1623,  1580,     0,  1623,  1623,  1852,     0,   333,  1809,
     312,   514,  1782,  1782,  1743,  1795,   539,   513,   517,   518,
       0,  1765,   625,  1782,   615,  1849,   616,  1858,  1857,     0,
    1782,     0,   628,   619,   624,  1802,   620,     0,   623,   630,
     627,   621,   626,     0,   631,   622,     0,   642,   636,   640,
     639,   637,   641,   612,   643,   638,     0,  1802,     0,  1782,
     683,     0,     0,   661,   792,   797,   798,  1802,  1802,   790,
     791,  1802,   778,  1379,  1860,  1859,   775,   767,   769,   770,
       0,  1379,     0,     0,     0,   784,   773,     0,   781,   764,
     780,   765,  1540,  1539,     0,  1525,     0,  1807,  1389,   840,
    1575,  1513,     0,  1645,   847,     0,   845,     0,     0,  1497,
     874,   895,   900,     0,     0,  1514,  1389,  1782,  1656,  1572,
     913,   704,   910,  1413,  1385,   705,   927,  1749,   704,  1383,
     933,   932,   931,   930,   941,  1384,  1782,   944,     0,   947,
     948,     0,  1782,   951,   952,   953,   954,     0,   955,  1384,
     942,     0,   798,   920,   921,   918,   919,     0,  1389,     0,
     870,   978,   993,   995,   994,   988,   990,   996,  1419,   985,
     982,  1419,   986,  1449,  1422,  1423,  1809,  1019,  1493,   704,
    1027,  1028,  1844,  1043,  1044,  1046,  1048,  1049,  1045,  1047,
    1038,  1844,  1034,     0,  1083,     0,  1085,  1084,  1086,  1068,
    1078,     0,     0,  1062,  1236,     0,  1773,     0,  1096,  1389,
       0,     0,     0,  1114,  1124,  1137,  1133,  1138,  1134,  1139,
       0,  1129,  1373,  1372,  1136,  1145,  1367,  1559,  1560,  1561,
       0,     0,  1411,     0,   704,     0,  1184,     0,     0,     0,
    1221,     0,  1225,  1224,  1217,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1205,  1206,  1650,  1411,     0,  1268,
    1836,  1836,  1283,  1284,  1285,     0,  1389,     0,     0,   703,
       0,  1637,     0,  1285,  1173,  1739,   462,     0,  1782,  1635,
    1607,  1608,  1609,  1633,  1630,  1631,  1605,  1624,     0,  1603,
    1604,   494,     0,     0,  1904,  1905,  1782,  1743,     0,   511,
     515,  1766,   519,     0,     0,   613,   614,   617,   618,     0,
     645,  1803,  1782,  1842,  1782,   646,   644,   658,  1782,   677,
     678,   681,     0,   672,   687,   689,  1782,   800,     0,     0,
     788,   789,     0,   704,   779,  1381,   766,   768,  1379,   776,
     771,   772,   785,   774,  1542,  1524,  1541,  1655,     0,   704,
     836,  1391,  1573,  1574,  1389,     0,  1644,   846,   848,   855,
     853,   882,  1780,   899,   898,   903,     0,  1412,   704,  1410,
     707,  1387,   922,     0,   945,   946,   949,   950,     0,  1415,
    1415,   943,   924,   936,   937,   935,   938,     0,   964,     0,
     865,   866,   676,     0,  1419,  1419,   992,   704,   989,     0,
    1026,   704,  1029,  1024,     0,     0,  1050,     0,     0,     0,
    1079,  1081,     0,  1074,  1088,  1075,  1076,  1067,  1070,  1088,
    1228,  1782,  1787,     0,  1774,  1235,  1097,  1100,     0,  1114,
    1113,  1117,  1106,     0,  1125,  1122,     0,     0,  1147,  1146,
     704,  1167,  1399,  1172,  1174,     0,  1186,  1419,  1419,  1181,
    1187,  1204,  1216,  1218,  1208,  1209,  1210,  1214,  1211,  1215,
    1212,  1213,  1207,  1651,  1261,     0,  1258,  1259,  1253,     0,
    1246,  1884,  1883,     0,  1837,  1271,  1271,  1394,     0,  1655,
    1291,     0,   696,     0,  1638,  1316,  1317,     0,  1320,  1323,
    1327,  1321,  1411,  1740,     0,   482,   479,   480,     0,  1625,
     314,   516,  1796,  1797,  1583,   527,   524,   357,   540,   520,
     521,  1554,   635,  1552,  1553,   634,   651,   657,     0,   654,
     679,   680,   689,   707,     0,     0,  1379,   793,   795,   794,
    1380,   704,  1378,   777,  1389,  1514,  1390,   704,  1388,  1572,
     837,  1646,  1545,  1546,  1865,  1866,   884,   704,  1807,  1781,
     881,   880,   876,     0,  1659,  1660,  1661,  1662,  1663,  1664,
    1665,  1666,  1658,  1414,     0,   957,   956,   959,     0,  1557,
    1558,   958,     0,   928,  1389,  1480,  1389,  1480,   867,   868,
       0,   872,   871,   873,   991,   997,   987,  1021,  1025,  1036,
    1039,  1040,  1761,  1032,  1844,  1037,  1088,  1088,     0,  1073,
    1071,  1072,  1077,  1238,     0,  1232,  1775,  1389,  1107,  1116,
       0,  1140,     0,     0,  1154,     0,  1403,   704,  1398,  1175,
     704,   704,  1188,  1260,  1250,  1254,  1255,  1256,  1257,  1248,
    1269,  1272,  1270,   704,  1279,  1396,  1782,  1389,  1389,   698,
    1305,  1637,  1319,  1771,  1325,  1771,  1394,   704,   704,  1365,
    1375,  1406,  1407,  1374,  1371,  1370,  1792,   481,   475,   523,
    1871,  1872,   526,   359,   541,   522,   649,   647,   650,   648,
     652,   653,     0,   629,   655,   656,     0,   707,   799,   804,
    1782,   806,   807,   808,   831,  1782,   809,   810,   811,   812,
     813,     0,   814,   815,   817,   818,   819,     0,   820,   805,
    1741,   821,   830,   824,   801,   802,   823,   763,  1382,   838,
    1392,   704,   858,   883,     0,   875,  1881,  1882,  1416,   939,
     966,     0,   965,     0,   869,  1041,  1762,     0,     0,  1069,
    1080,  1088,  1778,  1778,  1089,     0,     0,  1241,  1237,  1231,
    1101,  1115,     0,  1148,  1782,  1411,     0,     0,  1149,     0,
    1153,  1404,  1182,  1189,  1395,   704,  1393,     0,  1293,  1292,
    1331,   697,     0,  1318,     0,  1771,  1322,     0,  1314,  1408,
    1409,  1405,  1793,  1794,  1369,     0,  1782,  1782,     0,   528,
     529,   530,   531,   532,   533,     0,   543,   632,   633,     0,
       0,     0,   822,  1782,  1415,  1415,  1742,     0,   803,   885,
     877,  1389,  1389,     0,  1051,  1087,  1779,     0,     0,  1782,
    1239,     0,     0,  1229,  1233,     0,     0,  1144,  1157,  1401,
    1402,  1156,  1152,  1150,  1151,  1397,  1286,  1339,   699,  1324,
       0,  1328,  1891,  1890,  1782,     0,     0,  1893,     0,  1782,
    1782,   525,  1829,     0,   826,   825,     0,   828,   827,   829,
    1555,  1556,   968,   967,  1042,  1091,  1090,     0,  1242,  1782,
    1419,  1155,  1400,  1362,  1361,  1340,  1332,  1333,  1741,  1334,
    1335,  1336,  1337,  1360,     0,     0,  1326,     0,   538,   534,
    1892,     0,     0,  1776,  1804,  1743,     0,     0,     0,  1782,
    1807,   542,  1782,  1782,     0,   548,   550,   559,   551,   553,
     556,   544,   545,   546,   555,   557,   560,   547,     0,   552,
       0,   554,   558,   549,  1804,  1743,   688,   816,  1240,     0,
    1141,     0,  1834,     0,  1809,   535,   537,   536,  1777,   598,
    1805,  1806,  1784,   584,  1782,   463,  1419,     0,     0,     0,
       0,     0,   592,     0,   582,   588,   591,     0,   585,   593,
     596,  1784,   587,  1243,     0,  1835,     0,  1358,  1357,  1356,
       0,   583,     0,  1842,   580,  1655,   576,  1527,  1895,     0,
       0,  1897,  1899,     0,  1903,  1901,   561,   565,   569,   569,
     563,   567,   562,   568,   599,     0,   590,   589,   595,   594,
     586,  1359,  1864,  1863,  1817,  1352,  1346,  1347,  1349,   574,
     467,   597,  1809,   575,  1528,  1894,  1898,  1896,  1902,  1900,
     572,   564,   572,   566,     0,  1818,  1809,  1355,  1350,  1353,
       0,  1348,   459,     0,     0,   571,   570,     0,     0,  1354,
    1351,     0,   458,   579,   577,   578,   573,   581,  1345,  1342,
    1344,  1343,  1338,  1341,   460
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     6,     7,     8,     9,    10,    11,    30,
      12,    31,    44,    45,    34,    35,    19,   320,   432,   618,
      32,    50,    14,    25,    37,    95,   131,   132,    20,    29,
      41,    69,    70,   148,   208,   267,    71,   145,   194,   195,
     196,   197,   198,   199,   200,   331,   201,    72,   146,   205,
     206,   207,   262,   304,   263,    73,    74,    75,    76,    77,
     116,   157,   276,   158,    78,   133,   237,   238,   239,   324,
     343,   240,   711,    79,   121,    80,   150,   151,   152,   270,
      81,   177,   178,    82,    83,   244,    84,    85,    86,    87,
      88,    89,    90,   123,   224,   165,   225,   335,   348,   373,
     374,   478,   479,   440,   513,   506,   375,   468,   376,   580,
     377,   378,   379,   380,   381,   520,   544,   382,   383,   384,
     385,   386,   484,   387,   388,   417,   389,   451,   285,   286,
     287,   288,   319,   289,   315,   425,   426,   458,   341,   355,
     399,   433,   434,   503,   435,   534,   566,   567,   838,   568,
    1690,  1026,   771,   569,   570,   706,   844,   571,   572,   839,
    1019,  1020,  1021,  1022,   573,   574,   575,   576,   608,   460,
     546,   461,   462,   497,   498,   553,   499,   531,   532,   592,
     766,   825,   826,   827,   828,   829,   500,   686,   591,   664,
     665,   666,   803,   667,   668,   669,   670,   671,   672,   673,
    2577,  2712,   674,   793,   962,  1168,   791,  1403,  1406,  1407,
    1672,  1669,  2176,  2177,   675,   676,   677,   678,   679,  1009,
     799,   800,  1202,   680,   681,   496,   586,   524,   615,   550,
     717,   784,   848,  1210,  1443,  1697,  1698,  1982,  2189,  1699,
    2185,  2339,  2459,  2460,  2461,  2462,  2463,  2464,  1979,  2188,
    2466,  2522,  2581,  2582,  2656,  2691,  2705,  2583,  2584,  2683,
    2714,  2585,  2586,  2587,  2588,  2589,  2590,  2624,  2625,  2628,
    2629,  2591,  2592,  2593,   590,   785,   851,   852,   853,  1212,
    1444,  1733,  2350,  2351,  2352,  2356,  1734,  1735,   720,  1451,
    2005,   721,   856,  1035,  1034,  1215,  1216,  1217,  1448,  1741,
    1037,  1743,  2202,  1159,  1389,  1390,  2319,  2441,  1391,  1392,
    1948,  1804,  1805,  2050,  1393,   788,   909,   910,  1109,  1223,
    1224,  1769,  1455,  1511,  1749,  1750,  1746,  2007,  2206,  2384,
    2385,  2386,  1453,   911,  1110,  1230,  1467,  1465,   912,  1111,
    1237,  1786,   913,  1112,  1241,  1242,  1788,   914,  1113,  1250,
    1251,  1521,  1840,  2070,  2071,  2072,  2041,  1128,  2232,  2226,
    2392,  1476,   915,  1114,  1253,   916,  1115,  1256,  1483,   917,
    1116,  1259,  1488,   918,   919,   920,  1117,  1268,  1497,  1500,
     921,  1118,  1271,  1272,  1505,  1273,  1509,  1832,  2065,  2253,
    1815,  1829,  1830,  1503,   922,  1119,  1278,  1517,   923,  1120,
    1281,   924,  1121,  1284,  1285,  1286,  1526,  1527,  1528,  1850,
    1529,  1845,  1846,  2076,  1523,   925,  1122,  1295,  1129,   926,
    1123,  1296,   927,  1124,  1299,   928,  1125,  1302,  1857,   929,
     930,  1130,  1861,  2083,   931,  1131,  1307,  1570,  1870,  2086,
    2270,  2271,  2272,  2273,   932,  1132,  1309,   933,  1133,  1311,
    1312,  1576,  1577,  1882,  1578,  1579,  2097,  2098,  1879,  1880,
    1881,  2091,  2279,  2414,   934,  1134,   935,  1135,  1321,   936,
    1136,  1323,  1586,   937,  1138,  1329,  1330,  1590,  2112,   938,
    1139,  1333,  1594,  2115,  1595,  1334,  1335,  1336,  1896,  1898,
    1899,   939,  1140,  1343,  1911,  2294,  2425,  2497,  1602,   940,
     941,  1141,  1345,   942,   943,  1142,  1348,  1609,   944,  1143,
    1350,  1912,  1612,   945,   946,  1144,  1353,  1618,  1915,  2129,
    2130,  1616,   947,  1145,  1358,   159,  1630,  1359,  1360,  1934,
    1935,  1361,  1362,  1363,  1364,  1365,  1366,   948,  1146,  1316,
    2283,  1580,  2419,  1884,  2100,  2417,  2493,   949,  1147,  1374,
    1937,  1638,  2145,  2146,  2147,  1634,   950,  1376,  1640,  2310,
    1153,   951,  1154,  1378,  1379,  1380,  2157,  1644,   952,  1155,
    1383,  1649,   953,  1157,   954,  1158,  1385,   955,  1160,  1394,
     956,  1161,  1396,  1658,   957,  1162,  1398,  1662,  2165,  2166,
    1953,  2168,  2324,  2446,  2326,  1660,  2442,  2507,  2546,  2547,
    2548,  2722,  2549,  2676,  2677,  2700,  2550,  2639,  2551,  2552,
    2553,   958,  1163,  1400,  1607,  1954,  1904,  2329,  1664,  2014,
    2015,  2212,  1506,  1507,  1809,  2030,  2031,  2218,  2314,  2315,
    2436,  2121,  2498,  2122,  2298,  2330,  2331,  2332,  1802,  1803,
    2049,  2247,  1305,  1306,  1288,  1289,  1556,  1557,  1558,  1559,
    1560,  1561,  1562,   991,  1189,  1410,   993,   994,   995,   996,
    1231,  1260,  1491,  1346,  1354,   395,   396,  1029,  1367,  1368,
    1567,  1337,  1244,  1245,   541,   481,   301,   694,   695,   482,
      98,   153,  1297,  1262,  1232,  1468,  2646,  1417,   998,  1774,
    2025,  2099,  2221,  1254,  1338,  2192,  2529,  2248,  1906,  2193,
    1317,  1371,  1234,  1000,  1263,  1264,   742,   795,   796,  2194,
     271,  2626,   179,  1235,   768,   769,  1236,  1003,  1004,  1005,
    1197,  1170,  1425,  1421,  1414,   501,  2167,   537,  1471,  1784,
    2036,  1605,  2149,   282,  1494,  1798,  2242,   805,  1108,  2174,
    2477,   606,   339,   687,  1457,   423,  1218,   202,   115,   393,
    2407,   337,  1983,   352,  1027,   778,  2105,  2609,  2487,  2233,
      96,   214,   414,   747,  2454,  1978,   774,   402,  1992,  2612,
     809,  1405,   218,   488,  2696,   168,   390,   738,   102,   726,
     683,   842,  2636,  2155,   350,  1569,   965,  1303,   407,   736,
    1203,  1342,   391,  1751,  1771,  1492,  2674,  2227,   184,   698,
    2342,   715,   347,   598,  1485,  2398,  2153,   538,   203,  2514,
    2520,  2659,  2660,  2661,  2662,  2663,  1701
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2394
static const yytype_int16 yypact[] =
{
   -2394,   269,   -18, -2394,  -177,   293, -2394,   -18, -2394, -2394,
     633, -2394, -2394,   633,   633,    -7,    -7, -2394,   705, -2394,
     810,   588,   856, -2394, -2394,  1181,  1181,   629,   607, -2394,
   -2394,   630,   633,    -7, -2394, -2394,   954,   761, -2394, -2394,
     821,   861,    -7, -2394, -2394, -2394,   588,   859, -2394, -2394,
     -17, -2394,   803,   803,   991,  1071,  1186,  1186,  1186,  1057,
     803,  1089,  1051,  1054,  1186,  1070,  1082,  1403, -2394, -2394,
   -2394, -2394, -2394, -2394, -2394,  1078, -2394, -2394, -2394, -2394,
    1321, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394,
    1371,  1106,   630, -2394, -2394,  1112,   309, -2394, -2394,  1186,
    1186, -2394,  1186,  1060,  1479,  1060,  1118,  1186,  1186, -2394,
   -2394,  1060, -2394, -2394, -2394,  1067,   977,  1125, -2394, -2394,
    1073, -2394,  1127, -2394, -2394, -2394, -2394,  -130, -2394, -2394,
   -2394,  1241, -2394,  1186,  1200,  1060,  1331,    11, -2394, -2394,
   -2394, -2394, -2394,  1332,  1124,   221,  1393, -2394,  1091, -2394,
    1067, -2394,    76, -2394, -2394, -2394, -2394, -2394,  1035,   450,
    1186,    29, -2394, -2394, -2394,   -30, -2394, -2394, -2394,   898,
   -2394, -2394, -2394, -2394, -2394, -2394, -2394,  1200, -2394,  1154,
   -2394,  -150, -2394, -2394,  1060, -2394,  1201, -2394,  1199,  1194,
    1541,  1186, -2394, -2394, -2394,   884, -2394, -2394, -2394, -2394,
   -2394,  1007,  1548,  1186,    66, -2394,   104, -2394, -2394,     2,
   -2394, -2394, -2394, -2394,  1358,   450, -2394,  1387,   803,   803,
   -2394,  1035,  1172,   111,   444, -2394, -2394, -2394, -2394, -2394,
   -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394,   656, -2394,
      72, -2394,  1200, -2394, -2394,  1297, -2394, -2394, -2394,  1186,
    1228,  1374, -2394, -2394, -2394, -2394,  1056,  1186,  1130,  1405,
     507, -2394,  1613,   553,  1190, -2394, -2394,  1191,  1537, -2394,
    1358, -2394,   803, -2394, -2394, -2394, -2394,  1035, -2394,  1195,
    1336, -2394,   803, -2394,   768, -2394,   114, -2394, -2394, -2394,
   -2394, -2394,   656, -2394,  1394,  1374, -2394, -2394, -2394,   583,
   -2394, -2394, -2394,  1395, -2394, -2394, -2394, -2394, -2394,  1380,
   -2394, -2394, -2394, -2394, -2394,  1217, -2394, -2394, -2394,  1631,
    1552,  1204, -2394, -2394,   656, -2394, -2394,    22, -2394, -2394,
   -2394, -2394, -2394, -2394, -2394, -2394, -2394,  1236, -2394,  1488,
    1555,  1225, -2394,  1666, -2394, -2394, -2394, -2394,  2058, -2394,
    1594, -2394,  1184,  1234,  1298, -2394,   656,  1422,  1344,   567,
    1295, -2394,  1299,  1186,  1640,   225,   141,   945, -2394,  1196,
   -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394,  1281,
   -2394,  1444, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394,
    1668,  1186, -2394,  1184, -2394,  1184, -2394, -2394,  1260,    37,
   -2394, -2394,  1186, -2394,  1476, -2394, -2394,   964, -2394, -2394,
     831,  1186,  1186, -2394,  1186,  1186, -2394,  1631, -2394,   323,
    1186,  1422, -2394,  1312,  1210,  1184, -2394,  1385, -2394, -2394,
   -2394, -2394,  1211, -2394,  1216,    84,   140,  1186, -2394, -2394,
    1185, -2394, -2394,   -91,  1301,  1060,  1060, -2394,  1406,  1406,
    1413, -2394,  1060,  1186, -2394, -2394, -2394,  1374, -2394,  1330,
    1464, -2394, -2394,  1274, -2394, -2394, -2394, -2394, -2394,  1060,
   -2394, -2394,   128,   128,  1721,   128, -2394, -2394,   128,   174,
   -2394, -2394, -2394, -2394, -2394,  -164, -2394, -2394, -2394, -2394,
   -2394, -2394,   621, -2394,  1277,  1337,  1475,  -206,  1280,  6623,
   -2394,  1231, -2394, -2394,    -4, -2394, -2394, -2394, -2394,  1217,
   -2394, -2394, -2394, -2394, -2394,  1186,  1060,  1229, -2394,  1229,
   -2394, -2394,  1285,  1346,  1377, -2394,  1293, -2394,  1294, -2394,
    1661, -2394,  1662, -2394,  1165, -2394,  1624,  1320, -2394, -2394,
    1060,  1060, -2394,   523, -2394, -2394,  1216, -2394,  1302,  1359,
    1366, -2394, -2394, -2394,  1063,  1594,  1186,  1029,  1029,  1186,
      19,  1422,  1186,  1735, -2394,  1452, -2394, -2394, -2394, -2394,
   -2394, -2394, -2394, -2394, -2394, -2394,   803,    86, -2394,  1257,
   -2394,  1060, -2394,  1451, -2394, -2394,  1216, -2394,  1309,  1368,
   -2394,  6794,   755,  1559,  1374,  1259,  1186,  1735,  1261,   -92,
     -91,  1374,  1265,  1186, -2394, -2394, -2394,   -56,   803, -2394,
   -2394, -2394,    58,   717, -2394,  1216, -2394,  1315,  1046,   595,
   -2394, -2394,  -176,  -158,   371,   430,   513,  1266, -2394, -2394,
   -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394,
   -2394, -2394, -2394, -2394, -2394,  1386, -2394,   591, -2394, -2394,
   -2394, -2394,  1060,  1060,  1539, -2394, -2394, -2394,   -43, -2394,
   -2394, -2394,  1186,   638, -2394, -2394, -2394, -2394, -2394, -2394,
   -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394,
   -2394, -2394,  1050,   -89, -2394,  1264, -2394,   381, -2394,  1326,
   -2394, -2394, -2394, -2394,  1261, -2394, -2394, -2394, -2394,  1520,
      74,  1557,  1272,  1186, -2394, -2394,  1186, -2394,  1230, -2394,
   -2394, -2394,  1077, -2394, -2394, -2394, -2394, -2394, -2394,  1656,
   -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394,
   -2394, -2394, -2394, -2394, -2394, -2394,  1269, -2394, -2394,  1728,
    1335, -2394,  1324,  1340, -2394, -2394, -2394, -2394,  2308,   537,
    1762, -2394,  1396,  1396, -2394,  1230,  1487, -2394,  1055,  1055,
   -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394,  1347, -2394,
    1374,    87, -2394, -2394, -2394,  1374, -2394, -2394,  1384, -2394,
     413,   413, -2394, -2394,  1449,  1307,    34,  2530,  3833, -2394,
    1557,  1604,  1374,  1367,  7391,  1339, -2394,  1060, -2394,   537,
   -2394,  1372,  1558, -2394,  1640, -2394, -2394, -2394, -2394,  1055,
    1364, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394,
   -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394,
   -2394, -2394, -2394, -2394,  1230, -2394, -2394, -2394, -2394,   119,
    1403, -2394,   865, -2394, -2394, -2394, -2394,  1313, -2394,  6283,
   -2394, -2394,  1307,  1369, -2394, -2394,  1443,  4186, -2394, -2394,
   -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394,
   -2394, -2394, -2394, -2394, -2394, -2394, -2394,   556, -2394, -2394,
   -2394, -2394, -2394, -2394, -2394,  1421, -2394, -2394, -2394, -2394,
   -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394,   623,
   -2394, -2394,  1486, -2394, -2394, -2394, -2394, -2394, -2394, -2394,
   -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394,
   -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394,
   -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394,
   -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394,
   -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394,
    1319,  1374,  1335, -2394, -2394,  1711, -2394, -2394, -2394, -2394,
   -2394,  1365,  5648,    11,    11,  1378,  1379,  1388, -2394,  1389,
      11, -2394, -2394, -2394,  7490,  7391,  7490,  1392, -2394,  1365,
   -2394,   162,  1013,   975, -2394,  1659, -2394, -2394, -2394, -2394,
   -2394,  1347, -2394,  1397,  1401,  1407,  7391, -2394, -2394,   746,
   -2394,   537, -2394, -2394, -2394, -2394, -2394,   -91,   -91, -2394,
   -2394, -2394, -2394,  1643, -2394, -2394,  1326,  1374, -2394, -2394,
    1382, -2394,  1383, -2394,    71,    71,  1327,  1398, -2394, -2394,
   -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394,
   -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394,
   -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394,
   -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394,
   -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394,
   -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394,
   -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394,  -148,
    4673,  7391,   437,   489,   440,  1184,   539,   572,  5746,  5842,
    1584,   626,   959,   539,  1060,  1400, -2394, -2394,  5842, -2394,
   -2394,   539,  1313,  1644,  1060,  4711,  5842, -2394,  1129,  3773,
    1184,  1060,  1184,  1060,    75,   267,  1060,  1184, -2394, -2394,
   -2394, -2394, -2394, -2394,  4809,  5000, -2394, -2394,  1313,    79,
    1060,  1184,  1060,  1060, -2394, -2394,  1625,  1540, -2394,  6701,
   -2394, -2394,  1347, -2394,  1352,  1354,  7391,  7391,  7391,  5648,
    1361, -2394,   942, -2394,  5648, -2394, -2394, -2394, -2394,  7391,
    7149,  7391,  7391,  7391,  7391,  7391,  7391, -2394,  5648,  7391,
    1013,  1465, -2394,  1417, -2394, -2394, -2394,  1842,  1403, -2394,
     106, -2394, -2394, -2394, -2394,   142, -2394,  -183,  -149,   144,
   -2394, -2394, -2394,  1743,   950,  1680,  1487,  1060,  5648, -2394,
    1746, -2394,  5097, -2394, -2394, -2394, -2394, -2394,   180,   316,
   -2394,   437, -2394,  1432, -2394,    11, -2394, -2394, -2394, -2394,
    1747,  2537, -2394,   440, -2394, -2394,  1184,   965,  1487,  1749,
     474, -2394,  1498, -2394, -2394,  1324,  1347,  1184,  1750,  1344,
    1064,  1751,  5194, -2394,  5373,   108,  1080,  1123,  1752,   176,
    1390, -2394, -2394, -2394,  1754,    70, -2394, -2394, -2394,  4588,
   -2394, -2394,  1788,   556, -2394, -2394, -2394,   539, -2394, -2394,
   -2394, -2394, -2394, -2394, -2394,  1453, -2394, -2394,   571,  1313,
   -2394, -2394,    68, -2394, -2394, -2394, -2394, -2394, -2394,  1433,
    5842, -2394,  1454,  1757,  1850, -2394, -2394, -2394, -2394,  1129,
    1510, -2394,  1470, -2394,  6118,    24,   864,  1474,  1477, -2394,
     904, -2394,  1480,  1777,   858, -2394,  1730, -2394,  1782,  1344,
    1784,  1730,  1060,  1781,  1434, -2394,   994, -2394, -2394, -2394,
   -2394, -2394, -2394,  1665, -2394,   539, -2394,   -76, -2394,   419,
    1901, -2394,    78, -2394,  1785,   612,   549,  1886,  1789,  1909,
   -2394, -2394,  1060,  1787,  5470,  1313, -2394, -2394,   392, -2394,
   -2394, -2394, -2394,  3735, -2394,  1744, -2394,  1096,  1791,  1826,
    1792,  1730, -2394, -2394, -2394,  1060,  1723,   193, -2394,   250,
     917, -2394, -2394,   206,  1496,  1497,  1502,   254, -2394,  1347,
   -2394,  1511, -2394, -2394,   282,  1512,   917, -2394,   943,   975,
     975, -2394, -2394, -2394,  1079,  1516,   312,  1515,  1186, -2394,
     -91,  1844,  1518,    73,  7101, -2394,  1186,  1563,  1655, -2394,
   -2394,  1864, -2394, -2394,   994,  1778, -2394,   609,  1419,   -10,
    1529, -2394,  1347, -2394, -2394, -2394,  5940,  1775, -2394,  1756,
   -2394,  1605, -2394,  1641,  1729, -2394, -2394, -2394,  1390, -2394,
     965, -2394, -2394, -2394,   501,   585,  1060, -2394, -2394, -2394,
   -2394, -2394,  7391,  1712, -2394,  1339, -2394,  1184, -2394, -2394,
   -2394,  1755, -2394, -2394, -2394,  5842, -2394,  1694,   227,  1693,
    2005,  1509,  1829,  1829,  1829,  1829, -2394, -2394,  5842,  5940,
   -2394, -2394, -2394, -2394,   626,    83, -2394,  1494, -2394,  1505,
   -2394, -2394, -2394, -2394,  1400, -2394, -2394, -2394, -2394, -2394,
   -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394,
   -2394, -2394, -2394, -2394, -2394, -2394,  4273, -2394, -2394, -2394,
   -2394, -2394, -2394, -2394, -2394, -2394, -2394,     3, -2394,  1869,
     882,  1823, -2394,   994,    90, -2394, -2394,  1635, -2394, -2394,
     115,  7391, -2394,  1561,   539, -2394, -2394,  5940,  1510,  1196,
    1184, -2394, -2394, -2394, -2394, -2394,  1835,  1060,   437, -2394,
    1282, -2394, -2394, -2394, -2394,  1344,  1644, -2394, -2394, -2394,
    1783, -2394, -2394,   459,  1880, -2394, -2394,  1060,  1880,  1565,
   -2394,  1347, -2394, -2394,   709,  1035, -2394, -2394,  2861, -2394,
    1964,   476,   110, -2394, -2394, -2394,  1186, -2394,   -88,  5842,
   -2394,    40,  5567, -2394, -2394,  1060, -2394,  1818, -2394, -2394,
    5940, -2394,  1374, -2394, -2394,   994, -2394, -2394, -2394, -2394,
   -2394,  1886,  1790, -2394, -2394,  1282,  1723, -2394,  1886, -2394,
   -2394, -2394,  1476, -2394,  1060,  1397,  1397,  1397,  5648, -2394,
     409,  1397, -2394,  7269,  1397,  1397, -2394,   537, -2394,  1540,
   -2394, -2394,  1186,  1186,  1735,   902, -2394, -2394, -2394, -2394,
    1811,  1839, -2394,  1186, -2394,   454, -2394, -2394, -2394,  1308,
    1186,  2537, -2394, -2394, -2394,  1718, -2394,  1374, -2394,  1962,
   -2394, -2394, -2394,  1060, -2394, -2394,  1060, -2394, -2394, -2394,
   -2394, -2394, -2394, -2394, -2394, -2394,  1816,  1718,    95,  1186,
   -2394,  1519,  1573, -2394, -2394, -2394,  1758,  1718,  1718,   637,
    1774,  1718, -2394,  1861, -2394, -2394, -2394,  1521,  1523, -2394,
     994,  1861,  1796,  1606,  1736, -2394, -2394,  1760, -2394, -2394,
   -2394, -2394, -2394, -2394,   456, -2394,  1060,  1487,   488, -2394,
     -29,   190,   539,  1581,  1605,   539, -2394,  1587,   437, -2394,
     556, -2394, -2394,  1657,  1676, -2394,   752,  1186, -2394, -2394,
   -2394, -2394, -2394,  1753, -2394, -2394, -2394,  2009, -2394, -2394,
   -2394, -2394, -2394, -2394, -2394,  1829,  1186, -2394,   512, -2394,
   -2394,  1323,  1186, -2394, -2394, -2394, -2394,     5, -2394,  1664,
   -2394,  1296,  1758, -2394, -2394, -2394, -2394,  1838,   488,  1843,
      65, -2394, -2394, -2394, -2394,  2028, -2394,  1614,   188, -2394,
   -2394,    83, -2394, -2394, -2394, -2394,  1540, -2394, -2394, -2394,
    1918,  1916,  1400, -2394, -2394, -2394, -2394, -2394, -2394, -2394,
    1684,  1400, -2394,  1612, -2394,  2012, -2394, -2394, -2394,  1075,
   -2394,   994,  1133, -2394,   116,   193,    -1,   539,   539,   488,
    1860,  1184,   323,   760,  1922, -2394, -2394, -2394,  2059, -2394,
    1870, -2394, -2394, -2394, -2394,  1783, -2394, -2394, -2394, -2394,
    1060,  1938,  1755,   899, -2394,  1567, -2394,  1568,   994,   754,
   -2394,   456, -2394, -2394, -2394,  5842,  1035,  1035,  1035,  1035,
    1035,  1035,  1035,  1035,   476, -2394,   423,  1755,   -65, -2394,
    1653,  1653, -2394, -2394,  -119,  1060,   488,  1875,  1627, -2394,
    1633,  2072,  1060,   341,   459,  2075, -2394,  1578,  1186, -2394,
   -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394,   968, -2394,
   -2394, -2394,  1060,   440, -2394, -2394,  1186,  1735,  1830,  1307,
   -2394, -2394, -2394,  1060,   432, -2394, -2394, -2394, -2394,   432,
   -2394, -2394,  1186,  1367,  1186, -2394, -2394, -2394,  1186, -2394,
   -2394, -2394,   139, -2394, -2394, -2394,  1186,  1585,   432,   432,
   -2394, -2394,   432, -2394, -2394,  1799, -2394, -2394,  1861, -2394,
   -2394, -2394, -2394, -2394, -2394, -2394, -2394,  1498,   -10, -2394,
   -2394,  1793,    64,  1882,   488,   688, -2394, -2394, -2394, -2394,
   -2394,   -19,   153, -2394, -2394, -2394,   701, -2394, -2394, -2394,
   -2394, -2394, -2394,   432, -2394, -2394, -2394, -2394,   432,   473,
     473, -2394, -2394, -2394, -2394, -2394,  1590,   539, -2394,   539,
    1362, -2394,   664,    45,    83, -2394, -2394, -2394,  2028,  1060,
   -2394, -2394, -2394, -2394,  1596,   894,   226,  1600,   688,   994,
   -2394, -2394,  2051, -2394, -2394, -2394, -2394,  1133, -2394,  1915,
   -2394,  1186,  1476,  1794, -2394, -2394,   539, -2394,   539,   760,
   -2394, -2394, -2394,   969, -2394, -2394,  1060,  5842,  1009, -2394,
   -2394, -2394,  1815, -2394, -2394,  1845, -2394, -2394, -2394, -2394,
    1568, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394,
   -2394, -2394, -2394,    32, -2394,  1060, -2394, -2394, -2394,   759,
   -2394, -2394, -2394,  7391, -2394,  5842,  5842,  1647,  1786,  1498,
   -2394,   539, -2394,   688, -2394,  1798, -2394,   994, -2394,  1998,
    1677, -2394,    55, -2394,   802, -2394,  1578, -2394,  1060, -2394,
   -2394, -2394, -2394, -2394, -2394, -2394,  1238,   -32, -2394,  1060,
   -2394, -2394, -2394, -2394, -2394, -2394,   799, -2394,   440,   799,
   -2394, -2394, -2394,   100,  2066,  2938,  1861, -2394, -2394, -2394,
   -2394, -2394, -2394, -2394,  1706,  1917, -2394, -2394, -2394,  1920,
   -2394, -2394, -2394, -2394, -2394, -2394,  1824, -2394,  1487, -2394,
   -2394, -2394, -2394,  1060, -2394, -2394, -2394, -2394, -2394, -2394,
   -2394, -2394, -2394, -2394,  3338, -2394, -2394, -2394,  1246, -2394,
   -2394, -2394,  2005, -2394,   488,  1763,   488,  1764, -2394, -2394,
    5842, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394,
     894, -2394,  2016, -2394,  1400, -2394, -2394, -2394,   688,  1290,
   -2394, -2394,  1290,   -79,  1060, -2394, -2394,   488, -2394, -2394,
    1748, -2394,  2077,  1865,  1892,   522, -2394, -2394, -2394, -2394,
   -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394,   917,
   -2394, -2394, -2394, -2394, -2394,  1834,  1186,  1706,   488,  1638,
   -2394,  2072, -2394,  1557,  2036,  1557,  1647, -2394, -2394, -2394,
   -2394,  1841, -2394, -2394, -2394, -2394,  1255, -2394,  1060,  1069,
   -2394, -2394,  1830, -2394, -2394, -2394, -2394, -2394, -2394, -2394,
   -2394, -2394,   432, -2394, -2394, -2394,   432,   204, -2394, -2394,
    1186, -2394, -2394, -2394, -2394,  1186, -2394, -2394, -2394, -2394,
   -2394,    12, -2394, -2394,  2079, -2394, -2394,    26, -2394, -2394,
    2126, -2394, -2394, -2394,  2938, -2394, -2394, -2394, -2394, -2394,
   -2394, -2394, -2394, -2394,  1060, -2394, -2394, -2394, -2394,  2005,
   -2394,   539, -2394,   539, -2394, -2394, -2394,  2090,  2030,  1290,
    1290, -2394,  1685,  1685, -2394,  1806,  1184,   805, -2394,  1060,
   -2394, -2394,  5842, -2394,  1186,   733,  1883,  1888, -2394,  1890,
   -2394, -2394, -2394, -2394, -2394, -2394, -2394,  1060, -2394, -2394,
   -2394, -2394,  1692, -2394,  1060,  1557, -2394,  1060, -2394, -2394,
   -2394, -2394, -2394, -2394, -2394,  1248,  1186,  1186,  1288, -2394,
   -2394, -2394, -2394, -2394, -2394,  1469, -2394, -2394, -2394,  2038,
     432,   432, -2394,  1186,   473,   473, -2394,   483, -2394, -2394,
   -2394,  1706,  1706,  5842, -2394,  1290, -2394,  5842,  5842,  1186,
    1184,  1184,  1819, -2394, -2394,  1675,  1060, -2394, -2394,  1815,
   -2394, -2394, -2394, -2394, -2394, -2394, -2394,   999, -2394, -2394,
    1060, -2394, -2394, -2394,  1186,  1830,  1830, -2394,  1948,  1186,
    1186, -2394,  1592,  1707, -2394, -2394,   440, -2394, -2394, -2394,
   -2394, -2394, -2394, -2394, -2394, -2394, -2394,   437,  1184,  1186,
   -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394,  1349, -2394,
   -2394, -2394, -2394, -2394,  1821,  2055, -2394,  1830, -2394, -2394,
   -2394,  1830,  1830,  1943,  1215,  1735,  1961,  1374,  1669,  1186,
    1487, -2394,  1186,  1186,  1060, -2394, -2394, -2394, -2394, -2394,
   -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394,   -33, -2394,
     -15, -2394, -2394, -2394,  1215,  1735, -2394, -2394, -2394,   437,
   -2394,  1805,  1765,   185,  1540, -2394, -2394, -2394, -2394, -2394,
   -2394, -2394,   638, -2394,  1186,  1335, -2394,  7711,  7711,  1586,
    2054,  1980, -2394,  1374,   -33, -2394, -2394,  1374,   -15, -2394,
   -2394,   638, -2394, -2394,  1060, -2394,  1108, -2394, -2394, -2394,
      62, -2394,   -33,  1367, -2394,  1498,  7612, -2394, -2394,    77,
     786, -2394, -2394,  1122, -2394, -2394, -2394, -2394,     6,     6,
   -2394, -2394, -2394, -2394, -2394,  7711, -2394, -2394, -2394, -2394,
   -2394, -2394, -2394, -2394,  1848,   797,    62, -2394, -2394, -2394,
    1711, -2394,  1540, -2394, -2394, -2394, -2394, -2394, -2394, -2394,
    1874, -2394,  1874, -2394,  2129, -2394,  1540, -2394, -2394,  1884,
    1060, -2394,  1766,     8,  1867, -2394, -2394,  7711,   713, -2394,
   -2394,  1374, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394,
   -2394, -2394, -2394,  1184, -2394
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2394, -2394, -2394, -2394, -2394,  2182, -2394, -2394, -2394,   205,
   -2394,  2146, -2394,  2101, -2394, -2394,  1356, -2394, -2394, -2394,
    1429, -2394, -2394,   238,  2170, -2394, -2394,  2070, -2394, -2394,
   -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394,  1997,
     615, -2394, -2394, -2394, -2394, -2394,  2052, -2394, -2394, -2394,
   -2394,  1993, -2394, -2394, -2394, -2394, -2394, -2394,  2127, -2394,
   -2394, -2394, -2394,  1982, -2394, -2394, -2394, -2394,  1966, -2394,
   -2394,   -50, -2394, -2394, -2394, -2394, -2394,  2056, -2394, -2394,
   -2394, -2394,  2031, -2394, -2394, -2394, -2394, -2394, -2394, -2394,
   -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394,
   -2394, -2394, -2394, -2394, -2394,  1000, -2394, -2394, -2394, -2394,
   -2394, -2394, -2394, -2394, -2394, -2394,  1686, -2394,  1800, -2394,
   -2394, -2394,  1740, -2394, -2394, -2394, -2394,   319, -2394, -2394,
    1927, -2394, -2394, -2394, -2394, -2394,  1795, -2394, -2394, -2394,
   -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394,
   -2394, -2394,  1188, -2394, -2394, -2394,  1436, -2394, -2394, -2394,
   -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394,
   -2394,   451, -2394, -2394,  1722, -2394,  -756,  -831, -2394, -2394,
   -2394,   276, -2394, -2394, -2394, -2394,    13, -2394, -2394, -2394,
   -2394, -2394, -2394, -2394, -1414,   774,  1473,   389,   564, -1413,
   -2394, -2394, -2394,  -952, -2394,  -458, -2394, -2394,   820, -2394,
     339,   559, -2394,    50, -1410, -2394, -1408, -2394, -1406, -2394,
   -2394,  1428, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394,
   -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394,
   -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394,
   -2394, -2394, -2394, -2394, -2394,  -430,  -460, -2394, -2394, -2394,
   -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -1252, -2394,
    -395, -2394, -2394, -2394, -2394, -2394, -2394, -2394,  1391, -2394,
   -2394, -2394,    35,    39, -2394, -2394, -2394, -2394, -2394, -2394,
   -2394, -2394, -2394, -2394, -2394,  1207,  -943, -2394,   164, -2394,
   -2394, -2394, -2394, -1263, -2394, -2394, -2394, -2394, -2394, -2394,
   -2394, -1324, -2394, -2394,  -698, -2394,  1462, -2394, -2394, -2394,
   -2394, -2394, -2394,  1015,   504,   502, -2394,   424, -2394, -2394,
    -116,  -106, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394,
   -2394,   487, -2394, -2394, -2394,  1031, -2394, -2394, -2394, -2394,
   -2394,   795, -2394, -2394,   207, -2394, -2394, -1260, -2394, -2394,
   -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394,   794, -2394,
   -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394,
   -2394, -2394, -2394, -2394, -2394,   770, -2394, -2394, -2394, -2394,
   -2394,    27, -1767, -2394, -2394, -2394, -2394, -2394, -2394, -2394,
   -2394, -2394, -2394, -2394, -2394,   756, -2394, -2394,   749, -2394,
   -2394,   431,   209, -2394, -2394, -2394, -2394, -2394,   988, -2394,
   -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394,
   -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394,
   -2394,    14,   715, -2394, -2394, -2394, -2394, -2394, -2394, -2394,
   -2394, -2394, -2394, -2394,   710, -2394, -2394,   192, -2394,   411,
   -2394, -2394, -1965, -2394, -2394, -2394, -2394, -2394, -2394, -2394,
   -2394, -2394, -2394, -2394, -2394, -2394,   962,   704,   184, -2394,
   -2394, -2394, -2394, -2394, -2394, -1766,   960, -2394, -2394, -2394,
     181, -2394, -2394, -2394,   391, -2394, -2394, -2394, -2394, -2394,
   -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394,
   -2394,   345, -2394, -2394, -2394, -2394, -2394, -2394,   683,   172,
   -2394, -2394, -2394, -2394, -2394,  -123, -2394, -2394, -2394, -2394,
     369, -2394, -2394, -2394,   941, -2394,   940, -2394, -2394,  1160,
   -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394,
   -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394,   152,
   -2394, -2394, -2394, -2394, -2394,   930,   359, -2394, -2394, -2394,
   -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394,
   -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394,    -8,
   -2394,   361, -2394, -2394, -2394, -2394, -2394, -2394, -2394, -2394,
   -2394, -2394, -2394, -2394,  -361, -2394, -2394, -2394, -2394, -2394,
   -2394, -2394, -2394, -2394,  -227, -2394,   652, -2394, -2394, -1561,
   -2394, -2394,  -689, -2394, -2394, -1626, -2394, -2394,    -2, -2394,
   -2394, -2394, -2394,  -107, -2206, -2394, -2394,    -9, -1824, -2394,
   -2394, -1839, -1554, -1064, -1459, -2394, -2394,   771, -1778,   177,
     179,   183,   186,    92,    80,  -778,   327,   333, -2394,   573,
    -724, -1418, -1075,   134,   981, -1563,  -392,  -328, -2394, -1307,
   -2394, -1051, -2393,   855,  -529,   -90,  2035, -2394,  1642,  -554,
      16,  2187, -1081, -1006,  -863, -1063, -2394, -1076, -1288, -2394,
     420, -1278, -1926, -1104, -1158,  -720, -2394, -2394, -2394, -1126,
   -2394,  -305,  1068,  -628, -2394, -2394,  -103, -1183,  -773,  -111,
    2073, -1895,  2098,  -675,  1513,   421,  -377, -2394, -2394, -2394,
     -86,  1353, -2394, -2394,   384, -2394, -2394, -2394, -2394, -2394,
   -2394, -2394, -2394, -2394, -1987, -2394, -2394,  1591, -2394, -2394,
    -203,  -593,  1929, -2394, -1187, -2394, -1300,  -278,  -637,   893,
   -2394,  1847, -2394, -1448, -2394,  -783, -2394, -2394,   -60, -2394,
      -5,  -654,  -360, -2394, -2394, -2394, -2394,   299,  -277,  -240,
   -1209, -1552,  2142,  1910, -2394, -2394,  -333, -2394, -2394,  1043,
   -2394, -2394, -2394,   417, -2394,   275, -1935, -1466, -2394, -2394,
   -2394,  -155,   478, -1405, -1416, -2394, -2394, -2394,  -786, -2394,
   -2394,  1654, -2394,  1807, -2394, -2394, -2394,   789, -2394, -1667,
    -244, -2394, -2394, -2394, -2394, -2394, -2394
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1854
static const yytype_int16 yytable[] =
{
     139,   427,   139,   428,   692,   160,   415,   960,   139,   749,
    1166,   581,   767,   138,  1276,   141,   992,  1459,  1031,  1370,
    1440,   147,  1007,   787,   741,   404,   245,  1893,  1885,   849,
    1727,  1729,   139,   427,  1730,   215,  1731,  1794,  1732,  1737,
    2214,  1261,  1897,   464,   437,   180,   699,  1233,  1778,  1486,
    1308,   103,   104,   105,   268,  1275,  1279,  1287,  2197,   111,
    1626,  1243,  2061,   776,  1369,  1304,  1847,   708,  1853,    99,
     997,  2675,  1322,  1324,   801,   259,   107,  1642,  1619,  -664,
     345,   246,  1495,  2186,  1352,   463,   411,  1524,  2123,   291,
     854,  1381,  1233,  1478,   134,   135,   849,   136,   211,  1874,
    -662,  1838,   143,   144,  1842,   264,   392,  1442,  1424, -1564,
   -1853,   161,   279,  2150,  1214,   321,  1639,  1298,  1856,   703,
    1214,   535,  1435,  2364,   801,  1298,   220,  1999,   169,  2059,
     832,   832,   114,  2261,  2282,  1692,  1582,  1972,  1454,  1298,
     297, -1565, -1809,  1772,   529,   836,  2415,  2224,  1875,  1479,
    2474,  1770,   752, -1753,   215,   219, -1853,   704,  2148,  2228,
    1222,  1573,  2276,  1693,  1694,   480,  1592,  1017,  -512,  1889,
    2045,  2200,  2317, -1749, -1570, -1749,  1744,   221, -1853,  2151,
     360,   832,     4,  2690,   327,  2713,   251,  1174,  1175,  1632,
    1243,  1214,  1534,  1214,  1180,  1357,  -512,  -512,   258,   745,
    2019,  1813,  1940,  1024,   222,  1852,  2000,  1182,  1449,  1842,
     430, -1853,  2068,  2327,   419,    94,   696,  2103,  -664,  2500,
    1670,  2251,  -664,  2184,   129,  1518,  1563,  1446,  1200,   182,
     724, -1809,  1946,  1186,   274,   275,    43,  2320,  1469,  -662,
     535,  2184,   325,  -662,   295,  1860,   525,  2678,   724,    23,
     515,    94,   299,  2622,    26,  1274,   418,  1583,   610,  1240,
     997,   997,   997,  2107, -1822,  2685,   465, -1568,  1876,     3,
    1894,    47,  1445,  1258,   344,    15,  1445,  1186,   187,  -664,
      91, -1755,   997,  2678,  1624,   188,  1801,  2560,   311,   516,
     611,  1566,  1384,  2542,  1447,  1873,  2623,    43,   314, -1636,
    -662,   725,  1566,   204,  2079,    94,   400, -1853,   212,  1671,
    -512,  2409,  2410,  2104,  2627,  2637,  1381,   183,  1240,   727,
    2160,  1186, -1853,     5,  1810,  1186,   697,   130,  2109,  1941,
    1773,  1877,   448,  1238,  2469,    24,  1204, -1840,  -512,   412,
     139,   746,   139,   139,  1171,  2152,   493,  2328,  2333,   139,
    1450,   154,  2411,  1186,   243,   485,   486,   137,   410,  1298,
   -1749,  1951,   491,  1566,  2034,  2303,   139,   223,  1957,   507,
     507,  1625,   507, -1787, -1532,   507,   514,  1950,   413,   485,
     753,  2229,   127,  1186,   505,   243,   424,   997,   283,  1847,
     755,  1261,  1847, -1591,  1695,   154,  2084,   436,  1413,  1413,
    1413,   280,  2262,  1779,  1519,  2087,   443,   444,  2220,   445,
     446,  1426,  1428,   139,   137,   452,   243,  1002,  1434,  2416,
    -664,  1356, -1753,   281,  1404,  1258,   542,  -512, -1753,   431,
     512,   756,   469,  1574,   794,   -35,   260,   139,   139, -1749,
     837,  -662,  1807,  2225,  1261,   997,  2485,  2465,   492,   705,
     542,   582,   997,   997,   997,  1837,  1839,  2213,  1314,  1474,
    1287,  2230,   413,  1205,  1206,   997,   997,   997,   997,   997,
     997,   997,   997,  2343,   709,   997,  1593,  2047,   139,   757,
    1258,   128,  2018,   689,  2051,  1549, -1532,   466,  2060,   189,
     700,   582,  1496,  1563,  1258,   137,  2382,   139,  1357, -1753,
     536, -1753,   284,  1888,  2077,  1575,   243,   255,   137,  2475,
     540,   137,  1261,   137,  1926,   292,  1858,   368,  -669, -1782,
    -667,   775,  1927,   760,  1890,  1696,  1013,  1006,   346,   577,
    2042,  1387,   855,   761,    97,  2080,   740,  1843,  1357,  1470,
    2073,   794,   467,  1627,  2263,  1258,   755,  1901,  1844,   593,
     743,   595,  1387,  1990,   600,   602,   265,   604,  -512,  1878,
    1187,   190,  1811,   261, -1753,  1924,   322,   137,  2028,   710,
   -1753,  1441,  1525,  1006,  2301,  1261,  1939,  1258,  1298,  1943,
     137,   149,  2531,  1534,  1388,  1018,   682,  1947,  2389,   394,
    2126,   691,   609,   757,  -669,  1173,  -667,  2032,   702,  1496,
    1461,  2501,  1963,  2092,  1187,  1388,  2638,  1002,  1002,  1002,
     449,  1188,  1510,   762,  2231,  1847, -1652,   191,  1566,   536,
    2558,  2559,   192,   243,   707,   758,   759, -1822,  2400,  1002,
    2402,   757,  2061,   137,  1489,  2527,  2528,   760,   834,  1191,
    2131, -1753,  1843, -1753,  1192,  2387, -1787,   761,  1187,  2254,
    1964,  2256,  1187,  1844,   517, -1634,  1387,   748,  2681,   835,
     211,  2420,  2605,   129,   840,  1191,  2606,  2607,  1568,   843,
    1192, -1853,   450, -1840,  1707,   760,  1708,   845,   845,   137,
    1187,   963,   216,   763,  1023,   761,   757,  1928,   154,  2210,
    2287,  2438,  2439,  1240,  1008,  2630,  1252,   755,   780,  1673,
     757,   781,  1707, -1632,  1708,  2216,  1985,  1261,  2680,  1388,
    1187, -1853,  2024,  2143,  1796,  1258,  2144,   739,   283,  1929,
     453, -1853,  1799,  1257,  2243,  1269,   193,   762,   764,   154,
     760, -1629,  1812,  2630,  1002,  2234,   -96,  2040,  2426,  2184,
     761,  1930,  2203,  2318,   760,    16, -1853, -1853,  1344,   757,
    1349,   757,  1126,  2266,   761,  1375,  1315,  2268,  2427,  1126,
    1247,  1685,  1341,  1792,  2054,   762,   130, -1532,   997,  1397,
    2073,  2598,   137,    42,   351, -1532, -1532,   724,   765,  2038,
   -1532,   684,   305,   757,  2428,   583,  1652,    18,  1793,   518,
    1635,  2519,  1002,   760,  1931,   760,  2296,   763,   850,  1002,
    1002,  1002,  1420,   761,  1310,   761,  2106,  1420,  2408,  2429,
     253,  2277,  1002,  1002,  1002,  1002,  1002,  1002,  1002,  1002,
     762,  1420,  1002,  1833,  1834,  1835,  1836,   760,    27,  1318,
    1386,  1775,   284,  2633,   762,   763,   724,   761, -1853,   722,
     328,  1318,   764,  1986,  1653,   243,   137,   154,   729,  1636,
    1165,  1463,  1637,  2490,  1932,  2532,  2533,   997,  1795,  1799,
     603,  1747,  2133,  2120,  1480,   850,  1628,  2335,   228,  2181,
     212,   253,    52,   217,  1341,  1498,  1549,   -96,  1965,  1148,
     764,  1298,  1566,   762,  2718,   762,  1688,  2388,   519,  2322,
     763,  1862,   765,  2390,  1863,    28,   723,  1864,  1865,  2029,
     757,  2055,  1629,  2393,   763,  1968,  1863,   731,   584,  1864,
    1865,  1248,   229,  1249,   139,   139,  1209,   762,   137,   724,
      53,   757,   230,   306,   137,  1127,   226,  1490,  2538,     5,
     765,  1908,  1127,  2249,  2249,   764,  1501,   137,  2719,  2357,
    1748,   187,   137,  2191,   760,   137,  2720, -1767,   188,   764,
    1933,   685,  2657,   763,   761,   763,   735,  1341,    54,   997,
      55,   137,    56,   243,  1801,   760,  1536,  1537,  1748,  1149,
      57,     5,  2259,  2431,  2686,   761,  2432,  2433,   137,   137,
    1454,  1572,  2235,  2236,  2237,   765,  2600,   763,   137,  2434,
     733,   712,  2255,   137,  2257,    33,  2687,   585,   764,   765,
     764,    40,   232,  2449,  2450,  1538,  1539,  2033,  2491,  1246,
    1150,  2265,  1971,  1265,   405, -1749,  1610, -1749,   329,  2394,
    1265,  1300, -1853,  2430,  2297,   227,    58,  1267,  1265,  1439,
    2721,  1319,   764,  1261,   762,   833,  1340,   614,  1347,  1151,
    1347,  1355,  1372,  1319,   137,  2238,  -659, -1853,   765,  2521,
     765,   361,  2640,   243,  2292,   762,   810,  1651,   154,  2555,
    1347,  1025,  2644,  2300,   187,   406,   716,  2479,   713,  2346,
     714,   188,   233,  1357,  1446,   243,   137,   394,   330,   117,
    1282,    39,   765,   362,  1874,  1014,  1261,    59,   300,    52,
     438,  1283,  2311,  2311,  2353,   811,   812,   813,   814,   815,
    1566,  1975,  1484,  2697,   763,  1800,  2595, -1767,  2575,  2576,
     228,  2505,  2578,   187,  2579,  1002,  2580,  2594,    60,   316,
     188, -1769,  2492,  2334,  1613,   763,  2052,  2543,  2347,   782,
    2703,   629,   630,  1875,  1152,  2698,   439,    53,  1246,  2111,
    2062,  1447,  2093,  1603,  2708,  2723,  2026,   830,   830,   764,
    1976,  1977,   189,  1571,   229,  2699,  1919,  1265,  1290,  1866,
    1867,  2124,    61,  2029,   230,    62,  2544,   236,  2239,  2240,
     764,  1866,  1867,  2241,  1665,    54,   807,    55,   231,    56,
     317,   318,   403,  1868,  1869,  -659,  2125,    57,   351,  -659,
     441,  2094,  1604,   137,  1265,  1868,  1869,  2404,   830,   765,
   -1851,   154, -1749,  2545,  1002,  1265,   757,    36,  1922,    94,
      48,  1191,   555,    49,   137,  1550,  1192,  1551,   394,  1923,
     765,  1641,   750,  2187,   190, -1853,  2293, -1853,   556,  1909,
      63,  2289,   416,   154,   816,   817,   818,   819,   820,   821,
     822,   642,   643,    58,   232, -1853,  -659,  2455,  1201,  1355,
     760,    64, -1853,  1876,   751,  1016,  2290,  2456,  2348,  2219,
     761,  1409,  1265,  2349,   243,   394,  1265, -1782,   557,  2195,
    2672, -1853,  1905,    51,  2673,   189,    65,  1351,    66,  2457,
     191, -1749,  1291,  1292,   155,   192,   156, -1082,  2207,  2208,
    1902,  1436,  2209,  2026,    67,    94, -1853,  1401,  2412,  1293,
    1325,  1420,   139,   470,   471,   472,  1002,   137,    97,  2458,
    2688,    93,  1958,  2191,   233,  1667,  1877,   234,   235,  1903,
    2554,  1481,   831,   831,   189,  1484,  2481,  2413,  2482,  2645,
    2647, -1082,  2689,  2245,  1341,    60,   252,   139,  2246, -1749,
     762, -1082,   155,  2517,   156,   757,  1596,   190,  2249,  2249,
   -1570,  2530,  2244,  1294,  1326,  2512,  2344,  2476,  2684,  2495,
    2223,  2618,  1327,  1780,  1597,  2513,    68,   794,  -870,    21,
      22,  -870,  2667,   831,  2095,  2309,  1191,  2694,  2518,    61,
     596,  1192,   597,   719,  2183,   823,  2601,  -659,    46,   760,
    2679,  1423,  1682,  2063,  2064,  2512,   190,    94,   824,   761,
    2215,  1191,  1191,   191,   558,  2513,  1192,  1192,   192,   236,
     763,  1214,   170,  2223,   100,   559,  1780,  2179,    94,  2717,
    2534, -1082,  2597,   473,  2535,  2536,  1193,  1191,   713,   997,
     714,    13,  1192,  1687,  1892,  1194,    13,   474,  1700,  1736,
    1482,  1738,   757,  1752,  1753,  -870,  1328,  1656,   594,  1657,
   -1753,   106,   191,   601,  2336,   764,   171,   192,  1913,   254,
    1998,   114,  -870,  1190,  1246,  1987,   172,  1988,    64,   243,
    2008,  2009,  1191,   508,  2012,   510,   101,  1192,   511,   762,
    2056,  1265,  2057,  1938,  1780,  1754,   760,  1755,  2223,  1756,
    2340, -1082,  2341,  1674,   108,  1246,   761,  1678,  2396,   137,
    2397,   428,  1920,   109,  1680,   765,   110,  2452,   298,  2453,
   -1853,    67,   255,   243,  2610,  2611,   560,   561,  1429,  1430,
     475,  1265,   112,  1757,  1758,  1759,  1431,  1432,  1433,  1683,
     118,   562,   476,   563,   113,  1754, -1082,  1755,  1191,   120,
    2444,  1949,  2447,  1192,  1878,   122,   173,  1780,   140,   763,
   -1548, -1548, -1548, -1548,  -870,  -870,  -870,  1181,   124,  1183,
     137,  1415,  1416,  -870,   126,   137,  1512,  1513,  1514,  1515,
     142,   139,   149,  1760,  -870,  1761,   762,   162,   163,   164,
   -1082,   167,  1762,    68,  1959,  1763, -1082,   181,   185,  1960,
    1961,  1962,   204,   186,   764,  1966,   193,   242,  1969,  1970,
     248,   247,  2096,  2223,   249,   250,  1993,  -870,   257, -1547,
   -1547, -1547, -1547,  -870,   269,  -870,   174,   564,  -870,   273,
    -870,  -870,  -870,   477,   278,   294,  -870,  2001,  -870,   296,
     154,  1936,  2467,  -870,   302,   300,  2468,   627,   137,   303,
    2648,  2517,   307,   308,   765,   309,   763,   312,   313,  2338,
     326,   333,   334,   755,   338,   340,   342,  1707,  1754,  1708,
    1755,   175,  2510,  2643,   565,  -870,   728,   730,   732,   734,
    -870,  1764,   336,  1765,   349,  1265,  2649,   351,   353,  1265,
     354,   392,  1265,   356,  -870,  1246,   397,  1973,  1974,   394,
    1357,   764,   398,  2512,   401,   403,   408,   187,  1984,  1816,
     243,   409,  1817,  2513,   420,  1989,   421,   422,  -870,  1818,
    1819,   176,   429,   413,   454,   455,   457,   428,   459, -1753,
     483,  -347,   487,   490,   494,   495,   502,   966,   509,   521,
     523,   522,   527,   543,  2002,  1265,   533,   547,  2113,  -870,
     548,   765,  2285,   549,   967,   551,   552,  -360,   554,   578,
    2524,  2525,   579,   588,   587,   589,  1820,   605,   607,   612,
     613,   616,   617,   688,   690,   701,   693,   718,   735,   754,
     737,   744,  -870,   770,   773,   777,  1002,   779,  -870,   786,
     789,   790,   792,   797,  1265,  1265,  1265,   794,   802,  2158,
    -870,  -870,  2046,   808,   841,   834,   804,   847,  2158,  1913,
     961,  2563,  1006,  2134,  2135,  2136,  2137,  2138,  2139,  2140,
    2141,  2053, -1636,   964,  1012,  1011,  1015,  2058,  1028,  1036,
    1137,  1033,  1156,  -870,  1164,  1821,  1167,   645,  1169,  1195,
    1504,  1207,  1220,  -870,  1211,  1213,   968,   969,   970,  -870,
    1280,  1176,  1177,  1265,  2564,   971,  2565,  1301,  1402,  1404,
    1221,  1178,  1179,  -870,  1822,  1184,   757,  1411,  -870,  1412,
    1196, -1753,   999,  1766,  1198,  -870,  1422,  -870,  1437,   139,
    1199,  1438,  1439,  -870,  1452,  1823,  1458,  2566,  1464,  1473,
    1475,  1319,  2180,  1487,  1493,  1499,  1319,  1502,  1520,  1516,
    1564,  2201,  1522,   997,   997,  1568,  1581,  2567,  1585,  1587,
     760,  1584,   975,   976,   977,  1319,  1319,  2650,   978,  1319,
     761,  2651,  2652,  1767,  1589,  1226, -1550,  1598,   755,   649,
    1600,  1601,   997,  1599,  1768,  2568,  1606,  1608,  1615,  1824,
    1611,  1265,  1631,  1633,  1617,  1214,  1357,  1648,  1643,  1661,
    1655,   997,  1659,  1668,  1663,  1675,  1676,   979,  2250,  2250,
    1319,  1677,  2653,  2178,  2113,  1319,  1319,  1319,  2641,  1689,
    1679,  1681,  1686,  2295,  1265,  1684,  1265,  1740,  2654,  2655,
    1691,  2182,  2613,  1739,  1742,  1745,  1776,  2670,  1782,  1783,
    1787,  1785,  1825,   997,  1797,  1240,  1801,  2196,  1808,  2198,
     762,  1814,   966,  2199,  1831,  1504,  1848,   654,  1859,  1872,
    1574,  2204,  2632,  1265,  1895,  1265,  2569,  1851,  1887,   967,
    1914,  1910,  1918,  1925,  1945,  1980,  1981,  1991,  1952,  1994,
    1997,   981,  1377,  2570,  2003,  2004,  1747,  2013,  2035,  2021,
    2006,  2016,  2017,  2020,  2039,  2022,  2023,  2043,  2044,  1454,
    1816,  2067,  1826,  1817,  2571,  2074,  2069,  2081,  2048,  2085,
    1818,  1819,   999,   999,   999,  1827,  2082,  2075,  1265,  2088,
     763,  2089,   357,  2108,  2114,  2572,  2117,  2116,  2120,  2127,
    2128,  1319,   982,   983,   999,   139,  2154,   358,  2161,  2162,
    2163,  2164,  2173,  2175,  2573, -1569,  2184,   359,   542,  2205,
    2217,   663,  2574,  2211,  2252,  2269,  2284,  1820,   428,  2275,
    2278,   968,   969,   970,  2281,   764,  2297,  2299,  2286,  2313,
     971,  2321,  2323,  2358,  2325,   987,  2316,  2029,  2391,  2406,
   -1525,   757,   360, -1567,  2401,  2403,  2422,  2423,  2421,  2424,
    2435,  2440,  2445,  2328,  2476,   988,  2473,  1645,  1828,  2483,
     989,  2484,  2486,  2489,  2508,  2502,   428,   990,  2523,   137,
    2503,  1265,  2504,  1265,  1228,   765,  2539,  2540,  2560,  2596,
     973,  2603,   974,  2604,  2608,   760,  1821,   975,   976,   977,
    2614,  2616,  2634,   978,  2664,   761,  2665,  1225,  2707,  1239,
    1229,   139,  1255,  2635,  1265,  2695,  1277,  2704,  2716,    17,
    2709,  2711,    92,   125,  2418,  1822,    38,   166,   256,   266,
     209,  1313,   119,   277,   290,   545,   210,  1339,   241,   504,
     442,  2110,   979,   323,  1208,  1265,  1823,   846,  1728,   526,
     456,   798,  2702,  1666,  2102,  1956,  2337,  1010,  1395,  2693,
    1399,   980,  2706,  2669,  2354,   139,  2260,   999,  2355,  1456,
    1002,  1002,  1219,  1032,   999,   999,   999,  1418,   582,  1319,
     959,  2010,  1418,  1319,  2011,   762,  2066,   999,   999,   999,
     999,   999,   999,   999,   999,  2472,  1418,   999,  2478,  1002,
    1824,  2037,  1472,  1790,  1791,  1806,  1849,  2258,   361,  2399,
    1841,  1565,  2078,  2264,  2405,  1871,   981,  1883,  1002,  2280,
    2090,  1588,  1891,  2288,  1591,  1460,  2118,  2291,  1265,  2172,
    1265,  1917,  2302,  2142,  1622,  1623,  1373,  1001,  2312,  1646,
     362,  2437,  2170,  2443,  2171,  2701,  2494,  1955,  2499,  1339,
    -233,  1255,  2451,  1825,  2448,   763,  2305,  1855,  2306,  1789,
    1002,   428,  2307,  1614,   332,  2308,   772,   982,   983,   213,
     293,  2132,  1185,   310,   806,  2602,   447,   621,   622,   623,
     624,   625,   626,  2488,  2631,  2470,   539,   272,  2156,   489,
    2471,  2274,  2101,  2250,  2250,   599,   783,  1319,  1319,  1886,
     764,  1319,  1319,   363,  1319,  2658,     0,     0,   364,     0,
     987,     0,   628,  1826,   629,   630,   631,   632,   633,   634,
     635,     0,     0,     0,     0,     0,  1827,     0,     0,     0,
     988,     0,  1339,     0,     0,   989,     0,     0,     0,   365,
       0,     0,   990,     0,   137,     0,     0,   366,     0,  2496,
     765,     0,     0,     0,  1620,     0,     0,     0,   636,     0,
     367,     0,     0,     0,  1246,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1647,  2515,  2516,     0,     0,     0,  2615,     0,     0,   368,
       0,     0,   369,     0,     0,     0,     0,     0,  2526,     0,
     370,     0,     0,     0,     0,     0,     0,     0,     0,  1828,
       0,  -230,     0,     0,  2537,  1172,     0,   637,   638,   639,
     640,   641,     0,     0,   642,   643,  1246,  1001,  1001,  1001,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2557,
     371,     0,  2666,   372,  2561,  2562,  2668,     0,     0,  1001,
       0,     0,  1620,     0,     0,     0,     0,   644,     0,     0,
       0,   857,     0,   858,  2599,   859,     0,  1246,     0,     0,
     860,     0,     0,     0,     0,     0,     0,     0,   861,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     999,     0,     0,     0,  2617,     0,     0,  2619,  2620,     0,
       0,     0,     0,  1246,     0,     0,     0,     0,     0,     0,
       0,   862,   863,     0,     0,   646,     0,     0,     0,     0,
       0,   864,     0,     0,     0,     0,     0,  2710,     0,     0,
    2724,     0,   865,     0,     0,   866,     0,     0,     0,  2642,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   867,
     966,     0,     0,     0,  1001,     0,     0,   648,     0,  1266,
       0,     0,     0,     0,     0,     0,  1266,   967,   650,     0,
       0,  1620,   868,     0,  1266,     0,     0,     0,     0,   999,
     869,   651,   870,     0,     0,     0,     0,     0,  1266,     0,
       0,     0,     0,     0,     0,  1900,     0,     0,     0,     0,
       0,     0,     0,     0,  1907,     0,     0,     0,     0,     0,
       0,     0,  1001,   871,     0,  1916,     0,     0,     0,  1001,
    1001,  1001,  1419,     0,   872,     0,     0,  1419,     0,   873,
       0,     0,  1001,  1001,  1001,  1001,  1001,  1001,  1001,  1001,
       0,  1419,  1001,  1944,     0,   655,   656,   657,     0,     0,
       0,     0,     0,  1620,     0,   874,     0,     0,     0,   968,
     969,   970,   875,     0,     0,   876,   877,     0,   971,     0,
       0,  1462,     0,     0,     0,   878,  1418,     0,     0,     0,
       0,   999,   879,     0,   880,     0,     0,   881,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1266,     0,     0,     0,     0,     0,  1339,
       0,     0,     0,     0,     0,     0,   659,   660,   661,     0,
       0,  1995,     0,  1477,  1996,   975,   976,   977,     0,   882,
       0,   978,     0,   883,     0,   884,     0,     0,     0,     0,
    1266,     0,     0,     0,     0,   885,     0,     0,     0,     0,
       0,  1266,     0,     0,     0,     0,     0,     0,  1620,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     979,   886,     0,     0,  2027,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   887,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1226,     0,  1621,
     755,     0,     0,     0,     0,     0,     0,     0,  1266,   888,
     889,     0,  1266,     0,     0,     0,     0,     0,     0,     0,
     890,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   891,   892,     0,     0,     0,     0,
       0,   893,     0,     0,   981,   894,     0,     0,     0,     0,
       0,     0,     0,   895,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   896,     0,     0,     0,     0,     0,     0,
       0,     0,   897,     0,   966,     0,     0,     0,     0,  1620,
    1620,   898,     0,     0,     0,     0,   899,   900,     0,     0,
     901,   967,   902,     0,     0,   982,   983,  1621,     0,   903,
    2359,     0,     0,  2360,     0,     0,  2361,     0,  2119,  1781,
       0,     0,   904,     0,  2362,     0,  1620,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     905,     0,     0,     0,     0,  1001,   906,     0,   987,     0,
       0,   907,     0,  2159,  1921,     0,     0,     0,     0,     0,
    2169,  2169,     0,     0,     0,     0,     0,     0,   988,     0,
    2363,     0,  1781,   989,     0,     0,     0,     0,   908,     0,
     990,  1255,   137,     0,     0,     0,     0,     0,     0,  2364,
       0,  2190,     0,   968,   969,   970,     0,     0,     0,     0,
       0,     0,   971,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   757,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1621,     0,     0,     0,
       0,     0,     0,     0,  1001,     0,     0,  1266,     0,     0,
    1781,     0,     0,  2222,     0,     0,  1228,     0,     0,     0,
       0,     0,   973,     0,   974,     0,     0,   760,     0,   975,
     976,   977,     0,     0,     0,   978,     0,   761,  2365,     0,
       0,     0,  1229,     0,     0,     0,  2366,  1266,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2267,     0,  2367,
       0,     0,     0,     0,     0,     0,  2222,  1620,     0,     0,
       0,     0,     0,  1781,   979,  1620,     0,     0,  1621,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2368,     0,   980,  1900,     0,     0,     0,     0,     0,
       0,  1419,     0,     0,     0,     0,  1001,     0,     0,     0,
       0,  2369,     0,  2370,     0,     0,     0,   762,     0,     0,
       0,     0,     0,  2304,     0,     0,     0,     0,     0,     0,
       0,   999,     0,     0,     0,  2371,  2372,     0,     0,     0,
       0,  2222,     0,     0,     0,  1620,     0,     0,   981,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2373,  2345,     0,     0,
       0,     0,     0,     0,     0,     0,  1255,     0,     0,     0,
       0,     0,     0,  1621,     0,     0,     0,   763,     0,     0,
       0,     0,     0,  2374,     0,     0,     0,     0,     0,   982,
     983,  1266,     0,     0,     0,  1266,     0,     0,  1266,     0,
       0,  2395,     0,     0,     0,     0,     0,     0,     0,  2375,
       0,     0,     0,     0,     0,  1922,  2376,     0,     0,     0,
       0,     0,   764,     0,     0,     0,  1923,     0,     0,  2377,
       0,     0,   987,  2378,     0,     0,     0,     0,     0,   857,
       0,   858,     0,   859,     0,     0,  2222,     0,   860,     0,
       0,  1266,   988,     0,     0,     0,   861,   989,     0,     0,
       0,     0,     0,     0,   990,     0,   137,     0,     0,     0,
       0,     0,   765,     0,  2379,     0,     0,     0,     0,     0,
       0,     0,     0,  2380,     0,     0,     0,     0,     0,   862,
     863,     0,     0,     0,  1621,  1621,     0,     0,     0,   864,
    1266,  1266,  1266,     0,     0,     0,     0,     0,     0,     0,
     865,     0,  2381,   866,     0,     0,     0,     0,     0,     0,
       0,     0,  2382,     0,     0,     0,     0,   867,  2383,     0,
       0,  1621,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     868,     0,     0,     0,     0,     0,     0,     0,   869,  1266,
     870,     0,  2480,     0,     0,     0,     0,  -706,     0,  -706,
    -706,  -706,  -706,  -706,  -706,  -706,  -706,     0,  -706,  -706,
    -706,     0,  -706,  -706,  -706,  -706,  -706,  -706,  -706,  -706,
    -706,   871,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   872,     0,     0,  2506,     0,   873,     0,     0,
       0,     0,  2509,     0,     0,  2511,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   874,     0,     0,     0,     0,     0,     0,
     875,     0,     0,   876,   877,     0,     0,  1266,     0,     0,
       0,     0,     0,   878,     0,     0,     0,     0,     0,     0,
     879,     0,   880,     0,  2541,   881,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2556,     0,
    1266,     0,  1266,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1255,     0,     0,     0,     0,     0,
       0,     0,  1621,     0,     0,     0,     0,   882,     0,     0,
    1621,   883,     0,   884,     0,     0,     0,     0,     0,  1266,
       0,  1266,     0,   885,     0,     0,     0,     0,     0,  -706,
    -706,     0,  -706,  -706,  -706,  -706,     0,     0,     0,     0,
       0,     0,  2621,     0,     0,     0,     0,     0,     0,   886,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   887,     0,     0,     0,  1001,     0,     0,     0,
       0,     0,     0,     0,  1266,     0,     0,     0,     0,     0,
    1621,     0,     0,     0,     0,   999,   999,   888,   889,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   890,     0,
       0,     0,  2671,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   891,   892,   999,     0,     0,     0,     0,   893,
       0,     0,     0,   894,     0,     0,  2692,  2692,     0,     0,
       0,   895,     0,   999,     0,     0,   857,     0,   858,     0,
     859,   896,     0,     0,     0,   860,     0,     0,     0,     0,
     897,     0,     0,   861,     0,     0,     0,     0,     0,   898,
       0,     0,     0,     0,   899,   900,     0,  1266,   901,  1266,
     902,  2715,     0,     0,     0,   999,     0,   903,     0,     0,
       0,     0,     0,     0,     0,     0,   862,   863,     0,     0,
    -706,     0,     0,     0,     0,     0,   864,     0,     0,     0,
    1266,     0,     0,     0,     0,     0,     0,   865,   905,     0,
     866,     0,     0,     0,   906,     0,     0,     0,     0,   907,
       0,     0,     0,     0,   867,     0,     0,     0,     0,     0,
       0,  1266,     0,     0,   857,     0,   858,     0,   859,     0,
    -706,     0,     0,   860,     0,     0,   908,   868,     0,     0,
       0,   861,     0,     0,     0,   869,   966,   870,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   967,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   862,   863,     0,     0,   871,     0,
       0,     0,     0,     0,   864,     0,     0,     0,     0,   872,
       0,     0,     0,     0,   873,   865,     0,     0,   866,     0,
       0,     0,     0,     0,  1266,     0,  1266,     0,     0,     0,
       0,     0,   867,     0,     0,     0,     0,     0,     0,     0,
     874,     0,     0,     0,     0,     0,     0,   875,     0,     0,
     876,   877,     0,     0,     0,   868,     0,     0,     0,     0,
     878,     0,     0,   869,     0,   870,     0,   879,     0,   880,
       0,     0,   881,     0,  1331,   968,   969,   970,     0,     0,
       0,     0,     0,     0,   971,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   871,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   872,     0,     0,
       0,     0,   873,     0,   882,     0,     0,     0,   883,     0,
     884,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     885,     0,     0,     0,     0,     0,     0,     0,   874,  1332,
       0,   975,   976,   977,     0,   875,     0,   978,   876,   877,
       0,     0,     0,     0,     0,     0,   886,     0,   878,     0,
       0,     0,     0,     0,     0,   879,     0,   880,     0,   887,
     881,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   979,     0,     0,     0,
       0,     0,     0,     0,   888,   889,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   890,     0,     0,     0,     0,
       0,     0,   882,     0,     0,     0,   883,     0,   884,   891,
     892,     0,     0,     0,     0,     0,   893,     0,   885,     0,
     894,     0,     0,     0,     0,     0,     0,     0,   895,     0,
    1001,  1001,     0,     0,     0,     0,     0,     0,   896,     0,
       0,     0,     0,     0,   886,     0,     0,   897,     0,     0,
     981,     0,     0,     0,     0,     0,   898,   887,     0,  1001,
       0,   899,   900,     0,     0,   901,     0,   902,     0,     0,
       0,     0,     0,     0,   903,     0,     0,     0,  1001,     0,
       0,     0,   888,   889,     0,     0,     0,  1654,     0,  1038,
       0,  1039,     0,   890,     0,     0,  1040,     0,     0,     0,
       0,   982,   983,     0,  1041,   905,     0,   891,   892,     0,
       0,   906,     0, -1853,   893,     0,   907,     0,   894,     0,
    1001,     0,     0,     0,     0,     0,   895,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   896,  1042,  1043,     0,
       0,     0,     0,   908,   987,   897,     0,  1044,     0,     0,
       0,     0,     0,     0,   898, -1135,     0,     0,  1045,   899,
     900,  1046,     0,   901,   988,   902,     0,     0,     0,   989,
       0,     0,   903, -1135,     0,  1047,   990,   243,   137,  1226,
       0,     0,   755,     0,     0,  1530,  1531,  1532,     0,     0,
       0,     0,     0,  1533,     0,     0,     0,     0,  1048,     0,
       0,     0,     0,   905,     0,     0,  1049,     0,  1050,   906,
       0,     0,     0,     0,   907,  1051,     0,  1052,  1053,  1054,
    1055,  1056,  1057,  1058,  1059,     0,  1060,  1061,  1062,     0,
    1063,  1064,  1065,  1066,  1067,  1068,  1069,  1070,  1071,  1072,
       0,   908,     0,     0,     0,     0,     0,     0,     0,     0,
    1073,     0,     0,     0,     0,  1074,   966,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   967,     0,     0,     0,     0,     0,     0,
       0,  1075,     0,     0,     0,     0,     0,     0,  1076,     0,
       0,  1077,  1078,     0,     0,     0,     0,     0,     0,     0,
       0,  1079,     0,     0,     0,     0,     0,     0,  1080,     0,
    1081,     0,     0,  1082,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1534,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1535,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1083,     0,     0,     0,  1084,
       0,  1085,     0,     0,     0,   968,   969,   970,     0,     0,
       0,  1086,     0,     0,   971,     0,     0,     0,     0,     0,
    1536,  1537,     0,     0,     0,   757,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1087,     0,     0,
       0,     0,     0,     0,     0,  1854,     0,     0,     0,     0,
    1088,     0,     0,     0,     0,     0,     0,     0,  1228,  1538,
    1539,     0,     0,     0,   973,     0,   974,     0,     0,   760,
       0,   975,   976,   977,     0,  1089,     0,   978,     0,   761,
       0,     0,     0,     0,  1229,     0,  1090,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1540,     0,     0,
       0,  1091,     0,  1541,     0,     0,  1542,  1092,     0,     0,
       0,  1093,     0,     0,  1543,     0,   979,     0,     0,  1094,
       0,  1544,     0,     0,     0,     0,  1545,     0,     0,  1095,
       0,     0,     0,     0,  1226,   980,     0,   755,  1096,     0,
    1530,  1531,  1532,     0,     0,  1546,     0,  1097,  1533,     0,
       0,     0,  1098,  1099,     0,     0,  1100,     0,  1101,   762,
       0,     0,     0,     0,     0,  1102,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1103,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     981,     0,     0,     0,     0,     0,  1104,     0,     0,     0,
       0,     0,  1105,     0,     0,     0,     0,  1106,     0,     0,
       0,   966,     0,     0,     0,     0,     0,     0,     0,  1226,
       0,     0,   755,     0,     0,     0,     0,     0,   967,   763,
       0,     0,     0,     0,  1107,     0,     0,     0,     0,     0,
       0,   982,   983,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1226,     0,     0,
     755,     0,  1547,     0,  1548,     0,  1549,     0,     0,  1550,
       0,  1551,  1552,  1553,   764,     0,  1554,  1555,     0,     0,
       0,     0,     0,     0,   987,     0,     0,     0,  1534,     0,
       0,     0,     0,     0,     0,     0,   966,     0,  1535,     0,
       0,     0,     0,     0,   988,     0,     0,     0,  1227,   989,
       0,     0,     0,   967,     0,     0,   990,     0,   137,     0,
     968,   969,   970,     0,   765,     0,     0,     0,     0,   971,
       0,     0,     0,     0,   966,  1536,  1537,     0,     0,     0,
     757,     0,     0,     0,     0,     0,  1320,     0,     0,     0,
       0,   967,     0,     0,     0,  1226,     0,     0,   755,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1228,  1538,  1539,     0,     0,     0,   973,
       0,   974,     0,     0,   760,     0,   975,   976,   977,     0,
       0,     0,   978,     0,   761,     0,     0,     0,     0,  1229,
       0,     0,     0,     0,     0,   968,   969,   970,     0,     0,
       0,     0,  1540,     0,   971,     0,     0,     0,  1541,     0,
       0,  1542,     0,     0,     0,   757,     0,     0,     0,  1543,
       0,   979,   966,     0,     0,     0,  1544,     0,     0,     0,
       0,  1545,     0,   968,   969,   970,     0,     0,     0,   967,
     980,     0,   971,     0,     0,     0,     0,     0,  1228,     0,
    1546,     0,  1377,   757,   973,     0,   974,     0,     0,   760,
       0,   975,   976,   977,   762,     0,     0,   978,     0,   761,
       0,     0,     0,     0,  1229,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1228,     0,     0,     0,
       0,     0,   973,     0,   974,   981,     0,   760,     0,   975,
     976,   977,     0,     0,     0,   978,   979,   761,     0,     0,
       0,     0,  1229,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   980,     0,     0,     0,     0,
       0,   968,   969,   970,   763,     0,  1226,     0,     0,   755,
     971,     0,     0,     0,   979,     0,   982,   983,     0,   762,
       0,   757,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   980,     0,     0,     0,  1547,     0,  1548,
       0,  1549,     0,     0,  1550,     0,  1551,  1552,  1553,   764,
     981,  1554,  1555,     0,  1228,     0,     0,   762,     0,   987,
     973,     0,   974,     0,     0,   760,     0,   975,   976,   977,
       0,     0,     0,   978,     0,   761,     0,     0,     0,   988,
    1229,     0,     0,   966,   989,     0,     0,     0,   981,   763,
       0,   990,     0,   137,     0,  1382,     0,     0,     0,   765,
     967,   982,   983,  1226,     0,     0,   755,     0,     0,     0,
       0,     0,   979,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   763,     0,     0,
       0,   980,     0,     0,   764,     0,     0,     0,     0,   982,
     983,     0,     0,     0,   987,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   762,     0,     0,     0,     0,
       0,     0,     0,     0,   988,     0,     0,     0,     0,   989,
       0,     0,   764,     0,     0,     0,   990,     0,   137,     0,
     966,     0,   987,     0,   765,     0,   981,     0,     0,     0,
       0,     0,   968,   969,   970,     0,     0,   967,     0,     0,
    -926,   971,   988,  -926,     0,     0,     0,   989,     0,     0,
       0,     0,   757,     0,   990,     0,   137,     0,     0,     0,
       0,     0,   765,     0,     0,   763,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   982,   983,     0,
       0,     0,     0,     0,     0,  1228,     0,     0,     0,     0,
       0,   973,     0,   974,     0,     0,   760,     0,   975,   976,
     977,     0,     0,     0,   978,     0,   761,     0,     0,     0,
     764,  1229,     0,     0,     0,     0,     0,  -926,     0,     0,
     987,     0,     0,     0,     0,     0,     0,     0,     0,   968,
     969,   970,     0,     0,  -926,     0,     0,     0,   971,     0,
     988,     0,     0,   979,     0,   989,     0,     0,     0,   757,
       0,     0,   990,     0,   137,     0,     0,     0,     0,     0,
     765,     0,   980,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1228,     0,     0,     0,   762,     0,   973,     0,
     974,     0,     0,   760,     0,   975,   976,   977,     0,     0,
    1504,   978,     0,   761,     0,     0,     0,     0,  1229,     0,
       0,     0,     0,     0,     0,     0,     0,   981,     0,  1226,
       0,     0,   755,     0,     0,     0,  -926,  -926,  -926,     0,
       0,     0,     0,     0,     0,  -926,     0,     0,     0,     0,
     979,     0,     0,     0,     0,     0,  -926,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   763,     0,     0,   980,
       0,     0,     0,     0,     0,     0,     0,     0,   982,   983,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -926,
       0,     0,     0,   762,     0,  -926,     0,  -926,     0,     0,
    -926,     0,  -926,  -926,  -926,     0,   966,     0,  -926,     0,
    -926,   764,     0,     0,     0,  -926,     0,     0,     0,     0,
       0,   987,     0,   967,   981,     0,  1226,     0,     0,   755,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   988,     0,     0,     0,     0,   989,  -926,     0,     0,
       0,     0,     0,   990,     0,   137,     0,     0,     0,     0,
       0,   765,     0,   763,     0,     0,  -926,     0,     0,     0,
       0,     0,     0,     0,     0,   982,   983,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -926,     0,     0,     0,  1466,     0,     0,     0,     0,     0,
       0,     0,     0,   966,     0,     0,     0,     0,   764,     0,
       0,     0,     0,     0,     0,   968,   969,   970,   987,     0,
     967,  -926,     0,  1226,   971,     0,   755,     0,     0,     0,
       0,     0,     0,     0,     0,   757,     0,     0,   988,     0,
       0,     0,     0,   989,     0,     0,     0,     0,     0,     0,
     990,     0,   137,     0,     0,     0,     0,     0,   765,     0,
    -926,     0,     0,     0,     0,     0,     0,     0,  1228,     0,
       0,     0,  -926,  -926,   973,     0,   974,     0,     0,   760,
       0,   975,   976,   977,     0,     0,     0,   978,     0,   761,
       0,     0,     0,     0,  1229,     0,     0,     0,     0,     0,
     966,     0,     0,     0,     0,  -926,     0,     0,     0,     0,
       0,     0,   968,   969,   970,  -926,  1650,   967,     0,     0,
       0,   971,     0,     0,     0,     0,   979,     0,     0,     0,
       0,     0,   757,     0,     0,  -926,     0,     0,     0,     0,
    -926,     0,     0,     0,     0,   980,     0,  -926,     0,  -926,
       0,     0,     0,     0,     0,  -926,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1228,     0,     0,     0,   762,
       0,   973,     0,   974,     0,     0,   760,     0,   975,   976,
     977,   966,     0,     0,   978,     0,   761,     0,     0,     0,
       0,  1229,     0,     0,     0,     0,     0,     0,   967,     0,
     981,     0,  1226,     0,     0,   755,     0,     0,     0,   968,
     969,   970,     0,     0,     0,     0,     0,     0,   971,     0,
       0,     0,     0,   979,     0,     0,     0,     0,     0,   757,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   763,
       0,     0,   980,     0,     0,     0,     0,     0,     0,     0,
       0,   982,   983,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1228,     0,     0,     0,   762,     0,   973,     0,
     974,     0,     0,   760,     0,   975,   976,   977,     0,   966,
       0,   978,     0,   761,   764,     0,     0,     0,  1229,     0,
     968,   969,   970,     0,   987,     0,   967,   981,  1226,   971,
       0,   755,     0,     0,     0,     0,     0,     0,  1508,     0,
     757,     0,     0,     0,   988,     0,     0,     0,     0,   989,
     979,     0,     0,     0,     0,     0,   990,     0,   137,     0,
       0,     0,     0,     0,   765,     0,   763,     0,     0,   980,
       0,     0,     0,     0,     0,     0,     0,     0,   982,   983,
       0,     0,     0,     0,   760,     0,   975,   976,   977,     0,
       0,     0,   978,   762,   761,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   966,     0,     0,     0,     0,
       0,   764,     0,     0,     0,     0,     0,     0,   968,   969,
     970,   987,   967,     0,   981,     0,  1777,   971,     0,   755,
       0,   979,     0,     0,     0,     0,     0,     0,   757,     0,
       0,   988,     0,     0,     0,     0,   989,     0,     0,     0,
       0,     0,     0,   990,     0,   137,     0,  1942,     0,     0,
       0,   765,     0,   763,     0,     0,     0,     0,     0,     0,
       0,  1228,     0,     0,   762,   982,   983,   973,     0,   974,
       0,     0,  1270,     0,   975,   976,   977,     0,     0,     0,
     978,     0,   761,     0,     0,     0,     0,  1229,     0,     0,
       0,     0,     0,   966,     0,   981,     0,     0,   764,     0,
       0,     0,     0,     0,   968,   969,   970,     0,   987,     0,
     967,     0,     0,   971,     0,     0,     0,     0,     0,   979,
       0,     0,     0,     0,   757,     0,     0,     0,   988,     0,
       0,     0,     0,   989,   763,     0,     0,     0,   980,     0,
     990,     0,   137,     0,     0,     0,   982,   983,   765,     0,
       0,     0,     0,     0,     0,     0,     0,  1228,     0,     0,
       0,     0,   762,   973,     0,   974,     0,     0,   760,     0,
     975,   976,   977,     0,     0,     0,   978,     0,   761,   764,
       0,     0,     0,  1229,     0,     0,     0,     0,     0,   987,
       0,     0,     0,   981,     0,     0,     0,     0,     0,     0,
       0,     0,   968,   969,   970,     0,     0,     0,     0,   988,
       0,   971,     0,     0,   989,   979,     0,     0,     0,     0,
       0,   990,   757,   137,     0,     0,     0,     0,     0,   765,
       0,     0,   763,     0,   980,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   982,   983,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1228,     0,     0,   762,     0,
       0,   973,     0,   974,     0,     0,   760,     0,   975,   976,
     977,   966,     0,     0,   978,     0,   761,   764,     0,     0,
       0,  1229,     0,     0,     0,     0,     0,   987,   967,   981,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   988,     0,     0,
       0,     0,   989,   979,     0,     0,     0,     0,     0,   990,
       0,   137,     0,     0,     0,     0,     0,   765,   763,     0,
       0,     0,   980,     0,     0,     0,     0,     0,     0,     0,
     982,   983,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1030,     0,   762,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   764,     0,     0,     0,     0,     0,  1331,
     968,   969,   970,   987,     0,  -357,     0,   981,  -357,   971,
       0,  -357,  -357,  -357,  -357,  -357,  -357,  -357,  -357,  -357,
       0,     0,     0,   988,     0,     0,     0,     0,   989,     0,
       0,     0,     0,     0,     0,   990,     0,   137,  -357,     0,
    -357,     0,     0,   765,     0,     0,   763,  -357,     0,  -357,
    -357,  -357,  -357,  -357,  -357,  -357,     0,     0,   982,   983,
       0,     0,     0,     0,  1477,     0,   975,   976,   977,     0,
       0,     0,   978,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   764,     0,  -357,     0,     0,     0,     0,     0,     0,
       0,   987,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   979,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   988,     0,     0,     0,     0,   989,     0,     0,     0,
       0,     0,     0,   990,  -357,   137,     0,     0,     0,     0,
       0,   765,     0,     0,     0,     0,     0,     0,     0,   529,
       0,     0,  -357,  -357,  -357,  -357,  -357,     0,     0,  -357,
    -357,     0,     0,  -357,     0,     0,     0,     0,     0,  -357,
       0,  -357,     0,     0,     0,     0,     0,  -357,     0,     0,
       0,     0,     0,     0,  -357,   981,     0,     0,     0,     0,
       0,     0,  -357,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -357,     0,     0,  -357,     0,
       0,     0,     0,     0,  -357,     0,  -357,     0,     0,     0,
       0,     0,     0,     0,     0,  -357,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   982,   983,  -357,     0,
       0,     0,     0,     0,     0,     0,     0,     0, -1853,     0,
    -357,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -357,   987,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   -1135,  -357,  -357,     0,     0,     0,     0,     0,     0,   988,
    -357,     0,     0,  -357,   989,     0,     0,     0, -1135,     0,
       0,   990,   243,   137,   528,     0,  -357,     0,  -357,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -357,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -357,     0,     0,     0,     0,  -357,
       0,  -357,  -357,  -357,  -357,  -357,  -357,  -357,  -357,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -357,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -357,     0,
    -357,  -357,  -357,     0,     0,     0,     0,  -357,     0,  -357,
    -357,  -357,  -357,  -357,  -357,  -357,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -357,     0,     0,     0,     0,  -357,     0,     0,     0,     0,
    -357,     0,     0,  -357,     0,     0,     0,     0,     0,     0,
       0,     0,  -357,     0,     0,     0,     0,  -357,     0,     0,
       0,  -357,  -357,  -357,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -357,     0,     0,     0,     0,
       0,  -357,  -357,     0,   966,     0,     0,     0,   530,     0,
       0,     0,     0,     0,     0,  -357,     0,     0,     0,   529,
       0,   967,  -357,  -357,  -357,  -357,  -357,     0,     0,  -357,
    -357,     0,     0,     0,     0,   619,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -357,     0,     0,
     620,     0,     0,   621,   622,   623,   624,   625,   626,   627,
       0,     0,  -357,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -357,     0,     0,  -357,     0,
       0,     0,     0,     0,  -357,     0,     0,     0,   628,     0,
     629,   630,   631,   632,   633,   634,   635,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   968,   969,   970,     0,     0,     0,     0,
    -357,     0,   971,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   757,   636,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -357,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -357,     0,     0,     0,   972,     0,     0,     0,
    -357,     0,   973,  -357,   974,     0,     0,   760,     0,   975,
     976,   977,     0,     0,     0,   978,  -357,   761,     0,     0,
       0,     0,     0,   637,   638,   639,   640,   641,  -357,     0,
     642,   643,     0,     0,     0,     0,  -357,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   979,     0,     0,     0,     0,     0,
       0,     0,     0,   644,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   980,     0,     0,    94,     0,  -357,   645,
    -357,  -357,  -357,     0,     0, -1829,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   762,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -357,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   646,     0,     0,     0,  -357,     0,     0,   981,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -357,     0,     0,     0,     0,     0,     0,   647,
       0,  -357,  -357,  -357,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   648,     0,  -357,     0,   763,     0,     0,
       0,   649,  -357,     0,   650,     0,     0,     0,   530,   982,
     983,     0,     0,  1702,     0,     0,  1703,   651,     0,  1704,
     621,   622,   623,   624,   625,   626,  1705,  1706,     0,   652,
    1408,     0,     0,     0,     0,     0,     0,   653,     0,     0,
     984,     0,   764,     0,   985,   986,  1707,     0,  1708,     0,
       0,     0,   987,     0,     0,   628,     0,   629,   630,   631,
     632,   633,   634,   635,     0,     0,     0,     0,     0,     0,
       0,     0,   988,     0,     0,     0,     0,   989,     0,   654,
       0,   655,   656,   657,   990,     0,   137,     0,     0,     0,
       0,     0,   765,     0,     0,     0,     0,     0,     0,     0,
       0,   636,     0,     0,     0,     0,     0,     0,   658,     0,
       0,     0,   966,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -354,     0,     0,   967,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1709, -1829,     0,     0,     0,     0,     0,     0,
       0,     0,   659,   660,   661,     0,     0,     0,     0,     0,
     637,   638,   639,   640,   641,     0,   662,   642,   643,     0,
       0,  1710,     0,   663,     0,     0,     0,  1711,     0,  1712,
       0,     0,     0,     0,     0, -1782,     0,     0,     0,     0,
       0,     0,  1713,     0,     0,     0,     0,     0,     0,     0,
     644,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    94,     0,     0,   645,     0,     0,     0,
       0,   968,   969,   970,  1714,     0,     0,     0,     0,     0,
     971,     0,   966,  1715,     0,     0,     0,     0,     0,     0,
       0,   757,     0,     0,     0,     0,  1716,     0,     0,   967,
       0,     0,     0,     0,     0,     0,     0,     0,   646,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   972,     0,     0,     0,     0,     0,
     973,     0,   974,     0,     0,   760,  1717,   975,   976,   977,
       0,     0,     0,   978,     0,   761,     0,     0,     0,  1718,
     648,     0,     0,     0,     0,     0,     0,     0,   649,     0,
       0,   650,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   651,     0,  1719,     0,     0,     0,
       0,     0,   979,     0,     0,     0,     0,     0,     0,     0,
       0,   968,   969,   970,     0,     0,     0,     0,     0,     0,
     971,   980,  1720,     0,   966,     0,     0,     0,     0,  1721,
       0,   757,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   967,     0,     0,     0,   762,  1722,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   654,     0,   655,   656,
     657,     0,     0,     0,   972,     0,     0,     0,     0,     0,
     973,     0,   974,     0,     0,   760,   981,   975,   976,   977,
       0,     0,     0,   978,     0,   761,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1723,     0,
       0,     0,     0,  -609,     0,     0,     0,     0,  1724,     0,
       0,     0,     0,     0,     0,   763,     0,     0,     0,     0,
       0,     0,   979,   966,     0,  1725,     0,   982,   983,   659,
     660,   661,     0,   968,   969,   970,     0,     0,     0,     0,
     967,   980,   971,   662,     0,     0,     0,     0,  1427,  1726,
     663,     0,     0,   757,     0,     0,     0,     0,   984,     0,
     764,     0,   985,   986,     0,   762,     0,     0,     0,     0,
     987,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   972,     0,     0,     0,
     988,     0,   973,     0,   974,   989,   981,   760,     0,   975,
     976,   977,   990,     0,   137,   978,     0,   761,     0,     0,
     765,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   968,   969,   970,   763,     0,     0,     0,     0,
       0,   971,     0,     0,   979,   966,     0,   982,   983,     0,
       0,     0,   757,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   967,   980,     0,     0,     0,     0,  1967,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   984,     0,
     764,     0,   985,   986,     0,   972,     0,   762,     0,     0,
     987,   973,     0,   974,     0,     0,   760,     0,   975,   976,
     977,     0,     0,     0,   978,     0,   761,     0,     0,     0,
     988,     0,     0,     0,     0,   989,     0,     0,   981,     0,
       0,     0,   990,     0,   137,     0,     0,     0,     0,     0,
     765,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   979,   966,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   968,   969,   970,   763,     0,     0,
       0,   967,   980,   971,     0,     0,     0,     0,     0,   982,
     983,     0,     0,     0,   757,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   762,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     984,     0,   764,     0,   985,   986,     0,   972,     0,     0,
       0,     0,   987,   973,     0,   974,     0,   981,   760,     0,
     975,   976,   977,     0,     0,     0,   978,     0,   761,     0,
       0,     0,   988,     0,     0,     0,     0,   989,     0,     0,
       0,     0,     0,     0,   990,     0,   137,     0,     0,     0,
       0,     0,   765,   968,   969,   970,   763,     0,     0,     0,
       0,     0,   971,     0,     0,   979,     0,     0,   982,   983,
       0,     0,     0,   757,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   980,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   764,     0,   985,     0,     0,   972,     0,   762,     0,
       0,   987,   973,     0,   974,     0,     0,   760,     0,   975,
     976,   977,     0,     0,     0,   978,     0,   761,     0,     0,
       0,   988,     0,     0,     0,  2682,   989,     0,     0,   981,
       0,     0,     0,   990,     0,   137,     0,     0,     0,     0,
       0,   765,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   979,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   763,     0,
       0,     0,     0,   980,     0,     0,     0,     0,     0,     0,
     982,   983,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   762,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   764,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   987,     0,     0,     0,     0,   981,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   988,     0,     0,     0,     0,   989,     0,
       0,     0,     0,     0,     0,   990,     0,   137,     0,     0,
       0,     0,     0,   765,     0,     0,     0,   763,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   982,
     983,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   764,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   987,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   988,     0,     0,     0,     0,   989,     0,     0,
       0,     0,     0,     0,   990,     0,   137,     0,     0,     0,
       0,     0,   765
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-2394))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
     103,   393,   105,   395,   597,   116,   366,   790,   111,   663,
     962,   540,   687,   103,  1118,   105,   794,  1226,   849,  1145,
    1207,   111,   795,   721,   652,   358,   181,  1590,  1580,   785,
    1444,  1444,   135,   425,  1444,   158,  1444,  1485,  1444,  1444,
    2027,  1116,  1596,   435,   404,   135,   600,  1110,  1466,  1258,
    1131,    56,    57,    58,   209,  1118,  1119,  1121,  1993,    64,
    1367,  1112,  1829,   700,  1145,  1128,  1525,     9,  1534,    53,
     794,     9,  1135,  1136,   749,     9,    60,  1377,  1356,     0,
      58,   184,  1265,  1978,     9,     1,   364,    17,  1912,    17,
      56,  1154,  1155,  1251,    99,   100,   852,   102,    22,     9,
       0,  1519,   107,   108,    21,     1,    87,     1,  1184,    31,
     108,   116,     1,  1937,    49,     1,  1376,  1123,   115,   175,
      49,   125,  1198,   111,   799,  1131,    97,    32,   133,   124,
     758,   759,    58,    88,  2099,    62,  1319,  1689,    30,  1145,
     251,    31,    27,   153,   176,    58,   225,   166,    58,  1253,
     124,  1458,   241,    88,   277,   160,   244,   213,  1936,     6,
     308,    93,  2088,    90,    91,   256,   142,    48,    62,  1587,
    1796,    32,  2159,    65,   203,    67,  1454,   161,   328,   244,
      64,   809,   200,   177,   295,   177,   191,   973,   974,  1372,
    1241,    49,   160,    49,   980,   271,    90,    91,   203,   242,
    1761,  1508,   162,   840,   234,  1529,   111,   985,   357,    21,
     173,   330,  1838,   158,   369,   232,   308,   218,   139,  2425,
      27,  2060,   143,   256,   354,    49,  1289,   410,  1006,   218,
     406,   116,  1650,    71,   218,   219,    31,  2163,    58,   139,
     125,   256,   292,   143,   249,  1569,   452,  2640,   406,   256,
     414,   232,   257,   286,    16,  1118,   367,  1320,   172,   256,
     984,   985,   986,  1889,    39,   188,   126,   203,   178,     0,
    1594,    33,  1215,     6,   324,   452,  1219,    71,    57,   200,
      42,    60,  1006,  2676,  1365,    64,   231,   210,   272,   453,
     204,  1297,  1155,  2499,   477,  1573,   329,    92,   282,   505,
     200,   477,  1308,   199,  1856,   232,   356,   188,   232,   116,
     204,  2276,  2277,   314,   329,   130,  1379,   306,   256,   477,
    1946,    71,   410,   341,    97,    71,   418,   457,  1891,   289,
     340,   241,     9,  1111,   130,   342,  1011,   111,   232,   114,
     443,   384,   445,   446,   972,   410,   457,   292,  2172,   452,
     499,   256,  2278,    71,   504,   445,   446,   505,   363,  1365,
     252,  1661,   452,  1369,  1782,  2143,   469,   397,  1668,   472,
     473,   447,   475,   232,    58,   478,   479,  1655,   237,   469,
     469,   228,    73,    71,   256,   504,   391,  1111,   274,  1848,
       9,  1466,  1851,   203,   321,   256,  1862,   402,  1176,  1177,
    1178,   290,   357,  1466,   228,  1871,   411,   412,  2034,   414,
     415,  1189,  1190,   516,   505,   420,   504,   794,  1196,   498,
     341,   154,   357,   312,   309,     6,   516,   321,   357,   392,
     256,    50,   437,   365,   463,   452,   370,   540,   541,   331,
     353,   341,  1505,   462,  1519,  1169,  2411,  2342,   453,   505,
     540,   541,  1176,  1177,  1178,  1518,  1519,  2018,  1133,  1245,
    1524,   308,   237,  1017,  1018,  1189,  1190,  1191,  1192,  1193,
    1194,  1195,  1196,   505,   416,  1199,   452,  1801,   581,   212,
       6,   172,  1760,   594,  1808,   453,   170,   347,   483,   268,
     601,   581,  1265,  1556,     6,   505,   484,   600,   271,   357,
     504,   357,   388,  1584,   316,   437,   504,   505,   505,   483,
     515,   505,  1587,   505,    38,   443,  1567,   401,   376,   500,
     376,   447,    46,   256,  1587,   452,   804,   463,   506,   534,
    1790,   452,   498,   266,   505,  1859,   647,   454,   271,   223,
    1840,   463,   402,   124,   499,     6,     9,  1598,   465,   554,
     653,   556,   452,  1711,   559,   560,   452,   562,   452,   469,
     398,   340,   335,   497,   499,  1628,   452,   505,  1777,   511,
     499,  1208,   502,   463,  2128,  1650,  1639,     6,  1584,  1642,
     505,   505,  2477,   160,   505,   466,   591,  1650,  2214,   505,
    1914,   596,   576,   212,   452,   972,   452,  1780,   603,  1372,
    1228,  2425,  1678,  1881,   398,   505,   421,   984,   985,   986,
     287,   449,   504,   346,   461,  2074,   505,   396,  1624,   504,
    2515,  2516,   401,   504,   608,   244,   245,   402,  2254,  1006,
    2256,   212,  2399,   505,   160,  2474,  2475,   256,   448,   459,
    1918,   499,   454,   499,   464,  2206,   505,   266,   398,  2067,
     241,  2069,   398,   465,    33,   449,   452,   662,  2645,   770,
      22,  2287,  2557,   354,   775,   459,  2561,  2562,   442,   256,
     464,   330,   349,   447,    65,   256,    67,   780,   781,   505,
     398,   792,   232,   416,   839,   266,   212,   211,   256,  2013,
    2108,  2317,  2318,   256,   797,  2590,   256,     9,   703,   449,
     212,   706,    65,   449,    67,  2029,   252,  1782,  2643,   505,
     398,   162,   256,   290,  1492,     6,   293,   126,   274,   243,
     421,   262,  1495,  1115,  2048,  1117,   505,   346,   461,   256,
     256,   449,   505,  2628,  1111,    34,   229,  1788,   216,   256,
     266,   265,  2005,  2161,   256,   452,   287,   176,  1140,   212,
    1142,   212,   203,  2077,   266,  1147,  1133,  2081,   236,   203,
     271,   449,  1139,   262,   252,   346,   457,   451,  1492,  1161,
    2070,  2537,   505,   143,   189,   459,   460,   406,   511,  1785,
     464,    26,   229,   212,   262,   262,   394,   154,   287,   168,
     178,  2458,  1169,   256,   318,   256,  2120,   416,   785,  1176,
    1177,  1178,  1179,   266,  1132,   266,  1887,  1184,  2274,   287,
     195,  2089,  1189,  1190,  1191,  1192,  1193,  1194,  1195,  1196,
     346,  1198,  1199,  1512,  1513,  1514,  1515,   256,   123,  1134,
    1158,  1459,   388,  2599,   346,   416,   406,   266,   289,   244,
     257,  1146,   461,   389,   452,   504,   505,   256,   477,   237,
     961,  1228,   240,  2416,   378,  2481,  2482,  1581,  1486,  1632,
     561,   252,  1925,   130,  1256,   852,   447,  2174,   212,  1973,
     232,   256,    11,   423,  1251,  1267,   453,   370,   469,   256,
     461,  1887,  1888,   346,   171,   346,  1440,  2211,   267,  2167,
     416,     9,   511,  2217,    12,    85,   301,    15,    16,   411,
     212,   389,   483,  2227,   416,  1683,    12,   477,   385,    15,
      16,   422,   256,   424,  1017,  1018,  1027,   346,   505,   406,
      59,   212,   266,   370,   505,   376,    28,   453,  2491,   341,
     511,  1606,   376,  2059,  2060,   461,  1269,   505,   225,  2202,
     331,    57,   505,   511,   256,   505,   233,   362,    64,   461,
     474,   196,  2619,   416,   266,   416,   502,  1334,    97,  1683,
      99,   505,   101,   504,   231,   256,   207,   208,   331,   346,
     109,   341,   308,  2297,   188,   266,  2300,  2301,   505,   505,
      30,  1309,   281,   282,   283,   511,  2540,   416,   505,  2313,
     477,   274,  2067,   505,  2069,   139,   210,   546,   461,   511,
     461,   394,   346,  2327,  2328,   246,   247,  1780,   203,  1112,
     387,  2075,  1687,  1116,   447,    65,  1349,    67,   435,  2228,
    1123,  1124,   262,   501,   291,   127,   165,   455,  1131,    30,
     317,  1134,   461,  2108,   346,   759,  1139,   586,  1141,   416,
    1143,  1144,  1145,  1146,   505,   344,     0,   287,   511,  2465,
     511,   220,  2604,   504,  2117,   346,     1,  1385,   256,  2507,
    1163,   196,  2616,  2127,    57,   498,   615,  2391,   351,   270,
     353,    64,   416,   271,   410,   504,   505,   505,   495,     1,
     454,   452,   511,   252,     9,   809,  2161,   226,   505,    11,
     126,   465,  2155,  2156,  2198,    40,    41,    42,    43,    44,
    2106,  1694,  1257,   306,   416,  1497,  2522,   108,  2522,  2522,
     212,  2435,  2522,    57,  2522,  1492,  2522,  2522,   257,   351,
      64,   256,   317,   321,  1351,   416,  1815,   128,   329,   708,
    2682,    76,    77,    58,   511,   338,   172,    59,  1241,   379,
    1829,   477,     9,   285,  2696,  2708,  1774,   758,   759,   461,
     248,   249,   268,  1308,   256,   358,   447,  1260,   199,   277,
     278,   262,   301,   411,   266,   304,   167,   511,   467,   468,
     461,   277,   278,   472,  1401,    97,   755,    99,   280,   101,
     412,   413,   351,   301,   302,   139,   287,   109,   189,   143,
     359,    58,   334,   505,  1297,   301,   302,  2260,   809,   511,
     454,   256,   252,   204,  1581,  1308,   212,    26,   454,   232,
     256,   459,    47,   452,   505,   456,   464,   458,   505,   465,
     511,  1376,   172,  1979,   340,   216,   217,   262,    63,  1606,
     369,   262,   287,   256,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   165,   346,   236,   200,   178,   502,  1352,
     256,   390,   287,   178,   204,   834,   287,   188,   459,  2032,
     266,  1169,  1365,   464,   504,   505,  1369,   204,   103,  1989,
     162,   262,  1605,   452,   166,   268,   415,  1143,   417,   210,
     396,   331,   323,   324,   307,   401,   309,   212,  2008,  2009,
       8,  1199,  2012,  1921,   433,   232,   287,  1163,     8,   340,
     171,  1678,  1405,   118,   119,   120,  1683,   505,   505,   240,
     188,   452,  1672,   511,   416,  1405,   241,   419,   420,    37,
    2507,   356,   758,   759,   268,  1480,  2401,    37,  2403,  2617,
    2618,   256,   210,  2053,  1711,   257,   452,  1440,  2058,   340,
     346,   266,   307,    55,   309,   212,   482,   340,  2474,  2475,
     446,  2477,  2050,   394,   225,   107,  2187,     8,  2646,  2422,
    2035,  2570,   233,  1466,   500,   117,   505,   463,     6,    13,
      14,     9,  2624,   809,   241,  2153,   459,  2665,    90,   301,
     351,   464,   353,   337,  1977,   330,    37,   341,    32,   256,
    2642,   449,   449,    97,    98,   107,   340,   232,   343,   266,
    2028,   459,   459,   396,   239,   117,   464,   464,   401,   511,
     416,    49,   212,  2088,   423,   250,  1519,   449,   232,  2707,
    2483,   346,  2526,   238,  2487,  2488,   451,   459,   351,  2153,
     353,     2,   464,  1438,  1589,   460,     7,   252,  1443,  1444,
     475,  1446,   212,    24,    25,    83,   317,   351,   555,   353,
      88,   394,   396,   560,  2174,   461,   256,   401,  1613,   452,
    1737,    58,   100,   450,  1567,   157,   266,   159,   390,   504,
    1747,  1748,   459,   473,  1751,   475,   405,   464,   478,   346,
     157,  1584,   159,  1638,  1587,    66,   256,    68,  2163,    70,
     252,   416,   254,  1413,   405,  1598,   266,  1417,   252,   505,
     254,  1893,  1625,   452,  1424,   511,   452,   252,   452,   254,
     501,   433,   505,   504,   299,   300,   351,   352,  1191,  1192,
     335,  1624,   452,   104,   105,   106,  1193,  1194,  1195,   450,
     452,   366,   347,   368,   452,    66,   461,    68,   459,   218,
    2323,  1652,  2325,   464,   469,   174,   346,  1650,    69,   416,
     486,   487,   488,   489,   192,   193,   194,   984,   452,   986,
     505,  1177,  1178,   201,   452,   505,   486,   487,   488,   489,
     452,  1674,   505,   154,   212,   156,   346,   452,   505,   452,
     505,   340,   163,   505,  1674,   166,   511,   256,   256,  1675,
    1676,  1677,   199,   469,   461,  1681,   505,   443,  1684,  1685,
     401,   400,   469,  2278,   410,    64,  1717,   245,    60,   486,
     487,   488,   489,   251,   256,   253,   416,   452,   256,   232,
     258,   259,   260,   438,   452,   328,   264,  1738,   266,   401,
     256,  1636,  2352,   271,   229,   505,  2356,    45,   505,    26,
      54,    55,   452,   452,   511,   108,   416,   452,   312,  2178,
     256,   256,   272,     9,    23,   103,   452,    65,    66,    67,
      68,   461,  2445,  2615,   499,   303,   623,   624,   625,   626,
     308,   252,   455,   254,   438,  1778,    90,   189,   123,  1782,
     455,    87,  1785,    17,   322,  1788,   452,  1692,  1693,   505,
     271,   461,   394,   107,   272,   351,   401,    57,  1703,    35,
     504,   402,    38,   117,   423,  1710,   262,    39,   346,    45,
      46,   511,   452,   237,   402,   505,   331,  2109,   507,   357,
     419,   505,   316,   310,   394,   261,   452,    83,     7,   452,
     255,   394,   452,   504,  1739,  1838,   505,   452,  1893,   377,
     394,   511,  2102,   366,   100,   452,   452,    86,    86,   125,
    2470,  2471,   432,   394,   452,   389,    92,    22,   306,   502,
     309,   452,   394,   204,   505,   500,   505,   452,   502,   505,
     384,   232,   410,   447,   254,   218,  2153,   505,   416,   123,
     511,    53,   447,   443,  1887,  1888,  1889,   463,    26,  1944,
     428,   429,  1797,   306,   410,   448,   400,   348,  1953,  1954,
     196,   209,   463,  1926,  1927,  1928,  1929,  1930,  1931,  1932,
    1933,  1816,   505,   446,   256,   443,   452,  1822,   505,   376,
     399,   452,   336,   461,   505,   161,   115,   235,   463,   170,
     166,   188,   505,   471,   452,   452,   192,   193,   194,   477,
     256,   463,   463,  1946,   252,   201,   254,   447,   223,   309,
     452,   463,   463,   491,   190,   463,   212,   505,   496,   505,
     463,   499,   794,   444,   463,   503,   505,   505,   403,  1972,
     463,   454,    30,   511,   131,   211,   196,   285,   132,   447,
     133,  1984,  1972,   134,   386,   135,  1989,   136,   498,   137,
     102,  2002,   138,  2617,  2618,   442,   463,   305,   141,    49,
     256,   447,   258,   259,   260,  2008,  2009,   321,   264,  2012,
     266,   325,   326,   494,   404,     6,   446,   443,     9,   327,
     440,   144,  2646,   446,   505,   333,   196,   145,   147,   265,
     146,  2034,    31,   148,   500,    49,   271,   150,   149,   113,
     196,  2665,   151,   220,   152,   449,   449,   303,  2059,  2060,
    2053,   449,   366,  1958,  2109,  2058,  2059,  2060,  2612,   115,
     449,   449,   447,  2118,  2067,   449,  2069,   312,   382,   383,
     452,  1976,  2565,   410,   110,   197,   447,  2631,   203,   223,
     339,   376,   318,  2707,   272,   256,   231,  1992,   294,  1994,
     346,   298,    83,  1998,   485,   166,   502,   405,   129,   176,
     365,  2006,  2595,  2106,   169,  2108,   414,   502,   447,   100,
     130,   228,   447,    49,   196,   204,   177,   299,   228,    57,
     204,   377,   113,   431,   505,   452,   252,   166,   447,   423,
     272,   510,   509,   237,   447,   299,   276,   380,   362,    30,
      35,   203,   378,    38,   452,    17,   203,   129,   295,   365,
      45,    46,   984,   985,   986,   391,   140,   443,  2161,   447,
     416,    49,     4,   203,   142,   473,   196,     8,   130,   502,
     502,  2174,   428,   429,  1006,  2178,   423,    19,   203,   452,
     447,     9,     7,   505,   492,   203,   256,    29,  2178,   504,
     297,   499,   500,   294,   504,   499,  2101,    92,  2490,   499,
      49,   192,   193,   194,   189,   461,   291,   262,   314,   462,
     201,   313,   114,    47,   437,   471,   330,   411,   294,   103,
     203,   212,    64,   203,   361,   361,    49,   262,   380,   237,
     296,   493,    96,   292,     8,   491,    57,   228,   474,    49,
     496,   111,   457,   337,   452,   262,  2538,   503,   110,   505,
     262,  2254,   262,  2256,   245,   511,   337,   482,   210,   452,
     251,   340,   253,   108,   221,   256,   161,   258,   259,   260,
     209,   502,   367,   264,   120,   266,   196,  1109,    49,  1111,
     271,  2284,  1114,   418,  2287,   337,  1118,   313,   321,     7,
     306,   425,    46,    92,  2284,   190,    26,   127,   201,   206,
     148,  1133,    75,   221,   238,   519,   150,  1139,   177,   469,
     410,  1892,   303,   286,  1026,  2318,   211,   781,  1444,   497,
     425,   748,  2680,  1403,  1885,  1666,  2176,   799,  1160,  2659,
    1162,   322,  2692,  2628,  2199,  2338,  2072,  1169,  2199,  1224,
    2617,  2618,  1035,   852,  1176,  1177,  1178,  1179,  2338,  2352,
     788,  1749,  1184,  2356,  1750,   346,  1832,  1189,  1190,  1191,
    1192,  1193,  1194,  1195,  1196,  2371,  1198,  1199,  2384,  2646,
     265,  1784,  1241,  1478,  1480,  1505,  1527,  2070,   220,  2252,
    1524,  1293,  1851,  2074,  2270,  1570,   377,  1577,  2665,  2097,
    1879,  1329,  1588,  2109,  1334,  1227,  1905,  2116,  2401,  1954,
    2403,  1618,  2130,  1934,  1363,  1365,  1146,   794,  2156,  1379,
     252,  2316,  1953,  2321,  1953,  2676,  2419,  1665,  2425,  1251,
     262,  1253,  2331,   318,  2326,   416,  2149,  1556,  2149,  1474,
    2707,  2723,  2149,  1352,   299,  2149,   694,   428,   429,   152,
     242,  1921,   989,   270,   753,  2548,   417,    39,    40,    41,
      42,    43,    44,  2413,  2594,  2360,   509,   215,  1941,   449,
    2365,  2086,  1884,  2474,  2475,   558,   712,  2470,  2471,  1580,
     461,  2474,  2475,   315,  2477,  2619,    -1,    -1,   320,    -1,
     471,    -1,    74,   378,    76,    77,    78,    79,    80,    81,
      82,    -1,    -1,    -1,    -1,    -1,   391,    -1,    -1,    -1,
     491,    -1,  1334,    -1,    -1,   496,    -1,    -1,    -1,   351,
      -1,    -1,   503,    -1,   505,    -1,    -1,   359,    -1,  2424,
     511,    -1,    -1,    -1,  1356,    -1,    -1,    -1,   120,    -1,
     372,    -1,    -1,    -1,  2537,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1382,  2456,  2457,    -1,    -1,    -1,  2567,    -1,    -1,   401,
      -1,    -1,   404,    -1,    -1,    -1,    -1,    -1,  2473,    -1,
     412,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   474,
      -1,   423,    -1,    -1,  2489,   972,    -1,   179,   180,   181,
     182,   183,    -1,    -1,   186,   187,  2599,   984,   985,   986,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2514,
     452,    -1,  2623,   455,  2519,  2520,  2627,    -1,    -1,  1006,
      -1,    -1,  1454,    -1,    -1,    -1,    -1,   219,    -1,    -1,
      -1,     1,    -1,     3,  2539,     5,    -1,  2640,    -1,    -1,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1492,    -1,    -1,    -1,  2569,    -1,    -1,  2572,  2573,    -1,
      -1,    -1,    -1,  2676,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    52,    -1,    -1,   277,    -1,    -1,    -1,    -1,
      -1,    61,    -1,    -1,    -1,    -1,    -1,  2700,    -1,    -1,
    2711,    -1,    72,    -1,    -1,    75,    -1,    -1,    -1,  2614,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,
      83,    -1,    -1,    -1,  1111,    -1,    -1,   319,    -1,  1116,
      -1,    -1,    -1,    -1,    -1,    -1,  1123,   100,   330,    -1,
      -1,  1573,   112,    -1,  1131,    -1,    -1,    -1,    -1,  1581,
     120,   343,   122,    -1,    -1,    -1,    -1,    -1,  1145,    -1,
      -1,    -1,    -1,    -1,    -1,  1597,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1606,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1169,   153,    -1,  1617,    -1,    -1,    -1,  1176,
    1177,  1178,  1179,    -1,   164,    -1,    -1,  1184,    -1,   169,
      -1,    -1,  1189,  1190,  1191,  1192,  1193,  1194,  1195,  1196,
      -1,  1198,  1199,  1645,    -1,   407,   408,   409,    -1,    -1,
      -1,    -1,    -1,  1655,    -1,   195,    -1,    -1,    -1,   192,
     193,   194,   202,    -1,    -1,   205,   206,    -1,   201,    -1,
      -1,  1228,    -1,    -1,    -1,   215,  1678,    -1,    -1,    -1,
      -1,  1683,   222,    -1,   224,    -1,    -1,   227,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1260,    -1,    -1,    -1,    -1,    -1,  1711,
      -1,    -1,    -1,    -1,    -1,    -1,   478,   479,   480,    -1,
      -1,  1723,    -1,   256,  1726,   258,   259,   260,    -1,   269,
      -1,   264,    -1,   273,    -1,   275,    -1,    -1,    -1,    -1,
    1297,    -1,    -1,    -1,    -1,   285,    -1,    -1,    -1,    -1,
      -1,  1308,    -1,    -1,    -1,    -1,    -1,    -1,  1760,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     303,   311,    -1,    -1,  1776,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   324,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     6,    -1,  1356,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1365,   349,
     350,    -1,  1369,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     360,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   374,   375,    -1,    -1,    -1,    -1,
      -1,   381,    -1,    -1,   377,   385,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   393,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   403,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   412,    -1,    83,    -1,    -1,    -1,    -1,  1881,
    1882,   421,    -1,    -1,    -1,    -1,   426,   427,    -1,    -1,
     430,   100,   432,    -1,    -1,   428,   429,  1454,    -1,   439,
      32,    -1,    -1,    35,    -1,    -1,    38,    -1,  1910,  1466,
      -1,    -1,   452,    -1,    46,    -1,  1918,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     470,    -1,    -1,    -1,    -1,  1492,   476,    -1,   471,    -1,
      -1,   481,    -1,  1945,   153,    -1,    -1,    -1,    -1,    -1,
    1952,  1953,    -1,    -1,    -1,    -1,    -1,    -1,   491,    -1,
      92,    -1,  1519,   496,    -1,    -1,    -1,    -1,   508,    -1,
     503,  1973,   505,    -1,    -1,    -1,    -1,    -1,    -1,   111,
      -1,  1983,    -1,   192,   193,   194,    -1,    -1,    -1,    -1,
      -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   212,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1573,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1581,    -1,    -1,  1584,    -1,    -1,
    1587,    -1,    -1,  2035,    -1,    -1,   245,    -1,    -1,    -1,
      -1,    -1,   251,    -1,   253,    -1,    -1,   256,    -1,   258,
     259,   260,    -1,    -1,    -1,   264,    -1,   266,   190,    -1,
      -1,    -1,   271,    -1,    -1,    -1,   198,  1624,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2079,    -1,   211,
      -1,    -1,    -1,    -1,    -1,    -1,  2088,  2089,    -1,    -1,
      -1,    -1,    -1,  1650,   303,  2097,    -1,    -1,  1655,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   243,    -1,   322,  2116,    -1,    -1,    -1,    -1,    -1,
      -1,  1678,    -1,    -1,    -1,    -1,  1683,    -1,    -1,    -1,
      -1,   263,    -1,   265,    -1,    -1,    -1,   346,    -1,    -1,
      -1,    -1,    -1,  2145,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2153,    -1,    -1,    -1,   287,   288,    -1,    -1,    -1,
      -1,  2163,    -1,    -1,    -1,  2167,    -1,    -1,   377,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   318,  2189,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2198,    -1,    -1,    -1,
      -1,    -1,    -1,  1760,    -1,    -1,    -1,   416,    -1,    -1,
      -1,    -1,    -1,   345,    -1,    -1,    -1,    -1,    -1,   428,
     429,  1778,    -1,    -1,    -1,  1782,    -1,    -1,  1785,    -1,
      -1,  2233,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   371,
      -1,    -1,    -1,    -1,    -1,   454,   378,    -1,    -1,    -1,
      -1,    -1,   461,    -1,    -1,    -1,   465,    -1,    -1,   391,
      -1,    -1,   471,   395,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,    -1,     5,    -1,    -1,  2278,    -1,    10,    -1,
      -1,  1838,   491,    -1,    -1,    -1,    18,   496,    -1,    -1,
      -1,    -1,    -1,    -1,   503,    -1,   505,    -1,    -1,    -1,
      -1,    -1,   511,    -1,   436,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   445,    -1,    -1,    -1,    -1,    -1,    51,
      52,    -1,    -1,    -1,  1881,  1882,    -1,    -1,    -1,    61,
    1887,  1888,  1889,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    -1,   474,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   484,    -1,    -1,    -1,    -1,    89,   490,    -1,
      -1,  1918,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,  1946,
     122,    -1,  2394,    -1,    -1,    -1,    -1,   129,    -1,   131,
     132,   133,   134,   135,   136,   137,   138,    -1,   140,   141,
     142,    -1,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   164,    -1,    -1,  2437,    -1,   169,    -1,    -1,
      -1,    -1,  2444,    -1,    -1,  2447,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   195,    -1,    -1,    -1,    -1,    -1,    -1,
     202,    -1,    -1,   205,   206,    -1,    -1,  2034,    -1,    -1,
      -1,    -1,    -1,   215,    -1,    -1,    -1,    -1,    -1,    -1,
     222,    -1,   224,    -1,  2496,   227,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2510,    -1,
    2067,    -1,  2069,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2526,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2089,    -1,    -1,    -1,    -1,   269,    -1,    -1,
    2097,   273,    -1,   275,    -1,    -1,    -1,    -1,    -1,  2106,
      -1,  2108,    -1,   285,    -1,    -1,    -1,    -1,    -1,   291,
     292,    -1,   294,   295,   296,   297,    -1,    -1,    -1,    -1,
      -1,    -1,  2574,    -1,    -1,    -1,    -1,    -1,    -1,   311,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   324,    -1,    -1,    -1,  2153,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2161,    -1,    -1,    -1,    -1,    -1,
    2167,    -1,    -1,    -1,    -1,  2617,  2618,   349,   350,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   360,    -1,
      -1,    -1,  2634,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   374,   375,  2646,    -1,    -1,    -1,    -1,   381,
      -1,    -1,    -1,   385,    -1,    -1,  2658,  2659,    -1,    -1,
      -1,   393,    -1,  2665,    -1,    -1,     1,    -1,     3,    -1,
       5,   403,    -1,    -1,    -1,    10,    -1,    -1,    -1,    -1,
     412,    -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,   421,
      -1,    -1,    -1,    -1,   426,   427,    -1,  2254,   430,  2256,
     432,  2703,    -1,    -1,    -1,  2707,    -1,   439,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,
     452,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,
    2287,    -1,    -1,    -1,    -1,    -1,    -1,    72,   470,    -1,
      75,    -1,    -1,    -1,   476,    -1,    -1,    -1,    -1,   481,
      -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,
      -1,  2318,    -1,    -1,     1,    -1,     3,    -1,     5,    -1,
     502,    -1,    -1,    10,    -1,    -1,   508,   112,    -1,    -1,
      -1,    18,    -1,    -1,    -1,   120,    83,   122,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    52,    -1,    -1,   153,    -1,
      -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,   164,
      -1,    -1,    -1,    -1,   169,    72,    -1,    -1,    75,    -1,
      -1,    -1,    -1,    -1,  2401,    -1,  2403,    -1,    -1,    -1,
      -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     195,    -1,    -1,    -1,    -1,    -1,    -1,   202,    -1,    -1,
     205,   206,    -1,    -1,    -1,   112,    -1,    -1,    -1,    -1,
     215,    -1,    -1,   120,    -1,   122,    -1,   222,    -1,   224,
      -1,    -1,   227,    -1,   191,   192,   193,   194,    -1,    -1,
      -1,    -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   164,    -1,    -1,
      -1,    -1,   169,    -1,   269,    -1,    -1,    -1,   273,    -1,
     275,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     285,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   195,   256,
      -1,   258,   259,   260,    -1,   202,    -1,   264,   205,   206,
      -1,    -1,    -1,    -1,    -1,    -1,   311,    -1,   215,    -1,
      -1,    -1,    -1,    -1,    -1,   222,    -1,   224,    -1,   324,
     227,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   303,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   349,   350,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   360,    -1,    -1,    -1,    -1,
      -1,    -1,   269,    -1,    -1,    -1,   273,    -1,   275,   374,
     375,    -1,    -1,    -1,    -1,    -1,   381,    -1,   285,    -1,
     385,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   393,    -1,
    2617,  2618,    -1,    -1,    -1,    -1,    -1,    -1,   403,    -1,
      -1,    -1,    -1,    -1,   311,    -1,    -1,   412,    -1,    -1,
     377,    -1,    -1,    -1,    -1,    -1,   421,   324,    -1,  2646,
      -1,   426,   427,    -1,    -1,   430,    -1,   432,    -1,    -1,
      -1,    -1,    -1,    -1,   439,    -1,    -1,    -1,  2665,    -1,
      -1,    -1,   349,   350,    -1,    -1,    -1,   452,    -1,     3,
      -1,     5,    -1,   360,    -1,    -1,    10,    -1,    -1,    -1,
      -1,   428,   429,    -1,    18,   470,    -1,   374,   375,    -1,
      -1,   476,    -1,   440,   381,    -1,   481,    -1,   385,    -1,
    2707,    -1,    -1,    -1,    -1,    -1,   393,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   403,    51,    52,    -1,
      -1,    -1,    -1,   508,   471,   412,    -1,    61,    -1,    -1,
      -1,    -1,    -1,    -1,   421,   482,    -1,    -1,    72,   426,
     427,    75,    -1,   430,   491,   432,    -1,    -1,    -1,   496,
      -1,    -1,   439,   500,    -1,    89,   503,   504,   505,     6,
      -1,    -1,     9,    -1,    -1,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,   112,    -1,
      -1,    -1,    -1,   470,    -1,    -1,   120,    -1,   122,   476,
      -1,    -1,    -1,    -1,   481,   129,    -1,   131,   132,   133,
     134,   135,   136,   137,   138,    -1,   140,   141,   142,    -1,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
      -1,   508,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     164,    -1,    -1,    -1,    -1,   169,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   195,    -1,    -1,    -1,    -1,    -1,    -1,   202,    -1,
      -1,   205,   206,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   215,    -1,    -1,    -1,    -1,    -1,    -1,   222,    -1,
     224,    -1,    -1,   227,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   160,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   170,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   269,    -1,    -1,    -1,   273,
      -1,   275,    -1,    -1,    -1,   192,   193,   194,    -1,    -1,
      -1,   285,    -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,
     207,   208,    -1,    -1,    -1,   212,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   311,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   232,    -1,    -1,    -1,    -1,
     324,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   245,   246,
     247,    -1,    -1,    -1,   251,    -1,   253,    -1,    -1,   256,
      -1,   258,   259,   260,    -1,   349,    -1,   264,    -1,   266,
      -1,    -1,    -1,    -1,   271,    -1,   360,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   284,    -1,    -1,
      -1,   375,    -1,   290,    -1,    -1,   293,   381,    -1,    -1,
      -1,   385,    -1,    -1,   301,    -1,   303,    -1,    -1,   393,
      -1,   308,    -1,    -1,    -1,    -1,   313,    -1,    -1,   403,
      -1,    -1,    -1,    -1,     6,   322,    -1,     9,   412,    -1,
      12,    13,    14,    -1,    -1,   332,    -1,   421,    20,    -1,
      -1,    -1,   426,   427,    -1,    -1,   430,    -1,   432,   346,
      -1,    -1,    -1,    -1,    -1,   439,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   452,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     377,    -1,    -1,    -1,    -1,    -1,   470,    -1,    -1,    -1,
      -1,    -1,   476,    -1,    -1,    -1,    -1,   481,    -1,    -1,
      -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     6,
      -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,   100,   416,
      -1,    -1,    -1,    -1,   508,    -1,    -1,    -1,    -1,    -1,
      -1,   428,   429,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     6,    -1,    -1,
       9,    -1,   449,    -1,   451,    -1,   453,    -1,    -1,   456,
      -1,   458,   459,   460,   461,    -1,   463,   464,    -1,    -1,
      -1,    -1,    -1,    -1,   471,    -1,    -1,    -1,   160,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,   170,    -1,
      -1,    -1,    -1,    -1,   491,    -1,    -1,    -1,    95,   496,
      -1,    -1,    -1,   100,    -1,    -1,   503,    -1,   505,    -1,
     192,   193,   194,    -1,   511,    -1,    -1,    -1,    -1,   201,
      -1,    -1,    -1,    -1,    83,   207,   208,    -1,    -1,    -1,
     212,    -1,    -1,    -1,    -1,    -1,    95,    -1,    -1,    -1,
      -1,   100,    -1,    -1,    -1,     6,    -1,    -1,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   245,   246,   247,    -1,    -1,    -1,   251,
      -1,   253,    -1,    -1,   256,    -1,   258,   259,   260,    -1,
      -1,    -1,   264,    -1,   266,    -1,    -1,    -1,    -1,   271,
      -1,    -1,    -1,    -1,    -1,   192,   193,   194,    -1,    -1,
      -1,    -1,   284,    -1,   201,    -1,    -1,    -1,   290,    -1,
      -1,   293,    -1,    -1,    -1,   212,    -1,    -1,    -1,   301,
      -1,   303,    83,    -1,    -1,    -1,   308,    -1,    -1,    -1,
      -1,   313,    -1,   192,   193,   194,    -1,    -1,    -1,   100,
     322,    -1,   201,    -1,    -1,    -1,    -1,    -1,   245,    -1,
     332,    -1,   113,   212,   251,    -1,   253,    -1,    -1,   256,
      -1,   258,   259,   260,   346,    -1,    -1,   264,    -1,   266,
      -1,    -1,    -1,    -1,   271,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   245,    -1,    -1,    -1,
      -1,    -1,   251,    -1,   253,   377,    -1,   256,    -1,   258,
     259,   260,    -1,    -1,    -1,   264,   303,   266,    -1,    -1,
      -1,    -1,   271,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   322,    -1,    -1,    -1,    -1,
      -1,   192,   193,   194,   416,    -1,     6,    -1,    -1,     9,
     201,    -1,    -1,    -1,   303,    -1,   428,   429,    -1,   346,
      -1,   212,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   322,    -1,    -1,    -1,   449,    -1,   451,
      -1,   453,    -1,    -1,   456,    -1,   458,   459,   460,   461,
     377,   463,   464,    -1,   245,    -1,    -1,   346,    -1,   471,
     251,    -1,   253,    -1,    -1,   256,    -1,   258,   259,   260,
      -1,    -1,    -1,   264,    -1,   266,    -1,    -1,    -1,   491,
     271,    -1,    -1,    83,   496,    -1,    -1,    -1,   377,   416,
      -1,   503,    -1,   505,    -1,    95,    -1,    -1,    -1,   511,
     100,   428,   429,     6,    -1,    -1,     9,    -1,    -1,    -1,
      -1,    -1,   303,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   416,    -1,    -1,
      -1,   322,    -1,    -1,   461,    -1,    -1,    -1,    -1,   428,
     429,    -1,    -1,    -1,   471,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   346,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   491,    -1,    -1,    -1,    -1,   496,
      -1,    -1,   461,    -1,    -1,    -1,   503,    -1,   505,    -1,
      83,    -1,   471,    -1,   511,    -1,   377,    -1,    -1,    -1,
      -1,    -1,   192,   193,   194,    -1,    -1,   100,    -1,    -1,
       6,   201,   491,     9,    -1,    -1,    -1,   496,    -1,    -1,
      -1,    -1,   212,    -1,   503,    -1,   505,    -1,    -1,    -1,
      -1,    -1,   511,    -1,    -1,   416,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   428,   429,    -1,
      -1,    -1,    -1,    -1,    -1,   245,    -1,    -1,    -1,    -1,
      -1,   251,    -1,   253,    -1,    -1,   256,    -1,   258,   259,
     260,    -1,    -1,    -1,   264,    -1,   266,    -1,    -1,    -1,
     461,   271,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,
     471,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,
     193,   194,    -1,    -1,   100,    -1,    -1,    -1,   201,    -1,
     491,    -1,    -1,   303,    -1,   496,    -1,    -1,    -1,   212,
      -1,    -1,   503,    -1,   505,    -1,    -1,    -1,    -1,    -1,
     511,    -1,   322,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   245,    -1,    -1,    -1,   346,    -1,   251,    -1,
     253,    -1,    -1,   256,    -1,   258,   259,   260,    -1,    -1,
     166,   264,    -1,   266,    -1,    -1,    -1,    -1,   271,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   377,    -1,     6,
      -1,    -1,     9,    -1,    -1,    -1,   192,   193,   194,    -1,
      -1,    -1,    -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,
     303,    -1,    -1,    -1,    -1,    -1,   212,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   416,    -1,    -1,   322,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   428,   429,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   245,
      -1,    -1,    -1,   346,    -1,   251,    -1,   253,    -1,    -1,
     256,    -1,   258,   259,   260,    -1,    83,    -1,   264,    -1,
     266,   461,    -1,    -1,    -1,   271,    -1,    -1,    -1,    -1,
      -1,   471,    -1,   100,   377,    -1,     6,    -1,    -1,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   491,    -1,    -1,    -1,    -1,   496,   303,    -1,    -1,
      -1,    -1,    -1,   503,    -1,   505,    -1,    -1,    -1,    -1,
      -1,   511,    -1,   416,    -1,    -1,   322,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   428,   429,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     346,    -1,    -1,    -1,   447,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,   461,    -1,
      -1,    -1,    -1,    -1,    -1,   192,   193,   194,   471,    -1,
     100,   377,    -1,     6,   201,    -1,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   212,    -1,    -1,   491,    -1,
      -1,    -1,    -1,   496,    -1,    -1,    -1,    -1,    -1,    -1,
     503,    -1,   505,    -1,    -1,    -1,    -1,    -1,   511,    -1,
     416,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   245,    -1,
      -1,    -1,   428,   429,   251,    -1,   253,    -1,    -1,   256,
      -1,   258,   259,   260,    -1,    -1,    -1,   264,    -1,   266,
      -1,    -1,    -1,    -1,   271,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    -1,    -1,    -1,   461,    -1,    -1,    -1,    -1,
      -1,    -1,   192,   193,   194,   471,   196,   100,    -1,    -1,
      -1,   201,    -1,    -1,    -1,    -1,   303,    -1,    -1,    -1,
      -1,    -1,   212,    -1,    -1,   491,    -1,    -1,    -1,    -1,
     496,    -1,    -1,    -1,    -1,   322,    -1,   503,    -1,   505,
      -1,    -1,    -1,    -1,    -1,   511,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   245,    -1,    -1,    -1,   346,
      -1,   251,    -1,   253,    -1,    -1,   256,    -1,   258,   259,
     260,    83,    -1,    -1,   264,    -1,   266,    -1,    -1,    -1,
      -1,   271,    -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,
     377,    -1,     6,    -1,    -1,     9,    -1,    -1,    -1,   192,
     193,   194,    -1,    -1,    -1,    -1,    -1,    -1,   201,    -1,
      -1,    -1,    -1,   303,    -1,    -1,    -1,    -1,    -1,   212,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   416,
      -1,    -1,   322,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   428,   429,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   245,    -1,    -1,    -1,   346,    -1,   251,    -1,
     253,    -1,    -1,   256,    -1,   258,   259,   260,    -1,    83,
      -1,   264,    -1,   266,   461,    -1,    -1,    -1,   271,    -1,
     192,   193,   194,    -1,   471,    -1,   100,   377,     6,   201,
      -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,   485,    -1,
     212,    -1,    -1,    -1,   491,    -1,    -1,    -1,    -1,   496,
     303,    -1,    -1,    -1,    -1,    -1,   503,    -1,   505,    -1,
      -1,    -1,    -1,    -1,   511,    -1,   416,    -1,    -1,   322,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   428,   429,
      -1,    -1,    -1,    -1,   256,    -1,   258,   259,   260,    -1,
      -1,    -1,   264,   346,   266,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,
      -1,   461,    -1,    -1,    -1,    -1,    -1,    -1,   192,   193,
     194,   471,   100,    -1,   377,    -1,     6,   201,    -1,     9,
      -1,   303,    -1,    -1,    -1,    -1,    -1,    -1,   212,    -1,
      -1,   491,    -1,    -1,    -1,    -1,   496,    -1,    -1,    -1,
      -1,    -1,    -1,   503,    -1,   505,    -1,   410,    -1,    -1,
      -1,   511,    -1,   416,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   245,    -1,    -1,   346,   428,   429,   251,    -1,   253,
      -1,    -1,   256,    -1,   258,   259,   260,    -1,    -1,    -1,
     264,    -1,   266,    -1,    -1,    -1,    -1,   271,    -1,    -1,
      -1,    -1,    -1,    83,    -1,   377,    -1,    -1,   461,    -1,
      -1,    -1,    -1,    -1,   192,   193,   194,    -1,   471,    -1,
     100,    -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,   303,
      -1,    -1,    -1,    -1,   212,    -1,    -1,    -1,   491,    -1,
      -1,    -1,    -1,   496,   416,    -1,    -1,    -1,   322,    -1,
     503,    -1,   505,    -1,    -1,    -1,   428,   429,   511,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   245,    -1,    -1,
      -1,    -1,   346,   251,    -1,   253,    -1,    -1,   256,    -1,
     258,   259,   260,    -1,    -1,    -1,   264,    -1,   266,   461,
      -1,    -1,    -1,   271,    -1,    -1,    -1,    -1,    -1,   471,
      -1,    -1,    -1,   377,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   192,   193,   194,    -1,    -1,    -1,    -1,   491,
      -1,   201,    -1,    -1,   496,   303,    -1,    -1,    -1,    -1,
      -1,   503,   212,   505,    -1,    -1,    -1,    -1,    -1,   511,
      -1,    -1,   416,    -1,   322,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   428,   429,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   245,    -1,    -1,   346,    -1,
      -1,   251,    -1,   253,    -1,    -1,   256,    -1,   258,   259,
     260,    83,    -1,    -1,   264,    -1,   266,   461,    -1,    -1,
      -1,   271,    -1,    -1,    -1,    -1,    -1,   471,   100,   377,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   491,    -1,    -1,
      -1,    -1,   496,   303,    -1,    -1,    -1,    -1,    -1,   503,
      -1,   505,    -1,    -1,    -1,    -1,    -1,   511,   416,    -1,
      -1,    -1,   322,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     428,   429,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,   346,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   461,    -1,    -1,    -1,    -1,    -1,   191,
     192,   193,   194,   471,    -1,    32,    -1,   377,    35,   201,
      -1,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    -1,    -1,   491,    -1,    -1,    -1,    -1,   496,    -1,
      -1,    -1,    -1,    -1,    -1,   503,    -1,   505,    65,    -1,
      67,    -1,    -1,   511,    -1,    -1,   416,    74,    -1,    76,
      77,    78,    79,    80,    81,    82,    -1,    -1,   428,   429,
      -1,    -1,    -1,    -1,   256,    -1,   258,   259,   260,    -1,
      -1,    -1,   264,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   461,    -1,   120,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   471,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   303,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   491,    -1,    -1,    -1,    -1,   496,    -1,    -1,    -1,
      -1,    -1,    -1,   503,   161,   505,    -1,    -1,    -1,    -1,
      -1,   511,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,
      -1,    -1,   179,   180,   181,   182,   183,    -1,    -1,   186,
     187,    -1,    -1,   190,    -1,    -1,    -1,    -1,    -1,   196,
      -1,   198,    -1,    -1,    -1,    -1,    -1,   204,    -1,    -1,
      -1,    -1,    -1,    -1,   211,   377,    -1,    -1,    -1,    -1,
      -1,    -1,   219,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   232,    -1,    -1,   235,    -1,
      -1,    -1,    -1,    -1,   241,    -1,   243,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   252,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   428,   429,   265,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   440,    -1,
     277,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   305,   471,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     482,   318,   319,    -1,    -1,    -1,    -1,    -1,    -1,   491,
     327,    -1,    -1,   330,   496,    -1,    -1,    -1,   500,    -1,
      -1,   503,   504,   505,     1,    -1,   343,    -1,   345,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   371,    -1,    -1,    -1,    -1,    36,
      -1,   378,    39,    40,    41,    42,    43,    44,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   395,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   405,    -1,
     407,   408,   409,    -1,    -1,    -1,    -1,    74,    -1,    76,
      77,    78,    79,    80,    81,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     447,    -1,    -1,    -1,    -1,   452,    -1,    -1,    -1,    -1,
     457,    -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   469,    -1,    -1,    -1,    -1,   474,    -1,    -1,
      -1,   478,   479,   480,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   492,    -1,    -1,    -1,    -1,
      -1,   498,   499,    -1,    83,    -1,    -1,    -1,   505,    -1,
      -1,    -1,    -1,    -1,    -1,   172,    -1,    -1,    -1,   176,
      -1,   100,   179,   180,   181,   182,   183,    -1,    -1,   186,
     187,    -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,    -1,    -1,
      36,    -1,    -1,    39,    40,    41,    42,    43,    44,    45,
      -1,    -1,   219,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   232,    -1,    -1,   235,    -1,
      -1,    -1,    -1,    -1,   241,    -1,    -1,    -1,    74,    -1,
      76,    77,    78,    79,    80,    81,    82,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   192,   193,   194,    -1,    -1,    -1,    -1,
     277,    -1,   201,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   212,   120,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   305,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   319,    -1,    -1,    -1,   245,    -1,    -1,    -1,
     327,    -1,   251,   330,   253,    -1,    -1,   256,    -1,   258,
     259,   260,    -1,    -1,    -1,   264,   343,   266,    -1,    -1,
      -1,    -1,    -1,   179,   180,   181,   182,   183,   355,    -1,
     186,   187,    -1,    -1,    -1,    -1,   363,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   303,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   219,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   322,    -1,    -1,   232,    -1,   405,   235,
     407,   408,   409,    -1,    -1,   241,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   346,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   434,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   277,    -1,    -1,    -1,   452,    -1,    -1,   377,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   469,    -1,    -1,    -1,    -1,    -1,    -1,   305,
      -1,   478,   479,   480,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   319,    -1,   492,    -1,   416,    -1,    -1,
      -1,   327,   499,    -1,   330,    -1,    -1,    -1,   505,   428,
     429,    -1,    -1,    32,    -1,    -1,    35,   343,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    -1,   355,
     449,    -1,    -1,    -1,    -1,    -1,    -1,   363,    -1,    -1,
     459,    -1,   461,    -1,   463,   464,    65,    -1,    67,    -1,
      -1,    -1,   471,    -1,    -1,    74,    -1,    76,    77,    78,
      79,    80,    81,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   491,    -1,    -1,    -1,    -1,   496,    -1,   405,
      -1,   407,   408,   409,   503,    -1,   505,    -1,    -1,    -1,
      -1,    -1,   511,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   120,    -1,    -1,    -1,    -1,    -1,    -1,   434,    -1,
      -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   452,    -1,    -1,   100,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   161,   469,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   478,   479,   480,    -1,    -1,    -1,    -1,    -1,
     179,   180,   181,   182,   183,    -1,   492,   186,   187,    -1,
      -1,   190,    -1,   499,    -1,    -1,    -1,   196,    -1,   198,
      -1,    -1,    -1,    -1,    -1,   204,    -1,    -1,    -1,    -1,
      -1,    -1,   211,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     219,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   232,    -1,    -1,   235,    -1,    -1,    -1,
      -1,   192,   193,   194,   243,    -1,    -1,    -1,    -1,    -1,
     201,    -1,    83,   252,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   212,    -1,    -1,    -1,    -1,   265,    -1,    -1,   100,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   277,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   245,    -1,    -1,    -1,    -1,    -1,
     251,    -1,   253,    -1,    -1,   256,   305,   258,   259,   260,
      -1,    -1,    -1,   264,    -1,   266,    -1,    -1,    -1,   318,
     319,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,    -1,
      -1,   330,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   343,    -1,   345,    -1,    -1,    -1,
      -1,    -1,   303,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   192,   193,   194,    -1,    -1,    -1,    -1,    -1,    -1,
     201,   322,   371,    -1,    83,    -1,    -1,    -1,    -1,   378,
      -1,   212,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   100,    -1,    -1,    -1,   346,   395,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   405,    -1,   407,   408,
     409,    -1,    -1,    -1,   245,    -1,    -1,    -1,    -1,    -1,
     251,    -1,   253,    -1,    -1,   256,   377,   258,   259,   260,
      -1,    -1,    -1,   264,    -1,   266,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   447,    -1,
      -1,    -1,    -1,   452,    -1,    -1,    -1,    -1,   457,    -1,
      -1,    -1,    -1,    -1,    -1,   416,    -1,    -1,    -1,    -1,
      -1,    -1,   303,    83,    -1,   474,    -1,   428,   429,   478,
     479,   480,    -1,   192,   193,   194,    -1,    -1,    -1,    -1,
     100,   322,   201,   492,    -1,    -1,    -1,    -1,   449,   498,
     499,    -1,    -1,   212,    -1,    -1,    -1,    -1,   459,    -1,
     461,    -1,   463,   464,    -1,   346,    -1,    -1,    -1,    -1,
     471,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   245,    -1,    -1,    -1,
     491,    -1,   251,    -1,   253,   496,   377,   256,    -1,   258,
     259,   260,   503,    -1,   505,   264,    -1,   266,    -1,    -1,
     511,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   192,   193,   194,   416,    -1,    -1,    -1,    -1,
      -1,   201,    -1,    -1,   303,    83,    -1,   428,   429,    -1,
      -1,    -1,   212,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   100,   322,    -1,    -1,    -1,    -1,   449,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   459,    -1,
     461,    -1,   463,   464,    -1,   245,    -1,   346,    -1,    -1,
     471,   251,    -1,   253,    -1,    -1,   256,    -1,   258,   259,
     260,    -1,    -1,    -1,   264,    -1,   266,    -1,    -1,    -1,
     491,    -1,    -1,    -1,    -1,   496,    -1,    -1,   377,    -1,
      -1,    -1,   503,    -1,   505,    -1,    -1,    -1,    -1,    -1,
     511,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   303,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   192,   193,   194,   416,    -1,    -1,
      -1,   100,   322,   201,    -1,    -1,    -1,    -1,    -1,   428,
     429,    -1,    -1,    -1,   212,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   346,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     459,    -1,   461,    -1,   463,   464,    -1,   245,    -1,    -1,
      -1,    -1,   471,   251,    -1,   253,    -1,   377,   256,    -1,
     258,   259,   260,    -1,    -1,    -1,   264,    -1,   266,    -1,
      -1,    -1,   491,    -1,    -1,    -1,    -1,   496,    -1,    -1,
      -1,    -1,    -1,    -1,   503,    -1,   505,    -1,    -1,    -1,
      -1,    -1,   511,   192,   193,   194,   416,    -1,    -1,    -1,
      -1,    -1,   201,    -1,    -1,   303,    -1,    -1,   428,   429,
      -1,    -1,    -1,   212,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   322,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   461,    -1,   463,    -1,    -1,   245,    -1,   346,    -1,
      -1,   471,   251,    -1,   253,    -1,    -1,   256,    -1,   258,
     259,   260,    -1,    -1,    -1,   264,    -1,   266,    -1,    -1,
      -1,   491,    -1,    -1,    -1,   373,   496,    -1,    -1,   377,
      -1,    -1,    -1,   503,    -1,   505,    -1,    -1,    -1,    -1,
      -1,   511,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   303,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   416,    -1,
      -1,    -1,    -1,   322,    -1,    -1,    -1,    -1,    -1,    -1,
     428,   429,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   346,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   461,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   471,    -1,    -1,    -1,    -1,   377,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   491,    -1,    -1,    -1,    -1,   496,    -1,
      -1,    -1,    -1,    -1,    -1,   503,    -1,   505,    -1,    -1,
      -1,    -1,    -1,   511,    -1,    -1,    -1,   416,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   428,
     429,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   461,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   471,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   491,    -1,    -1,    -1,    -1,   496,    -1,    -1,
      -1,    -1,    -1,    -1,   503,    -1,   505,    -1,    -1,    -1,
      -1,    -1,   511
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   514,   515,     0,   200,   341,   516,   517,   518,   519,
     520,   521,   523,   533,   535,   452,   452,   518,   154,   529,
     541,   529,   529,   256,   342,   536,   536,   123,    85,   542,
     522,   524,   533,   139,   527,   528,    26,   537,   537,   452,
     394,   543,   143,   522,   525,   526,   529,   536,   256,   452,
     534,   452,    11,    59,    97,    99,   101,   109,   165,   226,
     257,   301,   304,   369,   390,   415,   417,   433,   505,   544,
     545,   549,   560,   568,   569,   570,   571,   572,   577,   586,
     588,   593,   596,   597,   599,   600,   601,   602,   603,   604,
     605,   536,   524,   452,   232,   538,  1273,   505,  1193,  1193,
     423,   405,  1291,  1273,  1273,  1273,   394,  1193,   405,   452,
     452,  1273,   452,   452,    58,  1261,   573,     1,   452,   571,
     218,   587,   174,   606,   452,   526,   452,    73,   172,   354,
     457,   539,   540,   578,  1273,  1273,  1273,   505,  1188,  1219,
      69,  1188,   452,  1273,  1273,   550,   561,  1188,   546,   505,
     589,   590,   591,  1194,   256,   307,   309,   574,   576,  1038,
    1222,  1273,   452,   505,   452,   608,   540,   340,  1288,  1273,
     212,   256,   266,   346,   416,   461,   511,   594,   595,  1225,
    1188,   256,   218,   306,  1311,   256,   469,    57,    64,   268,
     340,   396,   401,   505,   551,   552,   553,   554,   555,   556,
     557,   559,  1260,  1321,   199,   562,   563,   564,   547,   559,
     590,    22,   232,  1194,  1274,  1038,   232,   423,  1285,  1273,
      97,  1193,   234,   397,   607,   609,    28,   127,   212,   256,
     266,   280,   346,   416,   419,   420,   511,   579,   580,   581,
     584,   595,   443,   504,   598,  1304,  1219,   400,   401,   410,
      64,  1273,   452,   553,   452,   505,   552,    60,  1273,     9,
     370,   497,   565,   567,     1,   452,   564,   548,  1304,   256,
     592,  1223,  1285,   232,  1193,  1193,   575,   576,   452,     1,
     290,   312,  1246,   274,   388,   641,   642,   643,   644,   646,
     581,    17,   443,  1225,   328,  1273,   401,  1222,   452,  1273,
     505,  1189,   229,    26,   566,   229,   370,   452,   452,   108,
    1223,  1193,   452,   312,  1193,   647,   351,   412,   413,   645,
     530,     1,   452,   643,   582,   584,   256,  1222,   257,   435,
     495,   558,  1189,   256,   272,   610,   455,  1264,    23,  1255,
     103,   651,   452,   583,   584,    58,   506,  1315,   611,   438,
    1297,   189,  1266,   123,   455,   652,    17,     4,    19,    29,
      64,   220,   252,   315,   320,   351,   359,   372,   401,   404,
     412,   452,   455,   612,   613,   619,   621,   623,   624,   625,
     626,   627,   630,   631,   632,   633,   634,   636,   637,   639,
    1289,  1305,    87,  1262,   505,  1178,  1179,   452,   394,   653,
     584,   272,  1280,   351,  1289,   447,   498,  1301,   401,   402,
    1273,  1260,   114,   237,  1275,  1275,   287,   638,  1222,  1304,
     423,   262,    39,  1258,  1273,   648,   649,  1179,  1179,   452,
     173,   392,   531,   654,   655,   657,  1273,  1275,   126,   172,
     616,   359,   631,  1273,  1273,  1273,  1273,  1255,     9,   287,
     349,   640,  1273,  1280,   402,   505,   649,   331,   650,   507,
     682,   684,   685,     1,  1179,   126,   347,   402,   620,  1273,
     118,   119,   120,   238,   252,   335,   347,   438,   614,   615,
     256,  1188,  1192,   419,   635,  1188,  1188,   316,  1286,  1286,
     310,  1188,  1273,  1222,   394,   261,   738,   686,   687,   689,
     699,  1238,   452,   656,   635,   256,   618,  1219,   618,     7,
     618,   618,   256,   617,  1219,   414,   453,    33,   168,   267,
     628,   452,   394,   255,   740,   452,   687,   452,     1,   176,
     505,   690,   691,   505,   658,   125,   504,  1240,  1320,  1264,
    1273,  1187,  1188,   504,   629,   629,   683,   452,   394,   366,
     742,   452,   452,   688,    86,    47,    63,   103,   239,   250,
     351,   352,   366,   368,   452,   499,   659,   660,   662,   666,
     667,   670,   671,   677,   678,   679,   680,  1273,   125,   432,
     622,  1187,  1188,   262,   385,   684,   739,   452,   394,   389,
     787,   701,   692,  1273,  1262,  1273,   351,   353,  1316,  1316,
    1273,  1262,  1273,  1280,  1273,    22,  1254,   306,   681,  1193,
     172,   204,   502,   309,   684,   741,   452,   394,   532,    21,
      36,    39,    40,    41,    42,    43,    44,    45,    74,    76,
      77,    78,    79,    80,    81,    82,   120,   179,   180,   181,
     182,   183,   186,   187,   219,   235,   277,   305,   319,   327,
     330,   343,   355,   363,   405,   407,   408,   409,   434,   478,
     479,   480,   492,   499,   702,   703,   704,   706,   707,   708,
     709,   710,   711,   712,   715,   727,   728,   729,   730,   731,
     736,   737,  1273,  1293,    26,   196,   700,  1256,   204,  1222,
     505,  1273,  1254,   505,  1190,  1191,   308,   418,  1312,  1192,
    1222,   500,  1273,   175,   213,   505,   668,  1193,     9,   416,
     511,   585,   274,   351,   353,  1314,   684,   743,   452,   337,
     801,   804,   244,   301,   406,   477,  1292,   477,  1292,   477,
    1292,   477,  1292,   477,  1292,   502,  1302,   384,  1290,   126,
    1222,  1216,  1219,  1219,   232,   242,   384,  1276,  1273,  1274,
     172,   204,   241,   469,   505,     9,    50,   212,   244,   245,
     256,   266,   346,   416,   461,   511,   693,  1226,  1227,  1228,
     447,   665,  1191,   254,  1279,   447,  1261,   218,  1268,   505,
    1273,  1273,  1228,  1314,   744,   788,   123,   827,   828,   511,
      53,   719,   447,   716,   463,  1220,  1221,   443,   709,   733,
     734,  1226,    26,   705,   400,  1250,  1250,  1228,   306,  1283,
       1,    40,    41,    42,    43,    44,   179,   180,   181,   182,
     183,   184,   185,   330,   343,   694,   695,   696,   697,   698,
     710,   711,  1216,   694,   448,  1222,    58,   353,   661,   672,
    1222,   410,  1294,   256,   669,  1219,   669,   348,   745,   689,
     699,   789,   790,   791,    56,   498,   805,     1,     3,     5,
      10,    18,    51,    52,    61,    72,    75,    89,   112,   120,
     122,   153,   164,   169,   195,   202,   205,   206,   215,   222,
     224,   227,   269,   273,   275,   285,   311,   324,   349,   350,
     360,   374,   375,   381,   385,   393,   403,   412,   421,   426,
     427,   430,   432,   439,   452,   470,   476,   481,   508,   829,
     830,   846,   851,   855,   860,   875,   878,   882,   886,   887,
     888,   893,   907,   911,   914,   928,   932,   935,   938,   942,
     943,   947,   957,   960,   977,   979,   982,   986,   992,  1004,
    1012,  1013,  1016,  1017,  1021,  1026,  1027,  1035,  1050,  1060,
    1069,  1074,  1081,  1085,  1087,  1090,  1093,  1097,  1124,   829,
    1268,   196,   717,  1222,   446,  1299,    83,   100,   192,   193,
     194,   201,   245,   251,   253,   258,   259,   260,   264,   303,
     322,   377,   428,   429,   459,   463,   464,   471,   491,   496,
     503,  1166,  1168,  1169,  1170,  1171,  1172,  1173,  1201,  1215,
    1216,  1227,  1229,  1230,  1231,  1232,   463,  1221,  1219,   732,
     734,   443,   256,  1260,   694,   452,  1228,    48,   466,   673,
     674,   675,   676,  1304,  1261,   196,   664,  1267,   505,  1180,
       1,   690,   791,   452,   807,   806,   376,   813,     3,     5,
      10,    18,    51,    52,    61,    72,    75,    89,   112,   120,
     122,   129,   131,   132,   133,   134,   135,   136,   137,   138,
     140,   141,   142,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   164,   169,   195,   202,   205,   206,   215,
     222,   224,   227,   269,   273,   275,   285,   311,   324,   349,
     360,   375,   381,   385,   393,   403,   412,   421,   426,   427,
     430,   432,   439,   452,   470,   476,   481,   508,  1251,   831,
     847,   852,   856,   861,   876,   879,   883,   889,   894,   908,
     912,   915,   929,   933,   936,   939,   203,   376,   870,   931,
     944,   948,   958,   961,   978,   980,   983,   399,   987,   993,
    1005,  1014,  1018,  1022,  1028,  1036,  1051,  1061,   256,   346,
     387,   416,   511,  1073,  1075,  1082,   336,  1086,  1088,   816,
    1091,  1094,  1098,  1125,   505,  1222,   716,   115,   718,   463,
    1234,  1216,  1227,  1229,  1311,  1311,   463,   463,   463,   463,
    1311,  1172,  1168,  1172,   463,  1234,    71,   398,   449,  1167,
     450,   459,   464,   451,   460,   170,   463,  1233,   463,   463,
    1168,   502,   735,  1303,  1226,  1192,  1192,   188,   665,  1222,
     746,   452,   792,   452,    49,   808,   809,   810,  1259,   808,
     505,   452,   308,   832,   833,  1215,     6,    95,   245,   271,
     848,  1173,  1197,  1198,  1215,  1226,  1229,   853,  1168,  1215,
     256,   857,   858,  1184,  1185,  1186,  1219,   271,   422,   424,
     862,   863,   256,   877,  1206,  1215,   880,  1179,     6,   884,
    1174,  1175,  1196,  1217,  1218,  1219,  1227,   455,   890,  1179,
     256,   895,   896,   898,  1197,  1198,  1206,  1215,   909,  1198,
     256,   913,   454,   465,   916,   917,   918,  1156,  1157,  1158,
     199,   323,   324,   340,   394,   930,   934,  1195,  1196,   937,
    1219,   447,   940,  1300,  1198,  1155,  1156,   949,  1195,   959,
    1180,   962,   963,  1215,  1226,  1229,  1052,  1213,  1214,  1219,
      95,   981,  1198,   984,  1198,   171,   225,   233,   317,   988,
     989,   191,   256,   994,   998,   999,  1000,  1184,  1207,  1215,
    1219,  1229,  1304,  1006,  1179,  1015,  1176,  1219,  1019,  1179,
    1023,  1176,     9,  1029,  1177,  1219,   154,   271,  1037,  1040,
    1041,  1044,  1045,  1046,  1047,  1048,  1049,  1181,  1182,  1195,
    1212,  1214,  1219,  1052,  1062,  1179,  1070,   113,  1076,  1077,
    1078,  1198,    95,  1083,  1197,  1089,  1180,   452,   505,   817,
     818,   821,   822,   827,  1092,  1215,  1095,  1179,  1099,  1215,
    1126,  1176,   223,   720,   309,  1284,   721,   722,   449,  1166,
    1168,   505,   505,  1168,  1237,  1237,  1237,  1200,  1215,  1227,
    1229,  1236,   505,   449,  1200,  1235,  1168,   449,  1168,  1169,
    1169,  1170,  1170,  1170,  1168,  1200,  1166,   403,   454,    30,
    1257,  1261,     1,   747,   793,   809,   410,   477,   811,   357,
     499,   802,   131,   845,    30,   835,   836,  1257,   196,  1283,
    1215,  1216,  1227,  1229,   132,   850,   447,   849,  1198,    58,
     223,  1241,   858,   447,  1311,   133,   874,   256,  1207,  1206,
    1179,   356,   475,   881,  1304,  1317,  1283,   134,   885,   160,
     453,  1175,  1308,   386,  1247,  1220,  1221,   891,  1179,   135,
     892,  1289,   136,   906,   166,   897,  1135,  1136,   485,   899,
     504,   836,   486,   487,   488,   489,   137,   910,    49,   228,
     498,   864,   138,   927,    17,   502,   919,   920,   921,   923,
      12,    13,    14,    20,   160,   170,   207,   208,   246,   247,
     284,   290,   293,   301,   308,   313,   332,   449,   451,   453,
     456,   458,   459,   460,   463,   464,  1159,  1160,  1161,  1162,
    1163,  1164,  1165,  1198,   102,   931,  1196,  1183,   442,  1298,
     950,  1304,  1180,    93,   365,   437,   964,   965,   967,   968,
    1054,   463,  1220,  1198,   447,   141,   985,    49,   989,   404,
     990,   999,   142,   452,   995,   997,   482,   500,   443,   446,
     440,   144,  1011,   285,   334,  1244,   196,  1127,   145,  1020,
    1289,   146,  1025,  1127,  1177,   147,  1034,   500,  1030,  1204,
    1215,  1227,  1047,  1049,  1195,   447,  1182,   124,   447,   483,
    1039,    31,  1220,   148,  1068,   178,   237,   240,  1064,   870,
    1071,  1304,  1259,   149,  1080,   228,  1078,  1215,   150,  1084,
     196,  1180,   394,   452,   452,   196,   351,   353,  1096,   151,
    1108,   113,  1100,   152,  1131,  1127,   721,  1188,   220,   724,
      27,   116,   723,   449,  1167,   449,   449,   449,  1167,   449,
    1167,   449,   449,   450,   449,   449,   447,  1273,  1192,   115,
     663,   452,    62,    90,    91,   321,   452,   748,   749,   752,
    1273,  1329,    32,    35,    38,    45,    46,    65,    67,   161,
     190,   196,   198,   211,   243,   252,   265,   305,   318,   345,
     371,   378,   395,   447,   457,   474,   498,   707,   708,   712,
     727,   729,   731,   794,   799,   800,  1273,  1306,  1273,   410,
     312,   812,   110,   814,  1204,   197,   839,   252,   331,   837,
     838,  1306,    24,    25,    66,    68,    70,   104,   105,   106,
     154,   156,   163,   166,   252,   254,   444,   494,   505,   834,
    1182,  1307,   153,   340,  1202,  1216,   447,     6,  1174,  1198,
    1219,  1227,   203,   223,  1242,   376,   854,   339,   859,  1186,
     864,   881,   262,   287,  1266,  1216,  1168,   272,  1248,  1221,
    1179,   231,  1151,  1152,   824,   825,   898,  1198,   294,  1137,
      97,   335,   505,  1182,   298,   903,    35,    38,    45,    46,
      92,   161,   190,   211,   265,   318,   378,   391,   474,   904,
     905,   485,   900,  1135,  1135,  1135,  1135,  1198,  1174,  1198,
     865,   918,    21,   454,   465,   924,   925,  1157,   502,   921,
     922,   502,   824,  1300,   232,  1160,   115,   941,  1184,   129,
     824,   945,     9,    12,    15,    16,   277,   278,   301,   302,
     951,   955,   176,  1204,     9,    58,   178,   241,   469,   971,
     972,   973,   966,   967,  1056,  1284,  1320,   447,  1195,  1174,
    1198,   990,  1304,  1178,   824,   169,  1001,  1155,  1002,  1003,
    1215,  1184,     8,    37,  1129,  1289,  1211,  1215,  1226,  1229,
     228,  1007,  1024,  1304,   130,  1031,  1215,  1031,   447,   447,
    1038,   153,   454,   465,  1198,    49,    38,    46,   211,   243,
     265,   318,   378,   474,  1042,  1043,  1273,  1063,  1304,  1198,
     162,   289,   410,  1198,  1215,   196,  1174,  1198,   823,  1222,
    1204,  1259,   228,  1103,  1128,  1129,   724,  1259,  1275,  1188,
    1233,  1233,  1233,  1200,   241,   469,  1233,   449,  1168,  1233,
    1233,  1226,  1284,  1273,  1273,  1254,   248,   249,  1278,   761,
     204,   177,   750,  1265,  1273,   252,   389,   157,   159,  1273,
    1207,   299,  1281,  1222,    57,  1215,  1215,   204,  1281,    32,
     111,  1222,  1273,   505,   452,   803,   272,   840,  1281,  1281,
     838,   837,  1281,   166,  1132,  1133,   510,   509,  1204,  1132,
     237,   423,   299,   276,   256,  1203,  1216,  1215,  1283,   411,
    1138,  1139,  1220,  1221,  1174,   447,  1243,   854,  1196,   447,
    1184,   869,   870,   380,   362,  1138,  1273,   824,   295,  1153,
     826,   824,  1135,  1273,   252,   389,   157,   159,  1273,   124,
     483,   905,  1135,    97,    98,   901,   840,   203,  1138,   203,
     866,   867,   868,  1259,    17,   443,   926,   316,   924,  1284,
     824,   129,   140,   946,  1300,   365,   952,  1300,   447,    49,
     972,   974,  1204,     9,    58,   241,   469,   969,   970,  1204,
    1057,  1305,   723,   218,   314,  1269,  1195,  1138,   203,  1178,
     640,   379,   991,  1304,   142,   996,     8,   196,  1007,  1215,
     130,  1144,  1146,  1151,   262,   287,   824,   502,   502,  1032,
    1033,  1204,  1203,  1198,  1038,  1038,  1038,  1038,  1038,  1038,
    1038,  1038,  1043,   290,   293,  1065,  1066,  1067,  1161,  1245,
    1151,   244,   410,  1319,   423,  1296,  1296,  1079,  1304,  1215,
    1138,   203,   452,   447,     9,  1101,  1102,  1239,  1104,  1215,
    1079,  1104,  1024,     7,  1252,   505,   725,   726,  1273,   449,
    1188,  1206,  1273,  1254,   256,   753,  1224,   689,   762,   751,
    1215,   511,  1208,  1212,  1222,  1208,  1273,  1299,  1273,  1273,
      32,  1222,   815,   816,  1273,   504,   841,  1208,  1208,  1208,
     824,   294,  1134,  1132,  1247,  1216,   824,   297,  1140,  1221,
    1138,  1205,  1215,  1226,   166,   462,   872,  1310,     6,   228,
     308,   461,   871,  1272,    34,   281,   282,   283,   344,   467,
     468,   472,  1249,   824,   827,  1208,  1208,  1154,  1210,  1212,
    1222,  1154,   504,   902,  1174,  1175,  1174,  1175,   867,   308,
     811,    88,   357,   499,   925,  1156,   824,  1215,   824,   499,
     953,   954,   955,   956,  1298,   499,  1205,  1204,    49,   975,
     970,   189,   975,  1053,  1273,  1275,   314,  1174,   991,   262,
     287,  1003,  1198,   217,  1008,  1304,   824,   291,  1147,   262,
    1156,  1155,  1032,  1161,  1215,  1162,  1163,  1164,  1165,  1168,
    1072,  1198,  1072,   462,  1141,  1142,   330,  1247,  1174,   819,
    1205,   313,  1204,   114,  1105,   437,  1107,   158,   292,  1130,
    1148,  1149,  1150,  1151,   321,  1182,  1208,   726,  1187,   754,
     252,   254,  1313,   505,   690,  1215,   270,   329,   459,   464,
     795,   796,   797,  1206,   795,   796,   798,   816,    47,    32,
      35,    38,    46,    92,   111,   190,   198,   211,   243,   263,
     265,   287,   288,   318,   345,   371,   378,   391,   395,   436,
     445,   474,   484,   490,   842,   843,   844,  1132,   824,  1138,
     824,   294,   873,   824,  1283,  1215,   252,   254,  1318,   904,
    1138,   361,  1138,   361,  1198,   954,   103,  1263,  1300,   975,
     975,  1205,     8,    37,   976,   225,   498,  1058,  1188,  1055,
    1138,   380,    49,   262,   237,  1009,   216,   236,   262,   287,
     501,   824,   824,   824,   824,   296,  1143,  1273,  1138,  1138,
     493,   820,  1109,  1102,  1268,    96,  1106,  1268,  1141,   824,
     824,  1150,   252,   254,  1277,   178,   188,   210,   240,   755,
     756,   757,   758,   759,   760,  1224,   763,  1208,  1208,   130,
    1273,  1273,   844,    57,   124,   483,     8,  1253,   843,   824,
    1215,  1175,  1175,    49,   111,   975,   457,  1271,  1271,   337,
    1178,   203,   317,  1059,  1219,  1198,  1273,  1010,  1145,  1146,
    1147,  1151,   262,   262,   262,   824,  1215,  1110,   452,  1215,
    1268,  1215,   107,   117,  1322,  1273,  1273,    55,    90,  1322,
    1323,  1307,   764,   110,  1208,  1208,  1273,  1154,  1154,  1209,
    1212,  1224,  1138,  1138,  1198,  1198,  1198,  1273,  1178,   337,
     482,  1215,  1147,   128,   167,   204,  1111,  1112,  1113,  1115,
    1119,  1121,  1122,  1123,  1257,  1266,  1215,  1273,  1224,  1224,
     210,  1273,  1273,   209,   252,   254,   285,   305,   333,   414,
     431,   452,   473,   492,   500,   707,   712,   713,   727,   729,
     731,   765,   766,   770,   771,   774,   775,   776,   777,   778,
     779,   784,   785,   786,  1306,  1307,   452,  1206,   998,  1273,
    1155,    37,  1253,   340,   108,  1224,  1224,  1224,   221,  1270,
     299,   300,  1282,  1254,   209,  1222,   502,  1273,  1283,  1273,
    1273,  1215,   286,   329,   780,   781,  1224,   329,   782,   783,
    1224,  1282,  1254,   998,   367,   418,  1295,   130,   421,  1120,
    1284,  1274,  1273,   716,  1155,  1201,  1199,  1201,    54,    90,
     321,   325,   326,   366,   382,   383,   767,  1322,  1323,  1324,
    1325,  1326,  1327,  1328,   120,   196,  1222,   781,  1222,   783,
    1274,  1215,   162,   166,  1309,     9,  1116,  1117,  1185,   781,
    1299,  1247,   373,   772,  1201,   188,   188,   210,   188,   210,
     177,   768,  1215,   768,  1201,   337,  1287,   306,   338,   358,
    1118,  1117,   718,  1284,   313,   769,   769,    49,  1284,   306,
    1219,   425,   714,   177,   773,  1215,   321,  1201,   171,   225,
     233,   317,  1114,  1178,  1222
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
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


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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

/* Line 1806 of yacc.c  */
#line 1367 "parser.y"
    {
	clear_initial_values ();
	current_program = NULL;
	cobc_cs_check = 0;
	prog_end = 0;
	depth = 0;
	main_flag_set = 0;
	current_program = cb_build_program (NULL, 0);
	cb_build_registers ();
  }
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 1378 "parser.y"
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
  }
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 1414 "parser.y"
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
  }
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 1469 "parser.y"
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
  }
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 1498 "parser.y"
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
  }
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 1531 "parser.y"
    {
	cb_validate_program_environment (current_program);
  }
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 1537 "parser.y"
    {
	current_storage = CB_STORAGE_WORKING;
  }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 1549 "parser.y"
    {
	cb_validate_program_data (current_program);
  }
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 1559 "parser.y"
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
  }
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 1590 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 1597 "parser.y"
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
  }
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 1636 "parser.y"
    { (yyval) = NULL; }
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 1637 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 1646 "parser.y"
    {
	if (!current_program->nested_level) {
		cb_error (_("COMMON may only be used in a contained program"));
	} else {
		current_program->flag_common = 1;
		cb_add_common_prog (current_program);
	}
  }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 1655 "parser.y"
    {
	if (!current_program->nested_level) {
		cb_error (_("COMMON may only be used in a contained program"));
	} else {
		current_program->flag_common = 1;
		cb_add_common_prog (current_program);
	}
  }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 1669 "parser.y"
    {
	current_program->flag_initial = 1;
  }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 1673 "parser.y"
    {
	current_program->flag_recursive = 1;
  }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 1683 "parser.y"
    {
	header_check |= COBC_HD_ENVIRONMENT_DIVISION;
  }
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 1692 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_CONFIGURATION_SECTION;
	if (current_program->nested_level) {
		cb_error (_("CONFIGURATION SECTION not allowed in nested programs"));
	}
  }
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 1717 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_comp_repeated ("SOURCE-COMPUTER", SYN_CLAUSE_1);
	if (warningopt && (check_comp_duplicate & SYN_CLAUSE_2)) {
		cb_warning (_("Phrases in non-standard order"));
	}
  }
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 1735 "parser.y"
    {
	cb_verify (cb_debugging_line, "DEBUGGING MODE");
	current_program->flag_debugging = 1;
	needs_debug_item = 1;
	cobc_cs_check = 0;
	cb_build_debug_item ();
  }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 1748 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_comp_repeated ("OBJECT-COMPUTER", SYN_CLAUSE_2);
  }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 1777 "parser.y"
    {
	cb_verify (cb_memory_size_clause, "MEMORY SIZE");
  }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 1784 "parser.y"
    {
	current_program->collating_sequence = (yyvsp[(3) - (3)]);
  }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 1791 "parser.y"
    {
	/* Ignore */
  }
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 1798 "parser.y"
    {
	if (current_program->classification) {
		cb_error (_("Duplicate CLASSIFICATION clause"));
	} else {
		current_program->classification = (yyvsp[(4) - (4)]);
	}
  }
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 1809 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 1813 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 1817 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 1821 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 1835 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
  }
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 1840 "parser.y"
    {
	cobc_in_repository = 0;
  }
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 1848 "parser.y"
    {
	yyerrok;
  }
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 1860 "parser.y"
    {
	functions_are_all = 1;
  }
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 1864 "parser.y"
    {
	cb_tree		x;

	if ((yyvsp[(3) - (3)])) {
		x = (yyvsp[(3) - (3)]);
	} else {
		x = (yyvsp[(2) - (3)]);
	}
	current_program->user_spec_list =
		cb_list_add (current_program->user_spec_list, x);
  }
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 1885 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 1889 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 1896 "parser.y"
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[(1) - (1)]));
  }
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 1901 "parser.y"
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[(2) - (2)]));
  }
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 1912 "parser.y"
    {
	check_duplicate = 0;
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	header_check |= COBC_HD_SPECIAL_NAMES;
	if (current_program->nested_level) {
		cb_error (_("SPECIAL-NAMES not allowed in nested programs"));
	}
  }
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 1926 "parser.y"
    {
	cobc_cs_check = 0;
	yyerrok;
  }
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 1957 "parser.y"
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
  }
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 1976 "parser.y"
    {
	if (save_tree) {
		if (CB_SYSTEM_NAME(save_tree)->token != CB_DEVICE_CONSOLE) {
			cb_error_x (save_tree, _("Invalid CRT clause"));
		} else {
			current_program->flag_console_is_crt = 1;
		}
	}
  }
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 1986 "parser.y"
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
  }
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 1999 "parser.y"
    {
	if (save_tree && CB_VALID_TREE ((yyvsp[(2) - (3)]))) {
		cb_define ((yyvsp[(2) - (3)]), save_tree);
		CB_CHAIN_PAIR (current_program->mnemonic_spec_list,
				(yyvsp[(2) - (3)]), save_tree);
	}
  }
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 2015 "parser.y"
    {
	cb_tree		x;

	/* cb_define_switch_name checks param validity */
	x = cb_define_switch_name ((yyvsp[(3) - (3)]), save_tree, (yyvsp[(1) - (3)]) == cb_int1);
	if (x) {
		CB_CHAIN_PAIR (current_program->mnemonic_spec_list, (yyvsp[(3) - (3)]), x);
	}
  }
    break;

  case 124:

/* Line 1806 of yacc.c  */
#line 2025 "parser.y"
    {
	cb_tree		x;

	/* cb_define_switch_name checks param validity */
	x = cb_define_switch_name ((yyvsp[(4) - (4)]), save_tree, (yyvsp[(2) - (4)]) == cb_int1);
	if (x) {
		CB_CHAIN_PAIR (current_program->mnemonic_spec_list, (yyvsp[(4) - (4)]), x);
	}
  }
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 2040 "parser.y"
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
  }
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 2053 "parser.y"
    {
	if ((yyvsp[(3) - (5)])) {
		current_program->alphabet_name_list =
			cb_list_add (current_program->alphabet_name_list, (yyvsp[(3) - (5)]));
	}
	cobc_cs_check = 0;
  }
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 2064 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_NATIVE;
	}
  }
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 2070 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 2076 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 2082 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_EBCDIC;
	}
  }
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 2088 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 2094 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_CUSTOM;
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->custom_list = (yyvsp[(1) - (1)]);
	}
  }
    break;

  case 133:

/* Line 1806 of yacc.c  */
#line 2104 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 134:

/* Line 1806 of yacc.c  */
#line 2108 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 135:

/* Line 1806 of yacc.c  */
#line 2115 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 136:

/* Line 1806 of yacc.c  */
#line 2119 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 137:

/* Line 1806 of yacc.c  */
#line 2123 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (2)]));
  }
    break;

  case 138:

/* Line 1806 of yacc.c  */
#line 2127 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (4)]);
  }
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 2134 "parser.y"
    {
	cb_list_add ((yyvsp[(0) - (1)]), (yyvsp[(1) - (1)]));
  }
    break;

  case 140:

/* Line 1806 of yacc.c  */
#line 2138 "parser.y"
    {
	cb_list_add ((yyvsp[(0) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 141:

/* Line 1806 of yacc.c  */
#line 2144 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 142:

/* Line 1806 of yacc.c  */
#line 2145 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 143:

/* Line 1806 of yacc.c  */
#line 2146 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 144:

/* Line 1806 of yacc.c  */
#line 2147 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 145:

/* Line 1806 of yacc.c  */
#line 2148 "parser.y"
    { (yyval) = cb_norm_high; }
    break;

  case 146:

/* Line 1806 of yacc.c  */
#line 2149 "parser.y"
    { (yyval) = cb_norm_low; }
    break;

  case 147:

/* Line 1806 of yacc.c  */
#line 2153 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 148:

/* Line 1806 of yacc.c  */
#line 2154 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 149:

/* Line 1806 of yacc.c  */
#line 2162 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("SPECIAL-NAMES not allowed in nested programs"));
	} else if ((yyvsp[(1) - (2)])) {
		CB_CHAIN_PAIR (current_program->symbolic_char_list, (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	}
  }
    break;

  case 150:

/* Line 1806 of yacc.c  */
#line 2176 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 151:

/* Line 1806 of yacc.c  */
#line 2180 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 152:

/* Line 1806 of yacc.c  */
#line 2188 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 153:

/* Line 1806 of yacc.c  */
#line 2195 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 154:

/* Line 1806 of yacc.c  */
#line 2199 "parser.y"
    {
	if ((yyvsp[(2) - (2)])) {
		(yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	} else {
		(yyval) = (yyvsp[(1) - (2)]);
	}
  }
    break;

  case 155:

/* Line 1806 of yacc.c  */
#line 2210 "parser.y"
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
  }
    break;

  case 156:

/* Line 1806 of yacc.c  */
#line 2230 "parser.y"
    {
	if ((yyvsp[(1) - (1)]) == NULL) {
		(yyval) = NULL;
	} else {
		(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	}
  }
    break;

  case 157:

/* Line 1806 of yacc.c  */
#line 2238 "parser.y"
    {
	if ((yyvsp[(2) - (2)]) == NULL) {
		(yyval) = (yyvsp[(1) - (2)]);
	} else {
		(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	}
  }
    break;

  case 158:

/* Line 1806 of yacc.c  */
#line 2248 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 159:

/* Line 1806 of yacc.c  */
#line 2249 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 160:

/* Line 1806 of yacc.c  */
#line 2256 "parser.y"
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
  }
    break;

  case 161:

/* Line 1806 of yacc.c  */
#line 2276 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 162:

/* Line 1806 of yacc.c  */
#line 2277 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 163:

/* Line 1806 of yacc.c  */
#line 2282 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 164:

/* Line 1806 of yacc.c  */
#line 2286 "parser.y"
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
  }
    break;

  case 165:

/* Line 1806 of yacc.c  */
#line 2307 "parser.y"
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
  }
    break;

  case 166:

/* Line 1806 of yacc.c  */
#line 2330 "parser.y"
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
  }
    break;

  case 167:

/* Line 1806 of yacc.c  */
#line 2411 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 168:

/* Line 1806 of yacc.c  */
#line 2415 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 169:

/* Line 1806 of yacc.c  */
#line 2424 "parser.y"
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
  }
    break;

  case 170:

/* Line 1806 of yacc.c  */
#line 2443 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("SPECIAL-NAMES not allowed in nested programs"));
	} else {
		current_program->flag_trailing_separate = 1;
	}
  }
    break;

  case 171:

/* Line 1806 of yacc.c  */
#line 2459 "parser.y"
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
  }
    break;

  case 172:

/* Line 1806 of yacc.c  */
#line 2477 "parser.y"
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
  }
    break;

  case 173:

/* Line 1806 of yacc.c  */
#line 2495 "parser.y"
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
  }
    break;

  case 174:

/* Line 1806 of yacc.c  */
#line 2512 "parser.y"
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
  }
    break;

  case 176:

/* Line 1806 of yacc.c  */
#line 2529 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_INPUT_OUTPUT_SECTION;
  }
    break;

  case 178:

/* Line 1806 of yacc.c  */
#line 2537 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_FILE_CONTROL;
  }
    break;

  case 180:

/* Line 1806 of yacc.c  */
#line 2546 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_I_O_CONTROL;
  }
    break;

  case 183:

/* Line 1806 of yacc.c  */
#line 2561 "parser.y"
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
  }
    break;

  case 184:

/* Line 1806 of yacc.c  */
#line 2578 "parser.y"
    {
	validate_file (current_file, (yyvsp[(3) - (6)]));
  }
    break;

  case 185:

/* Line 1806 of yacc.c  */
#line 2582 "parser.y"
    {
	yyerrok;
	current_file = NULL;
	if (current_program->file_list) {
		current_program->file_list = CB_CHAIN (current_program->file_list);
	}
  }
    break;

  case 201:

/* Line 1806 of yacc.c  */
#line 2616 "parser.y"
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1);
	cobc_cs_check = 0;
	current_file->assign = cb_build_assignment_name (current_file, (yyvsp[(5) - (5)]));
  }
    break;

  case 202:

/* Line 1806 of yacc.c  */
#line 2622 "parser.y"
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1);
	cobc_cs_check = 0;
	if ((yyvsp[(5) - (5)])) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[(5) - (5)]));
	} else {
		current_file->flag_fileid = 1;
	}
  }
    break;

  case 203:

/* Line 1806 of yacc.c  */
#line 2632 "parser.y"
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
  }
    break;

  case 204:

/* Line 1806 of yacc.c  */
#line 2645 "parser.y"
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
  }
    break;

  case 205:

/* Line 1806 of yacc.c  */
#line 2658 "parser.y"
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
  }
    break;

  case 211:

/* Line 1806 of yacc.c  */
#line 2681 "parser.y"
    {
	current_file->flag_line_adv = 1;
  }
    break;

  case 213:

/* Line 1806 of yacc.c  */
#line 2688 "parser.y"
    {
	current_file->flag_ext_assign = 1;
  }
    break;

  case 217:

/* Line 1806 of yacc.c  */
#line 2701 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 220:

/* Line 1806 of yacc.c  */
#line 2713 "parser.y"
    {
	cobc_cs_check = 0;
	check_repeated ("ACCESS", SYN_CLAUSE_2);
  }
    break;

  case 221:

/* Line 1806 of yacc.c  */
#line 2720 "parser.y"
    { current_file->access_mode = COB_ACCESS_SEQUENTIAL; }
    break;

  case 222:

/* Line 1806 of yacc.c  */
#line 2721 "parser.y"
    { current_file->access_mode = COB_ACCESS_DYNAMIC; }
    break;

  case 223:

/* Line 1806 of yacc.c  */
#line 2722 "parser.y"
    { current_file->access_mode = COB_ACCESS_RANDOM; }
    break;

  case 224:

/* Line 1806 of yacc.c  */
#line 2730 "parser.y"
    {
	struct cb_alt_key *p;
	struct cb_alt_key *l;

	p = cobc_parse_malloc (sizeof (struct cb_alt_key));
	p->key = (yyvsp[(5) - (7)]);
	p->duplicates = CB_INTEGER ((yyvsp[(6) - (7)]))->val;
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
  }
    break;

  case 225:

/* Line 1806 of yacc.c  */
#line 2753 "parser.y"
    { }
    break;

  case 226:

/* Line 1806 of yacc.c  */
#line 2756 "parser.y"
    {
	PENDING ("SUPPRESS WHEN ALL");
  }
    break;

  case 227:

/* Line 1806 of yacc.c  */
#line 2761 "parser.y"
    {
	PENDING ("SUPPRESS WHEN SPACE/ZERO");
  }
    break;

  case 228:

/* Line 1806 of yacc.c  */
#line 2771 "parser.y"
    {
	check_repeated ("COLLATING", SYN_CLAUSE_3);
	PENDING ("COLLATING SEQUENCE");
  }
    break;

  case 229:

/* Line 1806 of yacc.c  */
#line 2782 "parser.y"
    {
	check_repeated ("STATUS", SYN_CLAUSE_4);
	current_file->file_status = (yyvsp[(4) - (4)]);
  }
    break;

  case 233:

/* Line 1806 of yacc.c  */
#line 2797 "parser.y"
    {
	check_repeated ("LOCK", SYN_CLAUSE_5);
  }
    break;

  case 235:

/* Line 1806 of yacc.c  */
#line 2805 "parser.y"
    {
	current_file->lock_mode = COB_LOCK_MANUAL;
	cobc_cs_check = 0;
  }
    break;

  case 236:

/* Line 1806 of yacc.c  */
#line 2810 "parser.y"
    {
	current_file->lock_mode = COB_LOCK_AUTOMATIC;
	cobc_cs_check = 0;
  }
    break;

  case 237:

/* Line 1806 of yacc.c  */
#line 2815 "parser.y"
    {
	current_file->lock_mode = COB_LOCK_EXCLUSIVE;
	cobc_cs_check = 0;
  }
    break;

  case 240:

/* Line 1806 of yacc.c  */
#line 2824 "parser.y"
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
  }
    break;

  case 241:

/* Line 1806 of yacc.c  */
#line 2828 "parser.y"
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
	PENDING ("WITH ROLLBACK");
  }
    break;

  case 244:

/* Line 1806 of yacc.c  */
#line 2844 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6);
	current_file->organization = COB_ORG_INDEXED;
  }
    break;

  case 245:

/* Line 1806 of yacc.c  */
#line 2849 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6);
	current_file->organization = COB_ORG_SEQUENTIAL;
  }
    break;

  case 246:

/* Line 1806 of yacc.c  */
#line 2854 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6);
	current_file->organization = COB_ORG_RELATIVE;
  }
    break;

  case 247:

/* Line 1806 of yacc.c  */
#line 2859 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6);
	current_file->organization = COB_ORG_LINE_SEQUENTIAL;
  }
    break;

  case 248:

/* Line 1806 of yacc.c  */
#line 2870 "parser.y"
    {
	check_repeated ("PADDING", SYN_CLAUSE_7);
	cb_verify (cb_padding_character_clause, "PADDING CHARACTER");
  }
    break;

  case 249:

/* Line 1806 of yacc.c  */
#line 2881 "parser.y"
    {
	check_repeated ("RECORD DELIMITER", SYN_CLAUSE_8);
  }
    break;

  case 250:

/* Line 1806 of yacc.c  */
#line 2891 "parser.y"
    {
	check_repeated ("RECORD KEY", SYN_CLAUSE_9);
	current_file->key = (yyvsp[(4) - (4)]);
  }
    break;

  case 251:

/* Line 1806 of yacc.c  */
#line 2898 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 252:

/* Line 1806 of yacc.c  */
#line 2899 "parser.y"
    { PENDING ("SPLIT KEYS"); }
    break;

  case 253:

/* Line 1806 of yacc.c  */
#line 2900 "parser.y"
    { PENDING ("SPLIT KEYS"); }
    break;

  case 254:

/* Line 1806 of yacc.c  */
#line 2907 "parser.y"
    {
	check_repeated ("RELATIVE KEY", SYN_CLAUSE_10);
	current_file->key = (yyvsp[(4) - (4)]);
  }
    break;

  case 255:

/* Line 1806 of yacc.c  */
#line 2918 "parser.y"
    {
	check_repeated ("RESERVE", SYN_CLAUSE_11);
  }
    break;

  case 258:

/* Line 1806 of yacc.c  */
#line 2932 "parser.y"
    {
	check_repeated ("SHARING", SYN_CLAUSE_12);
	current_file->sharing = (yyvsp[(3) - (3)]);
  }
    break;

  case 259:

/* Line 1806 of yacc.c  */
#line 2939 "parser.y"
    { (yyval) = NULL; }
    break;

  case 260:

/* Line 1806 of yacc.c  */
#line 2940 "parser.y"
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
    break;

  case 261:

/* Line 1806 of yacc.c  */
#line 2941 "parser.y"
    { (yyval) = NULL; }
    break;

  case 264:

/* Line 1806 of yacc.c  */
#line 2950 "parser.y"
    {
	yyerrok;
  }
    break;

  case 269:

/* Line 1806 of yacc.c  */
#line 2969 "parser.y"
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
  }
    break;

  case 270:

/* Line 1806 of yacc.c  */
#line 2996 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 271:

/* Line 1806 of yacc.c  */
#line 2997 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 272:

/* Line 1806 of yacc.c  */
#line 2998 "parser.y"
    { (yyval) = cb_int2; }
    break;

  case 273:

/* Line 1806 of yacc.c  */
#line 2999 "parser.y"
    { (yyval) = cb_int2; }
    break;

  case 274:

/* Line 1806 of yacc.c  */
#line 3006 "parser.y"
    {
	/* Fake for TAPE */
	cobc_cs_check = CB_CS_ASSIGN;
  }
    break;

  case 275:

/* Line 1806 of yacc.c  */
#line 3011 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_I_O_CONTROL, 0);
	cb_verify (cb_multiple_file_tape_clause, "MULTIPLE FILE TAPE");
	cobc_cs_check = 0;
  }
    break;

  case 282:

/* Line 1806 of yacc.c  */
#line 3038 "parser.y"
    {
	header_check |= COBC_HD_DATA_DIVISION;
  }
    break;

  case 284:

/* Line 1806 of yacc.c  */
#line 3047 "parser.y"
    {
	current_storage = CB_STORAGE_FILE;
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_FILE_SECTION;
  }
    break;

  case 287:

/* Line 1806 of yacc.c  */
#line 3061 "parser.y"
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
  }
    break;

  case 288:

/* Line 1806 of yacc.c  */
#line 3080 "parser.y"
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
  }
    break;

  case 290:

/* Line 1806 of yacc.c  */
#line 3097 "parser.y"
    {
	yyerrok;
  }
    break;

  case 291:

/* Line 1806 of yacc.c  */
#line 3104 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 292:

/* Line 1806 of yacc.c  */
#line 3108 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 295:

/* Line 1806 of yacc.c  */
#line 3119 "parser.y"
    {
	check_repeated ("EXTERNAL", SYN_CLAUSE_1);
#if	0	/* RXWRXW - Global/External */
	if (current_file->flag_global) {
		cb_error (_("File cannot have both EXTERNAL and GLOBAL clauses"));
	}
#endif
	current_file->flag_external = 1;
  }
    break;

  case 296:

/* Line 1806 of yacc.c  */
#line 3129 "parser.y"
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
  }
    break;

  case 306:

/* Line 1806 of yacc.c  */
#line 3159 "parser.y"
    {
	check_repeated ("BLOCK", SYN_CLAUSE_3);
	/* ignore */
  }
    break;

  case 310:

/* Line 1806 of yacc.c  */
#line 3172 "parser.y"
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
  }
    break;

  case 311:

/* Line 1806 of yacc.c  */
#line 3192 "parser.y"
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
  }
    break;

  case 312:

/* Line 1806 of yacc.c  */
#line 3227 "parser.y"
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
  }
    break;

  case 314:

/* Line 1806 of yacc.c  */
#line 3258 "parser.y"
    {
	current_file->record_depending = (yyvsp[(3) - (3)]);
  }
    break;

  case 315:

/* Line 1806 of yacc.c  */
#line 3264 "parser.y"
    { (yyval) = NULL; }
    break;

  case 316:

/* Line 1806 of yacc.c  */
#line 3265 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 317:

/* Line 1806 of yacc.c  */
#line 3269 "parser.y"
    { (yyval) = NULL; }
    break;

  case 318:

/* Line 1806 of yacc.c  */
#line 3270 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 319:

/* Line 1806 of yacc.c  */
#line 3278 "parser.y"
    {
	check_repeated ("LABEL", SYN_CLAUSE_5);
	cb_verify (cb_label_records_clause, "LABEL RECORDS");
  }
    break;

  case 320:

/* Line 1806 of yacc.c  */
#line 3289 "parser.y"
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6);
	cb_verify (cb_value_of_clause, "VALUE OF");
  }
    break;

  case 321:

/* Line 1806 of yacc.c  */
#line 3294 "parser.y"
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6);
	cb_verify (cb_value_of_clause, "VALUE OF");
	if (!current_file->assign) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[(5) - (5)]));
	}
  }
    break;

  case 326:

/* Line 1806 of yacc.c  */
#line 3317 "parser.y"
    {
	check_repeated ("DATA", SYN_CLAUSE_7);
	cb_verify (cb_data_records_clause, "DATA RECORDS");
  }
    break;

  case 327:

/* Line 1806 of yacc.c  */
#line 3329 "parser.y"
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
  }
    break;

  case 333:

/* Line 1806 of yacc.c  */
#line 3357 "parser.y"
    {
	current_file->latfoot = (yyvsp[(4) - (4)]);
  }
    break;

  case 334:

/* Line 1806 of yacc.c  */
#line 3364 "parser.y"
    {
	current_file->lattop = (yyvsp[(2) - (2)]);
  }
    break;

  case 335:

/* Line 1806 of yacc.c  */
#line 3371 "parser.y"
    {
	current_file->latbot = (yyvsp[(2) - (2)]);
  }
    break;

  case 336:

/* Line 1806 of yacc.c  */
#line 3380 "parser.y"
    {
	cobc_cs_check = 0;
	check_repeated ("RECORDING", SYN_CLAUSE_9);
	/* ignore */
  }
    break;

  case 337:

/* Line 1806 of yacc.c  */
#line 3392 "parser.y"
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
  }
    break;

  case 338:

/* Line 1806 of yacc.c  */
#line 3444 "parser.y"
    {
	check_repeated ("REPORT", SYN_CLAUSE_11);
	cb_warning (_("REPORT WRITER not implemented"));
	if (current_file->organization != COB_ORG_LINE_SEQUENTIAL &&
	    current_file->organization != COB_ORG_SEQUENTIAL) {
		cb_error (_("REPORT clause with wrong file type"));
	} else {
		current_file->reports = (yyvsp[(2) - (2)]);
		current_file->organization = COB_ORG_LINE_SEQUENTIAL;
	}
  }
    break;

  case 341:

/* Line 1806 of yacc.c  */
#line 3464 "parser.y"
    {
	current_report = build_report ((yyvsp[(1) - (1)]));
	current_report->file = current_file;
	CB_ADD_TO_CHAIN (CB_TREE (current_report), current_program->report_list);
	if (report_count == 0) {
		report_instance = current_report;
	}
	report_count++;
  }
    break;

  case 342:

/* Line 1806 of yacc.c  */
#line 3474 "parser.y"
    {
	current_report = build_report ((yyvsp[(2) - (2)]));
	CB_ADD_TO_CHAIN (CB_TREE (current_report), current_program->report_list);
	if (report_count == 0) {
		report_instance = current_report;
	}
	report_count++;
  }
    break;

  case 344:

/* Line 1806 of yacc.c  */
#line 3514 "parser.y"
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_WORKING_STORAGE_SECTION;
	current_storage = CB_STORAGE_WORKING;
  }
    break;

  case 345:

/* Line 1806 of yacc.c  */
#line 3520 "parser.y"
    {
	if ((yyvsp[(5) - (5)])) {
		CB_FIELD_ADD (current_program->working_storage, CB_FIELD ((yyvsp[(5) - (5)])));
	}
  }
    break;

  case 346:

/* Line 1806 of yacc.c  */
#line 3529 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 347:

/* Line 1806 of yacc.c  */
#line 3532 "parser.y"
    {
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
    break;

  case 348:

/* Line 1806 of yacc.c  */
#line 3538 "parser.y"
    {
	struct cb_field *p;

	for (p = description_field; p; p = p->sister) {
		cb_validate_field (p);
	}
	(yyval) = CB_TREE (description_field);
  }
    break;

  case 353:

/* Line 1806 of yacc.c  */
#line 3558 "parser.y"
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
  }
    break;

  case 354:

/* Line 1806 of yacc.c  */
#line 3573 "parser.y"
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
  }
    break;

  case 355:

/* Line 1806 of yacc.c  */
#line 3593 "parser.y"
    {
	/* Free tree assocated with level number */
	cobc_parse_free ((yyvsp[(1) - (3)]));
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
	current_field = cb_get_real_field ();
  }
    break;

  case 356:

/* Line 1806 of yacc.c  */
#line 3606 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 357:

/* Line 1806 of yacc.c  */
#line 3613 "parser.y"
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
    break;

  case 358:

/* Line 1806 of yacc.c  */
#line 3619 "parser.y"
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
    break;

  case 359:

/* Line 1806 of yacc.c  */
#line 3625 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	qualifier = (yyvsp[(1) - (1)]);
	non_const_word = 0;
  }
    break;

  case 360:

/* Line 1806 of yacc.c  */
#line 3634 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	qualifier = (yyvsp[(1) - (1)]);
	non_const_word = 0;
  }
    break;

  case 361:

/* Line 1806 of yacc.c  */
#line 3643 "parser.y"
    {
	(yyval)= NULL;
  }
    break;

  case 362:

/* Line 1806 of yacc.c  */
#line 3647 "parser.y"
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("GLOBAL is invalid in a user FUNCTION"));
		(yyval)= NULL;
	} else {
		(yyval) = cb_null;
	}
  }
    break;

  case 363:

/* Line 1806 of yacc.c  */
#line 3658 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 364:

/* Line 1806 of yacc.c  */
#line 3659 "parser.y"
    { (yyval) = cb_build_const_length ((yyvsp[(2) - (2)])); }
    break;

  case 365:

/* Line 1806 of yacc.c  */
#line 3660 "parser.y"
    { (yyval) = cb_build_const_length ((yyvsp[(2) - (2)])); }
    break;

  case 366:

/* Line 1806 of yacc.c  */
#line 3661 "parser.y"
    { (yyval) = cb_build_const_length ((yyvsp[(3) - (3)])); }
    break;

  case 367:

/* Line 1806 of yacc.c  */
#line 3666 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 368:

/* Line 1806 of yacc.c  */
#line 3670 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 369:

/* Line 1806 of yacc.c  */
#line 3674 "parser.y"
    {
	(yyval) = cb_int2;
  }
    break;

  case 370:

/* Line 1806 of yacc.c  */
#line 3678 "parser.y"
    {
	(yyval) = cb_int4;
  }
    break;

  case 371:

/* Line 1806 of yacc.c  */
#line 3682 "parser.y"
    {
	(yyval) = cb_int (8);
  }
    break;

  case 372:

/* Line 1806 of yacc.c  */
#line 3686 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(long));
  }
    break;

  case 373:

/* Line 1806 of yacc.c  */
#line 3690 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(void *));
  }
    break;

  case 374:

/* Line 1806 of yacc.c  */
#line 3694 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(float));
  }
    break;

  case 375:

/* Line 1806 of yacc.c  */
#line 3698 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(double));
  }
    break;

  case 376:

/* Line 1806 of yacc.c  */
#line 3702 "parser.y"
    {
	(yyval) = cb_int (4);
  }
    break;

  case 377:

/* Line 1806 of yacc.c  */
#line 3706 "parser.y"
    {
	(yyval) = cb_int (8);
  }
    break;

  case 378:

/* Line 1806 of yacc.c  */
#line 3710 "parser.y"
    {
	(yyval) = cb_int (16);
  }
    break;

  case 379:

/* Line 1806 of yacc.c  */
#line 3714 "parser.y"
    {
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
	current_field = cb_get_real_field ();
  }
    break;

  case 389:

/* Line 1806 of yacc.c  */
#line 3746 "parser.y"
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
  }
    break;

  case 390:

/* Line 1806 of yacc.c  */
#line 3772 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 391:

/* Line 1806 of yacc.c  */
#line 3776 "parser.y"
    {
	PENDING ("CONSTANT FROM clause");
	(yyval) = NULL;
  }
    break;

  case 392:

/* Line 1806 of yacc.c  */
#line 3784 "parser.y"
    {
	/* Required to check redefines */
	(yyval) = NULL;
  }
    break;

  case 393:

/* Line 1806 of yacc.c  */
#line 3790 "parser.y"
    {
	/* Required to check redefines */
	(yyval) = cb_true;
  }
    break;

  case 408:

/* Line 1806 of yacc.c  */
#line 3818 "parser.y"
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
  }
    break;

  case 409:

/* Line 1806 of yacc.c  */
#line 3842 "parser.y"
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
  }
    break;

  case 410:

/* Line 1806 of yacc.c  */
#line 3869 "parser.y"
    {
	current_field->ename = cb_to_cname (current_field->name);
  }
    break;

  case 411:

/* Line 1806 of yacc.c  */
#line 3873 "parser.y"
    {
	current_field->ename = cb_to_cname ((const char *)CB_LITERAL ((yyvsp[(2) - (2)]))->data);
  }
    break;

  case 412:

/* Line 1806 of yacc.c  */
#line 3882 "parser.y"
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
  }
    break;

  case 413:

/* Line 1806 of yacc.c  */
#line 3907 "parser.y"
    {
	check_pic_repeated ("PICTURE", SYN_CLAUSE_4);
	current_field->pic = CB_PICTURE ((yyvsp[(1) - (1)]));
  }
    break;

  case 416:

/* Line 1806 of yacc.c  */
#line 3923 "parser.y"
    {
	check_set_usage (CB_USAGE_BINARY);
  }
    break;

  case 417:

/* Line 1806 of yacc.c  */
#line 3927 "parser.y"
    {
	check_set_usage (CB_USAGE_BINARY);
  }
    break;

  case 418:

/* Line 1806 of yacc.c  */
#line 3931 "parser.y"
    {
	check_set_usage (CB_USAGE_FLOAT);
  }
    break;

  case 419:

/* Line 1806 of yacc.c  */
#line 3935 "parser.y"
    {
	check_set_usage (CB_USAGE_DOUBLE);
  }
    break;

  case 420:

/* Line 1806 of yacc.c  */
#line 3939 "parser.y"
    {
	check_set_usage (CB_USAGE_PACKED);
  }
    break;

  case 421:

/* Line 1806 of yacc.c  */
#line 3943 "parser.y"
    {
	check_set_usage (CB_USAGE_BINARY);
  }
    break;

  case 422:

/* Line 1806 of yacc.c  */
#line 3947 "parser.y"
    {
	check_set_usage (CB_USAGE_COMP_5);
  }
    break;

  case 423:

/* Line 1806 of yacc.c  */
#line 3951 "parser.y"
    {
	check_set_usage (CB_USAGE_COMP_6);
  }
    break;

  case 424:

/* Line 1806 of yacc.c  */
#line 3955 "parser.y"
    {
	check_set_usage (CB_USAGE_COMP_X);
  }
    break;

  case 425:

/* Line 1806 of yacc.c  */
#line 3959 "parser.y"
    {
	check_set_usage (CB_USAGE_DISPLAY);
  }
    break;

  case 426:

/* Line 1806 of yacc.c  */
#line 3963 "parser.y"
    {
	check_set_usage (CB_USAGE_INDEX);
  }
    break;

  case 427:

/* Line 1806 of yacc.c  */
#line 3967 "parser.y"
    {
	check_set_usage (CB_USAGE_PACKED);
  }
    break;

  case 428:

/* Line 1806 of yacc.c  */
#line 3971 "parser.y"
    {
	check_set_usage (CB_USAGE_POINTER);
	current_field->flag_is_pointer = 1;
  }
    break;

  case 429:

/* Line 1806 of yacc.c  */
#line 3976 "parser.y"
    {
	check_set_usage (CB_USAGE_PROGRAM_POINTER);
	current_field->flag_is_pointer = 1;
  }
    break;

  case 430:

/* Line 1806 of yacc.c  */
#line 3981 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
    break;

  case 431:

/* Line 1806 of yacc.c  */
#line 3985 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
    break;

  case 432:

/* Line 1806 of yacc.c  */
#line 3989 "parser.y"
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_SIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_SIGNED_LONG);
	}
  }
    break;

  case 433:

/* Line 1806 of yacc.c  */
#line 3997 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
    break;

  case 434:

/* Line 1806 of yacc.c  */
#line 4001 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
    break;

  case 435:

/* Line 1806 of yacc.c  */
#line 4005 "parser.y"
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_UNSIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_UNSIGNED_LONG);
	}
  }
    break;

  case 436:

/* Line 1806 of yacc.c  */
#line 4013 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_CHAR);
  }
    break;

  case 437:

/* Line 1806 of yacc.c  */
#line 4017 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_CHAR);
  }
    break;

  case 438:

/* Line 1806 of yacc.c  */
#line 4021 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
    break;

  case 439:

/* Line 1806 of yacc.c  */
#line 4025 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
    break;

  case 440:

/* Line 1806 of yacc.c  */
#line 4029 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
    break;

  case 441:

/* Line 1806 of yacc.c  */
#line 4033 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
    break;

  case 442:

/* Line 1806 of yacc.c  */
#line 4037 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_LONG);
  }
    break;

  case 443:

/* Line 1806 of yacc.c  */
#line 4041 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_LONG);
  }
    break;

  case 444:

/* Line 1806 of yacc.c  */
#line 4045 "parser.y"
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_SIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_SIGNED_LONG);
	}
  }
    break;

  case 445:

/* Line 1806 of yacc.c  */
#line 4053 "parser.y"
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_UNSIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_UNSIGNED_LONG);
	}
  }
    break;

  case 446:

/* Line 1806 of yacc.c  */
#line 4061 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_BIN32);
  }
    break;

  case 447:

/* Line 1806 of yacc.c  */
#line 4065 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_BIN64);
  }
    break;

  case 448:

/* Line 1806 of yacc.c  */
#line 4069 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_BIN128);
  }
    break;

  case 449:

/* Line 1806 of yacc.c  */
#line 4073 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_DEC64);
  }
    break;

  case 450:

/* Line 1806 of yacc.c  */
#line 4077 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_DEC128);
  }
    break;

  case 451:

/* Line 1806 of yacc.c  */
#line 4081 "parser.y"
    {
	check_pic_repeated ("USAGE", SYN_CLAUSE_5);
	PENDING ("USAGE NATIONAL");
  }
    break;

  case 456:

/* Line 1806 of yacc.c  */
#line 4101 "parser.y"
    {
	check_pic_repeated ("SIGN", SYN_CLAUSE_6);
	current_field->flag_sign_separate = ((yyvsp[(3) - (3)]) ? 1 : 0);
	current_field->flag_sign_leading  = 1;
  }
    break;

  case 457:

/* Line 1806 of yacc.c  */
#line 4107 "parser.y"
    {
	check_pic_repeated ("SIGN", SYN_CLAUSE_6);
	current_field->flag_sign_separate = ((yyvsp[(3) - (3)]) ? 1 : 0);
	current_field->flag_sign_leading  = 0;
  }
    break;

  case 458:

/* Line 1806 of yacc.c  */
#line 4120 "parser.y"
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
  }
    break;

  case 460:

/* Line 1806 of yacc.c  */
#line 4138 "parser.y"
    {
	current_field->step_count = cb_get_int ((yyvsp[(2) - (2)]));
  }
    break;

  case 461:

/* Line 1806 of yacc.c  */
#line 4148 "parser.y"
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
  }
    break;

  case 462:

/* Line 1806 of yacc.c  */
#line 4169 "parser.y"
    {
	current_field->occurs_min = (yyvsp[(4) - (8)]) ? cb_get_int ((yyvsp[(4) - (8)])) : 0;
	PENDING("OCCURS with DYNAMIC capacity");
	current_field->occurs_max = (yyvsp[(5) - (8)]) ? cb_get_int ((yyvsp[(5) - (8)])) : 0;
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
  }
    break;

  case 463:

/* Line 1806 of yacc.c  */
#line 4188 "parser.y"
    { (yyval) = NULL; }
    break;

  case 464:

/* Line 1806 of yacc.c  */
#line 4189 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 465:

/* Line 1806 of yacc.c  */
#line 4193 "parser.y"
    { (yyval) = NULL; }
    break;

  case 466:

/* Line 1806 of yacc.c  */
#line 4194 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 468:

/* Line 1806 of yacc.c  */
#line 4199 "parser.y"
    {
	current_field->depending = (yyvsp[(3) - (3)]);
  }
    break;

  case 470:

/* Line 1806 of yacc.c  */
#line 4206 "parser.y"
    {
	(yyval) = cb_build_index ((yyvsp[(3) - (3)]), cb_zero, 0, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
    break;

  case 472:

/* Line 1806 of yacc.c  */
#line 4214 "parser.y"
    {
	/* current_field->initialized = 1; */
  }
    break;

  case 473:

/* Line 1806 of yacc.c  */
#line 4221 "parser.y"
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
  }
    break;

  case 474:

/* Line 1806 of yacc.c  */
#line 4244 "parser.y"
    { (yyval) = NULL; }
    break;

  case 475:

/* Line 1806 of yacc.c  */
#line 4247 "parser.y"
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
  }
    break;

  case 476:

/* Line 1806 of yacc.c  */
#line 4262 "parser.y"
    { (yyval) = cb_int (COB_ASCENDING); }
    break;

  case 477:

/* Line 1806 of yacc.c  */
#line 4263 "parser.y"
    { (yyval) = cb_int (COB_DESCENDING); }
    break;

  case 479:

/* Line 1806 of yacc.c  */
#line 4268 "parser.y"
    {
	current_field->index_list = (yyvsp[(3) - (3)]);
  }
    break;

  case 480:

/* Line 1806 of yacc.c  */
#line 4274 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 481:

/* Line 1806 of yacc.c  */
#line 4276 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 482:

/* Line 1806 of yacc.c  */
#line 4281 "parser.y"
    {
	(yyval) = cb_build_index ((yyvsp[(1) - (1)]), cb_int1, 1U, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
    break;

  case 483:

/* Line 1806 of yacc.c  */
#line 4292 "parser.y"
    {
	check_pic_repeated ("JUSTIFIED", SYN_CLAUSE_8);
	current_field->flag_justified = 1;
  }
    break;

  case 484:

/* Line 1806 of yacc.c  */
#line 4303 "parser.y"
    {
	check_pic_repeated ("SYNCHRONIZED", SYN_CLAUSE_9);
	current_field->flag_synchronized = 1;
  }
    break;

  case 485:

/* Line 1806 of yacc.c  */
#line 4314 "parser.y"
    {
	check_pic_repeated ("BLANK", SYN_CLAUSE_10);
	current_field->flag_blank_zero = 1;
  }
    break;

  case 486:

/* Line 1806 of yacc.c  */
#line 4325 "parser.y"
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
  }
    break;

  case 487:

/* Line 1806 of yacc.c  */
#line 4353 "parser.y"
    {
	check_pic_repeated ("VALUE", SYN_CLAUSE_12);
	current_field->values = (yyvsp[(3) - (3)]);
  }
    break;

  case 489:

/* Line 1806 of yacc.c  */
#line 4361 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 490:

/* Line 1806 of yacc.c  */
#line 4362 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 491:

/* Line 1806 of yacc.c  */
#line 4366 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 492:

/* Line 1806 of yacc.c  */
#line 4367 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 494:

/* Line 1806 of yacc.c  */
#line 4372 "parser.y"
    {
	if (current_field->level != 88) {
		cb_error (_("FALSE clause only allowed for 88 level"));
	}
	current_field->false_88 = CB_LIST_INIT ((yyvsp[(4) - (4)]));
  }
    break;

  case 495:

/* Line 1806 of yacc.c  */
#line 4385 "parser.y"
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
  }
    break;

  case 496:

/* Line 1806 of yacc.c  */
#line 4398 "parser.y"
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
  }
    break;

  case 497:

/* Line 1806 of yacc.c  */
#line 4419 "parser.y"
    {
	check_pic_repeated ("ANY", SYN_CLAUSE_14);
	if (current_field->flag_item_based) {
		cb_error (_("BASED and ANY clause are mutually exclusive"));
	} else {
		current_field->flag_any_length = 1;
	}
  }
    break;

  case 498:

/* Line 1806 of yacc.c  */
#line 4428 "parser.y"
    {
	check_pic_repeated ("ANY", SYN_CLAUSE_14);
	if (current_field->flag_item_based) {
		cb_error (_("BASED and ANY clause are mutually exclusive"));
	} else {
		current_field->flag_any_length = 1;
		current_field->flag_any_numeric = 1;
	}
  }
    break;

  case 500:

/* Line 1806 of yacc.c  */
#line 4443 "parser.y"
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LOCAL_STORAGE_SECTION;
	current_storage = CB_STORAGE_LOCAL;
	if (current_program->nested_level) {
		cb_error (_("LOCAL-STORAGE not allowed in nested programs"));
	}
  }
    break;

  case 501:

/* Line 1806 of yacc.c  */
#line 4452 "parser.y"
    {
	if ((yyvsp[(5) - (5)])) {
		current_program->local_storage = CB_FIELD ((yyvsp[(5) - (5)]));
	}
  }
    break;

  case 503:

/* Line 1806 of yacc.c  */
#line 4464 "parser.y"
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LINKAGE_SECTION;
	current_storage = CB_STORAGE_LINKAGE;
  }
    break;

  case 504:

/* Line 1806 of yacc.c  */
#line 4470 "parser.y"
    {
	if ((yyvsp[(5) - (5)])) {
		current_program->linkage_storage = CB_FIELD ((yyvsp[(5) - (5)]));
	}
  }
    break;

  case 506:

/* Line 1806 of yacc.c  */
#line 4481 "parser.y"
    {
	cb_warning (_("REPORT SECTION not implemented"));
	current_storage = CB_STORAGE_REPORT;
	cb_clear_real_field ();
  }
    break;

  case 510:

/* Line 1806 of yacc.c  */
#line 4497 "parser.y"
    {
	if (CB_INVALID_TREE ((yyvsp[(2) - (2)]))) {
		YYERROR;
	} else {
		current_report = CB_REPORT (cb_ref ((yyvsp[(2) - (2)])));
	}
	check_duplicate = 0;
  }
    break;

  case 514:

/* Line 1806 of yacc.c  */
#line 4512 "parser.y"
    {
	yyerrok;
  }
    break;

  case 515:

/* Line 1806 of yacc.c  */
#line 4519 "parser.y"
    {
	check_repeated ("GLOBAL", SYN_CLAUSE_1);
	cb_error (_("GLOBAL is not allowed with RD"));
  }
    break;

  case 516:

/* Line 1806 of yacc.c  */
#line 4524 "parser.y"
    {
	check_repeated ("CODE", SYN_CLAUSE_2);
  }
    break;

  case 519:

/* Line 1806 of yacc.c  */
#line 4535 "parser.y"
    {
	check_repeated ("CONTROL", SYN_CLAUSE_3);
  }
    break;

  case 523:

/* Line 1806 of yacc.c  */
#line 4554 "parser.y"
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
	}
	if (!current_report->last_detail && !current_report->footing) {
		current_report->last_detail = current_report->lines;
		current_report->footing = current_report->lines;
	} else if (!current_report->last_detail) {
		current_report->last_detail = current_report->footing;
	} else if (!current_report->footing) {
		current_report->footing = current_report->last_detail;
	}
	if (current_report->heading > current_report->first_detail ||
	    current_report->first_detail > current_report->last_control ||
	    current_report->last_control > current_report->last_detail ||
	    current_report->last_detail > current_report->footing) {
		cb_error (_("Invalid PAGE clause"));
	}
  }
    break;

  case 524:

/* Line 1806 of yacc.c  */
#line 4590 "parser.y"
    {
	current_report->lines = cb_get_int ((yyvsp[(1) - (1)]));
  }
    break;

  case 525:

/* Line 1806 of yacc.c  */
#line 4594 "parser.y"
    {
	current_report->lines = cb_get_int ((yyvsp[(1) - (4)]));
	current_report->columns = cb_get_int ((yyvsp[(3) - (4)]));
  }
    break;

  case 526:

/* Line 1806 of yacc.c  */
#line 4599 "parser.y"
    {
	current_report->lines = cb_get_int ((yyvsp[(1) - (2)]));
  }
    break;

  case 534:

/* Line 1806 of yacc.c  */
#line 4619 "parser.y"
    {
	current_report->heading = cb_get_int ((yyvsp[(3) - (3)]));
  }
    break;

  case 535:

/* Line 1806 of yacc.c  */
#line 4626 "parser.y"
    {
	current_report->first_detail = cb_get_int ((yyvsp[(4) - (4)]));
  }
    break;

  case 536:

/* Line 1806 of yacc.c  */
#line 4633 "parser.y"
    {
	current_report->last_control = cb_get_int ((yyvsp[(4) - (4)]));
  }
    break;

  case 537:

/* Line 1806 of yacc.c  */
#line 4640 "parser.y"
    {
	current_report->last_detail = cb_get_int ((yyvsp[(4) - (4)]));
  }
    break;

  case 538:

/* Line 1806 of yacc.c  */
#line 4647 "parser.y"
    {
	current_report->footing = cb_get_int ((yyvsp[(3) - (3)]));
  }
    break;

  case 541:

/* Line 1806 of yacc.c  */
#line 4658 "parser.y"
    {
	check_pic_duplicate = 0;
  }
    break;

  case 561:

/* Line 1806 of yacc.c  */
#line 4689 "parser.y"
    {
	check_pic_repeated ("TYPE", SYN_CLAUSE_16);
  }
    break;

  case 574:

/* Line 1806 of yacc.c  */
#line 4715 "parser.y"
    {
	check_pic_repeated ("NEXT GROUP", SYN_CLAUSE_17);
  }
    break;

  case 575:

/* Line 1806 of yacc.c  */
#line 4722 "parser.y"
    {
	check_pic_repeated ("SUM", SYN_CLAUSE_19);
  }
    break;

  case 580:

/* Line 1806 of yacc.c  */
#line 4738 "parser.y"
    {
	check_pic_repeated ("PRESENT", SYN_CLAUSE_20);
  }
    break;

  case 582:

/* Line 1806 of yacc.c  */
#line 4749 "parser.y"
    {
	check_pic_repeated ("LINE", SYN_CLAUSE_21);
  }
    break;

  case 585:

/* Line 1806 of yacc.c  */
#line 4761 "parser.y"
    {
	check_pic_repeated ("COLUMN", SYN_CLAUSE_18);
  }
    break;

  case 597:

/* Line 1806 of yacc.c  */
#line 4794 "parser.y"
    {
	check_pic_repeated ("SOURCE", SYN_CLAUSE_22);
  }
    break;

  case 598:

/* Line 1806 of yacc.c  */
#line 4801 "parser.y"
    {
	check_pic_repeated ("GROUP", SYN_CLAUSE_23);
  }
    break;

  case 599:

/* Line 1806 of yacc.c  */
#line 4808 "parser.y"
    {
	check_pic_repeated ("USAGE", SYN_CLAUSE_24);
  }
    break;

  case 601:

/* Line 1806 of yacc.c  */
#line 4817 "parser.y"
    {
	current_storage = CB_STORAGE_SCREEN;
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
    break;

  case 602:

/* Line 1806 of yacc.c  */
#line 4824 "parser.y"
    {
	struct cb_field *p;

	if (description_field) {
		for (p = description_field; p; p = p->sister) {
			cb_validate_field (p);
		}
		current_program->screen_storage = description_field;
		current_program->flag_screen = 1;
	}
  }
    break;

  case 608:

/* Line 1806 of yacc.c  */
#line 4850 "parser.y"
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
  }
    break;

  case 609:

/* Line 1806 of yacc.c  */
#line 4881 "parser.y"
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
  }
    break;

  case 610:

/* Line 1806 of yacc.c  */
#line 4907 "parser.y"
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
  }
    break;

  case 613:

/* Line 1806 of yacc.c  */
#line 4930 "parser.y"
    {
	check_screen_attr ("BLANK LINE", COB_SCREEN_BLANK_LINE);
  }
    break;

  case 614:

/* Line 1806 of yacc.c  */
#line 4934 "parser.y"
    {
	check_screen_attr ("BLANK SCREEN", COB_SCREEN_BLANK_SCREEN);
  }
    break;

  case 615:

/* Line 1806 of yacc.c  */
#line 4938 "parser.y"
    {
	check_screen_attr ("BELL", COB_SCREEN_BELL);
  }
    break;

  case 616:

/* Line 1806 of yacc.c  */
#line 4942 "parser.y"
    {
	check_screen_attr ("BLINK", COB_SCREEN_BLINK);
  }
    break;

  case 617:

/* Line 1806 of yacc.c  */
#line 4946 "parser.y"
    {
	check_screen_attr ("ERASE EOL", COB_SCREEN_ERASE_EOL);
  }
    break;

  case 618:

/* Line 1806 of yacc.c  */
#line 4950 "parser.y"
    {
	check_screen_attr ("ERASE EOS", COB_SCREEN_ERASE_EOS);
  }
    break;

  case 619:

/* Line 1806 of yacc.c  */
#line 4954 "parser.y"
    {
	check_screen_attr ("HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 620:

/* Line 1806 of yacc.c  */
#line 4958 "parser.y"
    {
	check_screen_attr ("LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
    break;

  case 621:

/* Line 1806 of yacc.c  */
#line 4962 "parser.y"
    {
	check_screen_attr ("REVERSE-VIDEO", COB_SCREEN_REVERSE);
  }
    break;

  case 622:

/* Line 1806 of yacc.c  */
#line 4966 "parser.y"
    {
	check_screen_attr ("UNDERLINE", COB_SCREEN_UNDERLINE);
  }
    break;

  case 623:

/* Line 1806 of yacc.c  */
#line 4970 "parser.y"
    {
	check_screen_attr ("OVERLINE", COB_SCREEN_OVERLINE);
  }
    break;

  case 624:

/* Line 1806 of yacc.c  */
#line 4974 "parser.y"
    {
	check_screen_attr ("LEFTLINE", COB_SCREEN_LEFTLINE);
  }
    break;

  case 625:

/* Line 1806 of yacc.c  */
#line 4978 "parser.y"
    {
	check_screen_attr ("AUTO", COB_SCREEN_AUTO);
  }
    break;

  case 626:

/* Line 1806 of yacc.c  */
#line 4982 "parser.y"
    {
	check_screen_attr ("SECURE", COB_SCREEN_SECURE);
  }
    break;

  case 627:

/* Line 1806 of yacc.c  */
#line 4986 "parser.y"
    {
	check_screen_attr ("REQUIRED", COB_SCREEN_REQUIRED);
  }
    break;

  case 628:

/* Line 1806 of yacc.c  */
#line 4990 "parser.y"
    {
	check_screen_attr ("FULL", COB_SCREEN_FULL);
  }
    break;

  case 629:

/* Line 1806 of yacc.c  */
#line 4994 "parser.y"
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
	current_field->screen_prompt = (yyvsp[(4) - (4)]);
  }
    break;

  case 630:

/* Line 1806 of yacc.c  */
#line 4999 "parser.y"
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
  }
    break;

  case 631:

/* Line 1806 of yacc.c  */
#line 5003 "parser.y"
    {
	check_screen_attr ("INITIAL", COB_SCREEN_INITIAL);
  }
    break;

  case 632:

/* Line 1806 of yacc.c  */
#line 5007 "parser.y"
    {
	check_pic_repeated ("LINE", SYN_CLAUSE_16);
	current_field->screen_line = (yyvsp[(5) - (5)]);
  }
    break;

  case 633:

/* Line 1806 of yacc.c  */
#line 5012 "parser.y"
    {
	check_pic_repeated ("COLUMN", SYN_CLAUSE_17);
	current_field->screen_column = (yyvsp[(5) - (5)]);
  }
    break;

  case 634:

/* Line 1806 of yacc.c  */
#line 5017 "parser.y"
    {
	check_pic_repeated ("FOREGROUND-COLOR", SYN_CLAUSE_18);
	current_field->screen_foreg = (yyvsp[(3) - (3)]);
  }
    break;

  case 635:

/* Line 1806 of yacc.c  */
#line 5022 "parser.y"
    {
	check_pic_repeated ("BACKGROUND-COLOR", SYN_CLAUSE_19);
	current_field->screen_backg = (yyvsp[(3) - (3)]);
  }
    break;

  case 644:

/* Line 1806 of yacc.c  */
#line 5035 "parser.y"
    {
	check_pic_repeated ("USING", SYN_CLAUSE_20);
	current_field->screen_from = (yyvsp[(2) - (2)]);
	current_field->screen_to = (yyvsp[(2) - (2)]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
    break;

  case 645:

/* Line 1806 of yacc.c  */
#line 5042 "parser.y"
    {
	check_pic_repeated ("FROM", SYN_CLAUSE_21);
	current_field->screen_from = (yyvsp[(2) - (2)]);
  }
    break;

  case 646:

/* Line 1806 of yacc.c  */
#line 5047 "parser.y"
    {
	check_pic_repeated ("TO", SYN_CLAUSE_22);
	current_field->screen_to = (yyvsp[(2) - (2)]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
    break;

  case 651:

/* Line 1806 of yacc.c  */
#line 5066 "parser.y"
    {
	/* Nothing */
  }
    break;

  case 652:

/* Line 1806 of yacc.c  */
#line 5070 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_LINE_PLUS;
  }
    break;

  case 653:

/* Line 1806 of yacc.c  */
#line 5074 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_LINE_MINUS;
  }
    break;

  case 654:

/* Line 1806 of yacc.c  */
#line 5081 "parser.y"
    {
	/* Nothing */
  }
    break;

  case 655:

/* Line 1806 of yacc.c  */
#line 5085 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_PLUS;
  }
    break;

  case 656:

/* Line 1806 of yacc.c  */
#line 5089 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_MINUS;
  }
    break;

  case 657:

/* Line 1806 of yacc.c  */
#line 5097 "parser.y"
    {
	check_pic_repeated ("OCCURS", SYN_CLAUSE_23);
	current_field->occurs_max = cb_get_int ((yyvsp[(2) - (3)]));
	current_field->occurs_min = current_field->occurs_max;
	current_field->indexes++;
	current_field->flag_occurs = 1;
  }
    break;

  case 658:

/* Line 1806 of yacc.c  */
#line 5108 "parser.y"
    {
	cb_error (_("GLOBAL is not allowed with screen items"));
  }
    break;

  case 660:

/* Line 1806 of yacc.c  */
#line 5117 "parser.y"
    {
	current_section = NULL;
	current_paragraph = NULL;
	check_pic_duplicate = 0;
	check_duplicate = 0;
	cobc_in_procedure = 1U;
	cb_set_system_names ();
	header_check |= COBC_HD_PROCEDURE_DIVISION;
  }
    break;

  case 661:

/* Line 1806 of yacc.c  */
#line 5127 "parser.y"
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
  }
    break;

  case 662:

/* Line 1806 of yacc.c  */
#line 5139 "parser.y"
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
  }
    break;

  case 663:

/* Line 1806 of yacc.c  */
#line 5154 "parser.y"
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
  }
    break;

  case 665:

/* Line 1806 of yacc.c  */
#line 5187 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 666:

/* Line 1806 of yacc.c  */
#line 5191 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
    break;

  case 667:

/* Line 1806 of yacc.c  */
#line 5196 "parser.y"
    {
	if (cb_list_length ((yyvsp[(3) - (3)])) > COB_MAX_FIELD_PARAMS) {
		cb_error (_("Number of parameters exceeds maximum %d"),
			  COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 668:

/* Line 1806 of yacc.c  */
#line 5204 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("CHAINING invalid in user FUNCTION"));
	} else {
		current_program->flag_chained = 1;
	}
  }
    break;

  case 669:

/* Line 1806 of yacc.c  */
#line 5213 "parser.y"
    {
	if (cb_list_length ((yyvsp[(3) - (3)])) > COB_MAX_FIELD_PARAMS) {
		cb_error (_("Number of parameters exceeds maximum %d"),
			  COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 670:

/* Line 1806 of yacc.c  */
#line 5223 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 671:

/* Line 1806 of yacc.c  */
#line 5225 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 672:

/* Line 1806 of yacc.c  */
#line 5230 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR (cb_int (call_mode), cb_build_identifier ((yyvsp[(4) - (4)]), 0));
	CB_SIZES ((yyval)) = size_mode;
  }
    break;

  case 674:

/* Line 1806 of yacc.c  */
#line 5239 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
    break;

  case 675:

/* Line 1806 of yacc.c  */
#line 5243 "parser.y"
    {
	if (current_program->flag_chained) {
		cb_error (_("BY VALUE not allowed in CHAINED program"));
	} else {
		call_mode = CB_CALL_BY_VALUE;
	}
  }
    break;

  case 677:

/* Line 1806 of yacc.c  */
#line 5255 "parser.y"
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO;
	}
  }
    break;

  case 678:

/* Line 1806 of yacc.c  */
#line 5263 "parser.y"
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_4;
	}
  }
    break;

  case 679:

/* Line 1806 of yacc.c  */
#line 5271 "parser.y"
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO | CB_SIZE_UNSIGNED;
	}
  }
    break;

  case 680:

/* Line 1806 of yacc.c  */
#line 5279 "parser.y"
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
  }
    break;

  case 681:

/* Line 1806 of yacc.c  */
#line 5308 "parser.y"
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
  }
    break;

  case 683:

/* Line 1806 of yacc.c  */
#line 5341 "parser.y"
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error (_("OPTIONAL only allowed for BY REFERENCE items"));
	}
  }
    break;

  case 684:

/* Line 1806 of yacc.c  */
#line 5350 "parser.y"
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("RETURNING clause is required for a FUNCTION"));
	}
  }
    break;

  case 685:

/* Line 1806 of yacc.c  */
#line 5356 "parser.y"
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
  }
    break;

  case 687:

/* Line 1806 of yacc.c  */
#line 5384 "parser.y"
    {
	in_declaratives = 1;
	emit_statement (cb_build_comment ("DECLARATIVES"));
  }
    break;

  case 688:

/* Line 1806 of yacc.c  */
#line 5390 "parser.y"
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
	check_unreached = 0;
  }
    break;

  case 693:

/* Line 1806 of yacc.c  */
#line 5428 "parser.y"
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
  }
    break;

  case 695:

/* Line 1806 of yacc.c  */
#line 5446 "parser.y"
    {
	/* check_unreached = 0; */
  }
    break;

  case 696:

/* Line 1806 of yacc.c  */
#line 5456 "parser.y"
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
  }
    break;

  case 697:

/* Line 1806 of yacc.c  */
#line 5500 "parser.y"
    {
	emit_statement (CB_TREE (current_section));
  }
    break;

  case 700:

/* Line 1806 of yacc.c  */
#line 5511 "parser.y"
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
  }
    break;

  case 701:

/* Line 1806 of yacc.c  */
#line 5559 "parser.y"
    {
	non_const_word = 0;
	check_unreached = 0;
	if (cb_build_section_name ((yyvsp[(1) - (1)]), 0) != cb_error_node) {
		cb_error_x ((yyvsp[(1) - (1)]), _("Unknown statement '%s'"), CB_NAME ((yyvsp[(1) - (1)])));
	}
	YYERROR;
  }
    break;

  case 702:

/* Line 1806 of yacc.c  */
#line 5571 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 703:

/* Line 1806 of yacc.c  */
#line 5575 "parser.y"
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
  }
    break;

  case 704:

/* Line 1806 of yacc.c  */
#line 5593 "parser.y"
    {
	(yyval) = current_program->exec_list;
	current_program->exec_list = NULL;
	check_unreached = 0;
  }
    break;

  case 705:

/* Line 1806 of yacc.c  */
#line 5598 "parser.y"
    {
	(yyval) = CB_TREE (current_statement);
	current_statement = NULL;
  }
    break;

  case 706:

/* Line 1806 of yacc.c  */
#line 5603 "parser.y"
    {
	(yyval) = cb_list_reverse (current_program->exec_list);
	current_program->exec_list = (yyvsp[(1) - (3)]);
	current_statement = CB_STATEMENT ((yyvsp[(2) - (3)]));
  }
    break;

  case 707:

/* Line 1806 of yacc.c  */
#line 5611 "parser.y"
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
  }
    break;

  case 708:

/* Line 1806 of yacc.c  */
#line 5638 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 709:

/* Line 1806 of yacc.c  */
#line 5642 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 759:

/* Line 1806 of yacc.c  */
#line 5698 "parser.y"
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
  }
    break;

  case 760:

/* Line 1806 of yacc.c  */
#line 5712 "parser.y"
    {
	yyerrok;
	cobc_cs_check = 0;
  }
    break;

  case 761:

/* Line 1806 of yacc.c  */
#line 5723 "parser.y"
    {
	begin_statement ("ACCEPT", TERM_ACCEPT);
	if (cb_accept_update) {
		check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPDATE);
	}
	if (cb_accept_auto) {
		check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_AUTO);
	}

  }
    break;

  case 763:

/* Line 1806 of yacc.c  */
#line 5740 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept ((yyvsp[(1) - (6)]), (yyvsp[(2) - (6)]), current_statement->attr_ptr);
  }
    break;

  case 764:

/* Line 1806 of yacc.c  */
#line 5745 "parser.y"
    {
	cb_emit_accept_line_or_col ((yyvsp[(1) - (3)]), 0);
  }
    break;

  case 765:

/* Line 1806 of yacc.c  */
#line 5749 "parser.y"
    {
	cb_emit_accept_line_or_col ((yyvsp[(1) - (3)]), 1);
  }
    break;

  case 766:

/* Line 1806 of yacc.c  */
#line 5753 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_date_yyyymmdd ((yyvsp[(1) - (4)]));
  }
    break;

  case 767:

/* Line 1806 of yacc.c  */
#line 5758 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_date ((yyvsp[(1) - (3)]));
  }
    break;

  case 768:

/* Line 1806 of yacc.c  */
#line 5763 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_day_yyyyddd ((yyvsp[(1) - (4)]));
  }
    break;

  case 769:

/* Line 1806 of yacc.c  */
#line 5768 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_day ((yyvsp[(1) - (3)]));
  }
    break;

  case 770:

/* Line 1806 of yacc.c  */
#line 5773 "parser.y"
    {
	cb_emit_accept_day_of_week ((yyvsp[(1) - (3)]));
  }
    break;

  case 771:

/* Line 1806 of yacc.c  */
#line 5777 "parser.y"
    {
	cb_emit_accept_escape_key ((yyvsp[(1) - (4)]));
  }
    break;

  case 772:

/* Line 1806 of yacc.c  */
#line 5781 "parser.y"
    {
	cb_emit_accept_exception_status ((yyvsp[(1) - (4)]));
  }
    break;

  case 773:

/* Line 1806 of yacc.c  */
#line 5785 "parser.y"
    {
	cb_emit_accept_time ((yyvsp[(1) - (3)]));
  }
    break;

  case 774:

/* Line 1806 of yacc.c  */
#line 5789 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_user_name ((yyvsp[(1) - (4)]));
  }
    break;

  case 775:

/* Line 1806 of yacc.c  */
#line 5794 "parser.y"
    {
	cb_emit_accept_command_line ((yyvsp[(1) - (3)]));
  }
    break;

  case 776:

/* Line 1806 of yacc.c  */
#line 5798 "parser.y"
    {
	cb_emit_accept_environment ((yyvsp[(1) - (4)]));
  }
    break;

  case 777:

/* Line 1806 of yacc.c  */
#line 5802 "parser.y"
    {
	cb_emit_get_environment ((yyvsp[(4) - (5)]), (yyvsp[(1) - (5)]));
  }
    break;

  case 778:

/* Line 1806 of yacc.c  */
#line 5806 "parser.y"
    {
	cb_emit_accept_arg_number ((yyvsp[(1) - (3)]));
  }
    break;

  case 779:

/* Line 1806 of yacc.c  */
#line 5810 "parser.y"
    {
	cb_emit_accept_arg_value ((yyvsp[(1) - (4)]));
  }
    break;

  case 780:

/* Line 1806 of yacc.c  */
#line 5814 "parser.y"
    {
	cb_emit_accept_mnemonic ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 781:

/* Line 1806 of yacc.c  */
#line 5818 "parser.y"
    {
	cb_emit_accept_name ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 783:

/* Line 1806 of yacc.c  */
#line 5826 "parser.y"
    {
	(yyval) = cb_null;
  }
    break;

  case 786:

/* Line 1806 of yacc.c  */
#line 5837 "parser.y"
    { (yyval) = NULL; }
    break;

  case 787:

/* Line 1806 of yacc.c  */
#line 5838 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 788:

/* Line 1806 of yacc.c  */
#line 5842 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 789:

/* Line 1806 of yacc.c  */
#line 5843 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(3) - (3)]), (yyvsp[(2) - (3)])); }
    break;

  case 790:

/* Line 1806 of yacc.c  */
#line 5844 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (2)]), cb_int0); }
    break;

  case 791:

/* Line 1806 of yacc.c  */
#line 5845 "parser.y"
    { (yyval) = CB_BUILD_PAIR (cb_int0, (yyvsp[(2) - (2)])); }
    break;

  case 792:

/* Line 1806 of yacc.c  */
#line 5846 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 793:

/* Line 1806 of yacc.c  */
#line 5850 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 794:

/* Line 1806 of yacc.c  */
#line 5854 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 795:

/* Line 1806 of yacc.c  */
#line 5855 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 799:

/* Line 1806 of yacc.c  */
#line 5864 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 804:

/* Line 1806 of yacc.c  */
#line 5880 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_AUTO);
  }
    break;

  case 805:

/* Line 1806 of yacc.c  */
#line 5884 "parser.y"
    {
	if (cb_accept_auto) {
		remove_attrib (COB_SCREEN_AUTO);
	}
  }
    break;

  case 806:

/* Line 1806 of yacc.c  */
#line 5890 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
    break;

  case 807:

/* Line 1806 of yacc.c  */
#line 5894 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
    break;

  case 808:

/* Line 1806 of yacc.c  */
#line 5898 "parser.y"
    {
	cb_warning (_("Ignoring CONVERSION"));
  }
    break;

  case 809:

/* Line 1806 of yacc.c  */
#line 5902 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_FULL);
  }
    break;

  case 810:

/* Line 1806 of yacc.c  */
#line 5906 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 811:

/* Line 1806 of yacc.c  */
#line 5910 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LEFTLINE);
  }
    break;

  case 812:

/* Line 1806 of yacc.c  */
#line 5914 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWER);
  }
    break;

  case 813:

/* Line 1806 of yacc.c  */
#line 5918 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWLIGHT);
  }
    break;

  case 814:

/* Line 1806 of yacc.c  */
#line 5922 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_NO_ECHO);
  }
    break;

  case 815:

/* Line 1806 of yacc.c  */
#line 5926 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
    break;

  case 816:

/* Line 1806 of yacc.c  */
#line 5930 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, (yyvsp[(4) - (4)]), COB_SCREEN_PROMPT);
  }
    break;

  case 817:

/* Line 1806 of yacc.c  */
#line 5934 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_PROMPT);
  }
    break;

  case 818:

/* Line 1806 of yacc.c  */
#line 5938 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REQUIRED);
  }
    break;

  case 819:

/* Line 1806 of yacc.c  */
#line 5942 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
    break;

  case 820:

/* Line 1806 of yacc.c  */
#line 5946 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_SECURE);
  }
    break;

  case 821:

/* Line 1806 of yacc.c  */
#line 5950 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
    break;

  case 822:

/* Line 1806 of yacc.c  */
#line 5954 "parser.y"
    {
	if (cb_accept_update) {
		remove_attrib (COB_SCREEN_UPDATE);
	}
  }
    break;

  case 823:

/* Line 1806 of yacc.c  */
#line 5960 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPDATE);
  }
    break;

  case 824:

/* Line 1806 of yacc.c  */
#line 5964 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPPER);
  }
    break;

  case 825:

/* Line 1806 of yacc.c  */
#line 5968 "parser.y"
    {
	check_attribs ((yyvsp[(3) - (3)]), NULL, NULL, NULL, NULL, 0);
  }
    break;

  case 826:

/* Line 1806 of yacc.c  */
#line 5972 "parser.y"
    {
	check_attribs (NULL, (yyvsp[(3) - (3)]), NULL, NULL, NULL, 0);
  }
    break;

  case 827:

/* Line 1806 of yacc.c  */
#line 5976 "parser.y"
    {
	check_attribs (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, 0);
  }
    break;

  case 828:

/* Line 1806 of yacc.c  */
#line 5980 "parser.y"
    {
	check_attribs (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
    break;

  case 829:

/* Line 1806 of yacc.c  */
#line 5984 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, (yyvsp[(3) - (3)]), NULL, 0);
  }
    break;

  case 832:

/* Line 1806 of yacc.c  */
#line 5996 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ACCEPT);
  }
    break;

  case 833:

/* Line 1806 of yacc.c  */
#line 6000 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), ACCEPT);
# if 0 /* activate only for debugging purposes for attribs */
	if (current_statement->attr_ptr) {
		printBits (current_statement->attr_ptr->dispattrs);
	} else {
		fprintf(stderr, "No Attribs\n");
	}
#endif
  }
    break;

  case 834:

/* Line 1806 of yacc.c  */
#line 6017 "parser.y"
    {
	begin_statement ("ADD", TERM_ADD);
  }
    break;

  case 836:

/* Line 1806 of yacc.c  */
#line 6026 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '+', cb_build_binary_list ((yyvsp[(1) - (4)]), '+'));
  }
    break;

  case 837:

/* Line 1806 of yacc.c  */
#line 6030 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(4) - (5)]), 0, cb_build_binary_list ((yyvsp[(1) - (5)]), '+'));
  }
    break;

  case 838:

/* Line 1806 of yacc.c  */
#line 6034 "parser.y"
    {
	cb_emit_corresponding (cb_build_add, (yyvsp[(4) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(5) - (6)]));
  }
    break;

  case 840:

/* Line 1806 of yacc.c  */
#line 6041 "parser.y"
    {
	cb_list_add ((yyvsp[(0) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 841:

/* Line 1806 of yacc.c  */
#line 6048 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ADD);
  }
    break;

  case 842:

/* Line 1806 of yacc.c  */
#line 6052 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), ADD);
  }
    break;

  case 843:

/* Line 1806 of yacc.c  */
#line 6062 "parser.y"
    {
	begin_statement ("ALLOCATE", 0);
	current_statement->flag_no_based = 1;
  }
    break;

  case 845:

/* Line 1806 of yacc.c  */
#line 6071 "parser.y"
    {
	cb_emit_allocate ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]), NULL, (yyvsp[(2) - (3)]));
  }
    break;

  case 846:

/* Line 1806 of yacc.c  */
#line 6075 "parser.y"
    {
	if ((yyvsp[(4) - (4)]) == NULL) {
		cb_error_x (CB_TREE (current_statement),
			    _("ALLOCATE CHARACTERS requires RETURNING clause"));
	} else {
		cb_emit_allocate (NULL, (yyvsp[(4) - (4)]), (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
	}
  }
    break;

  case 847:

/* Line 1806 of yacc.c  */
#line 6086 "parser.y"
    { (yyval) = NULL; }
    break;

  case 848:

/* Line 1806 of yacc.c  */
#line 6087 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 849:

/* Line 1806 of yacc.c  */
#line 6095 "parser.y"
    {
	begin_statement ("ALTER", 0);
	cb_verify (cb_alter_statement, "ALTER statement");
  }
    break;

  case 853:

/* Line 1806 of yacc.c  */
#line 6109 "parser.y"
    {
	cb_emit_alter ((yyvsp[(1) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 856:

/* Line 1806 of yacc.c  */
#line 6121 "parser.y"
    {
	begin_statement ("CALL", TERM_CALL);
	cobc_cs_check = CB_CS_CALL;
  }
    break;

  case 858:

/* Line 1806 of yacc.c  */
#line 6136 "parser.y"
    {
	if (CB_LITERAL_P ((yyvsp[(2) - (6)])) &&
	    current_program->prog_type == CB_PROGRAM_TYPE &&
	    !current_program->flag_recursive &&
	    !strcmp ((const char *)(CB_LITERAL((yyvsp[(2) - (6)]))->data), current_program->orig_program_id)) {
		cb_warning_x ((yyvsp[(2) - (6)]), _("Recursive program call - assuming RECURSIVE attribute"));
		current_program->flag_recursive = 1;
	}
	cb_emit_call ((yyvsp[(2) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(4) - (6)]), (yyvsp[(5) - (6)]), (yyvsp[(6) - (6)]), (yyvsp[(1) - (6)]));
  }
    break;

  case 859:

/* Line 1806 of yacc.c  */
#line 6150 "parser.y"
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
    break;

  case 860:

/* Line 1806 of yacc.c  */
#line 6155 "parser.y"
    {
	(yyval) = cb_int (CB_CONV_STATIC_LINK);
	cobc_cs_check = 0;
  }
    break;

  case 861:

/* Line 1806 of yacc.c  */
#line 6160 "parser.y"
    {
	(yyval) = cb_int (CB_CONV_STDCALL);
	cobc_cs_check = 0;
  }
    break;

  case 862:

/* Line 1806 of yacc.c  */
#line 6165 "parser.y"
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
  }
    break;

  case 863:

/* Line 1806 of yacc.c  */
#line 6185 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 864:

/* Line 1806 of yacc.c  */
#line 6189 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
    break;

  case 865:

/* Line 1806 of yacc.c  */
#line 6194 "parser.y"
    {
	if (cb_list_length ((yyvsp[(3) - (3)])) > COB_MAX_FIELD_PARAMS) {
		cb_error_x (CB_TREE (current_statement),
			    _("Number of parameters exceeds maximum %d"),
			    COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 866:

/* Line 1806 of yacc.c  */
#line 6205 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 867:

/* Line 1806 of yacc.c  */
#line 6207 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 868:

/* Line 1806 of yacc.c  */
#line 6212 "parser.y"
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error_x (CB_TREE (current_statement),
			    _("OMITTED only allowed with BY REFERENCE"));
	}
	(yyval) = CB_BUILD_PAIR (cb_int (call_mode), cb_null);
  }
    break;

  case 869:

/* Line 1806 of yacc.c  */
#line 6220 "parser.y"
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
  }
    break;

  case 871:

/* Line 1806 of yacc.c  */
#line 6246 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
    break;

  case 872:

/* Line 1806 of yacc.c  */
#line 6250 "parser.y"
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("BY CONTENT not allowed in CHAINED program"));
	} else {
		call_mode = CB_CALL_BY_CONTENT;
	}
  }
    break;

  case 873:

/* Line 1806 of yacc.c  */
#line 6259 "parser.y"
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("BY VALUE not allowed in CHAINED program"));
	} else {
		call_mode = CB_CALL_BY_VALUE;
	}
  }
    break;

  case 874:

/* Line 1806 of yacc.c  */
#line 6271 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 875:

/* Line 1806 of yacc.c  */
#line 6275 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 876:

/* Line 1806 of yacc.c  */
#line 6279 "parser.y"
    {
	(yyval) = cb_null;
  }
    break;

  case 877:

/* Line 1806 of yacc.c  */
#line 6283 "parser.y"
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
  }
    break;

  case 882:

/* Line 1806 of yacc.c  */
#line 6316 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 883:

/* Line 1806 of yacc.c  */
#line 6321 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 884:

/* Line 1806 of yacc.c  */
#line 6328 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 885:

/* Line 1806 of yacc.c  */
#line 6333 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 886:

/* Line 1806 of yacc.c  */
#line 6340 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), CALL);
  }
    break;

  case 887:

/* Line 1806 of yacc.c  */
#line 6344 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), CALL);
  }
    break;

  case 888:

/* Line 1806 of yacc.c  */
#line 6354 "parser.y"
    {
	begin_statement ("CANCEL", 0);
  }
    break;

  case 890:

/* Line 1806 of yacc.c  */
#line 6362 "parser.y"
    {
	cb_emit_cancel ((yyvsp[(1) - (1)]));
  }
    break;

  case 891:

/* Line 1806 of yacc.c  */
#line 6366 "parser.y"
    {
	cb_emit_cancel ((yyvsp[(2) - (2)]));
  }
    break;

  case 892:

/* Line 1806 of yacc.c  */
#line 6376 "parser.y"
    {
	begin_statement ("CLOSE", 0);
  }
    break;

  case 894:

/* Line 1806 of yacc.c  */
#line 6384 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 895:

/* Line 1806 of yacc.c  */
#line 6389 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 896:

/* Line 1806 of yacc.c  */
#line 6396 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_NORMAL); }
    break;

  case 897:

/* Line 1806 of yacc.c  */
#line 6397 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_UNIT); }
    break;

  case 898:

/* Line 1806 of yacc.c  */
#line 6398 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_UNIT_REMOVAL); }
    break;

  case 899:

/* Line 1806 of yacc.c  */
#line 6399 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_NO_REWIND); }
    break;

  case 900:

/* Line 1806 of yacc.c  */
#line 6400 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_LOCK); }
    break;

  case 901:

/* Line 1806 of yacc.c  */
#line 6408 "parser.y"
    {
	begin_statement ("COMPUTE", TERM_COMPUTE);
  }
    break;

  case 903:

/* Line 1806 of yacc.c  */
#line 6417 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(1) - (4)]), 0, (yyvsp[(3) - (4)]));
  }
    break;

  case 904:

/* Line 1806 of yacc.c  */
#line 6424 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), COMPUTE);
  }
    break;

  case 905:

/* Line 1806 of yacc.c  */
#line 6428 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), COMPUTE);
  }
    break;

  case 906:

/* Line 1806 of yacc.c  */
#line 6438 "parser.y"
    {
	begin_statement ("COMMIT", 0);
	cb_emit_commit ();
  }
    break;

  case 907:

/* Line 1806 of yacc.c  */
#line 6449 "parser.y"
    {
	size_t	save_unreached;

	/* Do not check unreached for CONTINUE */
	save_unreached = check_unreached;
	check_unreached = 0;
	begin_statement ("CONTINUE", 0);
	cb_emit_continue ();
	check_unreached = (unsigned int) save_unreached;
  }
    break;

  case 908:

/* Line 1806 of yacc.c  */
#line 6466 "parser.y"
    {
	begin_statement ("DELETE", TERM_DELETE);
  }
    break;

  case 910:

/* Line 1806 of yacc.c  */
#line 6475 "parser.y"
    {
	cb_emit_delete ((yyvsp[(1) - (3)]));
  }
    break;

  case 912:

/* Line 1806 of yacc.c  */
#line 6483 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[(1) - (1)]));
  }
    break;

  case 913:

/* Line 1806 of yacc.c  */
#line 6488 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[(2) - (2)]));
  }
    break;

  case 914:

/* Line 1806 of yacc.c  */
#line 6496 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DELETE);
  }
    break;

  case 915:

/* Line 1806 of yacc.c  */
#line 6500 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DELETE);
  }
    break;

  case 916:

/* Line 1806 of yacc.c  */
#line 6510 "parser.y"
    {
	begin_statement ("DISPLAY", TERM_DISPLAY);
	cobc_cs_check = CB_CS_DISPLAY;
  }
    break;

  case 918:

/* Line 1806 of yacc.c  */
#line 6520 "parser.y"
    {
	cb_emit_env_name ((yyvsp[(1) - (3)]));
  }
    break;

  case 919:

/* Line 1806 of yacc.c  */
#line 6524 "parser.y"
    {
	cb_emit_env_value ((yyvsp[(1) - (3)]));
  }
    break;

  case 920:

/* Line 1806 of yacc.c  */
#line 6528 "parser.y"
    {
	cb_emit_arg_number ((yyvsp[(1) - (3)]));
  }
    break;

  case 921:

/* Line 1806 of yacc.c  */
#line 6532 "parser.y"
    {
	cb_emit_command_line ((yyvsp[(1) - (3)]));
  }
    break;

  case 922:

/* Line 1806 of yacc.c  */
#line 6536 "parser.y"
    {
	cb_emit_display ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]), NULL, NULL);
  }
    break;

  case 924:

/* Line 1806 of yacc.c  */
#line 6541 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_display (CB_LIST_INIT ((yyvsp[(1) - (4)])), cb_null, cb_int1,
			 NULL, current_statement->attr_ptr);
  }
    break;

  case 926:

/* Line 1806 of yacc.c  */
#line 6551 "parser.y"
    {
	begin_implicit_statement ();
  }
    break;

  case 928:

/* Line 1806 of yacc.c  */
#line 6559 "parser.y"
    {
	cb_emit_display (CB_LIST_INIT ((yyvsp[(1) - (5)])), cb_null, cb_int1,
			 (yyvsp[(2) - (5)]), current_statement->attr_ptr);
  }
    break;

  case 929:

/* Line 1806 of yacc.c  */
#line 6567 "parser.y"
    {
	if (current_program->flag_console_is_crt) {
		(yyval) = cb_null;
	} else {
		(yyval) = cb_int0;
	}
  }
    break;

  case 930:

/* Line 1806 of yacc.c  */
#line 6575 "parser.y"
    {
	(yyval) = cb_build_display_mnemonic ((yyvsp[(2) - (2)]));
  }
    break;

  case 931:

/* Line 1806 of yacc.c  */
#line 6579 "parser.y"
    {
	(yyval) = cb_build_display_name ((yyvsp[(2) - (2)]));
  }
    break;

  case 932:

/* Line 1806 of yacc.c  */
#line 6583 "parser.y"
    {
	(yyval) = cb_int0;
  }
    break;

  case 933:

/* Line 1806 of yacc.c  */
#line 6587 "parser.y"
    {
	if (current_program->flag_console_is_crt) {
		(yyval) = cb_null;
	} else {
		(yyval) = cb_int0;
	}
  }
    break;

  case 939:

/* Line 1806 of yacc.c  */
#line 6609 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 940:

/* Line 1806 of yacc.c  */
#line 6615 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 941:

/* Line 1806 of yacc.c  */
#line 6616 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 944:

/* Line 1806 of yacc.c  */
#line 6627 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
    break;

  case 945:

/* Line 1806 of yacc.c  */
#line 6631 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLANK_LINE);
  }
    break;

  case 946:

/* Line 1806 of yacc.c  */
#line 6635 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLANK_SCREEN);
  }
    break;

  case 947:

/* Line 1806 of yacc.c  */
#line 6639 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
    break;

  case 948:

/* Line 1806 of yacc.c  */
#line 6643 "parser.y"
    {
	cb_warning (_("Ignoring CONVERSION"));
  }
    break;

  case 949:

/* Line 1806 of yacc.c  */
#line 6647 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_ERASE_EOL);
  }
    break;

  case 950:

/* Line 1806 of yacc.c  */
#line 6651 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_ERASE_EOS);
  }
    break;

  case 951:

/* Line 1806 of yacc.c  */
#line 6655 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 952:

/* Line 1806 of yacc.c  */
#line 6659 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWLIGHT);
  }
    break;

  case 953:

/* Line 1806 of yacc.c  */
#line 6663 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
    break;

  case 954:

/* Line 1806 of yacc.c  */
#line 6667 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
    break;

  case 955:

/* Line 1806 of yacc.c  */
#line 6671 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
    break;

  case 956:

/* Line 1806 of yacc.c  */
#line 6675 "parser.y"
    {
	check_attribs ((yyvsp[(3) - (3)]), NULL, NULL, NULL, NULL, 0);
  }
    break;

  case 957:

/* Line 1806 of yacc.c  */
#line 6679 "parser.y"
    {
	check_attribs (NULL, (yyvsp[(3) - (3)]), NULL, NULL, NULL, 0);
  }
    break;

  case 958:

/* Line 1806 of yacc.c  */
#line 6683 "parser.y"
    {
	check_attribs (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, 0);
  }
    break;

  case 959:

/* Line 1806 of yacc.c  */
#line 6687 "parser.y"
    {
	check_attribs (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
    break;

  case 960:

/* Line 1806 of yacc.c  */
#line 6694 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DISPLAY);
  }
    break;

  case 961:

/* Line 1806 of yacc.c  */
#line 6698 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DISPLAY);
  }
    break;

  case 962:

/* Line 1806 of yacc.c  */
#line 6708 "parser.y"
    {
	begin_statement ("DIVIDE", TERM_DIVIDE);
  }
    break;

  case 964:

/* Line 1806 of yacc.c  */
#line 6717 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '/', (yyvsp[(1) - (4)]));
  }
    break;

  case 965:

/* Line 1806 of yacc.c  */
#line 6721 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_op ((yyvsp[(3) - (6)]), '/', (yyvsp[(1) - (6)])));
  }
    break;

  case 966:

/* Line 1806 of yacc.c  */
#line 6725 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_op ((yyvsp[(1) - (6)]), '/', (yyvsp[(3) - (6)])));
  }
    break;

  case 967:

/* Line 1806 of yacc.c  */
#line 6729 "parser.y"
    {
	cb_emit_divide ((yyvsp[(3) - (8)]), (yyvsp[(1) - (8)]), (yyvsp[(5) - (8)]), (yyvsp[(7) - (8)]));
  }
    break;

  case 968:

/* Line 1806 of yacc.c  */
#line 6733 "parser.y"
    {
	cb_emit_divide ((yyvsp[(1) - (8)]), (yyvsp[(3) - (8)]), (yyvsp[(5) - (8)]), (yyvsp[(7) - (8)]));
  }
    break;

  case 969:

/* Line 1806 of yacc.c  */
#line 6740 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DIVIDE);
  }
    break;

  case 970:

/* Line 1806 of yacc.c  */
#line 6744 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DIVIDE);
  }
    break;

  case 971:

/* Line 1806 of yacc.c  */
#line 6754 "parser.y"
    {
	check_unreached = 0;
	begin_statement ("ENTRY", 0);
  }
    break;

  case 973:

/* Line 1806 of yacc.c  */
#line 6763 "parser.y"
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
  }
    break;

  case 974:

/* Line 1806 of yacc.c  */
#line 6781 "parser.y"
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
  }
    break;

  case 976:

/* Line 1806 of yacc.c  */
#line 6805 "parser.y"
    {
	cb_emit_evaluate ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	eval_level--;
  }
    break;

  case 977:

/* Line 1806 of yacc.c  */
#line 6812 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 978:

/* Line 1806 of yacc.c  */
#line 6814 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 979:

/* Line 1806 of yacc.c  */
#line 6819 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	eval_check[eval_level][eval_inc++] = (yyvsp[(1) - (1)]);
	if (eval_inc >= EVAL_DEPTH) {
		cb_error (_("Maximum evaluate depth exceeded (%d)"),
			  EVAL_DEPTH);
		eval_inc = 0;
		YYERROR;
	}
  }
    break;

  case 980:

/* Line 1806 of yacc.c  */
#line 6830 "parser.y"
    {
	(yyval) = cb_true;
	eval_check[eval_level][eval_inc++] = NULL;
	if (eval_inc >= EVAL_DEPTH) {
		cb_error (_("Maximum evaluate depth exceeded (%d)"),
			  EVAL_DEPTH);
		eval_inc = 0;
		YYERROR;
	}
  }
    break;

  case 981:

/* Line 1806 of yacc.c  */
#line 6841 "parser.y"
    {
	(yyval) = cb_false;
	eval_check[eval_level][eval_inc++] = NULL;
	if (eval_inc >= EVAL_DEPTH) {
		cb_error (_("Maximum evaluate depth exceeded (%d)"),
			  EVAL_DEPTH);
		eval_inc = 0;
		YYERROR;
	}
  }
    break;

  case 982:

/* Line 1806 of yacc.c  */
#line 6855 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 983:

/* Line 1806 of yacc.c  */
#line 6859 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 984:

/* Line 1806 of yacc.c  */
#line 6865 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 985:

/* Line 1806 of yacc.c  */
#line 6867 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 986:

/* Line 1806 of yacc.c  */
#line 6873 "parser.y"
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
	eval_inc2 = 0;
  }
    break;

  case 987:

/* Line 1806 of yacc.c  */
#line 6882 "parser.y"
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[(3) - (3)]), NULL);
	eval_inc2 = 0;
  }
    break;

  case 988:

/* Line 1806 of yacc.c  */
#line 6890 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(2) - (2)]));
	eval_inc2 = 0;
  }
    break;

  case 989:

/* Line 1806 of yacc.c  */
#line 6896 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
	eval_inc2 = 0;
  }
    break;

  case 990:

/* Line 1806 of yacc.c  */
#line 6903 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 991:

/* Line 1806 of yacc.c  */
#line 6905 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 992:

/* Line 1806 of yacc.c  */
#line 6910 "parser.y"
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
  }
    break;

  case 993:

/* Line 1806 of yacc.c  */
#line 6971 "parser.y"
    { (yyval) = cb_any; eval_inc2++; }
    break;

  case 994:

/* Line 1806 of yacc.c  */
#line 6972 "parser.y"
    { (yyval) = cb_true; eval_inc2++; }
    break;

  case 995:

/* Line 1806 of yacc.c  */
#line 6973 "parser.y"
    { (yyval) = cb_false; eval_inc2++; }
    break;

  case 996:

/* Line 1806 of yacc.c  */
#line 6977 "parser.y"
    { (yyval) = NULL; }
    break;

  case 997:

/* Line 1806 of yacc.c  */
#line 6978 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 998:

/* Line 1806 of yacc.c  */
#line 6983 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), EVALUATE);
  }
    break;

  case 999:

/* Line 1806 of yacc.c  */
#line 6987 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), EVALUATE);
  }
    break;

  case 1000:

/* Line 1806 of yacc.c  */
#line 6997 "parser.y"
    {
	begin_statement ("EXIT", 0);
	cobc_cs_check = CB_CS_EXIT;
  }
    break;

  case 1001:

/* Line 1806 of yacc.c  */
#line 7002 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 1003:

/* Line 1806 of yacc.c  */
#line 7010 "parser.y"
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
	if ((yyvsp[(2) - (2)]) != NULL) {
		cb_emit_move ((yyvsp[(2) - (2)]), CB_LIST_INIT (current_program->cb_return_code));
	}
	current_statement->name = (const char *)"EXIT PROGRAM";
	cb_emit_exit (0);
  }
    break;

  case 1004:

/* Line 1806 of yacc.c  */
#line 7031 "parser.y"
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
  }
    break;

  case 1005:

/* Line 1806 of yacc.c  */
#line 7045 "parser.y"
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
  }
    break;

  case 1006:

/* Line 1806 of yacc.c  */
#line 7067 "parser.y"
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
  }
    break;

  case 1007:

/* Line 1806 of yacc.c  */
#line 7089 "parser.y"
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
  }
    break;

  case 1008:

/* Line 1806 of yacc.c  */
#line 7109 "parser.y"
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
  }
    break;

  case 1009:

/* Line 1806 of yacc.c  */
#line 7131 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1010:

/* Line 1806 of yacc.c  */
#line 7132 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1011:

/* Line 1806 of yacc.c  */
#line 7140 "parser.y"
    {
	begin_statement ("FREE", 0);
	current_statement->flag_no_based = 1;
  }
    break;

  case 1013:

/* Line 1806 of yacc.c  */
#line 7149 "parser.y"
    {
	cb_emit_free ((yyvsp[(1) - (1)]));
  }
    break;

  case 1014:

/* Line 1806 of yacc.c  */
#line 7159 "parser.y"
    {
	begin_statement ("GENERATE", 0);
	PENDING("GENERATE");
  }
    break;

  case 1017:

/* Line 1806 of yacc.c  */
#line 7175 "parser.y"
    {
	if (!current_paragraph->flag_statement) {
		current_paragraph->flag_first_is_goto = 1;
	}
	begin_statement ("GO TO", 0);
	save_debug = start_debug;
	start_debug = 0;
  }
    break;

  case 1019:

/* Line 1806 of yacc.c  */
#line 7188 "parser.y"
    {
	cb_emit_goto ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
	start_debug = save_debug;
  }
    break;

  case 1020:

/* Line 1806 of yacc.c  */
#line 7196 "parser.y"
    {
	check_unreached = 1;
	(yyval) = NULL;
  }
    break;

  case 1021:

/* Line 1806 of yacc.c  */
#line 7201 "parser.y"
    {
	check_unreached = 0;
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 1022:

/* Line 1806 of yacc.c  */
#line 7212 "parser.y"
    {
	begin_statement ("GOBACK", 0);
	check_unreached = 1;
	if ((yyvsp[(2) - (2)]) != NULL) {
		cb_emit_move ((yyvsp[(2) - (2)]), CB_LIST_INIT (current_program->cb_return_code));
	}
	cb_emit_exit (1U);
  }
    break;

  case 1023:

/* Line 1806 of yacc.c  */
#line 7227 "parser.y"
    {
	begin_statement ("IF", TERM_IF);
  }
    break;

  case 1025:

/* Line 1806 of yacc.c  */
#line 7236 "parser.y"
    {
	cb_emit_if ((yyvsp[(-1) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1026:

/* Line 1806 of yacc.c  */
#line 7240 "parser.y"
    {
	cb_emit_if ((yyvsp[(-1) - (2)]), NULL, (yyvsp[(2) - (2)]));
  }
    break;

  case 1027:

/* Line 1806 of yacc.c  */
#line 7244 "parser.y"
    {
	cb_emit_if ((yyvsp[(-1) - (1)]), (yyvsp[(1) - (1)]), NULL);
  }
    break;

  case 1028:

/* Line 1806 of yacc.c  */
#line 7251 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), IF);
  }
    break;

  case 1029:

/* Line 1806 of yacc.c  */
#line 7255 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), IF);
  }
    break;

  case 1030:

/* Line 1806 of yacc.c  */
#line 7265 "parser.y"
    {
	begin_statement ("INITIALIZE", 0);
  }
    break;

  case 1032:

/* Line 1806 of yacc.c  */
#line 7274 "parser.y"
    {
	cb_emit_initialize ((yyvsp[(1) - (5)]), (yyvsp[(2) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]), (yyvsp[(5) - (5)]));
  }
    break;

  case 1033:

/* Line 1806 of yacc.c  */
#line 7280 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1034:

/* Line 1806 of yacc.c  */
#line 7281 "parser.y"
    { (yyval) = cb_true; }
    break;

  case 1035:

/* Line 1806 of yacc.c  */
#line 7285 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1036:

/* Line 1806 of yacc.c  */
#line 7286 "parser.y"
    { (yyval) = cb_true; }
    break;

  case 1037:

/* Line 1806 of yacc.c  */
#line 7287 "parser.y"
    { (yyval) = (yyvsp[(1) - (3)]); }
    break;

  case 1038:

/* Line 1806 of yacc.c  */
#line 7292 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1039:

/* Line 1806 of yacc.c  */
#line 7296 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1040:

/* Line 1806 of yacc.c  */
#line 7303 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1041:

/* Line 1806 of yacc.c  */
#line 7308 "parser.y"
    {
	(yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1042:

/* Line 1806 of yacc.c  */
#line 7315 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1043:

/* Line 1806 of yacc.c  */
#line 7321 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_ALPHABETIC); }
    break;

  case 1044:

/* Line 1806 of yacc.c  */
#line 7322 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC); }
    break;

  case 1045:

/* Line 1806 of yacc.c  */
#line 7323 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC); }
    break;

  case 1046:

/* Line 1806 of yacc.c  */
#line 7324 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC_EDITED); }
    break;

  case 1047:

/* Line 1806 of yacc.c  */
#line 7325 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC_EDITED); }
    break;

  case 1048:

/* Line 1806 of yacc.c  */
#line 7326 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL); }
    break;

  case 1049:

/* Line 1806 of yacc.c  */
#line 7327 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL_EDITED); }
    break;

  case 1050:

/* Line 1806 of yacc.c  */
#line 7332 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1051:

/* Line 1806 of yacc.c  */
#line 7336 "parser.y"
    {
	(yyval) = cb_true;
  }
    break;

  case 1052:

/* Line 1806 of yacc.c  */
#line 7345 "parser.y"
    {
	begin_statement ("INITIATE", 0);
	PENDING("INITIATE");
  }
    break;

  case 1054:

/* Line 1806 of yacc.c  */
#line 7354 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(1) - (1)]) != cb_error_node) {
	}
  }
    break;

  case 1055:

/* Line 1806 of yacc.c  */
#line 7360 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(2) - (2)]) != cb_error_node) {
	}
  }
    break;

  case 1056:

/* Line 1806 of yacc.c  */
#line 7371 "parser.y"
    {
	begin_statement ("INSPECT", 0);
	inspect_keyword = 0;
  }
    break;

  case 1059:

/* Line 1806 of yacc.c  */
#line 7384 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1060:

/* Line 1806 of yacc.c  */
#line 7388 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1061:

/* Line 1806 of yacc.c  */
#line 7392 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1066:

/* Line 1806 of yacc.c  */
#line 7408 "parser.y"
    {
	cb_init_tallying ();
  }
    break;

  case 1067:

/* Line 1806 of yacc.c  */
#line 7412 "parser.y"
    {
	cb_emit_inspect ((yyvsp[(0) - (3)]), (yyvsp[(3) - (3)]), cb_int0, 0);
	(yyval) = (yyvsp[(0) - (3)]);
  }
    break;

  case 1068:

/* Line 1806 of yacc.c  */
#line 7422 "parser.y"
    {
	cb_emit_inspect ((yyvsp[(0) - (2)]), (yyvsp[(2) - (2)]), cb_int1, 1);
	inspect_keyword = 0;
  }
    break;

  case 1069:

/* Line 1806 of yacc.c  */
#line 7432 "parser.y"
    {
	cb_tree		x;
	x = cb_build_converting ((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]), (yyvsp[(5) - (5)]));
	cb_emit_inspect ((yyvsp[(0) - (5)]), x, cb_int0, 2);
  }
    break;

  case 1070:

/* Line 1806 of yacc.c  */
#line 7440 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1071:

/* Line 1806 of yacc.c  */
#line 7441 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1072:

/* Line 1806 of yacc.c  */
#line 7445 "parser.y"
    { (yyval) = cb_build_tallying_data ((yyvsp[(1) - (2)])); }
    break;

  case 1073:

/* Line 1806 of yacc.c  */
#line 7446 "parser.y"
    { (yyval) = cb_build_tallying_characters ((yyvsp[(2) - (2)])); }
    break;

  case 1074:

/* Line 1806 of yacc.c  */
#line 7447 "parser.y"
    { (yyval) = cb_build_tallying_all (); }
    break;

  case 1075:

/* Line 1806 of yacc.c  */
#line 7448 "parser.y"
    { (yyval) = cb_build_tallying_leading (); }
    break;

  case 1076:

/* Line 1806 of yacc.c  */
#line 7449 "parser.y"
    { (yyval) = cb_build_tallying_trailing (); }
    break;

  case 1077:

/* Line 1806 of yacc.c  */
#line 7450 "parser.y"
    { (yyval) = cb_build_tallying_value ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1078:

/* Line 1806 of yacc.c  */
#line 7454 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1079:

/* Line 1806 of yacc.c  */
#line 7455 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1080:

/* Line 1806 of yacc.c  */
#line 7460 "parser.y"
    {
	(yyval) = cb_build_replacing_characters ((yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));
	inspect_keyword = 0;
  }
    break;

  case 1081:

/* Line 1806 of yacc.c  */
#line 7465 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1082:

/* Line 1806 of yacc.c  */
#line 7471 "parser.y"
    { /* Nothing */ }
    break;

  case 1083:

/* Line 1806 of yacc.c  */
#line 7472 "parser.y"
    { inspect_keyword = 1; }
    break;

  case 1084:

/* Line 1806 of yacc.c  */
#line 7473 "parser.y"
    { inspect_keyword = 2; }
    break;

  case 1085:

/* Line 1806 of yacc.c  */
#line 7474 "parser.y"
    { inspect_keyword = 3; }
    break;

  case 1086:

/* Line 1806 of yacc.c  */
#line 7475 "parser.y"
    { inspect_keyword = 4; }
    break;

  case 1087:

/* Line 1806 of yacc.c  */
#line 7480 "parser.y"
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
  }
    break;

  case 1088:

/* Line 1806 of yacc.c  */
#line 7507 "parser.y"
    {
	(yyval) = cb_build_inspect_region_start ();
  }
    break;

  case 1089:

/* Line 1806 of yacc.c  */
#line 7511 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1090:

/* Line 1806 of yacc.c  */
#line 7518 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(0) - (3)]), CB_BUILD_FUNCALL_1 ("cob_inspect_before", (yyvsp[(3) - (3)])));
  }
    break;

  case 1091:

/* Line 1806 of yacc.c  */
#line 7522 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(0) - (3)]), CB_BUILD_FUNCALL_1 ("cob_inspect_after", (yyvsp[(3) - (3)])));
  }
    break;

  case 1092:

/* Line 1806 of yacc.c  */
#line 7531 "parser.y"
    {
	begin_statement ("MERGE", 0);
	current_statement->flag_merge = 1;
  }
    break;

  case 1094:

/* Line 1806 of yacc.c  */
#line 7543 "parser.y"
    {
	begin_statement ("MOVE", 0);
  }
    break;

  case 1096:

/* Line 1806 of yacc.c  */
#line 7551 "parser.y"
    {
	cb_emit_move ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1097:

/* Line 1806 of yacc.c  */
#line 7555 "parser.y"
    {
	cb_emit_move_corresponding ((yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1098:

/* Line 1806 of yacc.c  */
#line 7565 "parser.y"
    {
	begin_statement ("MULTIPLY", TERM_MULTIPLY);
  }
    break;

  case 1100:

/* Line 1806 of yacc.c  */
#line 7574 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '*', (yyvsp[(1) - (4)]));
  }
    break;

  case 1101:

/* Line 1806 of yacc.c  */
#line 7578 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_op ((yyvsp[(1) - (6)]), '*', (yyvsp[(3) - (6)])));
  }
    break;

  case 1102:

/* Line 1806 of yacc.c  */
#line 7585 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), MULTIPLY);
  }
    break;

  case 1103:

/* Line 1806 of yacc.c  */
#line 7589 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), MULTIPLY);
  }
    break;

  case 1104:

/* Line 1806 of yacc.c  */
#line 7599 "parser.y"
    {
	begin_statement ("OPEN", 0);
  }
    break;

  case 1106:

/* Line 1806 of yacc.c  */
#line 7607 "parser.y"
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
  }
    break;

  case 1107:

/* Line 1806 of yacc.c  */
#line 7628 "parser.y"
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
  }
    break;

  case 1108:

/* Line 1806 of yacc.c  */
#line 7651 "parser.y"
    { (yyval) = cb_int (COB_OPEN_INPUT); }
    break;

  case 1109:

/* Line 1806 of yacc.c  */
#line 7652 "parser.y"
    { (yyval) = cb_int (COB_OPEN_OUTPUT); }
    break;

  case 1110:

/* Line 1806 of yacc.c  */
#line 7653 "parser.y"
    { (yyval) = cb_int (COB_OPEN_I_O); }
    break;

  case 1111:

/* Line 1806 of yacc.c  */
#line 7654 "parser.y"
    { (yyval) = cb_int (COB_OPEN_EXTEND); }
    break;

  case 1112:

/* Line 1806 of yacc.c  */
#line 7658 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1113:

/* Line 1806 of yacc.c  */
#line 7659 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1114:

/* Line 1806 of yacc.c  */
#line 7663 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1115:

/* Line 1806 of yacc.c  */
#line 7664 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1116:

/* Line 1806 of yacc.c  */
#line 7665 "parser.y"
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
    break;

  case 1117:

/* Line 1806 of yacc.c  */
#line 7667 "parser.y"
    {
	(void)cb_verify (CB_OBSOLETE, "REVERSED");
	(yyval) = NULL;
  }
    break;

  case 1118:

/* Line 1806 of yacc.c  */
#line 7678 "parser.y"
    {
	begin_statement ("PERFORM", TERM_PERFORM);
	/* Turn off field debug - PERFORM is special */
	save_debug = start_debug;
	start_debug = 0;
  }
    break;

  case 1120:

/* Line 1806 of yacc.c  */
#line 7689 "parser.y"
    {
	cb_emit_perform ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
	start_debug = save_debug;
  }
    break;

  case 1121:

/* Line 1806 of yacc.c  */
#line 7694 "parser.y"
    {
	CB_ADD_TO_CHAIN ((yyvsp[(1) - (1)]), perform_stack);
	/* Restore field debug before inline statements */
	start_debug = save_debug;
  }
    break;

  case 1122:

/* Line 1806 of yacc.c  */
#line 7700 "parser.y"
    {
	perform_stack = CB_CHAIN (perform_stack);
	cb_emit_perform ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
  }
    break;

  case 1123:

/* Line 1806 of yacc.c  */
#line 7705 "parser.y"
    {
	cb_emit_perform ((yyvsp[(1) - (2)]), NULL);
	start_debug = save_debug;
  }
    break;

  case 1124:

/* Line 1806 of yacc.c  */
#line 7713 "parser.y"
    {
	if (cb_relaxed_syntax_check) {
		TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), PERFORM);
	} else {
		TERMINATOR_ERROR ((yyvsp[(-4) - (0)]), PERFORM);
	}
  }
    break;

  case 1125:

/* Line 1806 of yacc.c  */
#line 7721 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), PERFORM);
  }
    break;

  case 1126:

/* Line 1806 of yacc.c  */
#line 7728 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), PERFORM);
  }
    break;

  case 1127:

/* Line 1806 of yacc.c  */
#line 7732 "parser.y"
    {
	if (cb_relaxed_syntax_check) {
		TERMINATOR_WARNING ((yyvsp[(-2) - (1)]), PERFORM);
	} else {
		TERMINATOR_ERROR ((yyvsp[(-2) - (1)]), PERFORM);
	}
	/* Put the dot token back into the stack for reparse */
	cb_unput_dot ();
  }
    break;

  case 1128:

/* Line 1806 of yacc.c  */
#line 7745 "parser.y"
    {
	/* Return from $1 */
	CB_REFERENCE ((yyvsp[(1) - (1)]))->length = cb_true;
	CB_REFERENCE ((yyvsp[(1) - (1)]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (1)]), (yyvsp[(1) - (1)]));
  }
    break;

  case 1129:

/* Line 1806 of yacc.c  */
#line 7752 "parser.y"
    {
	/* Return from $3 */
	CB_REFERENCE ((yyvsp[(3) - (3)]))->length = cb_true;
	CB_REFERENCE ((yyvsp[(1) - (3)]))->flag_decl_ok = 1;
	CB_REFERENCE ((yyvsp[(3) - (3)]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1130:

/* Line 1806 of yacc.c  */
#line 7763 "parser.y"
    {
	(yyval) = cb_build_perform_once (NULL);
  }
    break;

  case 1131:

/* Line 1806 of yacc.c  */
#line 7767 "parser.y"
    {
	(yyval) = cb_build_perform_times ((yyvsp[(1) - (2)]));
	current_program->loop_counter++;
  }
    break;

  case 1132:

/* Line 1806 of yacc.c  */
#line 7772 "parser.y"
    {
	(yyval) = cb_build_perform_forever (NULL);
  }
    break;

  case 1133:

/* Line 1806 of yacc.c  */
#line 7776 "parser.y"
    {
	cb_tree varying;

	if (!(yyvsp[(3) - (3)])) {
		(yyval) = cb_build_perform_forever (NULL);
	} else {
		varying = CB_LIST_INIT (cb_build_perform_varying (NULL, NULL, NULL, (yyvsp[(3) - (3)])));
		(yyval) = cb_build_perform_until ((yyvsp[(1) - (3)]), varying);
	}
  }
    break;

  case 1134:

/* Line 1806 of yacc.c  */
#line 7787 "parser.y"
    {
	(yyval) = cb_build_perform_until ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1135:

/* Line 1806 of yacc.c  */
#line 7793 "parser.y"
    { (yyval) = CB_BEFORE; }
    break;

  case 1136:

/* Line 1806 of yacc.c  */
#line 7794 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1137:

/* Line 1806 of yacc.c  */
#line 7798 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1138:

/* Line 1806 of yacc.c  */
#line 7799 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1139:

/* Line 1806 of yacc.c  */
#line 7802 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1140:

/* Line 1806 of yacc.c  */
#line 7804 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 1141:

/* Line 1806 of yacc.c  */
#line 7809 "parser.y"
    {
	(yyval) = cb_build_perform_varying ((yyvsp[(1) - (7)]), (yyvsp[(3) - (7)]), (yyvsp[(5) - (7)]), (yyvsp[(7) - (7)]));
  }
    break;

  case 1142:

/* Line 1806 of yacc.c  */
#line 7819 "parser.y"
    {
	begin_statement ("READ", TERM_READ);
  }
    break;

  case 1144:

/* Line 1806 of yacc.c  */
#line 7828 "parser.y"
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
  }
    break;

  case 1145:

/* Line 1806 of yacc.c  */
#line 7854 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1146:

/* Line 1806 of yacc.c  */
#line 7855 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1147:

/* Line 1806 of yacc.c  */
#line 7860 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1148:

/* Line 1806 of yacc.c  */
#line 7864 "parser.y"
    {
	(yyval) = cb_int3;
  }
    break;

  case 1149:

/* Line 1806 of yacc.c  */
#line 7868 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1150:

/* Line 1806 of yacc.c  */
#line 7872 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1151:

/* Line 1806 of yacc.c  */
#line 7876 "parser.y"
    {
	(yyval) = cb_int2;
  }
    break;

  case 1152:

/* Line 1806 of yacc.c  */
#line 7880 "parser.y"
    {
	(yyval) = cb_int3;
  }
    break;

  case 1153:

/* Line 1806 of yacc.c  */
#line 7884 "parser.y"
    {
	(yyval) = cb_int4;
  }
    break;

  case 1154:

/* Line 1806 of yacc.c  */
#line 7890 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1155:

/* Line 1806 of yacc.c  */
#line 7891 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1158:

/* Line 1806 of yacc.c  */
#line 7901 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), READ);
  }
    break;

  case 1159:

/* Line 1806 of yacc.c  */
#line 7905 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), READ);
  }
    break;

  case 1160:

/* Line 1806 of yacc.c  */
#line 7915 "parser.y"
    {
	begin_statement ("READY TRACE", 0);
	cb_emit_ready_trace ();
  }
    break;

  case 1161:

/* Line 1806 of yacc.c  */
#line 7925 "parser.y"
    {
	begin_statement ("RELEASE", 0);
  }
    break;

  case 1163:

/* Line 1806 of yacc.c  */
#line 7933 "parser.y"
    {
	cb_emit_release ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1164:

/* Line 1806 of yacc.c  */
#line 7943 "parser.y"
    {
	begin_statement ("RESET TRACE", 0);
	cb_emit_reset_trace ();
  }
    break;

  case 1165:

/* Line 1806 of yacc.c  */
#line 7953 "parser.y"
    {
	begin_statement ("RETURN", TERM_RETURN);
  }
    break;

  case 1167:

/* Line 1806 of yacc.c  */
#line 7962 "parser.y"
    {
	cb_emit_return ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
  }
    break;

  case 1168:

/* Line 1806 of yacc.c  */
#line 7969 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), RETURN);
  }
    break;

  case 1169:

/* Line 1806 of yacc.c  */
#line 7973 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), RETURN);
  }
    break;

  case 1170:

/* Line 1806 of yacc.c  */
#line 7983 "parser.y"
    {
	begin_statement ("REWRITE", TERM_REWRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
    break;

  case 1172:

/* Line 1806 of yacc.c  */
#line 7995 "parser.y"
    {
	cb_emit_rewrite ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]));
	start_debug = save_debug;
  }
    break;

  case 1173:

/* Line 1806 of yacc.c  */
#line 8003 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1174:

/* Line 1806 of yacc.c  */
#line 8007 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1175:

/* Line 1806 of yacc.c  */
#line 8011 "parser.y"
    {
	(yyval) = cb_int2;
  }
    break;

  case 1176:

/* Line 1806 of yacc.c  */
#line 8018 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), REWRITE);
  }
    break;

  case 1177:

/* Line 1806 of yacc.c  */
#line 8022 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), REWRITE);
  }
    break;

  case 1178:

/* Line 1806 of yacc.c  */
#line 8032 "parser.y"
    {
	begin_statement ("ROLLBACK", 0);
	cb_emit_rollback ();
  }
    break;

  case 1179:

/* Line 1806 of yacc.c  */
#line 8043 "parser.y"
    {
	begin_statement ("SEARCH", TERM_SEARCH);
  }
    break;

  case 1181:

/* Line 1806 of yacc.c  */
#line 8052 "parser.y"
    {
	cb_emit_search ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1182:

/* Line 1806 of yacc.c  */
#line 8057 "parser.y"
    {
	current_statement->name = (const char *)"SEARCH ALL";
	cb_emit_search_all ((yyvsp[(2) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]), (yyvsp[(6) - (6)]));
  }
    break;

  case 1183:

/* Line 1806 of yacc.c  */
#line 8064 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1184:

/* Line 1806 of yacc.c  */
#line 8065 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1185:

/* Line 1806 of yacc.c  */
#line 8070 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1186:

/* Line 1806 of yacc.c  */
#line 8075 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1187:

/* Line 1806 of yacc.c  */
#line 8082 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1188:

/* Line 1806 of yacc.c  */
#line 8086 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
  }
    break;

  case 1189:

/* Line 1806 of yacc.c  */
#line 8094 "parser.y"
    {
	(yyval) = cb_build_if_check_break ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1190:

/* Line 1806 of yacc.c  */
#line 8101 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SEARCH);
  }
    break;

  case 1191:

/* Line 1806 of yacc.c  */
#line 8105 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SEARCH);
  }
    break;

  case 1192:

/* Line 1806 of yacc.c  */
#line 8115 "parser.y"
    {
	begin_statement ("SET", 0);
	setattr_val_on = 0;
	setattr_val_off = 0;
	cobc_cs_check = CB_CS_SET;
  }
    break;

  case 1193:

/* Line 1806 of yacc.c  */
#line 8122 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 1200:

/* Line 1806 of yacc.c  */
#line 8137 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1201:

/* Line 1806 of yacc.c  */
#line 8138 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1202:

/* Line 1806 of yacc.c  */
#line 8142 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1203:

/* Line 1806 of yacc.c  */
#line 8143 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1204:

/* Line 1806 of yacc.c  */
#line 8150 "parser.y"
    {
	cb_emit_setenv ((yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1205:

/* Line 1806 of yacc.c  */
#line 8159 "parser.y"
    {
	cb_emit_set_attribute ((yyvsp[(1) - (3)]), setattr_val_on, setattr_val_off);
  }
    break;

  case 1208:

/* Line 1806 of yacc.c  */
#line 8171 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_BELL);
  }
    break;

  case 1209:

/* Line 1806 of yacc.c  */
#line 8175 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_BLINK);
  }
    break;

  case 1210:

/* Line 1806 of yacc.c  */
#line 8179 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 1211:

/* Line 1806 of yacc.c  */
#line 8183 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_LOWLIGHT);
  }
    break;

  case 1212:

/* Line 1806 of yacc.c  */
#line 8187 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_REVERSE);
  }
    break;

  case 1213:

/* Line 1806 of yacc.c  */
#line 8191 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_UNDERLINE);
  }
    break;

  case 1214:

/* Line 1806 of yacc.c  */
#line 8195 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_LEFTLINE);
  }
    break;

  case 1215:

/* Line 1806 of yacc.c  */
#line 8199 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_OVERLINE);
  }
    break;

  case 1216:

/* Line 1806 of yacc.c  */
#line 8208 "parser.y"
    {
	cb_emit_set_to ((yyvsp[(1) - (4)]), cb_build_ppointer ((yyvsp[(4) - (4)])));
  }
    break;

  case 1217:

/* Line 1806 of yacc.c  */
#line 8212 "parser.y"
    {
	cb_emit_set_to ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1218:

/* Line 1806 of yacc.c  */
#line 8221 "parser.y"
    {
	cb_emit_set_up_down ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1221:

/* Line 1806 of yacc.c  */
#line 8235 "parser.y"
    {
	cb_emit_set_on_off ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1224:

/* Line 1806 of yacc.c  */
#line 8249 "parser.y"
    {
	cb_emit_set_true ((yyvsp[(1) - (3)]));
  }
    break;

  case 1225:

/* Line 1806 of yacc.c  */
#line 8253 "parser.y"
    {
	cb_emit_set_false ((yyvsp[(1) - (3)]));
  }
    break;

  case 1226:

/* Line 1806 of yacc.c  */
#line 8263 "parser.y"
    {
	begin_statement ("SORT", 0);
  }
    break;

  case 1228:

/* Line 1806 of yacc.c  */
#line 8271 "parser.y"
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
  }
    break;

  case 1229:

/* Line 1806 of yacc.c  */
#line 8292 "parser.y"
    {
	if ((yyvsp[(5) - (7)]) && CB_VALID_TREE ((yyvsp[(1) - (7)]))) {
		cb_emit_sort_finish ((yyvsp[(1) - (7)]));
	}
  }
    break;

  case 1230:

/* Line 1806 of yacc.c  */
#line 8301 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1231:

/* Line 1806 of yacc.c  */
#line 8306 "parser.y"
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
  }
    break;

  case 1232:

/* Line 1806 of yacc.c  */
#line 8324 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1233:

/* Line 1806 of yacc.c  */
#line 8325 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1235:

/* Line 1806 of yacc.c  */
#line 8330 "parser.y"
    {
	/* The OC sort is a stable sort. ie. Dups are per default in order */
	/* Therefore nothing to do here */
  }
    break;

  case 1236:

/* Line 1806 of yacc.c  */
#line 8337 "parser.y"
    { (yyval) = cb_null; }
    break;

  case 1237:

/* Line 1806 of yacc.c  */
#line 8338 "parser.y"
    { (yyval) = cb_ref ((yyvsp[(3) - (3)])); }
    break;

  case 1238:

/* Line 1806 of yacc.c  */
#line 8343 "parser.y"
    {
	if ((yyvsp[(0) - (0)]) && CB_FILE_P (cb_ref ((yyvsp[(0) - (0)])))) {
		cb_error (_("File sort requires USING or INPUT PROCEDURE"));
	}
  }
    break;

  case 1239:

/* Line 1806 of yacc.c  */
#line 8349 "parser.y"
    {
	if ((yyvsp[(0) - (2)])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[(0) - (2)])))) {
			cb_error (_("USING invalid with table SORT"));
		} else {
			cb_emit_sort_using ((yyvsp[(0) - (2)]), (yyvsp[(2) - (2)]));
		}
	}
  }
    break;

  case 1240:

/* Line 1806 of yacc.c  */
#line 8359 "parser.y"
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
  }
    break;

  case 1241:

/* Line 1806 of yacc.c  */
#line 8374 "parser.y"
    {
	if ((yyvsp[(-1) - (0)]) && CB_FILE_P (cb_ref ((yyvsp[(-1) - (0)])))) {
		cb_error (_("File sort requires GIVING or OUTPUT PROCEDURE"));
	}
  }
    break;

  case 1242:

/* Line 1806 of yacc.c  */
#line 8380 "parser.y"
    {
	if ((yyvsp[(-1) - (2)])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[(-1) - (2)])))) {
			cb_error (_("GIVING invalid with table SORT"));
		} else {
			cb_emit_sort_giving ((yyvsp[(-1) - (2)]), (yyvsp[(2) - (2)]));
		}
	}
  }
    break;

  case 1243:

/* Line 1806 of yacc.c  */
#line 8390 "parser.y"
    {
	if ((yyvsp[(-1) - (4)])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[(-1) - (4)])))) {
			cb_error (_("OUTPUT PROCEDURE invalid with table SORT"));
		} else {
			cb_emit_sort_output ((yyvsp[(4) - (4)]));
		}
	}
  }
    break;

  case 1244:

/* Line 1806 of yacc.c  */
#line 8406 "parser.y"
    {
	begin_statement ("START", TERM_START);
	start_tree = cb_int (COB_EQ);
  }
    break;

  case 1246:

/* Line 1806 of yacc.c  */
#line 8416 "parser.y"
    {
	if ((yyvsp[(3) - (4)]) && !(yyvsp[(2) - (4)])) {
		cb_error_x (CB_TREE (current_statement),
			    _("SIZE/LENGTH invalid here"));
	} else {
		cb_emit_start ((yyvsp[(1) - (4)]), start_tree, (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]));
	}
  }
    break;

  case 1247:

/* Line 1806 of yacc.c  */
#line 8428 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1248:

/* Line 1806 of yacc.c  */
#line 8432 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 1249:

/* Line 1806 of yacc.c  */
#line 8439 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1250:

/* Line 1806 of yacc.c  */
#line 8443 "parser.y"
    {
	start_tree = (yyvsp[(3) - (4)]);
	(yyval) = (yyvsp[(4) - (4)]);
  }
    break;

  case 1251:

/* Line 1806 of yacc.c  */
#line 8448 "parser.y"
    {
	start_tree = cb_int (COB_FI);
	(yyval) = NULL;
  }
    break;

  case 1252:

/* Line 1806 of yacc.c  */
#line 8453 "parser.y"
    {
	start_tree = cb_int (COB_LA);
	(yyval) = NULL;
  }
    break;

  case 1253:

/* Line 1806 of yacc.c  */
#line 8460 "parser.y"
    { (yyval) = cb_int (COB_EQ); }
    break;

  case 1254:

/* Line 1806 of yacc.c  */
#line 8461 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_LE : COB_GT); }
    break;

  case 1255:

/* Line 1806 of yacc.c  */
#line 8462 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_GE : COB_LT); }
    break;

  case 1256:

/* Line 1806 of yacc.c  */
#line 8463 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_LT : COB_GE); }
    break;

  case 1257:

/* Line 1806 of yacc.c  */
#line 8464 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_GT : COB_LE); }
    break;

  case 1258:

/* Line 1806 of yacc.c  */
#line 8465 "parser.y"
    { (yyval) = cb_int (COB_NE); }
    break;

  case 1259:

/* Line 1806 of yacc.c  */
#line 8470 "parser.y"
    {
	cb_error_x (CB_TREE (current_statement),
		    _("NOT EQUAL condition disallowed on START statement"));
  }
    break;

  case 1262:

/* Line 1806 of yacc.c  */
#line 8483 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), START);
  }
    break;

  case 1263:

/* Line 1806 of yacc.c  */
#line 8487 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), START);
  }
    break;

  case 1264:

/* Line 1806 of yacc.c  */
#line 8497 "parser.y"
    {
	begin_statement ("STOP RUN", 0);
  }
    break;

  case 1265:

/* Line 1806 of yacc.c  */
#line 8501 "parser.y"
    {
	cb_emit_stop_run ((yyvsp[(4) - (4)]));
	check_unreached = 1;
	cobc_cs_check = 0;
  }
    break;

  case 1266:

/* Line 1806 of yacc.c  */
#line 8507 "parser.y"
    {
	begin_statement ("STOP", 0);
	cb_verify (cb_stop_literal_statement, "STOP literal");
	cb_emit_display (CB_LIST_INIT ((yyvsp[(2) - (2)])), cb_int0, cb_int1, NULL,
			 NULL);
	cb_emit_accept (NULL, NULL, NULL);
	cobc_cs_check = 0;
  }
    break;

  case 1267:

/* Line 1806 of yacc.c  */
#line 8519 "parser.y"
    {
	(yyval) = current_program->cb_return_code;
  }
    break;

  case 1268:

/* Line 1806 of yacc.c  */
#line 8523 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1269:

/* Line 1806 of yacc.c  */
#line 8527 "parser.y"
    {
	if ((yyvsp[(4) - (4)])) {
		(yyval) = (yyvsp[(4) - (4)]);
	} else {
		(yyval) = cb_int1;
	}
  }
    break;

  case 1270:

/* Line 1806 of yacc.c  */
#line 8535 "parser.y"
    {
	if ((yyvsp[(4) - (4)])) {
		(yyval) = (yyvsp[(4) - (4)]);
	} else {
		(yyval) = cb_int0;
	}
  }
    break;

  case 1271:

/* Line 1806 of yacc.c  */
#line 8546 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1272:

/* Line 1806 of yacc.c  */
#line 8550 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1273:

/* Line 1806 of yacc.c  */
#line 8556 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1274:

/* Line 1806 of yacc.c  */
#line 8557 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 1275:

/* Line 1806 of yacc.c  */
#line 8558 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 1276:

/* Line 1806 of yacc.c  */
#line 8559 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 1277:

/* Line 1806 of yacc.c  */
#line 8566 "parser.y"
    {
	begin_statement ("STRING", TERM_STRING);
  }
    break;

  case 1279:

/* Line 1806 of yacc.c  */
#line 8575 "parser.y"
    {
	cb_emit_string ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]));
  }
    break;

  case 1280:

/* Line 1806 of yacc.c  */
#line 8581 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1281:

/* Line 1806 of yacc.c  */
#line 8582 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1282:

/* Line 1806 of yacc.c  */
#line 8586 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1283:

/* Line 1806 of yacc.c  */
#line 8587 "parser.y"
    { (yyval) = CB_BUILD_PAIR (cb_int0, NULL); }
    break;

  case 1284:

/* Line 1806 of yacc.c  */
#line 8588 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(3) - (3)]), NULL); }
    break;

  case 1285:

/* Line 1806 of yacc.c  */
#line 8592 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1286:

/* Line 1806 of yacc.c  */
#line 8593 "parser.y"
    { (yyval) = (yyvsp[(4) - (4)]); }
    break;

  case 1287:

/* Line 1806 of yacc.c  */
#line 8598 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), STRING);
  }
    break;

  case 1288:

/* Line 1806 of yacc.c  */
#line 8602 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), STRING);
  }
    break;

  case 1289:

/* Line 1806 of yacc.c  */
#line 8612 "parser.y"
    {
	begin_statement ("SUBTRACT", TERM_SUBTRACT);
  }
    break;

  case 1291:

/* Line 1806 of yacc.c  */
#line 8621 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '-', cb_build_binary_list ((yyvsp[(1) - (4)]), '+'));
  }
    break;

  case 1292:

/* Line 1806 of yacc.c  */
#line 8625 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_list (CB_BUILD_CHAIN ((yyvsp[(3) - (6)]), (yyvsp[(1) - (6)])), '-'));
  }
    break;

  case 1293:

/* Line 1806 of yacc.c  */
#line 8629 "parser.y"
    {
	cb_emit_corresponding (cb_build_sub, (yyvsp[(4) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(5) - (6)]));
  }
    break;

  case 1294:

/* Line 1806 of yacc.c  */
#line 8636 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SUBTRACT);
  }
    break;

  case 1295:

/* Line 1806 of yacc.c  */
#line 8640 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SUBTRACT);
  }
    break;

  case 1296:

/* Line 1806 of yacc.c  */
#line 8650 "parser.y"
    {
	begin_statement ("SUPPRESS", 0);
	if (!in_declaratives) {
		cb_error_x (CB_TREE (current_statement),
			    _("SUPPRESS statement must be within DECLARATIVES"));
	}
	PENDING("SUPPRESS");
  }
    break;

  case 1299:

/* Line 1806 of yacc.c  */
#line 8668 "parser.y"
    {
	begin_statement ("TERMINATE", 0);
	PENDING("TERMINATE");
  }
    break;

  case 1301:

/* Line 1806 of yacc.c  */
#line 8677 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(1) - (1)]) != cb_error_node) {
	}
  }
    break;

  case 1302:

/* Line 1806 of yacc.c  */
#line 8683 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(2) - (2)]) != cb_error_node) {
	}
  }
    break;

  case 1303:

/* Line 1806 of yacc.c  */
#line 8694 "parser.y"
    {
	begin_statement ("TRANSFORM", 0);
  }
    break;

  case 1305:

/* Line 1806 of yacc.c  */
#line 8702 "parser.y"
    {
	cb_tree		x;

	x = cb_build_converting ((yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), cb_build_inspect_region_start ());
	cb_emit_inspect ((yyvsp[(1) - (5)]), x, cb_int0, 2);
  }
    break;

  case 1306:

/* Line 1806 of yacc.c  */
#line 8715 "parser.y"
    {
	begin_statement ("UNLOCK", 0);
  }
    break;

  case 1308:

/* Line 1806 of yacc.c  */
#line 8723 "parser.y"
    {
	if (CB_VALID_TREE ((yyvsp[(1) - (2)]))) {
		if (CB_FILE (cb_ref ((yyvsp[(1) - (2)])))->organization == COB_ORG_SORT) {
			cb_error_x (CB_TREE (current_statement),
				    _("UNLOCK invalid for SORT files"));
		} else {
			cb_emit_unlock ((yyvsp[(1) - (2)]));
		}
	}
  }
    break;

  case 1312:

/* Line 1806 of yacc.c  */
#line 8746 "parser.y"
    {
	begin_statement ("UNSTRING", TERM_UNSTRING);
  }
    break;

  case 1314:

/* Line 1806 of yacc.c  */
#line 8756 "parser.y"
    {
	cb_emit_unstring ((yyvsp[(1) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(4) - (6)]), (yyvsp[(5) - (6)]));
  }
    break;

  case 1315:

/* Line 1806 of yacc.c  */
#line 8762 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1316:

/* Line 1806 of yacc.c  */
#line 8764 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1317:

/* Line 1806 of yacc.c  */
#line 8768 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1318:

/* Line 1806 of yacc.c  */
#line 8770 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 1319:

/* Line 1806 of yacc.c  */
#line 8775 "parser.y"
    {
	(yyval) = cb_build_unstring_delimited ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1320:

/* Line 1806 of yacc.c  */
#line 8781 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(2) - (2)])); }
    break;

  case 1321:

/* Line 1806 of yacc.c  */
#line 8783 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1322:

/* Line 1806 of yacc.c  */
#line 8788 "parser.y"
    {
	(yyval) = cb_build_unstring_into ((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1323:

/* Line 1806 of yacc.c  */
#line 8794 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1324:

/* Line 1806 of yacc.c  */
#line 8795 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1325:

/* Line 1806 of yacc.c  */
#line 8799 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1326:

/* Line 1806 of yacc.c  */
#line 8800 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1327:

/* Line 1806 of yacc.c  */
#line 8804 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1328:

/* Line 1806 of yacc.c  */
#line 8805 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1329:

/* Line 1806 of yacc.c  */
#line 8810 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), UNSTRING);
  }
    break;

  case 1330:

/* Line 1806 of yacc.c  */
#line 8814 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), UNSTRING);
  }
    break;

  case 1331:

/* Line 1806 of yacc.c  */
#line 8824 "parser.y"
    {
	skip_statements = 0;
	in_debugging = 0;
  }
    break;

  case 1338:

/* Line 1806 of yacc.c  */
#line 8842 "parser.y"
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
  }
    break;

  case 1339:

/* Line 1806 of yacc.c  */
#line 8867 "parser.y"
    {
	use_global_ind = 0;
  }
    break;

  case 1340:

/* Line 1806 of yacc.c  */
#line 8871 "parser.y"
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("GLOBAL is invalid in a user FUNCTION"));
	} else {
		use_global_ind = 1;
		current_program->flag_global_use = 1;
	}
  }
    break;

  case 1341:

/* Line 1806 of yacc.c  */
#line 8883 "parser.y"
    {
	cb_tree		l;

	for (l = (yyvsp[(1) - (1)]); l; l = CB_CHAIN (l)) {
		if (CB_VALID_TREE (CB_VALUE (l))) {
			setup_use_file (CB_FILE (cb_ref (CB_VALUE (l))));
		}
	}
  }
    break;

  case 1342:

/* Line 1806 of yacc.c  */
#line 8893 "parser.y"
    {
	current_program->global_handler[COB_OPEN_INPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_INPUT].handler_prog = current_program;
  }
    break;

  case 1343:

/* Line 1806 of yacc.c  */
#line 8898 "parser.y"
    {
	current_program->global_handler[COB_OPEN_OUTPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_OUTPUT].handler_prog = current_program;
  }
    break;

  case 1344:

/* Line 1806 of yacc.c  */
#line 8903 "parser.y"
    {
	current_program->global_handler[COB_OPEN_I_O].handler_label = current_section;
	current_program->global_handler[COB_OPEN_I_O].handler_prog = current_program;
  }
    break;

  case 1345:

/* Line 1806 of yacc.c  */
#line 8908 "parser.y"
    {
	current_program->global_handler[COB_OPEN_EXTEND].handler_label = current_section;
	current_program->global_handler[COB_OPEN_EXTEND].handler_prog = current_program;
  }
    break;

  case 1346:

/* Line 1806 of yacc.c  */
#line 8916 "parser.y"
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
  }
    break;

  case 1349:

/* Line 1806 of yacc.c  */
#line 8959 "parser.y"
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
  }
    break;

  case 1350:

/* Line 1806 of yacc.c  */
#line 8999 "parser.y"
    {
	if (current_program->flag_debugging) {
		if (current_program->all_procedure) {
			cb_error (_("Duplicate USE DEBUGGING ON ALL PROCEDURES"));
		} else {
			current_program->all_procedure = current_section;
		}
	}
  }
    break;

  case 1351:

/* Line 1806 of yacc.c  */
#line 9009 "parser.y"
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
  }
    break;

  case 1356:

/* Line 1806 of yacc.c  */
#line 9039 "parser.y"
    {
	if (current_program->nested_level) {
		cb_error (_("USE AT is invalid in nested program"));
	}
  }
    break;

  case 1357:

/* Line 1806 of yacc.c  */
#line 9048 "parser.y"
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM START"));
	/* emit_entry ("_START", 0, NULL); */
	PENDING ("USE AT PROGRAM START");
  }
    break;

  case 1358:

/* Line 1806 of yacc.c  */
#line 9054 "parser.y"
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM END"));
	/* emit_entry ("_END", 0, NULL); */
	PENDING ("USE AT PROGRAM END");
  }
    break;

  case 1359:

/* Line 1806 of yacc.c  */
#line 9064 "parser.y"
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE BEFORE REPORTING"));
	PENDING ("USE BEFORE REPORTING");
  }
    break;

  case 1360:

/* Line 1806 of yacc.c  */
#line 9073 "parser.y"
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE AFTER EXCEPTION CONDITION"));
	PENDING ("USE AFTER EXCEPTION CONDITION");
  }
    break;

  case 1363:

/* Line 1806 of yacc.c  */
#line 9089 "parser.y"
    {
	begin_statement ("WRITE", TERM_WRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
    break;

  case 1365:

/* Line 1806 of yacc.c  */
#line 9101 "parser.y"
    {
	if (CB_VALID_TREE ((yyvsp[(1) - (5)]))) {
		cb_emit_write ((yyvsp[(1) - (5)]), (yyvsp[(2) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]));
	}
	start_debug = save_debug;
  }
    break;

  case 1366:

/* Line 1806 of yacc.c  */
#line 9110 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1367:

/* Line 1806 of yacc.c  */
#line 9111 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1368:

/* Line 1806 of yacc.c  */
#line 9116 "parser.y"
    {
	(yyval) = cb_int0;
  }
    break;

  case 1369:

/* Line 1806 of yacc.c  */
#line 9120 "parser.y"
    {
	(yyval) = cb_build_write_advancing_lines ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
  }
    break;

  case 1370:

/* Line 1806 of yacc.c  */
#line 9124 "parser.y"
    {
	(yyval) = cb_build_write_advancing_mnemonic ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1371:

/* Line 1806 of yacc.c  */
#line 9128 "parser.y"
    {
	(yyval) = cb_build_write_advancing_page ((yyvsp[(1) - (3)]));
  }
    break;

  case 1372:

/* Line 1806 of yacc.c  */
#line 9134 "parser.y"
    { (yyval) = CB_BEFORE; }
    break;

  case 1373:

/* Line 1806 of yacc.c  */
#line 9135 "parser.y"
    { (yyval) = CB_AFTER; }
    break;

  case 1376:

/* Line 1806 of yacc.c  */
#line 9145 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), WRITE);
  }
    break;

  case 1377:

/* Line 1806 of yacc.c  */
#line 9149 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), WRITE);
  }
    break;

  case 1380:

/* Line 1806 of yacc.c  */
#line 9166 "parser.y"
    {
	current_statement->handler_id = COB_EC_IMP_ACCEPT;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1382:

/* Line 1806 of yacc.c  */
#line 9176 "parser.y"
    {
	current_statement->handler_id = COB_EC_IMP_ACCEPT;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1385:

/* Line 1806 of yacc.c  */
#line 9189 "parser.y"
    {
	current_statement->handler_id = COB_EC_IMP_DISPLAY;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1387:

/* Line 1806 of yacc.c  */
#line 9199 "parser.y"
    {
	current_statement->handler_id = COB_EC_IMP_DISPLAY;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1390:

/* Line 1806 of yacc.c  */
#line 9214 "parser.y"
    {
	current_statement->handler_id = COB_EC_SIZE;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1392:

/* Line 1806 of yacc.c  */
#line 9224 "parser.y"
    {
	current_statement->handler_id = COB_EC_SIZE;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1395:

/* Line 1806 of yacc.c  */
#line 9241 "parser.y"
    {
	current_statement->handler_id = COB_EC_OVERFLOW;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1397:

/* Line 1806 of yacc.c  */
#line 9252 "parser.y"
    {
	current_statement->handler_id = COB_EC_OVERFLOW;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1403:

/* Line 1806 of yacc.c  */
#line 9275 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_AT_END;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1404:

/* Line 1806 of yacc.c  */
#line 9284 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_AT_END;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1408:

/* Line 1806 of yacc.c  */
#line 9301 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_EOP;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1409:

/* Line 1806 of yacc.c  */
#line 9310 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_EOP;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1412:

/* Line 1806 of yacc.c  */
#line 9327 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_INVALID_KEY;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1414:

/* Line 1806 of yacc.c  */
#line 9337 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_INVALID_KEY;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1415:

/* Line 1806 of yacc.c  */
#line 9347 "parser.y"
    {
	(yyval) = cb_one;
  }
    break;

  case 1416:

/* Line 1806 of yacc.c  */
#line 9351 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
  }
    break;

  case 1417:

/* Line 1806 of yacc.c  */
#line 9361 "parser.y"
    {
	(yyval) = cb_build_cond ((yyvsp[(1) - (1)]));
  }
    break;

  case 1418:

/* Line 1806 of yacc.c  */
#line 9368 "parser.y"
    {
	(yyval) = cb_build_expr ((yyvsp[(1) - (1)]));
  }
    break;

  case 1419:

/* Line 1806 of yacc.c  */
#line 9374 "parser.y"
    {
	current_expr = NULL;
  }
    break;

  case 1420:

/* Line 1806 of yacc.c  */
#line 9378 "parser.y"
    {
	(yyval) = cb_list_reverse (current_expr);
  }
    break;

  case 1424:

/* Line 1806 of yacc.c  */
#line 9391 "parser.y"
    {
	if (CB_REFERENCE_P ((yyvsp[(1) - (1)])) && CB_CLASS_NAME_P (cb_ref ((yyvsp[(1) - (1)])))) {
		push_expr ('C', (yyvsp[(1) - (1)]));
	} else {
		push_expr ('x', (yyvsp[(1) - (1)]));
	}
  }
    break;

  case 1425:

/* Line 1806 of yacc.c  */
#line 9399 "parser.y"
    { push_expr ('(', NULL); }
    break;

  case 1426:

/* Line 1806 of yacc.c  */
#line 9400 "parser.y"
    { push_expr (')', NULL); }
    break;

  case 1427:

/* Line 1806 of yacc.c  */
#line 9402 "parser.y"
    { push_expr ('+', NULL); }
    break;

  case 1428:

/* Line 1806 of yacc.c  */
#line 9403 "parser.y"
    { push_expr ('-', NULL); }
    break;

  case 1429:

/* Line 1806 of yacc.c  */
#line 9404 "parser.y"
    { push_expr ('*', NULL); }
    break;

  case 1430:

/* Line 1806 of yacc.c  */
#line 9405 "parser.y"
    { push_expr ('/', NULL); }
    break;

  case 1431:

/* Line 1806 of yacc.c  */
#line 9406 "parser.y"
    { push_expr ('^', NULL); }
    break;

  case 1432:

/* Line 1806 of yacc.c  */
#line 9408 "parser.y"
    { push_expr ('=', NULL); }
    break;

  case 1433:

/* Line 1806 of yacc.c  */
#line 9409 "parser.y"
    { push_expr ('>', NULL); }
    break;

  case 1434:

/* Line 1806 of yacc.c  */
#line 9410 "parser.y"
    { push_expr ('<', NULL); }
    break;

  case 1435:

/* Line 1806 of yacc.c  */
#line 9411 "parser.y"
    { push_expr (']', NULL); }
    break;

  case 1436:

/* Line 1806 of yacc.c  */
#line 9412 "parser.y"
    { push_expr ('[', NULL); }
    break;

  case 1437:

/* Line 1806 of yacc.c  */
#line 9413 "parser.y"
    { push_expr ('~', NULL); }
    break;

  case 1438:

/* Line 1806 of yacc.c  */
#line 9415 "parser.y"
    { push_expr ('!', NULL); }
    break;

  case 1439:

/* Line 1806 of yacc.c  */
#line 9416 "parser.y"
    { push_expr ('&', NULL); }
    break;

  case 1440:

/* Line 1806 of yacc.c  */
#line 9417 "parser.y"
    { push_expr ('|', NULL); }
    break;

  case 1441:

/* Line 1806 of yacc.c  */
#line 9419 "parser.y"
    { push_expr ('O', NULL); }
    break;

  case 1442:

/* Line 1806 of yacc.c  */
#line 9420 "parser.y"
    { push_expr ('9', NULL); }
    break;

  case 1443:

/* Line 1806 of yacc.c  */
#line 9421 "parser.y"
    { push_expr ('A', NULL); }
    break;

  case 1444:

/* Line 1806 of yacc.c  */
#line 9422 "parser.y"
    { push_expr ('L', NULL); }
    break;

  case 1445:

/* Line 1806 of yacc.c  */
#line 9423 "parser.y"
    { push_expr ('U', NULL); }
    break;

  case 1446:

/* Line 1806 of yacc.c  */
#line 9426 "parser.y"
    { push_expr ('P', NULL); }
    break;

  case 1447:

/* Line 1806 of yacc.c  */
#line 9427 "parser.y"
    { push_expr ('N', NULL); }
    break;

  case 1456:

/* Line 1806 of yacc.c  */
#line 9457 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1457:

/* Line 1806 of yacc.c  */
#line 9461 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1461:

/* Line 1806 of yacc.c  */
#line 9472 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '+', (yyvsp[(3) - (3)])); }
    break;

  case 1462:

/* Line 1806 of yacc.c  */
#line 9473 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '-', (yyvsp[(3) - (3)])); }
    break;

  case 1463:

/* Line 1806 of yacc.c  */
#line 9474 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1464:

/* Line 1806 of yacc.c  */
#line 9478 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '*', (yyvsp[(3) - (3)])); }
    break;

  case 1465:

/* Line 1806 of yacc.c  */
#line 9479 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '/', (yyvsp[(3) - (3)])); }
    break;

  case 1466:

/* Line 1806 of yacc.c  */
#line 9480 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1467:

/* Line 1806 of yacc.c  */
#line 9485 "parser.y"
    {
	(yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '^', (yyvsp[(3) - (3)]));
  }
    break;

  case 1468:

/* Line 1806 of yacc.c  */
#line 9488 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1469:

/* Line 1806 of yacc.c  */
#line 9492 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1470:

/* Line 1806 of yacc.c  */
#line 9493 "parser.y"
    { (yyval) = cb_build_binary_op (cb_zero, '-', (yyvsp[(2) - (2)])); }
    break;

  case 1471:

/* Line 1806 of yacc.c  */
#line 9494 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1472:

/* Line 1806 of yacc.c  */
#line 9497 "parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 1473:

/* Line 1806 of yacc.c  */
#line 9498 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1474:

/* Line 1806 of yacc.c  */
#line 9509 "parser.y"
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
  }
    break;

  case 1475:

/* Line 1806 of yacc.c  */
#line 9521 "parser.y"
    {
	if (CB_FILE_P (cb_ref ((yyvsp[(3) - (3)])))) {
		(yyval) = CB_FILE (cb_ref ((yyvsp[(3) - (3)])))->linage_ctr;
	} else {
		cb_error_x ((yyvsp[(3) - (3)]), _("'%s' is not a file name"), CB_NAME ((yyvsp[(3) - (3)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1476:

/* Line 1806 of yacc.c  */
#line 9530 "parser.y"
    {
	if (report_count > 1) {
		cb_error (_("LINE-COUNTER must be qualified here"));
		(yyval) = cb_error_node;
	} else if (report_count == 0) {
		cb_error (_("Invalid LINE-COUNTER usage"));
		(yyval) = cb_error_node;
	} else {
		(yyval) = report_instance->line_counter;
	}
  }
    break;

  case 1477:

/* Line 1806 of yacc.c  */
#line 9542 "parser.y"
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[(3) - (3)])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[(3) - (3)])))->line_counter;
	} else {
		cb_error_x ((yyvsp[(3) - (3)]), _("'%s' is not a report name"), CB_NAME ((yyvsp[(3) - (3)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1478:

/* Line 1806 of yacc.c  */
#line 9551 "parser.y"
    {
	if (report_count > 1) {
		cb_error (_("PAGE-COUNTER must be qualified here"));
		(yyval) = cb_error_node;
	} else if (report_count == 0) {
		cb_error (_("Invalid PAGE-COUNTER usage"));
		(yyval) = cb_error_node;
	} else {
		(yyval) = report_instance->page_counter;
	}
  }
    break;

  case 1479:

/* Line 1806 of yacc.c  */
#line 9563 "parser.y"
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[(3) - (3)])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[(3) - (3)])))->page_counter;
	} else {
		cb_error_x ((yyvsp[(3) - (3)]), _("'%s' is not a report name"), CB_NAME ((yyvsp[(3) - (3)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1480:

/* Line 1806 of yacc.c  */
#line 9577 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1481:

/* Line 1806 of yacc.c  */
#line 9579 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1482:

/* Line 1806 of yacc.c  */
#line 9584 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
  }
    break;

  case 1483:

/* Line 1806 of yacc.c  */
#line 9592 "parser.y"
    { cb_build_identifier ((yyvsp[(1) - (1)]), 0); }
    break;

  case 1484:

/* Line 1806 of yacc.c  */
#line 9599 "parser.y"
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
  }
    break;

  case 1485:

/* Line 1806 of yacc.c  */
#line 9619 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1486:

/* Line 1806 of yacc.c  */
#line 9623 "parser.y"
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
  }
    break;

  case 1487:

/* Line 1806 of yacc.c  */
#line 9644 "parser.y"
    {
	if (CB_FILE_P (cb_ref ((yyvsp[(1) - (1)])))) {
		(yyval) = (yyvsp[(1) - (1)]);
	} else {
		cb_error_x ((yyvsp[(1) - (1)]), _("'%s' is not a file name"), CB_NAME ((yyvsp[(1) - (1)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1488:

/* Line 1806 of yacc.c  */
#line 9685 "parser.y"
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[(1) - (1)])))) {
		(yyval) = (yyvsp[(1) - (1)]);
	} else {
		cb_error_x ((yyvsp[(1) - (1)]), _("'%s' is not a report name"), CB_NAME ((yyvsp[(1) - (1)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1489:

/* Line 1806 of yacc.c  */
#line 9698 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1490:

/* Line 1806 of yacc.c  */
#line 9700 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1491:

/* Line 1806 of yacc.c  */
#line 9704 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1492:

/* Line 1806 of yacc.c  */
#line 9710 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1493:

/* Line 1806 of yacc.c  */
#line 9712 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1494:

/* Line 1806 of yacc.c  */
#line 9717 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_REFERENCE ((yyval))->offset = CB_TREE (current_section);
	CB_REFERENCE ((yyval))->flag_in_decl = !!in_declaratives;
	CB_REFERENCE ((yyval))->section = current_section;
	CB_REFERENCE ((yyval))->paragraph = current_paragraph;
	CB_ADD_TO_CHAIN ((yyval), current_program->label_list);
  }
    break;

  case 1497:

/* Line 1806 of yacc.c  */
#line 9731 "parser.y"
    {
	CB_REFERENCE ((yyvsp[(1) - (3)]))->chain = (yyvsp[(3) - (3)]);
  }
    break;

  case 1498:

/* Line 1806 of yacc.c  */
#line 9738 "parser.y"
    {
	(yyval) = cb_build_reference ((char *)(CB_LITERAL ((yyvsp[(1) - (1)]))->data));
	(yyval)->source_file = (yyvsp[(1) - (1)])->source_file;
	(yyval)->source_line = (yyvsp[(1) - (1)])->source_line;
  }
    break;

  case 1499:

/* Line 1806 of yacc.c  */
#line 9748 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1500:

/* Line 1806 of yacc.c  */
#line 9749 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1501:

/* Line 1806 of yacc.c  */
#line 9754 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
    break;

  case 1502:

/* Line 1806 of yacc.c  */
#line 9762 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
    break;

  case 1503:

/* Line 1806 of yacc.c  */
#line 9770 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1504:

/* Line 1806 of yacc.c  */
#line 9774 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1505:

/* Line 1806 of yacc.c  */
#line 9781 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_REFERENCE((yyval))->flag_optional = 1;
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
    break;

  case 1508:

/* Line 1806 of yacc.c  */
#line 9797 "parser.y"
    {
	if (CB_WORD_COUNT ((yyvsp[(1) - (1)])) > 0) {
		redefinition_error ((yyvsp[(1) - (1)]));
		(yyval) = cb_error_node;
	} else {
		(yyval) = (yyvsp[(1) - (1)]);
	}
  }
    break;

  case 1509:

/* Line 1806 of yacc.c  */
#line 9811 "parser.y"
    {
	if (CB_REFERENCE ((yyvsp[(1) - (1)]))->flag_duped || CB_WORD_COUNT ((yyvsp[(1) - (1)])) > 0) {
		redefinition_error ((yyvsp[(1) - (1)]));
		(yyval) = NULL;
	} else {
		CB_WORD_COUNT ((yyvsp[(1) - (1)]))++;
		(yyval) = (yyvsp[(1) - (1)]);
	}
  }
    break;

  case 1510:

/* Line 1806 of yacc.c  */
#line 9828 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1511:

/* Line 1806 of yacc.c  */
#line 9832 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1514:

/* Line 1806 of yacc.c  */
#line 9841 "parser.y"
    {
	(yyval) = cb_build_address ((yyvsp[(3) - (3)]));
  }
    break;

  case 1515:

/* Line 1806 of yacc.c  */
#line 9848 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1516:

/* Line 1806 of yacc.c  */
#line 9852 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1521:

/* Line 1806 of yacc.c  */
#line 9863 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1522:

/* Line 1806 of yacc.c  */
#line 9867 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1523:

/* Line 1806 of yacc.c  */
#line 9871 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1524:

/* Line 1806 of yacc.c  */
#line 9875 "parser.y"
    {
	(yyval) = cb_build_ppointer ((yyvsp[(4) - (4)]));
  }
    break;

  case 1525:

/* Line 1806 of yacc.c  */
#line 9879 "parser.y"
    {
	(yyval) = cb_build_address ((yyvsp[(3) - (3)]));
  }
    break;

  case 1526:

/* Line 1806 of yacc.c  */
#line 9883 "parser.y"
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
  }
    break;

  case 1527:

/* Line 1806 of yacc.c  */
#line 9904 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1528:

/* Line 1806 of yacc.c  */
#line 9908 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1536:

/* Line 1806 of yacc.c  */
#line 9925 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1537:

/* Line 1806 of yacc.c  */
#line 9929 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1538:

/* Line 1806 of yacc.c  */
#line 9933 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1554:

/* Line 1806 of yacc.c  */
#line 9980 "parser.y"
    {
	(yyval) = cb_zero;
  }
    break;

  case 1562:

/* Line 1806 of yacc.c  */
#line 10004 "parser.y"
    { (yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0); }
    break;

  case 1563:

/* Line 1806 of yacc.c  */
#line 10008 "parser.y"
    { (yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 1); }
    break;

  case 1564:

/* Line 1806 of yacc.c  */
#line 10012 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1565:

/* Line 1806 of yacc.c  */
#line 10013 "parser.y"
    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 1566:

/* Line 1806 of yacc.c  */
#line 10017 "parser.y"
    { (yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0); }
    break;

  case 1567:

/* Line 1806 of yacc.c  */
#line 10022 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (3)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (3)]));
	}
  }
    break;

  case 1568:

/* Line 1806 of yacc.c  */
#line 10029 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (2)]));
	}
  }
    break;

  case 1569:

/* Line 1806 of yacc.c  */
#line 10036 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (2)]));
	}
  }
    break;

  case 1570:

/* Line 1806 of yacc.c  */
#line 10043 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (1)]));
	}
  }
    break;

  case 1571:

/* Line 1806 of yacc.c  */
#line 10053 "parser.y"
    {
	(yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0);
  }
    break;

  case 1572:

/* Line 1806 of yacc.c  */
#line 10060 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (3)]);
	if (CB_REFERENCE_P ((yyvsp[(1) - (3)]))) {
		CB_REFERENCE ((yyvsp[(1) - (3)]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (3)]));
	}
  }
    break;

  case 1573:

/* Line 1806 of yacc.c  */
#line 10070 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
	if (CB_REFERENCE_P ((yyvsp[(1) - (2)]))) {
		CB_REFERENCE ((yyvsp[(1) - (2)]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (2)]));
	}
  }
    break;

  case 1574:

/* Line 1806 of yacc.c  */
#line 10080 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
	if (CB_REFERENCE_P ((yyvsp[(1) - (2)]))) {
		CB_REFERENCE ((yyvsp[(1) - (2)]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (2)]));
	}
  }
    break;

  case 1575:

/* Line 1806 of yacc.c  */
#line 10090 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	if (CB_REFERENCE_P ((yyvsp[(1) - (1)]))) {
		CB_REFERENCE ((yyvsp[(1) - (1)]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (1)]));
	}
  }
    break;

  case 1576:

/* Line 1806 of yacc.c  */
#line 10103 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1577:

/* Line 1806 of yacc.c  */
#line 10107 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (3)]);
	CB_REFERENCE ((yyvsp[(1) - (3)]))->chain = (yyvsp[(3) - (3)]);
  }
    break;

  case 1578:

/* Line 1806 of yacc.c  */
#line 10115 "parser.y"
    {
	(yyval) = (yyvsp[(0) - (3)]);
	CB_REFERENCE ((yyvsp[(0) - (3)]))->subs = cb_list_reverse ((yyvsp[(2) - (3)]));
  }
    break;

  case 1579:

/* Line 1806 of yacc.c  */
#line 10123 "parser.y"
    {
	CB_REFERENCE ((yyvsp[(0) - (4)]))->offset = (yyvsp[(2) - (4)]);
  }
    break;

  case 1580:

/* Line 1806 of yacc.c  */
#line 10127 "parser.y"
    {
	CB_REFERENCE ((yyvsp[(0) - (5)]))->offset = (yyvsp[(2) - (5)]);
	CB_REFERENCE ((yyvsp[(0) - (5)]))->length = (yyvsp[(4) - (5)]);
  }
    break;

  case 1581:

/* Line 1806 of yacc.c  */
#line 10137 "parser.y"
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
  }
    break;

  case 1582:

/* Line 1806 of yacc.c  */
#line 10152 "parser.y"
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
  }
    break;

  case 1583:

/* Line 1806 of yacc.c  */
#line 10175 "parser.y"
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
		if (n < 1) {
			cb_error (_("Invalid integer"));
			(yyval) = cb_int1;
		} else {
			(yyval) = (yyvsp[(1) - (1)]);
		}
	}
  }
    break;

  case 1584:

/* Line 1806 of yacc.c  */
#line 10198 "parser.y"
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
  }
    break;

  case 1585:

/* Line 1806 of yacc.c  */
#line 10213 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 1586:

/* Line 1806 of yacc.c  */
#line 10214 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 1587:

/* Line 1806 of yacc.c  */
#line 10215 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 1588:

/* Line 1806 of yacc.c  */
#line 10216 "parser.y"
    { (yyval) = cb_high; }
    break;

  case 1589:

/* Line 1806 of yacc.c  */
#line 10217 "parser.y"
    { (yyval) = cb_low; }
    break;

  case 1590:

/* Line 1806 of yacc.c  */
#line 10218 "parser.y"
    { (yyval) = cb_null; }
    break;

  case 1591:

/* Line 1806 of yacc.c  */
#line 10223 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1592:

/* Line 1806 of yacc.c  */
#line 10227 "parser.y"
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
  }
    break;

  case 1593:

/* Line 1806 of yacc.c  */
#line 10244 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1594:

/* Line 1806 of yacc.c  */
#line 10248 "parser.y"
    {
	(yyval) = cb_concat_literals ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1595:

/* Line 1806 of yacc.c  */
#line 10254 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1596:

/* Line 1806 of yacc.c  */
#line 10255 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 1597:

/* Line 1806 of yacc.c  */
#line 10256 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 1598:

/* Line 1806 of yacc.c  */
#line 10257 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 1599:

/* Line 1806 of yacc.c  */
#line 10258 "parser.y"
    { (yyval) = cb_high; }
    break;

  case 1600:

/* Line 1806 of yacc.c  */
#line 10259 "parser.y"
    { (yyval) = cb_low; }
    break;

  case 1601:

/* Line 1806 of yacc.c  */
#line 10260 "parser.y"
    { (yyval) = cb_null; }
    break;

  case 1602:

/* Line 1806 of yacc.c  */
#line 10267 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (2)]), NULL, (yyvsp[(2) - (2)]), 0);
  }
    break;

  case 1603:

/* Line 1806 of yacc.c  */
#line 10271 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), CB_LIST_INIT ((yyvsp[(3) - (5)])), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1604:

/* Line 1806 of yacc.c  */
#line 10275 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1605:

/* Line 1806 of yacc.c  */
#line 10279 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1606:

/* Line 1806 of yacc.c  */
#line 10283 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]), NULL, 0);
  }
    break;

  case 1607:

/* Line 1806 of yacc.c  */
#line 10287 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1608:

/* Line 1806 of yacc.c  */
#line 10291 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1609:

/* Line 1806 of yacc.c  */
#line 10295 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1610:

/* Line 1806 of yacc.c  */
#line 10299 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), NULL, 0);
  }
    break;

  case 1611:

/* Line 1806 of yacc.c  */
#line 10303 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), NULL, 1);
  }
    break;

  case 1623:

/* Line 1806 of yacc.c  */
#line 10330 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1624:

/* Line 1806 of yacc.c  */
#line 10334 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (4)]), NULL);
  }
    break;

  case 1625:

/* Line 1806 of yacc.c  */
#line 10338 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));
  }
    break;

  case 1626:

/* Line 1806 of yacc.c  */
#line 10345 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1627:

/* Line 1806 of yacc.c  */
#line 10349 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (3)]);
  }
    break;

  case 1628:

/* Line 1806 of yacc.c  */
#line 10353 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1629:

/* Line 1806 of yacc.c  */
#line 10360 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	(yyval) = cb_list_add (x, cb_int0);
  }
    break;

  case 1630:

/* Line 1806 of yacc.c  */
#line 10367 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, cb_int1);
  }
    break;

  case 1631:

/* Line 1806 of yacc.c  */
#line 10374 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, cb_int2);
  }
    break;

  case 1632:

/* Line 1806 of yacc.c  */
#line 10384 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	(yyval) = cb_list_add (x, cb_null);
  }
    break;

  case 1633:

/* Line 1806 of yacc.c  */
#line 10391 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, (yyvsp[(3) - (3)]));
  }
    break;

  case 1634:

/* Line 1806 of yacc.c  */
#line 10401 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	(yyval) = cb_list_add (x, cb_null);
  }
    break;

  case 1635:

/* Line 1806 of yacc.c  */
#line 10408 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, cb_ref ((yyvsp[(3) - (3)])));
  }
    break;

  case 1636:

/* Line 1806 of yacc.c  */
#line 10419 "parser.y"
    {
	non_const_word = 1;
  }
    break;

  case 1637:

/* Line 1806 of yacc.c  */
#line 10427 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1638:

/* Line 1806 of yacc.c  */
#line 10428 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1639:

/* Line 1806 of yacc.c  */
#line 10432 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1640:

/* Line 1806 of yacc.c  */
#line 10433 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1641:

/* Line 1806 of yacc.c  */
#line 10437 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1642:

/* Line 1806 of yacc.c  */
#line 10438 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1643:

/* Line 1806 of yacc.c  */
#line 10443 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1644:

/* Line 1806 of yacc.c  */
#line 10447 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1645:

/* Line 1806 of yacc.c  */
#line 10454 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1646:

/* Line 1806 of yacc.c  */
#line 10458 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1647:

/* Line 1806 of yacc.c  */
#line 10465 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1648:

/* Line 1806 of yacc.c  */
#line 10466 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1649:

/* Line 1806 of yacc.c  */
#line 10467 "parser.y"
    { (yyval) = cb_int2; }
    break;

  case 1650:

/* Line 1806 of yacc.c  */
#line 10471 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1651:

/* Line 1806 of yacc.c  */
#line 10472 "parser.y"
    { (yyval) = cb_true; }
    break;

  case 1652:

/* Line 1806 of yacc.c  */
#line 10476 "parser.y"
    { (yyval) = cb_int (cb_flag_optional_file); }
    break;

  case 1653:

/* Line 1806 of yacc.c  */
#line 10477 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1654:

/* Line 1806 of yacc.c  */
#line 10478 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1655:

/* Line 1806 of yacc.c  */
#line 10483 "parser.y"
    {
	(yyval) = cb_int0;
  }
    break;

  case 1656:

/* Line 1806 of yacc.c  */
#line 10487 "parser.y"
    {
	if ((yyvsp[(2) - (2)])) {
		(yyval) = (yyvsp[(2) - (2)]);
	} else {
		(yyval) = cb_int (COB_STORE_ROUND);
	}
	cobc_cs_check = 0;
  }
    break;

  case 1657:

/* Line 1806 of yacc.c  */
#line 10499 "parser.y"
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
    break;

  case 1658:

/* Line 1806 of yacc.c  */
#line 10504 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
	cobc_cs_check = 0;
  }
    break;

  case 1659:

/* Line 1806 of yacc.c  */
#line 10512 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_AWAY_FROM_ZERO);
  }
    break;

  case 1660:

/* Line 1806 of yacc.c  */
#line 10516 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_AWAY_FROM_ZERO);
  }
    break;

  case 1661:

/* Line 1806 of yacc.c  */
#line 10520 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_EVEN);
  }
    break;

  case 1662:

/* Line 1806 of yacc.c  */
#line 10524 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_TOWARD_ZERO);
  }
    break;

  case 1663:

/* Line 1806 of yacc.c  */
#line 10528 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_PROHIBITED);
  }
    break;

  case 1664:

/* Line 1806 of yacc.c  */
#line 10532 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_GREATER);
  }
    break;

  case 1665:

/* Line 1806 of yacc.c  */
#line 10536 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_LESSER);
  }
    break;

  case 1666:

/* Line 1806 of yacc.c  */
#line 10540 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TRUNCATION);
  }
    break;

  case 1667:

/* Line 1806 of yacc.c  */
#line 10546 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1668:

/* Line 1806 of yacc.c  */
#line 10547 "parser.y"
    { (yyval) = cb_int1; }
    break;



/* Line 1806 of yacc.c  */
#line 18797 "parser.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
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
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
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
      if (!yypact_value_is_default (yyn))
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
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



/* Line 2067 of yacc.c  */
#line 10718 "parser.y"


