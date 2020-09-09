/*++

Copyright (C) 2020 Autodesk Inc.

All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
    * Neither the name of the Autodesk Inc. nor the
      names of its contributors may be used to endorse or promote products
      derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 'AS IS' AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL AUTODESK INC. BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.


This file has been generated by the Automatic Component Toolkit (ACT) version 1.7.0-develop.

Abstract: This is an autogenerated C++-Header file with basic types in
order to allow an easy use of Machine Control library

Interface version: 1.0.0

*/

#ifndef __LIBMC_TYPES_HEADER_CPP
#define __LIBMC_TYPES_HEADER_CPP


/*************************************************************************************************************************
 Scalar types definition
**************************************************************************************************************************/

#ifdef LIBMC_USELEGACYINTEGERTYPES

typedef unsigned char LibMC_uint8;
typedef unsigned short LibMC_uint16 ;
typedef unsigned int LibMC_uint32;
typedef unsigned long long LibMC_uint64;
typedef char LibMC_int8;
typedef short LibMC_int16;
typedef int LibMC_int32;
typedef long long LibMC_int64;

#else // LIBMC_USELEGACYINTEGERTYPES

#include <stdint.h>

typedef uint8_t LibMC_uint8;
typedef uint16_t LibMC_uint16;
typedef uint32_t LibMC_uint32;
typedef uint64_t LibMC_uint64;
typedef int8_t LibMC_int8;
typedef int16_t LibMC_int16;
typedef int32_t LibMC_int32;
typedef int64_t LibMC_int64 ;

#endif // LIBMC_USELEGACYINTEGERTYPES

typedef float LibMC_single;
typedef double LibMC_double;

/*************************************************************************************************************************
 General type definitions
**************************************************************************************************************************/

typedef LibMC_int32 LibMCResult;
typedef void * LibMCHandle;
typedef void * LibMC_pvoid;

/*************************************************************************************************************************
 Version for LibMC
**************************************************************************************************************************/

#define LIBMC_VERSION_MAJOR 1
#define LIBMC_VERSION_MINOR 0
#define LIBMC_VERSION_MICRO 0
#define LIBMC_VERSION_PRERELEASEINFO ""
#define LIBMC_VERSION_BUILDINFO ""

/*************************************************************************************************************************
 Error constants for LibMC
**************************************************************************************************************************/

