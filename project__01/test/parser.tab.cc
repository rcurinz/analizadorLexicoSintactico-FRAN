// A Bison parser, made by GNU Bison 3.0.4.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015 Free Software Foundation, Inc.

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


// First part of user declarations.

#line 37 "parser.tab.cc" // lalr1.cc:404

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

#include "parser.tab.hh"

// User implementation prologue.

#line 51 "parser.tab.cc" // lalr1.cc:412
// Unqualified %code blocks.
#line 26 "parser.yy" // lalr1.cc:413

#include "driver.h"
#include <iostream>
extern int lineno;
extern int yylex();
extern int yylval;
void yyerror(const char * msg);

#line 62 "parser.tab.cc" // lalr1.cc:413


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
    while (/*CONSTCOND*/ false)
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
      *yycdebug_ << std::endl;                  \
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
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE(Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void>(0)
# define YY_STACK_PRINT()                static_cast<void>(0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

#line 6 "parser.yy" // lalr1.cc:479
namespace yy {
#line 148 "parser.tab.cc" // lalr1.cc:479

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  analizador_fran::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr = "";
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
              // Fall through.
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
  analizador_fran::analizador_fran (analizador_driver& driver_yyarg)
    :
#if YYDEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      driver (driver_yyarg)
  {}

  analizador_fran::~analizador_fran ()
  {}


  /*---------------.
  | Symbol types.  |
  `---------------*/



  // by_state.
  inline
  analizador_fran::by_state::by_state ()
    : state (empty_state)
  {}

  inline
  analizador_fran::by_state::by_state (const by_state& other)
    : state (other.state)
  {}

  inline
  void
  analizador_fran::by_state::clear ()
  {
    state = empty_state;
  }

  inline
  void
  analizador_fran::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  inline
  analizador_fran::by_state::by_state (state_type s)
    : state (s)
  {}

  inline
  analizador_fran::symbol_number_type
  analizador_fran::by_state::type_get () const
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[state];
  }

  inline
  analizador_fran::stack_symbol_type::stack_symbol_type ()
  {}


  inline
  analizador_fran::stack_symbol_type::stack_symbol_type (state_type s, symbol_type& that)
    : super_type (s, that.location)
  {
      switch (that.type_get ())
    {
      case 30: // "num"
        value.move< float > (that.value);
        break;

      case 23: // "print"
      case 24: // "function"
      case 25: // "if"
      case 26: // "else"
      case 27: // "while"
      case 28: // "for"
      case 29: // "id"
        value.move< std::string > (that.value);
        break;

      default:
        break;
    }

    // that is emptied.
    that.type = empty_symbol;
  }

  inline
  analizador_fran::stack_symbol_type&
  analizador_fran::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
      switch (that.type_get ())
    {
      case 30: // "num"
        value.copy< float > (that.value);
        break;

      case 23: // "print"
      case 24: // "function"
      case 25: // "if"
      case 26: // "else"
      case 27: // "while"
      case 28: // "for"
      case 29: // "id"
        value.copy< std::string > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    return *this;
  }


  template <typename Base>
  inline
  void
  analizador_fran::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
  analizador_fran::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
    // Avoid a (spurious) G++ 4.8 warning about "array subscript is
    // below array bounds".
    if (yysym.empty ())
      std::abort ();
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " ("
        << yysym.location << ": ";
    switch (yytype)
    {
            case 23: // "print"

#line 68 "parser.yy" // lalr1.cc:636
        { yyoutput << yysym.value.template as< std::string > (); }
#line 343 "parser.tab.cc" // lalr1.cc:636
        break;

      case 24: // "function"

#line 68 "parser.yy" // lalr1.cc:636
        { yyoutput << yysym.value.template as< std::string > (); }
#line 350 "parser.tab.cc" // lalr1.cc:636
        break;

      case 25: // "if"

#line 68 "parser.yy" // lalr1.cc:636
        { yyoutput << yysym.value.template as< std::string > (); }
#line 357 "parser.tab.cc" // lalr1.cc:636
        break;

      case 26: // "else"

#line 68 "parser.yy" // lalr1.cc:636
        { yyoutput << yysym.value.template as< std::string > (); }
#line 364 "parser.tab.cc" // lalr1.cc:636
        break;

      case 27: // "while"

#line 68 "parser.yy" // lalr1.cc:636
        { yyoutput << yysym.value.template as< std::string > (); }
#line 371 "parser.tab.cc" // lalr1.cc:636
        break;

      case 28: // "for"

#line 68 "parser.yy" // lalr1.cc:636
        { yyoutput << yysym.value.template as< std::string > (); }
#line 378 "parser.tab.cc" // lalr1.cc:636
        break;

      case 29: // "id"

#line 68 "parser.yy" // lalr1.cc:636
        { yyoutput << yysym.value.template as< std::string > (); }
#line 385 "parser.tab.cc" // lalr1.cc:636
        break;

      case 30: // "num"

#line 68 "parser.yy" // lalr1.cc:636
        { yyoutput << yysym.value.template as< float > (); }
#line 392 "parser.tab.cc" // lalr1.cc:636
        break;


      default:
        break;
    }
    yyo << ')';
  }
