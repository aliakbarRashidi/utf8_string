#ifndef UTF8_STRING_HPP_INCLUDED
#define UTF8_STRING_HPP_INCLUDED

#include <string>
#include <vector>

#include "utf8_types.hpp"

class UTF8string
{
    std::vector<byte_t> utf8data;
    utf8_len_t utf8length;

    bool utf8_is_valid_();
    utf8_len_t utf8_length_();
    utf8_len_t utf8_codepoint_len(size_t j);

public:

    UTF8string();
    UTF8string(const std::string &str);
    UTF8string(const UTF8string &u8str);

    const UTF8string& operator =(const std::string str);
    UTF8string& operator =(const UTF8string u8str);
    UTF8string& operator +=(const std::string str);
    UTF8string& operator +=(const UTF8string u8str);

    void clear();
    bool empty();

    UTF8string substr(size_t pos = 0,size_t len = -1);
    utf8_len_t utf8_size();
    utf8_len_t utf8_length();
    const char * utf8_str() const;

    ~UTF8string() = default;
};

bool operator ==(const UTF8string &str1, const UTF8string &str2);

#endif // UTF_STRING_HPP_INCLUDED
