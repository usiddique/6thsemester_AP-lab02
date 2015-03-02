#include <limits.h>
#include "matrix.h"
#include "gtest/gtest.h"

TEST(AddTest, Blah ){
	mat_class a;
	a.makematrix(2,2,2,2);
	mat_class b;
	b.makematrix(2,2,2,2);
	mat_class res;
	res.add(a,b);


  EXPECT_EQ(res.matrix[0][0],4 );
  EXPECT_EQ(res.matrix[0][1],4 );
  EXPECT_EQ(res.matrix[1][0],4 );
  EXPECT_EQ(res.matrix[1][1],4 );
}

TEST(SubTest, Blah ){
	mat_class a;
	a.makematrix(4,4,4,4);
	mat_class b;
	b.makematrix(2,2,2,2);
	mat_class res;
	res.subb(a,b);


  EXPECT_EQ(res.matrix[0][0],2 );
  EXPECT_EQ(res.matrix[0][1],2 );
  EXPECT_EQ(res.matrix[1][0],2 );
  EXPECT_EQ(res.matrix[1][1],2 );
}

TEST(MultiplyTest, Blah ){
	mat_class a;
	a.makematrix(3,3,3,3);
	mat_class b;
	b.makematrix(3,3,3,3);
	mat_class res;
	res.mull(a,b);


  EXPECT_EQ(res.matrix[0][0],18 );
  EXPECT_EQ(res.matrix[0][1],18 );
  EXPECT_EQ(res.matrix[1][0],18 );
  EXPECT_EQ(res.matrix[1][1],18 );
}

TEST(MultAddTest, Blah){
	mat_class a;
	a.makematrix(2,2,2,2);
	mat_class b;
	b.makematrix(2,2,2,2);
	mat_class c;
	c.makematrix(1,1,1,1);
	mat_class res;
	res.mull(a,b);
	mat_class final;
	final.add(res,c);

	EXPECT_EQ(final.matrix[0][0],9 );
  EXPECT_EQ(final.matrix[0][1],9 );
  EXPECT_EQ(final.matrix[1][0],9 );
  EXPECT_EQ(final.matrix[1][1],9 );

}