#endif

  inline
  void
  analizador_fran::yypush_ (const char* m, state_type s, symbol_type& sym)
  {
    stack_symbol_type t (s, sym);
    yypush_ (m, t);
  }

  inline
  void
  analizador_fran::yypush_ (const char* m, stack_symbol_type& s)
  {
    if (m)
      YY_SYMBOL_PRINT (m, s);
    yystack_.push (s);
  }

  inline
  void
  analizador_fran::yypop_ (unsigned int n)
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  analizador_fran::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  analizador_fran::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  analizador_fran::debug_level_type
  analizador_fran::debug_level () const
  {
    return yydebug_;
  }

  void
  analizador_fran::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  inline analizador_fran::state_type
  analizador_fran::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  inline bool
  analizador_fran::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  inline bool
  analizador_fran::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  analizador_fran::parse ()
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

    // FIXME: This shoud be completely indented.  It is not yet to
    // avoid gratuitous conflicts when merging into the master branch.
    try
      {
    YYCDEBUG << "Starting parse" << std::endl;


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, yyla);

    // A new symbol was pushed on the stack.
  yynewstate:
    YYCDEBUG << "Entering state " << yystack_[0].state << std::endl;

    // Accept?
    if (yystack_[0].state == yyfinal_)
      goto yyacceptlab;

    goto yybackup;

    // Backup.
  yybackup:

    // Try to take a decision without lookahead.
    yyn = yypact_[yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token: ";
        try
          {
            symbol_type yylookahead (yylex (driver));
            yyla.move (yylookahead);
          }
        catch (const syntax_error& yyexc)
          {
            error (yyexc);
            goto yyerrlab1;
          }
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
    yypush_ ("Shifting", yyn, yyla);
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
  | yyreduce -- Do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_(yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
        switch (yyr1_[yyn])
    {
      case 30: // "num"
        yylhs.value.build< float > ();
        break;

      case 23: // "print"
      case 24: // "function"
      case 25: // "if"
      case 26: // "else"
      case 27: // "while"
      case 28: // "for"
      case 29: // "id"
        yylhs.value.build< std::string > ();
        break;

      default:
        break;
    }


      // Compute the default @$.
      {
        slice<stack_symbol_type, stack_type> slice (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, slice, yylen);
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
      try
        {
          switch (yyn)
            {

#line 624 "parser.tab.cc" // lalr1.cc:859
            default:
              break;
            }
        }
      catch (const syntax_error& yyexc)
        {
          error (yyexc);
          YYERROR;
        }
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;
      YY_STACK_PRINT ();

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, yylhs);
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

    /* Pacify compilers like GCC when the user code never invokes
       YYERROR and the label yyerrorlab therefore never appears in user
       code.  */
    if (false)
      goto yyerrorlab;
    yyerror_range[1].location = yystack_[yylen - 1].location;
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
      yypush_ ("Shifting", error_token);
    }
    goto yynewstate;

    // Accept.
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    // Abort.
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

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
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack"
                 << std::endl;
        // Do not try to display the values of the reclaimed symbols,
        // as their printer might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
  }

  void
  analizador_fran::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what());
  }

  // Generate an error message.
  std::string
  analizador_fran::yysyntax_error_ (state_type yystate, const symbol_type& yyla) const
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
        YYCASE_(0, YY_("syntax error"));
        YYCASE_(1, YY_("syntax error, unexpected %s"));
        YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
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


  const signed char analizador_fran::yypact_ninf_ = -76;

  const signed char analizador_fran::yytable_ninf_ = -81;

  const short int
  analizador_fran::yypact_[] =
  {
     339,   107,   -23,   149,    14,   152,     1,    59,   -14,   -76,
     422,   -76,   -76,   -76,   -76,   -76,   -76,   -76,    49,   -76,
     -76,   422,    35,    86,    19,   138,   144,   138,    34,    10,
      -7,    12,   146,   -76,   -76,   -76,    61,    70,   -76,   -76,
     -76,   526,   -76,    81,   532,   -76,    73,   198,    56,   438,
     458,    85,    88,   228,    90,   105,   119,   123,     3,   -76,
     -76,   478,   128,    77,   -76,   484,   137,   -76,   -76,   106,
     -76,   -76,   385,   -76,   -76,   422,   422,   148,   -76,   -76,
     -76,   -76,   151,   -76,   -76,   295,   307,   -76,   -76,   -76,
     -76,   161,   162,   -76,   321,   -76,   -76,   -76,   -76,   -76,
     -76,   326,   331,   340,   172,   173,   175,   183,   188,   166,
     138,   138,   138,   344,   -76,   346,   -76,   -76,   -76,   348,
     385,   -76,   196,   201,    29,   186,    29,   216,    29,   246,
      29,   276,   208,    56,   378,   499,   508,   398,   418,   499,
     517,   422,   422,   422,   422,   422,   -76,   214,   217,   219,
     233,    16,   -76,   306,   315,   -76,   -76,   -76,   422,   -76,
     226,   237,   242,   245,   247,   238,   238,   238,   238,   238,
      26,   261,   -76,   -76,   -76,   -76,   -76,    41,   270,   275,
     278,   280,   281,   289,   258,   -76,   292,   303,   304,   313,
     318,   336,   338,     6,   422,   422,   422,   422,   422,   422,
     422,   422,   422,   341,   342,   343,   347,   354,   360,   361,
     369,     4,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76
  };

  const unsigned char
  analizador_fran::yydefact_[] =
  {
       7,     0,     0,     0,     0,     0,     0,     0,     4,     5,
       6,     9,    10,    14,    11,    12,    13,    64,     0,    65,
      66,     7,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     2,     8,     0,     0,    68,     3,
      31,     0,    28,     0,     0,    30,    31,     0,   103,     0,
       0,     0,    31,     0,     0,     0,     0,     0,     0,    34,
      35,     0,     0,    16,    25,     0,     0,    28,    37,     0,
      62,    36,    30,    38,    60,     7,     7,     0,    49,    50,
      51,    52,     0,    20,    21,     0,     0,    19,    22,    18,
     106,     0,   102,   105,     0,    84,    82,    81,    85,    86,
      83,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    15,     0,    58,    59,    57,     0,
      40,    54,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     7,     7,     7,     7,     7,    99,     0,     0,     0,
      31,     0,    24,     0,     0,    53,    88,    87,     7,   104,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    70,    72,    71,    69,   100,     0,     0,     0,
       0,     0,     0,     0,     0,   101,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    89
  };

  const short int
  analizador_fran::yypgoto_[] =
  {
     -76,   -76,   364,   -75,   -76,   349,   325,   -76,   -76,   372,
     -76,   283,    69,   -76,   -76,   -76,   373,   -41,   -76,   288,
     300,   -76,   -76,   -76,   -76,   -76,   -76,    -8,   359,   -76,
     -76,   381,   -76,   403,   -76,   -76,   282
  };

  const signed char
  analizador_fran::yydefgoto_[] =
  {
      -1,     7,     8,     9,    10,    11,    12,    62,    13,    43,
      63,    64,    50,    14,    70,    71,    45,    82,   120,   121,
      73,   118,    15,    74,    16,    17,    18,    51,   101,    38,
      19,    56,    20,    21,    91,    92,    93
  };

  const short int
  analizador_fran::yytable_[] =
  {
     122,   123,    30,    86,   112,   220,    24,   201,    31,    86,
       2,    57,   113,    40,    32,   221,   202,   169,    53,    54,
     -17,    27,    59,    60,    86,   170,    48,   183,    86,   -29,
      77,   119,    78,    79,    80,    81,    40,   -29,   -29,    55,
     -29,    61,    42,   -29,   -29,   -29,   -29,   -29,   -29,   -67,
      36,   -29,   -29,   -29,   -29,   177,   -29,   -29,   -29,    33,
     -67,   116,   117,    55,    41,    42,   160,   161,   162,   163,
     164,    75,   -67,   -67,   -67,    37,   -67,   -67,   -67,   119,
      76,    87,    83,   171,    86,    90,    86,    46,    86,    84,
      86,    44,    44,   104,   115,    86,   105,    86,   108,    86,
      65,    69,   147,   148,   149,   151,   -61,    85,    22,    78,
      79,    80,    81,    86,    23,    41,    42,   -61,   109,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   110,   -61,
     -61,   -61,   111,   -61,   -61,   -61,   114,   -29,    77,    40,
      78,    79,    80,    81,    31,    52,   125,    40,   -29,    40,
      25,   127,    40,    28,   129,   131,    26,   116,   117,    29,
     -29,   -29,   -29,   125,   -29,   -29,   -29,    49,    42,   132,
     136,   138,   140,    49,    42,    66,    67,   124,    42,   133,
     126,    42,   141,   142,    65,   143,   -47,    85,   154,    78,
      79,    80,    81,   144,   -47,   -47,   146,   -47,   145,    88,
     -47,   -47,   -47,   -47,   -47,   -47,    89,   156,   -47,   -47,
     -47,   -47,   157,   -47,   -47,   -47,   -43,    85,   158,    78,
      79,    80,    81,   165,   -43,   -43,   166,   -43,   167,   106,
     -43,   -43,   -43,   -43,   -43,   -43,   107,   172,   -43,   -43,
     -43,   -43,   168,   -43,   -43,   -43,   -45,    85,   173,    78,
      79,    80,    81,   174,   -45,   -45,   175,   -45,   176,   192,
     -45,   -45,   -45,   -45,   -45,   -45,   193,   177,   -45,   -45,
     -45,   -45,   185,   -45,   -45,   -45,   -41,    85,   186,    78,
      79,    80,    81,   187,   -41,   -41,   188,   -41,   189,   190,
     -41,   -41,   -41,   -41,   -41,   -41,    40,   191,   -41,   -41,
     -41,   -41,   194,   -41,   -41,   -41,   -29,    77,    40,    78,
      79,    80,    81,   195,   196,   -55,    85,   -29,    78,    79,
      80,    81,    40,   197,   128,    42,   -55,    40,   198,   -29,
     -29,   -29,    40,   -29,   -29,   -29,   130,    42,   -55,   -55,
     -55,    40,   -55,   -55,   -55,   150,   199,    40,   200,    40,
     134,    42,   212,   213,   214,   135,    42,    68,   215,    35,
     137,    42,     1,     2,     3,   216,     4,     5,     6,   139,
      42,   217,   218,    49,    42,    61,    42,   153,    42,    77,
     219,    78,    79,    80,    81,    39,   -80,   -80,    78,    79,
      80,    81,   -29,   -29,   -29,    47,   -29,   -29,   152,    77,
     -29,    78,    79,    80,    81,    72,   -29,   -29,   155,   103,
      58,    34,   -29,   -29,   -29,   159,   -29,   -29,     0,    85,
     -29,    78,    79,    80,    81,     0,   -78,   -78,     0,     0,
       0,     0,   -45,   -45,   -45,     0,   -45,   -45,     0,    94,
     -45,    78,    79,    80,    81,     1,     0,     3,     0,     4,
       5,     6,    95,    96,    97,     0,    98,    99,     0,   102,
     100,    78,    79,    80,    81,   178,   179,   180,   181,   182,
     184,     0,    95,    96,    97,     0,    98,    99,     0,    77,
     100,    78,    79,    80,    81,    85,   -27,    78,    79,    80,
      81,     0,   -26,     0,     0,   -27,     0,     0,     0,     0,
      77,   -26,    78,    79,    80,    81,     0,   -29,   -29,    85,
       0,    78,    79,    80,    81,     0,   -76,   -76,    85,     0,
      78,    79,    80,    81,     0,   -74,   -74,    77,     0,    78,
      79,    80,    81,    85,   -29,    78,    79,    80,    81,     0,
     -23
  };

  const short int
  analizador_fran::yycheck_[] =
  {
      75,    76,     1,    44,     1,     1,    29,     1,     7,    50,
      24,     1,     9,     1,    13,    11,    10,     1,    26,    27,
       8,     7,    29,    30,    65,     9,     7,     1,    69,     0,
       1,    72,     3,     4,     5,     6,     1,     8,     9,    29,
      11,    29,    30,    14,    15,    16,    17,    18,    19,     0,
       1,    22,    23,    24,    25,    29,    27,    28,    29,     0,
      11,    20,    21,    29,    29,    30,   141,   142,   143,   144,
     145,    10,    23,    24,    25,    26,    27,    28,    29,   120,
      10,     8,     1,   158,   125,    29,   127,     1,   129,     8,
     131,    22,    23,     8,    17,   136,     8,   138,     8,   140,
      31,    32,   110,   111,   112,   113,     0,     1,     1,     3,
       4,     5,     6,   154,     7,    29,    30,    11,    13,   194,
     195,   196,   197,   198,   199,   200,   201,   202,     9,    23,
      24,    25,     9,    27,    28,    29,     8,     0,     1,     1,
       3,     4,     5,     6,     7,     1,    77,     1,    11,     1,
       1,    82,     1,     1,    85,    86,     7,    20,    21,     7,
      23,    24,    25,    94,    27,    28,    29,    29,    30,     8,
     101,   102,   103,    29,    30,    29,    30,    29,    30,    17,
      29,    30,    10,    10,   115,    10,     0,     1,   119,     3,
       4,     5,     6,    10,     8,     9,    30,    11,    10,     1,
      14,    15,    16,    17,    18,    19,     8,    11,    22,    23,
      24,    25,    11,    27,    28,    29,     0,     1,    10,     3,
       4,     5,     6,     9,     8,     9,     9,    11,     9,     1,
      14,    15,    16,    17,    18,    19,     8,    11,    22,    23,
      24,    25,     9,    27,    28,    29,     0,     1,    11,     3,
       4,     5,     6,    11,     8,     9,    11,    11,    11,     1,
      14,    15,    16,    17,    18,    19,     8,    29,    22,    23,
      24,    25,    11,    27,    28,    29,     0,     1,     8,     3,
       4,     5,     6,     8,     8,     9,     8,    11,     8,     8,
      14,    15,    16,    17,    18,    19,     1,     8,    22,    23,
      24,    25,    10,    27,    28,    29,     0,     1,     1,     3,
       4,     5,     6,    10,    10,     0,     1,    11,     3,     4,
       5,     6,     1,    10,    29,    30,    11,     1,    10,    23,
      24,    25,     1,    27,    28,    29,    29,    30,    23,    24,
      25,     1,    27,    28,    29,     1,    10,     1,    10,     1,
      29,    30,    11,    11,    11,    29,    30,    32,    11,    10,
      29,    30,    23,    24,    25,    11,    27,    28,    29,    29,
      30,    11,    11,    29,    30,    29,    30,    29,    30,     1,
      11,     3,     4,     5,     6,    21,     8,     9,     3,     4,
       5,     6,    14,    15,    16,    23,    18,    19,   115,     1,
      22,     3,     4,     5,     6,    32,     8,     9,   120,    50,
      29,     8,    14,    15,    16,   133,    18,    19,    -1,     1,
      22,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      -1,    -1,    14,    15,    16,    -1,    18,    19,    -1,     1,
      22,     3,     4,     5,     6,    23,    -1,    25,    -1,    27,
      28,    29,    14,    15,    16,    -1,    18,    19,    -1,     1,
      22,     3,     4,     5,     6,   165,   166,   167,   168,   169,
     170,    -1,    14,    15,    16,    -1,    18,    19,    -1,     1,
      22,     3,     4,     5,     6,     1,     8,     3,     4,     5,
       6,    -1,     8,    -1,    -1,    17,    -1,    -1,    -1,    -1,
       1,    17,     3,     4,     5,     6,    -1,     8,     9,     1,
      -1,     3,     4,     5,     6,    -1,     8,     9,     1,    -1,
       3,     4,     5,     6,    -1,     8,     9,     1,    -1,     3,
       4,     5,     6,     1,     8,     3,     4,     5,     6,    -1,
       8
  };

  const unsigned char
  analizador_fran::yystos_[] =
  {
       0,    23,    24,    25,    27,    28,    29,    32,    33,    34,
      35,    36,    37,    39,    44,    53,    55,    56,    57,    61,
      63,    64,     1,     7,    29,     1,     7,     7,     1,     7,
       1,     7,    13,     0,    64,    36,     1,    26,    60,    33,
       1,    29,    30,    40,    43,    47,     1,    40,     7,    29,
      43,    58,     1,    58,    58,    29,    62,     1,    62,    29,
      30,    29,    38,    41,    42,    43,    29,    30,    37,    43,
      45,    46,    47,    51,    54,    10,    10,     1,     3,     4,
       5,     6,    48,     1,     8,     1,    48,     8,     1,     8,
      29,    65,    66,    67,     1,    14,    15,    16,    18,    19,
      22,    59,     1,    59,     8,     8,     1,     8,     8,    13,
       9,     9,     1,     9,     8,    17,    20,    21,    52,    48,
      49,    50,    34,    34,    29,    43,    29,    43,    29,    43,
      29,    43,     8,    17,    29,    29,    43,    29,    43,    29,
      43,    10,    10,    10,    10,    10,    30,    58,    58,    58,
       1,    58,    42,    29,    43,    50,    11,    11,    10,    67,
      34,    34,    34,    34,    34,     9,     9,     9,     9,     1,
       9,    34,    11,    11,    11,    11,    11,    29,    51,    51,
      51,    51,    51,     1,    51,    11,     8,     8,     8,     8,
       8,     8,     1,     8,    10,    10,    10,    10,    10,    10,
      10,     1,    10,    34,    34,    34,    34,    34,    34,    34,
      34,    34,    11,    11,    11,    11,    11,    11,    11,    11,
       1,    11
  };

  const unsigned char
  analizador_fran::yyr1_[] =
  {
       0,    31,    32,    32,    32,    33,    34,    34,    35,    35,
      36,    36,    36,    36,    36,    37,    38,    38,    39,    39,
      39,    39,    39,    40,    41,    41,    42,    42,    43,    43,
      43,    43,    44,    44,    44,    44,    45,    45,    45,    46,
      46,    47,    47,    47,    47,    47,    47,    47,    47,    48,
      48,    48,    48,    49,    49,    50,    50,    51,    52,    52,
      53,    54,    54,    54,    55,    55,    55,    56,    56,    57,
      57,    57,    57,    57,    58,    58,    58,    58,    58,    58,
      58,    59,    59,    59,    59,    59,    59,    60,    60,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    62,
      63,    64,    65,    65,    66,    66,    67
  };

  const unsigned char
  analizador_fran::yyr2_[] =
  {
       0,     2,     2,     2,     1,     1,     1,     0,     2,     1,
       1,     1,     1,     1,     1,     4,     1,     0,     4,     4,
       4,     4,     4,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     3,     3,     1,     1,     1,     1,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     1,     2,     1,     2,     2,     2,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     2,     7,
       7,     7,     7,     7,     3,     3,     3,     3,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     4,     4,    11,
      11,    11,    11,    11,    11,    11,    11,    11,    11,     3,
       7,     8,     1,     0,     3,     1,     1
  };



  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const analizador_fran::yytname_[] =
  {
  "\"eof\"", "error", "$undefined", "\"+\"", "\"-\"", "\"*\"", "\"/\"",
  "\"(\"", "\")\"", "\";\"", "\"{\"", "\"}\"", "\":\"", "\"=\"", "\"!=\"",
  "\"<\"", "\">\"", "\",\"", "\">=\"", "\"<=\"", "\"++\"", "\"--\"",
  "\"==\"", "\"print\"", "\"function\"", "\"if\"", "\"else\"", "\"while\"",
  "\"for\"", "\"id\"", "\"num\"", "$accept", "INICIO", "principal",
  "lineascodigos", "lineascodigo", "linea", "invocarmetodos",
  "parametrosenvio", "imprimir", "dato", "parenvio", "penvio", "valor",
  "crearvariable", "operasignacion", "aritmetico", "oprcomun", "tipoopr",
  "oprcomplemento", "oprcom", "incredismivariable", "indis",
  "cambiarvalor", "cambvalor", "buclecondicion", "condicionif",
  "condicionsi", "condicion", "condicional", "condicionno", "buclefor",
  "iniciafor", "buclewhile", "funcion", "parametrosin", "parametros",
  "parametro", YY_NULLPTR
  };

