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
     FORMATTED_CURRENT_FUNC = 447,
     FORMATTED_DATE_FUNC = 448,
     FORMATTED_DATETIME_FUNC = 449,
     FORMATTED_TIME_FUNC = 450,
     FREE = 451,
     FROM = 452,
     FROM_CRT = 453,
     FULL = 454,
     FUNCTION = 455,
     FUNCTION_ID = 456,
     FUNCTION_NAME = 457,
     GENERATE = 458,
     GIVING = 459,
     GLOBAL = 460,
     GO = 461,
     GOBACK = 462,
     GREATER = 463,
     GREATER_OR_EQUAL = 464,
     GROUP = 465,
     HEADING = 466,
     HIGHLIGHT = 467,
     HIGH_VALUE = 468,
     ID = 469,
     IDENTIFICATION = 470,
     IF = 471,
     IGNORE = 472,
     IGNORING = 473,
     IN = 474,
     INDEX = 475,
     INDEXED = 476,
     INDICATE = 477,
     INITIALIZE = 478,
     INITIALIZED = 479,
     INITIATE = 480,
     INPUT = 481,
     INPUT_OUTPUT = 482,
     INSPECT = 483,
     INTO = 484,
     INTRINSIC = 485,
     INVALID = 486,
     INVALID_KEY = 487,
     IS = 488,
     I_O = 489,
     I_O_CONTROL = 490,
     JUSTIFIED = 491,
     KEPT = 492,
     KEY = 493,
     KEYBOARD = 494,
     LABEL = 495,
     LAST = 496,
     LEADING = 497,
     LEFT = 498,
     LEFTLINE = 499,
     LENGTH = 500,
     LENGTH_OF = 501,
     LESS = 502,
     LESS_OR_EQUAL = 503,
     LIMIT = 504,
     LIMITS = 505,
     LINAGE = 506,
     LINAGE_COUNTER = 507,
     LINE = 508,
     LINE_COUNTER = 509,
     LINES = 510,
     LINKAGE = 511,
     LITERAL = 512,
     LOCALE = 513,
     LOCALE_DATE_FUNC = 514,
     LOCALE_TIME_FUNC = 515,
     LOCALE_TIME_FROM_FUNC = 516,
     LOCAL_STORAGE = 517,
     LOCK = 518,
     LOWER = 519,
     LOWER_CASE_FUNC = 520,
     LOWLIGHT = 521,
     LOW_VALUE = 522,
     MANUAL = 523,
     MEMORY = 524,
     MERGE = 525,
     MINUS = 526,
     MNEMONIC_NAME = 527,
     MODE = 528,
     MOVE = 529,
     MULTIPLE = 530,
     MULTIPLY = 531,
     NAME = 532,
     NATIONAL = 533,
     NATIONAL_EDITED = 534,
     NATIONAL_OF_FUNC = 535,
     NATIVE = 536,
     NEAREST_AWAY_FROM_ZERO = 537,
     NEAREST_EVEN = 538,
     NEAREST_TOWARD_ZERO = 539,
     NEGATIVE = 540,
     NEXT = 541,
     NEXT_PAGE = 542,
     NO = 543,
     NO_ECHO = 544,
     NORMAL = 545,
     NOT = 546,
     NOT_END = 547,
     NOT_EOP = 548,
     NOT_EQUAL = 549,
     NOT_EXCEPTION = 550,
     NOT_INVALID_KEY = 551,
     NOT_OVERFLOW = 552,
     NOT_SIZE_ERROR = 553,
     NO_ADVANCING = 554,
     NUMBER = 555,
     NUMBERS = 556,
     NUMERIC = 557,
     NUMERIC_EDITED = 558,
     NUMVALC_FUNC = 559,
     OBJECT_COMPUTER = 560,
     OCCURS = 561,
     OF = 562,
     OFF = 563,
     OMITTED = 564,
     ON = 565,
     ONLY = 566,
     OPEN = 567,
     OPTIONAL = 568,
     OR = 569,
     ORDER = 570,
     ORGANIZATION = 571,
     OTHER = 572,
     OUTPUT = 573,
     OVERLINE = 574,
     PACKED_DECIMAL = 575,
     PADDING = 576,
     PAGE = 577,
     PAGE_COUNTER = 578,
     PARAGRAPH = 579,
     PERFORM = 580,
     PH = 581,
     PF = 582,
     PICTURE = 583,
     PICTURE_SYMBOL = 584,
     PLUS = 585,
     POINTER = 586,
     POSITION = 587,
     POSITIVE = 588,
     PRESENT = 589,
     PREVIOUS = 590,
     PRINTER = 591,
     PRINTING = 592,
     PROCEDURE = 593,
     PROCEDURES = 594,
     PROCEED = 595,
     PROGRAM = 596,
     PROGRAM_ID = 597,
     PROGRAM_NAME = 598,
     PROGRAM_POINTER = 599,
     PROHIBITED = 600,
     PROMPT = 601,
     QUOTE = 602,
     RANDOM = 603,
     RD = 604,
     READ = 605,
     READY_TRACE = 606,
     RECORD = 607,
     RECORDING = 608,
     RECORDS = 609,
     RECURSIVE = 610,
     REDEFINES = 611,
     REEL = 612,
     REFERENCE = 613,
     REFERENCES = 614,
     RELATIVE = 615,
     RELEASE = 616,
     REMAINDER = 617,
     REMOVAL = 618,
     RENAMES = 619,
     REPLACE = 620,
     REPLACING = 621,
     REPORT = 622,
     REPORTING = 623,
     REPORTS = 624,
     REPOSITORY = 625,
     REPO_FUNCTION = 626,
     REQUIRED = 627,
     RESERVE = 628,
     RESET = 629,
     RESET_TRACE = 630,
     RETURN = 631,
     RETURNING = 632,
     REVERSE_FUNC = 633,
     REVERSE_VIDEO = 634,
     REVERSED = 635,
     REWIND = 636,
     REWRITE = 637,
     RF = 638,
     RH = 639,
     RIGHT = 640,
     ROLLBACK = 641,
     ROUNDED = 642,
     RUN = 643,
     SAME = 644,
     SCREEN = 645,
     SCREEN_CONTROL = 646,
     SCROLL = 647,
     SD = 648,
     SEARCH = 649,
     SECTION = 650,
     SECURE = 651,
     SEGMENT_LIMIT = 652,
     SELECT = 653,
     SEMI_COLON = 654,
     SENTENCE = 655,
     SEPARATE = 656,
     SEQUENCE = 657,
     SEQUENTIAL = 658,
     SET = 659,
     SHARING = 660,
     SIGN = 661,
     SIGNED = 662,
     SIGNED_INT = 663,
     SIGNED_LONG = 664,
     SIGNED_SHORT = 665,
     SIZE = 666,
     SIZE_ERROR = 667,
     SORT = 668,
     SORT_MERGE = 669,
     SOURCE = 670,
     SOURCE_COMPUTER = 671,
     SPACE = 672,
     SPECIAL_NAMES = 673,
     STANDARD = 674,
     STANDARD_1 = 675,
     STANDARD_2 = 676,
     START = 677,
     STATIC = 678,
     STATUS = 679,
     STDCALL = 680,
     STEP = 681,
     STOP = 682,
     STRING = 683,
     SUBSTITUTE_FUNC = 684,
     SUBSTITUTE_CASE_FUNC = 685,
     SUBTRACT = 686,
     SUM = 687,
     SUPPRESS = 688,
     SYMBOLIC = 689,
     SYNCHRONIZED = 690,
     SYSTEM_DEFAULT = 691,
     TAB = 692,
     TALLYING = 693,
     TAPE = 694,
     TERMINATE = 695,
     TEST = 696,
     THAN = 697,
     THEN = 698,
     THRU = 699,
     TIME = 700,
     TIMEOUT = 701,
     TIMES = 702,
     TO = 703,
     TOK_AMPER = 704,
     TOK_CLOSE_PAREN = 705,
     TOK_COLON = 706,
     TOK_DIV = 707,
     TOK_DOT = 708,
     TOK_EQUAL = 709,
     TOK_FALSE = 710,
     TOK_FILE = 711,
     TOK_GREATER = 712,
     TOK_INITIAL = 713,
     TOK_LESS = 714,
     TOK_MINUS = 715,
     TOK_MUL = 716,
     TOK_NULL = 717,
     TOK_OVERFLOW = 718,
     TOK_OPEN_PAREN = 719,
     TOK_PLUS = 720,
     TOK_TRUE = 721,
     TOP = 722,
     TOWARD_GREATER = 723,
     TOWARD_LESSER = 724,
     TRAILING = 725,
     TRANSFORM = 726,
     TRIM_FUNC = 727,
     TRUNCATION = 728,
     TYPE = 729,
     UNDERLINE = 730,
     UNIT = 731,
     UNLOCK = 732,
     UNSIGNED = 733,
     UNSIGNED_INT = 734,
     UNSIGNED_LONG = 735,
     UNSIGNED_SHORT = 736,
     UNSTRING = 737,
     UNTIL = 738,
     UP = 739,
     UPDATE = 740,
     UPON = 741,
     UPON_ARGUMENT_NUMBER = 742,
     UPON_COMMAND_LINE = 743,
     UPON_ENVIRONMENT_NAME = 744,
     UPON_ENVIRONMENT_VALUE = 745,
     UPPER = 746,
     UPPER_CASE_FUNC = 747,
     USAGE = 748,
     USE = 749,
     USER = 750,
     USER_DEFAULT = 751,
     USER_FUNCTION_NAME = 752,
     USER_REPO_FUNCTION = 753,
     USING = 754,
     VALUE = 755,
     VARYING = 756,
     WAIT = 757,
     WHEN = 758,
     WHEN_COMPILED_FUNC = 759,
     WITH = 760,
     WORD = 761,
     WORDS = 762,
     WORKING_STORAGE = 763,
     WRITE = 764,
     YYYYDDD = 765,
     YYYYMMDD = 766,
     ZERO = 767,
     SHIFT_PREFER = 768
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
#line 1350 "parser.c"

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
#define YYLAST   7856

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  514
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  817
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1902
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2722

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   768

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
     505,   506,   507,   508,   509,   510,   511,   512,   513
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
    4375,  4376,  4381,  4387,  4388,  4392,  4395,  4397,  4401,  4405,
    4407,  4411,  4413,  4417,  4418,  4419,  4421,  4422,  4424,  4425,
    4427,  4428,  4431,  4432,  4435,  4436,  4438,  4440,  4441,  4443,
    4444,  4446,  4449,  4450,  4453,  4454,  4458,  4460,  4462,  4464,
    4466,  4468,  4470,  4472,  4474,  4475,  4478,  4480,  4482,  4484,
    4486,  4488,  4490,  4492,  4494,  4496,  4498,  4500,  4502,  4504,
    4506,  4508,  4510,  4512,  4514,  4516,  4518,  4520,  4522,  4524,
    4526,  4528,  4530,  4532,  4534,  4536,  4538,  4540,  4542,  4544,
    4546,  4548,  4550,  4552,  4554,  4556,  4558,  4560,  4562,  4564,
    4566,  4568,  4570,  4572,  4574,  4576,  4578,  4580,  4582,  4584,
    4586,  4588,  4590,  4592,  4594,  4596,  4598,  4600,  4602,  4604,
    4606,  4608,  4610,  4612,  4614,  4616,  4618,  4619,  4621,  4622,
    4624,  4625,  4627,  4628,  4630,  4631,  4633,  4634,  4636,  4637,
    4639,  4640,  4642,  4643,  4645,  4646,  4648,  4649,  4651,  4652,
    4654,  4655,  4657,  4658,  4660,  4661,  4663,  4664,  4666,  4667,
    4669,  4670,  4672,  4675,  4676,  4678,  4679,  4681,  4682,  4684,
    4685,  4687,  4688,  4690,  4692,  4693,  4695,  4696,  4698,  4700,
    4701,  4703,  4705,  4706,  4709,  4712,  4713,  4715,  4716,  4718,
    4719,  4721,  4722,  4724,  4726,  4727,  4729,  4730,  4732,  4733,
    4736,  4738,  4740,  4741,  4743,  4744,  4746,  4747,  4749,  4750,
    4752,  4753,  4755,  4756,  4758,  4759,  4761,  4762,  4764,  4767,
    4768,  4770,  4771,  4773,  4774,  4776,  4777,  4779,  4780,  4782,
    4783,  4785,  4786,  4788,  4789,  4791,  4793,  4794,  4796,  4797,
    4801,  4802,  4804,  4807,  4809,  4811,  4813,  4815,  4817,  4819,
    4821,  4823,  4825,  4827,  4829,  4831,  4833,  4835,  4837,  4839,
    4841,  4843,  4845,  4847,  4849,  4852,  4855,  4857,  4859,  4861,
    4863,  4865,  4867,  4870,  4872,  4876,  4879,  4881,  4883,  4885,
    4888,  4890,  4893,  4895,  4898,  4900,  4903,  4905,  4908,  4910,
    4913,  4915,  4918
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     515,     0,    -1,    -1,   516,   517,    -1,   520,    -1,   518,
      -1,   519,    -1,   518,   519,    -1,   522,    -1,   524,    -1,
      -1,   521,   530,    -1,   534,   530,   525,   526,    -1,   534,
     530,   525,   527,    -1,   536,   530,   528,    -1,    -1,   523,
      -1,   525,   523,    -1,    -1,   527,    -1,   143,   537,   453,
      -1,    -1,   529,    -1,   139,   537,   453,    -1,    -1,    -1,
      -1,   542,   543,   544,   606,   607,   609,   608,   642,   531,
     652,   653,   654,   532,   683,   739,   741,   743,   788,   533,
     802,    -1,    -1,   342,   453,   537,   538,   535,   539,   453,
      -1,   201,   453,   537,   538,   453,    -1,   343,    -1,   257,
      -1,    -1,    26,   257,    -1,    -1,  1274,   540,  1289,    -1,
      73,    -1,    73,   541,    -1,   541,    -1,   172,    -1,   458,
      -1,   355,    -1,    -1,   154,   123,   453,    -1,    -1,    85,
     395,   453,    -1,    -1,   544,   545,    -1,   546,    -1,   550,
      -1,   569,    -1,   570,    -1,   561,    -1,    -1,   416,   453,
     547,   548,    -1,    -1,   560,   549,   453,    -1,    -1,  1305,
     108,   273,    -1,    -1,   305,   453,   551,   552,    -1,    -1,
     560,   453,    -1,   560,   553,   453,    -1,   553,   453,    -1,
     554,    -1,   553,   554,    -1,   555,    -1,   556,    -1,   557,
      -1,   558,    -1,   269,   411,  1274,  1223,  1316,    -1,  1322,
    1274,  1190,    -1,   397,  1274,  1223,    -1,  1261,    60,  1274,
     559,    -1,  1190,    -1,   258,    -1,   496,    -1,   436,    -1,
     506,    -1,   560,   506,    -1,    -1,   370,   453,   562,   563,
      -1,    -1,   564,   453,    -1,   564,     1,   453,    -1,   565,
      -1,   564,   565,    -1,   200,     9,   230,    -1,   200,   566,
     567,    -1,   200,   568,   230,    -1,   371,    -1,   498,    -1,
      -1,    26,   257,    -1,   371,    -1,   568,   371,    -1,   418,
     453,    -1,   571,   453,    -1,   571,     1,   453,    -1,   572,
      -1,   571,   572,    -1,   573,    -1,   578,    -1,   587,    -1,
     597,    -1,   594,    -1,   598,    -1,   600,    -1,   601,    -1,
     602,    -1,   603,    -1,   604,    -1,   605,    -1,    -1,   506,
     574,   575,    -1,  1274,    97,    -1,  1223,  1274,  1194,    -1,
    1274,  1194,   576,    -1,   577,    -1,    -1,   577,    -1,  1039,
    1286,  1194,    -1,   577,  1039,  1286,  1194,    -1,    -1,    11,
    1194,   579,  1274,   580,    -1,   281,    -1,   420,    -1,   421,
      -1,   127,    -1,    28,    -1,   581,    -1,   582,    -1,   581,
     582,    -1,   585,    -1,   585,   444,   585,    -1,    -1,   585,
      17,   583,   584,    -1,   585,    -1,   584,    17,   585,    -1,
     257,    -1,   417,    -1,   512,    -1,   347,    -1,   213,    -1,
     267,    -1,   417,    -1,   512,    -1,   589,   588,    -1,    -1,
     219,   506,    -1,   434,  1262,   590,    -1,   591,    -1,   590,
     591,    -1,   592,  1275,   593,    -1,  1195,    -1,   592,  1195,
      -1,  1224,    -1,   593,  1224,    -1,    59,  1194,  1274,   595,
      -1,   596,    -1,   595,   596,    -1,  1226,    -1,  1226,   444,
    1226,    -1,   258,  1194,  1274,   257,    -1,    99,  1292,  1274,
     257,   599,    -1,    -1,  1305,   329,   257,    -1,   109,  1274,
      69,    -1,   302,   406,  1274,   470,   401,    -1,   101,  1274,
    1189,    -1,    97,   424,  1274,  1189,    -1,   391,  1274,  1189,
      -1,   165,  1274,  1189,    -1,    -1,   227,   395,   453,    -1,
      -1,   174,   453,    -1,    -1,   235,   453,    -1,    -1,   609,
     610,    -1,    -1,   398,  1247,  1194,   611,   612,   453,    -1,
     398,     1,   453,    -1,    -1,   612,   613,    -1,   614,    -1,
     620,    -1,   622,    -1,   624,    -1,   625,    -1,   627,    -1,
     631,    -1,   633,    -1,   634,    -1,   635,    -1,   637,    -1,
     638,    -1,   640,    -1,    29,  1302,   617,   616,   618,    -1,
      29,  1302,   617,   615,   619,    -1,    29,  1302,   617,   120,
     619,    -1,    29,  1302,   617,   239,   619,    -1,    29,  1302,
     617,   336,   619,    -1,   118,    -1,   119,    -1,   439,    -1,
     348,    -1,    -1,   253,     7,  1265,    -1,    -1,   172,    -1,
     126,    -1,   257,    -1,  1220,    -1,    -1,   257,    -1,  1220,
      -1,     4,  1281,  1274,   621,    -1,   403,    -1,   126,    -1,
     348,    -1,    19,  1290,  1276,  1274,   636,  1241,   623,    -1,
      -1,   433,   503,     9,  1229,    -1,   433,   503,   586,    -1,
    1306,  1274,   506,    -1,   626,   424,  1274,  1189,    -1,    -1,
     456,    -1,   413,    -1,    -1,   628,   263,  1281,  1274,   629,
      -1,   268,   630,    -1,    33,   630,    -1,   168,    -1,    -1,
     505,   263,   310,  1315,    -1,   505,   263,   310,   275,  1315,
      -1,   505,   386,    -1,   316,  1274,   632,    -1,   632,    -1,
     221,    -1,  1290,  1259,   403,    -1,   360,    -1,   253,   403,
      -1,   321,  1261,  1274,  1193,    -1,   352,   114,  1274,   420,
      -1,   352,  1276,  1274,   636,    -1,  1189,    -1,  1189,   454,
    1188,    -1,  1189,   415,  1274,  1188,    -1,   360,  1276,  1274,
    1189,    -1,   373,   639,  1256,    -1,   288,    -1,  1223,    -1,
     405,  1305,   641,    -1,     9,  1287,    -1,   288,  1287,    -1,
     350,   311,    -1,    -1,   643,   453,    -1,   643,     1,   453,
      -1,   644,    -1,   643,   644,    -1,   645,    -1,   647,    -1,
     389,   646,  1256,  1267,  1179,    -1,    -1,   352,    -1,   413,
      -1,   414,    -1,    -1,   275,   648,  1265,  1298,  1263,   649,
      -1,   650,    -1,   649,   650,    -1,  1180,   651,    -1,    -1,
     332,  1223,    -1,    -1,   103,   123,   453,    -1,    -1,   456,
     395,   453,    -1,    -1,   654,   655,    -1,   656,   685,    -1,
      -1,   658,  1180,   657,   659,   453,    -1,   658,     1,   453,
      -1,   173,    -1,   393,    -1,    -1,   659,   660,    -1,  1274,
     172,    -1,  1274,   205,    -1,   661,    -1,   663,    -1,   667,
      -1,   668,    -1,   671,    -1,   672,    -1,   678,    -1,   679,
      -1,   680,    -1,    47,  1263,  1223,   666,   662,    -1,    -1,
     354,    -1,    58,    -1,   352,  1263,  1223,  1262,    -1,   352,
    1263,  1223,   448,  1223,  1262,    -1,   352,  1274,   501,  1269,
    1295,   665,   666,  1262,   664,    -1,    -1,   115,  1285,  1189,
      -1,    -1,  1268,  1223,    -1,    -1,   448,  1223,    -1,   240,
    1317,  1313,    -1,   500,   307,   669,  1274,   670,    -1,   500,
     307,   175,  1274,   670,    -1,   506,    -1,   214,    -1,   257,
      -1,  1220,    -1,   103,  1317,  1191,    -1,   251,  1274,  1193,
    1280,   673,    -1,    -1,   673,   674,    -1,   675,    -1,   676,
      -1,   677,    -1,  1305,   188,  1258,  1193,    -1,   467,  1193,
      -1,    48,  1193,    -1,   353,  1281,  1274,   506,    -1,    63,
    1274,   506,    -1,   681,   682,    -1,   367,  1274,    -1,   369,
    1255,    -1,  1194,    -1,   682,  1194,    -1,    -1,    -1,   508,
     395,   453,   684,   685,    -1,    -1,    -1,   686,   687,    -1,
     688,   453,    -1,   687,   688,   453,    -1,   687,   453,    -1,
     700,    -1,    -1,   690,   691,   689,   702,    -1,   690,     1,
     453,    -1,  1239,   506,    -1,    -1,   176,    -1,   506,    -1,
     506,    -1,    -1,  1274,   205,    -1,  1227,    -1,   246,   695,
      -1,   245,   695,    -1,    50,  1284,   695,    -1,  1217,    -1,
      41,    -1,    44,    -1,    43,    -1,    42,    -1,    40,    -1,
     699,    -1,   711,    -1,   712,    -1,   696,    -1,   697,    -1,
     698,    -1,     1,   453,    -1,   180,    -1,   184,    -1,   181,
      -1,   182,    -1,   179,    -1,   183,    -1,   185,    -1,   331,
      -1,   344,    -1,   690,   692,    86,   693,   701,    -1,  1257,
     694,    -1,   197,   506,    -1,    -1,   702,   703,    -1,   704,
      -1,   705,    -1,   707,    -1,   708,    -1,   709,    -1,   713,
      -1,   716,    -1,   728,    -1,   729,    -1,   730,    -1,   731,
      -1,   732,    -1,   737,    -1,   738,    -1,   356,  1217,    -1,
    1274,   172,   706,    -1,    -1,    26,   257,    -1,  1274,   205,
      -1,   328,    -1,   710,    -1,   493,  1274,   710,    -1,    39,
      -1,    74,    -1,   711,    -1,   712,    -1,    78,    -1,    79,
      -1,    80,    -1,    81,    -1,    82,    -1,   120,    -1,   220,
      -1,   320,    -1,   331,    -1,   344,    -1,   410,    -1,   408,
      -1,   409,    -1,   481,    -1,   479,    -1,   480,    -1,    41,
    1293,    -1,    41,   478,    -1,    44,  1293,    -1,    44,   478,
      -1,    43,  1293,    -1,    43,   478,    -1,    42,  1293,    -1,
      42,   478,    -1,    40,  1293,    -1,    40,   478,    -1,   180,
      -1,   181,    -1,   179,    -1,   182,    -1,   183,    -1,   278,
      -1,    76,    -1,   187,    -1,    77,    -1,   186,    -1,  1294,
     242,  1251,    -1,  1294,   470,  1251,    -1,   306,  1223,   717,
    1300,   719,   715,    -1,    -1,   426,  1223,    -1,   306,  1223,
     717,  1300,   719,   722,   725,    -1,   306,   126,   720,   718,
     717,   721,   722,   725,    -1,    -1,   448,  1223,    -1,    -1,
     197,  1223,    -1,    -1,   115,  1285,  1189,    -1,    -1,    53,
    1269,   506,    -1,    -1,   224,    -1,   723,    -1,    -1,   723,
     724,  1276,  1274,  1188,    -1,    27,    -1,   116,    -1,    -1,
     221,  1260,   726,    -1,   727,    -1,   726,   727,    -1,   506,
      -1,   236,  1291,    -1,   435,  1277,    -1,    45,  1303,   512,
      -1,    36,    -1,    -1,   500,  1275,   734,   733,   736,    -1,
     735,    -1,   734,   735,    -1,  1227,    -1,  1227,   444,  1227,
      -1,    -1,  1304,   455,  1274,  1227,    -1,   364,  1220,    -1,
     364,  1220,   444,  1220,    -1,    21,   245,    -1,    21,   302,
      -1,    -1,    -1,   262,   395,   453,   740,   685,    -1,    -1,
      -1,   256,   395,   453,   742,   685,    -1,    -1,    -1,   367,
     395,   453,   744,   745,    -1,    -1,   745,   746,    -1,    -1,
     349,  1181,   747,   748,   453,   762,    -1,    -1,   748,   749,
      -1,     1,   453,    -1,  1274,   205,    -1,    62,  1274,  1207,
      -1,   750,    -1,   753,    -1,  1330,   751,    -1,  1266,   752,
      -1,  1216,    -1,   752,  1216,    -1,   322,  1279,   754,   755,
      -1,  1225,    -1,  1225,  1314,  1225,  1308,    -1,  1225,  1314,
      -1,    -1,   755,   756,    -1,   757,    -1,   758,    -1,   759,
      -1,   760,    -1,   761,    -1,   211,  1274,  1225,    -1,   178,
    1323,  1274,  1225,    -1,   241,  1324,  1274,  1225,    -1,   241,
    1323,  1274,  1225,    -1,   188,  1274,  1225,    -1,    -1,   762,
     763,    -1,    -1,   690,   691,   764,   765,   453,    -1,    -1,
     765,   766,    -1,   767,    -1,   771,    -1,   777,    -1,   708,
      -1,   787,    -1,   713,    -1,   728,    -1,   779,    -1,   730,
      -1,   785,    -1,   772,    -1,   732,    -1,   775,    -1,   786,
      -1,   714,    -1,   776,    -1,   474,  1274,   768,    -1,  1328,
      -1,  1326,    -1,  1324,   769,    -1,  1323,    -1,  1325,   769,
      -1,  1327,    -1,  1329,    -1,    -1,  1216,   770,    -1,   177,
     770,    -1,    -1,   314,   322,    -1,   286,   210,  1274,   782,
      -1,   432,  1284,  1200,   773,    -1,    -1,   374,  1285,   774,
      -1,  1216,    -1,   177,    -1,   334,   503,  1156,    -1,   501,
    1216,   197,  1202,    49,  1202,    -1,   778,   781,    -1,   253,
    1283,  1275,    -1,   255,  1255,    -1,   780,   783,    -1,  1307,
    1283,  1275,    -1,  1308,  1255,    -1,   782,    -1,   781,   782,
      -1,   330,  1223,    -1,  1225,    -1,   287,    -1,   784,    -1,
     783,   784,    -1,   330,  1223,    -1,  1225,    -1,   415,  1274,
    1202,  1248,    -1,   210,  1271,    -1,   493,  1274,   120,    -1,
      -1,    -1,   390,   395,   453,   789,   790,    -1,    -1,   791,
      -1,   792,   453,    -1,   791,   792,   453,    -1,   700,    -1,
      -1,   690,   691,   793,   794,    -1,   690,     1,   453,    -1,
      -1,   794,   795,    -1,    45,   253,    -1,    45,   390,    -1,
      38,    -1,    46,    -1,   161,   157,    -1,   161,   159,    -1,
     212,    -1,   266,    -1,   379,    -1,   475,    -1,   319,    -1,
     244,    -1,    32,    -1,   396,    -1,   372,    -1,   199,    -1,
     346,    57,  1274,  1207,    -1,   346,    -1,   458,    -1,   253,
    1282,  1274,   798,  1209,    -1,  1307,  1282,  1274,   799,  1209,
      -1,   190,  1274,  1209,    -1,    35,  1274,  1209,    -1,   709,
      -1,   730,    -1,   801,    -1,   728,    -1,   713,    -1,   732,
      -1,   708,    -1,   800,    -1,   499,  1216,    -1,   197,  1208,
      -1,   448,  1216,    -1,   330,    -1,   465,    -1,   271,    -1,
     460,    -1,    -1,   796,    -1,   797,    -1,    -1,   796,    -1,
     797,    -1,   306,  1223,  1300,    -1,  1274,   205,    -1,    -1,
      -1,    -1,   338,   123,   806,   814,   453,   803,   815,   804,
     817,    -1,    -1,   805,   828,   453,   817,    -1,    -1,    -1,
     499,   807,   809,    -1,    -1,    56,   808,   809,    -1,   810,
      -1,   809,   810,    -1,   811,   812,   813,   506,    -1,    -1,
    1260,   358,    -1,  1260,   500,    -1,    -1,   411,  1274,    32,
      -1,   411,  1274,   111,    -1,   478,   411,  1274,    32,    -1,
     478,   411,  1274,  1223,    -1,   411,  1274,  1223,    -1,    -1,
     313,    -1,    -1,   377,   506,    -1,    -1,    -1,   110,   453,
     816,   817,   130,   110,   453,    -1,    -1,   817,   818,    -1,
     819,    -1,   822,    -1,   828,   453,    -1,   823,    -1,   453,
      -1,    -1,   506,   395,   824,   453,   820,   821,    -1,    -1,
    1110,   453,    -1,   506,   453,    -1,   506,    -1,    -1,  1223,
      -1,    -1,    -1,   826,   827,   828,    -1,    -1,   829,   830,
      -1,   828,   830,    -1,   831,    -1,   847,    -1,   852,    -1,
     856,    -1,   861,    -1,   876,    -1,   879,    -1,   887,    -1,
     883,    -1,   888,    -1,   889,    -1,   894,    -1,   908,    -1,
     912,    -1,   915,    -1,   929,    -1,   933,    -1,   936,    -1,
     939,    -1,   943,    -1,   944,    -1,   948,    -1,   958,    -1,
     961,    -1,   978,    -1,   980,    -1,   983,    -1,   987,    -1,
     993,    -1,  1005,    -1,  1013,    -1,  1014,    -1,  1017,    -1,
    1018,    -1,  1022,    -1,  1027,    -1,  1028,    -1,  1036,    -1,
    1051,    -1,  1061,    -1,  1070,    -1,  1075,    -1,  1082,    -1,
    1086,    -1,  1088,    -1,  1091,    -1,  1094,    -1,  1098,    -1,
    1125,    -1,   286,   400,    -1,     1,  1252,    -1,    -1,     3,
     832,   833,   846,    -1,   834,   836,   840,   841,   842,  1133,
      -1,  1216,   197,   835,    -1,  1216,   197,  1308,    -1,  1216,
     197,   104,   511,    -1,  1216,   197,   104,    -1,  1216,   197,
     105,   510,    -1,  1216,   197,   105,    -1,  1216,   197,   106,
      -1,  1216,   197,   163,   238,    -1,  1216,   197,   166,   424,
      -1,  1216,   197,   445,    -1,  1216,   197,   495,   277,    -1,
    1216,   197,    70,    -1,  1216,   197,   156,  1133,    -1,  1216,
     197,   154,  1205,  1133,    -1,  1216,   197,    24,    -1,  1216,
     197,    25,  1133,    -1,  1216,   197,  1183,    -1,  1216,   197,
     506,    -1,  1216,    -1,   309,    -1,   255,    -1,   253,   300,
      -1,    -1,   837,    -1,  1258,   838,   839,    -1,  1258,   839,
     838,    -1,  1258,   838,    -1,  1258,   839,    -1,    30,  1205,
      -1,   253,  1282,  1209,    -1,  1307,  1282,  1209,    -1,   332,
    1282,  1209,    -1,    -1,   198,    -1,    -1,   273,  1274,    47,
      -1,    -1,   505,   843,    -1,   844,    -1,   843,   844,    -1,
      32,    -1,   437,    -1,    38,    -1,    46,    -1,    92,    -1,
     199,    -1,   212,    -1,   244,    -1,   264,    -1,   266,    -1,
     289,    -1,   319,    -1,   346,    57,  1274,  1207,    -1,   346,
      -1,   372,    -1,   379,    -1,   396,    -1,   475,    -1,   288,
     845,    -1,   845,    -1,   491,    -1,   190,  1274,  1209,    -1,
      35,  1274,  1209,    -1,   392,   484,  1155,    -1,   392,   124,
    1155,    -1,   446,  1254,  1210,    -1,   485,    -1,   111,    -1,
      -1,   131,    -1,    -1,     5,   848,   849,   851,    -1,  1198,
     448,  1175,  1139,    -1,  1198,   850,   204,  1175,  1139,    -1,
      95,  1216,   448,  1216,  1248,  1139,    -1,    -1,   448,  1199,
      -1,    -1,   132,    -1,    -1,    10,   853,   854,    -1,  1216,
    1242,   855,    -1,  1169,    58,  1243,   855,    -1,    -1,   377,
    1197,    -1,    -1,    18,   857,   858,    -1,   859,    -1,   858,
     859,    -1,  1185,   448,   860,  1185,    -1,    -1,   340,   448,
      -1,    -1,    51,   862,   863,   875,    -1,   864,  1208,   865,
     870,   873,   874,    -1,    -1,   423,    -1,   425,    -1,   272,
      -1,    -1,    -1,   499,   866,   867,    -1,   868,    -1,   867,
     868,    -1,   869,   309,    -1,   869,   812,  1199,    -1,    -1,
    1260,   358,    -1,  1260,    88,    -1,  1260,   500,    -1,    -1,
     871,  1273,  1216,    -1,   871,   872,    -1,   871,     6,  1284,
    1216,    -1,   377,    -1,   204,    -1,   462,    -1,   309,    -1,
      -1,  1311,   825,    -1,    -1,   295,   825,    -1,    -1,   133,
      -1,    -1,    52,   877,   878,    -1,  1207,    -1,   878,  1207,
      -1,    -1,    61,   880,   881,    -1,  1180,   882,    -1,   881,
    1180,   882,    -1,    -1,  1318,    -1,  1318,  1267,   363,    -1,
    1305,   288,   381,    -1,  1305,   263,    -1,    -1,    75,   884,
     885,   886,    -1,  1175,  1309,  1169,  1139,    -1,    -1,   134,
      -1,    72,    -1,    89,    -1,    -1,   112,   890,   891,   893,
      -1,  1180,  1290,  1152,    -1,   456,   892,    -1,  1180,    -1,
     892,  1180,    -1,    -1,   135,    -1,    -1,   120,   895,   896,
     907,    -1,  1207,   489,  1136,    -1,  1207,   490,  1136,    -1,
    1207,   487,  1136,    -1,  1207,   488,  1136,    -1,  1198,   900,
     904,  1136,    -1,   897,  1136,    -1,  1199,   505,   905,  1136,
      -1,   899,    -1,    -1,   897,   898,   899,    -1,  1199,   837,
     901,   841,   903,    -1,    -1,   486,  1183,    -1,   486,   506,
      -1,   486,   336,    -1,   486,    97,    -1,    -1,   486,   902,
      -1,    97,    -1,    98,    -1,    -1,   505,   905,    -1,    -1,
     299,    -1,   906,    -1,   905,   906,    -1,    38,    -1,    45,
     253,    -1,    45,   390,    -1,    46,    -1,    92,    -1,   161,
     157,    -1,   161,   159,    -1,   212,    -1,   266,    -1,   319,
      -1,   379,    -1,   475,    -1,   190,  1274,  1209,    -1,    35,
    1274,  1209,    -1,   392,   484,  1155,    -1,   392,   124,  1155,
      -1,    -1,   136,    -1,    -1,   122,   909,   910,   911,    -1,
    1199,   229,  1175,  1139,    -1,  1199,   229,  1199,   204,  1175,
    1139,    -1,  1199,    49,  1199,   204,  1175,  1139,    -1,  1199,
     229,  1199,   204,  1176,   362,  1176,  1139,    -1,  1199,    49,
    1199,   204,  1176,   362,  1176,  1139,    -1,    -1,   137,    -1,
      -1,   153,   913,   914,    -1,   257,   865,    -1,    -1,   164,
     916,   917,   928,    -1,   918,   920,    -1,   919,    -1,   918,
      17,   919,    -1,  1157,    -1,   466,    -1,   455,    -1,   921,
     923,    -1,   921,    -1,   922,    -1,   921,   922,    -1,   924,
     825,    -1,   503,   317,   825,    -1,   503,   925,    -1,   924,
     503,   925,    -1,   926,    -1,   925,    17,   926,    -1,  1158,
     927,    -1,    21,    -1,   466,    -1,   455,    -1,    -1,   444,
    1157,    -1,    -1,   138,    -1,    -1,   169,   930,   931,    -1,
      -1,   341,   932,    -1,   200,    -1,   325,   102,    -1,   325,
      -1,   395,    -1,   324,    -1,    -1,   871,  1199,    -1,    -1,
     196,   934,   935,    -1,  1196,    -1,    -1,   203,   937,   938,
      -1,  1220,    -1,    -1,   206,   940,   941,    -1,  1301,  1184,
     942,    -1,    -1,   115,  1285,  1216,    -1,   207,   932,    -1,
      -1,   216,   945,  1156,  1299,   946,   947,    -1,   825,   129,
     825,    -1,   129,   825,    -1,   825,    -1,    -1,   140,    -1,
      -1,   223,   949,   950,    -1,  1196,   951,   952,   953,   957,
      -1,    -1,  1305,   176,    -1,    -1,     9,  1301,   500,    -1,
     956,  1301,   500,    -1,    -1,   366,   954,    -1,   955,    -1,
     954,   955,    -1,   956,  1264,    49,  1199,    -1,    12,    -1,
      15,    -1,   302,    -1,    16,    -1,   303,    -1,   278,    -1,
     279,    -1,    -1,  1299,  1301,   111,    -1,    -1,   225,   959,
     960,    -1,  1181,    -1,   960,  1181,    -1,    -1,   228,   962,
     963,    -1,   964,   965,    -1,  1216,    -1,  1227,    -1,  1230,
      -1,   966,   968,    -1,   966,    -1,   968,    -1,   969,    -1,
      -1,   438,   967,   970,    -1,   366,   972,    -1,    93,  1205,
     448,  1206,   976,    -1,   971,    -1,   970,   971,    -1,  1205,
     189,    -1,    58,   976,    -1,     9,    -1,   242,    -1,   470,
      -1,  1205,   976,    -1,   973,    -1,   972,   973,    -1,    58,
      49,  1205,   976,    -1,   974,   975,    -1,    -1,     9,    -1,
     242,    -1,   178,    -1,   470,    -1,  1205,    49,  1206,   976,
      -1,    -1,   976,   977,    -1,    37,  1272,  1199,    -1,     8,
    1272,  1199,    -1,    -1,   270,   979,  1053,    -1,    -1,   274,
     981,   982,    -1,  1199,   448,  1196,    -1,    95,  1199,   448,
    1196,    -1,    -1,   276,   984,   985,   986,    -1,  1199,    49,
    1175,  1139,    -1,  1199,    49,  1199,   204,  1175,  1139,    -1,
      -1,   141,    -1,    -1,   312,   988,   989,    -1,   990,   991,
    1179,   992,    -1,   989,   990,   991,  1179,   992,    -1,   226,
      -1,   318,    -1,   234,    -1,   171,    -1,    -1,   405,  1305,
     641,    -1,    -1,  1305,   288,   381,    -1,  1305,   263,    -1,
     380,    -1,    -1,   325,   994,   995,    -1,   999,  1000,    -1,
      -1,  1000,   996,   825,   997,    -1,  1000,   998,    -1,    -1,
     142,    -1,   142,    -1,   453,    -1,  1185,    -1,  1185,   444,
    1185,    -1,    -1,  1208,   447,    -1,   191,    -1,  1001,   483,
    1002,    -1,  1001,   501,  1003,    -1,    -1,  1305,   441,  1130,
      -1,   169,    -1,  1156,    -1,  1004,    -1,  1003,     8,  1004,
      -1,  1216,   197,  1199,    49,  1199,   483,  1156,    -1,    -1,
     350,  1006,  1007,  1012,    -1,  1180,  1245,  1290,  1008,  1009,
    1010,  1011,    -1,    -1,   229,  1216,    -1,    -1,   218,   263,
      -1,  1305,   263,    -1,  1305,   237,   263,    -1,  1305,   288,
     263,    -1,  1305,   217,   263,    -1,  1305,   502,    -1,    -1,
     238,  1274,  1216,    -1,  1152,    -1,  1146,    -1,    -1,   144,
      -1,   351,    -1,    -1,   361,  1015,  1016,    -1,  1177,  1128,
      -1,   375,    -1,    -1,   376,  1019,  1020,  1021,    -1,  1180,
    1290,  1008,  1145,    -1,    -1,   145,    -1,    -1,   382,  1023,
    1024,  1026,    -1,  1177,  1128,  1025,  1152,    -1,    -1,  1305,
     263,    -1,  1305,   288,   263,    -1,    -1,   146,    -1,   386,
      -1,    -1,   394,  1029,  1030,  1035,    -1,  1178,  1031,  1032,
    1033,    -1,     9,  1178,  1032,   503,  1157,   825,    -1,    -1,
     501,  1216,    -1,    -1,   130,   825,    -1,  1034,    -1,  1034,
    1033,    -1,   503,  1156,   825,    -1,    -1,   147,    -1,    -1,
     404,  1037,  1038,    -1,  1041,    -1,  1042,    -1,  1045,    -1,
    1046,    -1,  1047,    -1,  1049,    -1,   310,    -1,   308,    -1,
     484,    -1,   124,    -1,   154,  1205,   448,  1205,    -1,  1213,
      31,  1043,    -1,  1044,    -1,  1043,  1044,    -1,    38,  1039,
      -1,    46,  1039,    -1,   212,  1039,    -1,   266,  1039,    -1,
     379,  1039,    -1,   475,  1039,    -1,   244,  1039,    -1,   319,
    1039,    -1,  1196,   448,   153,  1204,    -1,  1196,   448,  1199,
      -1,  1196,  1040,    49,  1199,    -1,  1048,    -1,  1047,  1048,
      -1,  1182,   448,  1039,    -1,  1050,    -1,  1049,  1050,    -1,
    1196,   448,   466,    -1,  1196,   448,   455,    -1,    -1,   413,
    1052,  1053,    -1,    -1,  1214,  1055,  1057,  1058,  1054,  1059,
    1060,    -1,    -1,  1055,  1285,   724,  1276,  1056,    -1,    -1,
    1056,  1220,    -1,    -1,  1321,  1270,    -1,    -1,  1306,  1274,
    1189,    -1,    -1,   499,  1179,    -1,   226,   338,  1274,   999,
      -1,    -1,   204,  1179,    -1,   318,   338,  1274,   999,    -1,
      -1,   422,  1062,  1063,  1069,    -1,  1180,  1065,  1064,  1152,
      -1,    -1,  1305,  1320,  1169,    -1,    -1,   238,  1274,  1066,
    1216,    -1,   178,    -1,   241,    -1,  1162,    -1,  1246,  1163,
      -1,  1246,  1164,    -1,  1246,  1165,    -1,  1246,  1166,    -1,
    1067,    -1,  1068,    -1,   291,  1162,    -1,   294,    -1,    -1,
     148,    -1,    -1,   427,   388,  1071,  1072,    -1,   427,  1074,
      -1,    -1,   871,  1199,    -1,  1305,   162,  1297,  1073,    -1,
    1305,   290,  1297,  1073,    -1,    -1,  1199,    -1,   257,    -1,
     417,    -1,   512,    -1,   347,    -1,    -1,   428,  1076,  1077,
    1081,    -1,  1078,   229,  1216,  1080,  1142,    -1,  1079,    -1,
    1078,  1079,    -1,  1199,    -1,   113,  1260,   411,    -1,   113,
    1260,  1199,    -1,    -1,  1305,   331,  1274,  1216,    -1,    -1,
     149,    -1,    -1,   431,  1083,  1084,  1085,    -1,  1198,   197,
    1175,  1139,    -1,  1198,   197,  1199,   204,  1175,  1139,    -1,
      95,  1216,   197,  1216,  1248,  1139,    -1,    -1,   150,    -1,
     433,  1087,    -1,    -1,   337,    -1,    -1,   440,  1089,  1090,
      -1,  1181,    -1,  1090,  1181,    -1,    -1,   471,  1092,  1093,
      -1,  1216,   197,  1205,   448,  1206,    -1,    -1,   477,  1095,
    1096,    -1,  1180,  1097,    -1,    -1,   352,    -1,   354,    -1,
      -1,   482,  1099,  1100,  1109,    -1,  1216,  1101,  1104,  1080,
    1108,  1142,    -1,    -1,   113,  1260,  1102,    -1,  1103,    -1,
    1102,   314,  1103,    -1,  1240,  1205,    -1,   229,  1105,    -1,
    1104,  1105,    -1,  1216,  1106,  1107,    -1,    -1,   114,  1269,
    1216,    -1,    -1,    96,  1269,  1216,    -1,    -1,   438,  1269,
    1216,    -1,    -1,   151,    -1,    -1,   494,  1111,  1112,    -1,
    1113,    -1,  1116,    -1,  1120,    -1,  1122,    -1,  1123,    -1,
    1114,  1254,  1296,  1310,  1288,  1285,  1115,    -1,    -1,   205,
      -1,  1179,    -1,   226,    -1,   318,    -1,   234,    -1,   171,
      -1,  1267,   108,  1285,  1117,    -1,  1118,    -1,  1117,  1118,
      -1,  1186,    -1,     9,   339,    -1,     9,  1119,  1220,    -1,
      -1,   359,    -1,   359,   307,    -1,   307,    -1,  1258,   341,
    1121,    -1,   422,    -1,   130,    -1,  1114,    37,   368,  1216,
      -1,  1124,    -1,   167,    -1,   128,    -1,    -1,   509,  1126,
    1127,  1132,    -1,  1177,  1128,  1129,  1025,  1131,    -1,    -1,
     197,  1212,    -1,    -1,  1130,  1253,  1209,  1278,    -1,  1130,
    1253,  1183,    -1,  1130,  1253,   322,    -1,    37,    -1,     8,
      -1,  1152,    -1,  1149,    -1,    -1,   152,    -1,  1134,  1135,
      -1,    -1,   166,   825,    -1,    -1,   295,   825,    -1,  1137,
    1138,    -1,    -1,   166,   825,    -1,    -1,   295,   825,    -1,
    1140,  1141,    -1,    -1,   412,   825,    -1,    -1,   298,   825,
      -1,  1143,  1144,    -1,    -1,   463,   825,    -1,    -1,   297,
     825,    -1,  1147,  1148,    -1,  1147,    -1,  1147,  1148,    -1,
    1147,    -1,  1148,    -1,   130,   825,    -1,   292,   825,    -1,
    1150,  1151,    -1,  1150,    -1,  1151,    -1,   158,   825,    -1,
     293,   825,    -1,  1153,  1154,    -1,    -1,   232,   825,    -1,
      -1,   296,   825,    -1,    -1,  1211,  1319,    -1,  1157,    -1,
    1158,    -1,    -1,  1159,  1160,    -1,  1161,    -1,  1160,   233,
      -1,  1160,  1161,    -1,  1199,    -1,   464,    -1,   450,    -1,
     465,    -1,   460,    -1,   461,    -1,   452,    -1,   170,    -1,
    1162,    -1,  1163,    -1,  1164,    -1,  1165,    -1,  1166,    -1,
     294,    -1,   291,    -1,    20,    -1,   314,    -1,   309,    -1,
     302,    -1,    12,    -1,    13,    -1,    14,    -1,   333,    -1,
     285,    -1,   454,    -1,   160,  1301,    -1,   457,    -1,   208,
      -1,   459,    -1,   247,    -1,   209,    -1,   248,    -1,  1169,
      -1,  1167,  1168,  1169,    -1,    -1,    71,    -1,   399,    -1,
    1169,   465,  1170,    -1,  1169,   460,  1170,    -1,  1170,    -1,
    1170,   461,  1171,    -1,  1170,   452,  1171,    -1,  1171,    -1,
    1172,   170,  1171,    -1,  1172,    -1,   465,  1173,    -1,   460,
    1173,    -1,  1173,    -1,   464,  1169,   450,    -1,  1202,    -1,
     252,    -1,   252,  1312,   506,    -1,   254,    -1,   254,  1312,
     506,    -1,   323,    -1,   323,  1312,   506,    -1,  1176,    -1,
    1175,  1176,    -1,  1197,  1248,    -1,  1220,    -1,  1220,    -1,
    1180,    -1,  1179,  1180,    -1,   506,    -1,   506,    -1,  1183,
      -1,  1182,  1183,    -1,   272,    -1,    -1,  1184,  1185,    -1,
    1186,    -1,  1220,    -1,  1187,    -1,  1187,  1312,  1187,    -1,
     257,    -1,  1189,    -1,  1188,  1189,    -1,  1220,    -1,   506,
      -1,  1192,    -1,  1191,  1192,    -1,   506,    -1,  1189,    -1,
     257,    -1,   506,    -1,   506,    -1,  1197,    -1,  1196,  1197,
      -1,  1218,    -1,  1228,    -1,     6,  1284,  1217,    -1,  1199,
      -1,  1198,  1199,    -1,  1216,    -1,  1227,    -1,  1230,    -1,
    1174,    -1,   246,  1217,    -1,   246,  1228,    -1,   246,  1230,
      -1,     6,  1284,  1203,  1204,    -1,     6,  1284,  1217,    -1,
     272,    -1,  1202,    -1,  1200,  1202,    -1,  1216,    -1,  1228,
      -1,  1230,    -1,  1216,    -1,  1228,    -1,  1230,    -1,  1174,
      -1,   246,  1217,    -1,   246,  1228,    -1,   246,  1230,    -1,
     341,    -1,   153,    -1,  1217,    -1,   257,    -1,  1216,    -1,
    1228,    -1,  1216,    -1,  1227,    -1,  1216,    -1,   257,    -1,
    1216,    -1,   257,    -1,  1230,    -1,  1213,    -1,  1223,    -1,
     512,    -1,  1213,    -1,  1225,    -1,  1213,    -1,  1223,    -1,
    1216,    -1,  1227,    -1,  1230,    -1,  1215,    -1,  1215,    -1,
    1220,    -1,  1220,  1221,    -1,  1217,    -1,  1220,  1221,  1222,
      -1,  1220,  1221,    -1,  1220,  1222,    -1,  1220,    -1,  1219,
      -1,  1220,  1221,  1222,    -1,  1220,  1221,    -1,  1220,  1222,
      -1,  1220,    -1,   506,    -1,   506,  1312,  1220,    -1,   464,
    1167,   450,    -1,   464,  1169,   451,   450,    -1,   464,  1169,
     451,  1169,   450,    -1,   257,    -1,   257,    -1,   257,    -1,
     257,    -1,   417,    -1,   512,    -1,   347,    -1,   213,    -1,
     267,    -1,   462,    -1,  1228,    -1,     9,  1229,    -1,  1229,
      -1,  1228,   449,  1229,    -1,   257,    -1,   417,    -1,   512,
      -1,   347,    -1,   213,    -1,   267,    -1,   462,    -1,  1231,
    1234,    -1,  1232,   464,  1201,   450,  1234,    -1,  1233,   464,
    1167,   450,  1234,    -1,   472,   464,  1236,   450,  1234,    -1,
     304,   464,  1237,   450,    -1,   259,   464,  1238,   450,  1234,
      -1,   260,   464,  1238,   450,  1234,    -1,   261,   464,  1238,
     450,  1234,    -1,   202,  1235,    -1,   497,  1235,    -1,   100,
      -1,   504,    -1,   492,    -1,   265,    -1,   378,    -1,    83,
      -1,   429,    -1,   430,    -1,    -1,   464,  1169,   451,   450,
      -1,   464,  1169,   451,  1169,   450,    -1,    -1,   464,  1167,
     450,    -1,   464,   450,    -1,  1201,    -1,  1201,  1168,   242,
      -1,  1201,  1168,   470,    -1,  1201,    -1,  1201,  1168,  1201,
      -1,  1169,    -1,  1169,  1168,  1189,    -1,    -1,    -1,     9,
      -1,    -1,  1321,    -1,    -1,   224,    -1,    -1,   224,  1244,
      -1,    -1,   448,  1206,    -1,    -1,   286,    -1,   335,    -1,
      -1,   291,    -1,    -1,   313,    -1,   291,   313,    -1,    -1,
     387,  1249,    -1,    -1,   273,  1274,  1250,    -1,    34,    -1,
     282,    -1,   283,    -1,   284,    -1,   345,    -1,   468,    -1,
     469,    -1,   473,    -1,    -1,   401,  1261,    -1,   453,    -1,
       3,    -1,     5,    -1,    10,    -1,    18,    -1,    51,    -1,
      52,    -1,    61,    -1,    72,    -1,    75,    -1,    89,    -1,
     112,    -1,   120,    -1,   122,    -1,   129,    -1,   153,    -1,
     164,    -1,   169,    -1,   196,    -1,   203,    -1,   206,    -1,
     207,    -1,   216,    -1,   223,    -1,   225,    -1,   228,    -1,
     270,    -1,   274,    -1,   276,    -1,   286,    -1,   312,    -1,
     325,    -1,   350,    -1,   361,    -1,   376,    -1,   382,    -1,
     386,    -1,   394,    -1,   404,    -1,   413,    -1,   422,    -1,
     427,    -1,   428,    -1,   431,    -1,   433,    -1,   440,    -1,
     471,    -1,   477,    -1,   482,    -1,   509,    -1,   131,    -1,
     132,    -1,   133,    -1,   134,    -1,   135,    -1,   136,    -1,
     137,    -1,   138,    -1,   140,    -1,   141,    -1,   142,    -1,
     144,    -1,   145,    -1,   146,    -1,   147,    -1,   148,    -1,
     149,    -1,   150,    -1,   151,    -1,   152,    -1,    -1,     7,
      -1,    -1,     8,    -1,    -1,    22,    -1,    -1,    23,    -1,
      -1,    26,    -1,    -1,    30,    -1,    -1,    39,    -1,    -1,
      49,    -1,    -1,    57,    -1,    -1,    58,    -1,    -1,    87,
      -1,    -1,   103,    -1,    -1,   456,    -1,    -1,   177,    -1,
      -1,   189,    -1,    -1,   197,    -1,    -1,   219,    -1,    -1,
     315,    -1,   219,   315,    -1,    -1,   222,    -1,    -1,   458,
      -1,    -1,   229,    -1,    -1,   233,    -1,    -1,   233,    -1,
      22,    -1,    -1,   238,    -1,    -1,   243,    -1,   385,    -1,
      -1,   253,    -1,   255,    -1,    -1,   249,  1274,    -1,   250,
    1255,    -1,    -1,   255,    -1,    -1,   273,    -1,    -1,   300,
      -1,    -1,   300,    -1,   301,    -1,    -1,   307,    -1,    -1,
     310,    -1,    -1,   424,   233,    -1,   424,    -1,   233,    -1,
      -1,   317,    -1,    -1,   338,    -1,    -1,   341,    -1,    -1,
     352,    -1,    -1,   385,    -1,    -1,   406,    -1,    -1,   407,
      -1,    -1,   406,    -1,   406,   233,    -1,    -1,   411,    -1,
      -1,   419,    -1,    -1,   424,    -1,    -1,   439,    -1,    -1,
     443,    -1,    -1,   447,    -1,    -1,   448,    -1,    -1,   448,
      -1,   499,    -1,    -1,   503,    -1,    -1,   503,   404,   448,
      -1,    -1,   505,    -1,    64,   402,    -1,   402,    -1,    67,
      -1,    65,    -1,    68,    -1,    66,    -1,   454,    -1,   160,
      -1,   166,    -1,   162,    -1,   166,    -1,   463,    -1,   219,
      -1,   307,    -1,   419,    -1,   309,    -1,   253,    -1,   255,
      -1,   352,    -1,   354,    -1,    58,    -1,   507,    -1,   352,
    1274,    -1,   354,  1255,    -1,   357,    -1,   476,    -1,   253,
      -1,   255,    -1,   411,    -1,   245,    -1,   505,   125,    -1,
     125,    -1,   341,    64,   402,    -1,    64,   402,    -1,   402,
      -1,   117,    -1,   107,    -1,    90,   211,    -1,    55,    -1,
      90,   188,    -1,    54,    -1,   322,   211,    -1,   326,    -1,
     322,   188,    -1,   327,    -1,   367,   211,    -1,   384,    -1,
     367,   188,    -1,   383,    -1,    90,  1274,    -1,    91,  1255,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,  1368,  1368,  1368,  1400,  1401,  1405,  1406,  1410,  1411,
    1415,  1415,  1438,  1445,  1452,  1458,  1459,  1460,  1464,  1465,
    1469,  1493,  1494,  1498,  1532,  1538,  1550,  1524,  1560,  1559,
    1597,  1632,  1633,  1637,  1638,  1641,  1642,  1646,  1655,  1664,
    1665,  1669,  1673,  1682,  1683,  1691,  1692,  1702,  1703,  1707,
    1708,  1709,  1710,  1711,  1718,  1717,  1730,  1731,  1734,  1735,
    1749,  1748,  1758,  1759,  1760,  1761,  1765,  1766,  1770,  1771,
    1772,  1773,  1777,  1784,  1791,  1798,  1809,  1813,  1817,  1821,
    1828,  1829,  1836,  1835,  1846,  1847,  1848,  1855,  1856,  1860,
    1864,  1876,  1880,  1881,  1886,  1889,  1896,  1901,  1912,  1925,
    1926,  1934,  1935,  1939,  1940,  1941,  1942,  1943,  1944,  1945,
    1946,  1947,  1948,  1949,  1950,  1958,  1957,  1976,  1986,  1999,
    2007,  2010,  2011,  2015,  2025,  2041,  2040,  2064,  2070,  2076,
    2082,  2088,  2094,  2104,  2108,  2115,  2119,  2124,  2123,  2134,
    2138,  2145,  2146,  2147,  2148,  2149,  2150,  2154,  2155,  2162,
    2177,  2180,  2187,  2195,  2199,  2210,  2230,  2238,  2249,  2250,
    2256,  2277,  2278,  2282,  2286,  2307,  2330,  2412,  2415,  2424,
    2443,  2459,  2477,  2495,  2512,  2528,  2529,  2536,  2537,  2545,
    2546,  2556,  2557,  2562,  2561,  2582,  2592,  2593,  2597,  2598,
    2599,  2600,  2601,  2602,  2603,  2604,  2605,  2606,  2607,  2608,
    2609,  2616,  2622,  2632,  2645,  2658,  2674,  2675,  2676,  2677,
    2680,  2681,  2687,  2688,  2692,  2696,  2697,  2702,  2705,  2706,
    2713,  2721,  2722,  2723,  2730,  2754,  2756,  2761,  2771,  2782,
    2789,  2791,  2792,  2798,  2798,  2805,  2810,  2815,  2822,  2823,
    2824,  2828,  2839,  2840,  2844,  2849,  2854,  2859,  2870,  2881,
    2891,  2899,  2900,  2901,  2907,  2918,  2925,  2926,  2932,  2940,
    2941,  2942,  2948,  2949,  2950,  2957,  2958,  2962,  2963,  2969,
    2997,  2998,  2999,  3000,  3007,  3006,  3022,  3023,  3027,  3030,
    3031,  3037,  3038,  3046,  3047,  3055,  3056,  3060,  3081,  3080,
    3097,  3104,  3108,  3114,  3115,  3119,  3129,  3144,  3145,  3146,
    3147,  3148,  3149,  3150,  3151,  3152,  3159,  3166,  3166,  3166,
    3172,  3192,  3226,  3257,  3258,  3265,  3266,  3270,  3271,  3278,
    3289,  3294,  3305,  3306,  3310,  3311,  3317,  3328,  3346,  3347,
    3351,  3352,  3353,  3357,  3364,  3371,  3380,  3392,  3444,  3459,
    3460,  3464,  3474,  3513,  3515,  3514,  3530,  3533,  3533,  3550,
    3551,  3553,  3557,  3559,  3558,  3593,  3606,  3614,  3619,  3625,
    3634,  3644,  3647,  3659,  3660,  3661,  3662,  3666,  3670,  3674,
    3678,  3682,  3686,  3690,  3694,  3698,  3702,  3706,  3710,  3714,
    3725,  3726,  3730,  3731,  3735,  3736,  3737,  3741,  3742,  3746,
    3772,  3776,  3785,  3789,  3798,  3799,  3800,  3801,  3802,  3803,
    3804,  3805,  3806,  3807,  3808,  3809,  3810,  3811,  3818,  3842,
    3870,  3873,  3882,  3907,  3918,  3919,  3923,  3927,  3931,  3935,
    3939,  3943,  3947,  3951,  3955,  3959,  3963,  3967,  3971,  3976,
    3981,  3985,  3989,  3997,  4001,  4005,  4013,  4017,  4021,  4025,
    4029,  4033,  4037,  4041,  4045,  4053,  4061,  4065,  4069,  4073,
    4077,  4081,  4089,  4090,  4094,  4095,  4101,  4107,  4119,  4137,
    4138,  4147,  4168,  4189,  4190,  4194,  4195,  4198,  4199,  4205,
    4206,  4213,  4214,  4221,  4245,  4246,  4263,  4264,  4267,  4268,
    4275,  4276,  4281,  4292,  4303,  4314,  4325,  4354,  4353,  4362,
    4363,  4367,  4368,  4371,  4372,  4385,  4398,  4419,  4428,  4442,
    4444,  4443,  4463,  4465,  4464,  4480,  4482,  4481,  4490,  4491,
    4498,  4497,  4510,  4511,  4512,  4519,  4524,  4528,  4529,  4535,
    4542,  4546,  4547,  4553,  4590,  4594,  4599,  4605,  4606,  4611,
    4612,  4613,  4614,  4615,  4619,  4626,  4633,  4640,  4647,  4653,
    4654,  4659,  4658,  4665,  4666,  4670,  4671,  4672,  4673,  4674,
    4675,  4676,  4677,  4678,  4679,  4680,  4681,  4682,  4683,  4684,
    4685,  4689,  4696,  4697,  4698,  4699,  4700,  4701,  4702,  4705,
    4706,  4707,  4710,  4711,  4715,  4722,  4728,  4729,  4733,  4734,
    4738,  4745,  4749,  4756,  4757,  4761,  4768,  4769,  4773,  4774,
    4778,  4779,  4780,  4784,  4785,  4789,  4790,  4794,  4801,  4808,
    4816,  4818,  4817,  4838,  4839,  4843,  4844,  4849,  4851,  4850,
    4907,  4925,  4926,  4930,  4934,  4938,  4942,  4946,  4950,  4954,
    4958,  4962,  4966,  4970,  4974,  4978,  4982,  4986,  4990,  4994,
    4999,  5003,  5007,  5012,  5017,  5022,  5027,  5028,  5029,  5030,
    5031,  5032,  5033,  5034,  5035,  5042,  5047,  5056,  5057,  5061,
    5062,  5067,  5070,  5074,  5082,  5085,  5089,  5097,  5108,  5116,
    5118,  5128,  5117,  5155,  5155,  5188,  5192,  5191,  5205,  5204,
    5224,  5225,  5230,  5237,  5239,  5243,  5253,  5255,  5263,  5271,
    5279,  5308,  5339,  5341,  5351,  5356,  5383,  5385,  5384,  5421,
    5422,  5426,  5427,  5428,  5445,  5446,  5457,  5456,  5506,  5507,
    5511,  5559,  5572,  5575,  5594,  5599,  5593,  5612,  5612,  5642,
    5649,  5650,  5651,  5652,  5653,  5654,  5655,  5656,  5657,  5658,
    5659,  5660,  5661,  5662,  5663,  5664,  5665,  5666,  5667,  5668,
    5669,  5670,  5671,  5672,  5673,  5674,  5675,  5676,  5677,  5678,
    5679,  5680,  5681,  5682,  5683,  5684,  5685,  5686,  5687,  5688,
    5689,  5690,  5691,  5692,  5693,  5694,  5695,  5696,  5697,  5698,
    5712,  5724,  5723,  5739,  5745,  5749,  5753,  5758,  5763,  5768,
    5773,  5777,  5781,  5785,  5789,  5794,  5798,  5802,  5806,  5810,
    5814,  5818,  5825,  5826,  5833,  5834,  5838,  5839,  5843,  5844,
    5845,  5846,  5847,  5851,  5855,  5856,  5859,  5860,  5863,  5864,
    5870,  5871,  5875,  5876,  5880,  5884,  5890,  5894,  5898,  5902,
    5906,  5910,  5914,  5918,  5922,  5926,  5930,  5934,  5938,  5942,
    5946,  5950,  5954,  5960,  5964,  5968,  5972,  5976,  5980,  5984,
    5991,  5992,  5996,  6000,  6018,  6017,  6026,  6030,  6034,  6040,
    6041,  6048,  6052,  6063,  6062,  6071,  6075,  6087,  6088,  6096,
    6095,  6104,  6105,  6109,  6115,  6115,  6122,  6121,  6131,  6151,
    6155,  6160,  6165,  6186,  6190,  6189,  6206,  6207,  6212,  6220,
    6244,  6246,  6250,  6259,  6272,  6275,  6279,  6283,  6306,  6307,
    6311,  6312,  6317,  6320,  6328,  6332,  6340,  6344,  6355,  6354,
    6362,  6366,  6377,  6376,  6384,  6389,  6397,  6398,  6399,  6400,
    6401,  6409,  6408,  6417,  6424,  6428,  6438,  6449,  6467,  6466,
    6475,  6479,  6483,  6488,  6496,  6500,  6511,  6510,  6520,  6524,
    6528,  6532,  6536,  6540,  6541,  6550,  6552,  6551,  6559,  6568,
    6575,  6579,  6583,  6587,  6597,  6599,  6603,  6604,  6607,  6609,
    6616,  6617,  6621,  6622,  6627,  6631,  6635,  6639,  6643,  6647,
    6651,  6655,  6659,  6663,  6667,  6671,  6675,  6679,  6683,  6687,
    6694,  6698,  6709,  6708,  6717,  6721,  6725,  6729,  6733,  6740,
    6744,  6755,  6754,  6763,  6782,  6781,  6805,  6813,  6814,  6819,
    6830,  6841,  6855,  6859,  6866,  6867,  6872,  6881,  6890,  6895,
    6904,  6905,  6910,  6972,  6973,  6974,  6978,  6979,  6983,  6987,
    6998,  6997,  7009,  7010,  7031,  7045,  7067,  7089,  7109,  7132,
    7133,  7141,  7140,  7149,  7160,  7159,  7169,  7176,  7175,  7188,
    7197,  7201,  7212,  7228,  7227,  7236,  7240,  7244,  7251,  7255,
    7266,  7265,  7273,  7281,  7282,  7286,  7287,  7288,  7293,  7296,
    7303,  7307,  7315,  7322,  7323,  7324,  7325,  7326,  7327,  7328,
    7333,  7336,  7346,  7345,  7354,  7360,  7372,  7371,  7380,  7384,
    7388,  7392,  7399,  7400,  7401,  7402,  7409,  7408,  7422,  7432,
    7441,  7442,  7446,  7447,  7448,  7449,  7450,  7451,  7455,  7456,
    7460,  7465,  7472,  7473,  7474,  7475,  7476,  7480,  7508,  7511,
    7518,  7522,  7532,  7531,  7544,  7543,  7551,  7555,  7566,  7565,
    7574,  7578,  7585,  7589,  7600,  7599,  7607,  7628,  7652,  7653,
    7654,  7655,  7659,  7660,  7664,  7665,  7666,  7667,  7679,  7678,
    7689,  7695,  7694,  7705,  7713,  7721,  7728,  7732,  7745,  7752,
    7764,  7767,  7772,  7776,  7787,  7794,  7795,  7799,  7800,  7803,
    7804,  7809,  7820,  7819,  7828,  7855,  7856,  7861,  7864,  7868,
    7872,  7876,  7880,  7884,  7891,  7892,  7896,  7897,  7901,  7905,
    7915,  7926,  7925,  7933,  7943,  7954,  7953,  7962,  7969,  7973,
    7984,  7983,  7995,  8004,  8007,  8011,  8018,  8022,  8032,  8044,
    8043,  8052,  8056,  8065,  8066,  8071,  8074,  8082,  8086,  8093,
    8101,  8105,  8116,  8115,  8129,  8130,  8131,  8132,  8133,  8134,
    8138,  8139,  8143,  8144,  8150,  8159,  8166,  8167,  8171,  8175,
    8179,  8183,  8187,  8191,  8195,  8199,  8208,  8212,  8221,  8230,
    8231,  8235,  8244,  8245,  8249,  8253,  8264,  8263,  8272,  8271,
    8302,  8305,  8325,  8326,  8329,  8330,  8338,  8339,  8344,  8349,
    8359,  8375,  8380,  8390,  8407,  8406,  8416,  8429,  8432,  8440,
    8443,  8448,  8453,  8461,  8462,  8463,  8464,  8465,  8466,  8470,
    8478,  8479,  8483,  8487,  8498,  8497,  8507,  8520,  8523,  8527,
    8535,  8547,  8550,  8557,  8558,  8559,  8560,  8567,  8566,  8575,
    8582,  8583,  8587,  8588,  8589,  8593,  8594,  8598,  8602,  8613,
    8612,  8621,  8625,  8629,  8636,  8640,  8650,  8661,  8662,  8669,
    8668,  8677,  8683,  8695,  8694,  8702,  8716,  8715,  8723,  8736,
    8738,  8739,  8747,  8746,  8755,  8763,  8764,  8769,  8770,  8775,
    8782,  8783,  8788,  8795,  8796,  8800,  8801,  8805,  8806,  8810,
    8814,  8825,  8824,  8833,  8834,  8835,  8836,  8837,  8841,  8868,
    8871,  8883,  8893,  8898,  8903,  8908,  8916,  8954,  8955,  8959,
    8999,  9009,  9032,  9033,  9034,  9035,  9039,  9048,  9054,  9064,
    9073,  9082,  9083,  9090,  9089,  9101,  9111,  9112,  9117,  9120,
    9124,  9128,  9135,  9136,  9140,  9141,  9145,  9149,  9161,  9164,
    9165,  9174,  9175,  9184,  9187,  9188,  9197,  9198,  9209,  9212,
    9213,  9222,  9223,  9235,  9238,  9240,  9250,  9251,  9263,  9264,
    9268,  9269,  9270,  9274,  9283,  9294,  9295,  9296,  9300,  9309,
    9320,  9325,  9326,  9335,  9336,  9347,  9351,  9361,  9368,  9375,
    9375,  9385,  9386,  9387,  9391,  9400,  9401,  9403,  9404,  9405,
    9406,  9407,  9409,  9410,  9411,  9412,  9413,  9414,  9416,  9417,
    9418,  9420,  9421,  9422,  9423,  9424,  9427,  9428,  9432,  9433,
    9437,  9438,  9442,  9443,  9447,  9451,  9457,  9461,  9467,  9468,
    9469,  9473,  9474,  9475,  9479,  9480,  9481,  9485,  9489,  9493,
    9494,  9495,  9498,  9499,  9509,  9521,  9530,  9542,  9551,  9563,
    9578,  9579,  9584,  9593,  9599,  9619,  9623,  9644,  9685,  9699,
    9700,  9705,  9711,  9712,  9717,  9729,  9730,  9731,  9738,  9749,
    9750,  9754,  9762,  9770,  9774,  9781,  9790,  9791,  9797,  9811,
    9828,  9832,  9839,  9840,  9841,  9848,  9852,  9859,  9860,  9861,
    9862,  9863,  9867,  9871,  9875,  9879,  9883,  9904,  9908,  9915,
    9916,  9917,  9921,  9922,  9923,  9924,  9925,  9929,  9933,  9940,
    9941,  9945,  9946,  9950,  9951,  9955,  9956,  9967,  9968,  9972,
    9973,  9974,  9978,  9979,  9980,  9987,  9988,  9992,  9993,  9997,
    9998,  9999, 10005, 10009, 10013, 10014, 10018, 10022, 10029, 10036,
   10043, 10053, 10060, 10070, 10080, 10090, 10103, 10107, 10115, 10123,
   10127, 10137, 10152, 10175, 10198, 10214, 10215, 10216, 10217, 10218,
   10219, 10223, 10227, 10244, 10248, 10255, 10256, 10257, 10258, 10259,
   10260, 10261, 10267, 10271, 10275, 10279, 10283, 10287, 10291, 10295,
   10299, 10303, 10310, 10311, 10315, 10316, 10317, 10321, 10322, 10323,
   10327, 10331, 10335, 10342, 10346, 10350, 10357, 10364, 10371, 10381,
   10388, 10398, 10405, 10417, 10425, 10426, 10430, 10431, 10435, 10436,
   10441, 10444, 10452, 10455, 10462, 10464, 10465, 10469, 10470, 10474,
   10475, 10476, 10481, 10484, 10497, 10501, 10509, 10513, 10517, 10521,
   10525, 10529, 10533, 10537, 10544, 10545, 10551, 10552, 10553, 10554,
   10555, 10556, 10557, 10558, 10559, 10560, 10561, 10562, 10563, 10564,
   10565, 10566, 10567, 10568, 10569, 10570, 10571, 10572, 10573, 10574,
   10575, 10576, 10577, 10578, 10579, 10580, 10581, 10582, 10583, 10584,
   10585, 10586, 10587, 10588, 10589, 10590, 10591, 10592, 10593, 10594,
   10595, 10596, 10597, 10598, 10599, 10600, 10601, 10602, 10603, 10604,
   10605, 10606, 10607, 10608, 10609, 10610, 10611, 10612, 10613, 10614,
   10615, 10616, 10617, 10618, 10619, 10620, 10627, 10627, 10628, 10628,
   10629, 10629, 10630, 10630, 10631, 10631, 10632, 10632, 10633, 10633,
   10634, 10634, 10635, 10635, 10636, 10636, 10637, 10637, 10638, 10638,
   10639, 10639, 10640, 10640, 10641, 10641, 10642, 10642, 10643, 10643,
   10644, 10644, 10644, 10645, 10645, 10646, 10646, 10647, 10647, 10648,
   10648, 10649, 10649, 10649, 10650, 10650, 10651, 10651, 10651, 10652,
   10652, 10652, 10653, 10653, 10653, 10654, 10654, 10655, 10655, 10656,
   10656, 10657, 10657, 10657, 10658, 10658, 10659, 10659, 10660, 10660,
   10660, 10660, 10661, 10661, 10662, 10662, 10663, 10663, 10664, 10664,
   10665, 10665, 10666, 10666, 10667, 10667, 10668, 10668, 10668, 10669,
   10669, 10670, 10670, 10671, 10671, 10672, 10672, 10673, 10673, 10674,
   10674, 10675, 10675, 10676, 10676, 10676, 10677, 10677, 10678, 10678,
   10679, 10679, 10683, 10683, 10684, 10684, 10685, 10685, 10686, 10686,
   10687, 10687, 10688, 10688, 10689, 10689, 10690, 10690, 10691, 10691,
   10692, 10692, 10693, 10693, 10694, 10694, 10695, 10695, 10696, 10696,
   10697, 10697, 10698, 10698, 10701, 10702, 10703, 10707, 10707, 10708,
   10708, 10709, 10709, 10710, 10710, 10711, 10711, 10712, 10712, 10713,
   10713, 10714, 10714
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
     765,   766,   767,   768
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   514,   516,   515,   517,   517,   518,   518,   519,   519,
     521,   520,   522,   523,   524,   525,   525,   525,   526,   526,
     527,   528,   528,   529,   531,   532,   533,   530,   535,   534,
     536,   537,   537,   538,   538,   539,   539,   540,   540,   540,
     540,   541,   541,   542,   542,   543,   543,   544,   544,   545,
     545,   545,   545,   545,   547,   546,   548,   548,   549,   549,
     551,   550,   552,   552,   552,   552,   553,   553,   554,   554,
     554,   554,   555,   556,   557,   558,   559,   559,   559,   559,
     560,   560,   562,   561,   563,   563,   563,   564,   564,   565,
     565,   565,   566,   566,   567,   567,   568,   568,   569,   570,
     570,   571,   571,   572,   572,   572,   572,   572,   572,   572,
     572,   572,   572,   572,   572,   574,   573,   575,   575,   575,
     575,   576,   576,   577,   577,   579,   578,   580,   580,   580,
     580,   580,   580,   581,   581,   582,   582,   583,   582,   584,
     584,   585,   585,   585,   585,   585,   585,   586,   586,   587,
     588,   588,   589,   590,   590,   591,   592,   592,   593,   593,
     594,   595,   595,   596,   596,   597,   598,   599,   599,   600,
     601,   602,   603,   604,   605,   606,   606,   607,   607,   608,
     608,   609,   609,   611,   610,   610,   612,   612,   613,   613,
     613,   613,   613,   613,   613,   613,   613,   613,   613,   613,
     613,   614,   614,   614,   614,   614,   615,   615,   615,   615,
     616,   616,   617,   617,   617,   618,   618,   619,   619,   619,
     620,   621,   621,   621,   622,   623,   623,   623,   624,   625,
     626,   626,   626,   628,   627,   629,   629,   629,   630,   630,
     630,   630,   631,   631,   632,   632,   632,   632,   633,   634,
     635,   636,   636,   636,   637,   638,   639,   639,   640,   641,
     641,   641,   642,   642,   642,   643,   643,   644,   644,   645,
     646,   646,   646,   646,   648,   647,   649,   649,   650,   651,
     651,   652,   652,   653,   653,   654,   654,   655,   657,   656,
     656,   658,   658,   659,   659,   660,   660,   660,   660,   660,
     660,   660,   660,   660,   660,   660,   661,   662,   662,   662,
     663,   663,   663,   664,   664,   665,   665,   666,   666,   667,
     668,   668,   669,   669,   670,   670,   671,   672,   673,   673,
     674,   674,   674,   675,   676,   677,   678,   679,   680,   681,
     681,   682,   682,   683,   684,   683,   685,   686,   685,   687,
     687,   687,   688,   689,   688,   688,   690,   691,   691,   691,
     692,   693,   693,   694,   694,   694,   694,   695,   695,   695,
     695,   695,   695,   695,   695,   695,   695,   695,   695,   695,
     696,   696,   697,   697,   698,   698,   698,   699,   699,   700,
     701,   701,   702,   702,   703,   703,   703,   703,   703,   703,
     703,   703,   703,   703,   703,   703,   703,   703,   704,   705,
     706,   706,   707,   708,   709,   709,   710,   710,   710,   710,
     710,   710,   710,   710,   710,   710,   710,   710,   710,   710,
     710,   710,   710,   710,   710,   710,   710,   710,   710,   710,
     710,   710,   710,   710,   710,   710,   710,   710,   710,   710,
     710,   710,   711,   711,   712,   712,   713,   713,   714,   715,
     715,   716,   716,   717,   717,   718,   718,   719,   719,   720,
     720,   721,   721,   722,   723,   723,   724,   724,   725,   725,
     726,   726,   727,   728,   729,   730,   731,   733,   732,   734,
     734,   735,   735,   736,   736,   737,   737,   738,   738,   739,
     740,   739,   741,   742,   741,   743,   744,   743,   745,   745,
     747,   746,   748,   748,   748,   749,   749,   749,   749,   750,
     751,   752,   752,   753,   754,   754,   754,   755,   755,   756,
     756,   756,   756,   756,   757,   758,   759,   760,   761,   762,
     762,   764,   763,   765,   765,   766,   766,   766,   766,   766,
     766,   766,   766,   766,   766,   766,   766,   766,   766,   766,
     766,   767,   768,   768,   768,   768,   768,   768,   768,   769,
     769,   769,   770,   770,   771,   772,   773,   773,   774,   774,
     775,   776,   777,   778,   778,   779,   780,   780,   781,   781,
     782,   782,   782,   783,   783,   784,   784,   785,   786,   787,
     788,   789,   788,   790,   790,   791,   791,   792,   793,   792,
     792,   794,   794,   795,   795,   795,   795,   795,   795,   795,
     795,   795,   795,   795,   795,   795,   795,   795,   795,   795,
     795,   795,   795,   795,   795,   795,   795,   795,   795,   795,
     795,   795,   795,   795,   795,   795,   795,   796,   796,   797,
     797,   798,   798,   798,   799,   799,   799,   800,   801,   802,
     803,   804,   802,   805,   802,   806,   807,   806,   808,   806,
     809,   809,   810,   811,   811,   811,   812,   812,   812,   812,
     812,   812,   813,   813,   814,   814,   815,   816,   815,   817,
     817,   818,   818,   818,   818,   818,   820,   819,   821,   821,
     822,   823,   824,   824,   826,   827,   825,   829,   828,   828,
     830,   830,   830,   830,   830,   830,   830,   830,   830,   830,
     830,   830,   830,   830,   830,   830,   830,   830,   830,   830,
     830,   830,   830,   830,   830,   830,   830,   830,   830,   830,
     830,   830,   830,   830,   830,   830,   830,   830,   830,   830,
     830,   830,   830,   830,   830,   830,   830,   830,   830,   830,
     830,   832,   831,   833,   833,   833,   833,   833,   833,   833,
     833,   833,   833,   833,   833,   833,   833,   833,   833,   833,
     833,   833,   834,   834,   835,   835,   836,   836,   837,   837,
     837,   837,   837,   838,   839,   839,   840,   840,   841,   841,
     842,   842,   843,   843,   844,   844,   844,   844,   844,   844,
     844,   844,   844,   844,   844,   844,   844,   844,   844,   844,
     844,   844,   844,   844,   844,   844,   844,   844,   844,   844,
     845,   845,   846,   846,   848,   847,   849,   849,   849,   850,
     850,   851,   851,   853,   852,   854,   854,   855,   855,   857,
     856,   858,   858,   859,   860,   860,   862,   861,   863,   864,
     864,   864,   864,   865,   866,   865,   867,   867,   868,   868,
     869,   869,   869,   869,   870,   870,   870,   870,   871,   871,
     872,   872,   873,   873,   874,   874,   875,   875,   877,   876,
     878,   878,   880,   879,   881,   881,   882,   882,   882,   882,
     882,   884,   883,   885,   886,   886,   887,   888,   890,   889,
     891,   891,   892,   892,   893,   893,   895,   894,   896,   896,
     896,   896,   896,   896,   896,   897,   898,   897,   899,   900,
     900,   900,   900,   900,   901,   901,   902,   902,   903,   903,
     904,   904,   905,   905,   906,   906,   906,   906,   906,   906,
     906,   906,   906,   906,   906,   906,   906,   906,   906,   906,
     907,   907,   909,   908,   910,   910,   910,   910,   910,   911,
     911,   913,   912,   914,   916,   915,   917,   918,   918,   919,
     919,   919,   920,   920,   921,   921,   922,   923,   924,   924,
     925,   925,   926,   926,   926,   926,   927,   927,   928,   928,
     930,   929,   931,   931,   931,   931,   931,   931,   931,   932,
     932,   934,   933,   935,   937,   936,   938,   940,   939,   941,
     942,   942,   943,   945,   944,   946,   946,   946,   947,   947,
     949,   948,   950,   951,   951,   952,   952,   952,   953,   953,
     954,   954,   955,   956,   956,   956,   956,   956,   956,   956,
     957,   957,   959,   958,   960,   960,   962,   961,   963,   964,
     964,   964,   965,   965,   965,   965,   967,   966,   968,   969,
     970,   970,   971,   971,   971,   971,   971,   971,   972,   972,
     973,   973,   974,   974,   974,   974,   974,   975,   976,   976,
     977,   977,   979,   978,   981,   980,   982,   982,   984,   983,
     985,   985,   986,   986,   988,   987,   989,   989,   990,   990,
     990,   990,   991,   991,   992,   992,   992,   992,   994,   993,
     995,   996,   995,   995,   997,   997,   998,   998,   999,   999,
    1000,  1000,  1000,  1000,  1000,  1001,  1001,  1002,  1002,  1003,
    1003,  1004,  1006,  1005,  1007,  1008,  1008,  1009,  1009,  1009,
    1009,  1009,  1009,  1009,  1010,  1010,  1011,  1011,  1012,  1012,
    1013,  1015,  1014,  1016,  1017,  1019,  1018,  1020,  1021,  1021,
    1023,  1022,  1024,  1025,  1025,  1025,  1026,  1026,  1027,  1029,
    1028,  1030,  1030,  1031,  1031,  1032,  1032,  1033,  1033,  1034,
    1035,  1035,  1037,  1036,  1038,  1038,  1038,  1038,  1038,  1038,
    1039,  1039,  1040,  1040,  1041,  1042,  1043,  1043,  1044,  1044,
    1044,  1044,  1044,  1044,  1044,  1044,  1045,  1045,  1046,  1047,
    1047,  1048,  1049,  1049,  1050,  1050,  1052,  1051,  1054,  1053,
    1055,  1055,  1056,  1056,  1057,  1057,  1058,  1058,  1059,  1059,
    1059,  1060,  1060,  1060,  1062,  1061,  1063,  1064,  1064,  1065,
    1065,  1065,  1065,  1066,  1066,  1066,  1066,  1066,  1066,  1067,
    1068,  1068,  1069,  1069,  1071,  1070,  1070,  1072,  1072,  1072,
    1072,  1073,  1073,  1074,  1074,  1074,  1074,  1076,  1075,  1077,
    1078,  1078,  1079,  1079,  1079,  1080,  1080,  1081,  1081,  1083,
    1082,  1084,  1084,  1084,  1085,  1085,  1086,  1087,  1087,  1089,
    1088,  1090,  1090,  1092,  1091,  1093,  1095,  1094,  1096,  1097,
    1097,  1097,  1099,  1098,  1100,  1101,  1101,  1102,  1102,  1103,
    1104,  1104,  1105,  1106,  1106,  1107,  1107,  1108,  1108,  1109,
    1109,  1111,  1110,  1112,  1112,  1112,  1112,  1112,  1113,  1114,
    1114,  1115,  1115,  1115,  1115,  1115,  1116,  1117,  1117,  1118,
    1118,  1118,  1119,  1119,  1119,  1119,  1120,  1121,  1121,  1122,
    1123,  1124,  1124,  1126,  1125,  1127,  1128,  1128,  1129,  1129,
    1129,  1129,  1130,  1130,  1131,  1131,  1132,  1132,  1133,  1134,
    1134,  1135,  1135,  1136,  1137,  1137,  1138,  1138,  1139,  1140,
    1140,  1141,  1141,  1142,  1143,  1143,  1144,  1144,  1145,  1145,
    1146,  1146,  1146,  1147,  1148,  1149,  1149,  1149,  1150,  1151,
    1152,  1153,  1153,  1154,  1154,  1155,  1155,  1156,  1157,  1159,
    1158,  1160,  1160,  1160,  1161,  1161,  1161,  1161,  1161,  1161,
    1161,  1161,  1161,  1161,  1161,  1161,  1161,  1161,  1161,  1161,
    1161,  1161,  1161,  1161,  1161,  1161,  1161,  1161,  1162,  1162,
    1163,  1163,  1164,  1164,  1165,  1166,  1167,  1167,  1168,  1168,
    1168,  1169,  1169,  1169,  1170,  1170,  1170,  1171,  1171,  1172,
    1172,  1172,  1173,  1173,  1174,  1174,  1174,  1174,  1174,  1174,
    1175,  1175,  1176,  1177,  1178,  1179,  1179,  1180,  1181,  1182,
    1182,  1183,  1184,  1184,  1185,  1186,  1186,  1186,  1187,  1188,
    1188,  1189,  1190,  1191,  1191,  1192,  1193,  1193,  1194,  1195,
    1196,  1196,  1197,  1197,  1197,  1198,  1198,  1199,  1199,  1199,
    1199,  1199,  1199,  1199,  1199,  1199,  1199,  1200,  1200,  1201,
    1201,  1201,  1202,  1202,  1202,  1202,  1202,  1202,  1202,  1203,
    1203,  1204,  1204,  1205,  1205,  1206,  1206,  1207,  1207,  1208,
    1208,  1208,  1209,  1209,  1209,  1210,  1210,  1211,  1211,  1212,
    1212,  1212,  1213,  1214,  1215,  1215,  1216,  1217,  1217,  1217,
    1217,  1218,  1219,  1219,  1219,  1219,  1220,  1220,  1221,  1222,
    1222,  1223,  1224,  1225,  1226,  1226,  1226,  1226,  1226,  1226,
    1226,  1227,  1227,  1228,  1228,  1229,  1229,  1229,  1229,  1229,
    1229,  1229,  1230,  1230,  1230,  1230,  1230,  1230,  1230,  1230,
    1230,  1230,  1231,  1231,  1232,  1232,  1232,  1233,  1233,  1233,
    1234,  1234,  1234,  1235,  1235,  1235,  1236,  1236,  1236,  1237,
    1237,  1238,  1238,  1239,  1240,  1240,  1241,  1241,  1242,  1242,
    1243,  1243,  1244,  1244,  1245,  1245,  1245,  1246,  1246,  1247,
    1247,  1247,  1248,  1248,  1249,  1249,  1250,  1250,  1250,  1250,
    1250,  1250,  1250,  1250,  1251,  1251,  1252,  1252,  1252,  1252,
    1252,  1252,  1252,  1252,  1252,  1252,  1252,  1252,  1252,  1252,
    1252,  1252,  1252,  1252,  1252,  1252,  1252,  1252,  1252,  1252,
    1252,  1252,  1252,  1252,  1252,  1252,  1252,  1252,  1252,  1252,
    1252,  1252,  1252,  1252,  1252,  1252,  1252,  1252,  1252,  1252,
    1252,  1252,  1252,  1252,  1252,  1252,  1252,  1252,  1252,  1252,
    1252,  1252,  1252,  1252,  1252,  1252,  1252,  1252,  1252,  1252,
    1252,  1252,  1252,  1252,  1252,  1252,  1253,  1253,  1254,  1254,
    1255,  1255,  1256,  1256,  1257,  1257,  1258,  1258,  1259,  1259,
    1260,  1260,  1261,  1261,  1262,  1262,  1263,  1263,  1264,  1264,
    1265,  1265,  1266,  1266,  1267,  1267,  1268,  1268,  1269,  1269,
    1270,  1270,  1270,  1271,  1271,  1272,  1272,  1273,  1273,  1274,
    1274,  1275,  1275,  1275,  1276,  1276,  1277,  1277,  1277,  1278,
    1278,  1278,  1279,  1279,  1279,  1280,  1280,  1281,  1281,  1282,
    1282,  1283,  1283,  1283,  1284,  1284,  1285,  1285,  1286,  1286,
    1286,  1286,  1287,  1287,  1288,  1288,  1289,  1289,  1290,  1290,
    1291,  1291,  1292,  1292,  1293,  1293,  1294,  1294,  1294,  1295,
    1295,  1296,  1296,  1297,  1297,  1298,  1298,  1299,  1299,  1300,
    1300,  1301,  1301,  1302,  1302,  1302,  1303,  1303,  1304,  1304,
    1305,  1305,  1306,  1306,  1307,  1307,  1308,  1308,  1309,  1309,
    1310,  1310,  1311,  1311,  1312,  1312,  1313,  1313,  1314,  1314,
    1315,  1315,  1316,  1316,  1317,  1317,  1318,  1318,  1319,  1319,
    1320,  1320,  1321,  1321,  1322,  1322,  1322,  1323,  1323,  1324,
    1324,  1325,  1325,  1326,  1326,  1327,  1327,  1328,  1328,  1329,
    1329,  1330,  1330
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
       0,     1,     2,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     1,     0,     1,     0,     1,     1,     0,
       1,     1,     0,     2,     2,     0,     1,     0,     1,     0,
       1,     0,     1,     1,     0,     1,     0,     1,     0,     2,
       1,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     2,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     1,     0,     1,     0,     3,
       0,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     2,     1,     3,     2,     1,     1,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     2
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
    1779,    46,     0,     0,     0,  1822,  1779,  1779,  1779,     0,
       0,     0,     0,     0,  1779,     0,     0,  1754,   115,    48,
      49,    50,    53,    51,    52,     0,   101,   103,   104,   105,
     150,   107,   106,   108,   109,   110,   111,   112,   113,   114,
     177,     0,     0,    23,  1780,     0,     0,  1508,   125,  1779,
    1779,  1823,  1779,     0,     0,     0,     0,  1779,  1779,    60,
      82,     0,    54,    98,  1755,     0,  1779,     0,    99,   102,
       0,   149,     0,   181,    20,    13,    29,    37,    40,    42,
      41,  1816,    39,  1779,     0,     0,     0,  1576,   171,  1501,
     169,   174,   176,     0,     0,    62,    84,   173,    56,  1509,
     152,   153,  1781,   156,  1581,  1201,  1200,   116,   120,  1808,
    1779,     0,   100,   151,   178,   179,    38,  1817,    36,     0,
    1588,  1584,  1589,  1587,  1585,  1590,  1586,   160,   161,   163,
     172,   167,  1864,  1865,     0,   165,     0,  1753,     0,     0,
       0,  1779,  1886,    80,    61,  1752,    66,    68,    69,    70,
      71,  1752,     0,  1779,     0,    83,     0,    87,    55,    58,
     154,  1783,  1782,   157,     0,  1808,  1811,  1810,     0,     0,
     117,   121,     0,     0,   262,   182,   131,   130,   145,   141,
     146,   127,   144,   142,   128,   129,   143,   126,   132,   133,
     135,   162,     0,  1851,   166,     0,  1577,   170,  1885,  1779,
       0,     0,    65,    67,    63,    81,  1752,  1779,     0,     0,
      92,    93,    94,     0,     0,    85,    88,     0,     0,  1582,
     155,   158,     0,  1809,   123,   118,   119,   122,   180,     0,
       0,  1650,     0,   274,   270,    24,     0,   265,   267,   268,
     134,   137,     0,   164,     0,     0,  1884,    74,    64,     0,
    1502,    73,    89,     0,    90,    91,    97,    86,    57,     0,
     159,   124,   185,  1651,   183,  1760,   271,   272,   273,  1742,
     281,     0,   263,   266,     0,   136,   168,     0,    77,    79,
      78,    75,    76,    95,    59,   186,  1761,  1835,  1743,  1764,
       0,   283,   264,   138,   139,  1872,  1873,    72,  1818,  1836,
    1756,  1765,     0,     0,     0,   285,     0,  1797,  1818,  1843,
       0,   244,     0,  1779,  1752,  1784,   246,     0,  1853,  1850,
     232,   184,   231,   187,   188,   189,   190,   191,   192,     0,
     193,     0,   194,   243,   195,   196,   197,   198,   199,   200,
    1748,  1779,  1757,     0,  1487,   269,  1485,   282,     0,    25,
     140,  1798,  1779,  1819,  1784,  1844,  1845,   212,  1852,   247,
    1818,  1779,  1779,  1785,  1779,  1779,   256,  1742,   257,     0,
    1779,  1797,  1749,     0,     0,   275,   276,   279,  1486,   284,
     291,   292,   343,   286,   346,     0,     0,  1779,   214,   213,
     210,   246,   242,     0,     0,     0,     0,   255,  1812,  1812,
       0,   258,     0,  1779,   245,   228,   277,     0,   278,     0,
     499,   287,  1633,     0,   288,   222,   223,   221,   220,     0,
     206,   207,   217,   217,     0,   217,   209,   208,   217,     0,
    1507,  1506,   248,   249,   250,   251,   254,  1813,   259,   260,
     261,   229,     0,   280,     0,     0,   502,   348,     0,     0,
     352,     0,   290,   293,  1636,   218,   203,   219,   204,  1760,
     205,   202,   215,   201,   216,  1779,     0,   238,   237,   238,
     234,   344,     0,     0,   505,   351,     0,   349,     0,   358,
     359,   353,     0,   356,  1779,  1883,     0,   225,  1637,   211,
       0,   252,  1499,     0,   236,   235,   346,   500,     0,     0,
     600,   350,   355,   392,   361,  1756,  1779,     0,     0,  1779,
    1756,  1797,  1779,  1740,   289,     0,   294,   297,   298,   299,
     300,   301,   302,   303,   304,   305,     0,     0,  1882,     0,
     224,   253,  1500,     0,   241,   345,   346,   503,     0,     0,
      26,  1779,  1744,     0,     0,     0,  1779,  1740,     0,     0,
       0,     0,     0,  1779,   339,  1741,   340,     0,   338,   341,
     295,   296,     0,     0,   501,   346,   506,     0,   663,     0,
     486,   416,  1824,  1824,  1824,  1824,  1824,  1846,   417,   452,
     454,   420,   421,   422,   423,   424,   425,   448,   446,   447,
     449,   450,   455,   453,   426,  1820,   451,     0,   427,   413,
     428,   429,     0,     0,  1827,   431,   432,   430,  1786,   434,
     435,   433,  1779,  1781,   393,   394,   395,   396,   397,   398,
     414,   418,   419,   399,   400,   401,   402,   403,   404,   405,
     406,   407,     0,     0,  1745,     0,   389,     0,   362,   317,
     337,  1874,  1875,  1505,   326,  1503,  1867,  1866,   319,  1795,
    1754,  1768,     0,  1779,   323,   322,  1779,   342,     0,   147,
     148,   227,     0,  1870,  1871,   239,   504,   508,   601,     0,
      27,   707,   497,   498,  1825,   445,   444,   437,   436,   443,
     442,   441,   440,   439,   438,  1847,     0,  1821,   483,   469,
     463,   408,  1570,   495,  1828,  1787,  1788,   484,     0,     0,
     410,   412,  1664,  1664,   391,     0,  1804,  1599,     0,     0,
    1595,  1600,  1598,  1596,  1601,  1597,   390,   363,  1591,  1593,
       0,   307,  1504,  1796,   328,     0,   310,  1769,  1829,   336,
       0,     0,   226,   240,   507,   603,   665,     0,     0,   485,
    1768,   465,     0,  1839,     0,  1568,  1569,     0,   415,   487,
     489,   491,     0,   409,  1752,   456,   457,  1592,  1805,     0,
       0,   372,   368,   371,   370,   369,   384,   380,   382,   383,
     385,   381,   386,   387,   388,   365,   376,   377,   378,   373,
     374,   375,   367,   364,     0,   318,   309,   308,   306,   327,
    1754,  1830,   315,   324,   321,   325,   320,     0,   509,     0,
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
       0,     0,   463,   464,  1840,   467,  1617,  1612,  1623,     0,
    1474,  1476,     0,     0,     0,  1615,     0,  1478,  1616,  1618,
    1619,     0,     0,     0,     0,  1614,  1623,  1613,  1458,  1456,
    1463,  1466,  1468,  1471,  1535,  1473,  1532,  1566,  1533,  1534,
    1620,     0,     0,     0,  1567,   496,   493,   490,     0,   411,
    1665,   366,   379,  1594,     0,     0,   329,   330,   331,   332,
       0,   311,  1767,   317,     0,  1488,   510,     0,   608,     0,
     605,   673,   673,     0,     0,  1667,  1668,  1669,  1670,  1671,
    1672,  1673,  1674,  1675,  1676,  1677,  1678,  1679,  1680,  1716,
    1717,  1718,  1719,  1720,  1721,  1722,  1723,  1724,  1725,  1726,
    1727,  1728,  1729,  1730,  1731,  1732,  1733,  1734,  1735,  1681,
    1682,  1683,  1684,  1685,  1686,  1687,  1688,  1689,  1690,  1691,
    1692,  1693,  1694,  1695,  1696,  1697,  1698,  1699,  1700,  1701,
    1702,  1703,  1704,  1705,  1706,  1707,  1708,  1709,  1710,  1711,
    1666,  1712,  1713,  1714,  1715,   760,     0,     0,     0,     0,
     859,     0,     0,     0,     0,     0,     0,     0,  1419,  1002,
       0,     0,  1841,   879,   878,     0,  1022,  1419,     0,     0,
       0,     0,     0,     0,   759,     0,  1130,     0,     0,     0,
       0,     0,     0,     0,     0,  1273,  1276,  1264,  1274,  1275,
    1266,     0,     0,  1298,  1296,     0,   707,     0,     0,     0,
       0,   470,   466,   471,  1806,   474,     0,  1610,  1536,  1537,
    1538,     0,     0,     0,     0,     0,     0,     0,  1470,     0,
    1469,     0,  1611,  1459,  1460,  1578,     0,     0,     0,     0,
       0,     0,     0,     0,  1602,     0,     0,     0,     0,   488,
       0,   492,   335,   334,  1746,  1754,   316,     0,   610,   611,
     606,  1751,   673,   670,   676,     0,   673,   685,   660,   783,
     832,   786,   782,  1804,     0,     0,  1526,   841,  1520,   839,
    1515,  1517,  1518,  1519,   844,     0,  1638,  1498,   850,   851,
       0,  1494,  1496,  1495,   862,   860,   861,   886,     0,  1548,
     889,   890,  1547,   893,   896,  1804,   904,     0,  1480,  1652,
    1512,  1571,  1575,  1513,     0,   914,  1818,  1595,   960,  1384,
     925,   929,  1515,     0,  1517,   969,     0,   863,   972,   981,
     980,   998,     0,   977,   979,  1418,     0,  1004,  1008,  1006,
    1009,  1007,  1001,  1012,  1013,  1510,  1015,  1016,  1842,  1018,
    1492,  1010,  1837,  1417,  1031,  1033,  1053,  1054,  1057,     0,
    1059,  1060,  1061,  1093,  1230,  1563,  1564,     0,  1095,     0,
    1102,     0,  1111,  1108,  1110,  1109,  1105,  1112,  1132,  1498,
    1119,  1130,  1121,     0,  1128,     0,  1549,  1495,  1551,     0,
    1158,  1644,  1162,  1366,  1483,  1168,  1818,  1176,  1366,     0,
    1190,  1183,  1484,     0,  1491,  1193,  1194,  1195,  1196,  1197,
    1198,  1219,  1199,  1222,     0,  1489,     0,     0,  1562,  1575,
    1227,  1262,  1249,  1267,  1750,  1287,     0,  1280,  1282,     0,
    1294,     0,  1300,  1301,   695,   701,   690,   691,   692,   694,
       0,  1304,     0,  1307,  1309,  1329,  1315,  1376,  1366,   472,
     474,  1807,     0,   478,   473,  1625,  1458,  1456,  1475,  1477,
    1458,     0,     0,     0,  1458,  1529,  1530,  1531,     0,  1479,
    1472,  1458,     0,  1457,  1579,     0,  1462,  1461,  1465,  1464,
    1467,     0,     0,  1458,     0,  1779,  1747,     0,   313,     0,
    1779,  1826,   671,  1779,     0,   682,   674,   675,   686,   833,
     762,  1747,   796,   787,     0,     0,     0,     0,  1521,  1522,
    1523,   842,   835,     0,     0,  1516,  1640,  1639,   847,   852,
     854,     0,   887,   857,  1550,   863,   891,   896,  1876,  1877,
     894,     0,   897,     0,   905,   902,  1859,  1858,  1481,     0,
    1654,  1482,  1573,  1574,   911,   912,   915,   909,  1411,   961,
     917,   704,     0,   923,  1386,     0,   940,     0,   934,  1384,
    1384,  1384,  1384,   970,   963,     0,     0,   864,   973,   999,
     975,  1419,  1419,   976,   983,   984,   704,  1443,  1444,  1445,
    1439,  1841,  1431,  1451,  1454,  1453,  1455,  1447,  1438,  1437,
    1442,  1441,  1440,  1446,  1426,  1430,  1448,  1450,  1452,  1428,
    1429,  1425,  1427,  1420,  1421,  1432,  1433,  1434,  1435,  1436,
    1424,  1005,  1003,  1511,  1020,  1838,   704,  1035,     0,  1055,
       0,  1082,  1066,  1058,  1063,  1064,  1065,  1234,     0,  1565,
       0,     0,  1103,  1099,     0,  1112,  1850,     0,  1120,  1126,
    1127,   704,  1123,  1419,     0,     0,  1131,     0,  1159,  1143,
    1645,  1646,  1818,     0,  1163,  1169,  1166,  1145,  1177,  1171,
    1173,  1185,  1191,  1180,     0,  1185,     0,  1543,  1544,  1220,
    1223,     0,     0,  1490,  1203,     0,  1202,     0,     0,  1573,
    1263,  1245,  1251,  1779,  1252,  1247,     0,  1265,     0,     0,
    1288,  1278,     0,  1281,     0,  1295,  1290,     0,  1302,   702,
     700,   693,     0,  1310,  1311,  1308,  1330,  1313,  1750,     0,
    1377,  1364,  1368,   478,   468,  1750,   461,   476,   477,  1784,
    1624,     0,  1620,  1620,  1620,     0,  1606,     0,  1620,  1580,
       0,  1620,  1620,  1849,     0,   333,  1806,   312,   514,  1779,
    1779,  1740,  1792,   539,   513,   517,   518,     0,  1762,   625,
    1779,   615,  1846,   616,  1855,  1854,     0,  1779,     0,   628,
     619,   624,  1799,   620,     0,   623,   630,   627,   621,   626,
       0,   631,   622,     0,   642,   636,   640,   639,   637,   641,
     612,   643,   638,     0,  1799,     0,  1779,   683,     0,     0,
     661,   792,   797,   798,  1799,  1799,   790,   791,  1799,   778,
    1379,  1857,  1856,   775,   767,   769,   770,     0,  1379,     0,
       0,     0,   784,   773,     0,   781,   764,   780,   765,  1540,
    1539,     0,  1525,     0,  1804,  1389,   840,  1575,  1513,     0,
    1642,   847,     0,   845,     0,     0,  1497,   874,   895,   900,
       0,     0,  1514,  1389,  1779,  1653,  1572,   913,   704,   910,
    1413,  1385,   705,   927,  1746,   704,  1383,   933,   932,   931,
     930,   941,  1384,  1779,   944,     0,   947,   948,     0,  1779,
     951,   952,   953,   954,     0,   955,  1384,   942,     0,   798,
     920,   921,   918,   919,     0,  1389,     0,   870,   978,   993,
     995,   994,   988,   990,   996,  1419,   985,   982,  1419,   986,
    1449,  1422,  1423,  1806,  1019,  1493,   704,  1027,  1028,  1841,
    1043,  1044,  1046,  1048,  1049,  1045,  1047,  1038,  1841,  1034,
       0,  1083,     0,  1085,  1084,  1086,  1068,  1078,     0,     0,
    1062,  1236,     0,  1770,     0,  1096,  1389,     0,     0,     0,
    1114,  1124,  1137,  1133,  1138,  1134,  1139,     0,  1129,  1373,
    1372,  1136,  1145,  1367,  1559,  1560,  1561,     0,     0,  1411,
       0,   704,     0,  1184,     0,     0,     0,  1221,     0,  1225,
    1224,  1217,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1205,  1206,  1647,  1411,     0,  1268,  1833,  1833,  1283,
    1284,  1285,     0,  1389,     0,     0,   703,     0,  1634,     0,
    1285,  1173,  1736,   462,     0,  1779,  1632,  1607,  1608,  1609,
    1630,  1627,  1628,  1605,  1621,     0,  1603,  1604,   494,     0,
       0,  1901,  1902,  1779,  1740,     0,   511,   515,  1763,   519,
       0,     0,   613,   614,   617,   618,     0,   645,  1800,  1779,
    1839,  1779,   646,   644,   658,  1779,   677,   678,   681,     0,
     672,   687,   689,  1779,   800,     0,     0,   788,   789,     0,
     704,   779,  1381,   766,   768,  1379,   776,   771,   772,   785,
     774,  1542,  1524,  1541,  1652,     0,   704,   836,  1391,  1573,
    1574,  1389,     0,  1641,   846,   848,   855,   853,   882,  1777,
     899,   898,   903,     0,  1412,   704,  1410,   707,  1387,   922,
       0,   945,   946,   949,   950,     0,  1415,  1415,   943,   924,
     936,   937,   935,   938,     0,   964,     0,   865,   866,   676,
       0,  1419,  1419,   992,   704,   989,     0,  1026,   704,  1029,
    1024,     0,     0,  1050,     0,     0,     0,  1079,  1081,     0,
    1074,  1088,  1075,  1076,  1067,  1070,  1088,  1228,  1779,  1784,
       0,  1771,  1235,  1097,  1100,     0,  1114,  1113,  1117,  1106,
       0,  1125,  1122,     0,     0,  1147,  1146,   704,  1167,  1399,
    1172,  1174,     0,  1186,  1419,  1419,  1181,  1187,  1204,  1216,
    1218,  1208,  1209,  1210,  1214,  1211,  1215,  1212,  1213,  1207,
    1648,  1261,     0,  1258,  1259,  1253,     0,  1246,  1881,  1880,
       0,  1834,  1271,  1271,  1394,     0,  1652,  1291,     0,   696,
       0,  1635,  1316,  1317,     0,  1320,  1323,  1327,  1321,  1411,
    1737,     0,   482,   479,   480,     0,  1622,   314,   516,  1793,
    1794,  1583,   527,   524,   357,   540,   520,   521,  1554,   635,
    1552,  1553,   634,   651,   657,     0,   654,   679,   680,   689,
     707,     0,     0,  1379,   793,   795,   794,  1380,   704,  1378,
     777,  1389,  1514,  1390,   704,  1388,  1572,   837,  1643,  1545,
    1546,  1862,  1863,   884,   704,  1804,  1778,   881,   880,   876,
       0,  1656,  1657,  1658,  1659,  1660,  1661,  1662,  1663,  1655,
    1414,     0,   957,   956,   959,     0,  1557,  1558,   958,     0,
     928,  1389,  1480,  1389,  1480,   867,   868,     0,   872,   871,
     873,   991,   997,   987,  1021,  1025,  1036,  1039,  1040,  1758,
    1032,  1841,  1037,  1088,  1088,     0,  1073,  1071,  1072,  1077,
    1238,     0,  1232,  1772,  1389,  1107,  1116,     0,  1140,     0,
       0,  1154,     0,  1403,   704,  1398,  1175,   704,   704,  1188,
    1260,  1250,  1254,  1255,  1256,  1257,  1248,  1269,  1272,  1270,
     704,  1279,  1396,  1779,  1389,  1389,   698,  1305,  1634,  1319,
    1768,  1325,  1768,  1394,   704,   704,  1365,  1375,  1406,  1407,
    1374,  1371,  1370,  1789,   481,   475,   523,  1868,  1869,   526,
     359,   541,   522,   649,   647,   650,   648,   652,   653,     0,
     629,   655,   656,     0,   707,   799,   804,  1779,   806,   807,
     808,   831,  1779,   809,   810,   811,   812,   813,     0,   814,
     815,   817,   818,   819,     0,   820,   805,  1738,   821,   830,
     824,   801,   802,   823,   763,  1382,   838,  1392,   704,   858,
     883,     0,   875,  1878,  1879,  1416,   939,   966,     0,   965,
       0,   869,  1041,  1759,     0,     0,  1069,  1080,  1088,  1775,
    1775,  1089,     0,     0,  1241,  1237,  1231,  1101,  1115,     0,
    1148,  1779,  1411,     0,     0,  1149,     0,  1153,  1404,  1182,
    1189,  1395,   704,  1393,     0,  1293,  1292,  1331,   697,     0,
    1318,     0,  1768,  1322,     0,  1314,  1408,  1409,  1405,  1790,
    1791,  1369,     0,  1779,  1779,     0,   528,   529,   530,   531,
     532,   533,     0,   543,   632,   633,     0,     0,     0,   822,
    1779,  1415,  1415,  1739,     0,   803,   885,   877,  1389,  1389,
       0,  1051,  1087,  1776,     0,     0,  1779,  1239,     0,     0,
    1229,  1233,     0,     0,  1144,  1157,  1401,  1402,  1156,  1152,
    1150,  1151,  1397,  1286,  1339,   699,  1324,     0,  1328,  1888,
    1887,  1779,     0,     0,  1890,     0,  1779,  1779,   525,  1826,
       0,   826,   825,     0,   828,   827,   829,  1555,  1556,   968,
     967,  1042,  1091,  1090,     0,  1242,  1779,  1419,  1155,  1400,
    1362,  1361,  1340,  1332,  1333,  1738,  1334,  1335,  1336,  1337,
    1360,     0,     0,  1326,     0,   538,   534,  1889,     0,     0,
    1773,  1801,  1740,     0,     0,     0,  1779,  1804,   542,  1779,
    1779,     0,   548,   550,   559,   551,   553,   556,   544,   545,
     546,   555,   557,   560,   547,     0,   552,     0,   554,   558,
     549,  1801,  1740,   688,   816,  1240,     0,  1141,     0,  1831,
       0,  1806,   535,   537,   536,  1774,   598,  1802,  1803,  1781,
     584,  1779,   463,  1419,     0,     0,     0,     0,     0,   592,
       0,   582,   588,   591,     0,   585,   593,   596,  1781,   587,
    1243,     0,  1832,     0,  1358,  1357,  1356,     0,   583,     0,
    1839,   580,  1652,   576,  1527,  1892,     0,     0,  1894,  1896,
       0,  1900,  1898,   561,   565,   569,   569,   563,   567,   562,
     568,   599,     0,   590,   589,   595,   594,   586,  1359,  1861,
    1860,  1814,  1352,  1346,  1347,  1349,   574,   467,   597,  1806,
     575,  1528,  1891,  1895,  1893,  1899,  1897,   572,   564,   572,
     566,     0,  1815,  1806,  1355,  1350,  1353,     0,  1348,   459,
       0,     0,   571,   570,     0,     0,  1354,  1351,     0,   458,
     579,   577,   578,   573,   581,  1345,  1342,  1344,  1343,  1338,
    1341,   460
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
    1687,  1023,   771,   569,   570,   706,   844,   571,   572,   839,
    1016,  1017,  1018,  1019,   573,   574,   575,   576,   608,   460,
     546,   461,   462,   497,   498,   553,   499,   531,   532,   592,
     766,   825,   826,   827,   828,   829,   500,   686,   591,   664,
     665,   666,   803,   667,   668,   669,   670,   671,   672,   673,
    2574,  2709,   674,   793,   962,  1165,   791,  1400,  1403,  1404,
    1669,  1666,  2173,  2174,   675,   676,   677,   678,   679,  1006,
     799,   800,  1199,   680,   681,   496,   586,   524,   615,   550,
     717,   784,   848,  1207,  1440,  1694,  1695,  1979,  2186,  1696,
    2182,  2336,  2456,  2457,  2458,  2459,  2460,  2461,  1976,  2185,
    2463,  2519,  2578,  2579,  2653,  2688,  2702,  2580,  2581,  2680,
    2711,  2582,  2583,  2584,  2585,  2586,  2587,  2621,  2622,  2625,
    2626,  2588,  2589,  2590,   590,   785,   851,   852,   853,  1209,
    1441,  1730,  2347,  2348,  2349,  2353,  1731,  1732,   720,  1448,
    2002,   721,   856,  1032,  1031,  1212,  1213,  1214,  1445,  1738,
    1034,  1740,  2199,  1156,  1386,  1387,  2316,  2438,  1388,  1389,
    1945,  1801,  1802,  2047,  1390,   788,   909,   910,  1106,  1220,
    1221,  1766,  1452,  1508,  1746,  1747,  1743,  2004,  2203,  2381,
    2382,  2383,  1450,   911,  1107,  1227,  1464,  1462,   912,  1108,
    1234,  1783,   913,  1109,  1238,  1239,  1785,   914,  1110,  1247,
    1248,  1518,  1837,  2067,  2068,  2069,  2038,  1125,  2229,  2223,
    2389,  1473,   915,  1111,  1250,   916,  1112,  1253,  1480,   917,
    1113,  1256,  1485,   918,   919,   920,  1114,  1265,  1494,  1497,
     921,  1115,  1268,  1269,  1502,  1270,  1506,  1829,  2062,  2250,
    1812,  1826,  1827,  1500,   922,  1116,  1275,  1514,   923,  1117,
    1278,   924,  1118,  1281,  1282,  1283,  1523,  1524,  1525,  1847,
    1526,  1842,  1843,  2073,  1520,   925,  1119,  1292,  1126,   926,
    1120,  1293,   927,  1121,  1296,   928,  1122,  1299,  1854,   929,
     930,  1127,  1858,  2080,   931,  1128,  1304,  1567,  1867,  2083,
    2267,  2268,  2269,  2270,   932,  1129,  1306,   933,  1130,  1308,
    1309,  1573,  1574,  1879,  1575,  1576,  2094,  2095,  1876,  1877,
    1878,  2088,  2276,  2411,   934,  1131,   935,  1132,  1318,   936,
    1133,  1320,  1583,   937,  1135,  1326,  1327,  1587,  2109,   938,
    1136,  1330,  1591,  2112,  1592,  1331,  1332,  1333,  1893,  1895,
    1896,   939,  1137,  1340,  1908,  2291,  2422,  2494,  1599,   940,
     941,  1138,  1342,   942,   943,  1139,  1345,  1606,   944,  1140,
    1347,  1909,  1609,   945,   946,  1141,  1350,  1615,  1912,  2126,
    2127,  1613,   947,  1142,  1355,   159,  1627,  1356,  1357,  1931,
    1932,  1358,  1359,  1360,  1361,  1362,  1363,   948,  1143,  1313,
    2280,  1577,  2416,  1881,  2097,  2414,  2490,   949,  1144,  1371,
    1934,  1635,  2142,  2143,  2144,  1631,   950,  1373,  1637,  2307,
    1150,   951,  1151,  1375,  1376,  1377,  2154,  1641,   952,  1152,
    1380,  1646,   953,  1154,   954,  1155,  1382,   955,  1157,  1391,
     956,  1158,  1393,  1655,   957,  1159,  1395,  1659,  2162,  2163,
    1950,  2165,  2321,  2443,  2323,  1657,  2439,  2504,  2543,  2544,
    2545,  2719,  2546,  2673,  2674,  2697,  2547,  2636,  2548,  2549,
    2550,   958,  1160,  1397,  1604,  1951,  1901,  2326,  1661,  2011,
    2012,  2209,  1503,  1504,  1806,  2027,  2028,  2215,  2311,  2312,
    2433,  2118,  2495,  2119,  2295,  2327,  2328,  2329,  1799,  1800,
    2046,  2244,  1302,  1303,  1285,  1286,  1553,  1554,  1555,  1556,
    1557,  1558,  1559,   988,  1186,  1407,   990,   991,   992,   993,
    1228,  1257,  1488,  1343,  1351,   395,   396,  1026,  1364,  1365,
    1564,  1334,  1241,  1242,   541,   481,   301,   694,   695,   482,
      98,   153,  1294,  1259,  1229,  1465,  2643,  1414,   995,  1771,
    2022,  2096,  2218,  1251,  1335,  2189,  2526,  2245,  1903,  2190,
    1314,  1368,  1231,   997,  1260,  1261,   742,   795,   796,  2191,
     271,  2623,   179,  1232,   768,   769,  1233,  1000,  1001,  1002,
    1194,  1167,  1422,  1418,  1411,   501,  2164,   537,  1468,  1781,
    2033,  1602,  2146,   282,  1491,  1795,  2239,   805,  1105,  2171,
    2474,   606,   339,   687,  1454,   423,  1215,   202,   115,   393,
    2404,   337,  1980,   352,  1024,   778,  2102,  2606,  2484,  2230,
      96,   214,   414,   747,  2451,  1975,   774,   402,  1989,  2609,
     809,  1402,   218,   488,  2693,   168,   390,   738,   102,   726,
     683,   842,  2633,  2152,   350,  1566,   965,  1300,   407,   736,
    1200,  1339,   391,  1748,  1768,  1489,  2671,  2224,   184,   698,
    2339,   715,   347,   598,  1482,  2395,  2150,   538,   203,  2511,
    2517,  2656,  2657,  2658,  2659,  2660,  1698
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2292
static const yytype_int16 yypact[] =
{
   -2292,   758,   576, -2292,  -182,   354, -2292,   576, -2292, -2292,
     687, -2292, -2292,   687,   687,   -39,   -39, -2292,   753, -2292,
     829,   656,   875, -2292, -2292,  1010,  1010,   633,   700, -2292,
   -2292,   561,   687,   -39, -2292, -2292,   859,   726, -2292, -2292,
     784,  1712,   -39, -2292, -2292, -2292,   656,   790, -2292, -2292,
     -37, -2292,   752,   752,   850,   896,  1087,  1087,  1087,   954,
     752,   953,   938,   970,  1087,   971,   975,  1375, -2292, -2292,
   -2292, -2292, -2292, -2292, -2292,  1067, -2292, -2292, -2292, -2292,
    1227, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292,
    1289,  1018,   561, -2292, -2292,  1050,    87, -2292, -2292,  1087,
    1087, -2292,  1087,   962,  1446,   962,  1063,  1087,  1087, -2292,
   -2292,   962, -2292, -2292, -2292,  1020,   997,  1070, -2292, -2292,
    1027, -2292,  1096, -2292, -2292, -2292, -2292,   492, -2292, -2292,
   -2292,  1216, -2292,  1087,  1123,   962,  1296,     4, -2292, -2292,
   -2292, -2292, -2292,  1301,  1092,   646,  1365, -2292,  1078, -2292,
    1020, -2292,    63, -2292, -2292, -2292, -2292, -2292,  1022,   480,
    1087,    94, -2292, -2292, -2292,   472, -2292, -2292, -2292,  1212,
   -2292, -2292, -2292, -2292, -2292, -2292, -2292,  1123, -2292,  1136,
   -2292,   434, -2292, -2292,   962, -2292,  1205, -2292,  1213,  1206,
    1555,  1087, -2292, -2292, -2292,   836, -2292, -2292, -2292, -2292,
   -2292,   837,  1561,  1087,   123, -2292,   119, -2292, -2292,   127,
   -2292, -2292, -2292, -2292,  1368,   480, -2292,  1389,   752,   752,
   -2292,  1022,  1173,   107,   545, -2292, -2292, -2292, -2292, -2292,
   -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292,   906, -2292,
     100, -2292,  1123, -2292, -2292,  1298, -2292, -2292, -2292,  1087,
    1229,  1377, -2292, -2292, -2292, -2292,   936,  1087,  1130,  1408,
     -77, -2292,  1615,   560,  1189, -2292, -2292,  1192,  1536, -2292,
    1368, -2292,   752, -2292, -2292, -2292, -2292,  1022, -2292,  1194,
    1335, -2292,   752, -2292,   810, -2292,    85, -2292, -2292, -2292,
   -2292, -2292,   906, -2292,  1394,  1377, -2292, -2292, -2292,   628,
   -2292, -2292, -2292,  1396, -2292, -2292, -2292, -2292, -2292,  1382,
   -2292, -2292, -2292, -2292, -2292,  1200, -2292, -2292, -2292,  1634,
    1560,  1215, -2292, -2292,   906, -2292, -2292,    26, -2292, -2292,
   -2292, -2292, -2292, -2292, -2292, -2292, -2292,  1219, -2292,  1476,
    1543,  1214, -2292,  1656, -2292, -2292, -2292, -2292,  2539, -2292,
    1590, -2292,  1172,  1228,  1285, -2292,   906,  1414,  1331,   331,
    1286, -2292,  1287,  1087,  1632,   504,   157,   809, -2292,  1186,
   -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292,  1268,
   -2292,  1431, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292,
    1657,  1087, -2292,  1172, -2292,  1172, -2292, -2292,  1244,   485,
   -2292, -2292,  1087, -2292,  1460, -2292, -2292,   932, -2292, -2292,
    1074,  1087,  1087, -2292,  1087,  1087, -2292,  1634, -2292,   176,
    1087,  1414, -2292,  1297,  1195,  1172, -2292,  1371, -2292, -2292,
   -2292, -2292,  1196, -2292,  1201,    77,    56,  1087, -2292, -2292,
    1266, -2292, -2292,   -98,  1288,   962,   962, -2292,  1398,  1398,
    1409, -2292,   962,  1087, -2292, -2292, -2292,  1377, -2292,  1311,
    1456, -2292, -2292,  1269, -2292, -2292, -2292, -2292, -2292,   962,
   -2292, -2292,   -94,   -94,  1718,   -94, -2292, -2292,   -94,   -48,
   -2292, -2292, -2292, -2292, -2292,   673, -2292, -2292, -2292, -2292,
   -2292, -2292,   159, -2292,  1274,  1333,  1463,   568,  1276,  6297,
   -2292,  1220, -2292, -2292,     6, -2292, -2292, -2292, -2292,  1200,
   -2292, -2292, -2292, -2292, -2292,  1087,   962,  1225, -2292,  1225,
   -2292, -2292,  1280,  1339,  1369, -2292,  1284, -2292,  1290, -2292,
    1654, -2292,  1655, -2292,  1410, -2292,  1619,  1313, -2292, -2292,
     962,   962, -2292,   566, -2292, -2292,  1201, -2292,  1292,  1352,
    1358, -2292, -2292, -2292,   657,  1590,  1087,  1043,  1043,  1087,
     106,  1414,  1087,  1727, -2292,  1443, -2292, -2292, -2292, -2292,
   -2292, -2292, -2292, -2292, -2292, -2292,   752,    70, -2292,  1249,
   -2292,   962, -2292,  1444, -2292, -2292,  1201, -2292,  1300,  1360,
   -2292,  6606,   177,  1552,  1377,  1252,  1087,  1727,  1253,   -97,
     -98,  1377,  1259,  1087, -2292, -2292, -2292,    13,   752, -2292,
   -2292, -2292,    90,   759, -2292,  1201, -2292,  1314,   639,   744,
   -2292, -2292,  -168,  -161,   535,   564,   622,  1258, -2292, -2292,
   -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292,
   -2292, -2292, -2292, -2292, -2292,  1379, -2292,   662, -2292, -2292,
   -2292, -2292,   962,   962,  1532, -2292, -2292, -2292,   -24, -2292,
   -2292, -2292,  1087,   150, -2292, -2292, -2292, -2292, -2292, -2292,
   -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292,
   -2292, -2292,   969,   -92, -2292,  1262, -2292,  1015, -2292,  1321,
   -2292, -2292, -2292, -2292,  1253, -2292, -2292, -2292, -2292,  1515,
     142,  1553,  1270,  1087, -2292, -2292,  1087, -2292,  1254, -2292,
   -2292, -2292,  1091, -2292, -2292, -2292, -2292, -2292, -2292,  1651,
   -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292,
   -2292, -2292, -2292, -2292, -2292, -2292,  1275, -2292, -2292,  1731,
    1337, -2292,  1327,  1348, -2292, -2292, -2292, -2292,  7068,   880,
    1767, -2292,  1393,  1393, -2292,  1254,  1490, -2292,  1407,  1407,
   -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292,  1349, -2292,
    1377,    86, -2292, -2292, -2292,  1377, -2292, -2292,  1399, -2292,
     148,   148, -2292, -2292,  1466,  1310,    54,  2646,  3926, -2292,
    1553,  1620,  1377,  1373,  7178,  1359, -2292,   962, -2292,   880,
   -2292,  1374,  1565, -2292,  1632, -2292, -2292, -2292, -2292,  1407,
    1376, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292,
   -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292,
   -2292, -2292, -2292, -2292,  1254, -2292, -2292, -2292, -2292,    61,
    1375, -2292,   595, -2292, -2292, -2292, -2292,  1318, -2292,  6114,
   -2292, -2292,  1310,  1378, -2292, -2292,  1449,  4238, -2292, -2292,
   -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292,
   -2292, -2292, -2292, -2292, -2292, -2292, -2292,     7, -2292, -2292,
   -2292, -2292, -2292, -2292, -2292,  1427, -2292, -2292, -2292, -2292,
   -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292,   418,
   -2292, -2292,  1491, -2292, -2292, -2292, -2292, -2292, -2292, -2292,
   -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292,
   -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292,
   -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292,
   -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292,
   -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292,
    1326,  1377,  1337, -2292, -2292,  1719, -2292, -2292,  1372,  3707,
       4,     4,  1380,  1384,  1385, -2292,  1386,     4, -2292, -2292,
   -2292,  7207,  7178,  7207,  1388, -2292,  1372, -2292,    62,  1035,
     927, -2292,  1665, -2292, -2292, -2292, -2292, -2292,  1349, -2292,
    1390,  1391,  1392,  7178, -2292, -2292,   627, -2292,   880, -2292,
   -2292, -2292, -2292, -2292,   -98,   -98, -2292, -2292, -2292, -2292,
    1649, -2292, -2292,  1321,  1377, -2292, -2292,  1405, -2292,  1406,
   -2292,   124,   124,  1332,  1411, -2292, -2292, -2292, -2292, -2292,
   -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292,
   -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292,
   -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292,
   -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292,
   -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292,
   -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292,
   -2292, -2292, -2292, -2292, -2292, -2292,  -115,   990,  7178,   174,
     736,   381,  1172,   763,   378,  5470,  5590,  1582,   901,   584,
     763,   962,  1412, -2292, -2292,  5590, -2292, -2292,   763,  1318,
    1586,   962,  4874,  5590, -2292,   826,  3341,  1172,   962,  1172,
     962,    71,   275,   962,  1172, -2292, -2292, -2292, -2292, -2292,
   -2292,  5016,  5054, -2292, -2292,  1318,   134,   962,  1172,   962,
     962, -2292, -2292,  1618,  1551, -2292,  6205, -2292, -2292,  1349,
   -2292,  1361,  1362,  7178,  7178,  7178,  3707,  1366, -2292,   949,
   -2292,  3707, -2292, -2292, -2292, -2292,  7178,  6922,  7178,  7178,
    7178,  7178,  7178,  7178, -2292,  3707,  7178,  1035,  1467, -2292,
    1415, -2292, -2292, -2292,  1843,  1375, -2292,   626, -2292, -2292,
   -2292, -2292,   183, -2292,  -186,  -137,   271, -2292, -2292, -2292,
    1743,  1071,  1679,  1490,   962,  3707, -2292,  1748, -2292,  5139,
   -2292, -2292, -2292, -2292, -2292,    60,   274, -2292,   174, -2292,
    1436, -2292,     4, -2292, -2292, -2292, -2292,  1752,  1452, -2292,
     381, -2292, -2292,  1172,   604,  1490,  1753,   429, -2292,  1499,
   -2292, -2292,  1327,  1349,  1172,  1754,  1331,  1042,  1755,  5319,
   -2292,   703,   111,  1058,  1082,  1759,   182,  1400, -2292, -2292,
   -2292,  1760,    59, -2292, -2292, -2292,  4739, -2292, -2292,  1790,
       7, -2292, -2292, -2292,   763, -2292, -2292, -2292, -2292, -2292,
   -2292, -2292,  1454, -2292, -2292,   489,  1318, -2292, -2292,    58,
   -2292, -2292, -2292, -2292, -2292, -2292,  1440,  5590, -2292,  1457,
    1768,  1851, -2292, -2292, -2292, -2292,   826,  1503, -2292,  1465,
   -2292,  4064,   155,   588,  1471,  1469, -2292,  -181, -2292,  1477,
    1773,   -50, -2292,  1722, -2292,  1775,  1331,  1777,  1722,   962,
    1774,  1424, -2292,  1187, -2292, -2292, -2292, -2292, -2292, -2292,
    1658, -2292,   763, -2292,   495, -2292,   415,  1895, -2292,   131,
   -2292,  1779,   945,   511,  1880,  1782,  1905, -2292, -2292,   962,
    1784,  5348,  1318, -2292, -2292,  -154, -2292, -2292, -2292, -2292,
    3044, -2292,  1735, -2292,  1112,  1785,  1822,  1786,  1722, -2292,
   -2292, -2292,   962,  1716,   748, -2292,   280,   688, -2292, -2292,
     235,  1492,  1493,  1507,   288, -2292,  1349, -2292,  1509, -2292,
   -2292,   294,  1512,   688, -2292,   977,   927,   927, -2292, -2292,
   -2292,  1057,  1516,   300,  1517,  1087, -2292,   -98,  1825,  1514,
     600,  6812, -2292,  1087,  1562,  1659, -2292, -2292,  1861, -2292,
   -2292,  1187,  1778, -2292,   104,  2274,     3,  1527, -2292,  1349,
   -2292, -2292, -2292,  5770,  1776, -2292,  1757, -2292,  1600, -2292,
    1638,  1725, -2292, -2292, -2292,  1400, -2292,   604, -2292, -2292,
   -2292,   497,    -9,   962, -2292, -2292, -2292, -2292, -2292,  7178,
    1706, -2292,  1359, -2292,  1172, -2292, -2292, -2292,  1761, -2292,
   -2292, -2292,  5590, -2292,  1690,    17,  1688,  1629,  1505,  1823,
    1823,  1823,  1823, -2292, -2292,  5590,  5770, -2292, -2292, -2292,
   -2292,   901,    69, -2292,  1489, -2292,  1494, -2292, -2292, -2292,
   -2292,  1412, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292,
   -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292,
   -2292, -2292, -2292,  4471, -2292, -2292, -2292, -2292, -2292, -2292,
   -2292, -2292, -2292, -2292,    93, -2292,  1865,  1264,  1819, -2292,
    1187,    89, -2292, -2292,  1630, -2292, -2292,    79,  7178, -2292,
    1556,   763, -2292, -2292,  5770,  1503,  1186,  1172, -2292, -2292,
   -2292, -2292, -2292,  1832,   962,   174, -2292,   243, -2292, -2292,
   -2292, -2292,  1331,  1586, -2292, -2292, -2292,  1780, -2292, -2292,
     448,  1876, -2292, -2292,   962,  1876,  1559, -2292,  1349, -2292,
   -2292,   723,  1022, -2292, -2292,  3686, -2292,  1961,   579,   133,
   -2292, -2292, -2292,  1087, -2292,    12,  5590, -2292,   570,  5448,
   -2292, -2292,   962, -2292,  1814, -2292, -2292,  5770, -2292,  1377,
   -2292, -2292,  1187, -2292, -2292, -2292, -2292, -2292,  1880,  1783,
   -2292, -2292,   243,  1716, -2292,  1880, -2292, -2292, -2292,  1460,
   -2292,   962,  1390,  1390,  1390,  3707, -2292,   486,  1390, -2292,
    7069,  1390,  1390, -2292,   880, -2292,  1551, -2292, -2292,  1087,
    1087,  1727,  1116, -2292, -2292, -2292, -2292,  1808,  1842, -2292,
    1087, -2292,   382, -2292, -2292, -2292,  1315,  1087,  1452, -2292,
   -2292, -2292,  1720, -2292,  1377, -2292,  1965, -2292, -2292, -2292,
     962, -2292, -2292,   962, -2292, -2292, -2292, -2292, -2292, -2292,
   -2292, -2292, -2292,  1818,  1720,   689,  1087, -2292,  1518,  1572,
   -2292, -2292, -2292,  1756,  1720,  1720,   334,  1781,  1720, -2292,
    1860, -2292, -2292, -2292,  1519,  1521, -2292,  1187,  1860,  1789,
    1604,  1732, -2292, -2292,  1758, -2292, -2292, -2292, -2292, -2292,
   -2292,   389, -2292,   962,  1490,   802, -2292,   -34,   -21,   763,
    1585,  1600,   763, -2292,  1588,   174, -2292,     7, -2292, -2292,
    1660,  1674, -2292,   805,  1087, -2292, -2292, -2292, -2292, -2292,
    1742, -2292, -2292, -2292,  2009, -2292, -2292, -2292, -2292, -2292,
   -2292, -2292,  1823,  1087, -2292,   -23, -2292, -2292,  1347,  1087,
   -2292, -2292, -2292, -2292,     1, -2292,  2184, -2292,  1308,  1756,
   -2292, -2292, -2292, -2292,  1836,   802,  1838,    64, -2292, -2292,
   -2292, -2292,  2026, -2292,  1601,   108, -2292, -2292,    69, -2292,
   -2292, -2292, -2292,  1551, -2292, -2292, -2292,  1915,  1906,  1412,
   -2292, -2292, -2292, -2292, -2292, -2292, -2292,  1681,  1412, -2292,
    1605, -2292,  2003, -2292, -2292, -2292,  1363, -2292,  1187,  1395,
   -2292,    84,   748,    15,   763,   763,   802,  1850,  1172,   176,
     586,  1914, -2292, -2292, -2292,  2049, -2292,  1862, -2292, -2292,
   -2292, -2292,  1780, -2292, -2292, -2292, -2292,   962,  1930,  1761,
     893, -2292,  1558, -2292,  1563,  1187,   928, -2292,   389, -2292,
   -2292, -2292,  5590,  1022,  1022,  1022,  1022,  1022,  1022,  1022,
    1022,   579, -2292,   -15,  1761,   512, -2292,  1639,  1639, -2292,
   -2292,  -125,   962,   802,  1858,  1611, -2292,  1617,  2058,   962,
     439,   448,  2062, -2292,  1564,  1087, -2292, -2292, -2292, -2292,
   -2292, -2292, -2292, -2292, -2292,  1047, -2292, -2292, -2292,   962,
     381, -2292, -2292,  1087,  1727,  1816,  1310, -2292, -2292, -2292,
     962,   143, -2292, -2292, -2292, -2292,   143, -2292, -2292,  1087,
    1373,  1087, -2292, -2292, -2292,  1087, -2292, -2292, -2292,   708,
   -2292, -2292, -2292,  1087,  1569,   143,   143, -2292, -2292,   143,
   -2292, -2292,  1791, -2292, -2292,  1860, -2292, -2292, -2292, -2292,
   -2292, -2292, -2292, -2292,  1499,     3, -2292, -2292,  1793,   173,
    1871,   802,   864, -2292, -2292, -2292, -2292, -2292,     0,   109,
   -2292, -2292, -2292,   369, -2292, -2292, -2292, -2292, -2292, -2292,
     143, -2292, -2292, -2292, -2292,   143,   390,   390, -2292, -2292,
   -2292, -2292, -2292,  1571,   763, -2292,   763,  4606, -2292,   513,
      34,    69, -2292, -2292, -2292,  2026,   962, -2292, -2292, -2292,
   -2292,  1577,  1272,   202,  1579,   864,  1187, -2292, -2292,  2031,
   -2292, -2292, -2292, -2292,  1395, -2292,  1892, -2292,  1087,  1460,
    1769, -2292, -2292,   763, -2292,   763,   586, -2292, -2292, -2292,
     909, -2292, -2292,   962,  5590,  1273, -2292, -2292, -2292,  1795,
   -2292, -2292,  1826, -2292, -2292, -2292, -2292,  1563, -2292, -2292,
   -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292,
       8, -2292,   962, -2292, -2292, -2292,   546, -2292, -2292, -2292,
    7178, -2292,  5590,  5590,  1625,  1763,  1499, -2292,   763, -2292,
     864, -2292,  1787, -2292,  1187, -2292,  1982,  1661, -2292,    55,
   -2292,   461, -2292,  1564, -2292,   962, -2292, -2292, -2292, -2292,
   -2292, -2292, -2292,  1324,   117, -2292,   962, -2292, -2292, -2292,
   -2292, -2292, -2292,   509, -2292,   381,   509, -2292, -2292, -2292,
     135,  2050,  2693,  1860, -2292, -2292, -2292, -2292, -2292, -2292,
   -2292,  1693,  1896, -2292, -2292, -2292,  1898, -2292, -2292, -2292,
   -2292, -2292, -2292,  1811, -2292,  1490, -2292, -2292, -2292, -2292,
     962, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292,
   -2292,  3609, -2292, -2292, -2292,  1354, -2292, -2292, -2292,  1629,
   -2292,   802,  1746,   802,  1747, -2292, -2292,  5590, -2292, -2292,
   -2292, -2292, -2292, -2292, -2292, -2292, -2292,  1272, -2292,  2007,
   -2292,  1412, -2292, -2292, -2292,   864,  1150, -2292, -2292,  1150,
     -80,   962, -2292, -2292,   802, -2292, -2292,  1730, -2292,  2063,
    1852,  1875,    28, -2292, -2292, -2292, -2292, -2292, -2292, -2292,
   -2292, -2292, -2292, -2292, -2292, -2292,   688, -2292, -2292, -2292,
   -2292, -2292,  1817,  1087,  1693,   802,  1622, -2292,  2058, -2292,
    1553,  2021,  1553,  1625, -2292, -2292, -2292, -2292,  1827, -2292,
   -2292, -2292, -2292,  1357, -2292,   962,   979, -2292, -2292,  1816,
   -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292,   143,
   -2292, -2292, -2292,   143,   217, -2292, -2292,  1087, -2292, -2292,
   -2292, -2292,  1087, -2292, -2292, -2292, -2292, -2292,    31, -2292,
   -2292,  2064, -2292, -2292,    19, -2292, -2292,  2111, -2292, -2292,
   -2292,  2693, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292,
   -2292,   962, -2292, -2292, -2292, -2292,  1629, -2292,   763, -2292,
     763, -2292, -2292, -2292,  2073,  2012,  1150,  1150, -2292,  1666,
    1666, -2292,  1788,  1172,   654, -2292,   962, -2292, -2292,  5590,
   -2292,  1087,   634,  1864,  1866, -2292,  1868, -2292, -2292, -2292,
   -2292, -2292, -2292, -2292,   962, -2292, -2292, -2292, -2292,  1672,
   -2292,   962,  1553, -2292,   962, -2292, -2292, -2292, -2292, -2292,
   -2292, -2292,   924,  1087,  1087,  1114, -2292, -2292, -2292, -2292,
   -2292, -2292,  1545, -2292, -2292, -2292,  2022,   143,   143, -2292,
    1087,   390,   390, -2292,   414, -2292, -2292, -2292,  1693,  1693,
    5590, -2292,  1150, -2292,  5590,  5590,  1087,  1172,  1172,  1797,
   -2292, -2292,  1650,   962, -2292, -2292,  1795, -2292, -2292, -2292,
   -2292, -2292, -2292, -2292,  1017, -2292, -2292,   962, -2292, -2292,
   -2292,  1087,  1816,  1816, -2292,  1925,  1087,  1087, -2292,  2222,
    1684, -2292, -2292,   381, -2292, -2292, -2292, -2292, -2292, -2292,
   -2292, -2292, -2292, -2292,   174,  1172,  1087, -2292, -2292, -2292,
   -2292, -2292, -2292, -2292, -2292,  1162, -2292, -2292, -2292, -2292,
   -2292,  1798,  2030, -2292,  1816, -2292, -2292, -2292,  1816,  1816,
    1918,  1159,  1727,  1931,  1377,  1641,  1087,  1490, -2292,  1087,
    1087,   962, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292,
   -2292, -2292, -2292, -2292, -2292,   745, -2292,   -28, -2292, -2292,
   -2292,  1159,  1727, -2292, -2292, -2292,   174, -2292,  1792,  1723,
      96,  1551, -2292, -2292, -2292, -2292, -2292, -2292, -2292,   150,
   -2292,  1087,  1337, -2292,  7344,  7344,  1256,  2025,  1950, -2292,
    1377,   745, -2292, -2292,  1377,   -28, -2292, -2292,   150, -2292,
   -2292,   962, -2292,  1138, -2292, -2292, -2292,    95, -2292,   745,
    1373, -2292,  1499,  3111, -2292, -2292,  1060,  1118, -2292, -2292,
    1153, -2292, -2292, -2292, -2292,    -2,    -2, -2292, -2292, -2292,
   -2292, -2292,  7344, -2292, -2292, -2292, -2292, -2292, -2292, -2292,
   -2292,  1815,   976,    95, -2292, -2292, -2292,  1719, -2292,  1551,
   -2292, -2292, -2292, -2292, -2292, -2292, -2292,  1835, -2292,  1835,
   -2292,  2103, -2292,  1551, -2292, -2292,  1847,   962, -2292,  1729,
       2,  1834, -2292, -2292,  7344,    -6, -2292, -2292,  1377, -2292,
   -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292,
    1172, -2292
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2292, -2292, -2292, -2292, -2292,  2151, -2292, -2292, -2292,   232,
   -2292,  2115, -2292,  2071, -2292, -2292,  1364, -2292, -2292, -2292,
    1191, -2292, -2292,  1312,  2141, -2292, -2292,  2041, -2292, -2292,
   -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292,  1968,
     788, -2292, -2292, -2292, -2292, -2292,  2023, -2292, -2292, -2292,
   -2292,  1967, -2292, -2292, -2292, -2292, -2292, -2292,  2100, -2292,
   -2292, -2292, -2292,  1959, -2292, -2292, -2292, -2292,  1944, -2292,
   -2292,   -55, -2292, -2292, -2292, -2292, -2292,  2034, -2292, -2292,
   -2292, -2292,  2008, -2292, -2292, -2292, -2292, -2292, -2292, -2292,
   -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292,
   -2292, -2292, -2292, -2292, -2292,   735, -2292, -2292, -2292, -2292,
   -2292, -2292, -2292, -2292, -2292, -2292,  1667, -2292,  1796, -2292,
   -2292, -2292,  1721, -2292, -2292, -2292, -2292,   298, -2292, -2292,
    1902, -2292, -2292, -2292, -2292, -2292,  1764, -2292, -2292, -2292,
   -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292,
   -2292, -2292,  1169, -2292, -2292, -2292,  1413, -2292, -2292, -2292,
   -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292,
   -2292,   481, -2292, -2292,  1696, -2292,  -760,  -833, -2292, -2292,
   -2292,  -519, -2292, -2292, -2292, -2292,  -552, -2292, -2292, -2292,
   -2292, -2292, -2292, -2292, -1412,   754,  1448,   508,   589, -1411,
   -2292, -2292, -2292,  -952, -2292,  -480, -2292, -2292,   799, -2292,
     318,   538, -2292,    29, -1405, -2292, -1404, -2292, -1402, -2292,
   -2292,  1404, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292,
   -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292,
   -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292,
   -2292, -2292, -2292, -2292, -2292,  -451,  -482, -2292, -2292, -2292,
   -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -1343, -2292,
    -417, -2292, -2292, -2292, -2292, -2292, -2292, -2292,  1381, -2292,
   -2292, -2292,    14,    18, -2292, -2292, -2292, -2292, -2292, -2292,
   -2292, -2292, -2292, -2292, -2292,  1179,  -944, -2292,   144, -2292,
   -2292, -2292, -2292, -1803, -2292, -2292, -2292, -2292, -2292, -2292,
   -2292,  -923, -2292, -2292,  -703, -2292,  1428, -2292, -2292, -2292,
   -2292, -2292, -2292,   994,   470,   474, -2292,   392, -2292, -2292,
    -158,  -144, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292,
   -2292,   445, -2292, -2292, -2292,   993, -2292, -2292, -2292, -2292,
   -2292,   760, -2292, -2292,   169, -2292, -2292, -1250, -2292, -2292,
   -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292,   762, -2292,
   -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292,
   -2292, -2292, -2292, -2292, -2292,   738, -2292, -2292, -2292, -2292,
   -2292,    -1, -1766, -2292, -2292, -2292, -2292, -2292, -2292, -2292,
   -2292, -2292, -2292, -2292, -2292,   730, -2292, -2292,   729, -2292,
   -2292,   399,   191, -2292, -2292, -2292, -2292, -2292,   978, -2292,
   -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292,
   -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292,
   -2292,     5,   698, -2292, -2292, -2292, -2292, -2292, -2292, -2292,
   -2292, -2292, -2292, -2292,   695, -2292, -2292,   179, -2292,   394,
   -2292, -2292, -1959, -2292, -2292, -2292, -2292, -2292, -2292, -2292,
   -2292, -2292, -2292, -2292, -2292, -2292,   948,   686,   171, -2292,
   -2292, -2292, -2292, -2292, -2292, -2291,   944, -2292, -2292, -2292,
     165, -2292, -2292, -2292,   377, -2292, -2292, -2292, -2292, -2292,
   -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292,
   -2292,   329, -2292, -2292, -2292, -2292, -2292, -2292,   666,   164,
   -2292, -2292, -2292, -2292, -2292,  -123, -2292, -2292, -2292, -2292,
     351, -2292, -2292, -2292,   926, -2292,   922, -2292, -2292,  1151,
   -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292,
   -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292,   140,
   -2292, -2292, -2292, -2292, -2292,   920,   350, -2292, -2292, -2292,
   -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292,
   -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292,   -17,
   -2292,   352, -2292, -2292, -2292, -2292, -2292, -2292, -2292, -2292,
   -2292, -2292, -2292, -2292,  -370, -2292, -2292, -2292, -2292, -2292,
   -2292, -2292, -2292, -2292,  -326, -2292,   642, -2292, -2292, -1642,
   -2292, -2292,  -684, -2292, -2292, -1705, -2292, -2292,   -18, -2292,
   -2292, -2292, -2292,  -116, -2198, -2292, -2292,   -19, -1841, -2292,
   -2292, -1950, -1552, -1061, -1460, -2292, -2292,   757, -1259,   166,
     168,   175,   178,    16,  -169,  -694,   287,   249, -2292,   635,
    -721, -1397, -1082,  -243,   966, -1559,  -392,  -404, -2292, -1316,
   -2292, -1037, -1477,   840,  -529,   -90,  2018, -2292,  1626,  -558,
      36,  2167, -1067, -1041,  -868, -1069, -2292, -1090, -1322, -2292,
     405, -1284, -1220, -1101, -1177, -1848, -2292, -2292, -2292, -1119,
   -2292,  -873,  1068,  -632, -2292, -2292,  -103, -1195,  -773,  -111,
    2055, -1898,  2084,  -675,  1513,   113,  -377, -2292, -2292, -2292,
    -118,  1343, -2292, -2292,   314, -2292, -2292, -2292, -2292, -2292,
   -2292, -2292, -2292, -2292, -1966, -2292, -2292,  1578, -2292, -2292,
    -215,  -593,  1916, -2292, -1185, -2292, -1324,  -252,  -630,   857,
   -2292,  1828, -2292, -1448, -2292,  -783, -2292, -2292,   -78, -2292,
      -5,  -654,  -360, -2292, -2292, -2292, -2292,  -216,  -220,  -255,
   -1206, -1550,  2123,  1890, -2292, -2292,  -334, -2292, -2292,   973,
   -2292, -2292, -2292,   403, -2292,   260, -1935, -1466, -2292, -2292,
   -2292,  -155,   465, -1401, -1470, -2292, -2292, -2292,  -755, -2292,
   -2292,  1635, -2292,  1800, -2292, -2292, -2292,   771, -2292, -1706,
    -267, -2292, -2292, -2292, -2292, -2292, -2292
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1851
static const yytype_int16 yytable[] =
{
     139,   427,   139,   428,   692,   160,   415,   960,   139,   749,
    1163,   581,   767,   138,  1273,   141,  1028,  1456,   787,  1437,
     741,   147,  1004,  1367,   404,   849,   245,  1882,  1890,  1724,
    1726,  1258,   139,   427,  1791,   215,  1727,  1728,  1230,  1729,
    1734,  1894,   699,   464,   437,   180,  1272,  1276,  1623,  1483,
    1639,   103,   104,   105,   268,  2194,  1301,  1284,  2211,   111,
    2058,  1305,  1844,  1319,  1321,  1850,  1775,  1492,  2120,  1616,
     776,  1475,  1240,   994,   801,  1366,  1521,  2183,   463,  1295,
    1349,   246,  1378,  1230,   345,   211,   321,  1295,  2042,    99,
    1839,  1421,   849,  2147,   134,   135,   107,   136,  1871,   708,
     989,  1295,   143,   144,  2672,  1432, -1806,  2248,   279,  1014,
     854,   161,   411,  1211,  1807,  2225,  2016,   291,  1466,  1835,
     264,  1579,  2258,  1636,   801,  2056,   832,   832,   169,  1839,
    2065,   535,   259,  1183,  -664,  -662,  1969,  2279,  2192,  1767,
     297,  1451,  2361,  2471,   836,  1531,  2412,  1872,   360,  1476,
     752,  1570, -1750,   -96,   215,   219,  1769,  2204,  2205,   480,
     127,  2206, -1564,   505, -1565,  2715,  2221,  1741,  1531,  1704,
   -1570,  1705,   211,  1211,  1629,  2687, -1746,   832, -1746,  2710,
     351,  2104,   465, -1591,   327,   448,   251,  1886,   703,  1810,
    2314,   220,   517,   392,  1219, -1806,    94,   221,   258,  2200,
     114,  1240,  2242,   684,   535,   453, -1850,  2243,  1853,   512,
    1021,  1123,   696,  2324,   419,  1171,  1172,  1560,    23,   745,
    2716,  1446,  1177,   182,  2497,  1443,  2634,   704,  2717,  2181,
    2051,  1515,  1211,   850,  2100, -1850,  1600,   325,  2157,   724,
     833,  1649,   610,  2595,   295,  2423,   724,  1271,  1580, -1850,
    1943,  1899,   299,  1563,   274,   275,   418, -1850,  1315,   128,
     994,   994,   994,    43,  1563,  2424, -1570,  1873,  1442,   344,
    1315,    15,  1442,  -664,  -662,   611,  2140,  -664,  -662,  2141,
    1900,  1255,   994,   794,  1381,  1601,  1870,  1798,  1179,  1354,
    1011,  2425,  1444,   529,   -96,  1621,   212,  1589,  2539,  1650,
     850,   400,  2624,  2076,    24,  2630,  1183,  1378,   311,  1197,
     725,   183,  2718, -1837,  2406,  2407,  2426,   727,   314,   204,
    1211,  1295,   697,  2333,    43,  1563,  2217,   518,  2330,  2106,
    2101,  1874, -1532,  1201,  1948,  -664,  -662,  1168,  2226,    94,
     139,  1954,   139,   139,  1770,   603,   493,  2466,  2325,   139,
    1237,  1183,  1237,  1808, -1764,   485,   486,  1744,   410,  1183,
     283,   746,   491,  1447, -1746,  1183,   139,  2052,  1947,   507,
     507,  1183,   507,  2210,   685,   507,   514, -1568,   753,   485,
     243,  1258,  2031,   212,  1124,  1844,   424,   994,  1844,  1401,
   -1784,   137,  2259,  2081,  1776,   413,  2354,   436,   280,  1704,
     154,  1705,  2084,  2231,   466,   843,   443,   444,   137,   445,
     446,  1516,   137,   139,  1235,   452,   -35,   999,  2227,  2413,
     281,  1255, -1750, -1850,  1571,  2074,   542,   519,   834,  1353,
     794,  1237,   469,  1804,  1258,  1255,  1745,   139,   139,  1546,
     837,  2462,   129, -1746, -1532,   994,  1834,  1836,   492,  2482,
     542,   582,   994,   994,   994,  1311,  1202,  1203,   137,   467,
    1284,  1184,  1546,  2222,   449,   994,   994,   994,   994,   994,
     994,   994,   994,  2015,   284,   994,  -664,  -662,   139,  1410,
    1410,  1410, -1750,   689,  1560,  2057,   368,  1471,   757,  1493,
     700,   582,  1423,  1425,   260,  1255,  1572,   139,  1467,  1431,
     394,  2464,  1258,  2472,   137,  2465,  2386,   709,   137,   137,
     540,   536,  1185,  2070,  1885,  1887,  2379,   243,  2635,   705,
    1188,  2524,  2525,  1809,  1840,  1189,   450,  1855,  1015,   577,
    2427,  1987,   760,   346,  2260,  1841,   740,  2039,   322,  1624,
    1295, -1750,   761, -1819,   292,   130,  2397,  1354,  2399,   593,
     743,   595,  1010,   855,   600,   602,  1921,   604,  1898,  1875,
    -669,  2384,  1522,  1840, -1750,  1258,   243,  1936,  2025,   149,
    1940,  2228,   265,  2298,  1841,  1438,  2528,   137,  1944,  2417,
    1563,  2498,  2029,   394,   536,  1960,   682,  1384,  1384,  1486,
     775,   691,  1170,  1458,  2089,   794,  1493,  1003,   702,   137,
      97,   137,   710,  1849,   999,   999,   999, -1779,  1590,  2435,
    2436,  1844,   609, -1649,  2555,  2556,  1507,  1923,   412,  2521,
    2522,   261,   762,  2340, -1750,  1924,   999,  1439,   757, -1750,
    2058,  2128,   243,   255,  1184,  1982,  -669,  1003,  1249,  -659,
    1385,  1385,   757,  1857,   707,  1565,  2021,   154,  -667,   137,
   -1837,  2232,  2233,  2234,   137,  2188,  2602,   748,   430,   835,
    2603,  2604,  1689, -1784,   840, -1850,  1745,  2251,  1891,  2253,
    1384,  2181,   760, -1850,  2145,  1145,  2678,   845,   845,  1184,
     137,   963,   761, -1750,  1020, -1631,   760,  1184,  -512,  2627,
    1690,  1691,   763,  1184,  1005,  1188,   761,  1258,   780,  1184,
    1189,   781,   757,   187,    42,  2677, -1752,   222,  2284,  1223,
     188, -1850,   755,   216,  2235,  1123,  -512,  -512,   154,  1796,
    1254,  1996,  1266,  1385,  -667,  1307, -1532,  2627,  1961,  1255,
    1670,   999,  1937,  1354, -1532, -1532, -1850,   764, -1629, -1532,
    2197,  2035,   413,  2070, -1626,  1341,   760,  1346,  2037,  2516,
    1682,  1383,  1372,  1312,  1533,  1534,   761,  2148,     3,  1338,
    1789,  2315,   762, -1850,  2117,  1146,  1394,  1354,   994,  1255,
   -1850, -1750,  1983,  2529,  2530,  1667,   762,     4,  -659,   405,
    2343,   137,  -659,  2331,  1287,  1790,   966,   765,   739,   999,
     305,  1925,  1022,  1535,  1536,  1793,   999,   999,   999,  1417,
    1997, -1850,  2274,   967,  1417,  2405,  1147,    16,  1255,   999,
     999,   999,   999,   999,   999,   999,   999,  2103,  1417,   999,
     283,   782,  2256,  1926,  1772,  1830,  1831,  1832,  1833,   583,
     406,  -512,   763,    94,  1264,  1148,   762,  2236,  2237,  2344,
    -659,    18,  2238,  1295,  1563,  1927,   763,   129,  1460, -1850,
    1162,  1792, -1766,  2130,  2487,  2332,  1796,   994,  2488,  -512,
    1938,  1477, -1779,  1625,  1668,  2273,  1798, -1850,   807,  2178,
     223,  1338,  1495,   755, -1850,  2044,    27,   764,   431,  1685,
    2319,  2300,  2048,  1487,   394,   735,   328,   137,  1124,   755,
      94,   764, -1850,   187,   187,   137,   137,  1348,  1928,  1626,
     188,   188,  1569,     5,   217,   968,   763, -1819,  1288,  1289,
    2654,   139,   139,  1206,    28,   189,   757,  1398,     5,   154,
     137,   137,  1692,  2149,  1443,  1290,  2294,   765,  1905,  2535,
    1149,   306,  1498,  2077,   284,   137,   757,  2246,  2246,   243,
    2317,   765,   724,  1622,   243,   137,   154,  1013,  -512,  1225,
     130,   764,   584,   243,  1338,   970,  1962,   971,  1929,   994,
     760,  1478,   972,   973,   974,   154,  2108,   137,   975,  2345,
     761,   724,  2489,  2188,  2346,  1226,   757,   719,  1648,  1291,
     760,  -659,  2252,   253,  2254,  2597,  1965,   190,  2123,   722,
     761,  1444,  2518,   187,   243,   137,  1223,  1322,     5,   755,
     188,   765,  2181,  1547,  2030,  1548,  1243,   976,  1244,  1968,
    1262,  2262,  1607,   729,    33,   757,   243,  1262,  1297,  2391,
     760,   525,  1610,  1258,   755,  1262,   977,   585,  1316,   724,
     761,  2509,  2619,  1337,   712,  1344,    36,  1344,  1352,  1369,
    1316,  2510,   731,   191,   253,  2289,   723,  1436,   192,  2592,
     762,  2637,  1323,  1693,  1930,  2408,  2552,  1344,   438,   760,
    1324,  2641,  1563,  2297,   329,   756,   154,   614,   117,   761,
     762,  1593,  1662,   966, -1633,  2620,  1258,   757,    52,  -512,
    1479,   978, -1848,  2308,  2308,  1224,    39,  2207,   515,  1594,
     967,   243,   394,   757,  2350,    40,   716,   416,  1972,  1481,
     733,  1451,  1797,  2213,   439,   189,   189,  2572,  2573,   243,
     762,   713,   999,   714,  2575,  2576,    48,  2577,  2591,   228,
     763,   760,  2240,  1632,   330, -1764,    53,   516,  2049,  2700,
    1198,   761,   979,   980,   300,  1243, -1746,   760, -1746,  2023,
     763,   750,  2059,  2705,  1325,  2540,  2720,   761,  1188,   762,
    1568,  2263,   193,  1189,  1262,  2265,  2121,  2452,  2409,  1245,
    2675,  1246,   316,   229,    54,   764,    55,  2453,    56,  2514,
    2473,  1916,  2286,   230,   751,   984,    57,   190,   190,    49,
     763,  2122,  1406,  1633,  2541,   764,  1634,  2410,  2401,  1505,
    2454,  1262,   968,    13,  2293,   985,  2675,  2287,    13,  2598,
     986,   999,  1262,   757,  2515,   189,   351,   987,   508,   137,
     510,   762,  1433,   511,  2026,   765,  2184,  2026,  1638,   763,
    2455,  2509,  2542,   317,   318,   764,  1906,   762,   757,   137,
      94,  2510,    58,   191,   191,   765,  1225,    51,   192,   192,
     226,  1671,   970,    93,   971,  1675,  1352,   760,  2682,   972,
     973,   974,  1677,   232,   154,   975,  2216,   761,    97,  1262,
     758,   759,  1226,  1262,   764,  1188,   830,   830,  1902,   137,
    1189,  2557,   760,  1859,   100,   765,  1860,   190,  2664,  1861,
    1862,   763,   761,  2694,  1860,  2385,  2023,  1861,  1862,   252,
     254,  2387,  2642,  2644,   976,   361,  2676,   763,  1417,   139,
    2669,  2390,   101,   999,  2670,   155,  2683,   156,   137,  1955,
    2645,  2514,  1664,   977,   765,  2695,  2478,   830,  2479,  2551,
      94,  2681,  1481,   233, -1746,    60,   764,   362,    26,  2684,
     155,  1338,   156,   191,   139,  2696,   170,   762,   192,   227,
    2691,  2685,   764,   255,  2241,    47,  2646,   831,   831,   106,
    2492,  2341,  2246,  2246,    91,  2527,  1279,  2220, -1746,   108,
    1777,  2615,   762,  2509,  2686,  1973,  1974,  1280,   978,    61,
     137,  2428,  1871,  2510,  2429,  2430,   765,    21,    22,  1190,
     171,  2180,  2714,  1919,   470,   471,   472,  2431,  1191,   298,
     172,   109,   765,  2212,  1920,   596,    46,   597,   831,  1420,
     757,  2446,  2447, -1746,  2090,  2060,  2061,   763,   810,  1188,
    2220,  2531,   594,  1777,  1189,  2532,  2533,   601,   236,   979,
     980,  1872,  2594,   110,   112,   228,   403,  1679,   113,   994,
    1684,  1889,   763,   114,   441,  1697,  1733,  1188,  1735,  1428,
    1429,  1430,  1189,   713,   760,   714,   120,   811,   812,   813,
     814,   815,   764,  2091,   761,  1910,  2306,   555,    64,  2607,
    2608,  1243,   984,   122,  1653,  2476,  1654,   757,   137,   229,
     173,   124,  1984,   556,  1985,  1426,  1427,   764,  1262,   230,
    1935,  1777,   985,   629,   630,  2220,  1187,   986,  1412,  1413,
   -1850,  2290,  1243,   231,   987,  1188,   137,  2176,   428,  1917,
    1189,    67,   765,   126,  2053,   473,  2054,  1188,  1680,  2502,
   -1850,   760,  1189,   557,  1995,   140,   142,  1188,  1262,   474,
     118,   761,  1189,   162,  2005,  2006,   149,   765,  2009, -1548,
   -1548, -1548, -1548,   163,   762,   966, -1850,  2441,  1946,  2444,
     174,  1873,  1863,  1864,  1777,  1509,  1510,  1511,  1512,   164,
    1863,  1864,   967,   181,  1957,  1958,  1959,   167,   185,   232,
    1963, -1850,   186,  1966,  1967,   204,  1865,  1866,   139, -1547,
   -1547, -1547, -1547,    68,  1865,  1866, -1082,  2337,  2647,  2338,
     242,  1956,  2648,  2649,   193,   175,   816,   817,   818,   819,
     820,   821,   822,   642,   643,   755,   728,   730,   732,   734,
    2220,   762,   475,  1990,   763,  1874,   247,  2393,   757,  2394,
    2449,  1751,  2450,  1752,   476,   248,  1178,   249,  1180,   250,
   -1082,   257,   273,  2650,  1998,   269,   278,   294,  1933,   233,
   -1082,   296,   234,   235,   154,   176,   300,  2092,   302,  2651,
    2652,   303,   307,    94,   309,   308,  2335,   312,   313,   764,
     558,   326,   760,   333,   968,   334,   336,   338,   349,  2507,
    2640,   559,   761,   340,  1813,   351,   353,  1814,   342,   966,
     354,   763,  1262,   356,  1815,  1816,  1262,   392,   394,  1262,
     398,   397,  1243,   403,  1970,  1971,   967,   401,   408,   187,
     409,   243,   420,   137,   421,  1981,   422,   429,   413,   765,
     454,   455,  1986,   457,   459,   477,   494,  -347,   483,  1474,
   -1082,   972,   973,   974,   428,   487,   764,   975,   495,   523,
     490,  1817,   502,    52,   236,   509,   533,   521,   522,   527,
     543,  1999,  1262,   547,   548,  2110,   549,   551,   823,  2282,
    -360,   554,   762,   552,   578,   587,   579,   588,   589,   605,
     607,   824,   612,   616,   613,   617,   976,   688,   690,   693,
     701,   735,   560,   561,   737,   744,   765,   718,   754,   770,
     773,    53,   777,   999,   786, -1850,   779,   562,   243,   563,
   -1082,  1262,  1262,  1262,   790,   792,  2155,   789,   968,  2043,
    1818,   794,   797,   802,   804,  2155,  1910,   808,   834,   757,
    2131,  2132,  2133,  2134,  2135,  2136,  2137,  2138,  2050,    54,
     841,    55,   763,    56,  2055,   847, -1633,   961,  1008,  1819,
     964,    57,  1009,  1003,  1025, -1082,  1033,  1134,  1153,  1012,
     978,  1030,  1161,  1875,  1164,  1192,  1166,  1204,  1217,  1277,
    1262,  1820,  1399,   760,  1173,   972,   973,   974,  1174,  1175,
    1176,   975,  1181,   761,  1193,  1195,  1196,   764,  1208,  1210,
    1298,  1401,   996,   564,  1218,  2093,   139,  1408,  1409, -1082,
    1435,  1434,  1419,  1436,  1449, -1082,  1455,    58,  1316,  2177,
    1461,   979,   980,  1316,  1470,  1472,  1490,  1484,  2198,  1496,
     976,  1499,  1561,   994,   994,  1821,  1513,  1565,  1519,  1517,
    1584,   137,  1316,  1316,  1578,  1581,  1316,   765,  1586,  1582,
     565,  1223, -1550,   137,   755,  1595,  1596,  1598,  1597,  1603,
    1605,  1612,   994,  1608,   984,  1614,  1628,  1630,  1262,  1211,
    1354,  1640,  1652,   762,  1645,  1658,  1656,  1665,  1660,    59,
    1686,   994,  1672,  1673,   985,  2247,  2247,  1316,  1822,   986,
    2175,  2110,  1316,  1316,  1316,  2638,   987,  1674,   137,  1676,
    2292,  1262,  1678,  1262,   978,  1683,  1681,  1688,  2179,  2610,
      60,  1739,  1737,  1736,  2667,  1773,  1742,  1782,  1784,  1794,
    1779,  1780,  1237,   994,  2193,  1805,  2195,  1811,   966,  1501,
    2196,  1828,  1845,  1798,  1856,  1869,  1571,  1848,  2201,  2629,
    1262,  1892,  1262,   763,  1884,   967,  1911,  1915,  1823,  1907,
    1922,  1942,  1949,  1977,    61,   979,   980,    62,  1374,  1978,
    1988,  1824,  1991,  1994,  2000,  2001,  2010,  2017,  2018,  2003,
    2013,  2014,  2019,  2032,  1744,  2020,  2036,  2041,  2045,  1451,
    2064,  2040,  2066,  2071,  2078,  2072,  2079,  2082,   764,   996,
     996,   996,  2086,  2085,  2105,  1262,  2111,  2113,   984,  2114,
    2117,  2124,  2158,  2151,  2159,  2160,  2125,  2161,  1316,  2170,
    2172,   996,   139,  2181,  2202, -1569,  2249,  2266,   985,  2272,
    2275,  2278,    63,   986,  2283,   542,  2208,  2294,  2310,  2296,
     987,  2214,   137,  2281,  2313,   428,  2320,  2355,   765,  2322,
   -1525,  2318, -1567,    64,  1825,  2026,  2388,   968,  2398,  2400,
    2403,  2418,  2419,  2421,  2432,  2420,  2437,  2442,   757,  2473,
    2325,  2470,  2480,  2481,  2483,  2505,  2486,  2499,    65,  2500,
      66,  2501,  2520,  2537,  1642,  2536,  2557,  2593,  2601,  2600,
    2605,  2611,  2632,   428,  2613,  2661,    67,  2662,  1262,  2701,
    1262,  1225,  2704,  2692,  2706,  2708,  2713,   970,    17,   971,
    2631,    92,   760,   125,   972,   973,   974,    38,   166,   256,
     975,   209,   761,   266,  1222,   119,  1236,  1226,   139,  1252,
     277,  1262,   290,  1274,   210,   241,   545,  2107,   323,   456,
     504,  2415,  1205,   526,   846,  1725,   798,  2699,  1310,  1663,
    2099,  1953,  2334,  1007,  1336,  2690,   442,  2703,  2666,   976,
    2351,  1216,  1262,  2257,  2352,  1453,   959,  2008,    68,  1813,
    2007,  2063,  1814,  2475,  2469,  1392,  2034,  1396,   977,  1815,
    1816,  1469,   139,  1029,   996,  1787,  2255,   999,   999,  1788,
    1803,   996,   996,   996,  1415,   582,  1316,  2075,  2396,  1415,
    1316,  1838,   762,  1846,   996,   996,   996,   996,   996,   996,
     996,   996,  2261,  1415,   996,  1868,   999,   627,  1562,  1880,
    2087,  1888,  2402,  2277,  1585,  1588,  1817,  2285,  2288,  2115,
    2169,  1914,  2139,   978,  1620,   999,  1619,  1704,  1751,  1705,
    1752,  2299,  1457,  2309,  1370,  1262,  1643,  1262,  1749,  1750,
    2167,  2440,  2168,  2698,  1952,  2445,  2496,   998,  2434,  2448,
    1852,  1786,  2302,  2491,  2303,  1611,  1336,   332,  1252,   213,
     772,  2304,   763,  2129,  2305,   310,   293,   999,   428,  1182,
    2599,   806,  2485,   447,   979,   980,  2628,   539,   272,   489,
    1751,  2153,  1752,  2271,  1753,  1818,  2098,   783,  1883,  2655,
    1501,     0,  2467,     0,     0,     0,     0,  2468,   599,     0,
    2247,  2247,     0,     0,  1316,  1316,     0,   764,  1316,  1316,
       0,  1316,     0,     0,  1819,     0,     0,   984,  1754,  1755,
    1756,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1820,   985,     0,  1336,
       0,     0,   986,     0,     0,     0,     0,     0,     0,   987,
       0,   137,     0,     0,     0,     0,  2493,   765,     0,     0,
       0,  1617,     0,     0,     0,     0,     0,     0,  1757,     0,
    1758,  1243,  2560,     0,     0,     0,     0,  1759,     0,     0,
    1760,     0,     0,     0,     0,     0,     0,  1644,  2512,  2513,
    1821,     0,     0,  2612,     0,     0,     0,     0,   645,     0,
       0,     0,     0,     0,     0,  2523,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2561,     0,  2562,     0,     0,
       0,  2534,  1169,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1243,   998,   998,   998,     0,     0,     0,
       0,     0,     0,  1822,     0,     0,  2554,     0,  2563,  2663,
       0,  2558,  2559,  2665,     0,     0,   998,     0,     0,  1617,
       0,     0,     0,     0,     0,     0,     0,  1761,  2564,  1762,
       0,  2596,     0,     0,  1243,     0,     0,     0,     0,     0,
       0,     0,     0,   357,     0,     0,  1354,     0,     0,     0,
     649,     0,     0,     0,     0,     0,  2565,   996,   358,     0,
       0,  2614,     0,  1823,  2616,  2617,     0,     0,   359,     0,
    1243,     0,     0,     0,     0,     0,  1824,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2707,     0,     0,  2721,     0,     0,
       0,     0,     0,   360,     0,     0,  2639,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   998,     0,     0,     0,     0,  1263,     0,   654,     0,
       0,     0,     0,  1263,     0,     0,     0,  2566,  1617,     0,
       0,  1263,     0,     0,     0,     0,   996,   857,     0,   858,
       0,   859,     0,     0,  2567,  1263,   860,     0,     0,  1825,
       0,     0,  1897,     0,   861,     0,     0,     0,     0,     0,
       0,  1904,     0,     0,     0,  2568,     0,     0,     0,   998,
       0,     0,  1913,     0,     0,     0,   998,   998,   998,  1416,
       0,     0,     0,     0,  1416,     0,  2569,   862,   863,   998,
     998,   998,   998,   998,   998,   998,   998,   864,  1416,   998,
    1941,     0,     0,     0,     0,  2570,     0,     0,   865,  1763,
    1617,   866,   663,  2571,     0,  2356,     0,     0,  2357,     0,
       0,  2358,     0,     0,     0,   867,     0,     0,  1459,  2359,
       0,     0,     0,  1415,     0,     0,     0,     0,   996,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   868,     0,
     361,     0,     0,     0,     0,     0,   869,     0,   870,  1764,
    1263,     0,     0,     0,     0,     0,  1336,     0,     0,     0,
    1765,     0,     0,     0,     0,  2360,     0,     0,  1992,     0,
       0,  1993,   362,     0,     0,     0,     0,     0,     0,   871,
       0,     0,  -233,     0,  2361,     0,     0,  1263,     0,     0,
     872,     0,     0,     0,     0,   873,     0,     0,  1263,     0,
       0,     0,     0,     0,     0,  1617,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2024,   874,     0,     0,     0,     0,     0,     0,   875,
       0,     0,   876,   877,     0,   363,     0,     0,     0,     0,
     364,     0,   878,     0,     0,     0,  1618,     0,     0,   879,
       0,   880,     0,     0,   881,  1263,     0,     0,     0,  1263,
       0,     0,     0,  2362,     0,     0,     0,     0,     0,     0,
       0,   365,  2363,     0,     0,     0,     0,     0,     0,   366,
       0,     0,     0,     0,     0,  2364,     0,     0,     0,     0,
       0,     0,   367,     0,     0,     0,   882,     0,     0,     0,
     883,     0,   884,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   885,     0,     0,     0,     0,  2365,     0,     0,
       0,   368,     0,     0,   369,     0,  1617,  1617,     0,     0,
       0,     0,   370,     0,     0,     0,     0,  2366,   886,  2367,
       0,     0,     0,  -230,  1618,     0,     0,     0,     0,     0,
       0,   887,     0,     0,     0,  2116,  1778,     0,     0,     0,
       0,  2368,  2369,  1617,     0,     0,     0,     0,     0,     0,
       0,     0,   371,     0,     0,   372,   888,   889,     0,     0,
       0,     0,   998,     0,     0,     0,     0,   890,     0,     0,
    2156,     0,  2370,     0,     0,     0,     0,  2166,  2166,     0,
       0,   891,   892,     0,     0,     0,     0,     0,   893,  1778,
       0,     0,   894,     0,     0,     0,     0,     0,  1252,  2371,
     895,     0,     0,     0,     0,   857,     0,   858,  2187,   859,
     896,     0,     0,     0,   860,     0,     0,     0,     0,   897,
       0,     0,   861,     0,     0,  2372,     0,     0,   898,     0,
       0,     0,  2373,   899,   900,     0,     0,   901,     0,   902,
       0,     0,     0,  1618,     0,  2374,   903,     0,     0,  2375,
       0,   998,     0,     0,  1263,   862,   863,  1778,     0,   904,
    2219,     0,     0,     0,     0,   864,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   865,   905,     0,   866,
       0,     0,     0,   906,     0,     0,     0,     0,   907,     0,
    2376,     0,     0,   867,  1263,     0,     0,     0,     0,  2377,
       0,     0,     0,     0,  2264,     0,     0,     0,     0,     0,
       0,     0,     0,  2219,  1617,   908,   868,     0,     0,     0,
    1778,     0,  1617,     0,   869,  1618,   870,     0,  2378,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2379,     0,
       0,  1897,     0,     0,  2380,     0,     0,     0,  1416,     0,
       0,     0,     0,   998,   966,     0,     0,   871,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   872,     0,
    2301,   967,     0,   873,     0,     0,     0,     0,   996,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2219,     0,
       0,     0,  1617,     0,     0,     0,     0,     0,     0,     0,
     874,     0,     0,     0,     0,     0,     0,   875,     0,     0,
     876,   877,     0,     0,  2342,     0,     0,     0,     0,     0,
     878,     0,     0,  1252,     0,     0,     0,   879,     0,   880,
    1618,     0,   881,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1263,     0,
       0,     0,  1263,     0,     0,  1263,     0,     0,  2392,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   968,   882,     0,     0,     0,   883,     0,
     884,     0,     0,     0,   757,     0,     0,     0,     0,     0,
     885,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2219,     0,     0,     0,     0,  1263,     0,
       0,     0,     0,     0,     0,     0,   886,   969,     0,     0,
       0,     0,     0,   970,     0,   971,     0,     0,   760,   887,
     972,   973,   974,     0,     0,     0,   975,     0,   761,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1618,  1618,     0,   888,   889,     0,  1263,  1263,  1263,
       0,     0,     0,     0,     0,   890,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   976,     0,     0,     0,   891,
     892,     0,     0,     0,   966,     0,   893,     0,  1618,     0,
     894,     0,     0,     0,   977,     0,     0,     0,   895,     0,
       0,   967,     0,     0,     0,     0,     0,     0,   896,     0,
       0,     0,     0,     0,     0,     0,  1263,   897,   762,  2477,
       0,     0,     0,     0,     0,     0,   898,     0,     0,     0,
       0,   899,   900,     0,     0,   901,     0,   902,     0,     0,
       0,     0,     0,     0,   903,  2679,     0,     0,     0,   978,
       0,     0,     0,     0,     0,     0,     0,  1651,     0,     0,
       0,     0,  2503,     0,     0,     0,     0,     0,     0,  2506,
       0,     0,  2508,     0,     0,   905,     0,     0,     0,     0,
       0,   906,     0,     0,     0,     0,   907,     0,   763,     0,
       0,     0,  1328,     0,     0,     0,     0,     0,     0,     0,
     979,   980,     0,   968,  1263,     0,     0,     0,     0,     0,
       0,     0,     0,   908,     0,     0,     0,     0,     0,     0,
       0,  2538,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   764,     0,  2553,     0,  1263,     0,  1263,
       0,     0,     0,   984,     0,     0,     0,     0,     0,     0,
       0,  1252,     0,     0,     0,     0,     0,     0,  1329,  1618,
     972,   973,   974,   985,     0,     0,   975,  1618,   986,     0,
     857,     0,   858,     0,   859,   987,  1263,   137,  1263,   860,
       0,     0,     0,   765,     0,     0,     0,   861,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2618,
       0,     0,     0,     0,     0,   976,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     862,   863,     0,   998,     0,     0,     0,     0,     0,     0,
     864,  1263,     0,     0,     0,     0,     0,  1618,     0,     0,
       0,   865,   996,   996,   866,     0,     0,     0,     0,     0,
       0,     0,  1223,     0,     0,   755,     0,     0,   867,  2668,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   996,     0,     0,     0,     0,     0,     0,     0,   978,
       0,   868,     0,  2689,  2689,     0,     0,     0,     0,   869,
     996,   870,     0,     0,     0,     0,     0,     0,  -706,     0,
    -706,  -706,  -706,  -706,  -706,  -706,  -706,  -706,     0,  -706,
    -706,  -706,     0,  -706,  -706,  -706,  -706,  -706,  -706,  -706,
    -706,  -706,   871,     0,  1263,     0,  1263,     0,  2712,   966,
     979,   980,   996,   872,     0,     0,     0,     0,   873,     0,
       0,     0, -1850,     0,     0,     0,   967,     0,     0,     0,
     966,     0,     0,     0,     0,     0,     0,  1263,     0,     0,
       0,     0,     0,     0,     0,   874,     0,   967,     0,     0,
       0,     0,   875,   984,     0,   876,   877,     0,     0,     0,
       0,     0,     0,     0, -1135,   878,     0,     0,  1263,     0,
       0,     0,   879,   985,   880,     0,     0,   881,   986,  1918,
       0,     0, -1135,     0,     0,   987,   243,   137,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   882,
       0,     0,     0,   883,     0,   884,     0,     0,   968,     0,
       0,     0,     0,     0,     0,   885,     0,     0,     0,   757,
       0,  -706,  -706,     0,  -706,  -706,  -706,  -706,     0,   968,
       0,  1263,     0,  1263,     0,     0,     0,     0,     0,     0,
     757,   886,     0,     0,     0,     0,     0,   857,     0,   858,
       0,   859,  1225,     0,   887,     0,   860,     0,   970,     0,
     971,     0,     0,   760,   861,   972,   973,   974,     0,     0,
       0,   975,     0,   761,     0,     0,     0,     0,  1226,   888,
     889,     0,     0,     0,   760,     0,   972,   973,   974,     0,
     890,     0,   975,     0,   761,     0,     0,   862,   863,     0,
       0,     0,     0,     0,   891,   892,     0,   864,     0,     0,
     976,   893,     0,     0,     0,   894,     0,     0,   865,     0,
       0,   866,     0,   895,     0,     0,     0,     0,     0,   977,
       0,   976,     0,   896,     0,   867,     0,     0,     0,     0,
       0,     0,   897,     0,     0,     0,     0,     0,     0,     0,
       0,   898,     0,   762,     0,     0,   899,   900,   868,     0,
     901,     0,   902,     0,     0,     0,   869,     0,   870,   903,
       0,     0,     0,     0,   762,     0,     0,     0,     0,     0,
       0,     0,  -706,     0,   978,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   871,
     905,     0,     0,     0,     0,   978,   906,     0,     0,     0,
     872,   907,     0,     0,     0,   873,     0,     0,     0,     0,
       0,     0,     0,   763,     0,     0,     0,     0,     0,     0,
       0,     0,  -706,     0,     0,   979,   980,     0,   908,     0,
       0,     0,   874,     0,   763,     0,     0,   998,   998,   875,
       0,     0,   876,   877,     0,     0,   979,   980,     0,     0,
       0,  1919,   878,     0,     0,     0,     0,   966,   764,   879,
       0,   880,  1920,     0,   881,     0,   998,     0,   984,     0,
       0,     0,     0,     0,   967,     0,     0,     0,     0,   764,
       0,     0,     0,     0,     0,   998,     0,     0,   985,   984,
       0,     0,     0,   986,     0,     0,     0,     0,     0,     0,
     987,     0,   137,     0,     0,     0,   882,     0,   765,   985,
     883,     0,   884,     0,   986,     0,     0,     0,     0,     0,
       0,   987,   885,   137,     0,     0,     0,   998,     0,   765,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   886,     0,
       0,  1035,     0,  1036,     0,     0,     0,     0,  1037,     0,
       0,   887,     0,     0,     0,  1328,  1038,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   968,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   888,   889,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   890,     0,  1039,
    1040,     0,     0,     0,     0,     0,     0,     0,     0,  1041,
       0,   891,   892,     0,     0,     0,     0,     0,   893,     0,
    1042,     0,   894,  1043,     0,     0,     0,     0,     0,     0,
     895,  1474,     0,   972,   973,   974,     0,  1044,     0,   975,
     896,     0,     0,     0,     0,     0,     0,     0,     0,   897,
       0,     0,     0,     0,     0,     0,     0,     0,   898,     0,
    1045,     0,     0,   899,   900,     0,     0,   901,  1046,   902,
    1047,     0,     0,     0,     0,     0,   903,  1048,   976,  1049,
    1050,  1051,  1052,  1053,  1054,  1055,  1056,     0,  1057,  1058,
    1059,     0,  1060,  1061,  1062,  1063,  1064,  1065,  1066,  1067,
    1068,  1069,     0,     0,     0,     0,     0,   905,     0,     0,
       0,     0,  1070,   906,     0,     0,     0,  1071,   907,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1072,   908,     0,     0,     0,     0,
       0,  1073,   978,     0,  1074,  1075,     0,     0,     0,     0,
       0,     0,     0,     0,  1076,     0,     0,     0,     0,     0,
       0,  1077,     0,  1078,     0,     0,  1079,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1223,     0,     0,
     755,     0,     0,  1527,  1528,  1529,     0,     0,     0,     0,
       0,  1530,     0,   979,   980,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0, -1850,     0,     0,  1080,     0,
       0,     0,  1081,     0,  1082,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1083,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   984,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0, -1135,     0,     0,
    1084,     0,     0,     0,   966,     0,   985,     0,     0,     0,
       0,   986,     0,  1085,     0, -1135,     0,     0,   987,   243,
     137,   967,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1086,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1087,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -870,     0,  1088,  -870,     0,     0,     0,     0,
    1089,     0,     0,     0,  1090,     0,     0,     0,     0,     0,
       0,  1531,  1091,     0,     0,     0,     0,     0,     0,     0,
       0,  1532,  1092,     0,     0,     0,     0,     0,     0,     0,
       0,  1093,     0,     0,     0,  1211,     0,     0,     0,     0,
    1094,     0,     0,     0,     0,  1095,  1096,     0,     0,  1097,
       0,  1098,     0,   968,     0,     0,     0,     0,  1099,  1533,
    1534,     0,     0,     0,   757,     0,     0,     0,     0,  -870,
       0,  1100,     0,     0, -1750,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1851,     0,  -870,     0,     0,  1101,
       0,     0,     0,     0,     0,  1102,     0,  1225,  1535,  1536,
    1103,     0,     0,   970,     0,   971,     0,     0,   760,     0,
     972,   973,   974,     0,     0,     0,   975,     0,   761,     0,
       0,     0,     0,  1226,     0,  1223,     0,  1104,   755,     0,
       0,  1527,  1528,  1529,     0,     0,  1537,     0,     0,  1530,
       0,     0,  1538,     0,     0,  1539,     0,     0,     0,     0,
       0,     0,     0,  1540,     0,   976,     0,     0,     0,     0,
    1541,     0,     0,     0,     0,  1542,     0,     0,     0,     0,
       0,     0,     0,     0,   977,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1543,     0,     0,     0,  -870,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   762,  -870,
       0,     0,   966,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   967,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   978,
       0,     0,  -870,     0,     0,     0,     0,     0,  -870,     0,
    -870,     0,     0,  -870,     0,  -870,  -870,  -870,     0,     0,
       0,  -870,     0,  -870,     0,     0,     0,     0,  -870,     0,
    1223,     0,     0,   755,     0,     0,     0,     0,   763,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1531,
     979,   980,     0,     0,     0,     0,     0,     0,     0,  1532,
    -870,     0,     0,     0,     0,  -870,     0,     0,     0,     0,
       0,  1544,     0,  1545,     0,  1546,     0,     0,  1547,  -870,
    1548,  1549,  1550,   764,     0,  1551,  1552,     0,     0,     0,
       0,   968,     0,   984,     0,     0,     0,  1533,  1534,     0,
       0,     0,   757,  -870,     0,     0,     0,   966,     0,     0,
       0,     0,     0,   985, -1750,     0,     0,     0,   986,  1317,
       0,     0,     0,     0,   967,   987,     0,   137,     0,     0,
       0,     0,     0,   765,  -870,  1225,  1535,  1536,     0,     0,
       0,   970,     0,   971,     0,     0,   760,     0,   972,   973,
     974,     0,     0,     0,   975,     0,   761,     0,     0,     0,
       0,  1226,     0,     0,     0,     0,     0,  -870,     0,     0,
       0,     0,  1223,  -870,  1537,   755,     0,     0,     0,     0,
    1538,     0,     0,  1539,     0,  -870,  -870,     0,     0,     0,
       0,  1540,     0,   976,     0,     0,     0,     0,  1541,     0,
       0,     0,     0,  1542,     0,     0,     0,     0,     0,     0,
    1223,     0,   977,   755,     0,     0,     0,     0,  -870,     0,
       0,     0,  1543,     0,     0,     0,   968,     0,  -870,     0,
       0,     0,     0,     0,  -870,     0,   762,   757,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -870,   966,
       0,     0,     0,  -870,     0,     0, -1750,     0,     0,     0,
    -870,     0,  -870,     0,     0,     0,   967,   978,  -870,     0,
    1225,     0,     0,     0,     0,     0,   970,     0,   971,  1374,
       0,   760,     0,   972,   973,   974,     0,   966,     0,   975,
       0,   761,     0,     0,     0,  1223,  1226,     0,   755,  1379,
       0,     0,     0,     0,   967,     0,   763,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   979,   980,
       0,     0,     0,     0,     0,     0,     0,     0,   976,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1544,
       0,  1545,     0,  1546,     0,     0,  1547,   977,  1548,  1549,
    1550,   764,     0,  1551,  1552,     0,     0,     0,     0,     0,
       0,   984,     0,     0,     0,     0,     0,     0,   968,     0,
       0,   762,   966,     0,     0,     0,     0,     0,     0,   757,
       0,   985,     0,     0,     0,     0,   986,     0,     0,   967,
       0,     0,     0,   987,     0,   137,     0,     0,     0,     0,
       0,   765,   978,     0,     0,     0,   968,     0,     0,     0,
       0,     0,  1225,     0,     0,     0,     0,   757,   970,     0,
     971,     0,     0,   760,     0,   972,   973,   974,     0,     0,
       0,   975,     0,   761,     0,     0,     0,     0,  1226,     0,
       0,   763,     0,     0,     0,     0,     0,     0,     0,     0,
    1225,     0,     0,   979,   980,     0,   970,     0,   971,     0,
       0,   760,     0,   972,   973,   974,     0,     0,     0,   975,
     976,   761,     0,     0,     0,  -926,  1226,     0,  -926,     0,
       0,     0,     0,     0,     0,     0,   764,     0,     0,   977,
       0,   968,     0,     0,     0,     0,   984,     0,     0,     0,
       0,     0,   757,     0,  1223,     0,     0,   755,   976,     0,
       0,     0,     0,   762,     0,     0,   985,     0,     0,     0,
       0,   986,     0,     0,     0,     0,     0,   977,   987,     0,
     137,     0,     0,     0,     0,  1225,   765,     0,     0,     0,
       0,   970,     0,   971,   978,     0,   760,     0,   972,   973,
     974,   762,  -926,     0,   975,     0,   761,     0,     0,     0,
       0,  1226,     0,     0,     0,     0,     0,     0,     0,  -926,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   966,   978,   763,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   976,     0,   979,   980,     0,   967,     0,
       0,     0,     0,     0,  1223,     0,     0,   755,     0,     0,
       0,     0,   977,     0,     0,     0,     0,     0,     0,     0,
       0,   763,     0,     0,     0,     0,  1223,     0,   764,   755,
       0,     0,     0,   979,   980,  1501,   762,     0,   984,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   985,     0,
       0,     0,     0,   986,     0,     0,   764,   978,     0,     0,
     987,  -926,   137,     0,     0,     0,   984,     0,   765,     0,
       0,   966,  -926,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1647,   985,     0,   967,     0,
     968,   986,     0,   966,     0,     0,   763,     0,   987,     0,
     137,   757,     0,     0,     0,  -926,   765,     0,   979,   980,
     967,  -926,     0,  -926,     0,     0,  -926,     0,  -926,  -926,
    -926,     0,     0,     0,  -926,     0,  -926,  1463,     0,     0,
       0,  -926,     0,     0,  1225,     0,  1223,     0,     0,   755,
     970,   764,   971,     0,     0,   760,     0,   972,   973,   974,
       0,   984,     0,   975,     0,   761,     0,     0,     0,     0,
    1226,     0,     0,  -926,     0,     0,     0,     0,     0,     0,
       0,   985,     0,     0,     0,     0,   986,     0,     0,     0,
       0,     0,  -926,   987,     0,   137,     0,     0,     0,     0,
     968,   765,   976,     0,     0,     0,     0,     0,     0,     0,
       0,   757,     0,     0,     0,     0,  -926,     0,     0,     0,
       0,   977,   968,   966,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   757,     0,     0,     0,     0,     0,     0,
     967,     0,     0,     0,  1225,   762,     0,  -926,     0,     0,
     970,     0,   971,     0,     0,   760,     0,   972,   973,   974,
       0,     0,     0,   975,     0,   761,  1225,     0,     0,     0,
    1226,     0,   970,     0,   971,     0,   978,  1267,     0,   972,
     973,   974,     0,     0,     0,   975,  -926,   761,     0,     0,
       0,     0,  1226,     0,     0,     0,     0,     0,  -926,  -926,
       0,     0,   976,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   763,     0,     0,     0,     0,
       0,   977,     0,     0,   976,     0,  1774,   979,   980,   755,
       0,  -926,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -926,   968,   977,     0,   762,     0,     0,     0,     0,
       0,     0,     0,   757,     0,     0,     0,     0,     0,     0,
     764,  -926,     0,     0,     0,     0,  -926,   762,     0,     0,
     984,     0,     0,  -926,     0,  -926,   978,     0,     0,     0,
       0,  -926,     0,     0,     0,     0,  1225,     0,     0,     0,
     985,     0,   970,     0,   971,   986,     0,   760,   978,   972,
     973,   974,   987,   966,   137,   975,     0,   761,     0,  1939,
     765,     0,  1226,     0,     0,   763,     0,     0,     0,     0,
     967,     0,     0,     0,     0,     0,     0,   979,   980,     0,
       0,     0,     0,     0,     0,     0,     0,   763,     0,     0,
       0,     0,     0,     0,   976,     0,     0,     0,     0,   979,
     980,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     764,     0,     0,   977,     0,     0,     0,     0,     0,     0,
     984,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   764,     0,     0,     0,     0,   762,     0,     0,
     985,     0,   984,     0,     0,   986,     0,     0,     0,     0,
       0,     0,   987,     0,   137,     0,     0,     0,     0,     0,
     765,     0,   985,     0,     0,     0,     0,   986,   978,     0,
       0,     0,   968,     0,   987,     0,   137,     0,     0,     0,
       0,     0,   765,   757,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   763,     0,     0,
       0,     0,     0,     0,     0,     0,  1225,     0,     0,   979,
     980,     0,   970,     0,   971,     0,     0,   760,     0,   972,
     973,   974,     0,     0,     0,   975,     0,   761,     0,     0,
       0,     0,  1226,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   764,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   984,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   976,     0,     0,     0,     0,     0,
       0,     0,   985,     0,     0,     0,     0,   986,     0,     0,
       0,     0,     0,   977,   987,     0,   137,     0,     0,     0,
       0,     0,   765,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1027,     0,   762,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -357,     0,   978,  -357,
       0,     0,  -357,  -357,  -357,  -357,  -357,  -357,  -357,  -357,
    -357,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -357,
       0,  -357,     0,     0,     0,     0,     0,   763,  -357,     0,
    -357,  -357,  -357,  -357,  -357,  -357,  -357,     0,     0,   979,
     980,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   764,     0,  -357,     0,     0,     0,     0,     0,
       0,     0,   984,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   985,     0,     0,     0,     0,   986,     0,     0,
       0,     0,     0,     0,   987,  -357,   137,     0,     0,     0,
       0,     0,   765,     0,     0,     0,     0,     0,   966,     0,
     529,     0,     0,  -357,  -357,  -357,  -357,  -357,   528,     0,
    -357,  -357,     0,     0,  -357,   967,     0,     0,     0,     0,
       0,  -357,     0,  -357,     0,     0,     0,     0,  -357,  -357,
       0,     0,     0,     0,     0,     0,  -357,     0,     0,     0,
       0,     0,     0,  -357,  -357,     0,  -357,  -357,  -357,  -357,
    -357,  -357,  -357,     0,     0,     0,     0,  -357,     0,     0,
    -357,     0,     0,     0,     0,     0,  -357,     0,  -357,     0,
       0,     0,     0,     0,     0,     0,     0,  -357,     0,     0,
       0,  -357,     0,  -357,  -357,  -357,  -357,  -357,  -357,  -357,
    -357,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -357,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   968,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -357,   757,     0,
    -357,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -357,  -357,     0,     0,     0,     0,     0,
       0,     0,  -357,     0,     0,  -357,     0,     0,     0,     0,
       0,   969,     0,     0,     0,     0,     0,   970,  -357,   971,
    -357,     0,   760,     0,   972,   973,   974,     0,     0,  -357,
     975,     0,   761,   529,     0,     0,  -357,  -357,  -357,  -357,
    -357,     0,     0,  -357,  -357,     0,  -357,     0,     0,     0,
       0,     0,     0,  -357,     0,     0,     0,     0,     0,     0,
       0,     0,  -357,     0,     0,     0,     0,     0,     0,   976,
    -357,     0,     0,     0,     0,     0,     0,  -357,     0,     0,
    -357,     0,  -357,  -357,  -357,     0,     0,     0,   977,     0,
    -357,     0,     0,  -357,     0,     0,     0,     0,     0,  -357,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   762,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -357,     0,     0,     0,     0,  -357,     0,     0,
       0,     0,  -357,     0,     0,  -357,     0,     0,     0,     0,
       0,     0,     0,   978,  -357,     0,     0,     0,     0,  -357,
       0,     0,     0,  -357,  -357,  -357,     0,     0,     0,     0,
       0,     0,     0,  -357,     0,     0,     0,  -357,     0,     0,
       0,     0,     0,  -357,  -357,     0,     0,  -357,     0,     0,
     530,     0,   763,     0,     0,  -357,     0,   619,  -357,     0,
       0,     0,     0,     0,   979,   980,     0,     0,     0,     0,
       0,  -357,   620,     0,     0,   621,   622,   623,   624,   625,
     626,   627,     0,  -357,     0,  1405,     0,     0,     0,     0,
       0,  -357,     0,     0,     0,   981,     0,   764,     0,   982,
     983,     0,     0,     0,     0,     0,     0,   984,     0,     0,
     628,     0,   629,   630,   631,   632,   633,   634,   635,     0,
       0,     0,     0,     0,     0,     0,     0,   985,     0,     0,
       0,     0,   986,  -357,     0,  -357,  -357,  -357,     0,   987,
       0,   137,     0,     0,     0,     0,     0,   765,     0,     0,
       0,     0,     0,     0,     0,     0,   636,     0,     0,     0,
       0,     0,  -357,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -357,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -357,     0,     0,
       0,     0,     0,     0,     0,     0,  -357,  -357,  -357,     0,
       0,     0,     0,     0,     0,   637,   638,   639,   640,   641,
    -357,     0,   642,   643,     0,     0,     0,  -357,     0,     0,
       0,     0,     0,   530,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   644,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    94,
       0,     0,   645,     0,  1699,     0,     0,  1700, -1826,     0,
    1701,   621,   622,   623,   624,   625,   626,  1702,  1703,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1704,     0,  1705,
       0,     0,     0,     0,   646,     0,   628,     0,   629,   630,
     631,   632,   633,   634,   635,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   647,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   648,     0,     0,     0,
       0,     0,   636,     0,   649,     0,     0,   650,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     651,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   652,     0,     0,     0,     0,     0,     0,     0,
     653,     0,     0,  1706,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   637,   638,   639,   640,   641,     0,     0,   642,   643,
       0,     0,  1707,     0,     0,   966,     0,     0,     0,  1708,
       0,  1709,   654,     0,   655,   656,   657, -1779,     0,     0,
       0,     0,   967,     0,  1710,     0,     0,     0,     0,     0,
       0,     0,   644,     0,     0,     0,     0,     0,     0,     0,
       0,   658,     0,     0,     0,    94,     0,     0,   645,     0,
       0,     0,     0,     0,     0,     0,  1711,     0,     0,  -354,
       0,     0,     0,     0,     0,  1712,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0, -1826,     0,  1713,     0,
       0,     0,     0,     0,     0,   659,   660,   661,     0,     0,
     646,     0,     0,     0,     0,     0,     0,     0,     0,   662,
       0,     0,     0,     0,     0,     0,   663,   621,   622,   623,
     624,   625,   626,     0,     0,     0,     0,     0,  1714,     0,
       0,     0,     0,     0,   968,     0,     0,     0,     0,     0,
       0,  1715,   648,     0,     0,   757,     0,     0,     0,     0,
     649,     0,   628,   650,   629,   630,   631,   632,   633,   634,
     635,     0,   966,     0,     0,     0,   651,     0,  1716,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   969,   967,
       0,     0,     0,     0,   970,     0,   971,     0,     0,   760,
       0,   972,   973,   974,  1717,     0,     0,   975,   636,   761,
       0,  1718,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1719,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   654,     0,
     655,   656,   657,     0,     0,     0,   976,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   977,     0,   637,   638,   639,
     640,   641,     0,     0,   642,   643,     0,     0,     0,     0,
    1720,   966,     0,     0,     0,  -609,     0,     0,     0,   762,
    1721,   968,     0,     0,     0,     0,     0,     0,   967,     0,
       0,     0,   757,     0,     0,     0,     0,  1722,   644,     0,
     966,   659,   660,   661,     0,     0,     0,     0,     0,     0,
     978,     0,     0,     0,     0,   662,     0,   967,     0,     0,
       0,  1723,   663,     0,     0,   969,     0,     0,     0,     0,
       0,   970,     0,   971,     0,     0,   760,     0,   972,   973,
     974,     0,     0,     0,   975,     0,   761,     0,     0,   763,
       0,     0,     0,     0,     0,     0,   646,     0,     0,     0,
       0,   979,   980,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1424,   976,     0,     0,     0,     0,     0,     0,
     968,     0,   981,     0,   764,     0,   982,   983,   648,     0,
       0,   757,   977,     0,   984,     0,     0,     0,     0,   650,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   968,
       0,     0,   651,     0,   985,     0,   762,     0,     0,   986,
     757,     0,     0,     0,   969,     0,   987,   966,   137,     0,
     970,     0,   971,     0,   765,   760,     0,   972,   973,   974,
       0,     0,     0,   975,   967,   761,     0,   978,     0,     0,
       0,     0,     0,   969,     0,     0,     0,     0,     0,   970,
       0,   971,     0,     0,   760,     0,   972,   973,   974,     0,
       0,     0,   975,     0,   761,     0,   655,   656,   657,     0,
       0,     0,   976,     0,     0,     0,   763,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   979,   980,
       0,   977,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   976,     0,     0,     0,     0,     0,     0,     0,  1964,
       0,     0,     0,     0,     0,   762,     0,     0,     0,   981,
     977,   764,     0,   982,   983,     0,     0,     0,     0,     0,
       0,   984,     0,     0,     0,     0,   968,   659,   660,   661,
       0,     0,     0,     0,   762,     0,   978,   757,     0,     0,
       0,   985,     0,     0,     0,     0,   986,     0,     0,     0,
       0,     0,     0,   987,     0,   137,     0,     0,     0,     0,
       0,   765,     0,     0,     0,   978,     0,     0,     0,     0,
     969,     0,     0,     0,     0,   763,   970,     0,   971,     0,
       0,   760,     0,   972,   973,   974,     0,   979,   980,   975,
       0,   761,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   763,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   979,   980,   981,     0,
     764,     0,   982,   983,     0,     0,     0,     0,   976,     0,
     984,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   977,     0,   764,
     985,   982,     0,     0,     0,   986,     0,     0,     0,   984,
       0,     0,   987,     0,   137,     0,     0,     0,     0,     0,
     765,   762,     0,     0,     0,     0,     0,     0,     0,   985,
       0,     0,     0,     0,   986,     0,     0,     0,     0,     0,
       0,   987,     0,   137,     0,     0,     0,     0,     0,   765,
       0,     0,   978,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   763,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   979,   980,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   764,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   984,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   985,     0,     0,     0,
       0,   986,     0,     0,     0,     0,     0,     0,   987,     0,
     137,     0,     0,     0,     0,     0,   765
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-2292))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
     103,   393,   105,   395,   597,   116,   366,   790,   111,   663,
     962,   540,   687,   103,  1115,   105,   849,  1223,   721,  1204,
     652,   111,   795,  1142,   358,   785,   181,  1577,  1587,  1441,
    1441,  1113,   135,   425,  1482,   158,  1441,  1441,  1107,  1441,
    1441,  1593,   600,   435,   404,   135,  1115,  1116,  1364,  1255,
    1374,    56,    57,    58,   209,  1990,  1125,  1118,  2024,    64,
    1826,  1128,  1522,  1132,  1133,  1531,  1463,  1262,  1909,  1353,
     700,  1248,  1109,   794,   749,  1142,    17,  1975,     1,  1120,
       9,   184,  1151,  1152,    58,    22,     1,  1128,  1793,    53,
      21,  1181,   852,  1934,    99,   100,    60,   102,     9,     9,
     794,  1142,   107,   108,     9,  1195,    27,  2057,     1,    48,
      56,   116,   364,    49,    97,     6,  1758,    17,    58,  1516,
       1,  1316,    88,  1373,   799,   124,   758,   759,   133,    21,
    1835,   125,     9,    71,     0,     0,  1686,  2096,  1986,  1455,
     251,    30,   111,   124,    58,   160,   226,    58,    64,  1250,
     242,    93,    88,   230,   277,   160,   153,  2005,  2006,   257,
      73,  2009,    31,   257,    31,   171,   166,  1451,   160,    65,
     204,    67,    22,    49,  1369,   177,    65,   809,    67,   177,
     189,  1886,   126,   204,   295,     9,   191,  1584,   175,  1505,
    2156,    97,    33,    87,   309,   116,   233,   161,   203,  2002,
      58,  1238,  2050,    26,   125,   421,   331,  2055,   115,   257,
     840,   204,   309,   158,   369,   970,   971,  1286,   257,   243,
     226,   358,   977,   219,  2422,   411,   130,   214,   234,   257,
     253,    49,    49,   785,   219,   108,   286,   292,  1943,   407,
     759,   395,   172,  2534,   249,   217,   407,  1115,  1317,   188,
    1647,     8,   257,  1294,   218,   219,   367,   245,  1131,   172,
     981,   982,   983,    31,  1305,   237,   447,   178,  1212,   324,
    1143,   453,  1216,   139,   139,   205,   291,   143,   143,   294,
      37,     6,  1003,   464,  1152,   335,  1570,   232,   982,   272,
     809,   263,   478,   176,   371,  1362,   233,   142,  2496,   453,
     852,   356,   330,  1853,   343,  2596,    71,  1376,   272,  1003,
     478,   307,   318,   111,  2273,  2274,   288,   478,   282,   200,
      49,  1362,   419,  2171,    92,  1366,  2031,   168,  2169,  1888,
     315,   242,    58,  1008,  1658,   201,   201,   969,   229,   233,
     443,  1665,   445,   446,   341,   561,   457,   130,   293,   452,
     257,    71,   257,   336,   363,   445,   446,   253,   363,    71,
     275,   385,   452,   500,   253,    71,   469,   390,  1652,   472,
     473,    71,   475,  2015,   197,   478,   479,   204,   470,   469,
     505,  1463,  1779,   233,   377,  1845,   391,  1108,  1848,   310,
     233,   506,   358,  1859,  1463,   238,  2199,   402,   291,    65,
     257,    67,  1868,    34,   348,   257,   411,   412,   506,   414,
     415,   229,   506,   516,  1108,   420,   453,   794,   309,   499,
     313,     6,   358,   411,   366,   317,   516,   268,   449,   154,
     464,   257,   437,  1502,  1516,     6,   332,   540,   541,   454,
     354,  2339,   355,   332,   170,  1166,  1515,  1516,   453,  2408,
     540,   541,  1173,  1174,  1175,  1130,  1014,  1015,   506,   403,
    1521,   399,   454,   463,   288,  1186,  1187,  1188,  1189,  1190,
    1191,  1192,  1193,  1757,   389,  1196,   342,   342,   581,  1173,
    1174,  1175,   358,   594,  1553,   484,   402,  1242,   213,  1262,
     601,   581,  1186,  1187,   371,     6,   438,   600,   224,  1193,
     506,  2349,  1584,   484,   506,  2353,  2211,   417,   506,   506,
     515,   505,   450,  1837,  1581,  1584,   485,   505,   422,   506,
     460,  2471,  2472,   506,   455,   465,   350,  1564,   467,   534,
     502,  1708,   257,   507,   500,   466,   647,  1787,   453,   124,
    1581,   358,   267,    39,   444,   458,  2251,   272,  2253,   554,
     653,   556,   804,   499,   559,   560,  1625,   562,  1595,   470,
     377,  2203,   503,   455,   500,  1647,   505,  1636,  1774,   506,
    1639,   462,   453,  2125,   466,  1205,  2474,   506,  1647,  2284,
    1621,  2422,  1777,   506,   505,  1675,   591,   453,   453,   160,
     448,   596,   969,  1225,  1878,   464,  1369,   464,   603,   506,
     506,   506,   512,  1526,   981,   982,   983,   501,   453,  2314,
    2315,  2071,   576,   506,  2512,  2513,   505,    38,   114,  2467,
    2468,   498,   347,   506,   500,    46,  1003,     1,   213,   358,
    2396,  1915,   505,   506,   399,   253,   453,   464,   257,     0,
     506,   506,   213,  1566,   608,   443,   257,   257,   377,   506,
     448,   282,   283,   284,   506,   512,  2554,   662,   173,   770,
    2558,  2559,    62,   506,   775,   176,   332,  2064,  1591,  2066,
     453,   257,   257,   162,  1933,   257,  2642,   780,   781,   399,
     506,   792,   267,   500,   839,   450,   257,   399,    62,  2587,
      90,    91,   417,   399,   797,   460,   267,  1779,   703,   399,
     465,   706,   213,    57,   143,  2640,    60,   235,  2105,     6,
      64,   263,     9,   233,   345,   204,    90,    91,   257,  1492,
    1112,    32,  1114,   506,   453,  1129,   452,  2625,   242,     6,
     450,  1108,   162,   272,   460,   461,   288,   462,   450,   465,
      32,  1782,   238,  2067,   450,  1137,   257,  1139,  1785,  2455,
     450,  1155,  1144,  1130,   208,   209,   267,   245,     0,  1136,
     263,  2158,   347,   329,   130,   347,  1158,   272,  1489,     6,
     331,   500,   390,  2478,  2479,    27,   347,   201,   139,   448,
     271,   506,   143,   322,   200,   288,    83,   512,   126,  1166,
     230,   212,   197,   247,   248,  1489,  1173,  1174,  1175,  1176,
     111,   290,  2086,   100,  1181,  2271,   388,   453,     6,  1186,
    1187,  1188,  1189,  1190,  1191,  1192,  1193,  1884,  1195,  1196,
     275,   708,   309,   244,  1456,  1509,  1510,  1511,  1512,   263,
     499,   205,   417,   233,   456,   417,   347,   468,   469,   330,
     201,   154,   473,  1884,  1885,   266,   417,   355,  1225,   263,
     961,  1483,   257,  1922,  2413,  2171,  1629,  1578,   204,   233,
     290,  1253,   205,   448,   116,  2085,   232,   263,   755,  1970,
     398,  1248,  1264,     9,   288,  1798,   123,   462,   393,  1437,
    2164,  2140,  1805,   454,   506,   503,   258,   506,   377,     9,
     233,   462,   288,    57,    57,   506,   506,  1140,   319,   484,
      64,    64,  1306,   342,   424,   202,   417,   403,   324,   325,
    2616,  1014,  1015,  1024,    85,   269,   213,  1160,   342,   257,
     506,   506,   322,   411,   411,   341,   292,   512,  1603,  2488,
     512,   371,  1266,  1856,   389,   506,   213,  2056,  2057,   505,
    2160,   512,   407,   448,   505,   506,   257,   834,   322,   246,
     458,   462,   386,   505,  1331,   252,   470,   254,   379,  1680,
     257,   357,   259,   260,   261,   257,   380,   506,   265,   460,
     267,   407,   318,   512,   465,   272,   213,   338,  1382,   395,
     257,   342,  2064,   195,  2066,  2537,  1680,   341,  1911,   245,
     267,   478,  2462,    57,   505,   506,     6,   171,   342,     9,
      64,   512,   257,   457,  1777,   459,  1109,   304,   272,  1684,
    1113,  2072,  1346,   478,   139,   213,   505,  1120,  1121,  2225,
     257,   453,  1348,  2105,     9,  1128,   323,   546,  1131,   407,
     267,   107,   287,  1136,   275,  1138,    26,  1140,  1141,  1142,
    1143,   117,   478,   397,   256,  2114,   302,    30,   402,  2519,
     347,  2601,   226,   453,   475,  2275,  2504,  1160,   126,   257,
     234,  2613,  2103,  2124,   436,    50,   257,   586,     1,   267,
     347,   483,  1398,    83,   506,   330,  2158,   213,    11,   453,
     476,   378,   455,  2152,  2153,    95,   453,  2010,   415,   501,
     100,   505,   506,   213,  2195,   395,   615,   288,  1691,  1254,
     478,    30,  1494,  2026,   172,   269,   269,  2519,  2519,   505,
     347,   352,  1489,   354,  2519,  2519,   257,  2519,  2519,   213,
     417,   257,  2045,   178,   496,   108,    59,   454,  1812,  2679,
     503,   267,   429,   430,   506,  1238,    65,   257,    67,  1771,
     417,   172,  1826,  2693,   318,   128,  2705,   267,   460,   347,
    1305,  2074,   506,   465,  1257,  2078,   263,   178,     8,   423,
    2637,   425,   352,   257,    97,   462,    99,   188,   101,    55,
       8,   448,   263,   267,   205,   472,   109,   341,   341,   453,
     417,   288,  1166,   238,   167,   462,   241,    37,  2257,   486,
     211,  1294,   202,     2,  2117,   492,  2673,   288,     7,    37,
     497,  1578,  1305,   213,    90,   269,   189,   504,   473,   506,
     475,   347,  1196,   478,   412,   512,  1976,   412,  1373,   417,
     241,   107,   205,   413,   414,   462,  1603,   347,   213,   506,
     233,   117,   165,   397,   397,   512,   246,   453,   402,   402,
      28,  1410,   252,   453,   254,  1414,  1349,   257,   188,   259,
     260,   261,  1421,   347,   257,   265,  2029,   267,   506,  1362,
     245,   246,   272,  1366,   462,   460,   758,   759,  1602,   506,
     465,   211,   257,     9,   424,   512,    12,   341,  2621,    15,
      16,   417,   267,   307,    12,  2208,  1918,    15,    16,   453,
     453,  2214,  2614,  2615,   304,   221,  2639,   417,  1675,  1402,
     162,  2224,   406,  1680,   166,   308,   188,   310,   506,  1669,
      54,    55,  1402,   323,   512,   339,  2398,   809,  2400,  2504,
     233,  2643,  1477,   417,   253,   258,   462,   253,    16,   211,
     308,  1708,   310,   397,  1437,   359,   213,   347,   402,   127,
    2662,   188,   462,   506,  2047,    33,    90,   758,   759,   395,
    2419,  2184,  2471,  2472,    42,  2474,   455,  2032,   341,   406,
    1463,  2567,   347,   107,   211,   249,   250,   466,   378,   302,
     506,  2294,     9,   117,  2297,  2298,   512,    13,    14,   452,
     257,  1974,  2704,   455,   118,   119,   120,  2310,   461,   453,
     267,   453,   512,  2025,   466,   352,    32,   354,   809,   450,
     213,  2324,  2325,   332,     9,    97,    98,   417,     1,   460,
    2085,  2480,   555,  1516,   465,  2484,  2485,   560,   512,   429,
     430,    58,  2523,   453,   453,   213,   352,   450,   453,  2150,
    1435,  1586,   417,    58,   360,  1440,  1441,   460,  1443,  1190,
    1191,  1192,   465,   352,   257,   354,   219,    40,    41,    42,
      43,    44,   462,    58,   267,  1610,  2150,    47,   391,   300,
     301,  1564,   472,   174,   352,  2388,   354,   213,   506,   257,
     347,   453,   157,    63,   159,  1188,  1189,   462,  1581,   267,
    1635,  1584,   492,    76,    77,  2160,   451,   497,  1174,  1175,
     217,   218,  1595,   281,   504,   460,   506,   450,  1890,  1622,
     465,   434,   512,   453,   157,   239,   159,   460,   451,  2432,
     237,   257,   465,   103,  1734,    69,   453,   460,  1621,   253,
     453,   267,   465,   453,  1744,  1745,   506,   512,  1748,   487,
     488,   489,   490,   506,   347,    83,   263,  2320,  1649,  2322,
     417,   178,   278,   279,  1647,   487,   488,   489,   490,   453,
     278,   279,   100,   257,  1672,  1673,  1674,   341,   257,   347,
    1678,   288,   470,  1681,  1682,   200,   302,   303,  1671,   487,
     488,   489,   490,   506,   302,   303,   213,   253,   322,   255,
     444,  1671,   326,   327,   506,   462,   179,   180,   181,   182,
     183,   184,   185,   186,   187,     9,   623,   624,   625,   626,
    2275,   347,   336,  1714,   417,   242,   401,   253,   213,   255,
     253,    66,   255,    68,   348,   402,   981,   411,   983,    64,
     257,    60,   233,   367,  1735,   257,   453,   329,  1633,   417,
     267,   402,   420,   421,   257,   512,   506,   242,   230,   383,
     384,    26,   453,   233,   108,   453,  2175,   453,   313,   462,
     240,   257,   257,   257,   202,   273,   456,    23,   439,  2442,
    2612,   251,   267,   103,    35,   189,   123,    38,   453,    83,
     456,   417,  1775,    17,    45,    46,  1779,    87,   506,  1782,
     395,   453,  1785,   352,  1689,  1690,   100,   273,   402,    57,
     403,   505,   424,   506,   263,  1700,    39,   453,   238,   512,
     403,   506,  1707,   332,   508,   439,   395,   506,   420,   257,
     347,   259,   260,   261,  2106,   317,   462,   265,   262,   256,
     311,    92,   453,    11,   512,     7,   506,   453,   395,   453,
     505,  1736,  1835,   453,   395,  1890,   367,   453,   331,  2099,
      86,    86,   347,   453,   125,   453,   433,   395,   390,    22,
     307,   344,   503,   453,   310,   395,   304,   205,   506,   506,
     501,   503,   352,   353,   385,   233,   512,   453,   506,   448,
     255,    59,   219,  2150,   123,   502,   506,   367,   505,   369,
     417,  1884,  1885,  1886,    53,   448,  1941,   512,   202,  1794,
     161,   464,   444,    26,   401,  1950,  1951,   307,   449,   213,
    1923,  1924,  1925,  1926,  1927,  1928,  1929,  1930,  1813,    97,
     411,    99,   417,   101,  1819,   349,   506,   197,   444,   190,
     447,   109,   257,   464,   506,   462,   377,   400,   337,   453,
     378,   453,   506,   470,   115,   170,   464,   188,   506,   257,
    1943,   212,   224,   257,   464,   259,   260,   261,   464,   464,
     464,   265,   464,   267,   464,   464,   464,   462,   453,   453,
     448,   310,   794,   453,   453,   470,  1969,   506,   506,   506,
     455,   404,   506,    30,   131,   512,   197,   165,  1981,  1969,
     132,   429,   430,  1986,   448,   133,   387,   134,  1999,   135,
     304,   136,   102,  2614,  2615,   266,   137,   443,   138,   499,
      49,   506,  2005,  2006,   464,   448,  2009,   512,   405,   141,
     500,     6,   447,   506,     9,   444,   447,   144,   441,   197,
     145,   147,  2643,   146,   472,   501,    31,   148,  2031,    49,
     272,   149,   197,   347,   150,   113,   151,   221,   152,   227,
     115,  2662,   450,   450,   492,  2056,  2057,  2050,   319,   497,
    1955,  2106,  2055,  2056,  2057,  2609,   504,   450,   506,   450,
    2115,  2064,   450,  2066,   378,   448,   450,   453,  1973,  2562,
     258,   110,   313,   411,  2628,   448,   198,   377,   340,   273,
     204,   224,   257,  2704,  1989,   295,  1991,   299,    83,   166,
    1995,   486,   503,   232,   129,   176,   366,   503,  2003,  2592,
    2103,   169,  2105,   417,   448,   100,   130,   448,   379,   229,
      49,   197,   229,   205,   302,   429,   430,   305,   113,   177,
     300,   392,    57,   205,   506,   453,   166,   238,   424,   273,
     511,   510,   300,   448,   253,   277,   448,   363,   296,    30,
     204,   381,   204,    17,   129,   444,   140,   366,   462,   981,
     982,   983,    49,   448,   204,  2158,   142,     8,   472,   197,
     130,   503,   204,   424,   453,   448,   503,     9,  2171,     7,
     506,  1003,  2175,   257,   505,   204,   505,   500,   492,   500,
      49,   189,   370,   497,   315,  2175,   295,   292,   463,   263,
     504,   298,   506,  2098,   331,  2487,   114,    47,   512,   438,
     204,   314,   204,   391,   475,   412,   295,   202,   362,   362,
     103,   381,    49,   238,   297,   263,   494,    96,   213,     8,
     293,    57,    49,   111,   458,   453,   338,   263,   416,   263,
     418,   263,   110,   483,   229,   338,   211,   453,   108,   341,
     222,   210,   419,  2535,   503,   120,   434,   197,  2251,   314,
    2253,   246,    49,   338,   307,   426,   322,   252,     7,   254,
     368,    46,   257,    92,   259,   260,   261,    26,   127,   201,
     265,   148,   267,   206,  1106,    75,  1108,   272,  2281,  1111,
     221,  2284,   238,  1115,   150,   177,   519,  1889,   286,   425,
     469,  2281,  1023,   497,   781,  1441,   748,  2677,  1130,  1400,
    1882,  1663,  2173,   799,  1136,  2656,   410,  2689,  2625,   304,
    2196,  1032,  2315,  2069,  2196,  1221,   788,  1747,   506,    35,
    1746,  1829,    38,  2381,  2368,  1157,  1781,  1159,   323,    45,
      46,  1238,  2335,   852,  1166,  1475,  2067,  2614,  2615,  1477,
    1502,  1173,  1174,  1175,  1176,  2335,  2349,  1848,  2249,  1181,
    2353,  1521,   347,  1524,  1186,  1187,  1188,  1189,  1190,  1191,
    1192,  1193,  2071,  1195,  1196,  1567,  2643,    45,  1290,  1574,
    1876,  1585,  2267,  2094,  1326,  1331,    92,  2106,  2113,  1902,
    1951,  1615,  1931,   378,  1362,  2662,  1360,    65,    66,    67,
      68,  2127,  1224,  2153,  1143,  2398,  1376,  2400,    24,    25,
    1950,  2318,  1950,  2673,  1662,  2323,  2422,   794,  2313,  2328,
    1553,  1471,  2146,  2416,  2146,  1349,  1248,   299,  1250,   152,
     694,  2146,   417,  1918,  2146,   270,   242,  2704,  2720,   986,
    2545,   753,  2410,   417,   429,   430,  2591,   509,   215,   449,
      66,  1938,    68,  2083,    70,   161,  1881,   712,  1577,  2616,
     166,    -1,  2357,    -1,    -1,    -1,    -1,  2362,   558,    -1,
    2471,  2472,    -1,    -1,  2467,  2468,    -1,   462,  2471,  2472,
      -1,  2474,    -1,    -1,   190,    -1,    -1,   472,   104,   105,
     106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   212,   492,    -1,  1331,
      -1,    -1,   497,    -1,    -1,    -1,    -1,    -1,    -1,   504,
      -1,   506,    -1,    -1,    -1,    -1,  2421,   512,    -1,    -1,
      -1,  1353,    -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,
     156,  2534,   210,    -1,    -1,    -1,    -1,   163,    -1,    -1,
     166,    -1,    -1,    -1,    -1,    -1,    -1,  1379,  2453,  2454,
     266,    -1,    -1,  2564,    -1,    -1,    -1,    -1,   236,    -1,
      -1,    -1,    -1,    -1,    -1,  2470,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   253,    -1,   255,    -1,    -1,
      -1,  2486,   969,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2596,   981,   982,   983,    -1,    -1,    -1,
      -1,    -1,    -1,   319,    -1,    -1,  2511,    -1,   286,  2620,
      -1,  2516,  2517,  2624,    -1,    -1,  1003,    -1,    -1,  1451,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   253,   306,   255,
      -1,  2536,    -1,    -1,  2637,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     4,    -1,    -1,   272,    -1,    -1,    -1,
     328,    -1,    -1,    -1,    -1,    -1,   334,  1489,    19,    -1,
      -1,  2566,    -1,   379,  2569,  2570,    -1,    -1,    29,    -1,
    2673,    -1,    -1,    -1,    -1,    -1,   392,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2697,    -1,    -1,  2708,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    -1,  2611,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1108,    -1,    -1,    -1,    -1,  1113,    -1,   406,    -1,
      -1,    -1,    -1,  1120,    -1,    -1,    -1,   415,  1570,    -1,
      -1,  1128,    -1,    -1,    -1,    -1,  1578,     1,    -1,     3,
      -1,     5,    -1,    -1,   432,  1142,    10,    -1,    -1,   475,
      -1,    -1,  1594,    -1,    18,    -1,    -1,    -1,    -1,    -1,
      -1,  1603,    -1,    -1,    -1,   453,    -1,    -1,    -1,  1166,
      -1,    -1,  1614,    -1,    -1,    -1,  1173,  1174,  1175,  1176,
      -1,    -1,    -1,    -1,  1181,    -1,   474,    51,    52,  1186,
    1187,  1188,  1189,  1190,  1191,  1192,  1193,    61,  1195,  1196,
    1642,    -1,    -1,    -1,    -1,   493,    -1,    -1,    72,   445,
    1652,    75,   500,   501,    -1,    32,    -1,    -1,    35,    -1,
      -1,    38,    -1,    -1,    -1,    89,    -1,    -1,  1225,    46,
      -1,    -1,    -1,  1675,    -1,    -1,    -1,    -1,  1680,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,
     221,    -1,    -1,    -1,    -1,    -1,   120,    -1,   122,   495,
    1257,    -1,    -1,    -1,    -1,    -1,  1708,    -1,    -1,    -1,
     506,    -1,    -1,    -1,    -1,    92,    -1,    -1,  1720,    -1,
      -1,  1723,   253,    -1,    -1,    -1,    -1,    -1,    -1,   153,
      -1,    -1,   263,    -1,   111,    -1,    -1,  1294,    -1,    -1,
     164,    -1,    -1,    -1,    -1,   169,    -1,    -1,  1305,    -1,
      -1,    -1,    -1,    -1,    -1,  1757,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1773,   196,    -1,    -1,    -1,    -1,    -1,    -1,   203,
      -1,    -1,   206,   207,    -1,   316,    -1,    -1,    -1,    -1,
     321,    -1,   216,    -1,    -1,    -1,  1353,    -1,    -1,   223,
      -1,   225,    -1,    -1,   228,  1362,    -1,    -1,    -1,  1366,
      -1,    -1,    -1,   190,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   352,   199,    -1,    -1,    -1,    -1,    -1,    -1,   360,
      -1,    -1,    -1,    -1,    -1,   212,    -1,    -1,    -1,    -1,
      -1,    -1,   373,    -1,    -1,    -1,   270,    -1,    -1,    -1,
     274,    -1,   276,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   286,    -1,    -1,    -1,    -1,   244,    -1,    -1,
      -1,   402,    -1,    -1,   405,    -1,  1878,  1879,    -1,    -1,
      -1,    -1,   413,    -1,    -1,    -1,    -1,   264,   312,   266,
      -1,    -1,    -1,   424,  1451,    -1,    -1,    -1,    -1,    -1,
      -1,   325,    -1,    -1,    -1,  1907,  1463,    -1,    -1,    -1,
      -1,   288,   289,  1915,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   453,    -1,    -1,   456,   350,   351,    -1,    -1,
      -1,    -1,  1489,    -1,    -1,    -1,    -1,   361,    -1,    -1,
    1942,    -1,   319,    -1,    -1,    -1,    -1,  1949,  1950,    -1,
      -1,   375,   376,    -1,    -1,    -1,    -1,    -1,   382,  1516,
      -1,    -1,   386,    -1,    -1,    -1,    -1,    -1,  1970,   346,
     394,    -1,    -1,    -1,    -1,     1,    -1,     3,  1980,     5,
     404,    -1,    -1,    -1,    10,    -1,    -1,    -1,    -1,   413,
      -1,    -1,    18,    -1,    -1,   372,    -1,    -1,   422,    -1,
      -1,    -1,   379,   427,   428,    -1,    -1,   431,    -1,   433,
      -1,    -1,    -1,  1570,    -1,   392,   440,    -1,    -1,   396,
      -1,  1578,    -1,    -1,  1581,    51,    52,  1584,    -1,   453,
    2032,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,   471,    -1,    75,
      -1,    -1,    -1,   477,    -1,    -1,    -1,    -1,   482,    -1,
     437,    -1,    -1,    89,  1621,    -1,    -1,    -1,    -1,   446,
      -1,    -1,    -1,    -1,  2076,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2085,  2086,   509,   112,    -1,    -1,    -1,
    1647,    -1,  2094,    -1,   120,  1652,   122,    -1,   475,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   485,    -1,
      -1,  2113,    -1,    -1,   491,    -1,    -1,    -1,  1675,    -1,
      -1,    -1,    -1,  1680,    83,    -1,    -1,   153,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   164,    -1,
    2142,   100,    -1,   169,    -1,    -1,    -1,    -1,  2150,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2160,    -1,
      -1,    -1,  2164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     196,    -1,    -1,    -1,    -1,    -1,    -1,   203,    -1,    -1,
     206,   207,    -1,    -1,  2186,    -1,    -1,    -1,    -1,    -1,
     216,    -1,    -1,  2195,    -1,    -1,    -1,   223,    -1,   225,
    1757,    -1,   228,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1775,    -1,
      -1,    -1,  1779,    -1,    -1,  1782,    -1,    -1,  2230,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   202,   270,    -1,    -1,    -1,   274,    -1,
     276,    -1,    -1,    -1,   213,    -1,    -1,    -1,    -1,    -1,
     286,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2275,    -1,    -1,    -1,    -1,  1835,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   312,   246,    -1,    -1,
      -1,    -1,    -1,   252,    -1,   254,    -1,    -1,   257,   325,
     259,   260,   261,    -1,    -1,    -1,   265,    -1,   267,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1878,  1879,    -1,   350,   351,    -1,  1884,  1885,  1886,
      -1,    -1,    -1,    -1,    -1,   361,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   304,    -1,    -1,    -1,   375,
     376,    -1,    -1,    -1,    83,    -1,   382,    -1,  1915,    -1,
     386,    -1,    -1,    -1,   323,    -1,    -1,    -1,   394,    -1,
      -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,   404,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1943,   413,   347,  2391,
      -1,    -1,    -1,    -1,    -1,    -1,   422,    -1,    -1,    -1,
      -1,   427,   428,    -1,    -1,   431,    -1,   433,    -1,    -1,
      -1,    -1,    -1,    -1,   440,   374,    -1,    -1,    -1,   378,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   453,    -1,    -1,
      -1,    -1,  2434,    -1,    -1,    -1,    -1,    -1,    -1,  2441,
      -1,    -1,  2444,    -1,    -1,   471,    -1,    -1,    -1,    -1,
      -1,   477,    -1,    -1,    -1,    -1,   482,    -1,   417,    -1,
      -1,    -1,   191,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     429,   430,    -1,   202,  2031,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   509,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2493,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   462,    -1,  2507,    -1,  2064,    -1,  2066,
      -1,    -1,    -1,   472,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2523,    -1,    -1,    -1,    -1,    -1,    -1,   257,  2086,
     259,   260,   261,   492,    -1,    -1,   265,  2094,   497,    -1,
       1,    -1,     3,    -1,     5,   504,  2103,   506,  2105,    10,
      -1,    -1,    -1,   512,    -1,    -1,    -1,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2571,
      -1,    -1,    -1,    -1,    -1,   304,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52,    -1,  2150,    -1,    -1,    -1,    -1,    -1,    -1,
      61,  2158,    -1,    -1,    -1,    -1,    -1,  2164,    -1,    -1,
      -1,    72,  2614,  2615,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     6,    -1,    -1,     9,    -1,    -1,    89,  2631,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2643,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   378,
      -1,   112,    -1,  2655,  2656,    -1,    -1,    -1,    -1,   120,
    2662,   122,    -1,    -1,    -1,    -1,    -1,    -1,   129,    -1,
     131,   132,   133,   134,   135,   136,   137,   138,    -1,   140,
     141,   142,    -1,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,    -1,  2251,    -1,  2253,    -1,  2700,    83,
     429,   430,  2704,   164,    -1,    -1,    -1,    -1,   169,    -1,
      -1,    -1,   441,    -1,    -1,    -1,   100,    -1,    -1,    -1,
      83,    -1,    -1,    -1,    -1,    -1,    -1,  2284,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   196,    -1,   100,    -1,    -1,
      -1,    -1,   203,   472,    -1,   206,   207,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   483,   216,    -1,    -1,  2315,    -1,
      -1,    -1,   223,   492,   225,    -1,    -1,   228,   497,   153,
      -1,    -1,   501,    -1,    -1,   504,   505,   506,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   270,
      -1,    -1,    -1,   274,    -1,   276,    -1,    -1,   202,    -1,
      -1,    -1,    -1,    -1,    -1,   286,    -1,    -1,    -1,   213,
      -1,   292,   293,    -1,   295,   296,   297,   298,    -1,   202,
      -1,  2398,    -1,  2400,    -1,    -1,    -1,    -1,    -1,    -1,
     213,   312,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
      -1,     5,   246,    -1,   325,    -1,    10,    -1,   252,    -1,
     254,    -1,    -1,   257,    18,   259,   260,   261,    -1,    -1,
      -1,   265,    -1,   267,    -1,    -1,    -1,    -1,   272,   350,
     351,    -1,    -1,    -1,   257,    -1,   259,   260,   261,    -1,
     361,    -1,   265,    -1,   267,    -1,    -1,    51,    52,    -1,
      -1,    -1,    -1,    -1,   375,   376,    -1,    61,    -1,    -1,
     304,   382,    -1,    -1,    -1,   386,    -1,    -1,    72,    -1,
      -1,    75,    -1,   394,    -1,    -1,    -1,    -1,    -1,   323,
      -1,   304,    -1,   404,    -1,    89,    -1,    -1,    -1,    -1,
      -1,    -1,   413,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   422,    -1,   347,    -1,    -1,   427,   428,   112,    -1,
     431,    -1,   433,    -1,    -1,    -1,   120,    -1,   122,   440,
      -1,    -1,    -1,    -1,   347,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   453,    -1,   378,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,
     471,    -1,    -1,    -1,    -1,   378,   477,    -1,    -1,    -1,
     164,   482,    -1,    -1,    -1,   169,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   417,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   503,    -1,    -1,   429,   430,    -1,   509,    -1,
      -1,    -1,   196,    -1,   417,    -1,    -1,  2614,  2615,   203,
      -1,    -1,   206,   207,    -1,    -1,   429,   430,    -1,    -1,
      -1,   455,   216,    -1,    -1,    -1,    -1,    83,   462,   223,
      -1,   225,   466,    -1,   228,    -1,  2643,    -1,   472,    -1,
      -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,   462,
      -1,    -1,    -1,    -1,    -1,  2662,    -1,    -1,   492,   472,
      -1,    -1,    -1,   497,    -1,    -1,    -1,    -1,    -1,    -1,
     504,    -1,   506,    -1,    -1,    -1,   270,    -1,   512,   492,
     274,    -1,   276,    -1,   497,    -1,    -1,    -1,    -1,    -1,
      -1,   504,   286,   506,    -1,    -1,    -1,  2704,    -1,   512,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   312,    -1,
      -1,     3,    -1,     5,    -1,    -1,    -1,    -1,    10,    -1,
      -1,   325,    -1,    -1,    -1,   191,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   202,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   350,   351,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   361,    -1,    51,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      -1,   375,   376,    -1,    -1,    -1,    -1,    -1,   382,    -1,
      72,    -1,   386,    75,    -1,    -1,    -1,    -1,    -1,    -1,
     394,   257,    -1,   259,   260,   261,    -1,    89,    -1,   265,
     404,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   413,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   422,    -1,
     112,    -1,    -1,   427,   428,    -1,    -1,   431,   120,   433,
     122,    -1,    -1,    -1,    -1,    -1,   440,   129,   304,   131,
     132,   133,   134,   135,   136,   137,   138,    -1,   140,   141,
     142,    -1,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,    -1,    -1,    -1,    -1,    -1,   471,    -1,    -1,
      -1,    -1,   164,   477,    -1,    -1,    -1,   169,   482,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   196,   509,    -1,    -1,    -1,    -1,
      -1,   203,   378,    -1,   206,   207,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   216,    -1,    -1,    -1,    -1,    -1,
      -1,   223,    -1,   225,    -1,    -1,   228,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     6,    -1,    -1,
       9,    -1,    -1,    12,    13,    14,    -1,    -1,    -1,    -1,
      -1,    20,    -1,   429,   430,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   441,    -1,    -1,   270,    -1,
      -1,    -1,   274,    -1,   276,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   286,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   472,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   483,    -1,    -1,
     312,    -1,    -1,    -1,    83,    -1,   492,    -1,    -1,    -1,
      -1,   497,    -1,   325,    -1,   501,    -1,    -1,   504,   505,
     506,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   350,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   361,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     6,    -1,   376,     9,    -1,    -1,    -1,    -1,
     382,    -1,    -1,    -1,   386,    -1,    -1,    -1,    -1,    -1,
      -1,   160,   394,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   170,   404,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   413,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,
     422,    -1,    -1,    -1,    -1,   427,   428,    -1,    -1,   431,
      -1,   433,    -1,   202,    -1,    -1,    -1,    -1,   440,   208,
     209,    -1,    -1,    -1,   213,    -1,    -1,    -1,    -1,    83,
      -1,   453,    -1,    -1,    88,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   233,    -1,   100,    -1,    -1,   471,
      -1,    -1,    -1,    -1,    -1,   477,    -1,   246,   247,   248,
     482,    -1,    -1,   252,    -1,   254,    -1,    -1,   257,    -1,
     259,   260,   261,    -1,    -1,    -1,   265,    -1,   267,    -1,
      -1,    -1,    -1,   272,    -1,     6,    -1,   509,     9,    -1,
      -1,    12,    13,    14,    -1,    -1,   285,    -1,    -1,    20,
      -1,    -1,   291,    -1,    -1,   294,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   302,    -1,   304,    -1,    -1,    -1,    -1,
     309,    -1,    -1,    -1,    -1,   314,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   323,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   333,    -1,    -1,    -1,   202,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   347,   213,
      -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   378,
      -1,    -1,   246,    -1,    -1,    -1,    -1,    -1,   252,    -1,
     254,    -1,    -1,   257,    -1,   259,   260,   261,    -1,    -1,
      -1,   265,    -1,   267,    -1,    -1,    -1,    -1,   272,    -1,
       6,    -1,    -1,     9,    -1,    -1,    -1,    -1,   417,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,
     429,   430,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   170,
     304,    -1,    -1,    -1,    -1,   309,    -1,    -1,    -1,    -1,
      -1,   450,    -1,   452,    -1,   454,    -1,    -1,   457,   323,
     459,   460,   461,   462,    -1,   464,   465,    -1,    -1,    -1,
      -1,   202,    -1,   472,    -1,    -1,    -1,   208,   209,    -1,
      -1,    -1,   213,   347,    -1,    -1,    -1,    83,    -1,    -1,
      -1,    -1,    -1,   492,   358,    -1,    -1,    -1,   497,    95,
      -1,    -1,    -1,    -1,   100,   504,    -1,   506,    -1,    -1,
      -1,    -1,    -1,   512,   378,   246,   247,   248,    -1,    -1,
      -1,   252,    -1,   254,    -1,    -1,   257,    -1,   259,   260,
     261,    -1,    -1,    -1,   265,    -1,   267,    -1,    -1,    -1,
      -1,   272,    -1,    -1,    -1,    -1,    -1,   411,    -1,    -1,
      -1,    -1,     6,   417,   285,     9,    -1,    -1,    -1,    -1,
     291,    -1,    -1,   294,    -1,   429,   430,    -1,    -1,    -1,
      -1,   302,    -1,   304,    -1,    -1,    -1,    -1,   309,    -1,
      -1,    -1,    -1,   314,    -1,    -1,    -1,    -1,    -1,    -1,
       6,    -1,   323,     9,    -1,    -1,    -1,    -1,   462,    -1,
      -1,    -1,   333,    -1,    -1,    -1,   202,    -1,   472,    -1,
      -1,    -1,    -1,    -1,   478,    -1,   347,   213,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   492,    83,
      -1,    -1,    -1,   497,    -1,    -1,   500,    -1,    -1,    -1,
     504,    -1,   506,    -1,    -1,    -1,   100,   378,   512,    -1,
     246,    -1,    -1,    -1,    -1,    -1,   252,    -1,   254,   113,
      -1,   257,    -1,   259,   260,   261,    -1,    83,    -1,   265,
      -1,   267,    -1,    -1,    -1,     6,   272,    -1,     9,    95,
      -1,    -1,    -1,    -1,   100,    -1,   417,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   429,   430,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   304,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   450,
      -1,   452,    -1,   454,    -1,    -1,   457,   323,   459,   460,
     461,   462,    -1,   464,   465,    -1,    -1,    -1,    -1,    -1,
      -1,   472,    -1,    -1,    -1,    -1,    -1,    -1,   202,    -1,
      -1,   347,    83,    -1,    -1,    -1,    -1,    -1,    -1,   213,
      -1,   492,    -1,    -1,    -1,    -1,   497,    -1,    -1,   100,
      -1,    -1,    -1,   504,    -1,   506,    -1,    -1,    -1,    -1,
      -1,   512,   378,    -1,    -1,    -1,   202,    -1,    -1,    -1,
      -1,    -1,   246,    -1,    -1,    -1,    -1,   213,   252,    -1,
     254,    -1,    -1,   257,    -1,   259,   260,   261,    -1,    -1,
      -1,   265,    -1,   267,    -1,    -1,    -1,    -1,   272,    -1,
      -1,   417,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     246,    -1,    -1,   429,   430,    -1,   252,    -1,   254,    -1,
      -1,   257,    -1,   259,   260,   261,    -1,    -1,    -1,   265,
     304,   267,    -1,    -1,    -1,     6,   272,    -1,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   462,    -1,    -1,   323,
      -1,   202,    -1,    -1,    -1,    -1,   472,    -1,    -1,    -1,
      -1,    -1,   213,    -1,     6,    -1,    -1,     9,   304,    -1,
      -1,    -1,    -1,   347,    -1,    -1,   492,    -1,    -1,    -1,
      -1,   497,    -1,    -1,    -1,    -1,    -1,   323,   504,    -1,
     506,    -1,    -1,    -1,    -1,   246,   512,    -1,    -1,    -1,
      -1,   252,    -1,   254,   378,    -1,   257,    -1,   259,   260,
     261,   347,    83,    -1,   265,    -1,   267,    -1,    -1,    -1,
      -1,   272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    83,   378,   417,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   304,    -1,   429,   430,    -1,   100,    -1,
      -1,    -1,    -1,    -1,     6,    -1,    -1,     9,    -1,    -1,
      -1,    -1,   323,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   417,    -1,    -1,    -1,    -1,     6,    -1,   462,     9,
      -1,    -1,    -1,   429,   430,   166,   347,    -1,   472,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   492,    -1,
      -1,    -1,    -1,   497,    -1,    -1,   462,   378,    -1,    -1,
     504,   202,   506,    -1,    -1,    -1,   472,    -1,   512,    -1,
      -1,    83,   213,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   197,   492,    -1,   100,    -1,
     202,   497,    -1,    83,    -1,    -1,   417,    -1,   504,    -1,
     506,   213,    -1,    -1,    -1,   246,   512,    -1,   429,   430,
     100,   252,    -1,   254,    -1,    -1,   257,    -1,   259,   260,
     261,    -1,    -1,    -1,   265,    -1,   267,   448,    -1,    -1,
      -1,   272,    -1,    -1,   246,    -1,     6,    -1,    -1,     9,
     252,   462,   254,    -1,    -1,   257,    -1,   259,   260,   261,
      -1,   472,    -1,   265,    -1,   267,    -1,    -1,    -1,    -1,
     272,    -1,    -1,   304,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   492,    -1,    -1,    -1,    -1,   497,    -1,    -1,    -1,
      -1,    -1,   323,   504,    -1,   506,    -1,    -1,    -1,    -1,
     202,   512,   304,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   213,    -1,    -1,    -1,    -1,   347,    -1,    -1,    -1,
      -1,   323,   202,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   213,    -1,    -1,    -1,    -1,    -1,    -1,
     100,    -1,    -1,    -1,   246,   347,    -1,   378,    -1,    -1,
     252,    -1,   254,    -1,    -1,   257,    -1,   259,   260,   261,
      -1,    -1,    -1,   265,    -1,   267,   246,    -1,    -1,    -1,
     272,    -1,   252,    -1,   254,    -1,   378,   257,    -1,   259,
     260,   261,    -1,    -1,    -1,   265,   417,   267,    -1,    -1,
      -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,   429,   430,
      -1,    -1,   304,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   417,    -1,    -1,    -1,    -1,
      -1,   323,    -1,    -1,   304,    -1,     6,   429,   430,     9,
      -1,   462,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   472,   202,   323,    -1,   347,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   213,    -1,    -1,    -1,    -1,    -1,    -1,
     462,   492,    -1,    -1,    -1,    -1,   497,   347,    -1,    -1,
     472,    -1,    -1,   504,    -1,   506,   378,    -1,    -1,    -1,
      -1,   512,    -1,    -1,    -1,    -1,   246,    -1,    -1,    -1,
     492,    -1,   252,    -1,   254,   497,    -1,   257,   378,   259,
     260,   261,   504,    83,   506,   265,    -1,   267,    -1,   411,
     512,    -1,   272,    -1,    -1,   417,    -1,    -1,    -1,    -1,
     100,    -1,    -1,    -1,    -1,    -1,    -1,   429,   430,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   417,    -1,    -1,
      -1,    -1,    -1,    -1,   304,    -1,    -1,    -1,    -1,   429,
     430,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     462,    -1,    -1,   323,    -1,    -1,    -1,    -1,    -1,    -1,
     472,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   462,    -1,    -1,    -1,    -1,   347,    -1,    -1,
     492,    -1,   472,    -1,    -1,   497,    -1,    -1,    -1,    -1,
      -1,    -1,   504,    -1,   506,    -1,    -1,    -1,    -1,    -1,
     512,    -1,   492,    -1,    -1,    -1,    -1,   497,   378,    -1,
      -1,    -1,   202,    -1,   504,    -1,   506,    -1,    -1,    -1,
      -1,    -1,   512,   213,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   417,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   246,    -1,    -1,   429,
     430,    -1,   252,    -1,   254,    -1,    -1,   257,    -1,   259,
     260,   261,    -1,    -1,    -1,   265,    -1,   267,    -1,    -1,
      -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   462,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   472,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   304,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   492,    -1,    -1,    -1,    -1,   497,    -1,    -1,
      -1,    -1,    -1,   323,   504,    -1,   506,    -1,    -1,    -1,
      -1,    -1,   512,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,   347,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,   378,    35,
      -1,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      -1,    67,    -1,    -1,    -1,    -1,    -1,   417,    74,    -1,
      76,    77,    78,    79,    80,    81,    82,    -1,    -1,   429,
     430,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   462,    -1,   120,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   472,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   492,    -1,    -1,    -1,    -1,   497,    -1,    -1,
      -1,    -1,    -1,    -1,   504,   161,   506,    -1,    -1,    -1,
      -1,    -1,   512,    -1,    -1,    -1,    -1,    -1,    83,    -1,
     176,    -1,    -1,   179,   180,   181,   182,   183,     1,    -1,
     186,   187,    -1,    -1,   190,   100,    -1,    -1,    -1,    -1,
      -1,   197,    -1,   199,    -1,    -1,    -1,    -1,    21,   205,
      -1,    -1,    -1,    -1,    -1,    -1,   212,    -1,    -1,    -1,
      -1,    -1,    -1,    36,   220,    -1,    39,    40,    41,    42,
      43,    44,    45,    -1,    -1,    -1,    -1,   233,    -1,    -1,
     236,    -1,    -1,    -1,    -1,    -1,   242,    -1,   244,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   253,    -1,    -1,
      -1,    74,    -1,    76,    77,    78,    79,    80,    81,    82,
     266,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   278,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   202,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,   213,    -1,
     306,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   319,   320,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   328,    -1,    -1,   331,    -1,    -1,    -1,    -1,
      -1,   246,    -1,    -1,    -1,    -1,    -1,   252,   344,   254,
     346,    -1,   257,    -1,   259,   260,   261,    -1,    -1,   172,
     265,    -1,   267,   176,    -1,    -1,   179,   180,   181,   182,
     183,    -1,    -1,   186,   187,    -1,   372,    -1,    -1,    -1,
      -1,    -1,    -1,   379,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   205,    -1,    -1,    -1,    -1,    -1,    -1,   304,
     396,    -1,    -1,    -1,    -1,    -1,    -1,   220,    -1,    -1,
     406,    -1,   408,   409,   410,    -1,    -1,    -1,   323,    -1,
     233,    -1,    -1,   236,    -1,    -1,    -1,    -1,    -1,   242,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   347,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   448,    -1,    -1,    -1,    -1,   453,    -1,    -1,
      -1,    -1,   458,    -1,    -1,   278,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   378,   470,    -1,    -1,    -1,    -1,   475,
      -1,    -1,    -1,   479,   480,   481,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   306,    -1,    -1,    -1,   493,    -1,    -1,
      -1,    -1,    -1,   499,   500,    -1,    -1,   320,    -1,    -1,
     506,    -1,   417,    -1,    -1,   328,    -1,    21,   331,    -1,
      -1,    -1,    -1,    -1,   429,   430,    -1,    -1,    -1,    -1,
      -1,   344,    36,    -1,    -1,    39,    40,    41,    42,    43,
      44,    45,    -1,   356,    -1,   450,    -1,    -1,    -1,    -1,
      -1,   364,    -1,    -1,    -1,   460,    -1,   462,    -1,   464,
     465,    -1,    -1,    -1,    -1,    -1,    -1,   472,    -1,    -1,
      74,    -1,    76,    77,    78,    79,    80,    81,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   492,    -1,    -1,
      -1,    -1,   497,   406,    -1,   408,   409,   410,    -1,   504,
      -1,   506,    -1,    -1,    -1,    -1,    -1,   512,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,    -1,
      -1,    -1,   435,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     453,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   470,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   479,   480,   481,    -1,
      -1,    -1,    -1,    -1,    -1,   179,   180,   181,   182,   183,
     493,    -1,   186,   187,    -1,    -1,    -1,   500,    -1,    -1,
      -1,    -1,    -1,   506,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   220,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   233,
      -1,    -1,   236,    -1,    32,    -1,    -1,    35,   242,    -1,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    67,
      -1,    -1,    -1,    -1,   278,    -1,    74,    -1,    76,    77,
      78,    79,    80,    81,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   306,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   320,    -1,    -1,    -1,
      -1,    -1,   120,    -1,   328,    -1,    -1,   331,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     344,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   356,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     364,    -1,    -1,   161,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   179,   180,   181,   182,   183,    -1,    -1,   186,   187,
      -1,    -1,   190,    -1,    -1,    83,    -1,    -1,    -1,   197,
      -1,   199,   406,    -1,   408,   409,   410,   205,    -1,    -1,
      -1,    -1,   100,    -1,   212,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   220,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   435,    -1,    -1,    -1,   233,    -1,    -1,   236,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   244,    -1,    -1,   453,
      -1,    -1,    -1,    -1,    -1,   253,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   470,    -1,   266,    -1,
      -1,    -1,    -1,    -1,    -1,   479,   480,   481,    -1,    -1,
     278,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   493,
      -1,    -1,    -1,    -1,    -1,    -1,   500,    39,    40,    41,
      42,    43,    44,    -1,    -1,    -1,    -1,    -1,   306,    -1,
      -1,    -1,    -1,    -1,   202,    -1,    -1,    -1,    -1,    -1,
      -1,   319,   320,    -1,    -1,   213,    -1,    -1,    -1,    -1,
     328,    -1,    74,   331,    76,    77,    78,    79,    80,    81,
      82,    -1,    83,    -1,    -1,    -1,   344,    -1,   346,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   246,   100,
      -1,    -1,    -1,    -1,   252,    -1,   254,    -1,    -1,   257,
      -1,   259,   260,   261,   372,    -1,    -1,   265,   120,   267,
      -1,   379,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   396,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   406,    -1,
     408,   409,   410,    -1,    -1,    -1,   304,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   323,    -1,   179,   180,   181,
     182,   183,    -1,    -1,   186,   187,    -1,    -1,    -1,    -1,
     448,    83,    -1,    -1,    -1,   453,    -1,    -1,    -1,   347,
     458,   202,    -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,
      -1,    -1,   213,    -1,    -1,    -1,    -1,   475,   220,    -1,
      83,   479,   480,   481,    -1,    -1,    -1,    -1,    -1,    -1,
     378,    -1,    -1,    -1,    -1,   493,    -1,   100,    -1,    -1,
      -1,   499,   500,    -1,    -1,   246,    -1,    -1,    -1,    -1,
      -1,   252,    -1,   254,    -1,    -1,   257,    -1,   259,   260,
     261,    -1,    -1,    -1,   265,    -1,   267,    -1,    -1,   417,
      -1,    -1,    -1,    -1,    -1,    -1,   278,    -1,    -1,    -1,
      -1,   429,   430,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   450,   304,    -1,    -1,    -1,    -1,    -1,    -1,
     202,    -1,   460,    -1,   462,    -1,   464,   465,   320,    -1,
      -1,   213,   323,    -1,   472,    -1,    -1,    -1,    -1,   331,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   202,
      -1,    -1,   344,    -1,   492,    -1,   347,    -1,    -1,   497,
     213,    -1,    -1,    -1,   246,    -1,   504,    83,   506,    -1,
     252,    -1,   254,    -1,   512,   257,    -1,   259,   260,   261,
      -1,    -1,    -1,   265,   100,   267,    -1,   378,    -1,    -1,
      -1,    -1,    -1,   246,    -1,    -1,    -1,    -1,    -1,   252,
      -1,   254,    -1,    -1,   257,    -1,   259,   260,   261,    -1,
      -1,    -1,   265,    -1,   267,    -1,   408,   409,   410,    -1,
      -1,    -1,   304,    -1,    -1,    -1,   417,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   429,   430,
      -1,   323,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   304,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   450,
      -1,    -1,    -1,    -1,    -1,   347,    -1,    -1,    -1,   460,
     323,   462,    -1,   464,   465,    -1,    -1,    -1,    -1,    -1,
      -1,   472,    -1,    -1,    -1,    -1,   202,   479,   480,   481,
      -1,    -1,    -1,    -1,   347,    -1,   378,   213,    -1,    -1,
      -1,   492,    -1,    -1,    -1,    -1,   497,    -1,    -1,    -1,
      -1,    -1,    -1,   504,    -1,   506,    -1,    -1,    -1,    -1,
      -1,   512,    -1,    -1,    -1,   378,    -1,    -1,    -1,    -1,
     246,    -1,    -1,    -1,    -1,   417,   252,    -1,   254,    -1,
      -1,   257,    -1,   259,   260,   261,    -1,   429,   430,   265,
      -1,   267,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   417,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   429,   430,   460,    -1,
     462,    -1,   464,   465,    -1,    -1,    -1,    -1,   304,    -1,
     472,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   323,    -1,   462,
     492,   464,    -1,    -1,    -1,   497,    -1,    -1,    -1,   472,
      -1,    -1,   504,    -1,   506,    -1,    -1,    -1,    -1,    -1,
     512,   347,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   492,
      -1,    -1,    -1,    -1,   497,    -1,    -1,    -1,    -1,    -1,
      -1,   504,    -1,   506,    -1,    -1,    -1,    -1,    -1,   512,
      -1,    -1,   378,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   417,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   429,   430,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   462,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   472,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   492,    -1,    -1,    -1,
      -1,   497,    -1,    -1,    -1,    -1,    -1,    -1,   504,    -1,
     506,    -1,    -1,    -1,    -1,    -1,   512
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   515,   516,     0,   201,   342,   517,   518,   519,   520,
     521,   522,   524,   534,   536,   453,   453,   519,   154,   530,
     542,   530,   530,   257,   343,   537,   537,   123,    85,   543,
     523,   525,   534,   139,   528,   529,    26,   538,   538,   453,
     395,   544,   143,   523,   526,   527,   530,   537,   257,   453,
     535,   453,    11,    59,    97,    99,   101,   109,   165,   227,
     258,   302,   305,   370,   391,   416,   418,   434,   506,   545,
     546,   550,   561,   569,   570,   571,   572,   573,   578,   587,
     589,   594,   597,   598,   600,   601,   602,   603,   604,   605,
     606,   537,   525,   453,   233,   539,  1274,   506,  1194,  1194,
     424,   406,  1292,  1274,  1274,  1274,   395,  1194,   406,   453,
     453,  1274,   453,   453,    58,  1262,   574,     1,   453,   572,
     219,   588,   174,   607,   453,   527,   453,    73,   172,   355,
     458,   540,   541,   579,  1274,  1274,  1274,   506,  1189,  1220,
      69,  1189,   453,  1274,  1274,   551,   562,  1189,   547,   506,
     590,   591,   592,  1195,   257,   308,   310,   575,   577,  1039,
    1223,  1274,   453,   506,   453,   609,   541,   341,  1289,  1274,
     213,   257,   267,   347,   417,   462,   512,   595,   596,  1226,
    1189,   257,   219,   307,  1312,   257,   470,    57,    64,   269,
     341,   397,   402,   506,   552,   553,   554,   555,   556,   557,
     558,   560,  1261,  1322,   200,   563,   564,   565,   548,   560,
     591,    22,   233,  1195,  1275,  1039,   233,   424,  1286,  1274,
      97,  1194,   235,   398,   608,   610,    28,   127,   213,   257,
     267,   281,   347,   417,   420,   421,   512,   580,   581,   582,
     585,   596,   444,   505,   599,  1305,  1220,   401,   402,   411,
      64,  1274,   453,   554,   453,   506,   553,    60,  1274,     9,
     371,   498,   566,   568,     1,   453,   565,   549,  1305,   257,
     593,  1224,  1286,   233,  1194,  1194,   576,   577,   453,     1,
     291,   313,  1247,   275,   389,   642,   643,   644,   645,   647,
     582,    17,   444,  1226,   329,  1274,   402,  1223,   453,  1274,
     506,  1190,   230,    26,   567,   230,   371,   453,   453,   108,
    1224,  1194,   453,   313,  1194,   648,   352,   413,   414,   646,
     531,     1,   453,   644,   583,   585,   257,  1223,   258,   436,
     496,   559,  1190,   257,   273,   611,   456,  1265,    23,  1256,
     103,   652,   453,   584,   585,    58,   507,  1316,   612,   439,
    1298,   189,  1267,   123,   456,   653,    17,     4,    19,    29,
      64,   221,   253,   316,   321,   352,   360,   373,   402,   405,
     413,   453,   456,   613,   614,   620,   622,   624,   625,   626,
     627,   628,   631,   632,   633,   634,   635,   637,   638,   640,
    1290,  1306,    87,  1263,   506,  1179,  1180,   453,   395,   654,
     585,   273,  1281,   352,  1290,   448,   499,  1302,   402,   403,
    1274,  1261,   114,   238,  1276,  1276,   288,   639,  1223,  1305,
     424,   263,    39,  1259,  1274,   649,   650,  1180,  1180,   453,
     173,   393,   532,   655,   656,   658,  1274,  1276,   126,   172,
     617,   360,   632,  1274,  1274,  1274,  1274,  1256,     9,   288,
     350,   641,  1274,  1281,   403,   506,   650,   332,   651,   508,
     683,   685,   686,     1,  1180,   126,   348,   403,   621,  1274,
     118,   119,   120,   239,   253,   336,   348,   439,   615,   616,
     257,  1189,  1193,   420,   636,  1189,  1189,   317,  1287,  1287,
     311,  1189,  1274,  1223,   395,   262,   739,   687,   688,   690,
     700,  1239,   453,   657,   636,   257,   619,  1220,   619,     7,
     619,   619,   257,   618,  1220,   415,   454,    33,   168,   268,
     629,   453,   395,   256,   741,   453,   688,   453,     1,   176,
     506,   691,   692,   506,   659,   125,   505,  1241,  1321,  1265,
    1274,  1188,  1189,   505,   630,   630,   684,   453,   395,   367,
     743,   453,   453,   689,    86,    47,    63,   103,   240,   251,
     352,   353,   367,   369,   453,   500,   660,   661,   663,   667,
     668,   671,   672,   678,   679,   680,   681,  1274,   125,   433,
     623,  1188,  1189,   263,   386,   685,   740,   453,   395,   390,
     788,   702,   693,  1274,  1263,  1274,   352,   354,  1317,  1317,
    1274,  1263,  1274,  1281,  1274,    22,  1255,   307,   682,  1194,
     172,   205,   503,   310,   685,   742,   453,   395,   533,    21,
      36,    39,    40,    41,    42,    43,    44,    45,    74,    76,
      77,    78,    79,    80,    81,    82,   120,   179,   180,   181,
     182,   183,   186,   187,   220,   236,   278,   306,   320,   328,
     331,   344,   356,   364,   406,   408,   409,   410,   435,   479,
     480,   481,   493,   500,   703,   704,   705,   707,   708,   709,
     710,   711,   712,   713,   716,   728,   729,   730,   731,   732,
     737,   738,  1274,  1294,    26,   197,   701,  1257,   205,  1223,
     506,  1274,  1255,   506,  1191,  1192,   309,   419,  1313,  1193,
    1223,   501,  1274,   175,   214,   506,   669,  1194,     9,   417,
     512,   586,   275,   352,   354,  1315,   685,   744,   453,   338,
     802,   805,   245,   302,   407,   478,  1293,   478,  1293,   478,
    1293,   478,  1293,   478,  1293,   503,  1303,   385,  1291,   126,
    1223,  1217,  1220,  1220,   233,   243,   385,  1277,  1274,  1275,
     172,   205,   242,   470,   506,     9,    50,   213,   245,   246,
     257,   267,   347,   417,   462,   512,   694,  1227,  1228,  1229,
     448,   666,  1192,   255,  1280,   448,  1262,   219,  1269,   506,
    1274,  1274,  1229,  1315,   745,   789,   123,   828,   829,   512,
      53,   720,   448,   717,   464,  1221,  1222,   444,   710,   734,
     735,  1227,    26,   706,   401,  1251,  1251,  1229,   307,  1284,
       1,    40,    41,    42,    43,    44,   179,   180,   181,   182,
     183,   184,   185,   331,   344,   695,   696,   697,   698,   699,
     711,   712,  1217,   695,   449,  1223,    58,   354,   662,   673,
    1223,   411,  1295,   257,   670,  1220,   670,   349,   746,   690,
     700,   790,   791,   792,    56,   499,   806,     1,     3,     5,
      10,    18,    51,    52,    61,    72,    75,    89,   112,   120,
     122,   153,   164,   169,   196,   203,   206,   207,   216,   223,
     225,   228,   270,   274,   276,   286,   312,   325,   350,   351,
     361,   375,   376,   382,   386,   394,   404,   413,   422,   427,
     428,   431,   433,   440,   453,   471,   477,   482,   509,   830,
     831,   847,   852,   856,   861,   876,   879,   883,   887,   888,
     889,   894,   908,   912,   915,   929,   933,   936,   939,   943,
     944,   948,   958,   961,   978,   980,   983,   987,   993,  1005,
    1013,  1014,  1017,  1018,  1022,  1027,  1028,  1036,  1051,  1061,
    1070,  1075,  1082,  1086,  1088,  1091,  1094,  1098,  1125,   830,
    1269,   197,   718,  1223,   447,  1300,    83,   100,   202,   246,
     252,   254,   259,   260,   261,   265,   304,   323,   378,   429,
     430,   460,   464,   465,   472,   492,   497,   504,  1167,  1169,
    1170,  1171,  1172,  1173,  1174,  1202,  1216,  1217,  1228,  1230,
    1231,  1232,  1233,   464,  1222,  1220,   733,   735,   444,   257,
    1261,   695,   453,  1229,    48,   467,   674,   675,   676,   677,
    1305,  1262,   197,   665,  1268,   506,  1181,     1,   691,   792,
     453,   808,   807,   377,   814,     3,     5,    10,    18,    51,
      52,    61,    72,    75,    89,   112,   120,   122,   129,   131,
     132,   133,   134,   135,   136,   137,   138,   140,   141,   142,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     164,   169,   196,   203,   206,   207,   216,   223,   225,   228,
     270,   274,   276,   286,   312,   325,   350,   361,   376,   382,
     386,   394,   404,   413,   422,   427,   428,   431,   433,   440,
     453,   471,   477,   482,   509,  1252,   832,   848,   853,   857,
     862,   877,   880,   884,   890,   895,   909,   913,   916,   930,
     934,   937,   940,   204,   377,   871,   932,   945,   949,   959,
     962,   979,   981,   984,   400,   988,   994,  1006,  1015,  1019,
    1023,  1029,  1037,  1052,  1062,   257,   347,   388,   417,   512,
    1074,  1076,  1083,   337,  1087,  1089,   817,  1092,  1095,  1099,
    1126,   506,  1223,   717,   115,   719,   464,  1235,  1217,  1228,
    1230,  1312,  1312,   464,   464,   464,   464,  1312,  1173,  1169,
    1173,   464,  1235,    71,   399,   450,  1168,   451,   460,   465,
     452,   461,   170,   464,  1234,   464,   464,  1169,   503,   736,
    1304,  1227,  1193,  1193,   188,   666,  1223,   747,   453,   793,
     453,    49,   809,   810,   811,  1260,   809,   506,   453,   309,
     833,   834,  1216,     6,    95,   246,   272,   849,  1174,  1198,
    1199,  1216,  1227,  1230,   854,  1169,  1216,   257,   858,   859,
    1185,  1186,  1187,  1220,   272,   423,   425,   863,   864,   257,
     878,  1207,  1216,   881,  1180,     6,   885,  1175,  1176,  1197,
    1218,  1219,  1220,  1228,   456,   891,  1180,   257,   896,   897,
     899,  1198,  1199,  1207,  1216,   910,  1199,   257,   914,   455,
     466,   917,   918,   919,  1157,  1158,  1159,   200,   324,   325,
     341,   395,   931,   935,  1196,  1197,   938,  1220,   448,   941,
    1301,  1199,  1156,  1157,   950,  1196,   960,  1181,   963,   964,
    1216,  1227,  1230,  1053,  1214,  1215,  1220,    95,   982,  1199,
     985,  1199,   171,   226,   234,   318,   989,   990,   191,   257,
     995,   999,  1000,  1001,  1185,  1208,  1216,  1220,  1230,  1305,
    1007,  1180,  1016,  1177,  1220,  1020,  1180,  1024,  1177,     9,
    1030,  1178,  1220,   154,   272,  1038,  1041,  1042,  1045,  1046,
    1047,  1048,  1049,  1050,  1182,  1183,  1196,  1213,  1215,  1220,
    1053,  1063,  1180,  1071,   113,  1077,  1078,  1079,  1199,    95,
    1084,  1198,  1090,  1181,   453,   506,   818,   819,   822,   823,
     828,  1093,  1216,  1096,  1180,  1100,  1216,  1127,  1177,   224,
     721,   310,  1285,   722,   723,   450,  1167,  1169,   506,   506,
    1169,  1238,  1238,  1238,  1201,  1216,  1228,  1230,  1237,   506,
     450,  1201,  1236,  1169,   450,  1169,  1170,  1170,  1171,  1171,
    1171,  1169,  1201,  1167,   404,   455,    30,  1258,  1262,     1,
     748,   794,   810,   411,   478,   812,   358,   500,   803,   131,
     846,    30,   836,   837,  1258,   197,  1284,  1216,  1217,  1228,
    1230,   132,   851,   448,   850,  1199,    58,   224,  1242,   859,
     448,  1312,   133,   875,   257,  1208,  1207,  1180,   357,   476,
     882,  1305,  1318,  1284,   134,   886,   160,   454,  1176,  1309,
     387,  1248,  1221,  1222,   892,  1180,   135,   893,  1290,   136,
     907,   166,   898,  1136,  1137,   486,   900,   505,   837,   487,
     488,   489,   490,   137,   911,    49,   229,   499,   865,   138,
     928,    17,   503,   920,   921,   922,   924,    12,    13,    14,
      20,   160,   170,   208,   209,   247,   248,   285,   291,   294,
     302,   309,   314,   333,   450,   452,   454,   457,   459,   460,
     461,   464,   465,  1160,  1161,  1162,  1163,  1164,  1165,  1166,
    1199,   102,   932,  1197,  1184,   443,  1299,   951,  1305,  1181,
      93,   366,   438,   965,   966,   968,   969,  1055,   464,  1221,
    1199,   448,   141,   986,    49,   990,   405,   991,  1000,   142,
     453,   996,   998,   483,   501,   444,   447,   441,   144,  1012,
     286,   335,  1245,   197,  1128,   145,  1021,  1290,   146,  1026,
    1128,  1178,   147,  1035,   501,  1031,  1205,  1216,  1228,  1048,
    1050,  1196,   448,  1183,   124,   448,   484,  1040,    31,  1221,
     148,  1069,   178,   238,   241,  1065,   871,  1072,  1305,  1260,
     149,  1081,   229,  1079,  1216,   150,  1085,   197,  1181,   395,
     453,   453,   197,   352,   354,  1097,   151,  1109,   113,  1101,
     152,  1132,  1128,   722,  1189,   221,   725,    27,   116,   724,
     450,  1168,   450,   450,   450,  1168,   450,  1168,   450,   450,
     451,   450,   450,   448,  1274,  1193,   115,   664,   453,    62,
      90,    91,   322,   453,   749,   750,   753,  1274,  1330,    32,
      35,    38,    45,    46,    65,    67,   161,   190,   197,   199,
     212,   244,   253,   266,   306,   319,   346,   372,   379,   396,
     448,   458,   475,   499,   708,   709,   713,   728,   730,   732,
     795,   800,   801,  1274,  1307,  1274,   411,   313,   813,   110,
     815,  1205,   198,   840,   253,   332,   838,   839,  1307,    24,
      25,    66,    68,    70,   104,   105,   106,   154,   156,   163,
     166,   253,   255,   445,   495,   506,   835,  1183,  1308,   153,
     341,  1203,  1217,   448,     6,  1175,  1199,  1220,  1228,   204,
     224,  1243,   377,   855,   340,   860,  1187,   865,   882,   263,
     288,  1267,  1217,  1169,   273,  1249,  1222,  1180,   232,  1152,
    1153,   825,   826,   899,  1199,   295,  1138,    97,   336,   506,
    1183,   299,   904,    35,    38,    45,    46,    92,   161,   190,
     212,   266,   319,   379,   392,   475,   905,   906,   486,   901,
    1136,  1136,  1136,  1136,  1199,  1175,  1199,   866,   919,    21,
     455,   466,   925,   926,  1158,   503,   922,   923,   503,   825,
    1301,   233,  1161,   115,   942,  1185,   129,   825,   946,     9,
      12,    15,    16,   278,   279,   302,   303,   952,   956,   176,
    1205,     9,    58,   178,   242,   470,   972,   973,   974,   967,
     968,  1057,  1285,  1321,   448,  1196,  1175,  1199,   991,  1305,
    1179,   825,   169,  1002,  1156,  1003,  1004,  1216,  1185,     8,
      37,  1130,  1290,  1212,  1216,  1227,  1230,   229,  1008,  1025,
    1305,   130,  1032,  1216,  1032,   448,   448,  1039,   153,   455,
     466,  1199,    49,    38,    46,   212,   244,   266,   319,   379,
     475,  1043,  1044,  1274,  1064,  1305,  1199,   162,   290,   411,
    1199,  1216,   197,  1175,  1199,   824,  1223,  1205,  1260,   229,
    1104,  1129,  1130,   725,  1260,  1276,  1189,  1234,  1234,  1234,
    1201,   242,   470,  1234,   450,  1169,  1234,  1234,  1227,  1285,
    1274,  1274,  1255,   249,   250,  1279,   762,   205,   177,   751,
    1266,  1274,   253,   390,   157,   159,  1274,  1208,   300,  1282,
    1223,    57,  1216,  1216,   205,  1282,    32,   111,  1223,  1274,
     506,   453,   804,   273,   841,  1282,  1282,   839,   838,  1282,
     166,  1133,  1134,   511,   510,  1205,  1133,   238,   424,   300,
     277,   257,  1204,  1217,  1216,  1284,   412,  1139,  1140,  1221,
    1222,  1175,   448,  1244,   855,  1197,   448,  1185,   870,   871,
     381,   363,  1139,  1274,   825,   296,  1154,   827,   825,  1136,
    1274,   253,   390,   157,   159,  1274,   124,   484,   906,  1136,
      97,    98,   902,   841,   204,  1139,   204,   867,   868,   869,
    1260,    17,   444,   927,   317,   925,  1285,   825,   129,   140,
     947,  1301,   366,   953,  1301,   448,    49,   973,   975,  1205,
       9,    58,   242,   470,   970,   971,  1205,  1058,  1306,   724,
     219,   315,  1270,  1196,  1139,   204,  1179,   641,   380,   992,
    1305,   142,   997,     8,   197,  1008,  1216,   130,  1145,  1147,
    1152,   263,   288,   825,   503,   503,  1033,  1034,  1205,  1204,
    1199,  1039,  1039,  1039,  1039,  1039,  1039,  1039,  1039,  1044,
     291,   294,  1066,  1067,  1068,  1162,  1246,  1152,   245,   411,
    1320,   424,  1297,  1297,  1080,  1305,  1216,  1139,   204,   453,
     448,     9,  1102,  1103,  1240,  1105,  1216,  1080,  1105,  1025,
       7,  1253,   506,   726,   727,  1274,   450,  1189,  1207,  1274,
    1255,   257,   754,  1225,   690,   763,   752,  1216,   512,  1209,
    1213,  1223,  1209,  1274,  1300,  1274,  1274,    32,  1223,   816,
     817,  1274,   505,   842,  1209,  1209,  1209,   825,   295,  1135,
    1133,  1248,  1217,   825,   298,  1141,  1222,  1139,  1206,  1216,
    1227,   166,   463,   873,  1311,     6,   229,   309,   462,   872,
    1273,    34,   282,   283,   284,   345,   468,   469,   473,  1250,
     825,   828,  1209,  1209,  1155,  1211,  1213,  1223,  1155,   505,
     903,  1175,  1176,  1175,  1176,   868,   309,   812,    88,   358,
     500,   926,  1157,   825,  1216,   825,   500,   954,   955,   956,
     957,  1299,   500,  1206,  1205,    49,   976,   971,   189,   976,
    1054,  1274,  1276,   315,  1175,   992,   263,   288,  1004,  1199,
     218,  1009,  1305,   825,   292,  1148,   263,  1157,  1156,  1033,
    1162,  1216,  1163,  1164,  1165,  1166,  1169,  1073,  1199,  1073,
     463,  1142,  1143,   331,  1248,  1175,   820,  1206,   314,  1205,
     114,  1106,   438,  1108,   158,   293,  1131,  1149,  1150,  1151,
    1152,   322,  1183,  1209,   727,  1188,   755,   253,   255,  1314,
     506,   691,  1216,   271,   330,   460,   465,   796,   797,   798,
    1207,   796,   797,   799,   817,    47,    32,    35,    38,    46,
      92,   111,   190,   199,   212,   244,   264,   266,   288,   289,
     319,   346,   372,   379,   392,   396,   437,   446,   475,   485,
     491,   843,   844,   845,  1133,   825,  1139,   825,   295,   874,
     825,  1284,  1216,   253,   255,  1319,   905,  1139,   362,  1139,
     362,  1199,   955,   103,  1264,  1301,   976,   976,  1206,     8,
      37,   977,   226,   499,  1059,  1189,  1056,  1139,   381,    49,
     263,   238,  1010,   217,   237,   263,   288,   502,   825,   825,
     825,   825,   297,  1144,  1274,  1139,  1139,   494,   821,  1110,
    1103,  1269,    96,  1107,  1269,  1142,   825,   825,  1151,   253,
     255,  1278,   178,   188,   211,   241,   756,   757,   758,   759,
     760,   761,  1225,   764,  1209,  1209,   130,  1274,  1274,   845,
      57,   124,   484,     8,  1254,   844,   825,  1216,  1176,  1176,
      49,   111,   976,   458,  1272,  1272,   338,  1179,   204,   318,
    1060,  1220,  1199,  1274,  1011,  1146,  1147,  1148,  1152,   263,
     263,   263,   825,  1216,  1111,   453,  1216,  1269,  1216,   107,
     117,  1323,  1274,  1274,    55,    90,  1323,  1324,  1308,   765,
     110,  1209,  1209,  1274,  1155,  1155,  1210,  1213,  1225,  1139,
    1139,  1199,  1199,  1199,  1274,  1179,   338,   483,  1216,  1148,
     128,   167,   205,  1112,  1113,  1114,  1116,  1120,  1122,  1123,
    1124,  1258,  1267,  1216,  1274,  1225,  1225,   211,  1274,  1274,
     210,   253,   255,   286,   306,   334,   415,   432,   453,   474,
     493,   501,   708,   713,   714,   728,   730,   732,   766,   767,
     771,   772,   775,   776,   777,   778,   779,   780,   785,   786,
     787,  1307,  1308,   453,  1207,   999,  1274,  1156,    37,  1254,
     341,   108,  1225,  1225,  1225,   222,  1271,   300,   301,  1283,
    1255,   210,  1223,   503,  1274,  1284,  1274,  1274,  1216,   287,
     330,   781,   782,  1225,   330,   783,   784,  1225,  1283,  1255,
     999,   368,   419,  1296,   130,   422,  1121,  1285,  1275,  1274,
     717,  1156,  1202,  1200,  1202,    54,    90,   322,   326,   327,
     367,   383,   384,   768,  1323,  1324,  1325,  1326,  1327,  1328,
    1329,   120,   197,  1223,   782,  1223,   784,  1275,  1216,   162,
     166,  1310,     9,  1117,  1118,  1186,   782,  1300,  1248,   374,
     773,  1202,   188,   188,   211,   188,   211,   177,   769,  1216,
     769,  1202,   338,  1288,   307,   339,   359,  1119,  1118,   719,
    1285,   314,   770,   770,    49,  1285,   307,  1220,   426,   715,
     177,   774,  1216,   322,  1202,   171,   226,   234,   318,  1115,
    1179,  1223
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
#line 1368 "parser.y"
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
#line 1379 "parser.y"
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
#line 1415 "parser.y"
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
#line 1470 "parser.y"
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
#line 1499 "parser.y"
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
#line 1532 "parser.y"
    {
	cb_validate_program_environment (current_program);
  }
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 1538 "parser.y"
    {
	current_storage = CB_STORAGE_WORKING;
  }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 1550 "parser.y"
    {
	cb_validate_program_data (current_program);
  }
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 1560 "parser.y"
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
#line 1591 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 1598 "parser.y"
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
#line 1637 "parser.y"
    { (yyval) = NULL; }
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 1638 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 1647 "parser.y"
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
#line 1656 "parser.y"
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
#line 1670 "parser.y"
    {
	current_program->flag_initial = 1;
  }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 1674 "parser.y"
    {
	current_program->flag_recursive = 1;
  }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 1684 "parser.y"
    {
	header_check |= COBC_HD_ENVIRONMENT_DIVISION;
  }
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 1693 "parser.y"
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
#line 1718 "parser.y"
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
#line 1736 "parser.y"
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
#line 1749 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_comp_repeated ("OBJECT-COMPUTER", SYN_CLAUSE_2);
  }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 1778 "parser.y"
    {
	cb_verify (cb_memory_size_clause, "MEMORY SIZE");
  }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 1785 "parser.y"
    {
	current_program->collating_sequence = (yyvsp[(3) - (3)]);
  }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 1792 "parser.y"
    {
	/* Ignore */
  }
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 1799 "parser.y"
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
#line 1810 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 1814 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 1818 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 1822 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 1836 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
  }
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 1841 "parser.y"
    {
	cobc_in_repository = 0;
  }
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 1849 "parser.y"
    {
	yyerrok;
  }
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 1861 "parser.y"
    {
	functions_are_all = 1;
  }
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 1865 "parser.y"
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
#line 1886 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 1890 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 1897 "parser.y"
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[(1) - (1)]));
  }
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 1902 "parser.y"
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[(2) - (2)]));
  }
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 1913 "parser.y"
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
#line 1927 "parser.y"
    {
	cobc_cs_check = 0;
	yyerrok;
  }
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 1958 "parser.y"
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
#line 1977 "parser.y"
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
#line 1987 "parser.y"
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
#line 2000 "parser.y"
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
#line 2016 "parser.y"
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
#line 2026 "parser.y"
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
#line 2041 "parser.y"
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
#line 2054 "parser.y"
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
#line 2065 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_NATIVE;
	}
  }
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 2071 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 2077 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 2083 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_EBCDIC;
	}
  }
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 2089 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 2095 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_CUSTOM;
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->custom_list = (yyvsp[(1) - (1)]);
	}
  }
    break;

  case 133:

/* Line 1806 of yacc.c  */
#line 2105 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 134:

/* Line 1806 of yacc.c  */
#line 2109 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 135:

/* Line 1806 of yacc.c  */
#line 2116 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 136:

/* Line 1806 of yacc.c  */
#line 2120 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 137:

/* Line 1806 of yacc.c  */
#line 2124 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (2)]));
  }
    break;

  case 138:

/* Line 1806 of yacc.c  */
#line 2128 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (4)]);
  }
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 2135 "parser.y"
    {
	cb_list_add ((yyvsp[(0) - (1)]), (yyvsp[(1) - (1)]));
  }
    break;

  case 140:

/* Line 1806 of yacc.c  */
#line 2139 "parser.y"
    {
	cb_list_add ((yyvsp[(0) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 141:

/* Line 1806 of yacc.c  */
#line 2145 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 142:

/* Line 1806 of yacc.c  */
#line 2146 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 143:

/* Line 1806 of yacc.c  */
#line 2147 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 144:

/* Line 1806 of yacc.c  */
#line 2148 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 145:

/* Line 1806 of yacc.c  */
#line 2149 "parser.y"
    { (yyval) = cb_norm_high; }
    break;

  case 146:

/* Line 1806 of yacc.c  */
#line 2150 "parser.y"
    { (yyval) = cb_norm_low; }
    break;

  case 147:

/* Line 1806 of yacc.c  */
#line 2154 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 148:

/* Line 1806 of yacc.c  */
#line 2155 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 149:

/* Line 1806 of yacc.c  */
#line 2163 "parser.y"
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
#line 2177 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 151:

/* Line 1806 of yacc.c  */
#line 2181 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 152:

/* Line 1806 of yacc.c  */
#line 2189 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 153:

/* Line 1806 of yacc.c  */
#line 2196 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 154:

/* Line 1806 of yacc.c  */
#line 2200 "parser.y"
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
#line 2211 "parser.y"
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
#line 2231 "parser.y"
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
#line 2239 "parser.y"
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
#line 2249 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 159:

/* Line 1806 of yacc.c  */
#line 2250 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 160:

/* Line 1806 of yacc.c  */
#line 2257 "parser.y"
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
#line 2277 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 162:

/* Line 1806 of yacc.c  */
#line 2278 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 163:

/* Line 1806 of yacc.c  */
#line 2283 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 164:

/* Line 1806 of yacc.c  */
#line 2287 "parser.y"
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
#line 2308 "parser.y"
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
#line 2331 "parser.y"
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
#line 2412 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 168:

/* Line 1806 of yacc.c  */
#line 2416 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 169:

/* Line 1806 of yacc.c  */
#line 2425 "parser.y"
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
#line 2444 "parser.y"
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
#line 2460 "parser.y"
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
#line 2478 "parser.y"
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
#line 2496 "parser.y"
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
#line 2513 "parser.y"
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
#line 2530 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_INPUT_OUTPUT_SECTION;
  }
    break;

  case 178:

/* Line 1806 of yacc.c  */
#line 2538 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_FILE_CONTROL;
  }
    break;

  case 180:

/* Line 1806 of yacc.c  */
#line 2547 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_I_O_CONTROL;
  }
    break;

  case 183:

/* Line 1806 of yacc.c  */
#line 2562 "parser.y"
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
#line 2579 "parser.y"
    {
	validate_file (current_file, (yyvsp[(3) - (6)]));
  }
    break;

  case 185:

/* Line 1806 of yacc.c  */
#line 2583 "parser.y"
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
#line 2617 "parser.y"
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1);
	cobc_cs_check = 0;
	current_file->assign = cb_build_assignment_name (current_file, (yyvsp[(5) - (5)]));
  }
    break;

  case 202:

/* Line 1806 of yacc.c  */
#line 2623 "parser.y"
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
#line 2633 "parser.y"
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
#line 2646 "parser.y"
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
#line 2659 "parser.y"
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
#line 2682 "parser.y"
    {
	current_file->flag_line_adv = 1;
  }
    break;

  case 213:

/* Line 1806 of yacc.c  */
#line 2689 "parser.y"
    {
	current_file->flag_ext_assign = 1;
  }
    break;

  case 217:

/* Line 1806 of yacc.c  */
#line 2702 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 220:

/* Line 1806 of yacc.c  */
#line 2714 "parser.y"
    {
	cobc_cs_check = 0;
	check_repeated ("ACCESS", SYN_CLAUSE_2);
  }
    break;

  case 221:

/* Line 1806 of yacc.c  */
#line 2721 "parser.y"
    { current_file->access_mode = COB_ACCESS_SEQUENTIAL; }
    break;

  case 222:

/* Line 1806 of yacc.c  */
#line 2722 "parser.y"
    { current_file->access_mode = COB_ACCESS_DYNAMIC; }
    break;

  case 223:

/* Line 1806 of yacc.c  */
#line 2723 "parser.y"
    { current_file->access_mode = COB_ACCESS_RANDOM; }
    break;

  case 224:

/* Line 1806 of yacc.c  */
#line 2731 "parser.y"
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
#line 2754 "parser.y"
    { }
    break;

  case 226:

/* Line 1806 of yacc.c  */
#line 2757 "parser.y"
    {
	PENDING ("SUPPRESS WHEN ALL");
  }
    break;

  case 227:

/* Line 1806 of yacc.c  */
#line 2762 "parser.y"
    {
	PENDING ("SUPPRESS WHEN SPACE/ZERO");
  }
    break;

  case 228:

/* Line 1806 of yacc.c  */
#line 2772 "parser.y"
    {
	check_repeated ("COLLATING", SYN_CLAUSE_3);
	PENDING ("COLLATING SEQUENCE");
  }
    break;

  case 229:

/* Line 1806 of yacc.c  */
#line 2783 "parser.y"
    {
	check_repeated ("STATUS", SYN_CLAUSE_4);
	current_file->file_status = (yyvsp[(4) - (4)]);
  }
    break;

  case 233:

/* Line 1806 of yacc.c  */
#line 2798 "parser.y"
    {
	check_repeated ("LOCK", SYN_CLAUSE_5);
  }
    break;

  case 235:

/* Line 1806 of yacc.c  */
#line 2806 "parser.y"
    {
	current_file->lock_mode = COB_LOCK_MANUAL;
	cobc_cs_check = 0;
  }
    break;

  case 236:

/* Line 1806 of yacc.c  */
#line 2811 "parser.y"
    {
	current_file->lock_mode = COB_LOCK_AUTOMATIC;
	cobc_cs_check = 0;
  }
    break;

  case 237:

/* Line 1806 of yacc.c  */
#line 2816 "parser.y"
    {
	current_file->lock_mode = COB_LOCK_EXCLUSIVE;
	cobc_cs_check = 0;
  }
    break;

  case 240:

/* Line 1806 of yacc.c  */
#line 2825 "parser.y"
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
  }
    break;

  case 241:

/* Line 1806 of yacc.c  */
#line 2829 "parser.y"
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
	PENDING ("WITH ROLLBACK");
  }
    break;

  case 244:

/* Line 1806 of yacc.c  */
#line 2845 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6);
	current_file->organization = COB_ORG_INDEXED;
  }
    break;

  case 245:

/* Line 1806 of yacc.c  */
#line 2850 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6);
	current_file->organization = COB_ORG_SEQUENTIAL;
  }
    break;

  case 246:

/* Line 1806 of yacc.c  */
#line 2855 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6);
	current_file->organization = COB_ORG_RELATIVE;
  }
    break;

  case 247:

/* Line 1806 of yacc.c  */
#line 2860 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6);
	current_file->organization = COB_ORG_LINE_SEQUENTIAL;
  }
    break;

  case 248:

/* Line 1806 of yacc.c  */
#line 2871 "parser.y"
    {
	check_repeated ("PADDING", SYN_CLAUSE_7);
	cb_verify (cb_padding_character_clause, "PADDING CHARACTER");
  }
    break;

  case 249:

/* Line 1806 of yacc.c  */
#line 2882 "parser.y"
    {
	check_repeated ("RECORD DELIMITER", SYN_CLAUSE_8);
  }
    break;

  case 250:

/* Line 1806 of yacc.c  */
#line 2892 "parser.y"
    {
	check_repeated ("RECORD KEY", SYN_CLAUSE_9);
	current_file->key = (yyvsp[(4) - (4)]);
  }
    break;

  case 251:

/* Line 1806 of yacc.c  */
#line 2899 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 252:

/* Line 1806 of yacc.c  */
#line 2900 "parser.y"
    { PENDING ("SPLIT KEYS"); }
    break;

  case 253:

/* Line 1806 of yacc.c  */
#line 2901 "parser.y"
    { PENDING ("SPLIT KEYS"); }
    break;

  case 254:

/* Line 1806 of yacc.c  */
#line 2908 "parser.y"
    {
	check_repeated ("RELATIVE KEY", SYN_CLAUSE_10);
	current_file->key = (yyvsp[(4) - (4)]);
  }
    break;

  case 255:

/* Line 1806 of yacc.c  */
#line 2919 "parser.y"
    {
	check_repeated ("RESERVE", SYN_CLAUSE_11);
  }
    break;

  case 258:

/* Line 1806 of yacc.c  */
#line 2933 "parser.y"
    {
	check_repeated ("SHARING", SYN_CLAUSE_12);
	current_file->sharing = (yyvsp[(3) - (3)]);
  }
    break;

  case 259:

/* Line 1806 of yacc.c  */
#line 2940 "parser.y"
    { (yyval) = NULL; }
    break;

  case 260:

/* Line 1806 of yacc.c  */
#line 2941 "parser.y"
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
    break;

  case 261:

/* Line 1806 of yacc.c  */
#line 2942 "parser.y"
    { (yyval) = NULL; }
    break;

  case 264:

/* Line 1806 of yacc.c  */
#line 2951 "parser.y"
    {
	yyerrok;
  }
    break;

  case 269:

/* Line 1806 of yacc.c  */
#line 2970 "parser.y"
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
#line 2997 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 271:

/* Line 1806 of yacc.c  */
#line 2998 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 272:

/* Line 1806 of yacc.c  */
#line 2999 "parser.y"
    { (yyval) = cb_int2; }
    break;

  case 273:

/* Line 1806 of yacc.c  */
#line 3000 "parser.y"
    { (yyval) = cb_int2; }
    break;

  case 274:

/* Line 1806 of yacc.c  */
#line 3007 "parser.y"
    {
	/* Fake for TAPE */
	cobc_cs_check = CB_CS_ASSIGN;
  }
    break;

  case 275:

/* Line 1806 of yacc.c  */
#line 3012 "parser.y"
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
#line 3039 "parser.y"
    {
	header_check |= COBC_HD_DATA_DIVISION;
  }
    break;

  case 284:

/* Line 1806 of yacc.c  */
#line 3048 "parser.y"
    {
	current_storage = CB_STORAGE_FILE;
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_FILE_SECTION;
  }
    break;

  case 287:

/* Line 1806 of yacc.c  */
#line 3062 "parser.y"
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
#line 3081 "parser.y"
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
#line 3098 "parser.y"
    {
	yyerrok;
  }
    break;

  case 291:

/* Line 1806 of yacc.c  */
#line 3105 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 292:

/* Line 1806 of yacc.c  */
#line 3109 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 295:

/* Line 1806 of yacc.c  */
#line 3120 "parser.y"
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
#line 3130 "parser.y"
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
#line 3160 "parser.y"
    {
	check_repeated ("BLOCK", SYN_CLAUSE_3);
	/* ignore */
  }
    break;

  case 310:

/* Line 1806 of yacc.c  */
#line 3173 "parser.y"
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
#line 3193 "parser.y"
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
#line 3228 "parser.y"
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
#line 3259 "parser.y"
    {
	current_file->record_depending = (yyvsp[(3) - (3)]);
  }
    break;

  case 315:

/* Line 1806 of yacc.c  */
#line 3265 "parser.y"
    { (yyval) = NULL; }
    break;

  case 316:

/* Line 1806 of yacc.c  */
#line 3266 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 317:

/* Line 1806 of yacc.c  */
#line 3270 "parser.y"
    { (yyval) = NULL; }
    break;

  case 318:

/* Line 1806 of yacc.c  */
#line 3271 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 319:

/* Line 1806 of yacc.c  */
#line 3279 "parser.y"
    {
	check_repeated ("LABEL", SYN_CLAUSE_5);
	cb_verify (cb_label_records_clause, "LABEL RECORDS");
  }
    break;

  case 320:

/* Line 1806 of yacc.c  */
#line 3290 "parser.y"
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6);
	cb_verify (cb_value_of_clause, "VALUE OF");
  }
    break;

  case 321:

/* Line 1806 of yacc.c  */
#line 3295 "parser.y"
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
#line 3318 "parser.y"
    {
	check_repeated ("DATA", SYN_CLAUSE_7);
	cb_verify (cb_data_records_clause, "DATA RECORDS");
  }
    break;

  case 327:

/* Line 1806 of yacc.c  */
#line 3330 "parser.y"
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
#line 3358 "parser.y"
    {
	current_file->latfoot = (yyvsp[(4) - (4)]);
  }
    break;

  case 334:

/* Line 1806 of yacc.c  */
#line 3365 "parser.y"
    {
	current_file->lattop = (yyvsp[(2) - (2)]);
  }
    break;

  case 335:

/* Line 1806 of yacc.c  */
#line 3372 "parser.y"
    {
	current_file->latbot = (yyvsp[(2) - (2)]);
  }
    break;

  case 336:

/* Line 1806 of yacc.c  */
#line 3381 "parser.y"
    {
	cobc_cs_check = 0;
	check_repeated ("RECORDING", SYN_CLAUSE_9);
	/* ignore */
  }
    break;

  case 337:

/* Line 1806 of yacc.c  */
#line 3393 "parser.y"
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
#line 3445 "parser.y"
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
#line 3465 "parser.y"
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
#line 3475 "parser.y"
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
#line 3515 "parser.y"
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_WORKING_STORAGE_SECTION;
	current_storage = CB_STORAGE_WORKING;
  }
    break;

  case 345:

/* Line 1806 of yacc.c  */
#line 3521 "parser.y"
    {
	if ((yyvsp[(5) - (5)])) {
		CB_FIELD_ADD (current_program->working_storage, CB_FIELD ((yyvsp[(5) - (5)])));
	}
  }
    break;

  case 346:

/* Line 1806 of yacc.c  */
#line 3530 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 347:

/* Line 1806 of yacc.c  */
#line 3533 "parser.y"
    {
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
    break;

  case 348:

/* Line 1806 of yacc.c  */
#line 3539 "parser.y"
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
#line 3559 "parser.y"
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
#line 3574 "parser.y"
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
#line 3594 "parser.y"
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
#line 3607 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 357:

/* Line 1806 of yacc.c  */
#line 3614 "parser.y"
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
    break;

  case 358:

/* Line 1806 of yacc.c  */
#line 3620 "parser.y"
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
    break;

  case 359:

/* Line 1806 of yacc.c  */
#line 3626 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	qualifier = (yyvsp[(1) - (1)]);
	non_const_word = 0;
  }
    break;

  case 360:

/* Line 1806 of yacc.c  */
#line 3635 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	qualifier = (yyvsp[(1) - (1)]);
	non_const_word = 0;
  }
    break;

  case 361:

/* Line 1806 of yacc.c  */
#line 3644 "parser.y"
    {
	(yyval)= NULL;
  }
    break;

  case 362:

/* Line 1806 of yacc.c  */
#line 3648 "parser.y"
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
#line 3659 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 364:

/* Line 1806 of yacc.c  */
#line 3660 "parser.y"
    { (yyval) = cb_build_const_length ((yyvsp[(2) - (2)])); }
    break;

  case 365:

/* Line 1806 of yacc.c  */
#line 3661 "parser.y"
    { (yyval) = cb_build_const_length ((yyvsp[(2) - (2)])); }
    break;

  case 366:

/* Line 1806 of yacc.c  */
#line 3662 "parser.y"
    { (yyval) = cb_build_const_length ((yyvsp[(3) - (3)])); }
    break;

  case 367:

/* Line 1806 of yacc.c  */
#line 3667 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 368:

/* Line 1806 of yacc.c  */
#line 3671 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 369:

/* Line 1806 of yacc.c  */
#line 3675 "parser.y"
    {
	(yyval) = cb_int2;
  }
    break;

  case 370:

/* Line 1806 of yacc.c  */
#line 3679 "parser.y"
    {
	(yyval) = cb_int4;
  }
    break;

  case 371:

/* Line 1806 of yacc.c  */
#line 3683 "parser.y"
    {
	(yyval) = cb_int (8);
  }
    break;

  case 372:

/* Line 1806 of yacc.c  */
#line 3687 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(long));
  }
    break;

  case 373:

/* Line 1806 of yacc.c  */
#line 3691 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(void *));
  }
    break;

  case 374:

/* Line 1806 of yacc.c  */
#line 3695 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(float));
  }
    break;

  case 375:

/* Line 1806 of yacc.c  */
#line 3699 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(double));
  }
    break;

  case 376:

/* Line 1806 of yacc.c  */
#line 3703 "parser.y"
    {
	(yyval) = cb_int (4);
  }
    break;

  case 377:

/* Line 1806 of yacc.c  */
#line 3707 "parser.y"
    {
	(yyval) = cb_int (8);
  }
    break;

  case 378:

/* Line 1806 of yacc.c  */
#line 3711 "parser.y"
    {
	(yyval) = cb_int (16);
  }
    break;

  case 379:

/* Line 1806 of yacc.c  */
#line 3715 "parser.y"
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
#line 3747 "parser.y"
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
#line 3773 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 391:

/* Line 1806 of yacc.c  */
#line 3777 "parser.y"
    {
	PENDING ("CONSTANT FROM clause");
	(yyval) = NULL;
  }
    break;

  case 392:

/* Line 1806 of yacc.c  */
#line 3785 "parser.y"
    {
	/* Required to check redefines */
	(yyval) = NULL;
  }
    break;

  case 393:

/* Line 1806 of yacc.c  */
#line 3791 "parser.y"
    {
	/* Required to check redefines */
	(yyval) = cb_true;
  }
    break;

  case 408:

/* Line 1806 of yacc.c  */
#line 3819 "parser.y"
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
#line 3843 "parser.y"
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
#line 3870 "parser.y"
    {
	current_field->ename = cb_to_cname (current_field->name);
  }
    break;

  case 411:

/* Line 1806 of yacc.c  */
#line 3874 "parser.y"
    {
	current_field->ename = cb_to_cname ((const char *)CB_LITERAL ((yyvsp[(2) - (2)]))->data);
  }
    break;

  case 412:

/* Line 1806 of yacc.c  */
#line 3883 "parser.y"
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
#line 3908 "parser.y"
    {
	check_pic_repeated ("PICTURE", SYN_CLAUSE_4);
	current_field->pic = CB_PICTURE ((yyvsp[(1) - (1)]));
  }
    break;

  case 416:

/* Line 1806 of yacc.c  */
#line 3924 "parser.y"
    {
	check_set_usage (CB_USAGE_BINARY);
  }
    break;

  case 417:

/* Line 1806 of yacc.c  */
#line 3928 "parser.y"
    {
	check_set_usage (CB_USAGE_BINARY);
  }
    break;

  case 418:

/* Line 1806 of yacc.c  */
#line 3932 "parser.y"
    {
	check_set_usage (CB_USAGE_FLOAT);
  }
    break;

  case 419:

/* Line 1806 of yacc.c  */
#line 3936 "parser.y"
    {
	check_set_usage (CB_USAGE_DOUBLE);
  }
    break;

  case 420:

/* Line 1806 of yacc.c  */
#line 3940 "parser.y"
    {
	check_set_usage (CB_USAGE_PACKED);
  }
    break;

  case 421:

/* Line 1806 of yacc.c  */
#line 3944 "parser.y"
    {
	check_set_usage (CB_USAGE_BINARY);
  }
    break;

  case 422:

/* Line 1806 of yacc.c  */
#line 3948 "parser.y"
    {
	check_set_usage (CB_USAGE_COMP_5);
  }
    break;

  case 423:

/* Line 1806 of yacc.c  */
#line 3952 "parser.y"
    {
	check_set_usage (CB_USAGE_COMP_6);
  }
    break;

  case 424:

/* Line 1806 of yacc.c  */
#line 3956 "parser.y"
    {
	check_set_usage (CB_USAGE_COMP_X);
  }
    break;

  case 425:

/* Line 1806 of yacc.c  */
#line 3960 "parser.y"
    {
	check_set_usage (CB_USAGE_DISPLAY);
  }
    break;

  case 426:

/* Line 1806 of yacc.c  */
#line 3964 "parser.y"
    {
	check_set_usage (CB_USAGE_INDEX);
  }
    break;

  case 427:

/* Line 1806 of yacc.c  */
#line 3968 "parser.y"
    {
	check_set_usage (CB_USAGE_PACKED);
  }
    break;

  case 428:

/* Line 1806 of yacc.c  */
#line 3972 "parser.y"
    {
	check_set_usage (CB_USAGE_POINTER);
	current_field->flag_is_pointer = 1;
  }
    break;

  case 429:

/* Line 1806 of yacc.c  */
#line 3977 "parser.y"
    {
	check_set_usage (CB_USAGE_PROGRAM_POINTER);
	current_field->flag_is_pointer = 1;
  }
    break;

  case 430:

/* Line 1806 of yacc.c  */
#line 3982 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
    break;

  case 431:

/* Line 1806 of yacc.c  */
#line 3986 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
    break;

  case 432:

/* Line 1806 of yacc.c  */
#line 3990 "parser.y"
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
#line 3998 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
    break;

  case 434:

/* Line 1806 of yacc.c  */
#line 4002 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
    break;

  case 435:

/* Line 1806 of yacc.c  */
#line 4006 "parser.y"
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
#line 4014 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_CHAR);
  }
    break;

  case 437:

/* Line 1806 of yacc.c  */
#line 4018 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_CHAR);
  }
    break;

  case 438:

/* Line 1806 of yacc.c  */
#line 4022 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
    break;

  case 439:

/* Line 1806 of yacc.c  */
#line 4026 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
    break;

  case 440:

/* Line 1806 of yacc.c  */
#line 4030 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
    break;

  case 441:

/* Line 1806 of yacc.c  */
#line 4034 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
    break;

  case 442:

/* Line 1806 of yacc.c  */
#line 4038 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_LONG);
  }
    break;

  case 443:

/* Line 1806 of yacc.c  */
#line 4042 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_LONG);
  }
    break;

  case 444:

/* Line 1806 of yacc.c  */
#line 4046 "parser.y"
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
#line 4054 "parser.y"
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
#line 4062 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_BIN32);
  }
    break;

  case 447:

/* Line 1806 of yacc.c  */
#line 4066 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_BIN64);
  }
    break;

  case 448:

/* Line 1806 of yacc.c  */
#line 4070 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_BIN128);
  }
    break;

  case 449:

/* Line 1806 of yacc.c  */
#line 4074 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_DEC64);
  }
    break;

  case 450:

/* Line 1806 of yacc.c  */
#line 4078 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_DEC128);
  }
    break;

  case 451:

/* Line 1806 of yacc.c  */
#line 4082 "parser.y"
    {
	check_pic_repeated ("USAGE", SYN_CLAUSE_5);
	PENDING ("USAGE NATIONAL");
  }
    break;

  case 456:

/* Line 1806 of yacc.c  */
#line 4102 "parser.y"
    {
	check_pic_repeated ("SIGN", SYN_CLAUSE_6);
	current_field->flag_sign_separate = ((yyvsp[(3) - (3)]) ? 1 : 0);
	current_field->flag_sign_leading  = 1;
  }
    break;

  case 457:

/* Line 1806 of yacc.c  */
#line 4108 "parser.y"
    {
	check_pic_repeated ("SIGN", SYN_CLAUSE_6);
	current_field->flag_sign_separate = ((yyvsp[(3) - (3)]) ? 1 : 0);
	current_field->flag_sign_leading  = 0;
  }
    break;

  case 458:

/* Line 1806 of yacc.c  */
#line 4121 "parser.y"
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
#line 4139 "parser.y"
    {
	current_field->step_count = cb_get_int ((yyvsp[(2) - (2)]));
  }
    break;

  case 461:

/* Line 1806 of yacc.c  */
#line 4149 "parser.y"
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
#line 4170 "parser.y"
    {
	current_field->occurs_min = (yyvsp[(4) - (8)]) ? cb_get_int ((yyvsp[(4) - (8)])) : cb_int0;
	PENDING("OCCURS with DYNAMIC capacity");
	current_field->occurs_max = (yyvsp[(5) - (8)]) ? cb_get_int ((yyvsp[(5) - (8)])) : cb_int0;
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
#line 4189 "parser.y"
    { (yyval) = NULL; }
    break;

  case 464:

/* Line 1806 of yacc.c  */
#line 4190 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 465:

/* Line 1806 of yacc.c  */
#line 4194 "parser.y"
    { (yyval) = NULL; }
    break;

  case 466:

/* Line 1806 of yacc.c  */
#line 4195 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 468:

/* Line 1806 of yacc.c  */
#line 4200 "parser.y"
    {
	current_field->depending = (yyvsp[(3) - (3)]);
  }
    break;

  case 470:

/* Line 1806 of yacc.c  */
#line 4207 "parser.y"
    {
	(yyval) = cb_build_index ((yyvsp[(3) - (3)]), cb_zero, 0, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
    break;

  case 472:

/* Line 1806 of yacc.c  */
#line 4215 "parser.y"
    {
	/* current_field->initialized = 1; */
  }
    break;

  case 473:

/* Line 1806 of yacc.c  */
#line 4222 "parser.y"
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
#line 4245 "parser.y"
    { (yyval) = NULL; }
    break;

  case 475:

/* Line 1806 of yacc.c  */
#line 4248 "parser.y"
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
#line 4263 "parser.y"
    { (yyval) = cb_int (COB_ASCENDING); }
    break;

  case 477:

/* Line 1806 of yacc.c  */
#line 4264 "parser.y"
    { (yyval) = cb_int (COB_DESCENDING); }
    break;

  case 479:

/* Line 1806 of yacc.c  */
#line 4269 "parser.y"
    {
	current_field->index_list = (yyvsp[(3) - (3)]);
  }
    break;

  case 480:

/* Line 1806 of yacc.c  */
#line 4275 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 481:

/* Line 1806 of yacc.c  */
#line 4277 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 482:

/* Line 1806 of yacc.c  */
#line 4282 "parser.y"
    {
	(yyval) = cb_build_index ((yyvsp[(1) - (1)]), cb_int1, 1U, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
    break;

  case 483:

/* Line 1806 of yacc.c  */
#line 4293 "parser.y"
    {
	check_pic_repeated ("JUSTIFIED", SYN_CLAUSE_8);
	current_field->flag_justified = 1;
  }
    break;

  case 484:

/* Line 1806 of yacc.c  */
#line 4304 "parser.y"
    {
	check_pic_repeated ("SYNCHRONIZED", SYN_CLAUSE_9);
	current_field->flag_synchronized = 1;
  }
    break;

  case 485:

/* Line 1806 of yacc.c  */
#line 4315 "parser.y"
    {
	check_pic_repeated ("BLANK", SYN_CLAUSE_10);
	current_field->flag_blank_zero = 1;
  }
    break;

  case 486:

/* Line 1806 of yacc.c  */
#line 4326 "parser.y"
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
#line 4354 "parser.y"
    {
	check_pic_repeated ("VALUE", SYN_CLAUSE_12);
	current_field->values = (yyvsp[(3) - (3)]);
  }
    break;

  case 489:

/* Line 1806 of yacc.c  */
#line 4362 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 490:

/* Line 1806 of yacc.c  */
#line 4363 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 491:

/* Line 1806 of yacc.c  */
#line 4367 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 492:

/* Line 1806 of yacc.c  */
#line 4368 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 494:

/* Line 1806 of yacc.c  */
#line 4373 "parser.y"
    {
	if (current_field->level != 88) {
		cb_error (_("FALSE clause only allowed for 88 level"));
	}
	current_field->false_88 = CB_LIST_INIT ((yyvsp[(4) - (4)]));
  }
    break;

  case 495:

/* Line 1806 of yacc.c  */
#line 4386 "parser.y"
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
#line 4399 "parser.y"
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
#line 4420 "parser.y"
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
#line 4429 "parser.y"
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
#line 4444 "parser.y"
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
#line 4453 "parser.y"
    {
	if ((yyvsp[(5) - (5)])) {
		current_program->local_storage = CB_FIELD ((yyvsp[(5) - (5)]));
	}
  }
    break;

  case 503:

/* Line 1806 of yacc.c  */
#line 4465 "parser.y"
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LINKAGE_SECTION;
	current_storage = CB_STORAGE_LINKAGE;
  }
    break;

  case 504:

/* Line 1806 of yacc.c  */
#line 4471 "parser.y"
    {
	if ((yyvsp[(5) - (5)])) {
		current_program->linkage_storage = CB_FIELD ((yyvsp[(5) - (5)]));
	}
  }
    break;

  case 506:

/* Line 1806 of yacc.c  */
#line 4482 "parser.y"
    {
	cb_warning (_("REPORT SECTION not implemented"));
	current_storage = CB_STORAGE_REPORT;
	cb_clear_real_field ();
  }
    break;

  case 510:

/* Line 1806 of yacc.c  */
#line 4498 "parser.y"
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
#line 4513 "parser.y"
    {
	yyerrok;
  }
    break;

  case 515:

/* Line 1806 of yacc.c  */
#line 4520 "parser.y"
    {
	check_repeated ("GLOBAL", SYN_CLAUSE_1);
	cb_error (_("GLOBAL is not allowed with RD"));
  }
    break;

  case 516:

/* Line 1806 of yacc.c  */
#line 4525 "parser.y"
    {
	check_repeated ("CODE", SYN_CLAUSE_2);
  }
    break;

  case 519:

/* Line 1806 of yacc.c  */
#line 4536 "parser.y"
    {
	check_repeated ("CONTROL", SYN_CLAUSE_3);
  }
    break;

  case 523:

/* Line 1806 of yacc.c  */
#line 4555 "parser.y"
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
#line 4591 "parser.y"
    {
	current_report->lines = cb_get_int ((yyvsp[(1) - (1)]));
  }
    break;

  case 525:

/* Line 1806 of yacc.c  */
#line 4595 "parser.y"
    {
	current_report->lines = cb_get_int ((yyvsp[(1) - (4)]));
	current_report->columns = cb_get_int ((yyvsp[(3) - (4)]));
  }
    break;

  case 526:

/* Line 1806 of yacc.c  */
#line 4600 "parser.y"
    {
	current_report->lines = cb_get_int ((yyvsp[(1) - (2)]));
  }
    break;

  case 534:

/* Line 1806 of yacc.c  */
#line 4620 "parser.y"
    {
	current_report->heading = cb_get_int ((yyvsp[(3) - (3)]));
  }
    break;

  case 535:

/* Line 1806 of yacc.c  */
#line 4627 "parser.y"
    {
	current_report->first_detail = cb_get_int ((yyvsp[(4) - (4)]));
  }
    break;

  case 536:

/* Line 1806 of yacc.c  */
#line 4634 "parser.y"
    {
	current_report->last_control = cb_get_int ((yyvsp[(4) - (4)]));
  }
    break;

  case 537:

/* Line 1806 of yacc.c  */
#line 4641 "parser.y"
    {
	current_report->last_detail = cb_get_int ((yyvsp[(4) - (4)]));
  }
    break;

  case 538:

/* Line 1806 of yacc.c  */
#line 4648 "parser.y"
    {
	current_report->footing = cb_get_int ((yyvsp[(3) - (3)]));
  }
    break;

  case 541:

/* Line 1806 of yacc.c  */
#line 4659 "parser.y"
    {
	check_pic_duplicate = 0;
  }
    break;

  case 561:

/* Line 1806 of yacc.c  */
#line 4690 "parser.y"
    {
	check_pic_repeated ("TYPE", SYN_CLAUSE_16);
  }
    break;

  case 574:

/* Line 1806 of yacc.c  */
#line 4716 "parser.y"
    {
	check_pic_repeated ("NEXT GROUP", SYN_CLAUSE_17);
  }
    break;

  case 575:

/* Line 1806 of yacc.c  */
#line 4723 "parser.y"
    {
	check_pic_repeated ("SUM", SYN_CLAUSE_19);
  }
    break;

  case 580:

/* Line 1806 of yacc.c  */
#line 4739 "parser.y"
    {
	check_pic_repeated ("PRESENT", SYN_CLAUSE_20);
  }
    break;

  case 582:

/* Line 1806 of yacc.c  */
#line 4750 "parser.y"
    {
	check_pic_repeated ("LINE", SYN_CLAUSE_21);
  }
    break;

  case 585:

/* Line 1806 of yacc.c  */
#line 4762 "parser.y"
    {
	check_pic_repeated ("COLUMN", SYN_CLAUSE_18);
  }
    break;

  case 597:

/* Line 1806 of yacc.c  */
#line 4795 "parser.y"
    {
	check_pic_repeated ("SOURCE", SYN_CLAUSE_22);
  }
    break;

  case 598:

/* Line 1806 of yacc.c  */
#line 4802 "parser.y"
    {
	check_pic_repeated ("GROUP", SYN_CLAUSE_23);
  }
    break;

  case 599:

/* Line 1806 of yacc.c  */
#line 4809 "parser.y"
    {
	check_pic_repeated ("USAGE", SYN_CLAUSE_24);
  }
    break;

  case 601:

/* Line 1806 of yacc.c  */
#line 4818 "parser.y"
    {
	current_storage = CB_STORAGE_SCREEN;
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
    break;

  case 602:

/* Line 1806 of yacc.c  */
#line 4825 "parser.y"
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
#line 4851 "parser.y"
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
#line 4882 "parser.y"
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
#line 4908 "parser.y"
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
#line 4931 "parser.y"
    {
	check_screen_attr ("BLANK LINE", COB_SCREEN_BLANK_LINE);
  }
    break;

  case 614:

/* Line 1806 of yacc.c  */
#line 4935 "parser.y"
    {
	check_screen_attr ("BLANK SCREEN", COB_SCREEN_BLANK_SCREEN);
  }
    break;

  case 615:

/* Line 1806 of yacc.c  */
#line 4939 "parser.y"
    {
	check_screen_attr ("BELL", COB_SCREEN_BELL);
  }
    break;

  case 616:

/* Line 1806 of yacc.c  */
#line 4943 "parser.y"
    {
	check_screen_attr ("BLINK", COB_SCREEN_BLINK);
  }
    break;

  case 617:

/* Line 1806 of yacc.c  */
#line 4947 "parser.y"
    {
	check_screen_attr ("ERASE EOL", COB_SCREEN_ERASE_EOL);
  }
    break;

  case 618:

/* Line 1806 of yacc.c  */
#line 4951 "parser.y"
    {
	check_screen_attr ("ERASE EOS", COB_SCREEN_ERASE_EOS);
  }
    break;

  case 619:

/* Line 1806 of yacc.c  */
#line 4955 "parser.y"
    {
	check_screen_attr ("HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 620:

/* Line 1806 of yacc.c  */
#line 4959 "parser.y"
    {
	check_screen_attr ("LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
    break;

  case 621:

/* Line 1806 of yacc.c  */
#line 4963 "parser.y"
    {
	check_screen_attr ("REVERSE-VIDEO", COB_SCREEN_REVERSE);
  }
    break;

  case 622:

/* Line 1806 of yacc.c  */
#line 4967 "parser.y"
    {
	check_screen_attr ("UNDERLINE", COB_SCREEN_UNDERLINE);
  }
    break;

  case 623:

/* Line 1806 of yacc.c  */
#line 4971 "parser.y"
    {
	check_screen_attr ("OVERLINE", COB_SCREEN_OVERLINE);
  }
    break;

  case 624:

/* Line 1806 of yacc.c  */
#line 4975 "parser.y"
    {
	check_screen_attr ("LEFTLINE", COB_SCREEN_LEFTLINE);
  }
    break;

  case 625:

/* Line 1806 of yacc.c  */
#line 4979 "parser.y"
    {
	check_screen_attr ("AUTO", COB_SCREEN_AUTO);
  }
    break;

  case 626:

/* Line 1806 of yacc.c  */
#line 4983 "parser.y"
    {
	check_screen_attr ("SECURE", COB_SCREEN_SECURE);
  }
    break;

  case 627:

/* Line 1806 of yacc.c  */
#line 4987 "parser.y"
    {
	check_screen_attr ("REQUIRED", COB_SCREEN_REQUIRED);
  }
    break;

  case 628:

/* Line 1806 of yacc.c  */
#line 4991 "parser.y"
    {
	check_screen_attr ("FULL", COB_SCREEN_FULL);
  }
    break;

  case 629:

/* Line 1806 of yacc.c  */
#line 4995 "parser.y"
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
	current_field->screen_prompt = (yyvsp[(4) - (4)]);
  }
    break;

  case 630:

/* Line 1806 of yacc.c  */
#line 5000 "parser.y"
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
  }
    break;

  case 631:

/* Line 1806 of yacc.c  */
#line 5004 "parser.y"
    {
	check_screen_attr ("INITIAL", COB_SCREEN_INITIAL);
  }
    break;

  case 632:

/* Line 1806 of yacc.c  */
#line 5008 "parser.y"
    {
	check_pic_repeated ("LINE", SYN_CLAUSE_16);
	current_field->screen_line = (yyvsp[(5) - (5)]);
  }
    break;

  case 633:

/* Line 1806 of yacc.c  */
#line 5013 "parser.y"
    {
	check_pic_repeated ("COLUMN", SYN_CLAUSE_17);
	current_field->screen_column = (yyvsp[(5) - (5)]);
  }
    break;

  case 634:

/* Line 1806 of yacc.c  */
#line 5018 "parser.y"
    {
	check_pic_repeated ("FOREGROUND-COLOR", SYN_CLAUSE_18);
	current_field->screen_foreg = (yyvsp[(3) - (3)]);
  }
    break;

  case 635:

/* Line 1806 of yacc.c  */
#line 5023 "parser.y"
    {
	check_pic_repeated ("BACKGROUND-COLOR", SYN_CLAUSE_19);
	current_field->screen_backg = (yyvsp[(3) - (3)]);
  }
    break;

  case 644:

/* Line 1806 of yacc.c  */
#line 5036 "parser.y"
    {
	check_pic_repeated ("USING", SYN_CLAUSE_20);
	current_field->screen_from = (yyvsp[(2) - (2)]);
	current_field->screen_to = (yyvsp[(2) - (2)]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
    break;

  case 645:

/* Line 1806 of yacc.c  */
#line 5043 "parser.y"
    {
	check_pic_repeated ("FROM", SYN_CLAUSE_21);
	current_field->screen_from = (yyvsp[(2) - (2)]);
  }
    break;

  case 646:

/* Line 1806 of yacc.c  */
#line 5048 "parser.y"
    {
	check_pic_repeated ("TO", SYN_CLAUSE_22);
	current_field->screen_to = (yyvsp[(2) - (2)]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
    break;

  case 651:

/* Line 1806 of yacc.c  */
#line 5067 "parser.y"
    {
	/* Nothing */
  }
    break;

  case 652:

/* Line 1806 of yacc.c  */
#line 5071 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_LINE_PLUS;
  }
    break;

  case 653:

/* Line 1806 of yacc.c  */
#line 5075 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_LINE_MINUS;
  }
    break;

  case 654:

/* Line 1806 of yacc.c  */
#line 5082 "parser.y"
    {
	/* Nothing */
  }
    break;

  case 655:

/* Line 1806 of yacc.c  */
#line 5086 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_PLUS;
  }
    break;

  case 656:

/* Line 1806 of yacc.c  */
#line 5090 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_MINUS;
  }
    break;

  case 657:

/* Line 1806 of yacc.c  */
#line 5098 "parser.y"
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
#line 5109 "parser.y"
    {
	cb_error (_("GLOBAL is not allowed with screen items"));
  }
    break;

  case 660:

/* Line 1806 of yacc.c  */
#line 5118 "parser.y"
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
#line 5128 "parser.y"
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
#line 5140 "parser.y"
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
#line 5155 "parser.y"
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
#line 5188 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 666:

/* Line 1806 of yacc.c  */
#line 5192 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
    break;

  case 667:

/* Line 1806 of yacc.c  */
#line 5197 "parser.y"
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
#line 5205 "parser.y"
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
#line 5214 "parser.y"
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
#line 5224 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 671:

/* Line 1806 of yacc.c  */
#line 5226 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 672:

/* Line 1806 of yacc.c  */
#line 5231 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR (cb_int (call_mode), cb_build_identifier ((yyvsp[(4) - (4)]), 0));
	CB_SIZES ((yyval)) = size_mode;
  }
    break;

  case 674:

/* Line 1806 of yacc.c  */
#line 5240 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
    break;

  case 675:

/* Line 1806 of yacc.c  */
#line 5244 "parser.y"
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
#line 5256 "parser.y"
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
#line 5264 "parser.y"
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
#line 5272 "parser.y"
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
#line 5280 "parser.y"
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
#line 5309 "parser.y"
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
#line 5342 "parser.y"
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error (_("OPTIONAL only allowed for BY REFERENCE items"));
	}
  }
    break;

  case 684:

/* Line 1806 of yacc.c  */
#line 5351 "parser.y"
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("RETURNING clause is required for a FUNCTION"));
	}
  }
    break;

  case 685:

/* Line 1806 of yacc.c  */
#line 5357 "parser.y"
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
#line 5385 "parser.y"
    {
	in_declaratives = 1;
	emit_statement (cb_build_comment ("DECLARATIVES"));
  }
    break;

  case 688:

/* Line 1806 of yacc.c  */
#line 5391 "parser.y"
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
#line 5429 "parser.y"
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
#line 5447 "parser.y"
    {
	/* check_unreached = 0; */
  }
    break;

  case 696:

/* Line 1806 of yacc.c  */
#line 5457 "parser.y"
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
#line 5501 "parser.y"
    {
	emit_statement (CB_TREE (current_section));
  }
    break;

  case 700:

/* Line 1806 of yacc.c  */
#line 5512 "parser.y"
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
#line 5560 "parser.y"
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
#line 5572 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 703:

/* Line 1806 of yacc.c  */
#line 5576 "parser.y"
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
#line 5594 "parser.y"
    {
	(yyval) = current_program->exec_list;
	current_program->exec_list = NULL;
	check_unreached = 0;
  }
    break;

  case 705:

/* Line 1806 of yacc.c  */
#line 5599 "parser.y"
    {
	(yyval) = CB_TREE (current_statement);
	current_statement = NULL;
  }
    break;

  case 706:

/* Line 1806 of yacc.c  */
#line 5604 "parser.y"
    {
	(yyval) = cb_list_reverse (current_program->exec_list);
	current_program->exec_list = (yyvsp[(1) - (3)]);
	current_statement = CB_STATEMENT ((yyvsp[(2) - (3)]));
  }
    break;

  case 707:

/* Line 1806 of yacc.c  */
#line 5612 "parser.y"
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
#line 5639 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 709:

/* Line 1806 of yacc.c  */
#line 5643 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 759:

/* Line 1806 of yacc.c  */
#line 5699 "parser.y"
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
#line 5713 "parser.y"
    {
	yyerrok;
	cobc_cs_check = 0;
  }
    break;

  case 761:

/* Line 1806 of yacc.c  */
#line 5724 "parser.y"
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
#line 5741 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept ((yyvsp[(1) - (6)]), (yyvsp[(2) - (6)]), current_statement->attr_ptr);
  }
    break;

  case 764:

/* Line 1806 of yacc.c  */
#line 5746 "parser.y"
    {
	cb_emit_accept_line_or_col ((yyvsp[(1) - (3)]), 0);
  }
    break;

  case 765:

/* Line 1806 of yacc.c  */
#line 5750 "parser.y"
    {
	cb_emit_accept_line_or_col ((yyvsp[(1) - (3)]), 1);
  }
    break;

  case 766:

/* Line 1806 of yacc.c  */
#line 5754 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_date_yyyymmdd ((yyvsp[(1) - (4)]));
  }
    break;

  case 767:

/* Line 1806 of yacc.c  */
#line 5759 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_date ((yyvsp[(1) - (3)]));
  }
    break;

  case 768:

/* Line 1806 of yacc.c  */
#line 5764 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_day_yyyyddd ((yyvsp[(1) - (4)]));
  }
    break;

  case 769:

/* Line 1806 of yacc.c  */
#line 5769 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_day ((yyvsp[(1) - (3)]));
  }
    break;

  case 770:

/* Line 1806 of yacc.c  */
#line 5774 "parser.y"
    {
	cb_emit_accept_day_of_week ((yyvsp[(1) - (3)]));
  }
    break;

  case 771:

/* Line 1806 of yacc.c  */
#line 5778 "parser.y"
    {
	cb_emit_accept_escape_key ((yyvsp[(1) - (4)]));
  }
    break;

  case 772:

/* Line 1806 of yacc.c  */
#line 5782 "parser.y"
    {
	cb_emit_accept_exception_status ((yyvsp[(1) - (4)]));
  }
    break;

  case 773:

/* Line 1806 of yacc.c  */
#line 5786 "parser.y"
    {
	cb_emit_accept_time ((yyvsp[(1) - (3)]));
  }
    break;

  case 774:

/* Line 1806 of yacc.c  */
#line 5790 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_user_name ((yyvsp[(1) - (4)]));
  }
    break;

  case 775:

/* Line 1806 of yacc.c  */
#line 5795 "parser.y"
    {
	cb_emit_accept_command_line ((yyvsp[(1) - (3)]));
  }
    break;

  case 776:

/* Line 1806 of yacc.c  */
#line 5799 "parser.y"
    {
	cb_emit_accept_environment ((yyvsp[(1) - (4)]));
  }
    break;

  case 777:

/* Line 1806 of yacc.c  */
#line 5803 "parser.y"
    {
	cb_emit_get_environment ((yyvsp[(4) - (5)]), (yyvsp[(1) - (5)]));
  }
    break;

  case 778:

/* Line 1806 of yacc.c  */
#line 5807 "parser.y"
    {
	cb_emit_accept_arg_number ((yyvsp[(1) - (3)]));
  }
    break;

  case 779:

/* Line 1806 of yacc.c  */
#line 5811 "parser.y"
    {
	cb_emit_accept_arg_value ((yyvsp[(1) - (4)]));
  }
    break;

  case 780:

/* Line 1806 of yacc.c  */
#line 5815 "parser.y"
    {
	cb_emit_accept_mnemonic ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 781:

/* Line 1806 of yacc.c  */
#line 5819 "parser.y"
    {
	cb_emit_accept_name ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 783:

/* Line 1806 of yacc.c  */
#line 5827 "parser.y"
    {
	(yyval) = cb_null;
  }
    break;

  case 786:

/* Line 1806 of yacc.c  */
#line 5838 "parser.y"
    { (yyval) = NULL; }
    break;

  case 787:

/* Line 1806 of yacc.c  */
#line 5839 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 788:

/* Line 1806 of yacc.c  */
#line 5843 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 789:

/* Line 1806 of yacc.c  */
#line 5844 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(3) - (3)]), (yyvsp[(2) - (3)])); }
    break;

  case 790:

/* Line 1806 of yacc.c  */
#line 5845 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (2)]), cb_int0); }
    break;

  case 791:

/* Line 1806 of yacc.c  */
#line 5846 "parser.y"
    { (yyval) = CB_BUILD_PAIR (cb_int0, (yyvsp[(2) - (2)])); }
    break;

  case 792:

/* Line 1806 of yacc.c  */
#line 5847 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 793:

/* Line 1806 of yacc.c  */
#line 5851 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 794:

/* Line 1806 of yacc.c  */
#line 5855 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 795:

/* Line 1806 of yacc.c  */
#line 5856 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 799:

/* Line 1806 of yacc.c  */
#line 5865 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 804:

/* Line 1806 of yacc.c  */
#line 5881 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_AUTO);
  }
    break;

  case 805:

/* Line 1806 of yacc.c  */
#line 5885 "parser.y"
    {
	if (cb_accept_auto) {
		remove_attrib (COB_SCREEN_AUTO);
	}
  }
    break;

  case 806:

/* Line 1806 of yacc.c  */
#line 5891 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
    break;

  case 807:

/* Line 1806 of yacc.c  */
#line 5895 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
    break;

  case 808:

/* Line 1806 of yacc.c  */
#line 5899 "parser.y"
    {
	cb_warning (_("Ignoring CONVERSION"));
  }
    break;

  case 809:

/* Line 1806 of yacc.c  */
#line 5903 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_FULL);
  }
    break;

  case 810:

/* Line 1806 of yacc.c  */
#line 5907 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 811:

/* Line 1806 of yacc.c  */
#line 5911 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LEFTLINE);
  }
    break;

  case 812:

/* Line 1806 of yacc.c  */
#line 5915 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWER);
  }
    break;

  case 813:

/* Line 1806 of yacc.c  */
#line 5919 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWLIGHT);
  }
    break;

  case 814:

/* Line 1806 of yacc.c  */
#line 5923 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_NO_ECHO);
  }
    break;

  case 815:

/* Line 1806 of yacc.c  */
#line 5927 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
    break;

  case 816:

/* Line 1806 of yacc.c  */
#line 5931 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, (yyvsp[(4) - (4)]), COB_SCREEN_PROMPT);
  }
    break;

  case 817:

/* Line 1806 of yacc.c  */
#line 5935 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_PROMPT);
  }
    break;

  case 818:

/* Line 1806 of yacc.c  */
#line 5939 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REQUIRED);
  }
    break;

  case 819:

/* Line 1806 of yacc.c  */
#line 5943 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
    break;

  case 820:

/* Line 1806 of yacc.c  */
#line 5947 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_SECURE);
  }
    break;

  case 821:

/* Line 1806 of yacc.c  */
#line 5951 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
    break;

  case 822:

/* Line 1806 of yacc.c  */
#line 5955 "parser.y"
    {
	if (cb_accept_update) {
		remove_attrib (COB_SCREEN_UPDATE);
	}
  }
    break;

  case 823:

/* Line 1806 of yacc.c  */
#line 5961 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPDATE);
  }
    break;

  case 824:

/* Line 1806 of yacc.c  */
#line 5965 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPPER);
  }
    break;

  case 825:

/* Line 1806 of yacc.c  */
#line 5969 "parser.y"
    {
	check_attribs ((yyvsp[(3) - (3)]), NULL, NULL, NULL, NULL, 0);
  }
    break;

  case 826:

/* Line 1806 of yacc.c  */
#line 5973 "parser.y"
    {
	check_attribs (NULL, (yyvsp[(3) - (3)]), NULL, NULL, NULL, 0);
  }
    break;

  case 827:

/* Line 1806 of yacc.c  */
#line 5977 "parser.y"
    {
	check_attribs (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, 0);
  }
    break;

  case 828:

/* Line 1806 of yacc.c  */
#line 5981 "parser.y"
    {
	check_attribs (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
    break;

  case 829:

/* Line 1806 of yacc.c  */
#line 5985 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, (yyvsp[(3) - (3)]), NULL, 0);
  }
    break;

  case 832:

/* Line 1806 of yacc.c  */
#line 5997 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ACCEPT);
  }
    break;

  case 833:

/* Line 1806 of yacc.c  */
#line 6001 "parser.y"
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
#line 6018 "parser.y"
    {
	begin_statement ("ADD", TERM_ADD);
  }
    break;

  case 836:

/* Line 1806 of yacc.c  */
#line 6027 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '+', cb_build_binary_list ((yyvsp[(1) - (4)]), '+'));
  }
    break;

  case 837:

/* Line 1806 of yacc.c  */
#line 6031 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(4) - (5)]), 0, cb_build_binary_list ((yyvsp[(1) - (5)]), '+'));
  }
    break;

  case 838:

/* Line 1806 of yacc.c  */
#line 6035 "parser.y"
    {
	cb_emit_corresponding (cb_build_add, (yyvsp[(4) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(5) - (6)]));
  }
    break;

  case 840:

/* Line 1806 of yacc.c  */
#line 6042 "parser.y"
    {
	cb_list_add ((yyvsp[(0) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 841:

/* Line 1806 of yacc.c  */
#line 6049 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ADD);
  }
    break;

  case 842:

/* Line 1806 of yacc.c  */
#line 6053 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), ADD);
  }
    break;

  case 843:

/* Line 1806 of yacc.c  */
#line 6063 "parser.y"
    {
	begin_statement ("ALLOCATE", 0);
	current_statement->flag_no_based = 1;
  }
    break;

  case 845:

/* Line 1806 of yacc.c  */
#line 6072 "parser.y"
    {
	cb_emit_allocate ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]), NULL, (yyvsp[(2) - (3)]));
  }
    break;

  case 846:

/* Line 1806 of yacc.c  */
#line 6076 "parser.y"
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
#line 6087 "parser.y"
    { (yyval) = NULL; }
    break;

  case 848:

/* Line 1806 of yacc.c  */
#line 6088 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 849:

/* Line 1806 of yacc.c  */
#line 6096 "parser.y"
    {
	begin_statement ("ALTER", 0);
	cb_verify (cb_alter_statement, "ALTER statement");
  }
    break;

  case 853:

/* Line 1806 of yacc.c  */
#line 6110 "parser.y"
    {
	cb_emit_alter ((yyvsp[(1) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 856:

/* Line 1806 of yacc.c  */
#line 6122 "parser.y"
    {
	begin_statement ("CALL", TERM_CALL);
	cobc_cs_check = CB_CS_CALL;
  }
    break;

  case 858:

/* Line 1806 of yacc.c  */
#line 6137 "parser.y"
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
#line 6151 "parser.y"
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
    break;

  case 860:

/* Line 1806 of yacc.c  */
#line 6156 "parser.y"
    {
	(yyval) = cb_int (CB_CONV_STATIC_LINK);
	cobc_cs_check = 0;
  }
    break;

  case 861:

/* Line 1806 of yacc.c  */
#line 6161 "parser.y"
    {
	(yyval) = cb_int (CB_CONV_STDCALL);
	cobc_cs_check = 0;
  }
    break;

  case 862:

/* Line 1806 of yacc.c  */
#line 6166 "parser.y"
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
#line 6186 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 864:

/* Line 1806 of yacc.c  */
#line 6190 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
    break;

  case 865:

/* Line 1806 of yacc.c  */
#line 6195 "parser.y"
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
#line 6206 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 867:

/* Line 1806 of yacc.c  */
#line 6208 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 868:

/* Line 1806 of yacc.c  */
#line 6213 "parser.y"
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
#line 6221 "parser.y"
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
#line 6247 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
    break;

  case 872:

/* Line 1806 of yacc.c  */
#line 6251 "parser.y"
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
#line 6260 "parser.y"
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
#line 6272 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 875:

/* Line 1806 of yacc.c  */
#line 6276 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 876:

/* Line 1806 of yacc.c  */
#line 6280 "parser.y"
    {
	(yyval) = cb_null;
  }
    break;

  case 877:

/* Line 1806 of yacc.c  */
#line 6284 "parser.y"
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
#line 6317 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 883:

/* Line 1806 of yacc.c  */
#line 6322 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 884:

/* Line 1806 of yacc.c  */
#line 6329 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 885:

/* Line 1806 of yacc.c  */
#line 6334 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 886:

/* Line 1806 of yacc.c  */
#line 6341 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), CALL);
  }
    break;

  case 887:

/* Line 1806 of yacc.c  */
#line 6345 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), CALL);
  }
    break;

  case 888:

/* Line 1806 of yacc.c  */
#line 6355 "parser.y"
    {
	begin_statement ("CANCEL", 0);
  }
    break;

  case 890:

/* Line 1806 of yacc.c  */
#line 6363 "parser.y"
    {
	cb_emit_cancel ((yyvsp[(1) - (1)]));
  }
    break;

  case 891:

/* Line 1806 of yacc.c  */
#line 6367 "parser.y"
    {
	cb_emit_cancel ((yyvsp[(2) - (2)]));
  }
    break;

  case 892:

/* Line 1806 of yacc.c  */
#line 6377 "parser.y"
    {
	begin_statement ("CLOSE", 0);
  }
    break;

  case 894:

/* Line 1806 of yacc.c  */
#line 6385 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 895:

/* Line 1806 of yacc.c  */
#line 6390 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 896:

/* Line 1806 of yacc.c  */
#line 6397 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_NORMAL); }
    break;

  case 897:

/* Line 1806 of yacc.c  */
#line 6398 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_UNIT); }
    break;

  case 898:

/* Line 1806 of yacc.c  */
#line 6399 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_UNIT_REMOVAL); }
    break;

  case 899:

/* Line 1806 of yacc.c  */
#line 6400 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_NO_REWIND); }
    break;

  case 900:

/* Line 1806 of yacc.c  */
#line 6401 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_LOCK); }
    break;

  case 901:

/* Line 1806 of yacc.c  */
#line 6409 "parser.y"
    {
	begin_statement ("COMPUTE", TERM_COMPUTE);
  }
    break;

  case 903:

/* Line 1806 of yacc.c  */
#line 6418 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(1) - (4)]), 0, (yyvsp[(3) - (4)]));
  }
    break;

  case 904:

/* Line 1806 of yacc.c  */
#line 6425 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), COMPUTE);
  }
    break;

  case 905:

/* Line 1806 of yacc.c  */
#line 6429 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), COMPUTE);
  }
    break;

  case 906:

/* Line 1806 of yacc.c  */
#line 6439 "parser.y"
    {
	begin_statement ("COMMIT", 0);
	cb_emit_commit ();
  }
    break;

  case 907:

/* Line 1806 of yacc.c  */
#line 6450 "parser.y"
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
#line 6467 "parser.y"
    {
	begin_statement ("DELETE", TERM_DELETE);
  }
    break;

  case 910:

/* Line 1806 of yacc.c  */
#line 6476 "parser.y"
    {
	cb_emit_delete ((yyvsp[(1) - (3)]));
  }
    break;

  case 912:

/* Line 1806 of yacc.c  */
#line 6484 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[(1) - (1)]));
  }
    break;

  case 913:

/* Line 1806 of yacc.c  */
#line 6489 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[(2) - (2)]));
  }
    break;

  case 914:

/* Line 1806 of yacc.c  */
#line 6497 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DELETE);
  }
    break;

  case 915:

/* Line 1806 of yacc.c  */
#line 6501 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DELETE);
  }
    break;

  case 916:

/* Line 1806 of yacc.c  */
#line 6511 "parser.y"
    {
	begin_statement ("DISPLAY", TERM_DISPLAY);
	cobc_cs_check = CB_CS_DISPLAY;
  }
    break;

  case 918:

/* Line 1806 of yacc.c  */
#line 6521 "parser.y"
    {
	cb_emit_env_name ((yyvsp[(1) - (3)]));
  }
    break;

  case 919:

/* Line 1806 of yacc.c  */
#line 6525 "parser.y"
    {
	cb_emit_env_value ((yyvsp[(1) - (3)]));
  }
    break;

  case 920:

/* Line 1806 of yacc.c  */
#line 6529 "parser.y"
    {
	cb_emit_arg_number ((yyvsp[(1) - (3)]));
  }
    break;

  case 921:

/* Line 1806 of yacc.c  */
#line 6533 "parser.y"
    {
	cb_emit_command_line ((yyvsp[(1) - (3)]));
  }
    break;

  case 922:

/* Line 1806 of yacc.c  */
#line 6537 "parser.y"
    {
	cb_emit_display ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]), NULL, NULL);
  }
    break;

  case 924:

/* Line 1806 of yacc.c  */
#line 6542 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_display (CB_LIST_INIT ((yyvsp[(1) - (4)])), cb_null, cb_int1,
			 NULL, current_statement->attr_ptr);
  }
    break;

  case 926:

/* Line 1806 of yacc.c  */
#line 6552 "parser.y"
    {
	begin_implicit_statement ();
  }
    break;

  case 928:

/* Line 1806 of yacc.c  */
#line 6560 "parser.y"
    {
	cb_emit_display (CB_LIST_INIT ((yyvsp[(1) - (5)])), cb_null, cb_int1,
			 (yyvsp[(2) - (5)]), current_statement->attr_ptr);
  }
    break;

  case 929:

/* Line 1806 of yacc.c  */
#line 6568 "parser.y"
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
#line 6576 "parser.y"
    {
	(yyval) = cb_build_display_mnemonic ((yyvsp[(2) - (2)]));
  }
    break;

  case 931:

/* Line 1806 of yacc.c  */
#line 6580 "parser.y"
    {
	(yyval) = cb_build_display_name ((yyvsp[(2) - (2)]));
  }
    break;

  case 932:

/* Line 1806 of yacc.c  */
#line 6584 "parser.y"
    {
	(yyval) = cb_int0;
  }
    break;

  case 933:

/* Line 1806 of yacc.c  */
#line 6588 "parser.y"
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
#line 6610 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 940:

/* Line 1806 of yacc.c  */
#line 6616 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 941:

/* Line 1806 of yacc.c  */
#line 6617 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 944:

/* Line 1806 of yacc.c  */
#line 6628 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
    break;

  case 945:

/* Line 1806 of yacc.c  */
#line 6632 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLANK_LINE);
  }
    break;

  case 946:

/* Line 1806 of yacc.c  */
#line 6636 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLANK_SCREEN);
  }
    break;

  case 947:

/* Line 1806 of yacc.c  */
#line 6640 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
    break;

  case 948:

/* Line 1806 of yacc.c  */
#line 6644 "parser.y"
    {
	cb_warning (_("Ignoring CONVERSION"));
  }
    break;

  case 949:

/* Line 1806 of yacc.c  */
#line 6648 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_ERASE_EOL);
  }
    break;

  case 950:

/* Line 1806 of yacc.c  */
#line 6652 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_ERASE_EOS);
  }
    break;

  case 951:

/* Line 1806 of yacc.c  */
#line 6656 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 952:

/* Line 1806 of yacc.c  */
#line 6660 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWLIGHT);
  }
    break;

  case 953:

/* Line 1806 of yacc.c  */
#line 6664 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
    break;

  case 954:

/* Line 1806 of yacc.c  */
#line 6668 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
    break;

  case 955:

/* Line 1806 of yacc.c  */
#line 6672 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
    break;

  case 956:

/* Line 1806 of yacc.c  */
#line 6676 "parser.y"
    {
	check_attribs ((yyvsp[(3) - (3)]), NULL, NULL, NULL, NULL, 0);
  }
    break;

  case 957:

/* Line 1806 of yacc.c  */
#line 6680 "parser.y"
    {
	check_attribs (NULL, (yyvsp[(3) - (3)]), NULL, NULL, NULL, 0);
  }
    break;

  case 958:

/* Line 1806 of yacc.c  */
#line 6684 "parser.y"
    {
	check_attribs (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, 0);
  }
    break;

  case 959:

/* Line 1806 of yacc.c  */
#line 6688 "parser.y"
    {
	check_attribs (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
    break;

  case 960:

/* Line 1806 of yacc.c  */
#line 6695 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DISPLAY);
  }
    break;

  case 961:

/* Line 1806 of yacc.c  */
#line 6699 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DISPLAY);
  }
    break;

  case 962:

/* Line 1806 of yacc.c  */
#line 6709 "parser.y"
    {
	begin_statement ("DIVIDE", TERM_DIVIDE);
  }
    break;

  case 964:

/* Line 1806 of yacc.c  */
#line 6718 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '/', (yyvsp[(1) - (4)]));
  }
    break;

  case 965:

/* Line 1806 of yacc.c  */
#line 6722 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_op ((yyvsp[(3) - (6)]), '/', (yyvsp[(1) - (6)])));
  }
    break;

  case 966:

/* Line 1806 of yacc.c  */
#line 6726 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_op ((yyvsp[(1) - (6)]), '/', (yyvsp[(3) - (6)])));
  }
    break;

  case 967:

/* Line 1806 of yacc.c  */
#line 6730 "parser.y"
    {
	cb_emit_divide ((yyvsp[(3) - (8)]), (yyvsp[(1) - (8)]), (yyvsp[(5) - (8)]), (yyvsp[(7) - (8)]));
  }
    break;

  case 968:

/* Line 1806 of yacc.c  */
#line 6734 "parser.y"
    {
	cb_emit_divide ((yyvsp[(1) - (8)]), (yyvsp[(3) - (8)]), (yyvsp[(5) - (8)]), (yyvsp[(7) - (8)]));
  }
    break;

  case 969:

/* Line 1806 of yacc.c  */
#line 6741 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DIVIDE);
  }
    break;

  case 970:

/* Line 1806 of yacc.c  */
#line 6745 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DIVIDE);
  }
    break;

  case 971:

/* Line 1806 of yacc.c  */
#line 6755 "parser.y"
    {
	check_unreached = 0;
	begin_statement ("ENTRY", 0);
  }
    break;

  case 973:

/* Line 1806 of yacc.c  */
#line 6764 "parser.y"
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
#line 6782 "parser.y"
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
#line 6806 "parser.y"
    {
	cb_emit_evaluate ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	eval_level--;
  }
    break;

  case 977:

/* Line 1806 of yacc.c  */
#line 6813 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 978:

/* Line 1806 of yacc.c  */
#line 6815 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 979:

/* Line 1806 of yacc.c  */
#line 6820 "parser.y"
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
#line 6831 "parser.y"
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
#line 6842 "parser.y"
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
#line 6856 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 983:

/* Line 1806 of yacc.c  */
#line 6860 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 984:

/* Line 1806 of yacc.c  */
#line 6866 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 985:

/* Line 1806 of yacc.c  */
#line 6868 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 986:

/* Line 1806 of yacc.c  */
#line 6874 "parser.y"
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
	eval_inc2 = 0;
  }
    break;

  case 987:

/* Line 1806 of yacc.c  */
#line 6883 "parser.y"
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[(3) - (3)]), NULL);
	eval_inc2 = 0;
  }
    break;

  case 988:

/* Line 1806 of yacc.c  */
#line 6891 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(2) - (2)]));
	eval_inc2 = 0;
  }
    break;

  case 989:

/* Line 1806 of yacc.c  */
#line 6897 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
	eval_inc2 = 0;
  }
    break;

  case 990:

/* Line 1806 of yacc.c  */
#line 6904 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 991:

/* Line 1806 of yacc.c  */
#line 6906 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 992:

/* Line 1806 of yacc.c  */
#line 6911 "parser.y"
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
#line 6972 "parser.y"
    { (yyval) = cb_any; eval_inc2++; }
    break;

  case 994:

/* Line 1806 of yacc.c  */
#line 6973 "parser.y"
    { (yyval) = cb_true; eval_inc2++; }
    break;

  case 995:

/* Line 1806 of yacc.c  */
#line 6974 "parser.y"
    { (yyval) = cb_false; eval_inc2++; }
    break;

  case 996:

/* Line 1806 of yacc.c  */
#line 6978 "parser.y"
    { (yyval) = NULL; }
    break;

  case 997:

/* Line 1806 of yacc.c  */
#line 6979 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 998:

/* Line 1806 of yacc.c  */
#line 6984 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), EVALUATE);
  }
    break;

  case 999:

/* Line 1806 of yacc.c  */
#line 6988 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), EVALUATE);
  }
    break;

  case 1000:

/* Line 1806 of yacc.c  */
#line 6998 "parser.y"
    {
	begin_statement ("EXIT", 0);
	cobc_cs_check = CB_CS_EXIT;
  }
    break;

  case 1001:

/* Line 1806 of yacc.c  */
#line 7003 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 1003:

/* Line 1806 of yacc.c  */
#line 7011 "parser.y"
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
#line 7032 "parser.y"
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
#line 7046 "parser.y"
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
#line 7068 "parser.y"
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
#line 7090 "parser.y"
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
#line 7110 "parser.y"
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
#line 7132 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1010:

/* Line 1806 of yacc.c  */
#line 7133 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1011:

/* Line 1806 of yacc.c  */
#line 7141 "parser.y"
    {
	begin_statement ("FREE", 0);
	current_statement->flag_no_based = 1;
  }
    break;

  case 1013:

/* Line 1806 of yacc.c  */
#line 7150 "parser.y"
    {
	cb_emit_free ((yyvsp[(1) - (1)]));
  }
    break;

  case 1014:

/* Line 1806 of yacc.c  */
#line 7160 "parser.y"
    {
	begin_statement ("GENERATE", 0);
	PENDING("GENERATE");
  }
    break;

  case 1017:

/* Line 1806 of yacc.c  */
#line 7176 "parser.y"
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
#line 7189 "parser.y"
    {
	cb_emit_goto ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
	start_debug = save_debug;
  }
    break;

  case 1020:

/* Line 1806 of yacc.c  */
#line 7197 "parser.y"
    {
	check_unreached = 1;
	(yyval) = NULL;
  }
    break;

  case 1021:

/* Line 1806 of yacc.c  */
#line 7202 "parser.y"
    {
	check_unreached = 0;
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 1022:

/* Line 1806 of yacc.c  */
#line 7213 "parser.y"
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
#line 7228 "parser.y"
    {
	begin_statement ("IF", TERM_IF);
  }
    break;

  case 1025:

/* Line 1806 of yacc.c  */
#line 7237 "parser.y"
    {
	cb_emit_if ((yyvsp[(-1) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1026:

/* Line 1806 of yacc.c  */
#line 7241 "parser.y"
    {
	cb_emit_if ((yyvsp[(-1) - (2)]), NULL, (yyvsp[(2) - (2)]));
  }
    break;

  case 1027:

/* Line 1806 of yacc.c  */
#line 7245 "parser.y"
    {
	cb_emit_if ((yyvsp[(-1) - (1)]), (yyvsp[(1) - (1)]), NULL);
  }
    break;

  case 1028:

/* Line 1806 of yacc.c  */
#line 7252 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), IF);
  }
    break;

  case 1029:

/* Line 1806 of yacc.c  */
#line 7256 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), IF);
  }
    break;

  case 1030:

/* Line 1806 of yacc.c  */
#line 7266 "parser.y"
    {
	begin_statement ("INITIALIZE", 0);
  }
    break;

  case 1032:

/* Line 1806 of yacc.c  */
#line 7275 "parser.y"
    {
	cb_emit_initialize ((yyvsp[(1) - (5)]), (yyvsp[(2) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]), (yyvsp[(5) - (5)]));
  }
    break;

  case 1033:

/* Line 1806 of yacc.c  */
#line 7281 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1034:

/* Line 1806 of yacc.c  */
#line 7282 "parser.y"
    { (yyval) = cb_true; }
    break;

  case 1035:

/* Line 1806 of yacc.c  */
#line 7286 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1036:

/* Line 1806 of yacc.c  */
#line 7287 "parser.y"
    { (yyval) = cb_true; }
    break;

  case 1037:

/* Line 1806 of yacc.c  */
#line 7288 "parser.y"
    { (yyval) = (yyvsp[(1) - (3)]); }
    break;

  case 1038:

/* Line 1806 of yacc.c  */
#line 7293 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1039:

/* Line 1806 of yacc.c  */
#line 7297 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1040:

/* Line 1806 of yacc.c  */
#line 7304 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1041:

/* Line 1806 of yacc.c  */
#line 7309 "parser.y"
    {
	(yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1042:

/* Line 1806 of yacc.c  */
#line 7316 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1043:

/* Line 1806 of yacc.c  */
#line 7322 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_ALPHABETIC); }
    break;

  case 1044:

/* Line 1806 of yacc.c  */
#line 7323 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC); }
    break;

  case 1045:

/* Line 1806 of yacc.c  */
#line 7324 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC); }
    break;

  case 1046:

/* Line 1806 of yacc.c  */
#line 7325 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC_EDITED); }
    break;

  case 1047:

/* Line 1806 of yacc.c  */
#line 7326 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC_EDITED); }
    break;

  case 1048:

/* Line 1806 of yacc.c  */
#line 7327 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL); }
    break;

  case 1049:

/* Line 1806 of yacc.c  */
#line 7328 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL_EDITED); }
    break;

  case 1050:

/* Line 1806 of yacc.c  */
#line 7333 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1051:

/* Line 1806 of yacc.c  */
#line 7337 "parser.y"
    {
	(yyval) = cb_true;
  }
    break;

  case 1052:

/* Line 1806 of yacc.c  */
#line 7346 "parser.y"
    {
	begin_statement ("INITIATE", 0);
	PENDING("INITIATE");
  }
    break;

  case 1054:

/* Line 1806 of yacc.c  */
#line 7355 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(1) - (1)]) != cb_error_node) {
	}
  }
    break;

  case 1055:

/* Line 1806 of yacc.c  */
#line 7361 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(2) - (2)]) != cb_error_node) {
	}
  }
    break;

  case 1056:

/* Line 1806 of yacc.c  */
#line 7372 "parser.y"
    {
	begin_statement ("INSPECT", 0);
	inspect_keyword = 0;
  }
    break;

  case 1059:

/* Line 1806 of yacc.c  */
#line 7385 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1060:

/* Line 1806 of yacc.c  */
#line 7389 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1061:

/* Line 1806 of yacc.c  */
#line 7393 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1066:

/* Line 1806 of yacc.c  */
#line 7409 "parser.y"
    {
	cb_init_tallying ();
  }
    break;

  case 1067:

/* Line 1806 of yacc.c  */
#line 7413 "parser.y"
    {
	cb_emit_inspect ((yyvsp[(0) - (3)]), (yyvsp[(3) - (3)]), cb_int0, 0);
	(yyval) = (yyvsp[(0) - (3)]);
  }
    break;

  case 1068:

/* Line 1806 of yacc.c  */
#line 7423 "parser.y"
    {
	cb_emit_inspect ((yyvsp[(0) - (2)]), (yyvsp[(2) - (2)]), cb_int1, 1);
	inspect_keyword = 0;
  }
    break;

  case 1069:

/* Line 1806 of yacc.c  */
#line 7433 "parser.y"
    {
	cb_tree		x;
	x = cb_build_converting ((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]), (yyvsp[(5) - (5)]));
	cb_emit_inspect ((yyvsp[(0) - (5)]), x, cb_int0, 2);
  }
    break;

  case 1070:

/* Line 1806 of yacc.c  */
#line 7441 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1071:

/* Line 1806 of yacc.c  */
#line 7442 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1072:

/* Line 1806 of yacc.c  */
#line 7446 "parser.y"
    { (yyval) = cb_build_tallying_data ((yyvsp[(1) - (2)])); }
    break;

  case 1073:

/* Line 1806 of yacc.c  */
#line 7447 "parser.y"
    { (yyval) = cb_build_tallying_characters ((yyvsp[(2) - (2)])); }
    break;

  case 1074:

/* Line 1806 of yacc.c  */
#line 7448 "parser.y"
    { (yyval) = cb_build_tallying_all (); }
    break;

  case 1075:

/* Line 1806 of yacc.c  */
#line 7449 "parser.y"
    { (yyval) = cb_build_tallying_leading (); }
    break;

  case 1076:

/* Line 1806 of yacc.c  */
#line 7450 "parser.y"
    { (yyval) = cb_build_tallying_trailing (); }
    break;

  case 1077:

/* Line 1806 of yacc.c  */
#line 7451 "parser.y"
    { (yyval) = cb_build_tallying_value ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1078:

/* Line 1806 of yacc.c  */
#line 7455 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1079:

/* Line 1806 of yacc.c  */
#line 7456 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1080:

/* Line 1806 of yacc.c  */
#line 7461 "parser.y"
    {
	(yyval) = cb_build_replacing_characters ((yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));
	inspect_keyword = 0;
  }
    break;

  case 1081:

/* Line 1806 of yacc.c  */
#line 7466 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1082:

/* Line 1806 of yacc.c  */
#line 7472 "parser.y"
    { /* Nothing */ }
    break;

  case 1083:

/* Line 1806 of yacc.c  */
#line 7473 "parser.y"
    { inspect_keyword = 1; }
    break;

  case 1084:

/* Line 1806 of yacc.c  */
#line 7474 "parser.y"
    { inspect_keyword = 2; }
    break;

  case 1085:

/* Line 1806 of yacc.c  */
#line 7475 "parser.y"
    { inspect_keyword = 3; }
    break;

  case 1086:

/* Line 1806 of yacc.c  */
#line 7476 "parser.y"
    { inspect_keyword = 4; }
    break;

  case 1087:

/* Line 1806 of yacc.c  */
#line 7481 "parser.y"
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
#line 7508 "parser.y"
    {
	(yyval) = cb_build_inspect_region_start ();
  }
    break;

  case 1089:

/* Line 1806 of yacc.c  */
#line 7512 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1090:

/* Line 1806 of yacc.c  */
#line 7519 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(0) - (3)]), CB_BUILD_FUNCALL_1 ("cob_inspect_before", (yyvsp[(3) - (3)])));
  }
    break;

  case 1091:

/* Line 1806 of yacc.c  */
#line 7523 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(0) - (3)]), CB_BUILD_FUNCALL_1 ("cob_inspect_after", (yyvsp[(3) - (3)])));
  }
    break;

  case 1092:

/* Line 1806 of yacc.c  */
#line 7532 "parser.y"
    {
	begin_statement ("MERGE", 0);
	current_statement->flag_merge = 1;
  }
    break;

  case 1094:

/* Line 1806 of yacc.c  */
#line 7544 "parser.y"
    {
	begin_statement ("MOVE", 0);
  }
    break;

  case 1096:

/* Line 1806 of yacc.c  */
#line 7552 "parser.y"
    {
	cb_emit_move ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1097:

/* Line 1806 of yacc.c  */
#line 7556 "parser.y"
    {
	cb_emit_move_corresponding ((yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1098:

/* Line 1806 of yacc.c  */
#line 7566 "parser.y"
    {
	begin_statement ("MULTIPLY", TERM_MULTIPLY);
  }
    break;

  case 1100:

/* Line 1806 of yacc.c  */
#line 7575 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '*', (yyvsp[(1) - (4)]));
  }
    break;

  case 1101:

/* Line 1806 of yacc.c  */
#line 7579 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_op ((yyvsp[(1) - (6)]), '*', (yyvsp[(3) - (6)])));
  }
    break;

  case 1102:

/* Line 1806 of yacc.c  */
#line 7586 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), MULTIPLY);
  }
    break;

  case 1103:

/* Line 1806 of yacc.c  */
#line 7590 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), MULTIPLY);
  }
    break;

  case 1104:

/* Line 1806 of yacc.c  */
#line 7600 "parser.y"
    {
	begin_statement ("OPEN", 0);
  }
    break;

  case 1106:

/* Line 1806 of yacc.c  */
#line 7608 "parser.y"
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
#line 7629 "parser.y"
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
#line 7652 "parser.y"
    { (yyval) = cb_int (COB_OPEN_INPUT); }
    break;

  case 1109:

/* Line 1806 of yacc.c  */
#line 7653 "parser.y"
    { (yyval) = cb_int (COB_OPEN_OUTPUT); }
    break;

  case 1110:

/* Line 1806 of yacc.c  */
#line 7654 "parser.y"
    { (yyval) = cb_int (COB_OPEN_I_O); }
    break;

  case 1111:

/* Line 1806 of yacc.c  */
#line 7655 "parser.y"
    { (yyval) = cb_int (COB_OPEN_EXTEND); }
    break;

  case 1112:

/* Line 1806 of yacc.c  */
#line 7659 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1113:

/* Line 1806 of yacc.c  */
#line 7660 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1114:

/* Line 1806 of yacc.c  */
#line 7664 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1115:

/* Line 1806 of yacc.c  */
#line 7665 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1116:

/* Line 1806 of yacc.c  */
#line 7666 "parser.y"
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
    break;

  case 1117:

/* Line 1806 of yacc.c  */
#line 7668 "parser.y"
    {
	(void)cb_verify (CB_OBSOLETE, "REVERSED");
	(yyval) = NULL;
  }
    break;

  case 1118:

/* Line 1806 of yacc.c  */
#line 7679 "parser.y"
    {
	begin_statement ("PERFORM", TERM_PERFORM);
	/* Turn off field debug - PERFORM is special */
	save_debug = start_debug;
	start_debug = 0;
  }
    break;

  case 1120:

/* Line 1806 of yacc.c  */
#line 7690 "parser.y"
    {
	cb_emit_perform ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
	start_debug = save_debug;
  }
    break;

  case 1121:

/* Line 1806 of yacc.c  */
#line 7695 "parser.y"
    {
	CB_ADD_TO_CHAIN ((yyvsp[(1) - (1)]), perform_stack);
	/* Restore field debug before inline statements */
	start_debug = save_debug;
  }
    break;

  case 1122:

/* Line 1806 of yacc.c  */
#line 7701 "parser.y"
    {
	perform_stack = CB_CHAIN (perform_stack);
	cb_emit_perform ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
  }
    break;

  case 1123:

/* Line 1806 of yacc.c  */
#line 7706 "parser.y"
    {
	cb_emit_perform ((yyvsp[(1) - (2)]), NULL);
	start_debug = save_debug;
  }
    break;

  case 1124:

/* Line 1806 of yacc.c  */
#line 7714 "parser.y"
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
#line 7722 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), PERFORM);
  }
    break;

  case 1126:

/* Line 1806 of yacc.c  */
#line 7729 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), PERFORM);
  }
    break;

  case 1127:

/* Line 1806 of yacc.c  */
#line 7733 "parser.y"
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
#line 7746 "parser.y"
    {
	/* Return from $1 */
	CB_REFERENCE ((yyvsp[(1) - (1)]))->length = cb_true;
	CB_REFERENCE ((yyvsp[(1) - (1)]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (1)]), (yyvsp[(1) - (1)]));
  }
    break;

  case 1129:

/* Line 1806 of yacc.c  */
#line 7753 "parser.y"
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
#line 7764 "parser.y"
    {
	(yyval) = cb_build_perform_once (NULL);
  }
    break;

  case 1131:

/* Line 1806 of yacc.c  */
#line 7768 "parser.y"
    {
	(yyval) = cb_build_perform_times ((yyvsp[(1) - (2)]));
	current_program->loop_counter++;
  }
    break;

  case 1132:

/* Line 1806 of yacc.c  */
#line 7773 "parser.y"
    {
	(yyval) = cb_build_perform_forever (NULL);
  }
    break;

  case 1133:

/* Line 1806 of yacc.c  */
#line 7777 "parser.y"
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
#line 7788 "parser.y"
    {
	(yyval) = cb_build_perform_until ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1135:

/* Line 1806 of yacc.c  */
#line 7794 "parser.y"
    { (yyval) = CB_BEFORE; }
    break;

  case 1136:

/* Line 1806 of yacc.c  */
#line 7795 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1137:

/* Line 1806 of yacc.c  */
#line 7799 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1138:

/* Line 1806 of yacc.c  */
#line 7800 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1139:

/* Line 1806 of yacc.c  */
#line 7803 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1140:

/* Line 1806 of yacc.c  */
#line 7805 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 1141:

/* Line 1806 of yacc.c  */
#line 7810 "parser.y"
    {
	(yyval) = cb_build_perform_varying ((yyvsp[(1) - (7)]), (yyvsp[(3) - (7)]), (yyvsp[(5) - (7)]), (yyvsp[(7) - (7)]));
  }
    break;

  case 1142:

/* Line 1806 of yacc.c  */
#line 7820 "parser.y"
    {
	begin_statement ("READ", TERM_READ);
  }
    break;

  case 1144:

/* Line 1806 of yacc.c  */
#line 7829 "parser.y"
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
#line 7855 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1146:

/* Line 1806 of yacc.c  */
#line 7856 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1147:

/* Line 1806 of yacc.c  */
#line 7861 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1148:

/* Line 1806 of yacc.c  */
#line 7865 "parser.y"
    {
	(yyval) = cb_int3;
  }
    break;

  case 1149:

/* Line 1806 of yacc.c  */
#line 7869 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1150:

/* Line 1806 of yacc.c  */
#line 7873 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1151:

/* Line 1806 of yacc.c  */
#line 7877 "parser.y"
    {
	(yyval) = cb_int2;
  }
    break;

  case 1152:

/* Line 1806 of yacc.c  */
#line 7881 "parser.y"
    {
	(yyval) = cb_int3;
  }
    break;

  case 1153:

/* Line 1806 of yacc.c  */
#line 7885 "parser.y"
    {
	(yyval) = cb_int4;
  }
    break;

  case 1154:

/* Line 1806 of yacc.c  */
#line 7891 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1155:

/* Line 1806 of yacc.c  */
#line 7892 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1158:

/* Line 1806 of yacc.c  */
#line 7902 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), READ);
  }
    break;

  case 1159:

/* Line 1806 of yacc.c  */
#line 7906 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), READ);
  }
    break;

  case 1160:

/* Line 1806 of yacc.c  */
#line 7916 "parser.y"
    {
	begin_statement ("READY TRACE", 0);
	cb_emit_ready_trace ();
  }
    break;

  case 1161:

/* Line 1806 of yacc.c  */
#line 7926 "parser.y"
    {
	begin_statement ("RELEASE", 0);
  }
    break;

  case 1163:

/* Line 1806 of yacc.c  */
#line 7934 "parser.y"
    {
	cb_emit_release ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1164:

/* Line 1806 of yacc.c  */
#line 7944 "parser.y"
    {
	begin_statement ("RESET TRACE", 0);
	cb_emit_reset_trace ();
  }
    break;

  case 1165:

/* Line 1806 of yacc.c  */
#line 7954 "parser.y"
    {
	begin_statement ("RETURN", TERM_RETURN);
  }
    break;

  case 1167:

/* Line 1806 of yacc.c  */
#line 7963 "parser.y"
    {
	cb_emit_return ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
  }
    break;

  case 1168:

/* Line 1806 of yacc.c  */
#line 7970 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), RETURN);
  }
    break;

  case 1169:

/* Line 1806 of yacc.c  */
#line 7974 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), RETURN);
  }
    break;

  case 1170:

/* Line 1806 of yacc.c  */
#line 7984 "parser.y"
    {
	begin_statement ("REWRITE", TERM_REWRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
    break;

  case 1172:

/* Line 1806 of yacc.c  */
#line 7996 "parser.y"
    {
	cb_emit_rewrite ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]));
	start_debug = save_debug;
  }
    break;

  case 1173:

/* Line 1806 of yacc.c  */
#line 8004 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1174:

/* Line 1806 of yacc.c  */
#line 8008 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1175:

/* Line 1806 of yacc.c  */
#line 8012 "parser.y"
    {
	(yyval) = cb_int2;
  }
    break;

  case 1176:

/* Line 1806 of yacc.c  */
#line 8019 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), REWRITE);
  }
    break;

  case 1177:

/* Line 1806 of yacc.c  */
#line 8023 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), REWRITE);
  }
    break;

  case 1178:

/* Line 1806 of yacc.c  */
#line 8033 "parser.y"
    {
	begin_statement ("ROLLBACK", 0);
	cb_emit_rollback ();
  }
    break;

  case 1179:

/* Line 1806 of yacc.c  */
#line 8044 "parser.y"
    {
	begin_statement ("SEARCH", TERM_SEARCH);
  }
    break;

  case 1181:

/* Line 1806 of yacc.c  */
#line 8053 "parser.y"
    {
	cb_emit_search ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1182:

/* Line 1806 of yacc.c  */
#line 8058 "parser.y"
    {
	current_statement->name = (const char *)"SEARCH ALL";
	cb_emit_search_all ((yyvsp[(2) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]), (yyvsp[(6) - (6)]));
  }
    break;

  case 1183:

/* Line 1806 of yacc.c  */
#line 8065 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1184:

/* Line 1806 of yacc.c  */
#line 8066 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1185:

/* Line 1806 of yacc.c  */
#line 8071 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1186:

/* Line 1806 of yacc.c  */
#line 8076 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1187:

/* Line 1806 of yacc.c  */
#line 8083 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1188:

/* Line 1806 of yacc.c  */
#line 8087 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
  }
    break;

  case 1189:

/* Line 1806 of yacc.c  */
#line 8095 "parser.y"
    {
	(yyval) = cb_build_if_check_break ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1190:

/* Line 1806 of yacc.c  */
#line 8102 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SEARCH);
  }
    break;

  case 1191:

/* Line 1806 of yacc.c  */
#line 8106 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SEARCH);
  }
    break;

  case 1192:

/* Line 1806 of yacc.c  */
#line 8116 "parser.y"
    {
	begin_statement ("SET", 0);
	setattr_val_on = 0;
	setattr_val_off = 0;
	cobc_cs_check = CB_CS_SET;
  }
    break;

  case 1193:

/* Line 1806 of yacc.c  */
#line 8123 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 1200:

/* Line 1806 of yacc.c  */
#line 8138 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1201:

/* Line 1806 of yacc.c  */
#line 8139 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1202:

/* Line 1806 of yacc.c  */
#line 8143 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1203:

/* Line 1806 of yacc.c  */
#line 8144 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1204:

/* Line 1806 of yacc.c  */
#line 8151 "parser.y"
    {
	cb_emit_setenv ((yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1205:

/* Line 1806 of yacc.c  */
#line 8160 "parser.y"
    {
	cb_emit_set_attribute ((yyvsp[(1) - (3)]), setattr_val_on, setattr_val_off);
  }
    break;

  case 1208:

/* Line 1806 of yacc.c  */
#line 8172 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_BELL);
  }
    break;

  case 1209:

/* Line 1806 of yacc.c  */
#line 8176 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_BLINK);
  }
    break;

  case 1210:

/* Line 1806 of yacc.c  */
#line 8180 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 1211:

/* Line 1806 of yacc.c  */
#line 8184 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_LOWLIGHT);
  }
    break;

  case 1212:

/* Line 1806 of yacc.c  */
#line 8188 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_REVERSE);
  }
    break;

  case 1213:

/* Line 1806 of yacc.c  */
#line 8192 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_UNDERLINE);
  }
    break;

  case 1214:

/* Line 1806 of yacc.c  */
#line 8196 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_LEFTLINE);
  }
    break;

  case 1215:

/* Line 1806 of yacc.c  */
#line 8200 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_OVERLINE);
  }
    break;

  case 1216:

/* Line 1806 of yacc.c  */
#line 8209 "parser.y"
    {
	cb_emit_set_to ((yyvsp[(1) - (4)]), cb_build_ppointer ((yyvsp[(4) - (4)])));
  }
    break;

  case 1217:

/* Line 1806 of yacc.c  */
#line 8213 "parser.y"
    {
	cb_emit_set_to ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1218:

/* Line 1806 of yacc.c  */
#line 8222 "parser.y"
    {
	cb_emit_set_up_down ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1221:

/* Line 1806 of yacc.c  */
#line 8236 "parser.y"
    {
	cb_emit_set_on_off ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1224:

/* Line 1806 of yacc.c  */
#line 8250 "parser.y"
    {
	cb_emit_set_true ((yyvsp[(1) - (3)]));
  }
    break;

  case 1225:

/* Line 1806 of yacc.c  */
#line 8254 "parser.y"
    {
	cb_emit_set_false ((yyvsp[(1) - (3)]));
  }
    break;

  case 1226:

/* Line 1806 of yacc.c  */
#line 8264 "parser.y"
    {
	begin_statement ("SORT", 0);
  }
    break;

  case 1228:

/* Line 1806 of yacc.c  */
#line 8272 "parser.y"
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
#line 8293 "parser.y"
    {
	if ((yyvsp[(5) - (7)]) && CB_VALID_TREE ((yyvsp[(1) - (7)]))) {
		cb_emit_sort_finish ((yyvsp[(1) - (7)]));
	}
  }
    break;

  case 1230:

/* Line 1806 of yacc.c  */
#line 8302 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1231:

/* Line 1806 of yacc.c  */
#line 8307 "parser.y"
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
#line 8325 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1233:

/* Line 1806 of yacc.c  */
#line 8326 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1235:

/* Line 1806 of yacc.c  */
#line 8331 "parser.y"
    {
	/* The OC sort is a stable sort. ie. Dups are per default in order */
	/* Therefore nothing to do here */
  }
    break;

  case 1236:

/* Line 1806 of yacc.c  */
#line 8338 "parser.y"
    { (yyval) = cb_null; }
    break;

  case 1237:

/* Line 1806 of yacc.c  */
#line 8339 "parser.y"
    { (yyval) = cb_ref ((yyvsp[(3) - (3)])); }
    break;

  case 1238:

/* Line 1806 of yacc.c  */
#line 8344 "parser.y"
    {
	if ((yyvsp[(0) - (0)]) && CB_FILE_P (cb_ref ((yyvsp[(0) - (0)])))) {
		cb_error (_("File sort requires USING or INPUT PROCEDURE"));
	}
  }
    break;

  case 1239:

/* Line 1806 of yacc.c  */
#line 8350 "parser.y"
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
#line 8360 "parser.y"
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
#line 8375 "parser.y"
    {
	if ((yyvsp[(-1) - (0)]) && CB_FILE_P (cb_ref ((yyvsp[(-1) - (0)])))) {
		cb_error (_("File sort requires GIVING or OUTPUT PROCEDURE"));
	}
  }
    break;

  case 1242:

/* Line 1806 of yacc.c  */
#line 8381 "parser.y"
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
#line 8391 "parser.y"
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
#line 8407 "parser.y"
    {
	begin_statement ("START", TERM_START);
	start_tree = cb_int (COB_EQ);
  }
    break;

  case 1246:

/* Line 1806 of yacc.c  */
#line 8417 "parser.y"
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
#line 8429 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1248:

/* Line 1806 of yacc.c  */
#line 8433 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 1249:

/* Line 1806 of yacc.c  */
#line 8440 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1250:

/* Line 1806 of yacc.c  */
#line 8444 "parser.y"
    {
	start_tree = (yyvsp[(3) - (4)]);
	(yyval) = (yyvsp[(4) - (4)]);
  }
    break;

  case 1251:

/* Line 1806 of yacc.c  */
#line 8449 "parser.y"
    {
	start_tree = cb_int (COB_FI);
	(yyval) = NULL;
  }
    break;

  case 1252:

/* Line 1806 of yacc.c  */
#line 8454 "parser.y"
    {
	start_tree = cb_int (COB_LA);
	(yyval) = NULL;
  }
    break;

  case 1253:

/* Line 1806 of yacc.c  */
#line 8461 "parser.y"
    { (yyval) = cb_int (COB_EQ); }
    break;

  case 1254:

/* Line 1806 of yacc.c  */
#line 8462 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_LE : COB_GT); }
    break;

  case 1255:

/* Line 1806 of yacc.c  */
#line 8463 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_GE : COB_LT); }
    break;

  case 1256:

/* Line 1806 of yacc.c  */
#line 8464 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_LT : COB_GE); }
    break;

  case 1257:

/* Line 1806 of yacc.c  */
#line 8465 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_GT : COB_LE); }
    break;

  case 1258:

/* Line 1806 of yacc.c  */
#line 8466 "parser.y"
    { (yyval) = cb_int (COB_NE); }
    break;

  case 1259:

/* Line 1806 of yacc.c  */
#line 8471 "parser.y"
    {
	cb_error_x (CB_TREE (current_statement),
		    _("NOT EQUAL condition disallowed on START statement"));
  }
    break;

  case 1262:

/* Line 1806 of yacc.c  */
#line 8484 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), START);
  }
    break;

  case 1263:

/* Line 1806 of yacc.c  */
#line 8488 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), START);
  }
    break;

  case 1264:

/* Line 1806 of yacc.c  */
#line 8498 "parser.y"
    {
	begin_statement ("STOP RUN", 0);
  }
    break;

  case 1265:

/* Line 1806 of yacc.c  */
#line 8502 "parser.y"
    {
	cb_emit_stop_run ((yyvsp[(4) - (4)]));
	check_unreached = 1;
	cobc_cs_check = 0;
  }
    break;

  case 1266:

/* Line 1806 of yacc.c  */
#line 8508 "parser.y"
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
#line 8520 "parser.y"
    {
	(yyval) = current_program->cb_return_code;
  }
    break;

  case 1268:

/* Line 1806 of yacc.c  */
#line 8524 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1269:

/* Line 1806 of yacc.c  */
#line 8528 "parser.y"
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
#line 8536 "parser.y"
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
#line 8547 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1272:

/* Line 1806 of yacc.c  */
#line 8551 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1273:

/* Line 1806 of yacc.c  */
#line 8557 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1274:

/* Line 1806 of yacc.c  */
#line 8558 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 1275:

/* Line 1806 of yacc.c  */
#line 8559 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 1276:

/* Line 1806 of yacc.c  */
#line 8560 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 1277:

/* Line 1806 of yacc.c  */
#line 8567 "parser.y"
    {
	begin_statement ("STRING", TERM_STRING);
  }
    break;

  case 1279:

/* Line 1806 of yacc.c  */
#line 8576 "parser.y"
    {
	cb_emit_string ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]));
  }
    break;

  case 1280:

/* Line 1806 of yacc.c  */
#line 8582 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1281:

/* Line 1806 of yacc.c  */
#line 8583 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1282:

/* Line 1806 of yacc.c  */
#line 8587 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1283:

/* Line 1806 of yacc.c  */
#line 8588 "parser.y"
    { (yyval) = CB_BUILD_PAIR (cb_int0, NULL); }
    break;

  case 1284:

/* Line 1806 of yacc.c  */
#line 8589 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(3) - (3)]), NULL); }
    break;

  case 1285:

/* Line 1806 of yacc.c  */
#line 8593 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1286:

/* Line 1806 of yacc.c  */
#line 8594 "parser.y"
    { (yyval) = (yyvsp[(4) - (4)]); }
    break;

  case 1287:

/* Line 1806 of yacc.c  */
#line 8599 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), STRING);
  }
    break;

  case 1288:

/* Line 1806 of yacc.c  */
#line 8603 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), STRING);
  }
    break;

  case 1289:

/* Line 1806 of yacc.c  */
#line 8613 "parser.y"
    {
	begin_statement ("SUBTRACT", TERM_SUBTRACT);
  }
    break;

  case 1291:

/* Line 1806 of yacc.c  */
#line 8622 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '-', cb_build_binary_list ((yyvsp[(1) - (4)]), '+'));
  }
    break;

  case 1292:

/* Line 1806 of yacc.c  */
#line 8626 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_list (CB_BUILD_CHAIN ((yyvsp[(3) - (6)]), (yyvsp[(1) - (6)])), '-'));
  }
    break;

  case 1293:

/* Line 1806 of yacc.c  */
#line 8630 "parser.y"
    {
	cb_emit_corresponding (cb_build_sub, (yyvsp[(4) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(5) - (6)]));
  }
    break;

  case 1294:

/* Line 1806 of yacc.c  */
#line 8637 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SUBTRACT);
  }
    break;

  case 1295:

/* Line 1806 of yacc.c  */
#line 8641 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SUBTRACT);
  }
    break;

  case 1296:

/* Line 1806 of yacc.c  */
#line 8651 "parser.y"
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
#line 8669 "parser.y"
    {
	begin_statement ("TERMINATE", 0);
	PENDING("TERMINATE");
  }
    break;

  case 1301:

/* Line 1806 of yacc.c  */
#line 8678 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(1) - (1)]) != cb_error_node) {
	}
  }
    break;

  case 1302:

/* Line 1806 of yacc.c  */
#line 8684 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(2) - (2)]) != cb_error_node) {
	}
  }
    break;

  case 1303:

/* Line 1806 of yacc.c  */
#line 8695 "parser.y"
    {
	begin_statement ("TRANSFORM", 0);
  }
    break;

  case 1305:

/* Line 1806 of yacc.c  */
#line 8703 "parser.y"
    {
	cb_tree		x;

	x = cb_build_converting ((yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), cb_build_inspect_region_start ());
	cb_emit_inspect ((yyvsp[(1) - (5)]), x, cb_int0, 2);
  }
    break;

  case 1306:

/* Line 1806 of yacc.c  */
#line 8716 "parser.y"
    {
	begin_statement ("UNLOCK", 0);
  }
    break;

  case 1308:

/* Line 1806 of yacc.c  */
#line 8724 "parser.y"
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
#line 8747 "parser.y"
    {
	begin_statement ("UNSTRING", TERM_UNSTRING);
  }
    break;

  case 1314:

/* Line 1806 of yacc.c  */
#line 8757 "parser.y"
    {
	cb_emit_unstring ((yyvsp[(1) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(4) - (6)]), (yyvsp[(5) - (6)]));
  }
    break;

  case 1315:

/* Line 1806 of yacc.c  */
#line 8763 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1316:

/* Line 1806 of yacc.c  */
#line 8765 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1317:

/* Line 1806 of yacc.c  */
#line 8769 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1318:

/* Line 1806 of yacc.c  */
#line 8771 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 1319:

/* Line 1806 of yacc.c  */
#line 8776 "parser.y"
    {
	(yyval) = cb_build_unstring_delimited ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1320:

/* Line 1806 of yacc.c  */
#line 8782 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(2) - (2)])); }
    break;

  case 1321:

/* Line 1806 of yacc.c  */
#line 8784 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1322:

/* Line 1806 of yacc.c  */
#line 8789 "parser.y"
    {
	(yyval) = cb_build_unstring_into ((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1323:

/* Line 1806 of yacc.c  */
#line 8795 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1324:

/* Line 1806 of yacc.c  */
#line 8796 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1325:

/* Line 1806 of yacc.c  */
#line 8800 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1326:

/* Line 1806 of yacc.c  */
#line 8801 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1327:

/* Line 1806 of yacc.c  */
#line 8805 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1328:

/* Line 1806 of yacc.c  */
#line 8806 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1329:

/* Line 1806 of yacc.c  */
#line 8811 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), UNSTRING);
  }
    break;

  case 1330:

/* Line 1806 of yacc.c  */
#line 8815 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), UNSTRING);
  }
    break;

  case 1331:

/* Line 1806 of yacc.c  */
#line 8825 "parser.y"
    {
	skip_statements = 0;
	in_debugging = 0;
  }
    break;

  case 1338:

/* Line 1806 of yacc.c  */
#line 8843 "parser.y"
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
#line 8868 "parser.y"
    {
	use_global_ind = 0;
  }
    break;

  case 1340:

/* Line 1806 of yacc.c  */
#line 8872 "parser.y"
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
#line 8884 "parser.y"
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
#line 8894 "parser.y"
    {
	current_program->global_handler[COB_OPEN_INPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_INPUT].handler_prog = current_program;
  }
    break;

  case 1343:

/* Line 1806 of yacc.c  */
#line 8899 "parser.y"
    {
	current_program->global_handler[COB_OPEN_OUTPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_OUTPUT].handler_prog = current_program;
  }
    break;

  case 1344:

/* Line 1806 of yacc.c  */
#line 8904 "parser.y"
    {
	current_program->global_handler[COB_OPEN_I_O].handler_label = current_section;
	current_program->global_handler[COB_OPEN_I_O].handler_prog = current_program;
  }
    break;

  case 1345:

/* Line 1806 of yacc.c  */
#line 8909 "parser.y"
    {
	current_program->global_handler[COB_OPEN_EXTEND].handler_label = current_section;
	current_program->global_handler[COB_OPEN_EXTEND].handler_prog = current_program;
  }
    break;

  case 1346:

/* Line 1806 of yacc.c  */
#line 8917 "parser.y"
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
#line 8960 "parser.y"
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
#line 9000 "parser.y"
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
#line 9010 "parser.y"
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
#line 9040 "parser.y"
    {
	if (current_program->nested_level) {
		cb_error (_("USE AT is invalid in nested program"));
	}
  }
    break;

  case 1357:

/* Line 1806 of yacc.c  */
#line 9049 "parser.y"
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM START"));
	/* emit_entry ("_START", 0, NULL); */
	PENDING ("USE AT PROGRAM START");
  }
    break;

  case 1358:

/* Line 1806 of yacc.c  */
#line 9055 "parser.y"
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM END"));
	/* emit_entry ("_END", 0, NULL); */
	PENDING ("USE AT PROGRAM END");
  }
    break;

  case 1359:

/* Line 1806 of yacc.c  */
#line 9065 "parser.y"
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE BEFORE REPORTING"));
	PENDING ("USE BEFORE REPORTING");
  }
    break;

  case 1360:

/* Line 1806 of yacc.c  */
#line 9074 "parser.y"
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE AFTER EXCEPTION CONDITION"));
	PENDING ("USE AFTER EXCEPTION CONDITION");
  }
    break;

  case 1363:

/* Line 1806 of yacc.c  */
#line 9090 "parser.y"
    {
	begin_statement ("WRITE", TERM_WRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
    break;

  case 1365:

/* Line 1806 of yacc.c  */
#line 9102 "parser.y"
    {
	if (CB_VALID_TREE ((yyvsp[(1) - (5)]))) {
		cb_emit_write ((yyvsp[(1) - (5)]), (yyvsp[(2) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]));
	}
	start_debug = save_debug;
  }
    break;

  case 1366:

/* Line 1806 of yacc.c  */
#line 9111 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1367:

/* Line 1806 of yacc.c  */
#line 9112 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1368:

/* Line 1806 of yacc.c  */
#line 9117 "parser.y"
    {
	(yyval) = cb_int0;
  }
    break;

  case 1369:

/* Line 1806 of yacc.c  */
#line 9121 "parser.y"
    {
	(yyval) = cb_build_write_advancing_lines ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
  }
    break;

  case 1370:

/* Line 1806 of yacc.c  */
#line 9125 "parser.y"
    {
	(yyval) = cb_build_write_advancing_mnemonic ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1371:

/* Line 1806 of yacc.c  */
#line 9129 "parser.y"
    {
	(yyval) = cb_build_write_advancing_page ((yyvsp[(1) - (3)]));
  }
    break;

  case 1372:

/* Line 1806 of yacc.c  */
#line 9135 "parser.y"
    { (yyval) = CB_BEFORE; }
    break;

  case 1373:

/* Line 1806 of yacc.c  */
#line 9136 "parser.y"
    { (yyval) = CB_AFTER; }
    break;

  case 1376:

/* Line 1806 of yacc.c  */
#line 9146 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), WRITE);
  }
    break;

  case 1377:

/* Line 1806 of yacc.c  */
#line 9150 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), WRITE);
  }
    break;

  case 1380:

/* Line 1806 of yacc.c  */
#line 9167 "parser.y"
    {
	current_statement->handler_id = COB_EC_IMP_ACCEPT;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1382:

/* Line 1806 of yacc.c  */
#line 9177 "parser.y"
    {
	current_statement->handler_id = COB_EC_IMP_ACCEPT;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1385:

/* Line 1806 of yacc.c  */
#line 9190 "parser.y"
    {
	current_statement->handler_id = COB_EC_IMP_DISPLAY;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1387:

/* Line 1806 of yacc.c  */
#line 9200 "parser.y"
    {
	current_statement->handler_id = COB_EC_IMP_DISPLAY;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1390:

/* Line 1806 of yacc.c  */
#line 9215 "parser.y"
    {
	current_statement->handler_id = COB_EC_SIZE;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1392:

/* Line 1806 of yacc.c  */
#line 9225 "parser.y"
    {
	current_statement->handler_id = COB_EC_SIZE;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1395:

/* Line 1806 of yacc.c  */
#line 9242 "parser.y"
    {
	current_statement->handler_id = COB_EC_OVERFLOW;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1397:

/* Line 1806 of yacc.c  */
#line 9253 "parser.y"
    {
	current_statement->handler_id = COB_EC_OVERFLOW;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1403:

/* Line 1806 of yacc.c  */
#line 9276 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_AT_END;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1404:

/* Line 1806 of yacc.c  */
#line 9285 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_AT_END;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1408:

/* Line 1806 of yacc.c  */
#line 9302 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_EOP;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1409:

/* Line 1806 of yacc.c  */
#line 9311 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_EOP;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1412:

/* Line 1806 of yacc.c  */
#line 9328 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_INVALID_KEY;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1414:

/* Line 1806 of yacc.c  */
#line 9338 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_INVALID_KEY;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1415:

/* Line 1806 of yacc.c  */
#line 9348 "parser.y"
    {
	(yyval) = cb_one;
  }
    break;

  case 1416:

/* Line 1806 of yacc.c  */
#line 9352 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
  }
    break;

  case 1417:

/* Line 1806 of yacc.c  */
#line 9362 "parser.y"
    {
	(yyval) = cb_build_cond ((yyvsp[(1) - (1)]));
  }
    break;

  case 1418:

/* Line 1806 of yacc.c  */
#line 9369 "parser.y"
    {
	(yyval) = cb_build_expr ((yyvsp[(1) - (1)]));
  }
    break;

  case 1419:

/* Line 1806 of yacc.c  */
#line 9375 "parser.y"
    {
	current_expr = NULL;
  }
    break;

  case 1420:

/* Line 1806 of yacc.c  */
#line 9379 "parser.y"
    {
	(yyval) = cb_list_reverse (current_expr);
  }
    break;

  case 1424:

/* Line 1806 of yacc.c  */
#line 9392 "parser.y"
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
#line 9400 "parser.y"
    { push_expr ('(', NULL); }
    break;

  case 1426:

/* Line 1806 of yacc.c  */
#line 9401 "parser.y"
    { push_expr (')', NULL); }
    break;

  case 1427:

/* Line 1806 of yacc.c  */
#line 9403 "parser.y"
    { push_expr ('+', NULL); }
    break;

  case 1428:

/* Line 1806 of yacc.c  */
#line 9404 "parser.y"
    { push_expr ('-', NULL); }
    break;

  case 1429:

/* Line 1806 of yacc.c  */
#line 9405 "parser.y"
    { push_expr ('*', NULL); }
    break;

  case 1430:

/* Line 1806 of yacc.c  */
#line 9406 "parser.y"
    { push_expr ('/', NULL); }
    break;

  case 1431:

/* Line 1806 of yacc.c  */
#line 9407 "parser.y"
    { push_expr ('^', NULL); }
    break;

  case 1432:

/* Line 1806 of yacc.c  */
#line 9409 "parser.y"
    { push_expr ('=', NULL); }
    break;

  case 1433:

/* Line 1806 of yacc.c  */
#line 9410 "parser.y"
    { push_expr ('>', NULL); }
    break;

  case 1434:

/* Line 1806 of yacc.c  */
#line 9411 "parser.y"
    { push_expr ('<', NULL); }
    break;

  case 1435:

/* Line 1806 of yacc.c  */
#line 9412 "parser.y"
    { push_expr (']', NULL); }
    break;

  case 1436:

/* Line 1806 of yacc.c  */
#line 9413 "parser.y"
    { push_expr ('[', NULL); }
    break;

  case 1437:

/* Line 1806 of yacc.c  */
#line 9414 "parser.y"
    { push_expr ('~', NULL); }
    break;

  case 1438:

/* Line 1806 of yacc.c  */
#line 9416 "parser.y"
    { push_expr ('!', NULL); }
    break;

  case 1439:

/* Line 1806 of yacc.c  */
#line 9417 "parser.y"
    { push_expr ('&', NULL); }
    break;

  case 1440:

/* Line 1806 of yacc.c  */
#line 9418 "parser.y"
    { push_expr ('|', NULL); }
    break;

  case 1441:

/* Line 1806 of yacc.c  */
#line 9420 "parser.y"
    { push_expr ('O', NULL); }
    break;

  case 1442:

/* Line 1806 of yacc.c  */
#line 9421 "parser.y"
    { push_expr ('9', NULL); }
    break;

  case 1443:

/* Line 1806 of yacc.c  */
#line 9422 "parser.y"
    { push_expr ('A', NULL); }
    break;

  case 1444:

/* Line 1806 of yacc.c  */
#line 9423 "parser.y"
    { push_expr ('L', NULL); }
    break;

  case 1445:

/* Line 1806 of yacc.c  */
#line 9424 "parser.y"
    { push_expr ('U', NULL); }
    break;

  case 1446:

/* Line 1806 of yacc.c  */
#line 9427 "parser.y"
    { push_expr ('P', NULL); }
    break;

  case 1447:

/* Line 1806 of yacc.c  */
#line 9428 "parser.y"
    { push_expr ('N', NULL); }
    break;

  case 1456:

/* Line 1806 of yacc.c  */
#line 9458 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1457:

/* Line 1806 of yacc.c  */
#line 9462 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1461:

/* Line 1806 of yacc.c  */
#line 9473 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '+', (yyvsp[(3) - (3)])); }
    break;

  case 1462:

/* Line 1806 of yacc.c  */
#line 9474 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '-', (yyvsp[(3) - (3)])); }
    break;

  case 1463:

/* Line 1806 of yacc.c  */
#line 9475 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1464:

/* Line 1806 of yacc.c  */
#line 9479 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '*', (yyvsp[(3) - (3)])); }
    break;

  case 1465:

/* Line 1806 of yacc.c  */
#line 9480 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '/', (yyvsp[(3) - (3)])); }
    break;

  case 1466:

/* Line 1806 of yacc.c  */
#line 9481 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1467:

/* Line 1806 of yacc.c  */
#line 9486 "parser.y"
    {
	(yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '^', (yyvsp[(3) - (3)]));
  }
    break;

  case 1468:

/* Line 1806 of yacc.c  */
#line 9489 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1469:

/* Line 1806 of yacc.c  */
#line 9493 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1470:

/* Line 1806 of yacc.c  */
#line 9494 "parser.y"
    { (yyval) = cb_build_binary_op (cb_zero, '-', (yyvsp[(2) - (2)])); }
    break;

  case 1471:

/* Line 1806 of yacc.c  */
#line 9495 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1472:

/* Line 1806 of yacc.c  */
#line 9498 "parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 1473:

/* Line 1806 of yacc.c  */
#line 9499 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1474:

/* Line 1806 of yacc.c  */
#line 9510 "parser.y"
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
#line 9522 "parser.y"
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
#line 9531 "parser.y"
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
#line 9543 "parser.y"
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
#line 9552 "parser.y"
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
#line 9564 "parser.y"
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
#line 9578 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1481:

/* Line 1806 of yacc.c  */
#line 9580 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1482:

/* Line 1806 of yacc.c  */
#line 9585 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
  }
    break;

  case 1483:

/* Line 1806 of yacc.c  */
#line 9593 "parser.y"
    { cb_build_identifier ((yyvsp[(1) - (1)]), 0); }
    break;

  case 1484:

/* Line 1806 of yacc.c  */
#line 9600 "parser.y"
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
#line 9620 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1486:

/* Line 1806 of yacc.c  */
#line 9624 "parser.y"
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
#line 9645 "parser.y"
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
#line 9686 "parser.y"
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
#line 9699 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1490:

/* Line 1806 of yacc.c  */
#line 9701 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1491:

/* Line 1806 of yacc.c  */
#line 9705 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1492:

/* Line 1806 of yacc.c  */
#line 9711 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1493:

/* Line 1806 of yacc.c  */
#line 9713 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1494:

/* Line 1806 of yacc.c  */
#line 9718 "parser.y"
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
#line 9732 "parser.y"
    {
	CB_REFERENCE ((yyvsp[(1) - (3)]))->chain = (yyvsp[(3) - (3)]);
  }
    break;

  case 1498:

/* Line 1806 of yacc.c  */
#line 9739 "parser.y"
    {
	(yyval) = cb_build_reference ((char *)(CB_LITERAL ((yyvsp[(1) - (1)]))->data));
	(yyval)->source_file = (yyvsp[(1) - (1)])->source_file;
	(yyval)->source_line = (yyvsp[(1) - (1)])->source_line;
  }
    break;

  case 1499:

/* Line 1806 of yacc.c  */
#line 9749 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1500:

/* Line 1806 of yacc.c  */
#line 9750 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1501:

/* Line 1806 of yacc.c  */
#line 9755 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
    break;

  case 1502:

/* Line 1806 of yacc.c  */
#line 9763 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
    break;

  case 1503:

/* Line 1806 of yacc.c  */
#line 9771 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1504:

/* Line 1806 of yacc.c  */
#line 9775 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1505:

/* Line 1806 of yacc.c  */
#line 9782 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_REFERENCE((yyval))->flag_optional = 1;
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
    break;

  case 1508:

/* Line 1806 of yacc.c  */
#line 9798 "parser.y"
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
#line 9812 "parser.y"
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
#line 9829 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1511:

/* Line 1806 of yacc.c  */
#line 9833 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1514:

/* Line 1806 of yacc.c  */
#line 9842 "parser.y"
    {
	(yyval) = cb_build_address ((yyvsp[(3) - (3)]));
  }
    break;

  case 1515:

/* Line 1806 of yacc.c  */
#line 9849 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1516:

/* Line 1806 of yacc.c  */
#line 9853 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1521:

/* Line 1806 of yacc.c  */
#line 9864 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1522:

/* Line 1806 of yacc.c  */
#line 9868 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1523:

/* Line 1806 of yacc.c  */
#line 9872 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1524:

/* Line 1806 of yacc.c  */
#line 9876 "parser.y"
    {
	(yyval) = cb_build_ppointer ((yyvsp[(4) - (4)]));
  }
    break;

  case 1525:

/* Line 1806 of yacc.c  */
#line 9880 "parser.y"
    {
	(yyval) = cb_build_address ((yyvsp[(3) - (3)]));
  }
    break;

  case 1526:

/* Line 1806 of yacc.c  */
#line 9884 "parser.y"
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
#line 9905 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1528:

/* Line 1806 of yacc.c  */
#line 9909 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1536:

/* Line 1806 of yacc.c  */
#line 9926 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1537:

/* Line 1806 of yacc.c  */
#line 9930 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1538:

/* Line 1806 of yacc.c  */
#line 9934 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1554:

/* Line 1806 of yacc.c  */
#line 9981 "parser.y"
    {
	(yyval) = cb_zero;
  }
    break;

  case 1562:

/* Line 1806 of yacc.c  */
#line 10005 "parser.y"
    { (yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0); }
    break;

  case 1563:

/* Line 1806 of yacc.c  */
#line 10009 "parser.y"
    { (yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 1); }
    break;

  case 1564:

/* Line 1806 of yacc.c  */
#line 10013 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1565:

/* Line 1806 of yacc.c  */
#line 10014 "parser.y"
    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 1566:

/* Line 1806 of yacc.c  */
#line 10018 "parser.y"
    { (yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0); }
    break;

  case 1567:

/* Line 1806 of yacc.c  */
#line 10023 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (3)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (3)]));
	}
  }
    break;

  case 1568:

/* Line 1806 of yacc.c  */
#line 10030 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (2)]));
	}
  }
    break;

  case 1569:

/* Line 1806 of yacc.c  */
#line 10037 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (2)]));
	}
  }
    break;

  case 1570:

/* Line 1806 of yacc.c  */
#line 10044 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (1)]));
	}
  }
    break;

  case 1571:

/* Line 1806 of yacc.c  */
#line 10054 "parser.y"
    {
	(yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0);
  }
    break;

  case 1572:

/* Line 1806 of yacc.c  */
#line 10061 "parser.y"
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
#line 10071 "parser.y"
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
#line 10081 "parser.y"
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
#line 10091 "parser.y"
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
#line 10104 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1577:

/* Line 1806 of yacc.c  */
#line 10108 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (3)]);
	CB_REFERENCE ((yyvsp[(1) - (3)]))->chain = (yyvsp[(3) - (3)]);
  }
    break;

  case 1578:

/* Line 1806 of yacc.c  */
#line 10116 "parser.y"
    {
	(yyval) = (yyvsp[(0) - (3)]);
	CB_REFERENCE ((yyvsp[(0) - (3)]))->subs = cb_list_reverse ((yyvsp[(2) - (3)]));
  }
    break;

  case 1579:

/* Line 1806 of yacc.c  */
#line 10124 "parser.y"
    {
	CB_REFERENCE ((yyvsp[(0) - (4)]))->offset = (yyvsp[(2) - (4)]);
  }
    break;

  case 1580:

/* Line 1806 of yacc.c  */
#line 10128 "parser.y"
    {
	CB_REFERENCE ((yyvsp[(0) - (5)]))->offset = (yyvsp[(2) - (5)]);
	CB_REFERENCE ((yyvsp[(0) - (5)]))->length = (yyvsp[(4) - (5)]);
  }
    break;

  case 1581:

/* Line 1806 of yacc.c  */
#line 10138 "parser.y"
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
#line 10153 "parser.y"
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
#line 10176 "parser.y"
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
#line 10199 "parser.y"
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
#line 10214 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 1586:

/* Line 1806 of yacc.c  */
#line 10215 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 1587:

/* Line 1806 of yacc.c  */
#line 10216 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 1588:

/* Line 1806 of yacc.c  */
#line 10217 "parser.y"
    { (yyval) = cb_high; }
    break;

  case 1589:

/* Line 1806 of yacc.c  */
#line 10218 "parser.y"
    { (yyval) = cb_low; }
    break;

  case 1590:

/* Line 1806 of yacc.c  */
#line 10219 "parser.y"
    { (yyval) = cb_null; }
    break;

  case 1591:

/* Line 1806 of yacc.c  */
#line 10224 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1592:

/* Line 1806 of yacc.c  */
#line 10228 "parser.y"
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
#line 10245 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1594:

/* Line 1806 of yacc.c  */
#line 10249 "parser.y"
    {
	(yyval) = cb_concat_literals ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1595:

/* Line 1806 of yacc.c  */
#line 10255 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1596:

/* Line 1806 of yacc.c  */
#line 10256 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 1597:

/* Line 1806 of yacc.c  */
#line 10257 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 1598:

/* Line 1806 of yacc.c  */
#line 10258 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 1599:

/* Line 1806 of yacc.c  */
#line 10259 "parser.y"
    { (yyval) = cb_high; }
    break;

  case 1600:

/* Line 1806 of yacc.c  */
#line 10260 "parser.y"
    { (yyval) = cb_low; }
    break;

  case 1601:

/* Line 1806 of yacc.c  */
#line 10261 "parser.y"
    { (yyval) = cb_null; }
    break;

  case 1602:

/* Line 1806 of yacc.c  */
#line 10268 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (2)]), NULL, (yyvsp[(2) - (2)]), 0);
  }
    break;

  case 1603:

/* Line 1806 of yacc.c  */
#line 10272 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), CB_LIST_INIT ((yyvsp[(3) - (5)])), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1604:

/* Line 1806 of yacc.c  */
#line 10276 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1605:

/* Line 1806 of yacc.c  */
#line 10280 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1606:

/* Line 1806 of yacc.c  */
#line 10284 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]), NULL, 0);
  }
    break;

  case 1607:

/* Line 1806 of yacc.c  */
#line 10288 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1608:

/* Line 1806 of yacc.c  */
#line 10292 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1609:

/* Line 1806 of yacc.c  */
#line 10296 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1610:

/* Line 1806 of yacc.c  */
#line 10300 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), NULL, 0);
  }
    break;

  case 1611:

/* Line 1806 of yacc.c  */
#line 10304 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), NULL, 1);
  }
    break;

  case 1620:

/* Line 1806 of yacc.c  */
#line 10328 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1621:

/* Line 1806 of yacc.c  */
#line 10332 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (4)]), NULL);
  }
    break;

  case 1622:

/* Line 1806 of yacc.c  */
#line 10336 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));
  }
    break;

  case 1623:

/* Line 1806 of yacc.c  */
#line 10343 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1624:

/* Line 1806 of yacc.c  */
#line 10347 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (3)]);
  }
    break;

  case 1625:

/* Line 1806 of yacc.c  */
#line 10351 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1626:

/* Line 1806 of yacc.c  */
#line 10358 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	(yyval) = cb_list_add (x, cb_int0);
  }
    break;

  case 1627:

/* Line 1806 of yacc.c  */
#line 10365 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, cb_int1);
  }
    break;

  case 1628:

/* Line 1806 of yacc.c  */
#line 10372 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, cb_int2);
  }
    break;

  case 1629:

/* Line 1806 of yacc.c  */
#line 10382 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	(yyval) = cb_list_add (x, cb_null);
  }
    break;

  case 1630:

/* Line 1806 of yacc.c  */
#line 10389 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, (yyvsp[(3) - (3)]));
  }
    break;

  case 1631:

/* Line 1806 of yacc.c  */
#line 10399 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	(yyval) = cb_list_add (x, cb_null);
  }
    break;

  case 1632:

/* Line 1806 of yacc.c  */
#line 10406 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, cb_ref ((yyvsp[(3) - (3)])));
  }
    break;

  case 1633:

/* Line 1806 of yacc.c  */
#line 10417 "parser.y"
    {
	non_const_word = 1;
  }
    break;

  case 1634:

/* Line 1806 of yacc.c  */
#line 10425 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1635:

/* Line 1806 of yacc.c  */
#line 10426 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1636:

/* Line 1806 of yacc.c  */
#line 10430 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1637:

/* Line 1806 of yacc.c  */
#line 10431 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1638:

/* Line 1806 of yacc.c  */
#line 10435 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1639:

/* Line 1806 of yacc.c  */
#line 10436 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1640:

/* Line 1806 of yacc.c  */
#line 10441 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1641:

/* Line 1806 of yacc.c  */
#line 10445 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1642:

/* Line 1806 of yacc.c  */
#line 10452 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1643:

/* Line 1806 of yacc.c  */
#line 10456 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1644:

/* Line 1806 of yacc.c  */
#line 10463 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1645:

/* Line 1806 of yacc.c  */
#line 10464 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1646:

/* Line 1806 of yacc.c  */
#line 10465 "parser.y"
    { (yyval) = cb_int2; }
    break;

  case 1647:

/* Line 1806 of yacc.c  */
#line 10469 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1648:

/* Line 1806 of yacc.c  */
#line 10470 "parser.y"
    { (yyval) = cb_true; }
    break;

  case 1649:

/* Line 1806 of yacc.c  */
#line 10474 "parser.y"
    { (yyval) = cb_int (cb_flag_optional_file); }
    break;

  case 1650:

/* Line 1806 of yacc.c  */
#line 10475 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1651:

/* Line 1806 of yacc.c  */
#line 10476 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1652:

/* Line 1806 of yacc.c  */
#line 10481 "parser.y"
    {
	(yyval) = cb_int0;
  }
    break;

  case 1653:

/* Line 1806 of yacc.c  */
#line 10485 "parser.y"
    {
	if ((yyvsp[(2) - (2)])) {
		(yyval) = (yyvsp[(2) - (2)]);
	} else {
		(yyval) = cb_int (COB_STORE_ROUND);
	}
	cobc_cs_check = 0;
  }
    break;

  case 1654:

/* Line 1806 of yacc.c  */
#line 10497 "parser.y"
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
    break;

  case 1655:

/* Line 1806 of yacc.c  */
#line 10502 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
	cobc_cs_check = 0;
  }
    break;

  case 1656:

/* Line 1806 of yacc.c  */
#line 10510 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_AWAY_FROM_ZERO);
  }
    break;

  case 1657:

/* Line 1806 of yacc.c  */
#line 10514 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_AWAY_FROM_ZERO);
  }
    break;

  case 1658:

/* Line 1806 of yacc.c  */
#line 10518 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_EVEN);
  }
    break;

  case 1659:

/* Line 1806 of yacc.c  */
#line 10522 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_TOWARD_ZERO);
  }
    break;

  case 1660:

/* Line 1806 of yacc.c  */
#line 10526 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_PROHIBITED);
  }
    break;

  case 1661:

/* Line 1806 of yacc.c  */
#line 10530 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_GREATER);
  }
    break;

  case 1662:

/* Line 1806 of yacc.c  */
#line 10534 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_LESSER);
  }
    break;

  case 1663:

/* Line 1806 of yacc.c  */
#line 10538 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TRUNCATION);
  }
    break;

  case 1664:

/* Line 1806 of yacc.c  */
#line 10544 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1665:

/* Line 1806 of yacc.c  */
#line 10545 "parser.y"
    { (yyval) = cb_int1; }
    break;



/* Line 1806 of yacc.c  */
#line 18725 "parser.c"
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
#line 10716 "parser.y"


