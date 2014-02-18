/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 2.1.5.qualifier.
* Used org.franca.core 0.8.10.201309262002.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef COMMONAPI_TESTS_MANAGED_Second_Root_DBUS_STUB_ADAPTER_H_
#define COMMONAPI_TESTS_MANAGED_Second_Root_DBUS_STUB_ADAPTER_H_

#include <commonapi/tests/managed/SecondRootStub.h>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/DBus/DBusStubAdapterHelper.h>
#include <CommonAPI/DBus/DBusStubAdapter.h>
#include <CommonAPI/DBus/DBusFactory.h>
#include <CommonAPI/DBus/DBusServicePublisher.h>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace commonapi {
namespace tests {
namespace managed {

typedef CommonAPI::DBus::DBusStubAdapterHelper<SecondRootStub> SecondRootDBusStubAdapterHelper;

class SecondRootDBusStubAdapterInternal: public virtual SecondRootStubAdapter, public SecondRootDBusStubAdapterHelper {
 public:
    SecondRootDBusStubAdapterInternal(
            const std::shared_ptr<CommonAPI::DBus::DBusFactory>& factory,
            const std::string& commonApiAddress,
            const std::string& dbusInterfaceName,
            const std::string& dbusBusName,
            const std::string& dbusObjectPath,
            const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection>& dbusConnection,
            const std::shared_ptr<CommonAPI::StubBase>& stub);

    ~SecondRootDBusStubAdapterInternal();



    bool registerManagedStubLeafInterface(std::shared_ptr<LeafInterfaceStub>, const std::string&);
    bool deregisterManagedStubLeafInterface(const std::string&);
    std::set<std::string>& getLeafInterfaceInstances();

    const SecondRootDBusStubAdapterHelper::StubDispatcherTable& getStubDispatcherTable();

    void deactivateManagedInstances();


static CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        SecondRootStub,
        CommonAPI::Version
        > getSecondRootInterfaceVersionStubDispatcher;







 protected:
    virtual const char* getMethodsDBusIntrospectionXmlData() const;
    
  private:
    std::set<std::string> registeredLeafInterfaceInstances;
    SecondRootDBusStubAdapterHelper::StubDispatcherTable stubDispatcherTable_;
};

class SecondRootDBusStubAdapter: public SecondRootDBusStubAdapterInternal, public std::enable_shared_from_this<SecondRootDBusStubAdapter> {
public:
    SecondRootDBusStubAdapter(
                         const std::shared_ptr<CommonAPI::DBus::DBusFactory>& factory,
                         const std::string& commonApiAddress,
                         const std::string& dbusInterfaceName,
                         const std::string& dbusBusName,
                         const std::string& dbusObjectPath,
                         const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection>& dbusConnection,
                         const std::shared_ptr<CommonAPI::StubBase>& stub) :
            CommonAPI::DBus::DBusStubAdapter(
                            factory,
                            commonApiAddress,
                            dbusInterfaceName,
                            dbusBusName,
                            dbusObjectPath,
                            dbusConnection,
                            true),
            SecondRootDBusStubAdapterInternal(
                            factory,
                            commonApiAddress,
                            dbusInterfaceName,
                            dbusBusName,
                            dbusObjectPath,
                            dbusConnection,
                            stub) { }
};

} // namespace managed
} // namespace tests
} // namespace commonapi

#endif // COMMONAPI_TESTS_MANAGED_Second_Root_DBUS_STUB_ADAPTER_H_