#define LIBMC_SUCCESS 0
#define LIBMC_ERROR_NOTIMPLEMENTED 1
#define LIBMC_ERROR_INVALIDPARAM 2
#define LIBMC_ERROR_INVALIDCAST 3
#define LIBMC_ERROR_BUFFERTOOSMALL 4
#define LIBMC_ERROR_GENERICEXCEPTION 5
#define LIBMC_ERROR_COULDNOTLOADLIBRARY 6
#define LIBMC_ERROR_COULDNOTFINDLIBRARYEXPORT 7
#define LIBMC_ERROR_INCOMPATIBLEBINARYVERSION 8
#define LIBMC_ERROR_COULDNOTPARSECONFIGURATION 9
#define LIBMC_ERROR_DUPLICATESTATENAME 10
#define LIBMC_ERROR_STATENOTFOUND 11
#define LIBMC_ERROR_DUPLICATEOUTSTATE 12
#define LIBMC_ERROR_MISSINGMACHINEDEFINITION 13
#define LIBMC_ERROR_MISSINGINSTANCENAME 14
#define LIBMC_ERROR_DUPLICATEMACHINEINSTANCE 15
#define LIBMC_ERROR_MISSINGXMLSCHEMA 16
#define LIBMC_ERROR_INVALIDXMLSCHEMA 17
#define LIBMC_ERROR_MISSINGSTATENAME 18
#define LIBMC_ERROR_MISSINGOUTSTATETARGET 19
#define LIBMC_ERROR_INVALIDOUTSTATETARGET 20
#define LIBMC_ERROR_NOINITSTATE 21
#define LIBMC_ERROR_NOFAILEDSTATE 22
#define LIBMC_ERROR_INITSTATENOTFOUND 23
#define LIBMC_ERROR_FAILEDSTATENOTFOUND 24
#define LIBMC_ERROR_MISSINGINITSTATE 25
#define LIBMC_ERROR_MISSINGFAILEDSTATE 26
#define LIBMC_ERROR_MISSINGPLUGINNAME 27
#define LIBMC_ERROR_EMPTYINITSTATE 28
#define LIBMC_ERROR_EMPTYFAILEDSTATE 29
#define LIBMC_ERROR_EMPTYPLUGINNAME 30
#define LIBMC_ERROR_COULDNOTCREATESTATEFACTORY 31
#define LIBMC_ERROR_INVALIDSTATENAME 32
#define LIBMC_ERROR_COULDNOTCREATESTATE 33
#define LIBMC_ERROR_COULDNOTINITIALIZEFACTORY 34
#define LIBMC_ERROR_COULDNOTFINALIZEFACTORY 35
#define LIBMC_ERROR_COULDNOTLOADPLUGIN 36
#define LIBMC_ERROR_NOCURRENTSTATE 37
#define LIBMC_ERROR_NOPLUGINSTATE 38
#define LIBMC_ERROR_COULDNOTEXECUTEPLUGIN 39
#define LIBMC_ERROR_TOOMANYMACHINEINSTANCES 40
#define LIBMC_ERROR_INVALIDINDEX 41
#define LIBMC_ERROR_NOOUTSTATEGIVEN 42
#define LIBMC_ERROR_INVALIDOUTSTATEGIVEN 43
#define LIBMC_ERROR_INVALIDREPEATDELAY 44
#define LIBMC_ERROR_INVALIDEXECUTIONDELAY 45
#define LIBMC_ERROR_MISSINGREPEATDELAY 46
#define LIBMC_ERROR_THREADISRUNNING 47
#define LIBMC_ERROR_THREADISNOTRUNNING 48
#define LIBMC_ERROR_DUPLICATESIGNAL 49
#define LIBMC_ERROR_INVALIDSIGNALNAME 50
#define LIBMC_ERROR_MISSINGSIGNALNAME 51
#define LIBMC_ERROR_MISSINGSERVERNODE 52
#define LIBMC_ERROR_MISSINGHOSTNAME 53
#define LIBMC_ERROR_MISSINGPORT 54
#define LIBMC_ERROR_UUIDGENERATIONFAILED 55
#define LIBMC_ERROR_INVALIDBUFFERSIZE 56
#define LIBMC_ERROR_COULDNOTCONVERTTOUTF8 57
#define LIBMC_ERROR_NOCOLUMNAVAILABLE 58
#define LIBMC_ERROR_INVALIDTEXTCOLUMN 59
#define LIBMC_ERROR_INVALIDCOLUMNTYPE 60
#define LIBMC_ERROR_TOOMANYREQUESTEDLOGS 61
#define LIBMC_ERROR_MISSINGINSTANCEDESCRIPTION 62
#define LIBMC_ERROR_DUPLICATEPARAMETERGROUPNAME 63
#define LIBMC_ERROR_MISSINGPARAMETERGROUPNAME 64
#define LIBMC_ERROR_EMPTYPARAMETERGROUPNAME 65
#define LIBMC_ERROR_MISSINGPARAMETERGROUPDESCRIPTION 66
#define LIBMC_ERROR_EMPTYPARAMETERGROUPDESCRIPTION 67
#define LIBMC_ERROR_TOOMANYPARAMETERS 68
#define LIBMC_ERROR_TOOMANYPARAMETERGROUPS 69
#define LIBMC_ERROR_DUPLICATEPARAMETERNAME 70
#define LIBMC_ERROR_MISSINGPARAMETERNAME 71
#define LIBMC_ERROR_EMPTYPARAMETERNAME 72
#define LIBMC_ERROR_MISSINGPARAMETERDESCRIPTION 73
#define LIBMC_ERROR_EMPTYPARAMETERDESCRIPTION 74
#define LIBMC_ERROR_PARAMETERNOTFOUND 75
#define LIBMC_ERROR_MISSINGPARAMETERDEFAULTVALUE 76
#define LIBMC_ERROR_MISSINGDATACONFIGNODE 77
#define LIBMC_ERROR_MISSINGDIRECTORY 78
#define LIBMC_ERROR_MISSINGDATABASETYPE 79
#define LIBMC_ERROR_MISSINGSQLITEINFO 80
#define LIBMC_ERROR_UNKNOWNDATABASETYPE 81
#define LIBMC_ERROR_STORAGENOTINITIALISED 82
#define LIBMC_ERROR_COULDNOTCONVERTTOUTF16 83
#define LIBMC_ERROR_COULDNOTCREATEFILE 84
#define LIBMC_ERROR_COULDNOTSEEKSTREAM 85
#define LIBMC_ERROR_COULDNOTGETSTREAMPOSITION 86
#define LIBMC_ERROR_COULDNOTWRITESTREAM 87
#define LIBMC_ERROR_INVALIDDATABASEMIGRATION 88
#define LIBMC_ERROR_INTERNALERROR 89
#define LIBMC_ERROR_COULDNOTSTORECONTENTSTREAM 90
#define LIBMC_ERROR_DATABASENOTINITIALISED 91
#define LIBMC_ERROR_PARAMETERGROUPNOTFOUND 92
#define LIBMC_ERROR_SIGNALNOTFOUND 93
#define LIBMC_ERROR_STATEMACHINENOTFOUND 94
#define LIBMC_ERROR_MISSINGPARAMETERTYPE 95
#define LIBMC_ERROR_INVALIDPARAMETERTYPE 96
#define LIBMC_ERROR_COULDNOTPARSEJSON 97
#define LIBMC_ERROR_INVALIDJSONFORMAT 98
#define LIBMC_ERROR_URLNOTFOUND 99
#define LIBMC_ERROR_GENERICBADREQUEST 100
#define LIBMC_ERROR_SQLITE_ERROR 101
#define LIBMC_ERROR_SQLITE_INTERNAL 102
#define LIBMC_ERROR_SQLITE_PERM 103
#define LIBMC_ERROR_SQLITE_ABORT 104
#define LIBMC_ERROR_SQLITE_BUSY 105
#define LIBMC_ERROR_SQLITE_LOCKED 106
#define LIBMC_ERROR_SQLITE_NOMEM 107
#define LIBMC_ERROR_SQLITE_READONLY 108
#define LIBMC_ERROR_SQLITE_INTERRUPT 109
#define LIBMC_ERROR_SQLITE_IOERR 110
#define LIBMC_ERROR_SQLITE_CORRUPT 111
#define LIBMC_ERROR_SQLITE_NOTFOUND 112
#define LIBMC_ERROR_SQLITE_FULL 113
#define LIBMC_ERROR_SQLITE_CANTOPEN 114
#define LIBMC_ERROR_SQLITE_PROTOCOL 115
#define LIBMC_ERROR_SQLITE_SCHEMA 117
#define LIBMC_ERROR_SQLITE_TOOBIG 118
#define LIBMC_ERROR_SQLITE_CONSTRAINT 119
#define LIBMC_ERROR_SQLITE_MISMATCH 120
#define LIBMC_ERROR_SQLITE_MISUSE 121
#define LIBMC_ERROR_SQLITE_NOLFS 122
#define LIBMC_ERROR_SQLITE_AUTH 123
#define LIBMC_ERROR_SQLITE_RANGE 125
#define LIBMC_ERROR_SQLITE_NOTADB 126
#define LIBMC_ERROR_SQLITE_NOTICE 127
#define LIBMC_ERROR_SQLITE_WARNING 128
#define LIBMC_ERROR_SQLITE_OTHER 130
#define LIBMC_ERROR_SQLITE_TOOMANYRESULTROWS 131
#define LIBMC_ERROR_COULDNOTREADZIPFILE 200
#define LIBMC_ERROR_COULDNOTOPENZIPFILE 201
#define LIBMC_ERROR_COULDNOTGETZIPENTRIES 202
#define LIBMC_ERROR_ZIPENTRYNOTFOUND 203
#define LIBMC_ERROR_COULDNOTSTATZIPENTRY 204
#define LIBMC_ERROR_COULDNOTOPENZIPENTRY 205
#define LIBMC_ERROR_COULDNOTREADZIPSTREAM 206
#define LIBMC_ERROR_COULDNOTREADFULLZIPDATA 207
#define LIBMC_ERROR_COULDNOTFINDDISTRIBUTIONINDEX 208
#define LIBMC_ERROR_COULDNOTPARSEDISTRIBUTIONINDEX 209
#define LIBMC_ERROR_EMPTYDISTRIBUTIONINDEX 210
#define LIBMC_ERROR_MISSINGDISTRIBUTIONINDEX 211
#define LIBMC_ERROR_MISSINGDISTRIBUTIONURL 212
#define LIBMC_ERROR_MISSINGDISTRIBUTIONFILENAME 213
#define LIBMC_ERROR_MISSINGDISTRIBUTIONSIZE 214
#define LIBMC_ERROR_MISSINGDISTRIBUTIONCONTENTTYPE 215
#define LIBMC_ERROR_DRIVERALREADYREGISTERED 216
#define LIBMC_ERROR_DRIVERNOTFOUND 217
#define LIBMC_ERROR_MISSINGDRIVERNAME 218
#define LIBMC_ERROR_MISSINGDRIVERTYPE 219
#define LIBMC_ERROR_MISSINGDRIVERLIBRARY 220
#define LIBMC_ERROR_DRIVERALREADYRESERVED 221
#define LIBMC_ERROR_LIBRARYPATHNOTFOUND 222
#define LIBMC_ERROR_TOOLPATHENTITYNOTLOADED 223
#define LIBMC_ERROR_TOOLPATHENTITYREFERENCEERROR 224
#define LIBMC_ERROR_TOOLPATHENTITYINVALIDFILE 225
#define LIBMC_ERROR_NO3MFLIBRARY 226
#define LIBMC_ERROR_INVALIDPOINTCOUNT 227
#define LIBMC_ERROR_DUPLICATEJOBUUID 228
#define LIBMC_ERROR_INVALIDJOBSTATUS 229
#define LIBMC_ERROR_INVALIDSTREAMCONTEXT 230
#define LIBMC_ERROR_JOBUUIDNOTFOUND 231
#define LIBMC_ERROR_INVALIDJOBNAME 232
#define LIBMC_ERROR_INVALIDJOBTIMESTAMP 233
#define LIBMC_ERROR_INVALIDUSERID 234
#define LIBMC_ERROR_INVALIDSTORAGECALLBACKSIGNATURE 235
#define LIBMC_ERROR_INVALIDSTORAGECALLBACKSTREAM 236
#define LIBMC_ERROR_INVALIDSTORAGEPATH 237
#define LIBMC_ERROR_STORAGESTREAMNOTFOUND 238
#define LIBMC_ERROR_DUPLICATESTORAGESTREAM 239
#define LIBMC_ERROR_INVALIDPARTIALUPLOAD 240
#define LIBMC_ERROR_PARTIALUPLOADNOTFINISHED 241
#define LIBMC_ERROR_APIREQUESTNOTHANDLED 242
#define LIBMC_ERROR_APIREQUESTALREADYHANDLED 243
#define LIBMC_ERROR_INVALIDAPIREQUESTTYPE 244
#define LIBMC_ERROR_INVALIDUPLOADSTREAM 245
#define LIBMC_ERROR_COULDNOTPARSEJSONREQUEST 246
#define LIBMC_ERROR_INVALIDCONTEXTUUID 247
#define LIBMC_ERROR_INVALIDUPLOADNAME 248
#define LIBMC_ERROR_INVALIDMIMETYPE 249
#define LIBMC_ERROR_INVALIDSTREAMSIZE 250
#define LIBMC_ERROR_INVALIDSHA256SUM 251
#define LIBMC_ERROR_INVALIDSTREAMUUID 252
#define LIBMC_ERROR_INVALIDFIELDNAME 253
#define LIBMC_ERROR_UPLOADSIZEMISMATCH 254
#define LIBMC_ERROR_CONTENTTYPENOTACCEPTED 255
#define LIBMC_ERROR_NOCURRENTUPLOAD 256
#define LIBMC_ERROR_UPLOADCHECKSUMMISMATCH 257
#define LIBMC_ERROR_INVALIDSTORAGESTREAMSTATUS 258
#define LIBMC_ERROR_CONTEXTUUIDNOTACCEPTED 259
#define LIBMC_ERROR_INVALIDBUILDUUID 260
#define LIBMC_ERROR_MISSINGTHREADCOUNT 261
#define LIBMC_ERROR_INVALIDTHREADCOUNT 262
#define LIBMC_ERROR_COULDNOTUPDATEBUILDSTATUS 263
#define LIBMC_ERROR_INVALIDITERATOR 264
#define LIBMC_ERROR_INVALIDDATATYPE 265
#define LIBMC_ERROR_COULDNOTSENDSIGNAL 266
#define LIBMC_ERROR_MISSINGSIGNALPARAMETER 267
#define LIBMC_ERROR_NOUSERINTERFACEDEFINITION 268
#define LIBMC_ERROR_MISSINGAPPNAME 269
#define LIBMC_ERROR_MISSINGCOPYRIGHT 270
#define LIBMC_ERROR_MISSINGMAINPAGE 271
#define LIBMC_ERROR_MISSINGMENUITEMID 272
#define LIBMC_ERROR_MISSINGMENUITEMICON 273
#define LIBMC_ERROR_MISSINGMENUITEMCAPTION 274
#define LIBMC_ERROR_MISSINGTARGETPAGE 275
#define LIBMC_ERROR_MISSINGMENUNODE 276
#define LIBMC_ERROR_MISSINGTOOLBARNODE 277
#define LIBMC_ERROR_MISSINGTOOLBARITEMID 278
#define LIBMC_ERROR_MISSINGTOOLBARITEMICON 279
#define LIBMC_ERROR_MISSINGTOOLBARITEMCAPTION 280
#define LIBMC_ERROR_MISSINGSERVICESNODE 281
#define LIBMC_ERROR_INVALIDSESSIONUUID 282
#define LIBMC_ERROR_INVALIDSESSIONKEY 283
#define LIBMC_ERROR_SESSIONNOTAUTHORIZED 284
#define LIBMC_ERROR_INVALIDUSERNAME 285
#define LIBMC_ERROR_INVALIDPASSWORD 286
#define LIBMC_ERROR_INVALIDAUTHORIZATION 287
#define LIBMC_ERROR_USERALREADYAUTHORIZED 288
#define LIBMC_ERROR_INVALIDSESSIONTOKEN 289
#define LIBMC_ERROR_INVALIDCLIENTKEY 290
#define LIBMC_ERROR_INVALIDLOGIN 291
#define LIBMC_ERROR_DUPLICATEPAGE 292
#define LIBMC_ERROR_PAGENOTFOUND 293
#define LIBMC_ERROR_MISSINGPAGENAME 294
#define LIBMC_ERROR_INVALIDPAGENAME 295
#define LIBMC_ERROR_MODULENOTFOUND 296
#define LIBMC_ERROR_DUPLICATEMODULE 297
#define LIBMC_ERROR_INVALIDMODULENAME 298
#define LIBMC_ERROR_INVALIDMODULETYPE 299
#define LIBMC_ERROR_INVALIDHEADLINE 300
#define LIBMC_ERROR_USERNOTFOUND 301
#define LIBMC_ERROR_STREAMISNOTIMAGE 302

