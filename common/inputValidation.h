#ifndef TRIM_H
#define TRIM_H

class InputValidation

{
public:
    string trimString(const string& str) {
        string trimmed = str;
        
        // Trim leading whitespace
        trimmed.erase(trimmed.begin(), find_if(trimmed.begin(), trimmed.end(), [](unsigned char ch) {
            return !isspace(ch);
        }));
        
        // Trim trailing whitespace
        trimmed.erase(find_if(trimmed.rbegin(), trimmed.rend(), [](unsigned char ch) {
            return !isspace(ch);
        }).base(), trimmed.end());
        
        return trimmed;
    }
};

#endif