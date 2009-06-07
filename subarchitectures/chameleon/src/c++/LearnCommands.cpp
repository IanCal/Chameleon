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

#include <LearnCommands.hpp>
#include <Ice/LocalException.h>
#include <Ice/ObjectFactory.h>
#include <Ice/BasicStream.h>
#include <IceUtil/Iterator.h>
#include <IceUtil/ScopedArray.h>

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

::Ice::Object* IceInternal::upCast(::chameleon::StartLearning* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::chameleon::StartLearning* p) { return p; }

::Ice::Object* IceInternal::upCast(::chameleon::LearnThis* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::chameleon::LearnThis* p) { return p; }

::Ice::Object* IceInternal::upCast(::chameleon::RecogniseThis* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::chameleon::RecogniseThis* p) { return p; }

void
chameleon::__read(::IceInternal::BasicStream* __is, ::chameleon::StartLearningPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::chameleon::StartLearning;
        v->__copyFrom(proxy);
    }
}

void
chameleon::__read(::IceInternal::BasicStream* __is, ::chameleon::LearnThisPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::chameleon::LearnThis;
        v->__copyFrom(proxy);
    }
}

void
chameleon::__read(::IceInternal::BasicStream* __is, ::chameleon::RecogniseThisPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::chameleon::RecogniseThis;
        v->__copyFrom(proxy);
    }
}

const ::std::string&
IceProxy::chameleon::StartLearning::ice_staticId()
{
    return ::chameleon::StartLearning::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::chameleon::StartLearning::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::chameleon::StartLearning);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::chameleon::StartLearning::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::chameleon::StartLearning);
}

::IceProxy::Ice::Object*
IceProxy::chameleon::StartLearning::__newInstance() const
{
    return new StartLearning;
}

const ::std::string&
IceProxy::chameleon::LearnThis::ice_staticId()
{
    return ::chameleon::LearnThis::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::chameleon::LearnThis::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::chameleon::LearnThis);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::chameleon::LearnThis::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::chameleon::LearnThis);
}

::IceProxy::Ice::Object*
IceProxy::chameleon::LearnThis::__newInstance() const
{
    return new LearnThis;
}

const ::std::string&
IceProxy::chameleon::RecogniseThis::ice_staticId()
{
    return ::chameleon::RecogniseThis::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::chameleon::RecogniseThis::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::chameleon::RecogniseThis);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::chameleon::RecogniseThis::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::chameleon::RecogniseThis);
}

::IceProxy::Ice::Object*
IceProxy::chameleon::RecogniseThis::__newInstance() const
{
    return new RecogniseThis;
}

chameleon::StartLearning::StartLearning(const ::std::string& __ice_algorithm, const ::std::string& __ice_ID, ::Ice::Int __ice_inputLength, ::Ice::Int __ice_outputLength) :
    algorithm(__ice_algorithm),
    ID(__ice_ID),
    inputLength(__ice_inputLength),
    outputLength(__ice_outputLength)
{
}

::Ice::ObjectPtr
chameleon::StartLearning::ice_clone() const
{
    ::chameleon::StartLearningPtr __p = new ::chameleon::StartLearning(*this);
    return __p;
}

static const ::std::string __chameleon__StartLearning_ids[2] =
{
    "::Ice::Object",
    "::chameleon::StartLearning"
};

bool
chameleon::StartLearning::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__chameleon__StartLearning_ids, __chameleon__StartLearning_ids + 2, _s);
}

::std::vector< ::std::string>
chameleon::StartLearning::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__chameleon__StartLearning_ids[0], &__chameleon__StartLearning_ids[2]);
}

const ::std::string&
chameleon::StartLearning::ice_id(const ::Ice::Current&) const
{
    return __chameleon__StartLearning_ids[1];
}

const ::std::string&
chameleon::StartLearning::ice_staticId()
{
    return __chameleon__StartLearning_ids[1];
}

void
chameleon::StartLearning::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(algorithm);
    __os->write(ID);
    __os->write(inputLength);
    __os->write(outputLength);
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__write(__os);
#else
    ::Ice::Object::__write(__os);
#endif
}

void
chameleon::StartLearning::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(algorithm);
    __is->read(ID);
    __is->read(inputLength);
    __is->read(outputLength);
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__read(__is, true);
#else
    ::Ice::Object::__read(__is, true);
#endif
}

