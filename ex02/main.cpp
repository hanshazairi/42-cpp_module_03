/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 00:57:52 by hbaddrul          #+#    #+#             */
/*   Updated: 2022/02/09 01:04:34 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void) {
    FragTrap A = FragTrap("A");
    FragTrap B = FragTrap("B");
    FragTrap C = A;

    C.set_name("C");
    A.attack(B.get_name());
    B.attack(C.get_name());
    A.takeDamage(10);
    A.takeDamage(100);
    A.takeDamage(100);
    A.beRepaired(5);
    A.takeDamage(10);
    C.highFivesGuys();

    return 0;
}
