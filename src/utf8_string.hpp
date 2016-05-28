#ifndef UTF8_STRING_HPP_INCLUDED
#define UTF8_STRING_HPP_INCLUDED

#include <string>
#include <iostream>


class UTF8string
{
    std::string utf8data;
    size_t utf8length;

    bool utf8_is_valid_();
    size_t utf8_length_() const;
    size_t utf8_codepoint_len_(size_t j) const;

public:

    const static size_t npos = std::string::npos;

    UTF8string();
    UTF8string(const std::string &str);
    UTF8string(const UTF8string &u8str);

    const UTF8string& operator =(const char * str);
    const UTF8string& operator =(const std::string str);
    const UTF8string& operator =(const UTF8string u8str);
    const UTF8string& operator +=(const UTF8string u8str);
    const UTF8string& operator +=(const std::string str);
    const UTF8string& operator +=(const char * str);
    const UTF8string& operator +=(const char c);

    void utf8_clear();
    bool utf8_empty() const;

    UTF8string utf8_substr(size_t pos = 0, size_t len = npos) const;
    size_t utf8_find(const UTF8string& str, size_t pos = 0) const;

    size_t utf8_size() const;
    size_t utf8_length() const;
    const char * utf8_str() const;

    std::string::iterator utf8_begin() noexcept;
    std::string::iterator utf8_end() noexcept;

    ~UTF8string() = default;
};

bool operator ==(const UTF8string &str1, const UTF8string &str2);
bool operator !=(const UTF8string &str1, const UTF8string &str2);
bool operator <=(const UTF8string &str1, const UTF8string &str2);
bool operator >=(const UTF8string &str1, const UTF8string &str2);
bool operator <(const UTF8string &str1, const UTF8string &str2);
bool operator >(const UTF8string &str1, const UTF8string &str2);

UTF8string operator +(const UTF8string &str1, const UTF8string &str2);
UTF8string operator +(const UTF8string &str1, const std::string &str2);
UTF8string operator +(const std::string &str1, const UTF8string &str2);
UTF8string operator +(const UTF8string &str1, const char * str2);
UTF8string operator +(const char * str1, const UTF8string &str2);

std::ostream & operator <<(std::ostream &os, const UTF8string &str);
std::istream & operator >>(std::istream &is, UTF8string &str);

#endif // UTF_STRING_HPP_INCLUDED
