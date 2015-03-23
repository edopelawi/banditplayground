#include <bandit/bandit.h>
using namespace bandit;

go_bandit([](){

	describe("this first test",[](){
		it("should fail", [](){
			AssertThat(true, Equals(false));
		});
	});

});

int main (int argc, char* argv[])
{
	return bandit::run(argc, argv);
}