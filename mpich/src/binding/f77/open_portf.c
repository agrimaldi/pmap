/* -*- Mode: C; c-basic-offset:4 ; -*- */
/*  
 *  (C) 2001 by Argonne National Laboratory.
 *      See COPYRIGHT in top-level directory.
 *
 * This file is automatically generated by buildiface 
 * DO NOT EDIT
 */
#include "mpi_fortimpl.h"


/* Begin MPI profiling block */
#if defined(USE_WEAK_SYMBOLS) && !defined(USE_ONLY_MPI_NAMES) 
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_OPEN_PORT( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_open_port__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_open_port( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_open_port_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_OPEN_PORT = PMPI_OPEN_PORT
#pragma weak mpi_open_port__ = PMPI_OPEN_PORT
#pragma weak mpi_open_port_ = PMPI_OPEN_PORT
#pragma weak mpi_open_port = PMPI_OPEN_PORT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_OPEN_PORT = pmpi_open_port__
#pragma weak mpi_open_port__ = pmpi_open_port__
#pragma weak mpi_open_port_ = pmpi_open_port__
#pragma weak mpi_open_port = pmpi_open_port__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_OPEN_PORT = pmpi_open_port_
#pragma weak mpi_open_port__ = pmpi_open_port_
#pragma weak mpi_open_port_ = pmpi_open_port_
#pragma weak mpi_open_port = pmpi_open_port_
#else
#pragma weak MPI_OPEN_PORT = pmpi_open_port
#pragma weak mpi_open_port__ = pmpi_open_port
#pragma weak mpi_open_port_ = pmpi_open_port
#pragma weak mpi_open_port = pmpi_open_port
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_OPEN_PORT( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );

#pragma weak MPI_OPEN_PORT = PMPI_OPEN_PORT
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_open_port__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );

#pragma weak mpi_open_port__ = pmpi_open_port__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_open_port( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );

#pragma weak mpi_open_port = pmpi_open_port
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_open_port_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );

#pragma weak mpi_open_port_ = pmpi_open_port_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_OPEN_PORT  MPI_OPEN_PORT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_open_port__  mpi_open_port__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_open_port  mpi_open_port
#else
#pragma _HP_SECONDARY_DEF pmpi_open_port_  mpi_open_port_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_OPEN_PORT as PMPI_OPEN_PORT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_open_port__ as pmpi_open_port__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_open_port as pmpi_open_port
#else
#pragma _CRI duplicate mpi_open_port_ as pmpi_open_port_
#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(HAVE_MULTIPLE_PRAGMA_WEAK) && \
    defined(USE_ONLY_MPI_NAMES)
extern FORT_DLL_SPEC void FORT_CALL MPI_OPEN_PORT( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_open_port__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_open_port( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_open_port_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_open_port__ = MPI_OPEN_PORT
#pragma weak mpi_open_port_ = MPI_OPEN_PORT
#pragma weak mpi_open_port = MPI_OPEN_PORT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_OPEN_PORT = mpi_open_port__
#pragma weak mpi_open_port_ = mpi_open_port__
#pragma weak mpi_open_port = mpi_open_port__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_OPEN_PORT = mpi_open_port_
#pragma weak mpi_open_port__ = mpi_open_port_
#pragma weak mpi_open_port = mpi_open_port_
#else
#pragma weak MPI_OPEN_PORT = mpi_open_port
#pragma weak mpi_open_port__ = mpi_open_port
#pragma weak mpi_open_port_ = mpi_open_port
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS) && defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_OPEN_PORT( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_open_port__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_open_port_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_open_port( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_open_port__ = PMPI_OPEN_PORT
#pragma weak pmpi_open_port_ = PMPI_OPEN_PORT
#pragma weak pmpi_open_port = PMPI_OPEN_PORT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_OPEN_PORT = pmpi_open_port__
#pragma weak pmpi_open_port_ = pmpi_open_port__
#pragma weak pmpi_open_port = pmpi_open_port__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_OPEN_PORT = pmpi_open_port_
#pragma weak pmpi_open_port__ = pmpi_open_port_
#pragma weak pmpi_open_port = pmpi_open_port_
#else
#pragma weak PMPI_OPEN_PORT = pmpi_open_port
#pragma weak pmpi_open_port__ = pmpi_open_port
#pragma weak pmpi_open_port_ = pmpi_open_port
#endif /* Test on name mapping */
#endif /* Use multiple pragma weak */

#ifdef F77_NAME_UPPER
#define mpi_open_port_ PMPI_OPEN_PORT
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_open_port_ pmpi_open_port__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_open_port_ pmpi_open_port
#else
#define mpi_open_port_ pmpi_open_port_
#endif /* Test on name mapping */

/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Open_port
#define MPI_Open_port PMPI_Open_port 

#else

#ifdef F77_NAME_UPPER
#define mpi_open_port_ MPI_OPEN_PORT
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_open_port_ mpi_open_port__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_open_port_ mpi_open_port
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_open_port_ ( MPI_Fint *v1, char *v2 FORT_MIXED_LEN(d2), MPI_Fint *ierr FORT_END_LEN(d2) ){
    char *p2;
    p2 = (char *)MPIU_Malloc( d2 + 1 );
    *ierr = MPI_Open_port( (MPI_Info)(*v1), p2 );

    if (!*ierr) {char *p = v2, *pc=p2;
        while (*pc) {*p++ = *pc++;}
        while ((p-v2) < d2) { *p++ = ' '; }
    }
    MPIU_Free( p2 );
}
