/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.4.v201511201311.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef COMMONAPI_TESTS_Extended_Interface_STUB_DEFAULT_HPP_
#define COMMONAPI_TESTS_Extended_Interface_STUB_DEFAULT_HPP_

#include <v1/commonapi/tests/TestInterfaceStubDefault.hpp>

#include <v1/commonapi/tests/ExtendedInterfaceStub.hpp>
#include <sstream>

namespace v1 {
namespace commonapi {
namespace tests {

/**
 * Provides a default implementation for ExtendedInterfaceStubRemoteEvent and
 * ExtendedInterfaceStub. Method callbacks have an empty implementation,
 * remote set calls on attributes will always change the value of the attribute
 * to the one received.
 *
 * Override this stub if you only want to provide a subset of the functionality
 * that would be defined for this service, and/or if you do not need any non-default
 * behaviour.
 */
class ExtendedInterfaceStubDefault
    : public virtual ExtendedInterfaceStub,
      public virtual TestInterfaceStubDefault {
public:
    ExtendedInterfaceStubDefault();

    ExtendedInterfaceStubRemoteEvent* initStubAdapter(const std::shared_ptr<ExtendedInterfaceStubAdapter> &_adapter);

    const CommonAPI::Version& getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> _client);


    virtual void TestIntMethodExtended(const std::shared_ptr<CommonAPI::ClientId> _client, uint32_t _inInt, TestIntMethodExtendedReply_t _reply);



protected:
    class RemoteEventHandler: public virtual ExtendedInterfaceStubRemoteEvent, public virtual TestInterfaceStubDefault::RemoteEventHandler {
    public:
        RemoteEventHandler(ExtendedInterfaceStubDefault *_defaultStub);


    private:
        ExtendedInterfaceStubDefault *defaultStub_;
    };
private:
    ExtendedInterfaceStubDefault::RemoteEventHandler remoteEventHandler_;


    CommonAPI::Version interfaceVersion_;
};

} // namespace tests
} // namespace commonapi
} // namespace v1


// Compatibility
namespace v1_0 = v1;

#endif // COMMONAPI_TESTS_Extended_Interface_STUB_DEFAULT