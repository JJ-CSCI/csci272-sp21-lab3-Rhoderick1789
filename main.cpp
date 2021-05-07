//------------------------------
//  DO NOT MODIFY NEXT LINE
//------------------------------
#include "catch.hpp"
//------------------------------

// Put the assignment code here
class Quaternion {
  public:
  Quaternion(double a, double b, double c, double d){
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
  }

  bool operator==(const Quaternion& other) const {
    bool eq = (a == other.a) && (b == other.b) && (c == other.c) && (d == other.d);
    return eq;
  }

  Quaternion operator+(const Quaternion& opp) const {
    Quaternion res(a + opp.a, b + opp.b, c + opp.c, d + opp.d);
    return res;
  }

  Quaternion operator-(const Quaternion& opp) const {
    Quaternion res(a - opp.a, b - opp.b, c - opp.c, d - opp.d);
    return res;
  }

  Quaternion operator*(const double& op) const {
    Quaternion res(a*op, b*op, c*op, d*op);
    return res;
  }

  private:
  double a;
  double b;
  double c;
  double d; 
};
double a;
//------------------------------
//   DO NOT MODIFY TEST CASES
//------------------------------
TEST_CASE( "Assignment" ) {
    SECTION( "q1" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        REQUIRE( q == p );
    }
    SECTION( "q2" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        Quaternion r{2.0, 4.0, 6.0, 8.0};
        REQUIRE( (q + p) == r );
    }
    SECTION( "q3" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        Quaternion r{0.0, 0.0, 0.0, 0.0};
        REQUIRE( (q - p) == r );
    }
    SECTION( "q3" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion r{2.0, 4.0, 6.0, 8.0};
        REQUIRE( (q * 2.0) == r );
    }
}
//------------------------------
