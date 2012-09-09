// Copyright (c) 2012 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#include "include/cef_app.h"
#include "include/capi/cef_app_capi.h"
#include "include/cef_origin_whitelist.h"
#include "include/capi/cef_origin_whitelist_capi.h"
#include "include/cef_scheme.h"
#include "include/capi/cef_scheme_capi.h"
#include "include/cef_storage.h"
#include "include/capi/cef_storage_capi.h"
#include "include/cef_task.h"
#include "include/capi/cef_task_capi.h"
#include "include/cef_url.h"
#include "include/capi/cef_url_capi.h"
#include "include/cef_v8.h"
#include "include/capi/cef_v8_capi.h"
#include "include/cef_web_plugin.h"
#include "include/capi/cef_web_plugin_capi.h"
#include "include/cef_version.h"
#include "libcef_dll/cpptoc/app_cpptoc.h"
#include "libcef_dll/cpptoc/content_filter_cpptoc.h"
#include "libcef_dll/cpptoc/cookie_visitor_cpptoc.h"
#include "libcef_dll/cpptoc/domevent_listener_cpptoc.h"
#include "libcef_dll/cpptoc/domvisitor_cpptoc.h"
#include "libcef_dll/cpptoc/display_handler_cpptoc.h"
#include "libcef_dll/cpptoc/download_handler_cpptoc.h"
#include "libcef_dll/cpptoc/drag_handler_cpptoc.h"
#include "libcef_dll/cpptoc/find_handler_cpptoc.h"
#include "libcef_dll/cpptoc/focus_handler_cpptoc.h"
#include "libcef_dll/cpptoc/jsdialog_handler_cpptoc.h"
#include "libcef_dll/cpptoc/keyboard_handler_cpptoc.h"
#include "libcef_dll/cpptoc/life_span_handler_cpptoc.h"
#include "libcef_dll/cpptoc/load_handler_cpptoc.h"
#include "libcef_dll/cpptoc/menu_handler_cpptoc.h"
#include "libcef_dll/cpptoc/permission_handler_cpptoc.h"
#include "libcef_dll/cpptoc/print_handler_cpptoc.h"
#include "libcef_dll/cpptoc/proxy_handler_cpptoc.h"
#include "libcef_dll/cpptoc/read_handler_cpptoc.h"
#include "libcef_dll/cpptoc/render_handler_cpptoc.h"
#include "libcef_dll/cpptoc/request_handler_cpptoc.h"
#include "libcef_dll/cpptoc/resource_bundle_handler_cpptoc.h"
#include "libcef_dll/cpptoc/scheme_handler_cpptoc.h"
#include "libcef_dll/cpptoc/scheme_handler_factory_cpptoc.h"
#include "libcef_dll/cpptoc/storage_visitor_cpptoc.h"
#include "libcef_dll/cpptoc/task_cpptoc.h"
#include "libcef_dll/cpptoc/v8accessor_cpptoc.h"
#include "libcef_dll/cpptoc/v8context_handler_cpptoc.h"
#include "libcef_dll/cpptoc/v8handler_cpptoc.h"
#include "libcef_dll/cpptoc/web_urlrequest_client_cpptoc.h"
#include "libcef_dll/cpptoc/write_handler_cpptoc.h"
#include "libcef_dll/ctocpp/browser_ctocpp.h"
#include "libcef_dll/ctocpp/cookie_manager_ctocpp.h"
#include "libcef_dll/ctocpp/domdocument_ctocpp.h"
#include "libcef_dll/ctocpp/domevent_ctocpp.h"
#include "libcef_dll/ctocpp/domnode_ctocpp.h"
#include "libcef_dll/ctocpp/drag_data_ctocpp.h"
#include "libcef_dll/ctocpp/frame_ctocpp.h"
#include "libcef_dll/ctocpp/post_data_ctocpp.h"
#include "libcef_dll/ctocpp/post_data_element_ctocpp.h"
#include "libcef_dll/ctocpp/request_ctocpp.h"
#include "libcef_dll/ctocpp/response_ctocpp.h"
#include "libcef_dll/ctocpp/scheme_handler_callback_ctocpp.h"
#include "libcef_dll/ctocpp/stream_reader_ctocpp.h"
#include "libcef_dll/ctocpp/stream_writer_ctocpp.h"
#include "libcef_dll/ctocpp/v8context_ctocpp.h"
#include "libcef_dll/ctocpp/v8exception_ctocpp.h"
#include "libcef_dll/ctocpp/v8value_ctocpp.h"
#include "libcef_dll/ctocpp/web_plugin_info_ctocpp.h"
#include "libcef_dll/ctocpp/web_urlrequest_ctocpp.h"
#include "libcef_dll/ctocpp/xml_reader_ctocpp.h"
#include "libcef_dll/ctocpp/zip_reader_ctocpp.h"

