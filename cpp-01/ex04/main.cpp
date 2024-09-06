/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 10:27:37 by mbrousse          #+#    #+#             */
/*   Updated: 2024/09/06 15:46:28 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void replace_occurrences(std::string &content, const std::string &s1, const std::string &s2) {
    size_t pos = 0;
	
    while ((pos = content.find(s1, pos)) != std::string::npos) {
        content.erase(pos, s1.length());
        content.insert(pos, s2);
        pos += s2.length();
    }
}

int main(int argc, char **argv) {
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::string content;
    std::string line;
	
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <string_to_replace> <replacement_string>" << std::endl;
        return 1;
    }


    std::ifstream infile(filename.c_str());
    if (!infile) {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return 1;
    }

    while (std::getline(infile, line)) {
        content += line + "\n";
    }
    infile.close();

    replace_occurrences(content, s1, s2);

    std::ofstream outfile((filename + ".replace").c_str());
    if (!outfile) {
        std::cerr << "Error: Could not create output file " << filename + ".replace" << std::endl;
        return 1;
    }

    outfile << content;
    outfile.close();
    return 0;
}


