// Copyright (c) 1996-2004  Utrecht University (The Netherlands),
// ETH Zurich (Switzerland), Freie Universitaet Berlin (Germany),
// INRIA Sophia-Antipolis (France), Martin-Luther-University Halle-Wittenberg
// (Germany), Max-Planck-Institute Saarbruecken (Germany), RISC Linz (Austria),
// and Tel-Aviv University (Israel).  All rights reserved.
//
// This file is part of CGAL (www.cgal.org); you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public License as
// published by the Free Software Foundation; version 2.1 of the License.
// See the file LICENSE.LGPL distributed with CGAL.
//
// This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
// WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
//
// Author(s): the install_cgal script

// Compiler specific configuration file for CGAL 3.3
// System: i686_CYGWINNT-6.0_cl.exe-1400
// generated by install_cgal 38808
//+--------------------------------------------------------------------------
//| The flag CGAL_CFG_CCTYPE_MACRO_BUG is set, if a compiler defines the
//| standard C library functions in cctype (isdigit etc.) as macros.
//| According to the standard they have to be functions.
//+--------------------------------------------------------------------------
//#define CGAL_CFG_CCTYPE_MACRO_BUG 1

//+--------------------------------------------------------------------------
//| This flag is set, if the compiler does not properly parse comma separated
//| expressions in a base constructor call. (e.g. g++ 3.3).
//+--------------------------------------------------------------------------
//#define CGAL_CFG_COMMA_BUG 1

//+--------------------------------------------------------------------------
//| The flag CGAL_CFG_CONVERSION_OPERATOR_BUG is set, if a compiler
//| crashes with some conversion operators.  G++ 3.3.0 is affected by
//| this bug (it hits Darwin severely since it is the system compiler).
//+--------------------------------------------------------------------------
//#define CGAL_CFG_CONVERSION_OPERATOR_BUG 1

//+--------------------------------------------------------------------------
//| This flag is set, if a compiler cannot properly perform a partial
//| specialization relying on deducable arguments.
//| This bug appears for example on Sunpro 5.9 beta for x86 linux.
//| (more precisely: Sun C++ 5.9 Linux_i386 Build40_1 2007/02/09).
//+--------------------------------------------------------------------------
//#define CGAL_CFG_DEDUCABLE_CONTEXT_BUG 1

//+--------------------------------------------------------------------------
//| This flag is set if the compiler wants you to remove the word
//| template in some complicated dependent types.
//| Any error with the message "Unexpected type name" is likely to be
//| related to this bug in sunpro.
//+--------------------------------------------------------------------------
//#define CGAL_CFG_DEEP_DEPENDENT_TEMPLATE_BUG 1

//+--------------------------------------------------------------------------
//| This flag is set if the compiler bugs when handling denormal values at
//| compile time.  At least PGCC 5.1-3 has the bug.
//+--------------------------------------------------------------------------
//#define CGAL_CFG_DENORMALS_COMPILE_BUG 1

//+--------------------------------------------------------------------------
//| This flag is set if the compiler bugs with special features with IEEE 754
//| handling, concerning is_valid() and is_finite() testing of infinity and
//| nans.  The workaround is to use bitfield operations.
//| At least VC++, Borland and PGCC have the bug.
//+--------------------------------------------------------------------------
//#define CGAL_CFG_IEEE_754_BUG 1

//+--------------------------------------------------------------------------
//| This flag is set, if the executable does not properly parse an int followed by a comma
//| Can you believe it!!!
//+--------------------------------------------------------------------------
//#define CGAL_CFG_ISTREAM_INT_BUG 1

//+--------------------------------------------------------------------------
//| If a compiler (or assembler or linker) has problems with long names
//| CGAL_CFG_LONGNAME_BUG is set.
//+--------------------------------------------------------------------------
#define CGAL_CFG_LONGNAME_BUG 1

//+--------------------------------------------------------------------------
//| Tests if the input stream operator<< is correct with long long.
//| pgCC 6.2 has this bug.
//+--------------------------------------------------------------------------
//#define CGAL_CFG_LONG_LONG_IO_BUG 1

//+--------------------------------------------------------------------------
//| This flag is set, if a compiler cannot distinguish the signature
//| of overloaded function templates, which have arguments whose type
//| depends on the template parameter.
//| This bug appears for example on Sunpro 5.3 and 5.4.
//+--------------------------------------------------------------------------
//#define CGAL_CFG_MATCHING_BUG_4 1

