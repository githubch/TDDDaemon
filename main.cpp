#include <iostream>
#include "test/QUnit.hpp"
#include "test/QUnit_extension.hpp"

TEST_METHOD(should_success) {
    QUNIT_IS_EQUAL(1, 1);
}

int main()
{
    QUnit::UnitTest qunit(std::cerr, QUnit::normal);

    should_success(qunit);

    return qunit.errors();
}
