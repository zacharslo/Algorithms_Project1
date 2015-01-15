int Mastermind{
	//serious comments only.

	return 0;
}

class setup_4 {
public:
	setup_4();
	void setNumRange(const float newRange) range = newRange;
	void setGuesses(const float newGuesses) guesses = newGuesses;
	void set_1(const float newDigit) digit_1 = newDigit;
	void set_2(const float newDigit) digit_2 = newDigit;
	void set_3(const float newDigit) digit_3 = newDigit;
	void set_4(const float newDigit) digit_4 = newDigit;
	float get_1() const return digit_1;
	float get_2() const return digit_2;
	float get_3() const return digit_3;
	float get_4() const return digit_4;
	float getRange() const return range;
	float getGuesses() const return guesses;

private:
	float digit[4]:
	float range;
	float guesses;
}

class custom_setup_digit {
public:
	custom_setup_digit();
	void set(const float newDigit) digit = newDigit;
	float get() const return digit;

private:
	float digit;
}

class custom_setup_range {
public:
	custom_setup_range();
	void set(const float newRange) range = newRange;
	float get() const return range;

private:
	float range;
}

class custom_setup_guesses {
public:
	custom_setup_guesses();
	void set(const float newGuesses) guesses = newGuesses;
	float get() const return guesses;

private:
	float guesses;
}

class guess {
public:
	void set_1(const float newGuess) guess_1 = newGuess;
	void set_2(const float newGuess) guess_2 = newGuess;
	void set_3(const float newGuess) guess_3 = newGuess;
	void set_4(const float newGuess) guess_4 = newGuess;
	float get_1() const return guess_1;
	float get_2() const return guess_2;
	float get_3() const return guess_3;
	float get_4() const return guess_4;

private:
	float guess_1;
	float guess_2;
	float guess_3;
	float guess_4;
}

class custom_guess {
public:
	custom_guess();
	void set(const float newGuess) guess = newGuess;
	float get() const return guess;

private:
	float guess;
}
