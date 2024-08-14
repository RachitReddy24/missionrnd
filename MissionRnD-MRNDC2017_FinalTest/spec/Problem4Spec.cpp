#include "stdafx.h"
#include "../src/Problem4.cpp"

using namespace System;
using namespace System::Text;
using namespace System::Collections::Generic;
using namespace Microsoft::VisualStudio::TestTools::UnitTesting;

namespace spec
{
	[TestClass]
	public ref class Problem4Spec
	{
	private:
		TestContext^ testContextInstance;

	public:
		/// <summary>
		///Gets or sets the test context which provides
		///information about and functionality for the current test run.
		///</summary>
		property Microsoft::VisualStudio::TestTools::UnitTesting::TestContext^ TestContext
		{
			Microsoft::VisualStudio::TestTools::UnitTesting::TestContext^ get()
			{
				return testContextInstance;
			}
			System::Void set(Microsoft::VisualStudio::TestTools::UnitTesting::TestContext^ value)
			{
				testContextInstance = value;
			}
		};

#pragma region Additional test attributes
		//
		//You can use the following additional attributes as you write your tests:
		//
		//Use ClassInitialize to run code before running the first test in the class
		//[ClassInitialize()]
		//static void MyClassInitialize(TestContext^ testContext) {};
		//
		//Use ClassCleanup to run code after all tests in a class have run
		//[ClassCleanup()]
		//static void MyClassCleanup() {};
		//
		//Use TestInitialize to run code before running each test
		//[TestInitialize()]
		//void MyTestInitialize() {};
		//
		//Use TestCleanup to run code after each test has run
		//[TestCleanup()]
		//void MyTestCleanup() {};
		//
#pragma endregion 

		[TestMethod, Timeout(1000)]
		void Sample1_Problem4()
		{
			int moves[][2] = { { 0, 1 }, { 0, 0 }, { 1, 1 }, { 1, 0 }, { 0, 2 }, { 2, 0 } };
			int nMoves = sizeof(moves) / (2 * sizeof(int));

			int result = gameOutput((int*)moves, nMoves);
			Assert::AreEqual(2, result, L"Failed ", 1, 2);
		};
		[TestMethod, Timeout(1000)]
		void Sample2_Problem4()
		{
			int result = gameOutput(NULL, -1);
			Assert::AreEqual(0, result, L"Failed ", 1, 2);
		};

	};
}
