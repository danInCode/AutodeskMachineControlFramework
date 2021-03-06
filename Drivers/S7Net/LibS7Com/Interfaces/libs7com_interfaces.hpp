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

Abstract: This is an autogenerated C++ header file in order to allow easy
development of S7Net Communication Protocol. The implementer of S7Net Communication Protocol needs to
derive concrete classes from the abstract classes in this header.

Interface version: 3.1.3

*/


#ifndef __LIBS7COM_CPPINTERFACES
#define __LIBS7COM_CPPINTERFACES

#include <string>
#include <memory>

#include "libs7com_types.hpp"


#include "libs7net_dynamic.hpp"

namespace LibS7Com {
namespace Impl {

/**
 Forward declarations of class interfaces
*/
class IBase;
class IPLCCommunication;



/*************************************************************************************************************************
 Parameter Cache definitions
**************************************************************************************************************************/

class ParameterCache {
	public:
		virtual ~ParameterCache() {}
};

template <class T1> class ParameterCache_1 : public ParameterCache {
	private:
		T1 m_param1;
	public:
		ParameterCache_1 (const T1 & param1)
			: m_param1 (param1)
		{
		}

		void retrieveData (T1 & param1)
		{
			param1 = m_param1;
		}
};

template <class T1, class T2> class ParameterCache_2 : public ParameterCache {
	private:
		T1 m_param1;
		T2 m_param2;
	public:
		ParameterCache_2 (const T1 & param1, const T2 & param2)
			: m_param1 (param1), m_param2 (param2)
		{
		}

		void retrieveData (T1 & param1, T2 & param2)
		{
			param1 = m_param1;
			param2 = m_param2;
		}
};

template <class T1, class T2, class T3> class ParameterCache_3 : public ParameterCache {
	private:
		T1 m_param1;
		T2 m_param2;
		T3 m_param3;
	public:
		ParameterCache_3 (const T1 & param1, const T2 & param2, const T3 & param3)
			: m_param1 (param1), m_param2 (param2), m_param3 (param3)
		{
		}

		void retrieveData (T1 & param1, T2 & param2, T3 & param3)
		{
			param1 = m_param1;
			param2 = m_param2;
			param3 = m_param3;
		}
};


/*************************************************************************************************************************
 Class interface for Base 
**************************************************************************************************************************/

class IBase {
private:
	std::unique_ptr<ParameterCache> m_ParameterCache;
public:
	/**
	* IBase::~IBase - virtual destructor of IBase
	*/
	virtual ~IBase() {};

	/**
	* IBase::ReleaseBaseClassInterface - Releases ownership of a base class interface. Deletes the reference, if necessary.
	* @param[in] pIBase - The base class instance to release
	*/
	static void ReleaseBaseClassInterface(IBase* pIBase)
	{
		if (pIBase) {
			pIBase->DecRefCount();
		}
	};

	/**
	* IBase::AcquireBaseClassInterface - Acquires shared ownership of a base class interface.
	* @param[in] pIBase - The base class instance to acquire
	*/
	static void AcquireBaseClassInterface(IBase* pIBase)
	{
		if (pIBase) {
			pIBase->IncRefCount();
		}
	};


	/**
	* IBase::GetLastErrorMessage - Returns the last error registered of this class instance
	* @param[out] sErrorMessage - Message of the last error registered
	* @return Has an error been registered already
	*/
	virtual bool GetLastErrorMessage(std::string & sErrorMessage) = 0;

	/**
	* IBase::ClearErrorMessages - Clears all registered messages of this class instance
	*/
	virtual void ClearErrorMessages() = 0;

	/**
	* IBase::RegisterErrorMessage - Registers an error message with this class instance
	* @param[in] sErrorMessage - Error message to register
	*/
	virtual void RegisterErrorMessage(const std::string & sErrorMessage) = 0;

	/**
	* IBase::IncRefCount - Increases the reference count of a class instance
	*/
	virtual void IncRefCount() = 0;

	/**
	* IBase::DecRefCount - Decreases the reference count of a class instance and free releases it, if the last reference has been removed
	* @return Has the object been released
	*/
	virtual bool DecRefCount() = 0;

	/**
	* IBase::_setCache - set parameter cache of object
	*/
	void _setCache(ParameterCache * pCache)
	{
		m_ParameterCache.reset(pCache);
	}

	/**
	* IBase::_getCache - returns parameter cache of object
	*/
	ParameterCache* _getCache()
	{
		return m_ParameterCache.get();
	}

};


/**
 Definition of a shared pointer class for IBase
*/
template<class T>
class IBaseSharedPtr : public std::shared_ptr<T>
{
public:
	explicit IBaseSharedPtr(T* t = nullptr)
		: std::shared_ptr<T>(t, IBase::ReleaseBaseClassInterface)
	{
		t->IncRefCount();
	}

	// Reset function, as it also needs to properly set the deleter.
	void reset(T* t = nullptr)
	{
		std::shared_ptr<T>::reset(t, IBase::ReleaseBaseClassInterface);
	}

