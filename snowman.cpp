#include "snowman.hpp"
#include <iostream>
#include <stdexcept>
using namespace std;

namespace ariel{
    string snowman(int n){

        constexpr int limit1 = 11111111;
        constexpr int limit2 = 44444444;

        if (n < limit1 || n > limit2)  // number out of range
        {
            throw("Please enter an 8 digit number, containing only digits from 1-4!");
        }
        
        string str = to_string(n);
        string ans;

        for (char const &c : str)  // digits out of range
        {
            if (c == '5' || c == '6' || c == '7' || c == '8' || c == '9' || c == '0')
            {
                throw("Number can only contain digits from 1-4!");
            }       
        }
        
        int i = 0;

        // hat
        if (str.at(i) == '1')
        {
            ans.append("\n _===_\n");
        } 
        else if (str.at(i) == '2')
        {
            ans.append("\n  ___ \n .....\n");
        }
        else if (str.at(i) == '3')
        {
            ans.append("\n   _\n  /_\\ \n");
        }
        else
        {
            ans.append("\n  ___\n (_*_)\n");
        }
        i++;
        
        //if left hand is next to the head
        if (str.at(4) == '2')
        {
            ans.append("\\");
        }
        else
        {
            ans.append(" ");
        }

        //face
        ans.append("(");

        //left eye
        i++;
        if (str.at(i) == '1')
        {
            ans.append(".");
        }
        else if (str.at(i) == '2')
        {
            ans.append("o");
        }
        else if (str.at(i) == '3')
        {
            ans.append("O");
        }
        else
        {
            ans.append("-");
        }
        i--;

        //nose
        if (str.at(i) == '1')
        {
            ans.append(",");
        }
        else if (str.at(i) == '2')
        {
            ans.append(".");
        }
        else if (str.at(i) == '3')
        {
            ans.append("_");
        }
        else
        {
            ans.append(" ");
        }
        i+=2;

        //right eye
        if (str.at(i) == '1')
        {
            ans.append(".");
        }
        else if (str.at(i) == '2')
        {
            ans.append("o");
        }
        else if (str.at(i) == '3')
        {
            ans.append("O");
        }
        else
        {
            ans.append("-");
        }
        i++;

        //face
        ans.append(")");

        //if right hand is next to the head
        constexpr int leftHand = 5;

        if (str.at(leftHand) == '2')
        {
            ans.append("/ \n");
        }
        else
        {
            ans.append(" \n");
        }
        
        //left hand 
        if (str.at(i) == '1')
        {
            ans.append("<");
        }
        else if (str.at(i) == '3')
        {
            ans.append("/");
        }
        else
        {
            ans.append(" ");
        } 
        i+=2;

        //torso
        ans.append("(");
        if (str.at(i) == '1')
        {
            ans.append(" : ");
        }
        else if (str.at(i) == '2')
        {
            ans.append("] [");
        }
        else if (str.at(i) == '3')
        {
            ans.append("> <");
        }
        else
        {
            ans.append("   ");
        }
        i--;  
        ans.append(")");

        //right hand
        if (str.at(i) == '1')
        {
            ans.append(">");
        }
        else if (str.at(i) == '3')
        {
            ans.append("\\");
        }
        else if (str.at(i) == '4')
        {
            ans.append(" ");
        }   
        i+=2;

        //base
        ans.append("\n");
        if (str.at(i) == '1')
        {
            ans.append(" ( : )");
        }
        else if (str.at(i) == '2')
        {
            ans.append(" (\" \")");
        }
        else if (str.at(i) == '3')
        {
            ans.append(" (___)");
        }
        else
        {
            ans.append(" (   )");
        }

        //cout << ans << endl;

        return ans;
    }
}
