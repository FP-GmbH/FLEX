// swift-tools-version:5.1

import PackageDescription

let package = Package(
    name: "FLEX",
    products: [
        .library(name: "FLEX", targets: ["FLEX"])
    ],
    targets: [
        .target(
            name: "FLEX",
            path: "Classes",
            exclude: [
                "GlobalStateExplorers/SystemLog/LLVM_LICENSE.TXT",
                "Network/PonyDebugger/LICENSE",
                "Utility/APPLE_LICENSE",
                "GlobalStateExplorers/Keychain/SSKeychain_LICENSE",
                "Info.plist",
                "GlobalStateExplorers/DatabaseBrowser/LICENSE"
            ],
            publicHeadersPath: "Headers"
        )
    ]
)
