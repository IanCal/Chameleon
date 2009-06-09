// **********************************************************************
//
// Copyright (c) 2003-2008 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.0
// Generated from file `LearnCommands.ice'

#ifndef ___home_ian_git_repositories_Chameleon_subarchitectures_chameleon_src_c___LearnCommands_hpp__
#define ___home_ian_git_repositories_Chameleon_subarchitectures_chameleon_src_c___LearnCommands_hpp__

#include <Ice/LocalObjectF.h>
#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/Proxy.h>
#include <Ice/Object.h>
#include <Ice/Outgoing.h>
#include <Ice/Incoming.h>
#include <Ice/Direct.h>
#include <Ice/FactoryTable.h>
#include <Ice/StreamF.h>
#include <Ice/UndefSysMacros.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 303
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 > 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 0
#       error Ice patch level mismatch!
#   endif
#endif

namespace IceProxy
{

namespace chameleon
{

class StartLearning;

class LearnThis;

class RecogniseThis;

}

}

namespace chameleon
{

class StartLearning;
bool operator==(const StartLearning&, const StartLearning&);
bool operator<(const StartLearning&, const StartLearning&);

class LearnThis;
bool operator==(const LearnThis&, const LearnThis&);
bool operator<(const LearnThis&, const LearnThis&);

class RecogniseThis;
bool operator==(const RecogniseThis&, const RecogniseThis&);
bool operator<(const RecogniseThis&, const RecogniseThis&);

}

namespace IceInternal
{

::Ice::Object* upCast(::chameleon::StartLearning*);
::IceProxy::Ice::Object* upCast(::IceProxy::chameleon::StartLearning*);

::Ice::Object* upCast(::chameleon::LearnThis*);
::IceProxy::Ice::Object* upCast(::IceProxy::chameleon::LearnThis*);

::Ice::Object* upCast(::chameleon::RecogniseThis*);
::IceProxy::Ice::Object* upCast(::IceProxy::chameleon::RecogniseThis*);

}

namespace chameleon
{

typedef ::IceInternal::Handle< ::chameleon::StartLearning> StartLearningPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::chameleon::StartLearning> StartLearningPrx;

void __read(::IceInternal::BasicStream*, StartLearningPrx&);
void __patch__StartLearningPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::chameleon::LearnThis> LearnThisPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::chameleon::LearnThis> LearnThisPrx;

void __read(::IceInternal::BasicStream*, LearnThisPrx&);
void __patch__LearnThisPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::chameleon::RecogniseThis> RecogniseThisPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::chameleon::RecogniseThis> RecogniseThisPrx;

void __read(::IceInternal::BasicStream*, RecogniseThisPrx&);
void __patch__RecogniseThisPtr(void*, ::Ice::ObjectPtr&);

}

namespace chameleon
{

typedef ::std::vector< ::Ice::Float> FloatSeq;

typedef ::std::map< ::std::string, ::Ice::Int> intMap;
void __writeintMap(::IceInternal::BasicStream*, const intMap&);
void __readintMap(::IceInternal::BasicStream*, intMap&);

typedef ::std::map< ::std::string, ::Ice::Float> floatMap;
void __writefloatMap(::IceInternal::BasicStream*, const floatMap&);
void __readfloatMap(::IceInternal::BasicStream*, floatMap&);

typedef ::std::map< ::std::string, ::std::string> stringMap;
void __writestringMap(::IceInternal::BasicStream*, const stringMap&);
void __readstringMap(::IceInternal::BasicStream*, stringMap&);

typedef ::std::map< ::std::string, bool> boolMap;
void __writeboolMap(::IceInternal::BasicStream*, const boolMap&);
void __readboolMap(::IceInternal::BasicStream*, boolMap&);

}

