REPO_DIR := $(shell git rev-parse --show-toplevel)
TARGET_LANGUAGE := Cpp
ANTLR4_PATH := $(REPO_DIR)/dist/antlr-4.2.1-dev-complete.jar
ANTLR4 := java -jar $(ANTLR4_PATH) -Dlanguage=$(TARGET_LANGUAGE)
GEN_DIR := $(REPO_DIR)/Hello/gen
LANG := Hello
EXT := hpp
TARGET := HelloTest
CPP := g++
CPP_OPTS := -std=c++11

.PHONY: all
all: antlr4 clean gen $(TARGET)

.PHONY: antlr4
antlr4:
	echo HELLO
	cd $(REPO_DIR) && ant

.PHONY: clean
clean:
	rm -rf $(GEN_DIR)

.PHONY: gen
gen: $(GEN_DIR)/$(LANG)BaseListener.$(EXT)

$(GEN_DIR)/$(LANG)Lexer.$(EXT) $(GEN_DIR)/$(LANG)BaseListener.$(EXT) $(GEN_DIR)/$(LANG)Listener.$(EXT) $(GEN_DIR)/$(LANG)Parser.$(EXT): $(LANG).g4
	$(ANTLR4) -o $(GEN_DIR) $<

$(TARGET): Main.cpp
	$(CPP) $(CPP_OPTS) -I$(REPO_DIR)/Hello/gen -I$(REPO_DIR)/Hello/lib -o $@ $<

