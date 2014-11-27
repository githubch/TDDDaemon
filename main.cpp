#include <iostream>
#include "test/QUnit.hpp"
#include "test/QUnit_extension.hpp"

class Length{
private:
    int m_len;
public:
    Length(int len): m_len(len)
    {

    }

    bool Equal(int len){
        return m_len == len;
    }
};

TEST_METHOD(should_success) {
    QUNIT_IS_EQUAL(1, 1);
}

TEST_METHOD(should_length_equal_5){
    Length length(5);
    bool equal = length.Equal(5);
    QUNIT_IS_EQUAL(true, equal);
}

TEST_METHOD(should_length_equal_10){
    Length length(10);
    bool equal = length.Equal(10);
    QUNIT_IS_EQUAL(true, equal);
}

TEST_METHOD(should_length_not_equal_10){
    Length length(20);
    bool equal = length.Equal(10);
    QUNIT_IS_EQUAL(false, equal);
}

int main()
{
    QUnit::UnitTest qunit(std::cerr, QUnit::normal);

    should_success(qunit);
    should_length_equal_5(qunit);
    should_length_equal_10(qunit);
    should_length_not_equal_10(qunit);
    return qunit.errors();
}
