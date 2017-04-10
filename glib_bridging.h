struct _GAsyncQueue {};
struct _GBookmarkFile {};
struct _GBytes {};
struct _GChecksum {};
struct _GData {};
struct _GDateTime {};
struct _GDir {};
struct _GHashTable {};
struct _GHmac {};
struct _GKeyFile {};
struct _GMainContext {};
struct _GMainLoop {};
struct _GMappedFile {};
struct _GMarkupParseContext {};
struct _GMatchInfo {};
struct _GMutexLocker {};
struct _GOptionContext {};
struct _GOptionGroup {};
struct _GPatternSpec {};
struct _GRand {};
struct _GRegex {};
struct _GSequence {};
struct _GSequenceIter {};
struct _GSourcePrivate {};
struct _GStringChunk {};
struct _GTestCase {};
struct _GTestSuite {};
struct _GTimeZone {};
struct _GTimer {};
struct _GTree {};
struct _GVariant {};
struct _GVariantType {};
struct GMutexLocker {};
struct GSequenceIter {};
struct GTestCase {};
struct GTestSuite {};

struct _GAction {};
struct _GActionGroup {};
struct _GActionMap {};
struct _GAppInfo {};
struct _GAppInfoMonitor {};
struct _GAppLaunchContextPrivate {};
struct _GApplicationCommandLinePrivate {};
struct _GApplicationPrivate {};
struct _GAsyncInitable {};
struct _GAsyncResult {};
struct _GBufferedInputStreamPrivate {};
struct _GBufferedOutputStreamPrivate {};
struct _GBytesIcon {};
struct _GCancellablePrivate {};
struct _GCharsetConverter {};
struct _GConverter {};
struct _GConverterInputStreamPrivate {};
struct _GConverterOutputStreamPrivate {};
struct _GCredentials {};
struct _GCredentialsClass {};
struct _GDBusActionGroup {};
struct _GDBusAuthObserver {};
struct _GDBusConnection {};
struct _GDBusInterface {};
struct _GDBusInterfaceSkeletonPrivate {};
struct _GDBusMenuModel {};
struct _GDBusMessage {};
struct _GDBusMethodInvocation {};
struct _GDBusObject {};
struct _GDBusObjectManager {};
struct _GDBusObjectManagerClientPrivate {};
struct _GDBusObjectManagerServerPrivate {};
struct _GDBusObjectProxyPrivate {};
struct _GDBusObjectSkeletonPrivate {};
struct _GDBusProxyPrivate {};
struct _GDBusServer {};
struct _GDataInputStreamPrivate {};
struct _GDataOutputStreamPrivate {};
struct _GDesktopAppInfo {};
struct _GDesktopAppInfoLookup {};
struct _GDesktopAppLaunchCallback {};
struct _GDrive {};
struct _GEmblem {};
struct _GEmblemClass {};
struct _GEmblemedIconPrivate {};
struct _GFile {};
struct _GFileAttributeMatcher {};
struct _GFileDescriptorBased {};
struct _GFileEnumeratorPrivate {};
struct _GFileIOStreamPrivate {};
struct _GFileIcon {};
struct _GFileIconClass {};
struct _GFileInfo {};
struct _GFileInfoClass {};
struct _GFileInputStreamPrivate {};
struct _GFileMonitorPrivate {};
struct _GFileOutputStreamPrivate {};
struct _GFilenameCompleter {};
struct _GIOExtension {};
struct _GIOExtensionPoint {};
struct _GIOModule {};
struct _GIOModuleClass {};
struct _GIOModuleScope {};
struct _GIOSchedulerJob {};
struct _GIOStreamAdapter {};
struct _GIOStreamPrivate {};
struct _GIcon {};
struct _GInetAddressMaskPrivate {};
struct _GInetAddressPrivate {};
struct _GInetSocketAddressPrivate {};
struct _GInitable {};
struct _GInputStreamPrivate {};
struct _GListModel {};
struct _GListStore {};
struct _GLoadableIcon {};
struct _GMemoryInputStreamPrivate {};
struct _GMemoryOutputStreamPrivate {};
struct _GMenu {};
struct _GMenuAttributeIterPrivate {};
struct _GMenuItem {};
struct _GMenuLinkIterPrivate {};
struct _GMenuModelPrivate {};
struct _GMount {};
struct _GMountOperationPrivate {};
struct _GNativeSocketAddress {};
struct _GNetworkAddressPrivate {};
struct _GNetworkMonitor {};
struct _GNetworkServicePrivate {};
struct _GNotification {};
struct _GOutputStreamPrivate {};
struct _GPermissionPrivate {};
struct _GPollableInputStream {};
struct _GPollableOutputStream {};
struct _GPropertyAction {};
struct _GProxy {};
struct _GProxyAddressEnumeratorPrivate {};
struct _GProxyAddressPrivate {};
struct _GProxyResolver {};
struct _GRemoteActionGroup {};
struct _GResolverPrivate {};
struct _GResource {};
struct _GSeekable {};
struct _GSettingsBackendPrivate {};
struct _GSettingsPrivate {};
struct _GSettingsSchema {};
struct _GSettingsSchemaKey {};
struct _GSettingsSchemaSource {};
struct _GSimpleAction {};
struct _GSimpleActionGroupPrivate {};
struct _GSimpleAsyncResult {};
struct _GSimpleAsyncResultClass {};
struct _GSimpleIOStream {};
struct _GSimplePermission {};
struct _GSimpleProxyResolverPrivate {};
struct _GSocketClientPrivate {};
struct _GSocketConnectable {};
struct _GSocketConnectionPrivate {};
struct _GSocketControlMessagePrivate {};
struct _GSocketListenerPrivate {};
struct _GSocketPrivate {};
struct _GSocketServicePrivate {};
struct _GSrvTarget {};
struct _GSubprocess {};
struct _GSubprocessLauncher {};
struct _GTask {};
struct _GTaskClass {};
struct _GTcpConnectionPrivate {};
struct _GTcpWrapperConnectionPrivate {};
struct _GTestDBus {};
struct _GThemedIcon {};
struct _GThemedIconClass {};
struct _GThreadedSocketServicePrivate {};
struct _GTlsBackend {};
struct _GTlsCertificatePrivate {};
struct _GTlsClientConnection {};
struct _GTlsConnectionPrivate {};
struct _GTlsDatabasePrivate {};
struct _GTlsFileDatabase {};
struct _GTlsInteractionPrivate {};
struct _GTlsPasswordPrivate {};
struct _GTlsServerConnection {};
struct _GUnixMountEntry {};
struct _GUnixMountMonitor {};
struct _GUnixMountMonitorClass {};
struct _GUnixMountPoint {};
struct _GVolume {};
struct _GZlibCompressor {};
struct _GZlibDecompressor {};