// Define used to facilitate parsing.
#define CEF_GLOBAL


// GLOBAL METHODS - Body may be edited by hand.

CEF_GLOBAL bool CefInitialize(const CefSettings& settings,
    CefRefPtr<CefApp> application) {
  int build_revision = cef_build_revision();
  if (build_revision != CEF_REVISION) {
    // The libcef build revision does not match the CEF API revision.
    DCHECK(false);
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Unverified params: application

  // Execute
  int _retval = cef_initialize(
      &settings,
      CefAppCppToC::Wrap(application));

  // Return type: bool
  return _retval?true:false;
}

CEF_GLOBAL void CefShutdown() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_shutdown();

#ifndef NDEBUG
  // Check that all wrapper objects have been destroyed
  ASSERTEQ(CefBrowserCToCpp::DebugObjCt, 0);
  ASSERTEQ(CefContentFilterCppToC::DebugObjCt, 0);
  ASSERTEQ(CefCookieManagerCToCpp::DebugObjCt, 0);
  ASSERTEQ(CefCookieVisitorCppToC::DebugObjCt, 0);
  ASSERTEQ(CefDOMDocumentCToCpp::DebugObjCt, 0);
  ASSERTEQ(CefDOMEventCToCpp::DebugObjCt, 0);
  ASSERTEQ(CefDOMEventListenerCppToC::DebugObjCt, 0);
  ASSERTEQ(CefDOMNodeCToCpp::DebugObjCt, 0);
  ASSERTEQ(CefDOMVisitorCppToC::DebugObjCt, 0);
  ASSERTEQ(CefDisplayHandlerCppToC::DebugObjCt, 0);
  ASSERTEQ(CefDownloadHandlerCppToC::DebugObjCt, 0);
  ASSERTEQ(CefDragDataCToCpp::DebugObjCt, 0);
  ASSERTEQ(CefDragHandlerCppToC::DebugObjCt, 0);
  ASSERTEQ(CefFindHandlerCppToC::DebugObjCt, 0);
  ASSERTEQ(CefFocusHandlerCppToC::DebugObjCt, 0);
  ASSERTEQ(CefFrameCToCpp::DebugObjCt, 0);
  ASSERTEQ(CefJSDialogHandlerCppToC::DebugObjCt, 0);
  ASSERTEQ(CefKeyboardHandlerCppToC::DebugObjCt, 0);
  ASSERTEQ(CefLifeSpanHandlerCppToC::DebugObjCt, 0);
  ASSERTEQ(CefLoadHandlerCppToC::DebugObjCt, 0);
  ASSERTEQ(CefMenuHandlerCppToC::DebugObjCt, 0);
  ASSERTEQ(CefPermissionHandlerCppToC::DebugObjCt, 0);
  ASSERTEQ(CefPostDataCToCpp::DebugObjCt, 0);
  ASSERTEQ(CefPostDataElementCToCpp::DebugObjCt, 0);
  ASSERTEQ(CefPrintHandlerCppToC::DebugObjCt, 0);
  ASSERTEQ(CefProxyHandlerCppToC::DebugObjCt, 0);
  ASSERTEQ(CefReadHandlerCppToC::DebugObjCt, 0);
  ASSERTEQ(CefRenderHandlerCppToC::DebugObjCt, 0);
  ASSERTEQ(CefRequestCToCpp::DebugObjCt, 0);
  ASSERTEQ(CefRequestHandlerCppToC::DebugObjCt, 0);
  ASSERTEQ(CefResourceBundleHandlerCppToC::DebugObjCt, 0);
  ASSERTEQ(CefResponseCToCpp::DebugObjCt, 0);
  ASSERTEQ(CefSchemeHandlerCallbackCToCpp::DebugObjCt, 0);
  ASSERTEQ(CefSchemeHandlerCppToC::DebugObjCt, 0);
  ASSERTEQ(CefSchemeHandlerFactoryCppToC::DebugObjCt, 0);
  ASSERTEQ(CefStorageVisitorCppToC::DebugObjCt, 0);
  ASSERTEQ(CefStreamReaderCToCpp::DebugObjCt, 0);
  ASSERTEQ(CefStreamWriterCToCpp::DebugObjCt, 0);
  ASSERTEQ(CefTaskCppToC::DebugObjCt, 0);
  ASSERTEQ(CefV8AccessorCppToC::DebugObjCt, 0);
  ASSERTEQ(CefV8ContextCToCpp::DebugObjCt, 0);
  ASSERTEQ(CefV8ContextHandlerCppToC::DebugObjCt, 0);
  ASSERTEQ(CefV8ExceptionCToCpp::DebugObjCt, 0);
  ASSERTEQ(CefV8HandlerCppToC::DebugObjCt, 0);
  ASSERTEQ(CefV8ValueCToCpp::DebugObjCt, 0);
  ASSERTEQ(CefWebPluginInfoCToCpp::DebugObjCt, 0);
  ASSERTEQ(CefWebURLRequestCToCpp::DebugObjCt, 0);
  ASSERTEQ(CefWebURLRequestClientCppToC::DebugObjCt, 0);
  ASSERTEQ(CefWriteHandlerCppToC::DebugObjCt, 0);
  ASSERTEQ(CefXmlReaderCToCpp::DebugObjCt, 0);
  ASSERTEQ(CefZipReaderCToCpp::DebugObjCt, 0);
#endif  // !NDEBUG
}

