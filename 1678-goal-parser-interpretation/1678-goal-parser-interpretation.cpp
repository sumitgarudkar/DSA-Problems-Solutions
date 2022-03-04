class Solution {
public:
    string interpret(string command) {
        string res="", str="";
        for(int i=0; i<command.size(); i++){
            str+=command[i];
            if(str=="G"){
                res+='G';
                str="";
            }
            if(str=="()"){
                res+='o';
                str="";
            }
            if(str=="(al)"){
                res+="al";
                str="";
            }
        }
        return res;
    }
};