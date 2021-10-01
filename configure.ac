AC_INIT(EPS09Wrapper, [1.0])
AC_CONFIG_SRCDIR([configure.ac])

AM_INIT_AUTOMAKE

AC_PROG_F77(gfortran f77 g77)
AC_F77_LIBRARY_LDFLAGS

AC_PROG_CXX(CC g++)
LT_INIT([disable-static])

case $CXX in
     clang++)
	CXXFLAGS="$CXXFLAGS -Wall -std=c++11 -O2 -ggdb3"
     ;;
     *g++)
	CXXFLAGS="$CXXFLAGS -Wall -pedantic -std=c++11 -O2 -ggdb3"
     ;;
esac

case $F77 in
     gfortran)
	FFLAGS="$FFLAGS -Wall -fno-automatic -msse -mfpmath=sse -ffixed-line-length-none -fsecond-underscore"
     ;;
     *77)
	if test $ac_cv_prog_g77 = yes; then
  	   FFLAGS="$FFLAGS -fno-automatic -finit-local-zero -msse -mfpmath=sse"
 	fi
     ;;
     *)
	AC_MSG_ERROR([unknown fortran compiler: $F77])
     ;;
esac

AC_CONFIG_FILES([Makefile])
AC_OUTPUT