CEF_GLOBAL void CefDoMessageLoopWork() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_do_message_loop_work();
}

CEF_GLOBAL void CefDoMessageLoopWorkWithDispatcher(
    const CefMessageDispatcher& messageDispatcher) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_do_message_loop_work_with_dispatcher(
      &messageDispatcher);
}

CEF_GLOBAL void CefStartInnerMessagePump() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_start_inner_message_pump();
}

CEF_GLOBAL void CefEndInnerMessagePump() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_end_inner_message_pump();
}

CEF_GLOBAL void CefRunMessageLoop() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_run_message_loop();
}

CEF_GLOBAL void CefQuitMessageLoop() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_quit_message_loop();
}

CEF_GLOBAL void CefCacheDoomAll(CefCacheType cacheType) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_cache_doom_all(
      cacheType);
}

CEF_GLOBAL void CefRefreshPlugins() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_refresh_plugins();
}

CEF_GLOBAL int CefGetMaxSocketsPerGroup() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = cef_get_max_sockets_per_group();

  // Return type: simple
  return _retval;
}

CEF_GLOBAL void CefSetMaxSocketsPerGroup(int count) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_set_max_sockets_per_group(
      count);
}

CEF_GLOBAL CefString CefGetUserAgent() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = cef_get_user_agent();

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

CEF_GLOBAL void CefSetUserAgent(const CefString& newUserAgent) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: newUserAgent; type: string_byref_const
  DCHECK(!newUserAgent.empty());
  if (newUserAgent.empty())
    return;

  // Execute
  cef_set_user_agent(
      newUserAgent.GetStruct());
}

CEF_GLOBAL bool CefAddCrossOriginWhitelistEntry(const CefString& source_origin,
    const CefString& target_protocol, const CefString& target_domain,
    bool allow_target_subdomains) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: source_origin; type: string_byref_const
  DCHECK(!source_origin.empty());
  if (source_origin.empty())
    return false;
  // Verify param: target_protocol; type: string_byref_const
  DCHECK(!target_protocol.empty());
  if (target_protocol.empty())
    return false;
  // Unverified params: target_domain

  // Execute
  int _retval = cef_add_cross_origin_whitelist_entry(
      source_origin.GetStruct(),
      target_protocol.GetStruct(),
      target_domain.GetStruct(),
      allow_target_subdomains);

  // Return type: bool
  return _retval?true:false;
}

