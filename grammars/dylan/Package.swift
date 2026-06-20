// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterDylan",
    products: [
        .library(name: "TreeSitterDylan", targets: ["TreeSitterDylan"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterDylan",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterDylanTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterDylan",
            ],
            path: "bindings/swift/TreeSitterDylanTests"
        )
    ],
    cLanguageStandard: .c11
)