//+--------------------------------------------------------------------------
//| This flag is set, if a compiler cannot distinguish the signature
//| of overloaded function templates, which have one template parameter
//| to be passed explicitely when being called.
//| This bug appears for example on g++ 3.3 and 3.4.
//+--------------------------------------------------------------------------
//#define CGAL_CFG_MATCHING_BUG_5 1

//+--------------------------------------------------------------------------
//| VC 7.3 does not recognize when an operator in a class
//| redefines the operator with the same signature in a base class
//| It happens with the regular triangulation.
//| No minimal testcase yet
//+--------------------------------------------------------------------------
#define CGAL_CFG_MATCHING_BUG_6 1

//+--------------------------------------------------------------------------
//| The flag CGAL_CFG_MISSING_TEMPLATE_VECTOR_CONSTRUCTORS_BUG is set,
//| if the std::vector class does not have defined template constructors.
//| This is a feature of SunPro 5.5.
//+--------------------------------------------------------------------------
//#define CGAL_CFG_MISSING_TEMPLATE_VECTOR_CONSTRUCTORS_BUG 1

//+--------------------------------------------------------------------------
//| The flag CGAL_CFG_NESTED_CLASS_FRIEND_DECLARATION_BUG is set
//| if the compiler cannot recognize the declaration of a nested
//| class as friend.
//| Compilers such as the Intel compiler 8.x (for linux or windows),
//| MSVC 7.1 or pgCC have this "bug". It should be noted that the C++
//| standard is a bit vague on this issue, in other words what is referred
//| to as "bug" above, may not really be a bug. Hopefully, the next standard
//| will resolve this issue.
//+--------------------------------------------------------------------------
#define CGAL_CFG_NESTED_CLASS_FRIEND_DECLARATION_BUG 1

//+--------------------------------------------------------------------------
//| This flag is set, if the compiler does not match a member 
//| definition to an existing declaration (eg., cl1310 Beta).
//+--------------------------------------------------------------------------
#define CGAL_CFG_NET2003_MATCHING_BUG 1

//+--------------------------------------------------------------------------
//| If a compiler doesn't know <limits> (g++-2.95)
//| or has a bug in the implementation (Sun CC 5.4, MipsPro CC)
//| CGAL_CFG_NO_LIMITS is set. 
//+--------------------------------------------------------------------------
//#define CGAL_CFG_NO_LIMITS 1

//+--------------------------------------------------------------------------
//| If a compiler doesn't know the locale classic
//| CGAL_CFG_NO_LOCALE is set. 
//+--------------------------------------------------------------------------
//#define CGAL_CFG_NO_LOCALE 1

//+--------------------------------------------------------------------------
//| Tests if std::cout supports long double IO.
//| pgCC 5.2 and 6.2 have this bug.
//+--------------------------------------------------------------------------
//#define CGAL_CFG_NO_LONG_DOUBLE_IO 1

//+--------------------------------------------------------------------------
//| The long long built-in integral type is not part of the ISO C++ standard,
//| but many compilers support it nevertheless since it's part of the ISO
//| C standard.
//| The following definition is set if it is supported.
//+--------------------------------------------------------------------------
//#define CGAL_CFG_NO_LONG_LONG 1

//+--------------------------------------------------------------------------
//| If a compiler doesn't know nextafter() (or only knows _nextafter as VC++ 7.1).
//| nextafter() is part of ISO C99, but not ISO C++98 (hence <math.h> instead of <cmath>).
//| CGAL_CFG_NO_NEXTAFTER is set. 
//+--------------------------------------------------------------------------
#define CGAL_CFG_NO_NEXTAFTER 1

//+--------------------------------------------------------------------------
//| The flag CGAL_CFG_NO_STDC_NAMESPACE is set, if a compiler does not
//| put the parts of the standard library inherited from the standard
//| C library in namespace std. (only tests for the symbols used in CGAL)
//+--------------------------------------------------------------------------
//#define CGAL_CFG_NO_STDC_NAMESPACE 1

//+--------------------------------------------------------------------------
//| A basic test for the STL.
//| If it fails, it probably means a bad CGAL installation.
//+--------------------------------------------------------------------------
//#define CGAL_CFG_NO_STL 1