CEF_GLOBAL bool CefRemoveCrossOriginWhitelistEntry(
    const CefString& source_origin, const CefString& target_protocol,
    const CefString& target_domain, bool allow_target_subdomains) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: source_origin; type: string_byref_const
  DCHECK(!source_origin.empty());
  if (source_origin.empty())
    return false;
  // Verify param: target_protocol; type: string_byref_const
  DCHECK(!target_protocol.empty());
  if (target_protocol.empty())
    return false;
  // Unverified params: target_domain

  // Execute
  int _retval = cef_remove_cross_origin_whitelist_entry(
      source_origin.GetStruct(),
      target_protocol.GetStruct(),
      target_domain.GetStruct(),
      allow_target_subdomains);

  // Return type: bool
  return _retval?true:false;
}

CEF_GLOBAL bool CefClearCrossOriginWhitelist() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = cef_clear_cross_origin_whitelist();

  // Return type: bool
  return _retval?true:false;
}

CEF_GLOBAL bool CefRegisterCustomScheme(const CefString& scheme_name,
    bool is_standard, bool is_local, bool is_display_isolated) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: scheme_name; type: string_byref_const
  DCHECK(!scheme_name.empty());
  if (scheme_name.empty())
    return false;

  // Execute
  int _retval = cef_register_custom_scheme(
      scheme_name.GetStruct(),
      is_standard,
      is_local,
      is_display_isolated);

  // Return type: bool
  return _retval?true:false;
}

CEF_GLOBAL bool CefRegisterClientScheme(const CefString& scheme_name,
    const CefString& root_folder) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: scheme_name; type: string_byref_const
  DCHECK(!scheme_name.empty());
  if (scheme_name.empty())
    return false;
  // Verify param: root_folder; type: string_byref_const
  DCHECK(!root_folder.empty());
  if (root_folder.empty())
    return false;

  // Execute
  int _retval = cef_register_client_scheme(
      scheme_name.GetStruct(),
      root_folder.GetStruct());

  // Return type: bool
  return _retval?true:false;
}

CEF_GLOBAL bool CefRegisterSchemeHandlerFactory(const CefString& scheme_name,
    const CefString& domain_name,
    CefRefPtr<CefSchemeHandlerFactory> factory) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: scheme_name; type: string_byref_const
  DCHECK(!scheme_name.empty());
  if (scheme_name.empty())
    return false;
  // Unverified params: domain_name, factory

  // Execute
  int _retval = cef_register_scheme_handler_factory(
      scheme_name.GetStruct(),
      domain_name.GetStruct(),
      CefSchemeHandlerFactoryCppToC::Wrap(factory));

  // Return type: bool
  return _retval?true:false;
}

CEF_GLOBAL bool CefClearSchemeHandlerFactories() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = cef_clear_scheme_handler_factories();

  // Return type: bool
  return _retval?true:false;
}

CEF_GLOBAL bool CefVisitStorage(CefStorageType type, const CefString& origin,
    const CefString& key, CefRefPtr<CefStorageVisitor> visitor) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: visitor; type: refptr_diff
  DCHECK(visitor.get());
  if (!visitor.get())
    return false;
  // Unverified params: origin, key

  // Execute
  int _retval = cef_visit_storage(
      type,
      origin.GetStruct(),
      key.GetStruct(),
      CefStorageVisitorCppToC::Wrap(visitor));

  // Return type: bool
  return _retval?true:false;
}

CEF_GLOBAL bool CefSetStorage(CefStorageType type, const CefString& origin,
    const CefString& key, const CefString& value) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: origin; type: string_byref_const
  DCHECK(!origin.empty());
  if (origin.empty())
    return false;
  // Verify param: key; type: string_byref_const
  DCHECK(!key.empty());
  if (key.empty())
    return false;
  // Verify param: value; type: string_byref_const
  DCHECK(!value.empty());
  if (value.empty())
    return false;

  // Execute
  int _retval = cef_set_storage(
      type,
      origin.GetStruct(),
      key.GetStruct(),
      value.GetStruct());

  // Return type: bool
  return _retval?true:false;
}

