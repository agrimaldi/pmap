/* begin_generated_IBM_copyright_prolog                             */
/*                                                                  */
/* This is an automatically generated copyright prolog.             */
/* After initializing,  DO NOT MODIFY OR MOVE                       */
/*  --------------------------------------------------------------- */
/* Licensed Materials - Property of IBM                             */
/* Blue Gene/Q 5765-PER 5765-PRP                                    */
/*                                                                  */
/* (C) Copyright IBM Corp. 2011, 2012 All Rights Reserved           */
/* US Government Users Restricted Rights -                          */
/* Use, duplication, or disclosure restricted                       */
/* by GSA ADP Schedule Contract with IBM Corp.                      */
/*                                                                  */
/*  --------------------------------------------------------------- */
/*                                                                  */
/* end_generated_IBM_copyright_prolog                               */
/*  (C)Copyright IBM Corp.  2007, 2011  */
/**
 * \file include/mpidi_prototypes.h
 * \brief ???
 */
/*
 *  (C) 2001 by Argonne National Laboratory.
 *      See COPYRIGHT in top-level directory.
 */


#ifndef __include_mpidi_prototypes_h__
#define __include_mpidi_prototypes_h__


/**
 * \addtogroup MPID_RECVQ
 * \{
 */
void MPIDI_Recvq_init();
void MPIDI_Recvq_finalize();
int            MPIDI_Recvq_FU        (int s, int t, int c, MPI_Status * status);
MPID_Request * MPIDI_Recvq_FDUR      (MPI_Request req, int source, int tag, int context_id);
int            MPIDI_Recvq_FDPR      (MPID_Request * req);
#ifndef OUT_OF_ORDER_HANDLING
MPID_Request * MPIDI_Recvq_FDP_or_AEU(MPID_Request *newreq, int s, int t, int c, int * foundp);
MPID_Request * MPIDI_Recvq_FDU       (int source, int tag, int context_id, int * foundp);
MPID_Request * MPIDI_Recvq_AEU       (MPID_Request *newreq, int source, int tag, int context_id);
#else
MPID_Request * MPIDI_Recvq_FDP_or_AEU(MPID_Request *newreq, int s, pami_task_t ps, int t, int c, int sq, int * foundp);
MPID_Request * MPIDI_Recvq_FDU       (int source, pami_task_t pami_source, int tag, int context_id, int * foundp);
MPID_Request * MPIDI_Recvq_AEU       (MPID_Request *newreq, int source, pami_task_t pami_source, int tag, int context_id, int msg_seqno);
#endif
void MPIDI_Recvq_DumpQueues          (int verbose);
#ifdef OUT_OF_ORDER_HANDLING
void           MPIDI_Recvq_enqueue_ool     (pami_task_t s, MPID_Request * r);
void           MPIDI_Recvq_insert_ool      (MPID_Request *q,MPID_Request *e);
#endif
/** \} */

void MPIDI_Buffer_copy(const void     * const sbuf,
                       int                    scount,
                       MPI_Datatype           sdt,
                       int            *       smpi_errno,
                       void           * const rbuf,
                       int                    rcount,
                       MPI_Datatype           rdt,
                       MPIDI_msg_sz_t *       rsz,
                       int            *       rmpi_errno);

pami_result_t MPIDI_Send_handoff (pami_context_t context, void * sreq);
pami_result_t MPIDI_Ssend_handoff(pami_context_t context, void * sreq);
pami_result_t MPIDI_Isend_handoff(pami_context_t context, void * sreq);
pami_result_t MPIDI_Isend_handoff_internal(pami_context_t context, void * sreq);

void MPIDI_RecvMsg_procnull(MPID_Comm     * comm,
                            unsigned        is_blocking,
                            MPI_Status    * status,
                            MPID_Request ** request);
void MPIDI_RecvMsg_Unexp(MPID_Request * rreq, void * buf, int count, MPI_Datatype datatype);

/**
 * \defgroup MPID_CALLBACKS MPID callbacks for communication
 *
 * These calls are used to manage message asynchronous start and completion
 *
 * \addtogroup MPID_CALLBACKS
 * \{
 */
