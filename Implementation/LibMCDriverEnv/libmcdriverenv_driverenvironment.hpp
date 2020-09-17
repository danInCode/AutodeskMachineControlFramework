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


Abstract: This is the class declaration of CDriverEnvironment

*/


#ifndef __LIBMCDRIVERENV_DRIVERENVIRONMENT
#define __LIBMCDRIVERENV_DRIVERENVIRONMENT

#include "libmcdriverenv_interfaces.hpp"
#include "amc_parametergroup.hpp"

// Parent classes
#include "libmcdriverenv_base.hpp"
#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 4250)
#endif

// Include custom headers here.


namespace LibMCDriverEnv {
namespace Impl {


/*************************************************************************************************************************
 Class declaration of CDriverEnvironment 
**************************************************************************************************************************/

class CDriverEnvironment : public virtual IDriverEnvironment, public virtual CBase {
private:

protected:

	bool m_bIsInitializing;

	AMC::PParameterGroup m_pParameterGroup;

public:
	CDriverEnvironment(AMC::PParameterGroup pParameterGroup);

	IWorkingDirectory * CreateWorkingDirectory() override;

	void RetrieveDriverData(const std::string & sIdentifier, LibMCDriverEnv_uint64 nDataBufferBufferSize, LibMCDriverEnv_uint64* pDataBufferNeededCount, LibMCDriverEnv_uint8 * pDataBufferBuffer) override;

	void RegisterStringParameter(const std::string& sParameterName, const std::string& sDescription, const std::string& sDefaultValue) override;

	void RegisterUUIDParameter(const std::string& sParameterName, const std::string& sDescription, const std::string& sDefaultValue) override;

	void RegisterDoubleParameter(const std::string& sParameterName, const std::string& sDescription, const LibMCDriverEnv_double dDefaultValue) override;

	void RegisterIntegerParameter(const std::string& sParameterName, const std::string& sDescription, const LibMCDriverEnv_int64 nDefaultValue) override;

	void RegisterBoolParameter(const std::string& sParameterName, const std::string& sDescription, const bool bDefaultValue) override;

	void SetStringParameter(const std::string& sParameterName, const std::string& sValue) override;

	void SetUUIDParameter(const std::string& sParameterName, const std::string& sValue) override;

	void SetDoubleParameter(const std::string& sParameterName, const LibMCDriverEnv_double dValue) override;

	void SetIntegerParameter(const std::string& sParameterName, const LibMCDriverEnv_int64 nValue) override;

	void SetBoolParameter(const std::string& sParameterName, const bool bValue) override;

	void setIsInitializing(bool bIsInitializing);

};

} // namespace Impl
} // namespace LibMCDriverEnv

#ifdef _MSC_VER
#pragma warning(pop)
#endif
#endif // __LIBMCDRIVERENV_DRIVERENVIRONMENT