//+--------------------------------------------------------------------------
//| G++ 2.95.2 has problems with member functions implemented outside of
//| the class body if this member function has a parameter type that is
//| dependant on a template in the template parameter list of the class. A
//| workaround would be to implement the member function inline in the class.
//| The following definition is set if this error error occurs.
//+--------------------------------------------------------------------------
//#define CGAL_CFG_NO_TMPL_IN_TMPL_DEPENDING_FUNCTION_PARAM 1

//+--------------------------------------------------------------------------
//| Nested templates in template parameter, such as 'template <
//| template <class T> class A>' are not supported by any compiler. 
//| The following definition is set if they are not supported.
//+--------------------------------------------------------------------------
//#define CGAL_CFG_NO_TMPL_IN_TMPL_PARAM 1

//+--------------------------------------------------------------------------
//| This flag is set if the compiler bugs with std::numeric_limits
//+--------------------------------------------------------------------------
//#define CGAL_CFG_NUMERIC_LIMITS_BUG 1

//+--------------------------------------------------------------------------
//| This flag is set if the compiler complains about an ambiguity between
//| a type and itself when some members are defined out of line. This is
//| a Sun CC bug.
//+--------------------------------------------------------------------------
//#define CGAL_CFG_OUTOFLINE_MEMBER_DEFINITION_BUG 1

//+--------------------------------------------------------------------------
//| The flag CGAL_CFG_OUTOFLINE_TEMPLATE_MEMBER_DEFINITION_BUG is set,
//| if a compiler does not support the definition of member templates
//| out of line, i.e. outside class scope. The solution is to put the
//| definition inside the class. This is a feature of SunPro 5.5.
//+--------------------------------------------------------------------------
//#define CGAL_CFG_OUTOFLINE_TEMPLATE_MEMBER_DEFINITION_BUG 1

//+--------------------------------------------------------------------------
//| The flag CGAL_CFG_OUTOFLINE_TEMPLATE_MEMBER_DEFINITION_BUG_2 is set,
//| if a compiler does not support the definition of member templates
//| out of line, i.e. outside class scope. The solution is to put the
//| definition inside the class.
//| The difference with CGAL_CFG_OUTOFLINE_TEMPLATE_MEMBER_DEFINITION_BUG
//| is the return type of the member template.SunPro 5.5 should be OK with
//| this code.
//+--------------------------------------------------------------------------
//#define CGAL_CFG_OUTOFLINE_TEMPLATE_MEMBER_DEFINITION_BUG_2 1

//+--------------------------------------------------------------------------
//| This flag is set if the compiler is Sun's compiler and it uses the
//| old Rogue Wave STL.
//| The workarounds consist in faking iterator_traits and using a wrapper
//| to reverse_iterator
//+--------------------------------------------------------------------------
//#define CGAL_CFG_SUNPRO_RWSTD 1

//+--------------------------------------------------------------------------
//+--------------------------------------------------------------------------
#define CGAL_CFG_TYPENAME_BEFORE_DEFAULT_ARGUMENT_BUG 1

//+--------------------------------------------------------------------------
//| This flag is set if the compiler doesn't support "using Base::Member;" in
//| a derived class.  The workaround is to write a forwarder.
//| At least g++ 2.95 and SunPro CC 5.3 have this bug.
//+--------------------------------------------------------------------------
//#define CGAL_CFG_USING_BASE_MEMBER_BUG 1

//+--------------------------------------------------------------------------
//| This flag is set if the compiler bugs with some "using Base::Member;" in
//| a derived class.  The workaround is to write a forwarder or not use using.
//| At least SunPro CC 5.3 has this bug where the typical error message is :
//| "Error: The function B<int>::g() has not had a body defined."
//| Note that the subtlely is that the error message does not mention
//| "Member"...
//+--------------------------------------------------------------------------
//#define CGAL_CFG_USING_BASE_MEMBER_BUG_2 1

//+--------------------------------------------------------------------------
//| This flag is set if the compiler bugs with some "using Base::Member;" in
//| a derived class, when there is a typedef of the base class.
//| The workaround is to write a forwarder or not use using.
//| At least MipsPRO CC 7.4 has this bug.
//+--------------------------------------------------------------------------
//#define CGAL_CFG_USING_BASE_MEMBER_BUG_3 1