void
chameleon::StartLearning::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type chameleon::StartLearning was not generated with stream support";
    throw ex;
}

void
chameleon::StartLearning::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type chameleon::StartLearning was not generated with stream support";
    throw ex;
}

class __F__chameleon__StartLearning : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::chameleon::StartLearning::ice_staticId());
        return new ::chameleon::StartLearning;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__chameleon__StartLearning_Ptr = new __F__chameleon__StartLearning;

const ::Ice::ObjectFactoryPtr&
chameleon::StartLearning::ice_factory()
{
    return __F__chameleon__StartLearning_Ptr;
}

class __F__chameleon__StartLearning__Init
{
public:

    __F__chameleon__StartLearning__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::chameleon::StartLearning::ice_staticId(), ::chameleon::StartLearning::ice_factory());
    }

    ~__F__chameleon__StartLearning__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::chameleon::StartLearning::ice_staticId());
    }
};

static __F__chameleon__StartLearning__Init __F__chameleon__StartLearning__i;

#ifdef __APPLE__
extern "C" { void __F__chameleon__StartLearning__initializer() {} }
#endif

void 
chameleon::__patch__StartLearningPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::chameleon::StartLearningPtr* p = static_cast< ::chameleon::StartLearningPtr*>(__addr);
    assert(p);
    *p = ::chameleon::StartLearningPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::chameleon::StartLearning::ice_staticId(), v->ice_id());
    }
}

bool
chameleon::operator==(const ::chameleon::StartLearning& l, const ::chameleon::StartLearning& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
chameleon::operator<(const ::chameleon::StartLearning& l, const ::chameleon::StartLearning& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

chameleon::LearnThis::LearnThis(const ::std::string& __ice_algorithm, const ::std::string& __ice_ID, const ::chameleon::FloatSeq& __ice_data, const ::chameleon::FloatSeq& __ice_label) :
    algorithm(__ice_algorithm),
    ID(__ice_ID),
    data(__ice_data),
    label(__ice_label)
{
}

::Ice::ObjectPtr
chameleon::LearnThis::ice_clone() const
{
    ::chameleon::LearnThisPtr __p = new ::chameleon::LearnThis(*this);
    return __p;
}

static const ::std::string __chameleon__LearnThis_ids[2] =
{
    "::Ice::Object",
    "::chameleon::LearnThis"
};

bool
chameleon::LearnThis::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__chameleon__LearnThis_ids, __chameleon__LearnThis_ids + 2, _s);
}

::std::vector< ::std::string>
chameleon::LearnThis::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__chameleon__LearnThis_ids[0], &__chameleon__LearnThis_ids[2]);
}

const ::std::string&
chameleon::LearnThis::ice_id(const ::Ice::Current&) const
{
    return __chameleon__LearnThis_ids[1];
}

const ::std::string&
chameleon::LearnThis::ice_staticId()
{
    return __chameleon__LearnThis_ids[1];
}

void
chameleon::LearnThis::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(algorithm);
    __os->write(ID);
    if(data.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&data[0], &data[0] + data.size());
    }
    if(label.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&label[0], &label[0] + label.size());
    }
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__write(__os);
#else
    ::Ice::Object::__write(__os);
#endif
}

void
chameleon::LearnThis::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(algorithm);
    __is->read(ID);
    __is->read(data);
    __is->read(label);
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__read(__is, true);
#else
    ::Ice::Object::__read(__is, true);
#endif
}

void
chameleon::LearnThis::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type chameleon::LearnThis was not generated with stream support";
    throw ex;
}

void
chameleon::LearnThis::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type chameleon::LearnThis was not generated with stream support";
    throw ex;
}

class __F__chameleon__LearnThis : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::chameleon::LearnThis::ice_staticId());
        return new ::chameleon::LearnThis;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__chameleon__LearnThis_Ptr = new __F__chameleon__LearnThis;

const ::Ice::ObjectFactoryPtr&
chameleon::LearnThis::ice_factory()
{
    return __F__chameleon__LearnThis_Ptr;
}

class __F__chameleon__LearnThis__Init
{
public:

    __F__chameleon__LearnThis__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::chameleon::LearnThis::ice_staticId(), ::chameleon::LearnThis::ice_factory());
    }

    ~__F__chameleon__LearnThis__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::chameleon::LearnThis::ice_staticId());
    }
};

