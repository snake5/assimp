#include "UnitTestPCH.h"

#define ASSIMP_FORCE_NOBOOST
#include "BoostWorkaround/boost/format.hpp"


using namespace std;
using namespace Assimp;

using boost::format;
using boost::str;

// ------------------------------------------------------------------------------------------------
TEST(NoBoostTest, testFormat)
{
    EXPECT_EQ( "Ahoi!", boost::str( boost::format("Ahoi!") ));
    EXPECT_EQ( "Ahoi! %", boost::str( boost::format("Ahoi! %%") ));
    EXPECT_EQ( "Ahoi! ", boost::str( boost::format("Ahoi! %s") ));
    EXPECT_EQ( "Ahoi! !!", boost::str( boost::format("Ahoi! %s") % "!!" ));
    EXPECT_EQ( "Ahoi! !!", boost::str( boost::format("Ahoi! %s") % "!!" % "!!" ));
    EXPECT_EQ( "abc", boost::str( boost::format("%s%s%s") % "a" % std::string("b") % "c" ));
}

struct another
{
    int dummy;
};
