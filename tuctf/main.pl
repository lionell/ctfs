% tokenizer(X,T), checkkey(T,[]).
token(48,0).
token(49,1).
token(50,2).
token(51,3).
token(52,4).
token(53,5).
token(54,6).
token(55,7).
token(56,8).
token(57,9).

token(40,lt_paren).
token(41,rt_paren).
token(44,comma).
token(45,hyphen).
token(38,amper).

tokenizer([],[]).
tokenizer([H|T],[TK|TL]):-token(H,TK), tokenizer(T,TL).

rt_paren([rt_paren|S],S).
lt_paren([lt_paren|S],S).
comma([comma|S],S).
hyphen([hyphen|S],S).
amper([amper|S],S).

digit([0|S],S).
digit([1|S],S).
digit([2|S],S).
digit([3|S],S).
digit([4|S],S).
digit([5|S],S).
digit([6|S],S).
digit([7|S],S).
digit([8|S],S).
digit([9|S],S).

checkkey(S,R) :- lt_paren(S,S1), key(S1,S2,V1), rt_paren(S2,R), V1 is 82944.
key(S,R,V) :- oct(S,S1,V1), amper(S1,S2), oct(S2,R,V2), V is V1 * V2.
oct(S,R,V) :- quad(S,S1,V1), hyphen(S1,S2), quad(S2,R,V2), V is V1 + V2.
quad(S,R,V) :- pair(S,S1,V1), comma(S1,S2), pair(S2,R,V2), V is V1* V2.
pair(S,R,V) :- digit(S,S1,V1), digit(S1,R,V2), V is V1 + V2.

digit([0|S],S, 0).
digit([1|S],S, 1).
digit([2|S],S, 2).
digit([3|S],S, 3).
digit([4|S],S, 4).
digit([5|S],S, 5).
digit([6|S],S, 6).
digit([7|S],S, 7).
digit([8|S],S, 8).
digit([9|S],S, 9).

