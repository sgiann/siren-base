#ifndef _retcodes_h
#define _retcodes_h

typedef enum
{
	OK=0,

	// return codes for STORAGE MODULE (STORM)
	STORM_FILENOTFOUND,
	STORM_FILELIMITREACHED,
	STORM_FILEEXISTS,
	STORM_FILEDOESNOTEXIST,
	STORM_FILEALREADYOPENED,
	STORM_FILEALREADYCLOSED,
	STORM_EOF,
	STORM_FILEFULL,
	STORM_FILEOPENERROR,
	STORM_FILECLOSEERROR,
	STORM_FILENOTOPENED,
	STORM_OPENEDFILELIMITREACHED,
	STORM_INVALIDPAGE,
	STORM_INVALIDFILEHANDLE,
	STORM_CANNOTCREATEFILE,
	STORM_CANNOTDESTROYFILE,
	STORM_PAGENOTINBUFFER,
	STORM_PAGEISPINNED,
	STORM_ALLPAGESPINNED,
	STORM_IOERROR,
	STORM_MEMALLOCERROR,

	// return codes for RECORD MODULE (REM)
	REM_FILEISOPEN,
	REM_FILEISNOTOPEN,
    REM_PAGEIDENTIFIERRETURNERROR,
    REM_PAGEIDENTIFIERSETERROR,
    REM_SLOTRETURNERROR,
    REM_SLOTSETERROR,
	REM_FILEEXISTS,
	REM_NOTVALIDRECORDTOREAD,
	REM_FIRSTPAGEERROR,
	REM_RESERVEPAGEERROR,
	REM_GETPAGEERROR,
	REM_GETDATAERROR,
	REM_FILESCANISOPEN,
	REM_FILESCANISNOTOPEN,
	REM_WRONGTYPE,
	REM_FILESCANNOTFINDRESULTS,

	// return codes for INDEX MODULE (INXM)
	INXM_WRONGRECORDSIZE,
	INXM_FILESCANISOPEN,
	INXM_FILESCANISNOTOPEN,
	INXM_FILESCANENDOFFILE,
	INXM_VALUENOTFOUND,
	INXM_INDEXHANDLECLOSED,
	INXM_EOF,
	INXM_NOMOREVALUES,

	// return codes for SYSTEM MODULE (SYSM)
	SYSM_DATABASEEXISTS,
	SYSM_PATHNOTFOUND,
	SYSM_UNKNOWNERROR,
	SYSM_DIRECTORYNOTEMPTY,
	SYSM_NOACCESSTODIRECTORY,
	SYSM_ERRORDELETINGFILE,
	SYSM_ANOTHERDATABASEISOPEN,
	SYSM_ERROROPENDATABASE,
	SYSM_NOTOPENEDDATABASE,
	SYSM_RELATIONEXISTS,
	SYSM_ATTRIBUTEEXISTS,
	SYSM_RELATIONDOESNOTEXISTS,
	SYSM_ATTRIBUTEDOESNOTEXISTS,
	SYSM_ERRORCLOSEDATABASENAME,
	SYSM_ERRORCOMMAND,
	SYSM_ALREADYLOGGEDIN,
	SYSM_NOTLOGGEDIN,
	SYSM_LOGINERROR,
	SYSM_PRIVNOTFOUND,
	SYSM_PRIVEXISTS,
	SYSM_NOTALLOWEDUSER,
	SYSM_USEREXISTS,

	// return codes for SirenSQL MODULE (SSQLM)

	SSQLM_DDL_INDEXEXISTS,
	SSQLM_DDL_INDEXDOESNOTEXIST,
	SSQLM_DDL_WRONG_ATTR_TYPE,
	SSQLM_DDL_ATTR_IN_WRONG_FORMAT,
	SSQLM_DDL_ERRORCOMMAND,

	SSQLM_DML_COULDNOTDELETERECORD,
	SSQLM_DML_INSERTRECORDERROR,
	SSQLM_DML_UPDATEFAILERROR,
	SSQLM_DML_ATTR_NOT_FOUND_ONTHEGIVEN_TABLES,
	SSQLM_DML_FAIL_TO_INSERT_RECORD_REL_MET,
	SSQLM_DML_FAIL_TO_INSERT_RECORD_ATTR_MET,
	SSQLM_DML_WRONG_SUBCONDITION_FORM,
	SSQLM_DML_COULD_NOT_CONNECT_ATTR_TABLE,
	SSQLM_DML_SELECT_FROM_STATEMENTS_ERROR,
	SSQLM_DML_SELECT_ATTR_FOUND_IN_TWO_TABLES,
	SSQLM_DML_WHERE_ATTR_FOUND_IN_TWO_TABLES,
	SSQLM_DML_BAD_COMP_OP,
	SSQLM_DML_COMPARSIONPROBLEM,
	SSQLM_DML_BadAttributesType,
	SSQLM_DML_TOOMANYTABLES,
	SSQLM_DML_WRONGOP,
	SSQLM_DML_SELECT_WHERE_STATEMENTS_ERROR,
	SSQLM_DML_ERROR_GETTING_ATTRIBUTES_TYPE,

	// return code for USER INTERFACE MODULE (UIM)

	UIM_LOGGEDINFAILED,
	UIM_SCRIPTNOTEXISTS,
	UIM_NOTVALIDFORMAT

} t_rc;


void DisplayReturnCode(t_rc rc);
void DisplayMessage(char *msg);

#endif
