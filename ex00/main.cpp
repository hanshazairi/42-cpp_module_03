/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:27:17 by hbaddrul          #+#    #+#             */
/*   Updated: 2022/02/09 00:50:24 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
    ClapTrap A = ClapTrap("A");
    ClapTrap B = ClapTrap("B");
    ClapTrap C = A;

    C.set_name("C");
    A.attack(B.get_name());
    B.attack(C.get_name());
    A.takeDamage(10);
    A.takeDamage(10);
    A.beRepaired(5);
    A.takeDamage(10);

    for (int i = 0; i < 10; i ++)
        B.attack(A.get_name());

    return 0;
}
