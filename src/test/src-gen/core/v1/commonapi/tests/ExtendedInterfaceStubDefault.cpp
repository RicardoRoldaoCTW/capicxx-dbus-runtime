/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.4.v201511201311.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#include <v1/commonapi/tests/ExtendedInterfaceStubDefault.hpp>
#include <assert.h>

namespace v1 {
namespace commonapi {
namespace tests {

ExtendedInterfaceStubDefault::ExtendedInterfaceStubDefault():
        remoteEventHandler_(this),
        interfaceVersion_(ExtendedInterface::getInterfaceVersion()) {
}

const CommonAPI::Version& ExtendedInterfaceStubDefault::getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> _client) {
    (void)_client;
    return interfaceVersion_;
}

ExtendedInterfaceStubRemoteEvent* ExtendedInterfaceStubDefault::initStubAdapter(const std::shared_ptr<ExtendedInterfaceStubAdapter> &_adapter) {
    TestInterfaceStubDefault::initStubAdapter(_adapter);
    CommonAPI::Stub<ExtendedInterfaceStubAdapter, ExtendedInterfaceStubRemoteEvent>::stubAdapter_ = _adapter;
    return &remoteEventHandler_;
}


void ExtendedInterfaceStubDefault::TestIntMethodExtended(const std::shared_ptr<CommonAPI::ClientId> _client, uint32_t _inInt, TestIntMethodExtendedReply_t _reply) {
    (void)_client;
    (void) _inInt;
    _reply();
}




ExtendedInterfaceStubDefault::RemoteEventHandler::RemoteEventHandler(ExtendedInterfaceStubDefault *_defaultStub)
    : TestInterfaceStubDefault::RemoteEventHandler(_defaultStub),
      defaultStub_(_defaultStub) {
}

} // namespace tests
} // namespace commonapi
} // namespace v1