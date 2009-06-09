#ifndef CHM_ICE
#define CHM_ICE

module chameleon {

  	sequence<float> FloatSeq;

	dictionary<string, int> intMap;
	dictionary<string, float> floatMap;
	dictionary<string, string> stringMap;
	dictionary<string, bool> boolMap;

    class StartLearning {
		string algorithm;
		string ID;

        int inputLength;
		int outputLength;

		intMap configInt;
		floatMap configFloat;
		stringMap configString;
		boolMap configBool;
		
    };

	class LearnThis {
		string algorithm;
		string ID;

		FloatSeq data;
		FloatSeq label;
	};

	class RecogniseThis {
		string algorithm;
		string ID;

		FloatSeq data;
		FloatSeq label;
	};

};

#endif

