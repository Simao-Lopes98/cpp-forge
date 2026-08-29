CXX      := g++
CXXFLAGS := -std=c++20 -Wall -Wextra -g

DIRS := $(wildcard [0-9][0-9]_*)

.PHONY: clean $(DIRS)

# make 00_hello_world  -> builds 00_hello_world/a.out
$(DIRS):
	$(CXX) $(CXXFLAGS) $(wildcard $@/*.cpp) -o $@/$(DIRS).out

# make run-00_hello_world -> builds and runs it
run-%: %
	@./$*/$(DIRS).out

.PHONY: FORCE
FORCE:

clean:
	find . -name $(DIRS).out -delete