void MPIDI_SendDoneCB      (pami_context_t    context,
                            void            * clientdata,
                            pami_result_t     result);

void MPIDI_RecvShortAsyncCB(pami_context_t    context,
                            void            * cookie,
                            const void      * _msginfo,
                            size_t            msginfo_size,
                            const void      * sndbuf,
                            size_t            sndlen,
                            pami_endpoint_t   sender,
                            pami_recv_t     * recv);
void MPIDI_RecvShortSyncCB (pami_context_t    context,
                            void            * cookie,
                            const void      * _msginfo,
                            size_t            msginfo_size,
                            const void      * sndbuf,
                            size_t            sndlen,
                            pami_endpoint_t   sender,
                            pami_recv_t     * recv);
void MPIDI_RecvCB          (pami_context_t    context,
                            void            * cookie,
                            const void      * _msginfo,
                            size_t            msginfo_size,
                            const void      * sndbuf,
                            size_t            sndlen,
                            pami_endpoint_t   sender,
                            pami_recv_t     * recv);
void MPIDI_RecvRzvCB       (pami_context_t    context,
                            void            * cookie,
                            const void      * _msginfo,
                            size_t            msginfo_size,
                            const void      * sndbuf,
                            size_t            sndlen,
                            pami_endpoint_t   sender,
                            pami_recv_t     * recv);
void MPIDI_RecvRzvCB_zerobyte (pami_context_t    context,
                               void            * cookie,
                               const void      * _msginfo,
                               size_t            msginfo_size,
                               const void      * sndbuf,
                               size_t            sndlen,
                               pami_endpoint_t   sender,
                               pami_recv_t     * recv);

void MPIDI_RecvDoneCB        (pami_context_t    context,
                              void            * clientdata,
                              pami_result_t     result);
void MPIDI_RecvDoneCB_mutexed(pami_context_t    context,
                              void            * clientdata,
                              pami_result_t     result);
void MPIDI_RecvRzvDoneCB     (pami_context_t    context,
                              void            * cookie,
                              pami_result_t     result);
void MPIDI_RecvRzvDoneCB_zerobyte (pami_context_t    context,
                                   void            * cookie,
                                   pami_result_t     result);
#ifdef OUT_OF_ORDER_HANDLING
void MPIDI_Recvq_process_out_of_order_msgs(pami_task_t src, pami_context_t context);
int MPIDI_Recvq_search_recv_posting_queue(int src, int tag, int context_id,
                                   MPID_Request **handleptr );
#endif

void MPIDI_Callback_process_unexp(MPID_Request *newreq,
				  pami_context_t        context,
                                  const MPIDI_MsgInfo * msginfo,
                                  size_t                sndlen,
                                  pami_endpoint_t       senderendpoint,
                                  const void          * sndbuf,
                                  pami_recv_t         * recv,
                                  unsigned              isSync);
void MPIDI_Callback_process_trunc(pami_context_t  context,
                                  MPID_Request   *rreq,
                                  pami_recv_t    *recv,
                                  const void     *sndbuf);
void MPIDI_Callback_process_userdefined_dt(pami_context_t      context,
                                           const void        * sndbuf,
                                           size_t              sndlen,
                                           MPID_Request      * rreq);
/** \} */


/** \brief Acknowledge an MPI_Ssend() */
void MPIDI_SyncAck_post(pami_context_t context, MPID_Request * req, unsigned rank);
pami_result_t MPIDI_SyncAck_handoff(pami_context_t context, void * inputReq);
/** \brief This is the general PT2PT control message call-back */
void MPIDI_ControlCB(pami_context_t    context,
                     void            * cookie,
                     const void      * _msginfo,
                     size_t            msginfo_size,
                     const void      * sndbuf,
                     size_t            sndlen,
                     pami_endpoint_t   sender,
                     pami_recv_t     * recv);
void
MPIDI_WinControlCB(pami_context_t    context,
                   void            * cookie,
                   const void      * _control,
                   size_t            size,
                   const void      * sndbuf,
                   size_t            sndlen,
                   pami_endpoint_t   sender,
                   pami_recv_t     * recv);

