#pragma once

// <

class RuleFive
{
public:

	RuleFive() = default;


	RuleFive(int argument)
	{
		m_value = new int(argument);
	}

	// destructor

	~RuleFive()
	{
		delete m_value;
	}

	// copy constructor
	RuleFive(const RuleFive& other)
	{
		m_value = new int;
		*m_value = *(other.m_value);
	}

	// move constructor
	RuleFive(RuleFive&& other) noexcept
	{
		m_value = other.m_value;
		other.m_value = nullptr;
	}

	// Move assignment constructor 
	RuleFive& operator=(RuleFive&& other) noexcept
	{
		if (this == &other)
		{
			return *this;
		}

		int* temp = new int;
		*temp = *other.m_value;

		delete m_value;
		m_value = temp;

		return *this;
	}

	// Copy assignment constructor 
	RuleFive& operator=(const RuleFive& other)
	{
		if (this == &other)
		{
			return *this;
		}

		int* temp = new int;
		*temp = *other.m_value;

		delete m_value;
		m_value = temp;

		return *this;
	}


private:
	int* m_value;
};

