#ifndef CHM_ICE
#define CHM_ICE

module chameleon {
    class StartLearning {
		string algorithm;
		string ID;

        int inputLength;
		int outputLength;
    };
  	sequence<float> FloatSeq;

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