	// Get-function that increases the Base class's reference count
	T* getCoOwningPtr()
	{
		T* t = this->get();
		t->IncRefCount();
		return t;
	}
};


typedef IBaseSharedPtr<IBase> PIBase;


/*************************************************************************************************************************
 Class interface for PLCCommunication 
**************************************************************************************************************************/

class IPLCCommunication : public virtual IBase {
public:
	/**
	* IPLCCommunication::SetProtocolConfiguration - Configures the protocol
	* @param[in] sProtocolConfiguration - Configuration XML as string.
	*/
	virtual void SetProtocolConfiguration(const std::string & sProtocolConfiguration) = 0;

	/**
	* IPLCCommunication::StartCommunication - Starts communication with the S7 PLC Instance
	* @param[in] pPLC - PLC Instance
	*/
	virtual void StartCommunication(LibS7Net::PPLC pPLC) = 0;

	/**
	* IPLCCommunication::StopCommunication - Stops communication with the S7 PLC Instance
	*/
	virtual void StopCommunication() = 0;

	/**
	* IPLCCommunication::GetStatus - Returns the status of the PLC
	*/
	virtual void GetStatus() = 0;

	/**
	* IPLCCommunication::LoadProgram - Loads a GCode Program on the PLC
	* @param[in] sProgram - GCode Program to send.
	* @return Program identifier.
	*/
	virtual std::string LoadProgram(const std::string & sProgram) = 0;

	/**
	* IPLCCommunication::ExecuteProgram - Executes a GCode Program on the PLC
	* @param[in] sIdentifier - Program identifier.
	*/
	virtual void ExecuteProgram(const std::string & sIdentifier) = 0;

	/**
	* IPLCCommunication::ClearPrograms - Clears loaded programs
	*/
	virtual void ClearPrograms() = 0;

	/**
	* IPLCCommunication::GetVariableCount - Returns number of reported variables.
	* @return Number of variables.
	*/
	virtual LibS7Com_uint32 GetVariableCount() = 0;

	/**
	* IPLCCommunication::GetVariableName - Returns name of variable.
	* @param[in] nIndex - Index of variable (0-based).
	* @return Name of variable.
	*/
	virtual std::string GetVariableName(const LibS7Com_uint32 nIndex) = 0;

	/**
	* IPLCCommunication::GetVariableType - Returns type of variable.
	* @param[in] nIndex - Index of variable (0-based).
	* @return Type of variable.
	*/
	virtual LibS7Com::eVariableType GetVariableType(const LibS7Com_uint32 nIndex) = 0;

	/**
	* IPLCCommunication::GetVariableString - Returns value of string variable.
	* @param[in] nIndex - Index of variable (0-based).
	* @return Value of variable.
	*/
	virtual std::string GetVariableString(const LibS7Com_uint32 nIndex) = 0;

	/**
	* IPLCCommunication::GetVariableBool - Returns value of bool variable.
	* @param[in] nIndex - Index of variable (0-based).
	* @return Value of variable.
	*/
	virtual bool GetVariableBool(const LibS7Com_uint32 nIndex) = 0;

	/**
	* IPLCCommunication::GetVariableInteger - Returns value of bool variable.
	* @param[in] nIndex - Index of variable (0-based).
	* @return Value of variable.
	*/
	virtual LibS7Com_int64 GetVariableInteger(const LibS7Com_uint32 nIndex) = 0;

	/**
	* IPLCCommunication::GetVariableDouble - Returns value of double variable.
	* @param[in] nIndex - Index of variable (0-based).
	* @return Value of variable.
	*/
	virtual LibS7Com_double GetVariableDouble(const LibS7Com_uint32 nIndex) = 0;

};

typedef IBaseSharedPtr<IPLCCommunication> PIPLCCommunication;


/*************************************************************************************************************************
 Global functions declarations
**************************************************************************************************************************/
class CWrapper {
public:
	// Injected Components
	static LibS7Net::PWrapper sPLibS7NetWrapper;

	/**
	* Ilibs7com::GetVersion - retrieves the binary version of this library.
	* @param[out] nMajor - returns the major version of this library
	* @param[out] nMinor - returns the minor version of this library
	* @param[out] nMicro - returns the micro version of this library
	*/
	static void GetVersion(LibS7Com_uint32 & nMajor, LibS7Com_uint32 & nMinor, LibS7Com_uint32 & nMicro);

	/**
	* Ilibs7com::GetLastError - Returns the last error recorded on this object
	* @param[in] pInstance - Instance Handle
	* @param[out] sErrorMessage - Message of the last error
	* @return Is there a last error to query
	*/
	static bool GetLastError(IBase* pInstance, std::string & sErrorMessage);

	/**
	* Ilibs7com::AcquireInstance - Acquire shared ownership of an Instance
	* @param[in] pInstance - Instance Handle
	*/
	static void AcquireInstance(IBase* pInstance);

	/**
	* Ilibs7com::ReleaseInstance - Releases shared ownership of an Instance
	* @param[in] pInstance - Instance Handle
	*/
	static void ReleaseInstance(IBase* pInstance);

	/**
	* Ilibs7com::CreatePLCCommunication - Returns a PLC Communication instance
	* @return PLC Communication Instance
	*/
	static IPLCCommunication * CreatePLCCommunication();

};

LibS7ComResult LibS7Com_GetProcAddress (const char * pProcName, void ** ppProcAddress);

} // namespace Impl
} // namespace LibS7Com

#endif // __LIBS7COM_CPPINTERFACES