CEF_GLOBAL bool CefDeleteStorage(CefStorageType type, const CefString& origin,
    const CefString& key) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Unverified params: origin, key

  // Execute
  int _retval = cef_delete_storage(
      type,
      origin.GetStruct(),
      key.GetStruct());

  // Return type: bool
  return _retval?true:false;
}

CEF_GLOBAL bool CefSetStoragePath(CefStorageType type, const CefString& path) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Unverified params: path

  // Execute
  int _retval = cef_set_storage_path(
      type,
      path.GetStruct());

  // Return type: bool
  return _retval?true:false;
}

CEF_GLOBAL bool CefCurrentlyOn(CefThreadId threadId) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = cef_currently_on(
      threadId);

  // Return type: bool
  return _retval?true:false;
}

CEF_GLOBAL bool CefPostTask(CefThreadId threadId, CefRefPtr<CefTask> task) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: task; type: refptr_diff
  DCHECK(task.get());
  if (!task.get())
    return false;

  // Execute
  int _retval = cef_post_task(
      threadId,
      CefTaskCppToC::Wrap(task));

  // Return type: bool
  return _retval?true:false;
}

CEF_GLOBAL bool CefPostDelayedTask(CefThreadId threadId,
    CefRefPtr<CefTask> task, int64 delay_ms) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: task; type: refptr_diff
  DCHECK(task.get());
  if (!task.get())
    return false;

  // Execute
  int _retval = cef_post_delayed_task(
      threadId,
      CefTaskCppToC::Wrap(task),
      delay_ms);

  // Return type: bool
  return _retval?true:false;
}

CEF_GLOBAL bool CefParseURL(const CefString& url, CefURLParts& parts) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: url; type: string_byref_const
  DCHECK(!url.empty());
  if (url.empty())
    return false;

  // Execute
  int _retval = cef_parse_url(
      url.GetStruct(),
      &parts);

  // Return type: bool
  return _retval?true:false;
}

CEF_GLOBAL bool CefCreateURL(const CefURLParts& parts, CefString& url) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = cef_create_url(
      &parts,
      url.GetWritableStruct());

  // Return type: bool
  return _retval?true:false;
}

CEF_GLOBAL bool CefRegisterExtension(const CefString& extension_name,
    const CefString& javascript_code, CefRefPtr<CefV8Handler> handler) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: extension_name; type: string_byref_const
  DCHECK(!extension_name.empty());
  if (extension_name.empty())
    return false;
  // Verify param: javascript_code; type: string_byref_const
  DCHECK(!javascript_code.empty());
  if (javascript_code.empty())
    return false;
  // Unverified params: handler

  // Execute
  int _retval = cef_register_extension(
      extension_name.GetStruct(),
      javascript_code.GetStruct(),
      CefV8HandlerCppToC::Wrap(handler));

  // Return type: bool
  return _retval?true:false;
}

CEF_GLOBAL size_t CefGetWebPluginCount() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  size_t _retval = cef_get_web_plugin_count();

  // Return type: simple
  return _retval;
}

CEF_GLOBAL CefRefPtr<CefWebPluginInfo> CefGetWebPluginInfo(int index) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_web_plugin_info_t* _retval = cef_get_web_plugin_info(
      index);

  // Return type: refptr_same
  return CefWebPluginInfoCToCpp::Wrap(_retval);
}

CEF_GLOBAL CefRefPtr<CefWebPluginInfo> CefGetWebPluginInfo(
    const CefString& name) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: name; type: string_byref_const
  DCHECK(!name.empty());
  if (name.empty())
    return NULL;

  // Execute
  cef_web_plugin_info_t* _retval = cef_get_web_plugin_info_byname(
      name.GetStruct());

  // Return type: refptr_same
  return CefWebPluginInfoCToCpp::Wrap(_retval);
}

