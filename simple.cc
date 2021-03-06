// A Bison parser, made by GNU Bison 3.4.1.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2019 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// Undocumented macros, especially those whose name start with YY_,
// are private implementation details.  Do not rely on them.





#include "simple.hh"


// Unqualified %code blocks.
#line 25 "grammar.y"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "icode.hh"
#include "symtab.hh"

using namespace std;
extern yy::simple_parser::symbol_type yylex(); 
extern char * yytext;
static int stptr = 0;

extern yy::location loc;


#line 62 "simple.cc"


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (false)
# endif


// Suppress unused-variable warnings by "using" E.
#define YYUSE(E) ((void) (E))

// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << '\n';                       \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yystack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

namespace yy {
#line 156 "simple.cc"


  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  simple_parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr;
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
              else
                goto append;

            append:
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }


  /// Build a parser object.
  simple_parser::simple_parser (symtab_t * symtab_yyarg, itab_t * itab_yyarg, char * static_mem_yyarg)
    :
#if YYDEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      symtab (symtab_yyarg),
      itab (itab_yyarg),
      static_mem (static_mem_yyarg)
  {}

  simple_parser::~simple_parser ()
  {}

  simple_parser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------------.
  | Symbol types.  |
  `---------------*/



  // by_state.
  simple_parser::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

  simple_parser::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
  simple_parser::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
  simple_parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  simple_parser::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

  simple_parser::symbol_number_type
  simple_parser::by_state::type_get () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[state];
  }

  simple_parser::stack_symbol_type::stack_symbol_type ()
  {}

  simple_parser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state), YY_MOVE (that.location))
  {
    switch (that.type_get ())
    {
      case 18: // T_FLOAT
        value.YY_MOVE_OR_COPY< float > (YY_MOVE (that.value));
        break;

      case 17: // T_INTEGER
      case 26: // declaration
      case 27: // datatype
        value.YY_MOVE_OR_COPY< int > (YY_MOVE (that.value));
        break;

      case 16: // T_ID
        value.YY_MOVE_OR_COPY< string > (YY_MOVE (that.value));
        break;

      case 25: // assignment
      case 28: // a_expr
      case 29: // a_term
      case 30: // a_fact
      case 31: // varref
        value.YY_MOVE_OR_COPY< symbol_t* > (YY_MOVE (that.value));
        break;

      case 34: // varlist
      case 35: // expr_list
        value.YY_MOVE_OR_COPY< vector<symbol_t*>  > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

#if 201103L <= YY_CPLUSPLUS
    // that is emptied.
    that.state = empty_state;
#endif
  }

  simple_parser::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s, YY_MOVE (that.location))
  {
    switch (that.type_get ())
    {
      case 18: // T_FLOAT
        value.move< float > (YY_MOVE (that.value));
        break;

      case 17: // T_INTEGER
      case 26: // declaration
      case 27: // datatype
        value.move< int > (YY_MOVE (that.value));
        break;

      case 16: // T_ID
        value.move< string > (YY_MOVE (that.value));
        break;

      case 25: // assignment
      case 28: // a_expr
      case 29: // a_term
      case 30: // a_fact
      case 31: // varref
        value.move< symbol_t* > (YY_MOVE (that.value));
        break;

      case 34: // varlist
      case 35: // expr_list
        value.move< vector<symbol_t*>  > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

    // that is emptied.
    that.type = empty_symbol;
  }

#if YY_CPLUSPLUS < 201103L
  simple_parser::stack_symbol_type&
  simple_parser::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    switch (that.type_get ())
    {
      case 18: // T_FLOAT
        value.move< float > (that.value);
        break;

      case 17: // T_INTEGER
      case 26: // declaration
      case 27: // datatype
        value.move< int > (that.value);
        break;

      case 16: // T_ID
        value.move< string > (that.value);
        break;

      case 25: // assignment
      case 28: // a_expr
      case 29: // a_term
      case 30: // a_fact
      case 31: // varref
        value.move< symbol_t* > (that.value);
        break;

      case 34: // varlist
      case 35: // expr_list
        value.move< vector<symbol_t*>  > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    // that is emptied.
    that.state = empty_state;
    return *this;
  }
#endif

  template <typename Base>
  void
  simple_parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
  simple_parser::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
#if defined __GNUC__ && ! defined __clang__ && ! defined __ICC && __GNUC__ * 100 + __GNUC_MINOR__ <= 408
    // Avoid a (spurious) G++ 4.8 warning about "array subscript is
    // below array bounds".
    if (yysym.empty ())
      std::abort ();
#endif
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " ("
        << yysym.location << ": ";
    YYUSE (yytype);
    yyo << ')';
  }
#endif

  void
  simple_parser::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
  simple_parser::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
  simple_parser::yypop_ (int n)
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  simple_parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  simple_parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  simple_parser::debug_level_type
  simple_parser::debug_level () const
  {
    return yydebug_;
  }

  void
  simple_parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  simple_parser::state_type
  simple_parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  bool
  simple_parser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  simple_parser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  simple_parser::operator() ()
  {
    return parse ();
  }

  int
  simple_parser::parse ()
  {
    // State.
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

#if YY_EXCEPTIONS
    try
#endif // YY_EXCEPTIONS
      {
    YYCDEBUG << "Starting parse\n";


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, YY_MOVE (yyla));

  /*-----------------------------------------------.
  | yynewstate -- push a new symbol on the stack.  |
  `-----------------------------------------------*/
  yynewstate:
    YYCDEBUG << "Entering state " << yystack_[0].state << '\n';

    // Accept?
    if (yystack_[0].state == yyfinal_)
      YYACCEPT;

    goto yybackup;


  /*-----------.
  | yybackup.  |
  `-----------*/
  yybackup:
    // Try to take a decision without lookahead.
    yyn = yypact_[yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token: ";
#if YY_EXCEPTIONS
        try
#endif // YY_EXCEPTIONS
          {
            symbol_type yylookahead (yylex ());
            yyla.move (yylookahead);
          }
#if YY_EXCEPTIONS
        catch (const syntax_error& yyexc)
          {
            YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
            error (yyexc);
            goto yyerrlab1;
          }
#endif // YY_EXCEPTIONS
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.type_get ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.type_get ())
      goto yydefault;

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", yyn, YY_MOVE (yyla));
    goto yynewstate;


  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;


  /*-----------------------------.
  | yyreduce -- do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_ (yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
      switch (yyr1_[yyn])
    {
      case 18: // T_FLOAT
        yylhs.value.emplace< float > ();
        break;

      case 17: // T_INTEGER
      case 26: // declaration
      case 27: // datatype
        yylhs.value.emplace< int > ();
        break;

      case 16: // T_ID
        yylhs.value.emplace< string > ();
        break;

      case 25: // assignment
      case 28: // a_expr
      case 29: // a_term
      case 30: // a_fact
      case 31: // varref
        yylhs.value.emplace< symbol_t* > ();
        break;

      case 34: // varlist
      case 35: // expr_list
        yylhs.value.emplace< vector<symbol_t*>  > ();
        break;

      default:
        break;
    }


      // Default location.
      {
        stack_type::slice range (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, range, yylen);
        yyerror_range[1].location = yylhs.location;
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
#if YY_EXCEPTIONS
      try
#endif // YY_EXCEPTIONS
        {
          switch (yyn)
            {
  case 9:
#line 87 "grammar.y"
    {
        itab_instruction_add (itab, OP_STORE, yystack_[2].value.as < symbol_t* > ()->addr, yystack_[2].value.as < symbol_t* > ()->datatype, yystack_[0].value.as < symbol_t* > ()->addr);
        yylhs.value.as < symbol_t* > () = yystack_[2].value.as < symbol_t* > ();
      }
#line 680 "simple.cc"
    break;

  case 10:
#line 93 "grammar.y"
    { 
      assert (symtab);
      assert (itab);
      symbol_t * sym = symbol_create (symtab, yystack_[0].value.as < string > (), yystack_[1].value.as < int > ()); 
      assert (sym);
      symbol_add (symtab, sym);
    }
#line 692 "simple.cc"
    break;

  case 11:
#line 102 "grammar.y"
    { yylhs.value.as < int > () = DTYPE_INT; }
#line 698 "simple.cc"
    break;

  case 12:
#line 103 "grammar.y"
    { yylhs.value.as < int > () = DTYPE_FLOAT; }
#line 704 "simple.cc"
    break;

  case 13:
#line 107 "grammar.y"
    {
        if (yystack_[2].value.as < symbol_t* > ()->datatype != yystack_[0].value.as < symbol_t* > ()->datatype)
        {
          cout << "Incompatible datatypes\n";
          exit (1);
        }
        symbol_t * res;
        if (yystack_[2].value.as < symbol_t* > ()->datatype == DTYPE_INT)
        {
          res = make_temp (symtab, yystack_[2].value.as < symbol_t* > ()->datatype);
          itab_instruction_add (itab, OP_ADD, res->addr, yystack_[2].value.as < symbol_t* > ()->addr, yystack_[0].value.as < symbol_t* > ()->addr);
        }
        if (yystack_[2].value.as < symbol_t* > ()->datatype == DTYPE_FLOAT)
        {
          // TASK: Modify this semantic action to support both DTYPE_INT and DTYPE_FLOAT.
          // For DTYPE_FLOAT you should generate an OP_FADD instruction.

          res = make_temp (symtab, yystack_[2].value.as < symbol_t* > ()->datatype);
          if (yystack_[0].value.as < symbol_t* > ()->datatype == DTYPE_FLOAT) itab_instruction_add (itab, OP_FADD, res->addr, yystack_[2].value.as < symbol_t* > ()->addr, yystack_[0].value.as < symbol_t* > ()->addr);
          else itab_instruction_add (itab, OP_ADD, res->addr, yystack_[2].value.as < symbol_t* > ()->addr, yystack_[0].value.as < symbol_t* > ()->addr);
        }
        yylhs.value.as < symbol_t* > () = res;
        #ifdef _SMP_DEBUG_
        cout << "On a_expr (1)\n";
        #endif
      }
#line 735 "simple.cc"
    break;

  case 14:
#line 134 "grammar.y"
    {
        if (yystack_[2].value.as < symbol_t* > ()->datatype != yystack_[0].value.as < symbol_t* > ()->datatype)
        {
          cout << "Incompatible datatypes\n";
          exit (1);
        }
        // TASK: Complete support for OP_SUB and OP_FSUB. See OP_ADD and OP_FADD code above.
        symbol_t * res;
        if (yystack_[2].value.as < symbol_t* > ()->datatype == DTYPE_INT)
        {
          res = make_temp (symtab, yystack_[2].value.as < symbol_t* > ()->datatype);
          itab_instruction_add (itab, OP_SUB, res->addr, yystack_[2].value.as < symbol_t* > ()->addr, yystack_[0].value.as < symbol_t* > ()->addr);
        }
        if (yystack_[2].value.as < symbol_t* > ()->datatype == DTYPE_FLOAT)
        {
          res = make_temp (symtab, yystack_[2].value.as < symbol_t* > ()->datatype);
          if (yystack_[0].value.as < symbol_t* > ()->datatype == DTYPE_FLOAT) itab_instruction_add (itab, OP_FSUB, res->addr, yystack_[2].value.as < symbol_t* > ()->addr, yystack_[0].value.as < symbol_t* > ()->addr);
          else itab_instruction_add (itab, OP_SUB, res->addr, yystack_[2].value.as < symbol_t* > ()->addr, yystack_[0].value.as < symbol_t* > ()->addr);
        }
        yylhs.value.as < symbol_t* > () = res;
        #ifdef _SMP_DEBUG_
        cout << "On a_expr (2)\n";
        #endif
      }
#line 764 "simple.cc"
    break;

  case 15:
#line 159 "grammar.y"
    {
        yylhs.value.as < symbol_t* > () = yystack_[0].value.as < symbol_t* > ();
        #ifdef _SMP_DEBUG_
        cout << "On a_expr (3)\n";
        #endif
      }
#line 775 "simple.cc"
    break;

  case 16:
#line 168 "grammar.y"
    {
        if (yystack_[2].value.as < symbol_t* > ()->datatype != yystack_[0].value.as < symbol_t* > ()->datatype)
        {
          cout << "Incompatible datatypes\n";
          exit (1);
        }
        // TASK: Complete support for OP_MUL and OP_FMUL. See OP_ADD and OP_FADD code above.
        symbol_t * res;
        if (yystack_[2].value.as < symbol_t* > ()->datatype == DTYPE_INT)
        {
          res = make_temp (symtab, yystack_[2].value.as < symbol_t* > ()->datatype);
          itab_instruction_add (itab, OP_MUL, res->addr, yystack_[2].value.as < symbol_t* > ()->addr, yystack_[0].value.as < symbol_t* > ()->addr);
        }
        if (yystack_[2].value.as < symbol_t* > ()->datatype == DTYPE_FLOAT)
        {
          res = make_temp (symtab, yystack_[2].value.as < symbol_t* > ()->datatype);
          if (yystack_[0].value.as < symbol_t* > ()->datatype == DTYPE_FLOAT) itab_instruction_add (itab, OP_FMUL, res->addr, yystack_[2].value.as < symbol_t* > ()->addr, yystack_[0].value.as < symbol_t* > ()->addr);
          else itab_instruction_add (itab, OP_MUL, res->addr, yystack_[2].value.as < symbol_t* > ()->addr, yystack_[0].value.as < symbol_t* > ()->addr);
        }
        yylhs.value.as < symbol_t* > () = res;
      }
#line 801 "simple.cc"
    break;

  case 17:
#line 190 "grammar.y"
    {
        if (yystack_[2].value.as < symbol_t* > ()->datatype != yystack_[0].value.as < symbol_t* > ()->datatype)
        {
          cout << "Incompatible datatypes\n";
          exit (1);
        }
        // TASK: Complete support for OP_DIV and OP_FDIV. See OP_ADD and OP_FADD code above.
        symbol_t * res;
        if (yystack_[2].value.as < symbol_t* > ()->datatype == DTYPE_INT)
        {
          res = make_temp (symtab, yystack_[2].value.as < symbol_t* > ()->datatype);
          itab_instruction_add (itab, OP_DIV, res->addr, yystack_[2].value.as < symbol_t* > ()->addr, yystack_[0].value.as < symbol_t* > ()->addr);
        }
        if (yystack_[2].value.as < symbol_t* > ()->datatype == DTYPE_FLOAT)
        {
          res = make_temp (symtab, yystack_[2].value.as < symbol_t* > ()->datatype);
          if (yystack_[0].value.as < symbol_t* > ()->datatype == DTYPE_FLOAT) itab_instruction_add (itab, OP_FDIV, res->addr, yystack_[2].value.as < symbol_t* > ()->addr, yystack_[0].value.as < symbol_t* > ()->addr);
          else itab_instruction_add (itab, OP_DIV, res->addr, yystack_[2].value.as < symbol_t* > ()->addr, yystack_[0].value.as < symbol_t* > ()->addr);
        }
        yylhs.value.as < symbol_t* > () = res;
        
      }
#line 828 "simple.cc"
    break;

  case 18:
#line 213 "grammar.y"
    {
        yylhs.value.as < symbol_t* > () = yystack_[0].value.as < symbol_t* > ();
        #ifdef _SMP_DEBUG_
        cout << "On a_term (3)\n";
        #endif
      }
#line 839 "simple.cc"
    break;

  case 19:
#line 222 "grammar.y"
    {
        symbol_t * res;
        assert (yystack_[0].value.as < symbol_t* > () && "Did not find variable");
        res = make_temp (symtab, yystack_[0].value.as < symbol_t* > ()->datatype);
        itab_instruction_add (itab, OP_LOAD, res->addr, yystack_[0].value.as < symbol_t* > ()->datatype, yystack_[0].value.as < symbol_t* > ()->addr);
        yylhs.value.as < symbol_t* > () = res;
      }
#line 851 "simple.cc"
    break;

  case 20:
#line 230 "grammar.y"
    {
        symbol_t * res;
        res = make_temp (symtab, DTYPE_INT);
        *(int*)(static_mem+stptr) = yystack_[0].value.as < int > ();
        itab_instruction_add (itab, OP_LOADCST, res->addr, res->datatype, stptr);
        stptr+=4;
        yylhs.value.as < symbol_t* > () = res;
      }
#line 864 "simple.cc"
    break;

  case 21:
#line 239 "grammar.y"
    { 
        symbol_t * res;
        res = make_temp (symtab, DTYPE_FLOAT);
        *(float*)(static_mem+stptr) = yystack_[0].value.as < float > ();
        itab_instruction_add (itab, OP_LOADCST, res->addr, res->datatype, stptr);
        stptr+=4;
        yylhs.value.as < symbol_t* > () = res;
      }
#line 877 "simple.cc"
    break;

  case 22:
#line 247 "grammar.y"
    { yylhs.value.as < symbol_t* > () = yystack_[1].value.as < symbol_t* > (); }
#line 883 "simple.cc"
    break;

  case 23:
#line 249 "grammar.y"
    {
        symbol_t * res;
        res = make_temp (symtab, yystack_[0].value.as < symbol_t* > ()->datatype);
        itab_instruction_add (itab, OP_UMIN, res->addr, yystack_[0].value.as < symbol_t* > ()->datatype, yystack_[0].value.as < symbol_t* > ()->addr);
        yylhs.value.as < symbol_t* > () = res;
      }
#line 894 "simple.cc"
    break;

  case 24:
#line 256 "grammar.y"
    {
        yylhs.value.as < symbol_t* > () = NULL;
      }
#line 902 "simple.cc"
    break;

  case 25:
#line 262 "grammar.y"
    {
      symbol_t * sym = symbol_find (symtab, yystack_[0].value.as < string > ());
      assert (sym && "Ooops: Did not find variable!");
      yylhs.value.as < symbol_t* > () = sym;
    }
#line 912 "simple.cc"
    break;

  case 26:
#line 270 "grammar.y"
    {
      vector_itersym_t iter;
      int ii = 0;
      for (iter = yystack_[0].value.as < vector<symbol_t*>  > ().begin (); iter != yystack_[0].value.as < vector<symbol_t*>  > ().end (); iter++, ii++)
      {
        #ifdef _SMP_DEBUG_
        cout << "Symbol to read (" << ii << "):";
        symbol_show (*iter);
        #endif
        itab_instruction_add (itab, OP_READ, (*iter)->addr, (*iter)->datatype, NOARG);
      }
    }
#line 929 "simple.cc"
    break;

  case 27:
#line 285 "grammar.y"
    {
      vector_itersym_t iter;
      int ii = 0;
      for (iter = yystack_[0].value.as < vector<symbol_t*>  > ().begin (); iter != yystack_[0].value.as < vector<symbol_t*>  > ().end (); iter++, ii++)
      {
        #ifdef _SMP_DEBUG_
        cout << "Symbol to write(" << ii << "):";
        symbol_show (*iter);
        #endif
        itab_instruction_add (itab, OP_WRITE, (*iter)->addr, (*iter)->datatype, NOARG);
      }
    }
#line 946 "simple.cc"
    break;

  case 28:
#line 299 "grammar.y"
    { yystack_[2].value.as < vector<symbol_t*>  > ().push_back (yystack_[0].value.as < symbol_t* > ()); yylhs.value.as < vector<symbol_t*>  > () = yystack_[2].value.as < vector<symbol_t*>  > (); }
#line 952 "simple.cc"
    break;

  case 29:
#line 300 "grammar.y"
    { yylhs.value.as < vector<symbol_t*>  > ().push_back (yystack_[0].value.as < symbol_t* > ()); }
#line 958 "simple.cc"
    break;

  case 30:
#line 304 "grammar.y"
    { 
      yystack_[2].value.as < vector<symbol_t*>  > ().push_back (yystack_[0].value.as < symbol_t* > ()); yylhs.value.as < vector<symbol_t*>  > () = yystack_[2].value.as < vector<symbol_t*>  > (); 
      #ifdef _SMP_DEBUG_
      cout << "In expr_list (1)\n";
      #endif
    }
#line 969 "simple.cc"
    break;

  case 31:
#line 311 "grammar.y"
    { 
      yylhs.value.as < vector<symbol_t*>  > ().push_back (yystack_[0].value.as < symbol_t* > ()); 
      #ifdef _SMP_DEBUG_
      cout << "In expr_list (2)\n";
      #endif
    }
#line 980 "simple.cc"
    break;


#line 984 "simple.cc"

            default:
              break;
            }
        }
#if YY_EXCEPTIONS
      catch (const syntax_error& yyexc)
        {
          YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
          error (yyexc);
          YYERROR;
        }
#endif // YY_EXCEPTIONS
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;
      YY_STACK_PRINT ();

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, YY_MOVE (yylhs));
    }
    goto yynewstate;


  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        error (yyla.location, yysyntax_error_ (yystack_[0].state, yyla));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.type_get () == yyeof_)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:
    /* Pacify compilers when the user code never invokes YYERROR and
       the label yyerrorlab therefore never appears in user code.  */
    if (false)
      YYERROR;

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    goto yyerrlab1;


  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    {
      stack_symbol_type error_token;
      for (;;)
        {
          yyn = yypact_[yystack_[0].state];
          if (!yy_pact_value_is_default_ (yyn))
            {
              yyn += yyterror_;
              if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
                {
                  yyn = yytable_[yyn];
                  if (0 < yyn)
                    break;
                }
            }

          // Pop the current state because it cannot handle the error token.
          if (yystack_.size () == 1)
            YYABORT;

          yyerror_range[1].location = yystack_[0].location;
          yy_destroy_ ("Error: popping", yystack_[0]);
          yypop_ ();
          YY_STACK_PRINT ();
        }

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = yyn;
      yypush_ ("Shifting", YY_MOVE (error_token));
    }
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


  /*-----------------------------------------------------.
  | yyreturn -- parsing is finished, return the result.  |
  `-----------------------------------------------------*/
  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
