#include <iostream>
#include <string>

#define COMMAND "yt-dlp -P \"/output/\" -o \"%(title)s\" --extract-audio --audio-format mp3 \""

using std::string;
using std::cout;
using std::cerr;
using std::cin;
using std::endl;
using std::getline;
using std::system;

int main() {
    string url;
    cout << "Insert YouTube url:\n";
    getline(cin, url);

    int result = system((COMMAND + url + "\"").c_str());
    if (!result)
        cout << "File downloaded\n";
    else cerr << "Error #" << result;

    system("pause");
    return 0;
}