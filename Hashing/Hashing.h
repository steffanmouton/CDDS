#pragma once

template<typename KeyType, typename T>
class HashTable
{
public:
	HashTable(unsigned int size)
		 {
		m_size = (size);
		m_data = (new T[size]);
	}

	~HashTable() { delete[] m_data; }

	unsigned int badHash(KeyType Key)
	{
		int key = (int)Key;
		unsigned int hash = 0;
		const unsigned int len = m_size;

		/*for (unsigned int i = 0; i < len; i++)
		{
			hash += key++ * len;
		}*/

		//attempt at complex hash
		for (unsigned int i = 0; i < len; i++)
		{
			hash = (hash * 1313) + Key[i];
		}

		return (hash & 0x7FFFFFFF);
	}

	T& operator [] (const KeyType& key)
	{
		auto hashedKey = badHash(key) % m_size;
		return m_data[hashedKey];
	}

	const T& operator [] (const KeyType& key) const
	{
		auto hashedKey = badHash(key) % m_size;
		return m_data[hashedKey];
	}

	void add(KeyType key, T value)
	{
		unsigned int hashedKey = badHash(key);
		hashedKey %= m_size;
		m_data[hashedKey] = T(value);
		m_size++;
	}

private:
	

	T * m_data;
	unsigned int m_size;

};