struct _GDtlsClientConnection {};
struct _GDtlsConnection {};
struct _GDtlsServerConnection {};

#define GLIB_DISABLE_DEPRECATION_WARNINGS
#include <unistd.h>
#include <termios.h>
#include <glib-unix.h>
#include <glib-object.h>
#include <gmodule.h>
#include <glib/gstdio.h>
#include <glib/garray.h>
#include <glib/gasyncqueue.h>
#include <glib/gbookmarkfile.h>
#include <glib/gchecksum.h>
#include <glib/gdataset.h>
#include <glib/gdatetime.h>
#include <glib/gdir.h>
#include <glib/ghash.h>
#include <glib/ghmac.h>
#include <glib/gkeyfile.h>
#include <glib/gmain.h>
#include <glib/gmappedfile.h>
#include <glib/gmarkup.h>
#include <glib/gregex.h>
#include <glib/gthread.h>
#include <glib/goption.h>
#include <glib/gpattern.h>
#include <glib/grand.h>
#include <glib/gsequence.h>
#include <glib/gstringchunk.h>
#include <glib/gtestutils.h>
#include <glib/gtimezone.h>
#include <glib/gtimer.h>
#include <glib/gtree.h>
#include <glib/gvariant.h>
#include <glib/gvarianttype.h>
#include <gio/gio.h>
#include <gio/gnetworking.h>
#include <gio/gdesktopappinfo.h>
#include <gio/gfiledescriptorbased.h>
#include <gio/gunixconnection.h>
#include <gio/gunixcredentialsmessage.h>
#include <gio/gunixfdlist.h>
#include <gio/gunixfdmessage.h>
#include <gio/gunixinputstream.h>
#include <gio/gunixmounts.h>
#include <gio/gunixoutputstream.h>
#include <gio/gunixsocketaddress.h>
#include <gio/gsettingsbackend.h>

