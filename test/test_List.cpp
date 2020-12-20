#include <../gtest/gtest.h>
#include "List.h"


TEST(ListElem, ListElem){
	ASSERT_NO_THROW(ListElem<int> tmp(3));
}

TEST(ListElem, GetList){
	ListElem<int> tmp(2);
	EXPECT_EQ(2, tmp.GetList());
}

TEST(ListElem, SetList){
	ListElem<int> tmp(8);
	ASSERT_NO_THROW(tmp.SetList(9));
}

TEST(TList, TList){
	ASSERT_NO_THROW(TList<int> tmp());
}

TEST(TList, InsFirst){
	TList<int> tmp;
	ASSERT_NO_THROW(tmp.InsFirst(64));
}

TEST(TList, DelFirst) {
	TList<int> tmp;
	tmp.InsLast(325);
	tmp.InsLast(75);
	tmp.InsLast(33);
	ASSERT_NO_THROW(tmp.DelFirst());
}

TEST(TList, DelLast) {
	TList<int> tmp;
	tmp.InsFirst(75);
	tmp.InsFirst(46);
	tmp.InsFirst(7545);
	ASSERT_NO_THROW(tmp.DelLast());
}

TEST(TList, InsLast){
	TList<int> tmp;
	ASSERT_NO_THROW(tmp.InsLast(24));
}

TEST(TList, GetFirst){
	TList<int> tmp;
	tmp.InsFirst(634);
	tmp.InsLast(86);
	EXPECT_EQ(634, tmp.GetFirst()->GetList());
}

TEST(TList, GetLast){
	TList<int> tmp;
	tmp.InsFirst(577);
	tmp.InsFirst(53);
	tmp.InsFirst(8);
	tmp.InsFirst(53);
	tmp.InsFirst(65);
	EXPECT_EQ(577, tmp.GetLast()->GetList());
}


TEST(TList, IsEmpty){
	TList<int> tmp;
	ASSERT_ANY_THROW(tmp.GetLast());
}











