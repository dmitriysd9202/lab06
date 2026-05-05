#pragma once
#include <iostream>
#include <string>

void formatter(std::ostream& out, const std::string& text);
EOF

cat > formatter_ex_lib/formatter_ex.cpp << 'EOF'
#include "formatter_ex.h"
#include "formatter.hpp"

void formatter(std::ostream& out, const std::string& text) {
    out << "=== ";
    print(text, out);
    out << " ===" << std::endl;
}
