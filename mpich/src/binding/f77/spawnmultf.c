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
extern FORT_DLL_SPEC void FORT_CALL MPI_COMM_SPAWN_MULTIPLE( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_spawn_multiple__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_spawn_multiple( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_spawn_multiple_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_COMM_SPAWN_MULTIPLE = PMPI_COMM_SPAWN_MULTIPLE
#pragma weak mpi_comm_spawn_multiple__ = PMPI_COMM_SPAWN_MULTIPLE
#pragma weak mpi_comm_spawn_multiple_ = PMPI_COMM_SPAWN_MULTIPLE
#pragma weak mpi_comm_spawn_multiple = PMPI_COMM_SPAWN_MULTIPLE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_COMM_SPAWN_MULTIPLE = pmpi_comm_spawn_multiple__
#pragma weak mpi_comm_spawn_multiple__ = pmpi_comm_spawn_multiple__
#pragma weak mpi_comm_spawn_multiple_ = pmpi_comm_spawn_multiple__
#pragma weak mpi_comm_spawn_multiple = pmpi_comm_spawn_multiple__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_COMM_SPAWN_MULTIPLE = pmpi_comm_spawn_multiple_
#pragma weak mpi_comm_spawn_multiple__ = pmpi_comm_spawn_multiple_
#pragma weak mpi_comm_spawn_multiple_ = pmpi_comm_spawn_multiple_
#pragma weak mpi_comm_spawn_multiple = pmpi_comm_spawn_multiple_
#else
#pragma weak MPI_COMM_SPAWN_MULTIPLE = pmpi_comm_spawn_multiple
#pragma weak mpi_comm_spawn_multiple__ = pmpi_comm_spawn_multiple
#pragma weak mpi_comm_spawn_multiple_ = pmpi_comm_spawn_multiple
#pragma weak mpi_comm_spawn_multiple = pmpi_comm_spawn_multiple
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_COMM_SPAWN_MULTIPLE( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );

#pragma weak MPI_COMM_SPAWN_MULTIPLE = PMPI_COMM_SPAWN_MULTIPLE
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_spawn_multiple__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );

#pragma weak mpi_comm_spawn_multiple__ = pmpi_comm_spawn_multiple__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_spawn_multiple( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );

#pragma weak mpi_comm_spawn_multiple = pmpi_comm_spawn_multiple
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_spawn_multiple_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );

#pragma weak mpi_comm_spawn_multiple_ = pmpi_comm_spawn_multiple_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_COMM_SPAWN_MULTIPLE  MPI_COMM_SPAWN_MULTIPLE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_comm_spawn_multiple__  mpi_comm_spawn_multiple__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_comm_spawn_multiple  mpi_comm_spawn_multiple
#else
#pragma _HP_SECONDARY_DEF pmpi_comm_spawn_multiple_  mpi_comm_spawn_multiple_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_COMM_SPAWN_MULTIPLE as PMPI_COMM_SPAWN_MULTIPLE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_comm_spawn_multiple__ as pmpi_comm_spawn_multiple__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_comm_spawn_multiple as pmpi_comm_spawn_multiple
#else
#pragma _CRI duplicate mpi_comm_spawn_multiple_ as pmpi_comm_spawn_multiple_
#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(HAVE_MULTIPLE_PRAGMA_WEAK) && \
    defined(USE_ONLY_MPI_NAMES)
