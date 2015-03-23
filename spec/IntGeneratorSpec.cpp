#include <bandit/bandit.h>
#include "IntGenerator.h"

using namespace bandit;

go_bandit([](){

	describe("IntGenerator",[]{
		IntGenerator generator;

		describe("getOne", [&]{
			it("should return int 1", [&]{
				AssertThat(generator.getOne(), Equals(1));
			});
		});
	});

});

int main (int argc, char* argv[])
{
	return bandit::run(argc, argv);
}