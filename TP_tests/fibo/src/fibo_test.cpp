#include <CppUTest/CommandLineTestRunner.h>
#include "Fibo.cpp"

TEST_GROUP(GroupFibo) { };

TEST(GroupFibo, test1)
{
    try
    {

        CHECK_EQUAL(fibo(0), 0);
        CHECK_EQUAL(fibo(1), 1);
        CHECK_EQUAL(fibo(2), 1);
        CHECK_EQUAL(fibo(3), 2);
        CHECK_EQUAL(fibo(4), 3);

		FAIL( "exception non levee" );
    }
	catch (const std::string& str)
    {
        CHECK_EQUAL(str, "Erreur : resultat négatif");
	}


  //CHECK_EQUAL(fibo(0), 0);
  //CHECK_EQUAL(fibo(1), 1);
  //CHECK_EQUAL(fibo(2), 1);
  //CHECK_EQUAL(fibo(3), 2);
  //CHECK_EQUAL(fibo(4), 3);


  //CHECK_THROWS(std::string, fibo(46));
}