extern FORT_DLL_SPEC void FORT_CALL MPI_COMM_SPAWN_MULTIPLE( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_spawn_multiple__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_spawn_multiple( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_spawn_multiple_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_comm_spawn_multiple__ = MPI_COMM_SPAWN_MULTIPLE
#pragma weak mpi_comm_spawn_multiple_ = MPI_COMM_SPAWN_MULTIPLE
#pragma weak mpi_comm_spawn_multiple = MPI_COMM_SPAWN_MULTIPLE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_COMM_SPAWN_MULTIPLE = mpi_comm_spawn_multiple__
#pragma weak mpi_comm_spawn_multiple_ = mpi_comm_spawn_multiple__
#pragma weak mpi_comm_spawn_multiple = mpi_comm_spawn_multiple__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_COMM_SPAWN_MULTIPLE = mpi_comm_spawn_multiple_
#pragma weak mpi_comm_spawn_multiple__ = mpi_comm_spawn_multiple_
#pragma weak mpi_comm_spawn_multiple = mpi_comm_spawn_multiple_
#else
#pragma weak MPI_COMM_SPAWN_MULTIPLE = mpi_comm_spawn_multiple
#pragma weak mpi_comm_spawn_multiple__ = mpi_comm_spawn_multiple
#pragma weak mpi_comm_spawn_multiple_ = mpi_comm_spawn_multiple
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS) && defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_COMM_SPAWN_MULTIPLE( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_comm_spawn_multiple__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_comm_spawn_multiple_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_comm_spawn_multiple( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_comm_spawn_multiple__ = PMPI_COMM_SPAWN_MULTIPLE
#pragma weak pmpi_comm_spawn_multiple_ = PMPI_COMM_SPAWN_MULTIPLE
#pragma weak pmpi_comm_spawn_multiple = PMPI_COMM_SPAWN_MULTIPLE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_COMM_SPAWN_MULTIPLE = pmpi_comm_spawn_multiple__
#pragma weak pmpi_comm_spawn_multiple_ = pmpi_comm_spawn_multiple__
#pragma weak pmpi_comm_spawn_multiple = pmpi_comm_spawn_multiple__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_COMM_SPAWN_MULTIPLE = pmpi_comm_spawn_multiple_
#pragma weak pmpi_comm_spawn_multiple__ = pmpi_comm_spawn_multiple_
#pragma weak pmpi_comm_spawn_multiple = pmpi_comm_spawn_multiple_
#else
#pragma weak PMPI_COMM_SPAWN_MULTIPLE = pmpi_comm_spawn_multiple
#pragma weak pmpi_comm_spawn_multiple__ = pmpi_comm_spawn_multiple
#pragma weak pmpi_comm_spawn_multiple_ = pmpi_comm_spawn_multiple
#endif /* Test on name mapping */
#endif /* Use multiple pragma weak */

#ifdef F77_NAME_UPPER
#define mpi_comm_spawn_multiple_ PMPI_COMM_SPAWN_MULTIPLE
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_comm_spawn_multiple_ pmpi_comm_spawn_multiple__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_comm_spawn_multiple_ pmpi_comm_spawn_multiple
#else
#define mpi_comm_spawn_multiple_ pmpi_comm_spawn_multiple_
#endif /* Test on name mapping */

/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Comm_spawn_multiple
#define MPI_Comm_spawn_multiple PMPI_Comm_spawn_multiple 

#else

#ifdef F77_NAME_UPPER
#define mpi_comm_spawn_multiple_ MPI_COMM_SPAWN_MULTIPLE
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_comm_spawn_multiple_ mpi_comm_spawn_multiple__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_comm_spawn_multiple_ mpi_comm_spawn_multiple
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_comm_spawn_multiple_ ( MPI_Fint *v1, char *v2 FORT_MIXED_LEN(d2), char *v3 FORT_MIXED_LEN(d3), MPI_Fint v4[], MPI_Fint v5[], MPI_Fint *v6, MPI_Fint *v7, MPI_Fint *v8, MPI_Fint v9[], MPI_Fint *ierr FORT_END_LEN(d2) FORT_END_LEN(d3) ){
    char **p2;
    int  asize2=0;
    char ***p3=0;

#ifndef HAVE_MPI_F_INIT_WORKS_WITH_C
    if (MPIR_F_NeedInit){ mpirinitf_(); MPIR_F_NeedInit = 0; }
#endif

    { int i;
      char *ptmp;

      asize2 = (int)*v1 + 1;

      p2 = (char **)MPIU_Malloc( asize2 * sizeof(char *) );
      ptmp    = (char *)MPIU_Malloc( asize2 * (d2 + 1) );
      for (i=0; i<asize2-1; i++) {
          char *p = v2 + i * d2, *pin, *pdest;
          int j;

          pdest = ptmp + i * (d2 + 1);
          p2[i] = pdest;
          /* Move to the end and work back */
          pin = p + d2 - 1;
          while (*pin == ' ' && pin > p) pin--;
          /* Copy and then null terminate */
          for (j=0; j<(pin-p)+1; j++) { pdest[j] = p[j]; }
          pdest[j] = 0;
          }
    /* Null terminate the array */
    p2[asize2-1] = 0;
    }

    /* Check for the special case of a the null args case. */
    if (v3 == MPI_F_ARGVS_NULL) { v3 = (char *)MPI_ARGVS_NULL; } 
    else { 
        /* We must convert from the 2-dimensional Fortran array of
           fixed length strings to a C variable-sized array (really an
           array of pointers for each command of pointers to each 
           argument, which is null terminated.*/

      int k;

      /* Allocate the array of pointers for the commands */
      p3 = (char ***)MPIU_Malloc( *v1 * sizeof(char **) );

      for (k=0; k<*v1; k++) {
        /* For each command, find the number of command-line arguments.
           They are terminated by an empty entry. */
        /* Find the first entry in the Fortran array for this row */
        char *p = v3 + k * d3;
        ssize_t arglen = 0;
        int argcnt=0, i;
        char **pargs, *pdata;
        for (argcnt=0; 1; argcnt ++) {
            char *pin = p + d3 - 1; /* Move to the end of the
                                            current Fortran string */
            while (*pin == ' ' && pin > p) pin--; /* Move backwards until
                                                    we find a non-blank
                                                    (Fortran is blank padded)*/
            if (pin == p && *pin == ' ') {
                /* found the terminating empty arg */
                break;
            }
            /* Keep track of the amount of space needed */
            arglen += (pin - p) + 2;   /* add 1 for the null */
            /* Advance to the next entry in the array */
            p += (*v1) * d3;
        }

        /* argcnt is the number of provided arguments.  
           Allocate the necessary elements and copy, null terminating copies */
        pargs = (char **)MPIU_Malloc( (argcnt+1)*sizeof(char *) );
        pdata = (char *)MPIU_Malloc( arglen );
        p3[k] = pargs;
        pargs[argcnt] = 0;  /* Null terminate end */
        /* Copy each argument to consequtive locations in pdata, 
           and set the corresponding pointer entry */
        p = v3 + k * d3;
        for (i=0; i<argcnt; i++) {
            int j;
            char *pin;
            p3[k][i] = pdata;
            /* Move to the end and work back */
            pin = p + d3 - 1;
            while (*pin == ' ' && pin > p) pin--;
            /* Copy and then null terminate */
            for (j=0; j<(pin-p)+1; j++) { *pdata++ = p[j]; }
            *pdata++ = 0;
            /* Advance to the next entry in the array */
            p += (*v1) * d3;
        }
	/* Set the terminator */
        p3[k][i] = 0;
       }
    }

    if ((MPI_Fint*)v9 == MPI_F_ERRCODES_IGNORE) { v9 = (MPI_Fint *)MPI_ERRCODES_IGNORE; }
    *ierr = MPI_Comm_spawn_multiple( (int)*v1, p2, p3, v4, (MPI_Info *)(v5), (int)*v6, (MPI_Comm)(*v7), (MPI_Comm *)(v8), (int *)v9 );
    MPIU_Free( p2[0] );
    MPIU_Free( p2 );
    if (v3 != (char *)MPI_ARGVS_NULL) { 
        int i; 
        for (i=0; i <*v1; i++) {
            MPIU_Free( p3[i][0] );  /* Free space allocated to args */
            MPIU_Free( p3[i] );       /* Free space allocated to arg array */
        }
        /* Free the array of arrays */
        MPIU_Free( p3 );
    }
}
