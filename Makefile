CXX      := g++
CXXFLAGS := -std=c++20 -Werror -g

DIRS := $(wildcard [0-9][0-9]_*)
# two-digit prefix of a dir, e.g. 00_hello_world -> 00
CODE = $(word 1,$(subst _, ,$(1)))
CODES := $(foreach d,$(DIRS),$(call CODE,$(d)))

.PHONY: clean $(DIRS) $(CODES) $(addprefix run-,$(CODES))

# make 00_hello_world  -> builds 00_hello_world/00_hello_world.out
$(DIRS):
	$(CXX) $(CXXFLAGS) $(wildcard $@/*.cpp) -o $@/$@.out

# make run-00_hello_world -> builds and runs it
run-%: %
	@./$*/$*.out

# make 00 / make run-00 -> alias for the matching numbered directory
$(foreach d,$(DIRS),$(eval $(call CODE,$(d)): $(d)))
$(foreach d,$(DIRS),$(eval run-$(call CODE,$(d)): run-$(d)))

.PHONY: FORCE
FORCE:

clean:
	find . -name '*.out' -delete
