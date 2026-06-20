import XCTest
import SwiftTreeSitter
import TreeSitterDylan

final class TreeSitterDylanTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_dylan())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Dylan grammar")
    }
}
