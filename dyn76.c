/* DYN76.C (c) Copyright Harold Grovesteen, 2010-2011                 */

   the Compatibility Parameter Block, which is in essence a R0-R15 register
   save area.  These macros ensure storage keys and accesses are checked for

struct fkeeper
static unsigned char DCCascii_to_ebcdic[] =
static unsigned char DCCebcdic_to_ascii[] =
static void StrConverter (char * s, unsigned char * cct)
    while (s [i])
static void MemConverter (char * s, unsigned char * cct, int len)
    while (i < len)
static void nfile_init ()
#define _open w32_hopen
#define _open hopen
    LOGMSG("DF18: AddFKByID added id=%d at %X with next item at %X to list head=%X at %X\n",
#endif
    while (fk)
        if (fk->id == id)
static void RemoveFKByID (U32 id, struct fkeeper **list, int free_entry)
    while (fk)
        if (fk->id == id)
static int RemoveFKByName (char * filename)
    while (fk)
        if (strcmp (fk->filename, filename) == 0)
#endif
            else
  R0  = Set to 0 prior to call,
        0/ int rename (char * oldname - char * newname);
        3/ int close  (char * filename);
  R2..R4 = Parameters, depending on function number

    if (nfile_init_req)





        if (R1 == 4 || R1 == 5)
        {   /* For read and write guest file descriptor is in pseudo R3 */
        }

        LOGMSG("DF18: CFILE - guest file descriptor %d found at %X\n",
/* The following 4 functions are always ready to attempt

    if (R1 == 9)
    {
        if (i == -1)


    if (R1 == 8)

    /*------------------------*/

    if (R1 == 7)
#endif
        {

    /*------------------------*/

#endif
#endif
        {


    if (R0 == 0)
        if (rfk == NULL)

        /* Set this state's id for the guest and increment




    /*-------------------------------------------------------------*/

    if (R0 == 1)
        if (R1 == 0)
                   (rfk->oldname [rfk->data - 1] != 0))
                ARCH_DEP(wfetchc)
                    (&(rfk->oldname [rfk->data]),
                     0,
                     R2,
                     space_ctl,
                if (rfk->data >= 259)

    /*-------------------------------------------------------------*/

    if (R0 == 2)
        if (R1 <= 3)
            while ((rfk->data == 0)                        /* Starting */
                ARCH_DEP(wfetchc)
                    (&(rfk->filename [rfk->data]),
                     0,
                     R2,
                     space_ctl,
                if (rfk->data >= 259)

    /*---------------------------------------------------------------------*/

    if (R1 == 0)
    {
        LOGMSG("DF18: CFILE - rename(from='%s',to='%s')\n",
#endif

    /*------------------------*/

    if (R1 == 1)

#endif
#endif

    /*------------------------*/

    if (R1 == 2)

        if (R3 & 0x04)
        }
        {
        if (R3 & 0x40)
#endif
        if (res != -1)

            LOGMSG("DF18: CFILE - opened guest file descriptor %d, host handle: %d\n",
#endif
            rfk = NULL;
               fkeeper structure was linked to the fkeeper list to allow restart
               of the operation from the restart id.  Now that we have been
        }
            /* Note: during start of the interruptable open operation the
               fkeeper structure was linked to the fkeeper list to allow restart
               of the operation from the restart id.  On a failure to actually open

    /*-----------------------------*/

    if (R1 == 3)


    /*-----------------------------*/

    if (R1 == 4)
        while (R4 != 0)
            if (rfk->data == 0)

                if (i > 256)


            ARCH_DEP(wstorec)
                 (unsigned char)i,
                 R2,
                 space_ctl,





    /*-----------------------------*/

    if (R1 == 5)
        while (R4 != 0)
               retrieved from storage  is decremented by 1 to conform with this

            ARCH_DEP(wfetchc)
                (rfk->filename,
                 (unsigned char)i,
                 R2,
                 space_ctl,
                 regs);

#endif
#endif
#endif


#endif
#endif