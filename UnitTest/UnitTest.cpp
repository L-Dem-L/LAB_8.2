#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB_8.2/Main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
    TEST_CLASS(UnitTest)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            // Arrange
            string input = "Hello123 World!";
            string expected = "HelloWorld";

            // Act
            string result = removeNonAlphabetic(input);

            // Assert
            Assert::AreEqual(expected, result);
        }

        TEST_METHOD(TestMethod2)
        {
            // Arrange
            string input = "This is a test 123.";
            string expected = "Thisisatest";

            // Act
            string result = removeNonAlphabetic(input);

            // Assert
            Assert::AreEqual(expected, result);
        }

        TEST_METHOD(TestMethod3)
        {
            // Arrange
            string input = "Testing @#123!";
            string expected = "Testing";

            // Act
            string result = removeNonAlphabetic(input);

            // Assert
            Assert::AreEqual(expected, result);
        }
    };
}
