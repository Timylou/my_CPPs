/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 15:29:49 by yel-mens          #+#    #+#             */
/*   Updated: 2026/01/19 15:29:50 by yel-mens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_HPP
# define MATERIA_HPP
# include <iostream>
# include "Character.hpp"

class AMateria
{
	protected:
		std::string	_type;

	public:
		AMateria(void);
		AMateria(std::string const &type);
		AMateria(AMateria const &other);
		AMateria &operator=(AMateria const &other);
		virtual ~AMateria(void);

		std::string const	&getType(void) const;

		virtual AMateria	*clone(void) const = 0;
		virtual void		use(ICharacter &target);
};

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}

		virtual void		learnMateria(AMateria *m) = 0;
		virtual AMateria	*createMateria(std::string const &type) = 0;
};

class MateriaSource	:	public IMateriaSource
{
	private:
		AMateria	*materia[4];

	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const &other);
		MateriaSource	&operator=(MateriaSource const &other);
		~MateriaSource(void);

		void		learnMateria(AMateria *m);
		AMateria	*createMateria(std::string const &type);
};

#endif
