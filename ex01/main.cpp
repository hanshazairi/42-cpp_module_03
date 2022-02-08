/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:49:40 by hbaddrul          #+#    #+#             */
/*   Updated: 2022/02/09 00:48:58 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void) {
    ScavTrap A = ScavTrap("A");
    ScavTrap B = ScavTrap("B");
    ScavTrap C = A;

    C.set_name("C");
    A.attack(B.get_name());
    B.attack(C.get_name());
    A.takeDamage(10);
    A.takeDamage(100);
    A.takeDamage(100);
    A.beRepaired(5);
    A.takeDamage(10);
    C.guardGate();

    return 0;
}
