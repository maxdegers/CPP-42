/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 14:21:43 by mbrousse          #+#    #+#             */
/*   Updated: 2024/09/04 19:29:03 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main() {
    std::string strVariable = "HI THIS IS BRAIN";
	std::string *stringPTR = &strVariable;
	std::string &stringREF = strVariable;

	std::cout << "┌----------------ADDRESSES--------------┐" << std::endl;
	std::cout << "  String address    = " << &strVariable << std::endl;
	std::cout << "  Pointer address   = " << stringPTR << std::endl;
	std::cout << "  Reference address = " << &stringREF << std::endl;
	std::cout << "└--------------------┴------------------┘" << std::endl;
	
	std::cout << std::endl << "┌-----------------VALUES----------------┐" << std::endl;
	std::cout << "  String value       = " << strVariable << std::endl;
	std::cout << "  Pointer value      = " << *stringPTR << std::endl;
	std::cout << "  Reference value    = " << stringREF << std::endl;
	std::cout << "└--------------------┴------------------┘" << std::endl;

}