/** \brief Helper function to complete a rendevous transfer */
pami_result_t MPIDI_RendezvousTransfer(pami_context_t context, void* rreq);
pami_result_t MPIDI_RendezvousTransfer_SyncAck(pami_context_t context, void* rreq);
pami_result_t MPIDI_RendezvousTransfer_zerobyte(pami_context_t context, void* rreq);


int  MPIDI_Comm_create      (MPID_Comm *comm);
int  MPIDI_Comm_destroy     (MPID_Comm *comm);
void MPIDI_Coll_comm_create (MPID_Comm *comm);
void MPIDI_Coll_comm_destroy (MPID_Comm *comm);
void MPIDI_Env_setup        ();
void MPIDI_Comm_world_setup ();

void MPIDI_Coll_Comm_create (MPID_Comm *comm);
void MPIDI_Coll_Comm_destroy(MPID_Comm *comm);
void MPIDI_Comm_coll_query  (MPID_Comm *comm);
void MPIDI_Comm_coll_envvars(MPID_Comm *comm);
void MPIDI_Comm_coll_select(MPID_Comm *comm);
void MPIDI_Coll_register    (void);

int MPIDO_Bcast(void *buffer, int count, MPI_Datatype dt, int root, MPID_Comm *comm_ptr, int *mpierrno);
int MPIDO_Barrier(MPID_Comm *comm_ptr, int *mpierrno);

int MPIDO_Allreduce(const void *sbuffer, void *rbuffer, int count,
                    MPI_Datatype datatype, MPI_Op op, MPID_Comm *comm_ptr, int *mpierrno);
int MPIDO_Reduce(const void *sendbuf, void *recvbuf, int count, MPI_Datatype datatype, 
                 MPI_Op op, int root, MPID_Comm *comm_ptr, int *mpierrno);
int MPIDO_Allgather(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                    void *recvbuf, int recvcount, MPI_Datatype recvtype,
                    MPID_Comm *comm_ptr, int *mpierrno);

int MPIDO_Allgatherv(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                     void *recvbuf, const int *recvcounts, const int *displs,
                     MPI_Datatype recvtype, MPID_Comm * comm_ptr, int *mpierrno);

int MPIDO_Gather(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                 void *recvbuf, int recvcount, MPI_Datatype recvtype,
                 int root, MPID_Comm * comm_ptr, int *mpierrno);

int MPIDO_Gatherv(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                  void *recvbuf, const int *recvcounts, const int *displs, MPI_Datatype recvtype,
                  int root, MPID_Comm * comm_ptr, int *mpierrno);

int MPIDO_Scan(const void *sendbuf, void *recvbuf, int count, MPI_Datatype datatype,
               MPI_Op op, MPID_Comm * comm_ptr, int *mpierrno);

int MPIDO_Exscan(const void *sendbuf, void *recvbuf, int count, MPI_Datatype datatype,
               MPI_Op op, MPID_Comm * comm_ptr, int *mpierrno);

int MPIDO_Scatter(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                  void *recvbuf, int recvcount, MPI_Datatype recvtype,
                  int root, MPID_Comm * comm_ptr, int *mpierrno);

int MPIDO_Scatterv(const void *sendbuf, const int *sendcounts, const int *displs,
                   MPI_Datatype sendtype,
                   void *recvbuf, int recvcount, MPI_Datatype recvtype,
                   int root, MPID_Comm * comm_ptr, int *mpierrno);

int MPIDO_Alltoallv(const void *sendbuf, const int *sendcounts, const int *senddispls,
                    MPI_Datatype sendtype,
                    void *recvbuf, const int *recvcounts, const int *recvdispls,
                    MPI_Datatype recvtype,
                    MPID_Comm *comm_ptr, int *mpierrno);

int MPIDO_Alltoall(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                   void *recvbuf, int recvcount, MPI_Datatype recvtype,
                   MPID_Comm *comm_ptr, int *mpierrno);

int MPIDI_Datatype_to_pami(MPI_Datatype        dt,
                           pami_type_t        *pdt,
                           MPI_Op              op,
                           pami_data_function *pop,
                           int                *musupport);
void MPIDI_Op_to_string(MPI_Op op, char *string);
pami_result_t MPIDI_Pami_post_wrapper(pami_context_t context, void *cookie);

#endif