namespace IceProxy
{

namespace chameleon
{

class StartLearning : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<StartLearning> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StartLearning*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<StartLearning*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StartLearning> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StartLearning*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<StartLearning*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StartLearning> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StartLearning*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<StartLearning*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StartLearning> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StartLearning*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<StartLearning*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StartLearning> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StartLearning*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<StartLearning*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StartLearning> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StartLearning*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<StartLearning*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StartLearning> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StartLearning*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<StartLearning*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StartLearning> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StartLearning*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<StartLearning*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StartLearning> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StartLearning*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<StartLearning*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StartLearning> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StartLearning*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<StartLearning*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StartLearning> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StartLearning*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<StartLearning*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StartLearning> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StartLearning*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<StartLearning*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StartLearning> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StartLearning*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<StartLearning*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StartLearning> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StartLearning*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<StartLearning*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StartLearning> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StartLearning*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<StartLearning*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StartLearning> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StartLearning*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<StartLearning*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StartLearning> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StartLearning*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<StartLearning*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StartLearning> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StartLearning*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<StartLearning*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StartLearning> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StartLearning*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<StartLearning*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class LearnThis : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<LearnThis> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LearnThis*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<LearnThis*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LearnThis> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LearnThis*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<LearnThis*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LearnThis> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LearnThis*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<LearnThis*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LearnThis> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LearnThis*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<LearnThis*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LearnThis> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LearnThis*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<LearnThis*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LearnThis> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LearnThis*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<LearnThis*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LearnThis> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LearnThis*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<LearnThis*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LearnThis> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LearnThis*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<LearnThis*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LearnThis> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LearnThis*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<LearnThis*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LearnThis> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LearnThis*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<LearnThis*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LearnThis> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LearnThis*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<LearnThis*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LearnThis> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LearnThis*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<LearnThis*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LearnThis> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LearnThis*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<LearnThis*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LearnThis> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LearnThis*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<LearnThis*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LearnThis> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LearnThis*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<LearnThis*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LearnThis> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LearnThis*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<LearnThis*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LearnThis> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LearnThis*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<LearnThis*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LearnThis> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LearnThis*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<LearnThis*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LearnThis> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LearnThis*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<LearnThis*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class RecogniseThis : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<RecogniseThis> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecogniseThis*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<RecogniseThis*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RecogniseThis> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecogniseThis*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<RecogniseThis*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RecogniseThis> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecogniseThis*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<RecogniseThis*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RecogniseThis> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecogniseThis*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<RecogniseThis*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RecogniseThis> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecogniseThis*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<RecogniseThis*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RecogniseThis> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecogniseThis*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<RecogniseThis*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RecogniseThis> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecogniseThis*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<RecogniseThis*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RecogniseThis> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecogniseThis*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<RecogniseThis*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RecogniseThis> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecogniseThis*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<RecogniseThis*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RecogniseThis> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecogniseThis*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<RecogniseThis*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RecogniseThis> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecogniseThis*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<RecogniseThis*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RecogniseThis> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecogniseThis*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<RecogniseThis*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RecogniseThis> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecogniseThis*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<RecogniseThis*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RecogniseThis> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecogniseThis*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<RecogniseThis*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RecogniseThis> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecogniseThis*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<RecogniseThis*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RecogniseThis> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecogniseThis*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<RecogniseThis*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RecogniseThis> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecogniseThis*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<RecogniseThis*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RecogniseThis> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecogniseThis*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<RecogniseThis*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RecogniseThis> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecogniseThis*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<RecogniseThis*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

}

namespace IceDelegate
{

namespace chameleon
{

class StartLearning : virtual public ::IceDelegate::Ice::Object
{
public:
};

class LearnThis : virtual public ::IceDelegate::Ice::Object
{
public:
};

class RecogniseThis : virtual public ::IceDelegate::Ice::Object
{
public:
};

}

}

namespace IceDelegateM
{

namespace chameleon
{

class StartLearning : virtual public ::IceDelegate::chameleon::StartLearning,
                      virtual public ::IceDelegateM::Ice::Object
{
public:
};

class LearnThis : virtual public ::IceDelegate::chameleon::LearnThis,
                  virtual public ::IceDelegateM::Ice::Object
{
public:
};

class RecogniseThis : virtual public ::IceDelegate::chameleon::RecogniseThis,
                      virtual public ::IceDelegateM::Ice::Object
{
public:
};

}

}

namespace IceDelegateD
{

namespace chameleon
{

class StartLearning : virtual public ::IceDelegate::chameleon::StartLearning,
                      virtual public ::IceDelegateD::Ice::Object
{
public:
};

class LearnThis : virtual public ::IceDelegate::chameleon::LearnThis,
                  virtual public ::IceDelegateD::Ice::Object
{
public:
};

class RecogniseThis : virtual public ::IceDelegate::chameleon::RecogniseThis,
                      virtual public ::IceDelegateD::Ice::Object
{
public:
};

}

}

namespace chameleon
{

class StartLearning : virtual public ::Ice::Object
{
public:

    typedef StartLearningPrx ProxyType;
    typedef StartLearningPtr PointerType;
    
    StartLearning() {}
    StartLearning(const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::chameleon::intMap&, const ::chameleon::floatMap&, const ::chameleon::stringMap&, const ::chameleon::boolMap&);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~StartLearning() {}

    friend class StartLearning__staticInit;

public:

    ::std::string algorithm;

    ::std::string ID;

    ::Ice::Int inputLength;

    ::Ice::Int outputLength;

    ::chameleon::intMap configInt;

    ::chameleon::floatMap configFloat;

    ::chameleon::stringMap configString;

    ::chameleon::boolMap configBool;
};

class StartLearning__staticInit
{
public:

    ::chameleon::StartLearning _init;
};

static ::chameleon::StartLearning__staticInit _StartLearning_init;

class LearnThis : virtual public ::Ice::Object
{
public:

    typedef LearnThisPrx ProxyType;
    typedef LearnThisPtr PointerType;
    
    LearnThis() {}
    LearnThis(const ::std::string&, const ::std::string&, const ::chameleon::FloatSeq&, const ::chameleon::FloatSeq&);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~LearnThis() {}

public:

    ::std::string algorithm;

    ::std::string ID;

    ::chameleon::FloatSeq data;

    ::chameleon::FloatSeq label;
};

class RecogniseThis : virtual public ::Ice::Object
{
public:

    typedef RecogniseThisPrx ProxyType;
    typedef RecogniseThisPtr PointerType;
    
    RecogniseThis() {}
    RecogniseThis(const ::std::string&, const ::std::string&, const ::chameleon::FloatSeq&, const ::chameleon::FloatSeq&);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~RecogniseThis() {}

public:

    ::std::string algorithm;

    ::std::string ID;

    ::chameleon::FloatSeq data;

    ::chameleon::FloatSeq label;
};

}

#endif
