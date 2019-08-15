// swift-tools-version:4.2
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription 

let package = Package(name: "CGLib",
	pkgConfig: "glib-2.0 gio-unix-2.0",
	providers: [
		.brew(["glib", "glib-networking", "gobject-introspection"]),
		.apt(["libglib2.0-dev", "glib-networking", "gobject-introspection", "libgirepository1.0-dev"])
	]
)
