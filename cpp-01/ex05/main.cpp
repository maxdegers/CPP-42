/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 10:27:37 by mbrousse          #+#    #+#             */
/*   Updated: 2024/09/06 15:58:28 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {
    Harl harl;

    std::cout << "Testing DEBUG level:" << std::endl;
    harl.complain("DEBUG");

    std::cout << "\nTesting INFO level:" << std::endl;
    harl.complain("INFO");

    std::cout << "\nTesting WARNING level:" << std::endl;
    harl.complain("WARNING");

    std::cout << "\nTesting ERROR level:" << std::endl;
    harl.complain("ERROR");

    std::cout << "\nTesting invalid level:" << std::endl;
    harl.complain("SILLY");

    return 0;
}