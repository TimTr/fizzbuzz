// swift-tools-version: 6.0
import PackageDescription

// Docs for the Package.swift file:
// https://docs.swift.org/package-manager/PackageDescription/PackageDescription.html


let package = Package(
    name: "fizz-buzz",
    targets: [
        .executableTarget(
            name: "FizzBuzz-Swift",
            path: ".",
            exclude: ["FizzBuzz.c", "README.md"],
            sources: ["FizzBuzz.swift"]),
        .executableTarget(
            name: "FizzBuzz-C",
            path: ".",
            sources: ["FizzBuzz.c"])
    ]
    
/***
    defaultLocalization: [LanguageTag]? = nil,
    platforms: [SupportedPlatform]? = nil,
    products: [Product] = [],
    dependencies: [Package.Dependency] = [],
    targets: [Target] = [],
    swiftLanguageVersions: [SwiftVersion]? = nil,
    cLanguageStandard: CLanguageStandard? = nil,
    cxxLanguageStandard: CXXLanguageStandard? = nil
*/

)
