\# Tokenizer



This repository is my attempt to really understand tokenization .



Tokenization is the first step in almost every NLP system. Before models, before training, before fancy architectures, raw text has to be broken down into pieces that a machine can work with. The choices made here quietly affect everything downstream.



I’m building this from scratch to understand those choices and implementation clearly.







\## What this project is about



The goal of this project is to explore different tokenization strategies and their tradeoffs, starting simple and gradually getting more sophisticated.



I’m intentionally avoiding high-level libraries at first so I can see:

\- what assumptions tokenizers make

\- where ambiguity in language shows up

\- how vocabulary size, unknown tokens, and efficiency are connected



This is a learning-focused project, not a production-ready library.





\## What’s implemented (or planned)



\- Basic whitespace and punctuation tokenization  

\- Vocabulary construction and token-to-id mapping  

\- Encode / decode pipeline  

\- Handling out-of-vocabulary (OOV) tokens  

\- Subword tokenization (BPE / unigram — planned)  



Each step is kept small and explicit so it’s easy to reason about what’s happening.







\## Why tokenization matters



Models don’t understand words. They understand numbers.



Tokenization is the bridge between human language and numerical computation. A “bad” tokenizer can:

\- explode vocabulary size

\- fail on unseen words

\- lose useful structure in text



A good tokenizer is usually invisible which is why it’s easy to underestimate how important it is.


## Roadmap

- [ ] Implement byte-level tokenizer
- [ ] Add UTF-8 safe decoding
- [ ] Build basic encode/decode API
- [ ] Extend to subword tokenization (BPE)
- [ ] Add benchmarks and tests









