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


Abstract: This is a stub class definition of CWorkingDirectory

*/

#include "libmcdriverenv_workingdirectory.hpp"
#include "libmcdriverenv_interfaceexception.hpp"

// Include custom headers here.


using namespace LibMCDriverEnv::Impl;

/*************************************************************************************************************************
 Class definition of CWorkingDirectory 
**************************************************************************************************************************/

std::string CWorkingDirectory::GetAbsoluteFilePath()
{
	throw ELibMCDriverEnvInterfaceException(LIBMCDRIVERENV_ERROR_NOTIMPLEMENTED);
}

IWorkingFile * CWorkingDirectory::StoreCustomData(const std::string & sFileName, const LibMCDriverEnv_uint64 nDataBufferBufferSize, const LibMCDriverEnv_uint8 * pDataBufferBuffer)
{
	throw ELibMCDriverEnvInterfaceException(LIBMCDRIVERENV_ERROR_NOTIMPLEMENTED);
}

IWorkingFile * CWorkingDirectory::StoreDriverData(const std::string & sFileName, const std::string & sIdentifier)
{
	throw ELibMCDriverEnvInterfaceException(LIBMCDRIVERENV_ERROR_NOTIMPLEMENTED);
}

