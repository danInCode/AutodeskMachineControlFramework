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

Abstract: This is an autogenerated C++-Header file in order to allow an easy
 use of MC Driver Environment Interface

Interface version: 1.0.0

*/

#ifndef __LIBMCDRIVERENV_HEADER_CPP
#define __LIBMCDRIVERENV_HEADER_CPP

#ifdef __LIBMCDRIVERENV_EXPORTS
#ifdef _WIN32
#define LIBMCDRIVERENV_DECLSPEC __declspec (dllexport)
#else // _WIN32
#define LIBMCDRIVERENV_DECLSPEC __attribute__((visibility("default")))
#endif // _WIN32
#else // __LIBMCDRIVERENV_EXPORTS
#define LIBMCDRIVERENV_DECLSPEC
#endif // __LIBMCDRIVERENV_EXPORTS

#include "libmcdriverenv_types.hpp"


#ifdef __cplusplus
extern "C" {
#endif

/*************************************************************************************************************************
 Class definition for Base
**************************************************************************************************************************/

/*************************************************************************************************************************
 Class definition for WorkingFileExecution
**************************************************************************************************************************/

/**
* Returns the execution status
*
* @param[in] pWorkingFileExecution - WorkingFileExecution instance.
* @return error code or 0 (success)
*/
LIBMCDRIVERENV_DECLSPEC LibMCDriverEnvResult libmcdriverenv_workingfileexecution_getstatus(LibMCDriverEnv_WorkingFileExecution pWorkingFileExecution);

/**
* Returns the output of the executable as string buffer
*
* @param[in] pWorkingFileExecution - WorkingFileExecution instance.
* @param[in] nStringBufferBufferSize - size of the buffer (including trailing 0)
* @param[out] pStringBufferNeededChars - will be filled with the count of the written bytes, or needed buffer size.
* @param[out] pStringBufferBuffer -  buffer of stdout buffer, may be NULL
* @return error code or 0 (success)
*/
LIBMCDRIVERENV_DECLSPEC LibMCDriverEnvResult libmcdriverenv_workingfileexecution_returnstdout(LibMCDriverEnv_WorkingFileExecution pWorkingFileExecution, const LibMCDriverEnv_uint32 nStringBufferBufferSize, LibMCDriverEnv_uint32* pStringBufferNeededChars, char * pStringBufferBuffer);

/*************************************************************************************************************************
 Class definition for WorkingFile
**************************************************************************************************************************/

/**
* Retrieves absolute file name of the working file
*
* @param[in] pWorkingFile - WorkingFile instance.
* @param[in] nFileNameBufferSize - size of the buffer (including trailing 0)
* @param[out] pFileNameNeededChars - will be filled with the count of the written bytes, or needed buffer size.
* @param[out] pFileNameBuffer -  buffer of global path of the file, may be NULL
* @return error code or 0 (success)
*/
LIBMCDRIVERENV_DECLSPEC LibMCDriverEnvResult libmcdriverenv_workingfile_getabsolutefilename(LibMCDriverEnv_WorkingFile pWorkingFile, const LibMCDriverEnv_uint32 nFileNameBufferSize, LibMCDriverEnv_uint32* pFileNameNeededChars, char * pFileNameBuffer);

/**
* Returns the size of temporary file.
*
* @param[in] pWorkingFile - WorkingFile instance.
* @param[out] pFileSize - file size
* @return error code or 0 (success)
*/
LIBMCDRIVERENV_DECLSPEC LibMCDriverEnvResult libmcdriverenv_workingfile_getsize(LibMCDriverEnv_WorkingFile pWorkingFile, LibMCDriverEnv_uint64 * pFileSize);

/**
* Calculates the SHA256 checksum of the file.
*
* @param[in] pWorkingFile - WorkingFile instance.
* @param[in] nSHA2BufferSize - size of the buffer (including trailing 0)
* @param[out] pSHA2NeededChars - will be filled with the count of the written bytes, or needed buffer size.
* @param[out] pSHA2Buffer -  buffer of sha256 checksum, may be NULL
* @return error code or 0 (success)
*/
LIBMCDRIVERENV_DECLSPEC LibMCDriverEnvResult libmcdriverenv_workingfile_calculatesha2(LibMCDriverEnv_WorkingFile pWorkingFile, const LibMCDriverEnv_uint32 nSHA2BufferSize, LibMCDriverEnv_uint32* pSHA2NeededChars, char * pSHA2Buffer);

/**
* Deletes the temporary file.
*
* @param[in] pWorkingFile - WorkingFile instance.
* @return error code or 0 (success)
*/
LIBMCDRIVERENV_DECLSPEC LibMCDriverEnvResult libmcdriverenv_workingfile_deletefile(LibMCDriverEnv_WorkingFile pWorkingFile);

/**
* Executes the temporary file, if it is an executable.
*
* @param[in] pWorkingFile - WorkingFile instance.
* @param[out] pExecution - execution object
* @return error code or 0 (success)
*/
LIBMCDRIVERENV_DECLSPEC LibMCDriverEnvResult libmcdriverenv_workingfile_executefile(LibMCDriverEnv_WorkingFile pWorkingFile, LibMCDriverEnv_WorkingFileExecution * pExecution);

/*************************************************************************************************************************
 Class definition for WorkingDirectory
**************************************************************************************************************************/

/**
* Retrieves absolute file path.
*
* @param[in] pWorkingDirectory - WorkingDirectory instance.
* @param[in] nFilePathBufferSize - size of the buffer (including trailing 0)
* @param[out] pFilePathNeededChars - will be filled with the count of the written bytes, or needed buffer size.
* @param[out] pFilePathBuffer -  buffer of global path of the directory, including path delimiter., may be NULL
* @return error code or 0 (success)
*/
LIBMCDRIVERENV_DECLSPEC LibMCDriverEnvResult libmcdriverenv_workingdirectory_getabsolutefilepath(LibMCDriverEnv_WorkingDirectory pWorkingDirectory, const LibMCDriverEnv_uint32 nFilePathBufferSize, LibMCDriverEnv_uint32* pFilePathNeededChars, char * pFilePathBuffer);

/**
* Stores a data buffer in a temporary file.
*
* @param[in] pWorkingDirectory - WorkingDirectory instance.
* @param[in] pFileName - filename to store to. Can not include any path delimiters or ..
* @param[in] nDataBufferBufferSize - Number of elements in buffer
* @param[in] pDataBufferBuffer - uint8 buffer of file data to store to.
* @param[out] pWorkingFile - working file instance.
* @return error code or 0 (success)
*/
LIBMCDRIVERENV_DECLSPEC LibMCDriverEnvResult libmcdriverenv_workingdirectory_storecustomdata(LibMCDriverEnv_WorkingDirectory pWorkingDirectory, const char * pFileName, LibMCDriverEnv_uint64 nDataBufferBufferSize, const LibMCDriverEnv_uint8 * pDataBufferBuffer, LibMCDriverEnv_WorkingFile * pWorkingFile);

/**
* Stores attached driver data in a temporary file.
*
* @param[in] pWorkingDirectory - WorkingDirectory instance.
* @param[in] pFileName - filename to store to. Can not include any path delimiters or ..
* @param[in] pIdentifier - identifier of the binary data in the driver package.
* @param[out] pWorkingFile - working file instance.
* @return error code or 0 (success)
*/
LIBMCDRIVERENV_DECLSPEC LibMCDriverEnvResult libmcdriverenv_workingdirectory_storedriverdata(LibMCDriverEnv_WorkingDirectory pWorkingDirectory, const char * pFileName, const char * pIdentifier, LibMCDriverEnv_WorkingFile * pWorkingFile);

/*************************************************************************************************************************
 Class definition for DriverEnvironment
**************************************************************************************************************************/

/**
* creates a temporary working directory.
*
* @param[in] pDriverEnvironment - DriverEnvironment instance.
* @param[out] pWorkingDirectory - creates a working directory
* @return error code or 0 (success)
*/
LIBMCDRIVERENV_DECLSPEC LibMCDriverEnvResult libmcdriverenv_driverenvironment_createworkingdirectory(LibMCDriverEnv_DriverEnvironment pDriverEnvironment, LibMCDriverEnv_WorkingDirectory * pWorkingDirectory);

/**
* retrieves attached driver data into a memory buffer.
*
* @param[in] pDriverEnvironment - DriverEnvironment instance.
* @param[in] pIdentifier - identifier of the binary data in the driver package.
* @param[in] nDataBufferBufferSize - Number of elements in buffer
* @param[out] pDataBufferNeededCount - will be filled with the count of the written elements, or needed buffer size.
* @param[out] pDataBufferBuffer - uint8 buffer of buffer data.
* @return error code or 0 (success)
*/
LIBMCDRIVERENV_DECLSPEC LibMCDriverEnvResult libmcdriverenv_driverenvironment_retrievedriverdata(LibMCDriverEnv_DriverEnvironment pDriverEnvironment, const char * pIdentifier, const LibMCDriverEnv_uint64 nDataBufferBufferSize, LibMCDriverEnv_uint64* pDataBufferNeededCount, LibMCDriverEnv_uint8 * pDataBufferBuffer);

/*************************************************************************************************************************
 Global functions
**************************************************************************************************************************/

/**
* retrieves the binary version of this library.
*
* @param[out] pMajor - returns the major version of this library
* @param[out] pMinor - returns the minor version of this library
* @param[out] pMicro - returns the micro version of this library
* @return error code or 0 (success)
*/
LIBMCDRIVERENV_DECLSPEC LibMCDriverEnvResult libmcdriverenv_getversion(LibMCDriverEnv_uint32 * pMajor, LibMCDriverEnv_uint32 * pMinor, LibMCDriverEnv_uint32 * pMicro);

/**
* Returns the last error recorded on this object
*
* @param[in] pInstance - Instance Handle
* @param[in] nErrorMessageBufferSize - size of the buffer (including trailing 0)
* @param[out] pErrorMessageNeededChars - will be filled with the count of the written bytes, or needed buffer size.
* @param[out] pErrorMessageBuffer -  buffer of Message of the last error, may be NULL
* @param[out] pHasError - Is there a last error to query
* @return error code or 0 (success)
*/
LIBMCDRIVERENV_DECLSPEC LibMCDriverEnvResult libmcdriverenv_getlasterror(LibMCDriverEnv_Base pInstance, const LibMCDriverEnv_uint32 nErrorMessageBufferSize, LibMCDriverEnv_uint32* pErrorMessageNeededChars, char * pErrorMessageBuffer, bool * pHasError);

/**
* Releases shared ownership of an Instance
*
* @param[in] pInstance - Instance Handle
* @return error code or 0 (success)
*/
LIBMCDRIVERENV_DECLSPEC LibMCDriverEnvResult libmcdriverenv_releaseinstance(LibMCDriverEnv_Base pInstance);

/**
* Acquires shared ownership of an Instance
*
* @param[in] pInstance - Instance Handle
* @return error code or 0 (success)
*/
LIBMCDRIVERENV_DECLSPEC LibMCDriverEnvResult libmcdriverenv_acquireinstance(LibMCDriverEnv_Base pInstance);

/**
* Returns the address of the SymbolLookupMethod
*
* @param[out] pSymbolLookupMethod - Address of the SymbolAddressMethod
* @return error code or 0 (success)
*/
LIBMCDRIVERENV_DECLSPEC LibMCDriverEnvResult libmcdriverenv_getsymbollookupmethod(LibMCDriverEnv_pvoid * pSymbolLookupMethod);

#ifdef __cplusplus
}
#endif

#endif // __LIBMCDRIVERENV_HEADER_CPP

