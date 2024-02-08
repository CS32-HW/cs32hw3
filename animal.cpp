class Animal
{
public:
	Animal(string name) { m_name = name; }
	virtual ~Animal() {};
	string name() const { return m_name; }
	virtual void speak() const = 0;
	virtual string moveAction() const { return "walk"; }
private:
	string m_name;
};

class Cat : public Animal
{
public:
	Cat(string name) : Animal(name) {}
	~Cat() { cout << "Destroying " << name() << " the cat" << endl; }
	virtual void speak() const { cout << "Meow"; }
private:
};

class Pig : public Animal
{
public:
	Pig(string name, int weight) : Animal(name) { m_weight = weight; }
	~Pig() { cout << "Destroying " << name() << " the pig" << endl; }
	virtual void speak() const
	{
		if (m_weight < 180)
			cout << "Oink";
		else
			cout << "Grunt";
	}
private:
	int m_weight;
};

class Duck : public Animal
{
public:
	Duck(string name) : Animal(name) {}
	~Duck() { cout << "Destroying " << name() << " the duck" << endl; }
	virtual void speak() const { cout << "Quack"; }
	virtual string moveAction() const { return "swim"; }
private:
};