/*************************************************************************************************************************
 Error strings for LibMC
**************************************************************************************************************************/

inline const char * LIBMC_GETERRORSTRING (LibMCResult nErrorCode) {
  switch (nErrorCode) {
    case LIBMC_SUCCESS: return "no error";
    case LIBMC_ERROR_NOTIMPLEMENTED: return "functionality not implemented";
    case LIBMC_ERROR_INVALIDPARAM: return "an invalid parameter was passed";
    case LIBMC_ERROR_INVALIDCAST: return "a type cast failed";
    case LIBMC_ERROR_BUFFERTOOSMALL: return "a provided buffer is too small";
    case LIBMC_ERROR_GENERICEXCEPTION: return "a generic exception occurred";
    case LIBMC_ERROR_COULDNOTLOADLIBRARY: return "the library could not be loaded";
    case LIBMC_ERROR_COULDNOTFINDLIBRARYEXPORT: return "a required exported symbol could not be found in the library";
    case LIBMC_ERROR_INCOMPATIBLEBINARYVERSION: return "the version of the binary interface does not match the bindings interface";
    case LIBMC_ERROR_COULDNOTPARSECONFIGURATION: return "could not parse configuration";
    case LIBMC_ERROR_DUPLICATESTATENAME: return "duplicate state name";
    case LIBMC_ERROR_STATENOTFOUND: return "state not found";
    case LIBMC_ERROR_DUPLICATEOUTSTATE: return "duplicate out state";
    case LIBMC_ERROR_MISSINGMACHINEDEFINITION: return "missing machine definition";
    case LIBMC_ERROR_MISSINGINSTANCENAME: return "missing instance name";
    case LIBMC_ERROR_DUPLICATEMACHINEINSTANCE: return "duplicate machine instance";
    case LIBMC_ERROR_MISSINGXMLSCHEMA: return "missing XML schema";
    case LIBMC_ERROR_INVALIDXMLSCHEMA: return "invalid XML schema";
    case LIBMC_ERROR_MISSINGSTATENAME: return "missing state name";
    case LIBMC_ERROR_MISSINGOUTSTATETARGET: return "missing outstate target";
    case LIBMC_ERROR_INVALIDOUTSTATETARGET: return "invalid outstate target";
    case LIBMC_ERROR_NOINITSTATE: return "no init state";
    case LIBMC_ERROR_NOFAILEDSTATE: return "no failed state";
    case LIBMC_ERROR_INITSTATENOTFOUND: return "init state not found";
    case LIBMC_ERROR_FAILEDSTATENOTFOUND: return "failed state not found";
    case LIBMC_ERROR_MISSINGINITSTATE: return "missing init state";
    case LIBMC_ERROR_MISSINGFAILEDSTATE: return "missing failed state";
    case LIBMC_ERROR_MISSINGPLUGINNAME: return "missing plugin name";
    case LIBMC_ERROR_EMPTYINITSTATE: return "empty init state";
    case LIBMC_ERROR_EMPTYFAILEDSTATE: return "empty failed state";
    case LIBMC_ERROR_EMPTYPLUGINNAME: return "empty plugin name";
    case LIBMC_ERROR_COULDNOTCREATESTATEFACTORY: return "could not create state factory";
    case LIBMC_ERROR_INVALIDSTATENAME: return "invalid state name";
    case LIBMC_ERROR_COULDNOTCREATESTATE: return "could not create state";
    case LIBMC_ERROR_COULDNOTINITIALIZEFACTORY: return "could not initialize factory";
    case LIBMC_ERROR_COULDNOTFINALIZEFACTORY: return "could not finalize factory";
    case LIBMC_ERROR_COULDNOTLOADPLUGIN: return "could not load plugin";
    case LIBMC_ERROR_NOCURRENTSTATE: return "no current state";
    case LIBMC_ERROR_NOPLUGINSTATE: return "no plugin state";
    case LIBMC_ERROR_COULDNOTEXECUTEPLUGIN: return "could not execute plugin";
    case LIBMC_ERROR_TOOMANYMACHINEINSTANCES: return "too many machine instances";
    case LIBMC_ERROR_INVALIDINDEX: return "invalid index";
    case LIBMC_ERROR_NOOUTSTATEGIVEN: return "no new outstate has been given";
    case LIBMC_ERROR_INVALIDOUTSTATEGIVEN: return "invalid outstate has been given";
    case LIBMC_ERROR_INVALIDREPEATDELAY: return "invalid repeat delay";
    case LIBMC_ERROR_INVALIDEXECUTIONDELAY: return "invalid execution delay";
    case LIBMC_ERROR_MISSINGREPEATDELAY: return "missing repeat delay";
    case LIBMC_ERROR_THREADISRUNNING: return "thread is running";
    case LIBMC_ERROR_THREADISNOTRUNNING: return "thread is not running";
    case LIBMC_ERROR_DUPLICATESIGNAL: return "duplicate signal";
    case LIBMC_ERROR_INVALIDSIGNALNAME: return "invalid signal name";
    case LIBMC_ERROR_MISSINGSIGNALNAME: return "missing signal name";
    case LIBMC_ERROR_MISSINGSERVERNODE: return "missing server node";
    case LIBMC_ERROR_MISSINGHOSTNAME: return "missing host name";
    case LIBMC_ERROR_MISSINGPORT: return "missing port";
    case LIBMC_ERROR_UUIDGENERATIONFAILED: return "uuid generation failed";
    case LIBMC_ERROR_INVALIDBUFFERSIZE: return "invalid buffer size";
    case LIBMC_ERROR_COULDNOTCONVERTTOUTF8: return "could not convert to utf8";
    case LIBMC_ERROR_NOCOLUMNAVAILABLE: return "no column available";
    case LIBMC_ERROR_INVALIDTEXTCOLUMN: return "invalid text column";
    case LIBMC_ERROR_INVALIDCOLUMNTYPE: return "invalid column type";
    case LIBMC_ERROR_TOOMANYREQUESTEDLOGS: return "too many requested logs";
    case LIBMC_ERROR_MISSINGINSTANCEDESCRIPTION: return "missing instance description";
    case LIBMC_ERROR_DUPLICATEPARAMETERGROUPNAME: return "duplicate parameter group name";
    case LIBMC_ERROR_MISSINGPARAMETERGROUPNAME: return "missing parameter group name";
    case LIBMC_ERROR_EMPTYPARAMETERGROUPNAME: return "empty parameter group name";
    case LIBMC_ERROR_MISSINGPARAMETERGROUPDESCRIPTION: return "missing parameter group description";
    case LIBMC_ERROR_EMPTYPARAMETERGROUPDESCRIPTION: return "empty parameter group description";
    case LIBMC_ERROR_TOOMANYPARAMETERS: return "too many parameters";
    case LIBMC_ERROR_TOOMANYPARAMETERGROUPS: return "too many parameter groups";
    case LIBMC_ERROR_DUPLICATEPARAMETERNAME: return "duplicate parameter name";
    case LIBMC_ERROR_MISSINGPARAMETERNAME: return "missing parameter name";
    case LIBMC_ERROR_EMPTYPARAMETERNAME: return "empty parameter name";
    case LIBMC_ERROR_MISSINGPARAMETERDESCRIPTION: return "missing parameter description";
    case LIBMC_ERROR_EMPTYPARAMETERDESCRIPTION: return "empty parameter description";
    case LIBMC_ERROR_PARAMETERNOTFOUND: return "parameter not found";
    case LIBMC_ERROR_MISSINGPARAMETERDEFAULTVALUE: return "missing parameter default value";
    case LIBMC_ERROR_MISSINGDATACONFIGNODE: return "missing data config node";
    case LIBMC_ERROR_MISSINGDIRECTORY: return "missing directory";
    case LIBMC_ERROR_MISSINGDATABASETYPE: return "missing database type";
    case LIBMC_ERROR_MISSINGSQLITEINFO: return "missing sqlite info";
    case LIBMC_ERROR_UNKNOWNDATABASETYPE: return "unknown database type";
    case LIBMC_ERROR_STORAGENOTINITIALISED: return "storage not initialised";
    case LIBMC_ERROR_COULDNOTCONVERTTOUTF16: return "could not convert to utf 16";
    case LIBMC_ERROR_COULDNOTCREATEFILE: return "could not create file";
    case LIBMC_ERROR_COULDNOTSEEKSTREAM: return "could not seek stream";
    case LIBMC_ERROR_COULDNOTGETSTREAMPOSITION: return "could not get stream position";
    case LIBMC_ERROR_COULDNOTWRITESTREAM: return "could not write stream";
    case LIBMC_ERROR_INVALIDDATABASEMIGRATION: return "invalid database migration";
    case LIBMC_ERROR_INTERNALERROR: return "internal error";
    case LIBMC_ERROR_COULDNOTSTORECONTENTSTREAM: return "could not store content stream";
    case LIBMC_ERROR_DATABASENOTINITIALISED: return "database not initialised";
    case LIBMC_ERROR_PARAMETERGROUPNOTFOUND: return "parameter group not found";
    case LIBMC_ERROR_SIGNALNOTFOUND: return "signal not found";
    case LIBMC_ERROR_STATEMACHINENOTFOUND: return "state machine not found.";
    case LIBMC_ERROR_MISSINGPARAMETERTYPE: return "missing parameter type.";
    case LIBMC_ERROR_INVALIDPARAMETERTYPE: return "invalid parameter type.";
    case LIBMC_ERROR_COULDNOTPARSEJSON: return "could not parse json.";
    case LIBMC_ERROR_INVALIDJSONFORMAT: return "invalid json format.";
    case LIBMC_ERROR_URLNOTFOUND: return "url not found.";
    case LIBMC_ERROR_GENERICBADREQUEST: return "generic bad request.";
    case LIBMC_ERROR_SQLITE_ERROR: return "SQLite: Generic Error";
    case LIBMC_ERROR_SQLITE_INTERNAL: return "SQLite: Internal logic error in SQLite";
    case LIBMC_ERROR_SQLITE_PERM: return "SQLite: Access permission denied";
    case LIBMC_ERROR_SQLITE_ABORT: return "SQLite: Callback routine requested an abort";
    case LIBMC_ERROR_SQLITE_BUSY: return "SQLite: The database file is locked";
    case LIBMC_ERROR_SQLITE_LOCKED: return "SQLite: A table in the database is locked";
    case LIBMC_ERROR_SQLITE_NOMEM: return "SQLite: A malloc failed";
    case LIBMC_ERROR_SQLITE_READONLY: return "SQLite: Attempt to write a readonly database";
    case LIBMC_ERROR_SQLITE_INTERRUPT: return "SQLite: Operation terminated by sqlite3_interrupt";
    case LIBMC_ERROR_SQLITE_IOERR: return "SQLite: Some kind of disk I/O error occurred";
    case LIBMC_ERROR_SQLITE_CORRUPT: return "SQLite: The database disk image is malformed";
    case LIBMC_ERROR_SQLITE_NOTFOUND: return "SQLite: Unknown opcode in sqlite3_file_control";
    case LIBMC_ERROR_SQLITE_FULL: return "SQLite: Insertion failed because database is full";
    case LIBMC_ERROR_SQLITE_CANTOPEN: return "SQLite: Unable to open the database file";
    case LIBMC_ERROR_SQLITE_PROTOCOL: return "SQLite: Database lock protocol error";
    case LIBMC_ERROR_SQLITE_SCHEMA: return "SQLite: The database schema changed";
    case LIBMC_ERROR_SQLITE_TOOBIG: return "SQLite: String or BLOB exceeds size limit";
    case LIBMC_ERROR_SQLITE_CONSTRAINT: return "SQLite: Abort due to constraint violation";
    case LIBMC_ERROR_SQLITE_MISMATCH: return "SQLite: Data type mismatch";
    case LIBMC_ERROR_SQLITE_MISUSE: return "SQLite: Library used incorrectly";
    case LIBMC_ERROR_SQLITE_NOLFS: return "SQLite: Uses OS features not supported on host";
    case LIBMC_ERROR_SQLITE_AUTH: return "SQLite: Authorization denied";
    case LIBMC_ERROR_SQLITE_RANGE: return "SQLite: 2nd parameter to sqlite3_bind out of range";
    case LIBMC_ERROR_SQLITE_NOTADB: return "SQLite: File opened that is not a database file";
    case LIBMC_ERROR_SQLITE_NOTICE: return "SQLite: Notifications from sqlite3_log";
    case LIBMC_ERROR_SQLITE_WARNING: return "SQLite: Warnings from sqlite3_log";
    case LIBMC_ERROR_SQLITE_OTHER: return "SQLite: Other Error";
    case LIBMC_ERROR_SQLITE_TOOMANYRESULTROWS: return "too many result rows";
    case LIBMC_ERROR_COULDNOTREADZIPFILE: return "Could not read ZIP file";
    case LIBMC_ERROR_COULDNOTOPENZIPFILE: return "Could not open ZIP file";
    case LIBMC_ERROR_COULDNOTGETZIPENTRIES: return "Could not get ZIP file entries";
    case LIBMC_ERROR_ZIPENTRYNOTFOUND: return "ZIP Entry not found";
    case LIBMC_ERROR_COULDNOTSTATZIPENTRY: return "Could not stat ZIP entry";
    case LIBMC_ERROR_COULDNOTOPENZIPENTRY: return "Could not open ZIP entry";
    case LIBMC_ERROR_COULDNOTREADZIPSTREAM: return "Could not read ZIP stream";
    case LIBMC_ERROR_COULDNOTREADFULLZIPDATA: return "Could not read full zip data";
    case LIBMC_ERROR_COULDNOTFINDDISTRIBUTIONINDEX: return "Could not find distribution index.";
    case LIBMC_ERROR_COULDNOTPARSEDISTRIBUTIONINDEX: return "Could not parse distribution index.";
    case LIBMC_ERROR_EMPTYDISTRIBUTIONINDEX: return "Empty distribution index.";
    case LIBMC_ERROR_MISSINGDISTRIBUTIONINDEX: return "Missing distribution index.";
    case LIBMC_ERROR_MISSINGDISTRIBUTIONURL: return "Missing distribution url.";
    case LIBMC_ERROR_MISSINGDISTRIBUTIONFILENAME: return "Missing distribution filename.";
    case LIBMC_ERROR_MISSINGDISTRIBUTIONSIZE: return "Missing distribution size.";
    case LIBMC_ERROR_MISSINGDISTRIBUTIONCONTENTTYPE: return "Missing distribution content type.";
    case LIBMC_ERROR_DRIVERALREADYREGISTERED: return "Driver already registered.";
    case LIBMC_ERROR_DRIVERNOTFOUND: return "Driver not found.";
    case LIBMC_ERROR_MISSINGDRIVERNAME: return "Missing driver name.";
    case LIBMC_ERROR_MISSINGDRIVERTYPE: return "Missing driver type.";
    case LIBMC_ERROR_MISSINGDRIVERLIBRARY: return "Missing driver library.";
    case LIBMC_ERROR_DRIVERALREADYRESERVED: return "Driver has already been reserved by an instance.";
    case LIBMC_ERROR_LIBRARYPATHNOTFOUND: return "Library path not found.";
    case LIBMC_ERROR_TOOLPATHENTITYNOTLOADED: return "Toolpath entity not loaded";
    case LIBMC_ERROR_TOOLPATHENTITYREFERENCEERROR: return "Toolpath entity reference error";
    case LIBMC_ERROR_TOOLPATHENTITYINVALIDFILE: return "Toolpath entity is invalid";
    case LIBMC_ERROR_NO3MFLIBRARY: return "No 3MF Library specified";
    case LIBMC_ERROR_INVALIDPOINTCOUNT: return "Invalid point count";
    case LIBMC_ERROR_DUPLICATEJOBUUID: return "Duplicate job uuid";
    case LIBMC_ERROR_INVALIDJOBSTATUS: return "Invalid Job status";
    case LIBMC_ERROR_INVALIDSTREAMCONTEXT: return "Invalid stream context";
    case LIBMC_ERROR_JOBUUIDNOTFOUND: return "Job uuid not found";
    case LIBMC_ERROR_INVALIDJOBNAME: return "Invalid job name";
    case LIBMC_ERROR_INVALIDJOBTIMESTAMP: return "Invalid job timestamp";
    case LIBMC_ERROR_INVALIDUSERID: return "Invalid job name";
    case LIBMC_ERROR_INVALIDSTORAGECALLBACKSIGNATURE: return "Invalid storage callback signature";
    case LIBMC_ERROR_INVALIDSTORAGECALLBACKSTREAM: return "Invalid storage callback stream";
    case LIBMC_ERROR_INVALIDSTORAGEPATH: return "Invalid storage path";
    case LIBMC_ERROR_STORAGESTREAMNOTFOUND: return "Storage Stream not found";
    case LIBMC_ERROR_DUPLICATESTORAGESTREAM: return "Duplicate Storage Stream";
    case LIBMC_ERROR_INVALIDPARTIALUPLOAD: return "Invalid Partial Upload";
    case LIBMC_ERROR_PARTIALUPLOADNOTFINISHED: return "Partial Upload not finished";
    case LIBMC_ERROR_APIREQUESTNOTHANDLED: return "API Request not handled";
    case LIBMC_ERROR_APIREQUESTALREADYHANDLED: return "API Request already handled";
    case LIBMC_ERROR_INVALIDAPIREQUESTTYPE: return "Invalid API Request type";
    case LIBMC_ERROR_INVALIDUPLOADSTREAM: return "Invalid Upload Stream";
    case LIBMC_ERROR_COULDNOTPARSEJSONREQUEST: return "Could not parse JSON request";
    case LIBMC_ERROR_INVALIDCONTEXTUUID: return "Invalid Context UUID";
    case LIBMC_ERROR_INVALIDUPLOADNAME: return "Invalid Upload Name";
    case LIBMC_ERROR_INVALIDMIMETYPE: return "Invalid Mime Type";
    case LIBMC_ERROR_INVALIDSTREAMSIZE: return "Invalid Stream Size";
    case LIBMC_ERROR_INVALIDSHA256SUM: return "Invalid SHA256 Sum";
    case LIBMC_ERROR_INVALIDSTREAMUUID: return "Invalid Stream UUID";
    case LIBMC_ERROR_INVALIDFIELDNAME: return "Invalid field name";
    case LIBMC_ERROR_UPLOADSIZEMISMATCH: return "Upload size mismatch";
    case LIBMC_ERROR_CONTENTTYPENOTACCEPTED: return "Content type not accepted";
    case LIBMC_ERROR_NOCURRENTUPLOAD: return "No current upload";
    case LIBMC_ERROR_UPLOADCHECKSUMMISMATCH: return "Upload checksum mismatch";
    case LIBMC_ERROR_INVALIDSTORAGESTREAMSTATUS: return "Invalid storage stream status";
    case LIBMC_ERROR_CONTEXTUUIDNOTACCEPTED: return "Context uuid not accepted";
    case LIBMC_ERROR_INVALIDBUILDUUID: return "Invalid build uuid";
    case LIBMC_ERROR_MISSINGTHREADCOUNT: return "Missing thread count";
    case LIBMC_ERROR_INVALIDTHREADCOUNT: return "Invalid thread count";
    case LIBMC_ERROR_COULDNOTUPDATEBUILDSTATUS: return "Could not update build status";
    case LIBMC_ERROR_INVALIDITERATOR: return "Invalid iterator";
    case LIBMC_ERROR_INVALIDDATATYPE: return "Invalid data type";
    case LIBMC_ERROR_COULDNOTSENDSIGNAL: return "Could not send signal";
    case LIBMC_ERROR_MISSINGSIGNALPARAMETER: return "Missing signal parameter";
    case LIBMC_ERROR_NOUSERINTERFACEDEFINITION: return "No user interface definition";
    case LIBMC_ERROR_MISSINGAPPNAME: return "Missing app name";
    case LIBMC_ERROR_MISSINGCOPYRIGHT: return "Missing copyright";
    case LIBMC_ERROR_MISSINGMAINPAGE: return "Missing main page";
    case LIBMC_ERROR_MISSINGMENUITEMID: return "Missing menu item id";
    case LIBMC_ERROR_MISSINGMENUITEMICON: return "Missing menu item icon";
    case LIBMC_ERROR_MISSINGMENUITEMCAPTION: return "Missing menu item caption";
    case LIBMC_ERROR_MISSINGTARGETPAGE: return "Missing menu item target page";
    case LIBMC_ERROR_MISSINGMENUNODE: return "Missing menu node";
    case LIBMC_ERROR_MISSINGTOOLBARNODE: return "Missing toolbar node";
    case LIBMC_ERROR_MISSINGTOOLBARITEMID: return "Missing toolbar item id";
    case LIBMC_ERROR_MISSINGTOOLBARITEMICON: return "Missing toolbar item icon";
    case LIBMC_ERROR_MISSINGTOOLBARITEMCAPTION: return "Missing toolbar item caption";
    case LIBMC_ERROR_MISSINGSERVICESNODE: return "Missing services node";
    case LIBMC_ERROR_INVALIDSESSIONUUID: return "Invalid session UUID";
    case LIBMC_ERROR_INVALIDSESSIONKEY: return "Invalid session Key";
    case LIBMC_ERROR_SESSIONNOTAUTHORIZED: return "Session not authorized";
    case LIBMC_ERROR_INVALIDUSERNAME: return "Invalid user name";
    case LIBMC_ERROR_INVALIDPASSWORD: return "Invalid password";
    case LIBMC_ERROR_INVALIDAUTHORIZATION: return "Invalid Authorization";
    case LIBMC_ERROR_USERALREADYAUTHORIZED: return "User already authorized";
    case LIBMC_ERROR_INVALIDSESSIONTOKEN: return "Invalid session token";
    case LIBMC_ERROR_INVALIDCLIENTKEY: return "Invalid client key";
    case LIBMC_ERROR_INVALIDLOGIN: return "Invalid login credentials";
    case LIBMC_ERROR_DUPLICATEPAGE: return "Duplicate page";
    case LIBMC_ERROR_PAGENOTFOUND: return "Page not found";
    case LIBMC_ERROR_MISSINGPAGENAME: return "Missing page name";
    case LIBMC_ERROR_INVALIDPAGENAME: return "Invalid page name";
    case LIBMC_ERROR_MODULENOTFOUND: return "Module not found";
    case LIBMC_ERROR_DUPLICATEMODULE: return "Duplicate module";
    case LIBMC_ERROR_INVALIDMODULENAME: return "Invalid module name";
    case LIBMC_ERROR_INVALIDMODULETYPE: return "Invalid module type";
    case LIBMC_ERROR_INVALIDHEADLINE: return "Invalid headline";
    case LIBMC_ERROR_USERNOTFOUND: return "User not found";
    case LIBMC_ERROR_STREAMISNOTIMAGE: return "Stream is not image";
    default: return "unknown error";
  }
}

/*************************************************************************************************************************
 Declaration of handle classes 
**************************************************************************************************************************/

typedef LibMCHandle LibMC_Base;
typedef LibMCHandle LibMC_APIRequestHandler;
typedef LibMCHandle LibMC_MCContext;

namespace LibMC {

  /*************************************************************************************************************************
   Declaration of enums
  **************************************************************************************************************************/
  
  enum class eLogLevel : LibMC_int32 {
    UserAcknowledge = 1,
    FatalError = 2,
    CriticalError = 3,
    Warning = 4,
    Message = 5,
    Info = 6,
    Debug = 7,
    Unknown = 8
  };
  
  enum class eLogSubSystem : LibMC_int32 {
    System = 1,
    Network = 2
  };
  
} // namespace LibMC;

// define legacy C-names for enums, structs and function types
typedef LibMC::eLogLevel eLibMCLogLevel;
typedef LibMC::eLogSubSystem eLibMCLogSubSystem;

#endif // __LIBMC_TYPES_HEADER_CPP
