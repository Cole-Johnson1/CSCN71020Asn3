#include "pch.h"
#include <assert.h>
#include "CppUnitTest.h"

extern "C" {
#include "../CSCN71020_Asn3/rockPaperScissors.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestPlayer1)
		{
			const char* expected[] = {"Player1"};
			const char* actual[] = { rockPaperScissors("Rock", "Scissors") };
			Assert::AreEqual(expected, actual);
			
		}
		TEST_METHOD(TestPlayer2)
		{
			const char* expected[] = { "Player2" };
			const char* actual[] = { rockPaperScissors("Paper", "Scissors") };
			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(TestDraw)
		{
			const char* expected[] = { "Draw" };
			const char* actual[] = { rockPaperScissors("Rock", "Rock") };
			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(TestInvalid)
		{
			const char* expected[] = { "Invalid" };
			const char* actual[] = { rockPaperScissors("paper", "scissors") };
			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(TestInvalid1)
		{
			const char* expected[] = { "Invalid" };
			const char* actual[] = { rockPaperScissors("Fire", "Water") };
			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(TestInvalid2)
		{
			const char* expected[] = { "Invalid" };
			const char* actual[] = { rockPaperScissors("", "Paper") };
			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(TestInvalid3)
		{
			const char* expected[] = { "Invalid" };
			const char* actual[] = { rockPaperScissors("Paper", "") };
			Assert::AreEqual(expected, actual);

		}
	};
}
