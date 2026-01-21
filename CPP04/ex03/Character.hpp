#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>

class AMateria;

class ICharacter
{
	public:
		virtual	~ICharacter(void) {}

		virtual std::string const	&getName(void) const = 0;
		virtual void				equip(AMateria* m) = 0;
		virtual void				unequip(int idx) = 0;
		virtual void				use(int idx, ICharacter& target) = 0;
};

class Character	:	public ICharacter
{
	private:
		std::string	_name;
		AMateria	*materia[4];
	
	public:
		Character(void);
		Character(Character const &other);
		Character(std::string const &name);
		Character	&operator=(Character const &other);
		~Character(void);

		std::string const	&getName(void) const;
		void				equip(AMateria *m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
};

#endif