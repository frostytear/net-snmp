/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.48 $ of : mfd-top.m2c,v $ 
 *
 * $Id$
 */
/** \page MFD helper for usmDHUserKeyTable
 *
 * \section intro Introduction
 * Introductory text.
 *
 */
/*
 * standard Net-SNMP includes 
 */
#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>

/*
 * include our parent header 
 */
#include "usmDHUserKeyTable.h"

#include <net-snmp/agent/mib_modules.h>

#include "usmDHUserKeyTable_interface.h"

oid             usmDHUserKeyTable_oid[] = { USMDHUSERKEYTABLE_OID };
int             usmDHUserKeyTable_oid_size =
OID_LENGTH(usmDHUserKeyTable_oid);

usmDHUserKeyTable_registration usmDHUserKeyTable_user_context;

void            initialize_table_usmDHUserKeyTable(void);
void            shutdown_table_usmDHUserKeyTable(void);


/**
 * Initializes the usmDHUserKeyTable module
 */
void
init_usmDHUserKeyTable(void)
{
    DEBUGMSGTL(("verbose:usmDHUserKeyTable:init_usmDHUserKeyTable",
                "called\n"));

    /*
     * TODO:300:o: Perform usmDHUserKeyTable one-time module initialization.
     */

    /*
     * here we initialize all the tables we're planning on supporting
     */
    if (should_init("usmDHUserKeyTable")) {
        initialize_table_usmDHUserKeyTable();
    }
}                               /* init_usmDHUserKeyTable */

/**
 * Shut-down the usmDHUserKeyTable module (agent is exiting)
 */
void
shutdown_usmDHUserKeyTable(void)
{
    if (should_init("usmDHUserKeyTable"))
        shutdown_table_usmDHUserKeyTable();

}

/**
 * Initialize the table usmDHUserKeyTable 
 *    (Define its contents and how it's structured)
 */
void
initialize_table_usmDHUserKeyTable(void)
{
    usmDHUserKeyTable_registration *user_context;
    u_long          flags;

    DEBUGMSGTL(("verbose:usmDHUserKeyTable:initialize_table_usmDHUserKeyTable", "called\n"));

    /*
     * TODO:301:o: Perform usmDHUserKeyTable one-time table initialization.
     */

    /*
     * TODO:302:o: |->Initialize usmDHUserKeyTable user context
     * if you'd like to pass in a pointer to some data for this
     * table, allocate or set it up here.
     */
    user_context = &usmDHUserKeyTable_user_context;

    /*
     * No support for any flags yet, but in the future you would
     * set any flags here.
     */
    flags = 0;

    /*
     * call interface initialization code
     */
    _usmDHUserKeyTable_initialize_interface(user_context, flags);
}                               /* initialize_table_usmDHUserKeyTable */

/**
 * Shutdown the table usmDHUserKeyTable 
 */
void
shutdown_table_usmDHUserKeyTable(void)
{
    /*
     * call interface shutdown code
     */
    _usmDHUserKeyTable_shutdown_interface(&usmDHUserKeyTable_user_context);
}

/**
 * extra context initialization (eg default values)
 *
 * @param rowreq_ctx    : row request context
 * @param user_init_ctx : void pointer for user (parameter to rowreq_ctx_allocate)
 *
 * @retval MFD_SUCCESS  : no errors
 * @retval MFD_ERROR    : error (context allocate will fail)
 */
int
usmDHUserKeyTable_rowreq_ctx_init(usmDHUserKeyTable_rowreq_ctx *
                                  rowreq_ctx, void *user_init_ctx)
{
    DEBUGMSGTL(("verbose:usmDHUserKeyTable:usmDHUserKeyTable_rowreq_ctx_init", "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:210:o: |-> Perform extra usmDHUserKeyTable rowreq initialization. (eg DEFVALS)
     */

    return MFD_SUCCESS;
}                               /* usmDHUserKeyTable_rowreq_ctx_init */

/**
 * extra context cleanup
 * @param rowreq_ctx
 */
void
usmDHUserKeyTable_rowreq_ctx_cleanup(usmDHUserKeyTable_rowreq_ctx *
                                     rowreq_ctx)
{
    DEBUGMSGTL(("verbose:usmDHUserKeyTable:usmDHUserKeyTable_rowreq_ctx_cleanup", "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:211:o: |-> Perform extra usmDHUserKeyTable rowreq cleanup.
     */
}                               /* usmDHUserKeyTable_rowreq_ctx_cleanup */

/**
 * pre-request callback
 *
 *
 * @retval MFD_SUCCESS              : success.
 * @retval MFD_ERROR                : other error
 */
int
usmDHUserKeyTable_pre_request(usmDHUserKeyTable_registration *
                              user_context)
{
    DEBUGMSGTL(("verbose:usmDHUserKeyTable:usmDHUserKeyTable_pre_request",
                "called\n"));

    /*
     * TODO:510:o: Perform usmDHUserKeyTable pre-request actions.
     */

    return MFD_SUCCESS;
}                               /* usmDHUserKeyTable_pre_request */

/**
 * post-request callback
 *
 * Note:
 *   New rows have been inserted into the container, and
 *   deleted rows have been removed from the container and
 *   released.
 * @param user_context
 * @param rc : MFD_SUCCESS if all requests succeeded
 *
 * @retval MFD_SUCCESS : success.
 * @retval MFD_ERROR   : other error (ignored)
 */
int
usmDHUserKeyTable_post_request(usmDHUserKeyTable_registration *
                               user_context, int rc)
{
    DEBUGMSGTL(("verbose:usmDHUserKeyTable:usmDHUserKeyTable_post_request",
                "called\n"));

    /*
     * TODO:511:o: Perform usmDHUserKeyTable post-request actions.
     */

    /*
     * check to set if any rows were changed.
     */
    if (usmDHUserKeyTable_dirty_get()) {
        /*
         * check if request was successful. If so, this would be
         * a good place to save data to its persistent store.
         */
        if (MFD_SUCCESS == rc) {
            /*
             * save changed rows, if you haven't already
             */
        }

        usmDHUserKeyTable_dirty_set(0); /* clear table dirty flag */
    }

    return MFD_SUCCESS;
}                               /* usmDHUserKeyTable_post_request */


/** @{ */