static __F__chameleon__LearnThis__Init __F__chameleon__LearnThis__i;

#ifdef __APPLE__
extern "C" { void __F__chameleon__LearnThis__initializer() {} }
#endif

void 
chameleon::__patch__LearnThisPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::chameleon::LearnThisPtr* p = static_cast< ::chameleon::LearnThisPtr*>(__addr);
    assert(p);
    *p = ::chameleon::LearnThisPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::chameleon::LearnThis::ice_staticId(), v->ice_id());
    }
}

bool
chameleon::operator==(const ::chameleon::LearnThis& l, const ::chameleon::LearnThis& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
chameleon::operator<(const ::chameleon::LearnThis& l, const ::chameleon::LearnThis& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

chameleon::RecogniseThis::RecogniseThis(const ::std::string& __ice_algorithm, const ::std::string& __ice_ID, const ::chameleon::FloatSeq& __ice_data, const ::chameleon::FloatSeq& __ice_label) :
    algorithm(__ice_algorithm),
    ID(__ice_ID),
    data(__ice_data),
    label(__ice_label)
{
}

::Ice::ObjectPtr
chameleon::RecogniseThis::ice_clone() const
{
    ::chameleon::RecogniseThisPtr __p = new ::chameleon::RecogniseThis(*this);
    return __p;
}

static const ::std::string __chameleon__RecogniseThis_ids[2] =
{
    "::Ice::Object",
    "::chameleon::RecogniseThis"
};

bool
chameleon::RecogniseThis::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__chameleon__RecogniseThis_ids, __chameleon__RecogniseThis_ids + 2, _s);
}

::std::vector< ::std::string>
chameleon::RecogniseThis::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__chameleon__RecogniseThis_ids[0], &__chameleon__RecogniseThis_ids[2]);
}

const ::std::string&
chameleon::RecogniseThis::ice_id(const ::Ice::Current&) const
{
    return __chameleon__RecogniseThis_ids[1];
}

const ::std::string&
chameleon::RecogniseThis::ice_staticId()
{
    return __chameleon__RecogniseThis_ids[1];
}

void
chameleon::RecogniseThis::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(algorithm);
    __os->write(ID);
    if(data.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&data[0], &data[0] + data.size());
    }
    if(label.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&label[0], &label[0] + label.size());
    }
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__write(__os);
#else
    ::Ice::Object::__write(__os);
#endif
}

void
chameleon::RecogniseThis::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(algorithm);
    __is->read(ID);
    __is->read(data);
    __is->read(label);
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__read(__is, true);
#else
    ::Ice::Object::__read(__is, true);
#endif
}

void
chameleon::RecogniseThis::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type chameleon::RecogniseThis was not generated with stream support";
    throw ex;
}

void
chameleon::RecogniseThis::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type chameleon::RecogniseThis was not generated with stream support";
    throw ex;
}

class __F__chameleon__RecogniseThis : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::chameleon::RecogniseThis::ice_staticId());
        return new ::chameleon::RecogniseThis;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__chameleon__RecogniseThis_Ptr = new __F__chameleon__RecogniseThis;

const ::Ice::ObjectFactoryPtr&
chameleon::RecogniseThis::ice_factory()
{
    return __F__chameleon__RecogniseThis_Ptr;
}

class __F__chameleon__RecogniseThis__Init
{
public:

    __F__chameleon__RecogniseThis__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::chameleon::RecogniseThis::ice_staticId(), ::chameleon::RecogniseThis::ice_factory());
    }

    ~__F__chameleon__RecogniseThis__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::chameleon::RecogniseThis::ice_staticId());
    }
};

static __F__chameleon__RecogniseThis__Init __F__chameleon__RecogniseThis__i;

#ifdef __APPLE__
extern "C" { void __F__chameleon__RecogniseThis__initializer() {} }
#endif

void 
chameleon::__patch__RecogniseThisPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::chameleon::RecogniseThisPtr* p = static_cast< ::chameleon::RecogniseThisPtr*>(__addr);
    assert(p);
    *p = ::chameleon::RecogniseThisPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::chameleon::RecogniseThis::ice_staticId(), v->ice_id());
    }
}

bool
chameleon::operator==(const ::chameleon::RecogniseThis& l, const ::chameleon::RecogniseThis& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
chameleon::operator<(const ::chameleon::RecogniseThis& l, const ::chameleon::RecogniseThis& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}
