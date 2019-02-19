﻿// WARNING: Please don't edit this file. It was generated by C++/WinRT v1.0.180821.2

#pragma once
#include "winrt/impl/RealtimeStreaming.Common.0.h"
#include "winrt/impl/Windows.Networking.Sockets.0.h"
#include "winrt/impl/RealtimeStreaming.Plugin.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/RealtimeStreaming.Network.0.h"

WINRT_EXPORT namespace winrt::RealtimeStreaming::Network {

struct WINRT_EBO IConnection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IConnection>
{
    IConnection(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IConnectionFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IConnectionFactory>
{
    IConnectionFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IConnector :
    Windows::Foundation::IInspectable,
    impl::consume_t<IConnector>
{
    IConnector(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDataBuffer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataBuffer>
{
    IDataBuffer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDataBufferFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataBufferFactory>
{
    IDataBufferFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDataBundle :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataBundle>
{
    IDataBundle(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDataBundleArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataBundleArgs>
{
    IDataBundleArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDataBundleFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataBundleFactory>
{
    IDataBundleFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IListener :
    Windows::Foundation::IInspectable,
    impl::consume_t<IListener>
{
    IListener(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IListenerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IListenerFactory>
{
    IListenerFactory(std::nullptr_t = nullptr) noexcept {}
};

}
