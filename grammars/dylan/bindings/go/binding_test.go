package tree_sitter_dylan_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_dylan "github.com/indika-dev/tree-sitter-opendylan/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_dylan.Language())
	if language == nil {
		t.Errorf("Error loading Dylan grammar")
	}
}
