#pragma once
#include <iostream>
#include <string>

void print(const std::string& text, std::ostream& out = std::cout);
EOF

cat > formatter_lib/formatter.cpp << 'EOF'
#include "formatter.hpp"
void print(const std::string& text, std::ostream& out) {
    out << text;
}