#if YY_EXCEPTIONS
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
        // Do not try to display the values of the reclaimed symbols,
        // as their printers might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
#endif // YY_EXCEPTIONS
  }

  void
  simple_parser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what ());
  }

  // Generate an error message.
  std::string
  simple_parser::yysyntax_error_ (state_type yystate, const symbol_type& yyla) const
  {
    // Number of reported tokens (one for the "unexpected", one per
    // "expected").
    size_t yycount = 0;
    // Its maximum.
    enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
    // Arguments of yyformat.
    char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];

    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state
         merging (from LALR or IELR) and default reductions corrupt the
         expected token list.  However, the list is correct for
         canonical LR with one exception: it will still contain any
         token that will not be accepted due to an error action in a
         later state.
    */
    if (!yyla.empty ())
      {
        int yytoken = yyla.type_get ();
        yyarg[yycount++] = yytname_[yytoken];
        int yyn = yypact_[yystate];
        if (!yy_pact_value_is_default_ (yyn))
          {
            /* Start YYX at -YYN if negative to avoid negative indexes in
               YYCHECK.  In other words, skip the first -YYN actions for
               this state because they are default actions.  */
            int yyxbegin = yyn < 0 ? -yyn : 0;
            // Stay within bounds of both yycheck and yytname.
            int yychecklim = yylast_ - yyn + 1;
            int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
            for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
              if (yycheck_[yyx + yyn] == yyx && yyx != yyterror_
                  && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
                {
                  if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                    {
                      yycount = 1;
                      break;
                    }
                  else
                    yyarg[yycount++] = yytname_[yyx];
                }
          }
      }

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
      default: // Avoid compiler warnings.
        YYCASE_ (0, YY_("syntax error"));
        YYCASE_ (1, YY_("syntax error, unexpected %s"));
        YYCASE_ (2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_ (3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_ (4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_ (5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    size_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += yytnamerr_ (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const signed char simple_parser::yypact_ninf_ = -30;

  const signed char simple_parser::yytable_ninf_ = -1;

  const signed char
  simple_parser::yypact_[] =
  {
      14,   -30,   -30,    -6,    -2,   -30,    18,    11,   -30,   -30,
     -30,    13,    30,   -30,   -30,   -30,    20,    -2,   -30,   -30,
     -30,    -2,     7,    25,   -30,   -30,    21,   -30,    14,   -30,
      -2,    -6,   -30,     2,    -2,    -2,    -2,    -2,    -2,   -30,
       7,   -30,   -30,    25,    25,   -30,   -30,     7
  };

  const unsigned char
  simple_parser::yydefact_[] =
  {
       0,    11,    12,     0,     0,    25,     0,     0,     4,     5,
       8,     0,     0,     6,     7,    29,    26,     0,    24,    20,
      21,     0,    31,    15,    18,    19,    27,     1,     2,    10,
       0,     0,    23,     0,     0,     0,     0,     0,     0,     3,
       9,    28,    22,    13,    14,    16,    17,    30
  };

  const signed char
  simple_parser::yypgoto_[] =
  {
     -30,   -30,   -30,     9,   -30,   -30,   -30,   -19,   -29,   -16,
       0,   -30,   -30,   -30,   -30
  };

  const signed char
  simple_parser::yydefgoto_[] =
  {
      -1,     6,     7,     8,     9,    10,    11,    22,    23,    24,
      25,    13,    14,    16,    26
  };

  const unsigned char
  simple_parser::yytable_[] =
  {
      12,    32,    33,    15,    17,    43,    44,    34,    35,    18,
       5,    40,    34,    35,     5,    19,    20,    21,    27,    47,
      45,    46,    42,     1,     2,    28,     3,     4,    12,    29,
       5,    41,    36,    37,    30,    31,    38,    39
  };

  const unsigned char
  simple_parser::yycheck_[] =
  {
       0,    17,    21,     3,     6,    34,    35,     5,     6,    11,
      16,    30,     5,     6,    16,    17,    18,    19,     0,    38,
      36,    37,    20,     9,    10,    14,    12,    13,    28,    16,
      16,    31,     7,     8,     4,    15,    15,    28
  };

  const unsigned char
  simple_parser::yystos_[] =
  {
       0,     9,    10,    12,    13,    16,    22,    23,    24,    25,
      26,    27,    31,    32,    33,    31,    34,     6,    11,    17,
      18,    19,    28,    29,    30,    31,    35,     0,    14,    16,
       4,    15,    30,    28,     5,     6,     7,     8,    15,    24,
      28,    31,    20,    29,    29,    30,    30,    28
  };

  const unsigned char
  simple_parser::yyr1_[] =
  {
       0,    21,    22,    23,    23,    24,    24,    24,    24,    25,
      26,    27,    27,    28,    28,    28,    29,    29,    29,    30,
      30,    30,    30,    30,    30,    31,    32,    33,    34,    34,
      35,    35
  };

  const unsigned char
  simple_parser::yyr2_[] =
  {
       0,     2,     2,     3,     1,     1,     1,     1,     1,     3,
       2,     1,     1,     3,     3,     1,     3,     3,     1,     1,
       1,     1,     3,     2,     1,     1,     2,     2,     3,     1,
       3,     1
  };



  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const simple_parser::yytname_[] =
  {
  "T_EOF", "error", "$undefined", "T_NUM", "T_ASSIGN", "T_ADD", "T_SUB",
  "T_MUL", "T_DIV", "T_DT_INT", "T_DT_FLOAT", "T_LITERAL_STR", "T_READ",
  "T_WRITE", "T_SEMICOLON", "T_COMMA", "T_ID", "T_INTEGER", "T_FLOAT",
  "'('", "')'", "$accept", "program", "stmt_list", "stmt", "assignment",
  "declaration", "datatype", "a_expr", "a_term", "a_fact", "varref",
  "read", "write", "varlist", "expr_list", YY_NULLPTR
  };

#if YYDEBUG
  const unsigned short
  simple_parser::yyrline_[] =
  {
       0,    73,    73,    76,    77,    80,    81,    82,    83,    86,
      93,   102,   103,   106,   133,   158,   167,   189,   212,   221,
     229,   238,   247,   248,   255,   261,   269,   284,   299,   300,
     303,   310
  };

  // Print the state stack on the debug stream.
  void
  simple_parser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << i->state;
    *yycdebug_ << '\n';
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  simple_parser::yy_reduce_print_ (int yyrule)
  {
    unsigned yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):\n";
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG


} // yy
#line 1395 "simple.cc"

#line 319 "grammar.y"


void yy::simple_parser::error (const yy::location & l, const std::string & s) {
	std::cerr << "Simple Parser error at " << l << " : " << s << std::endl;
}