#if YYDEBUG
  const unsigned char
  analizador_fran::yyrline_[] =
  {
       0,    72,    72,    73,    74,    76,    78,    79,    81,    82,
      84,    85,    86,    87,    88,    90,    92,    93,    95,    96,
      97,    98,    99,   101,   103,   103,   105,   106,   108,   109,
     110,   111,   113,   114,   115,   116,   118,   119,   120,   122,
     123,   125,   126,   127,   128,   129,   130,   131,   132,   134,
     135,   136,   137,   139,   139,   141,   141,   143,   145,   145,
     147,   149,   149,   149,   151,   152,   153,   155,   156,   158,
     159,   160,   161,   162,   164,   165,   166,   167,   168,   169,
     170,   172,   173,   174,   175,   176,   177,   179,   180,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   193,
     195,   197,   199,   199,   201,   201,   203
  };

  // Print the state stack on the debug stream.
  void
  analizador_fran::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << i->state;
    *yycdebug_ << std::endl;
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  analizador_fran::yy_reduce_print_ (int yyrule)
  {
    unsigned int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):" << std::endl;
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG


#line 6 "parser.yy" // lalr1.cc:1167
} // yy
#line 1208 "parser.tab.cc" // lalr1.cc:1167
#line 205 "parser.yy" // lalr1.cc:1168

using namespace std;
ofstream tokens;
int n = 1;

int borrar()
{
  if( remove( "sintactico_errores.txt" ) != 0 )
    perror( "Error deleting file" );
  else
    puts( "File successfully deleted" );
  return 0;
}

void yy::analizador_fran::error(const location_type& lugar, const std::string& lexema)
{
	if (n==1){borrar();}
	tokens.open("sintactico_errores.txt", ofstream::app);
    std::cout << n << lexema << std::endl;
	tokens << lexema << "\n";
	tokens.close();
	n++;
}
