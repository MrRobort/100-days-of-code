# 100 Days Of Code - Log

<img src='https://www.codewars.com/users/ademola/badges/small' />

### Day 0: January 3rd 2017 (The Hashtag Generator & Integers: Recreation One)

**Today's Progress**: Worked on Hashtag Generator and Recreation One Kata's [@codewars](https://www.codewars.com)

**Thoughts:** The Hashtag generator challenge was nice, generating hashtags from a string if not greater than 140 characters :smile:.
The Recreation One Challenge was a cool one too, returning the sum of possible squared numbers and the number itself; the factor.

##### Links
- [The Hashtag Generator](https://gist.github.com/ooade/fe34dc4921ea90f305f0398299ceeb6b#file-integers-recreation-one-js)

- [Integers: Recreation One](https://gist.github.com/ooade/fe34dc4921ea90f305f0398299ceeb6b#file-the-hashtag-generator-js)

### Day 1: January 4th 2017 (Valid Braces)

**Today's Progress**: Worked on Valid Braces kata on [codewars](https://www.codewars.com)

**Thoughts:** The Challenge struck me a bit 'cos my thoughts were too shallow but i figured it out on the long run by just replacing the braces with nothing :smile: then if the final length of braces equals 0 then it's valid.

**Link**: [Valid Braces](https://gist.github.com/ooade/fe34dc4921ea90f305f0398299ceeb6b#file-valid-braces-js)

### Day 2: January 5th 2017 (RGB to Hex & Palindrome Chain Length)

**Today's Progress**: Worked on RGB to Hex and Palindrome Chain Length kata's and i moved up in rank(5 kyu) [@codewars](https://www.codewars.com) !image[](https://www.codewars.com/users/ademola/badges/micro)

**Thoughts:** The RGB to Hex was fun because i knew `Number.toString(16)` converts to hexademical, so i just applied it and made sure it was between 0 and 255. Palindrome Chain Length was quite an easy one for a 5 kyu challenge [@codewars](https://www.codewars.com); if the number supplied is a Palindrome, return 0 cos no steps were involved in achieving that, else, add the Palindrome of the supplied number to the number... Keep on doing that till you finally get a Palindrome, then return the number of times you went through to achieve the Palindrome.

##### Links
- [RGB to Hex](https://gist.github.com/ooade/fe34dc4921ea90f305f0398299ceeb6b#file-rgb-to-hex-js)

- [Palindrome Chain Length](https://gist.github.com/ooade/fe34dc4921ea90f305f0398299ceeb6b#file-palindrome-chain-length-js)

### Day 3: January 6th 2017 (Strip URL params)

**Today's Progress**: Worked on Strip URL params kata on [codewars](https://www.codewars.com)

**Thoughts:** It was nice removing duplicate params from URL and filtering out unwanted params :sweat_smile:

**Link:** [Strip URL params](https://gist.github.com/ooade/fe34dc4921ea90f305f0398299ceeb6b#file-strip-url-params-js)

### Day 4: January 7th 2017 (Coordinates Validator)

**Today's Progress**: Worked on Coordinates Validator kata on [codewars](https://www.codewars.com)

**Thoughts:** Lots of es6 sugar used here. LOL. Array destructing to coin out latitude, longitude and rest. rest shouldn't exist because coordinates contains just lat and lon, so we'd return invalid if that occurs. I replaced `e` to `ex` in each lat and lon; Will i call that an Hack? LOL. Because i was surprised at first when my code didn't pass for a longitude of 1e1 which evaluates to 10, then i had to tweak it to not accept exponentials by replacing em with something else.

**Link:** [Coordinates Validator](https://gist.github.com/ooade/fe34dc4921ea90f305f0398299ceeb6b#file-coordinates-validator-js)

### Day 5: January 8th 2017 (Formatting a number as price)

**Thoughts:** Today's challenge was nice. `Number.prototype.toLocaleString()` did most of the job for me by splitting the nums in Three(s). All that was left was me was to pad the number, and to make sure it is fixed to 2d.p(s).
