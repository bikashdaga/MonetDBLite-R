/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_SQL_SRC_SQL_SERVER_SQL_PARSER_TAB_H_INCLUDED
# define YY_SQL_SRC_SQL_SERVER_SQL_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int sqldebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    STRING = 258,
    X_BODY = 259,
    IDENT = 260,
    aTYPE = 261,
    ALIAS = 262,
    AGGR = 263,
    AGGR2 = 264,
    RANK = 265,
    sqlINT = 266,
    OIDNUM = 267,
    HEXADECIMAL = 268,
    INTNUM = 269,
    APPROXNUM = 270,
    USING = 271,
    GLOBAL = 272,
    CAST = 273,
    CONVERT = 274,
    CHARACTER = 275,
    VARYING = 276,
    LARGE = 277,
    OBJECT = 278,
    VARCHAR = 279,
    CLOB = 280,
    sqlTEXT = 281,
    BINARY = 282,
    sqlBLOB = 283,
    sqlDECIMAL = 284,
    sqlFLOAT = 285,
    TINYINT = 286,
    SMALLINT = 287,
    BIGINT = 288,
    HUGEINT = 289,
    sqlINTEGER = 290,
    sqlDOUBLE = 291,
    sqlREAL = 292,
    PRECISION = 293,
    PARTIAL = 294,
    SIMPLE = 295,
    ACTION = 296,
    CASCADE = 297,
    RESTRICT = 298,
    BOOL_FALSE = 299,
    BOOL_TRUE = 300,
    CURRENT_DATE = 301,
    CURRENT_TIMESTAMP = 302,
    CURRENT_TIME = 303,
    LOCALTIMESTAMP = 304,
    LOCALTIME = 305,
    LEX_ERROR = 306,
    sqlASC = 307,
    GEOMETRY = 308,
    GEOMETRYSUBTYPE = 309,
    GEOMETRYA = 310,
    USER = 311,
    CURRENT_USER = 312,
    SESSION_USER = 313,
    LOCAL = 314,
    LOCKED = 315,
    BEST = 316,
    EFFORT = 317,
    CURRENT_ROLE = 318,
    sqlSESSION = 319,
    sqlDELETE = 320,
    UPDATE = 321,
    SELECT = 322,
    INSERT = 323,
    LATERAL = 324,
    LEFT = 325,
    RIGHT = 326,
    FULL = 327,
    OUTER = 328,
    NATURAL = 329,
    CROSS = 330,
    JOIN = 331,
    INNER = 332,
    COMMIT = 333,
    ROLLBACK = 334,
    SAVEPOINT = 335,
    RELEASE = 336,
    WORK = 337,
    CHAIN = 338,
    NO = 339,
    PRESERVE = 340,
    ROWS = 341,
    START = 342,
    TRANSACTION = 343,
    READ = 344,
    WRITE = 345,
    ONLY = 346,
    ISOLATION = 347,
    LEVEL = 348,
    UNCOMMITTED = 349,
    COMMITTED = 350,
    sqlREPEATABLE = 351,
    SERIALIZABLE = 352,
    DIAGNOSTICS = 353,
    sqlSIZE = 354,
    STORAGE = 355,
    ASYMMETRIC = 356,
    SYMMETRIC = 357,
    ORDER = 358,
    ORDERED = 359,
    BY = 360,
    IMPRINTS = 361,
    EXISTS = 362,
    ESCAPE = 363,
    HAVING = 364,
    sqlGROUP = 365,
    sqlNULL = 366,
    FROM = 367,
    FOR = 368,
    MATCH = 369,
    EXTRACT = 370,
    SEQUENCE = 371,
    INCREMENT = 372,
    RESTART = 373,
    CONTINUE = 374,
    MAXVALUE = 375,
    MINVALUE = 376,
    CYCLE = 377,
    NOMAXVALUE = 378,
    NOMINVALUE = 379,
    NOCYCLE = 380,
    NEXT = 381,
    VALUE = 382,
    CACHE = 383,
    GENERATED = 384,
    ALWAYS = 385,
    IDENTITY = 386,
    SERIAL = 387,
    BIGSERIAL = 388,
    AUTO_INCREMENT = 389,
    SCOLON = 390,
    AT = 391,
    XMLCOMMENT = 392,
    XMLCONCAT = 393,
    XMLDOCUMENT = 394,
    XMLELEMENT = 395,
    XMLATTRIBUTES = 396,
    XMLFOREST = 397,
    XMLPARSE = 398,
    STRIP = 399,
    WHITESPACE = 400,
    XMLPI = 401,
    XMLQUERY = 402,
    PASSING = 403,
    XMLTEXT = 404,
    NIL = 405,
    REF = 406,
    ABSENT = 407,
    EMPTY = 408,
    DOCUMENT = 409,
    ELEMENT = 410,
    CONTENT = 411,
    XMLNAMESPACES = 412,
    NAMESPACE = 413,
    XMLVALIDATE = 414,
    RETURNING = 415,
    LOCATION = 416,
    ID = 417,
    ACCORDING = 418,
    XMLSCHEMA = 419,
    URI = 420,
    XMLAGG = 421,
    FILTER = 422,
    UNION = 423,
    EXCEPT = 424,
    INTERSECT = 425,
    CORRESPONDING = 426,
    UNIONJOIN = 427,
    WITH = 428,
    DATA = 429,
    FILTER_FUNC = 430,
    NOT = 431,
    ALL = 432,
    ANY = 433,
    NOT_BETWEEN = 434,
    BETWEEN = 435,
    NOT_IN = 436,
    sqlIN = 437,
    NOT_LIKE = 438,
    LIKE = 439,
    NOT_ILIKE = 440,
    ILIKE = 441,
    OR = 442,
    SOME = 443,
    AND = 444,
    COMPARISON = 445,
    LEFT_SHIFT = 446,
    RIGHT_SHIFT = 447,
    LEFT_SHIFT_ASSIGN = 448,
    RIGHT_SHIFT_ASSIGN = 449,
    CONCATSTRING = 450,
    SUBSTRING = 451,
    POSITION = 452,
    SPLIT_PART = 453,
    UMINUS = 454,
    GEOM_OVERLAP = 455,
    GEOM_OVERLAP_OR_ABOVE = 456,
    GEOM_OVERLAP_OR_BELOW = 457,
    GEOM_OVERLAP_OR_LEFT = 458,
    GEOM_OVERLAP_OR_RIGHT = 459,
    GEOM_BELOW = 460,
    GEOM_ABOVE = 461,
    GEOM_DIST = 462,
    GEOM_MBR_EQUAL = 463,
    TEMP = 464,
    TEMPORARY = 465,
    STREAM = 466,
    MERGE = 467,
    REMOTE = 468,
    REPLICA = 469,
    DESC = 470,
    AUTHORIZATION = 471,
    CHECK = 472,
    CONSTRAINT = 473,
    CREATE = 474,
    COMMENT = 475,
    TYPE = 476,
    PROCEDURE = 477,
    FUNCTION = 478,
    sqlLOADER = 479,
    AGGREGATE = 480,
    RETURNS = 481,
    EXTERNAL = 482,
    sqlNAME = 483,
    DECLARE = 484,
    CALL = 485,
    LANGUAGE = 486,
    ANALYZE = 487,
    MINMAX = 488,
    SQL_EXPLAIN = 489,
    SQL_PLAN = 490,
    SQL_DEBUG = 491,
    SQL_TRACE = 492,
    PREP = 493,
    PREPARE = 494,
    EXEC = 495,
    EXECUTE = 496,
    DEFAULT = 497,
    DISTINCT = 498,
    DROP = 499,
    TRUNCATE = 500,
    FOREIGN = 501,
    RENAME = 502,
    ENCRYPTED = 503,
    UNENCRYPTED = 504,
    PASSWORD = 505,
    GRANT = 506,
    REVOKE = 507,
    ROLE = 508,
    ADMIN = 509,
    INTO = 510,
    IS = 511,
    KEY = 512,
    ON = 513,
    OPTION = 514,
    OPTIONS = 515,
    PATH = 516,
    PRIMARY = 517,
    PRIVILEGES = 518,
    PUBLIC = 519,
    REFERENCES = 520,
    SCHEMA = 521,
    SET = 522,
    AUTO_COMMIT = 523,
    RETURN = 524,
    ALTER = 525,
    ADD = 526,
    TABLE = 527,
    COLUMN = 528,
    TO = 529,
    UNIQUE = 530,
    VALUES = 531,
    VIEW = 532,
    WHERE = 533,
    sqlDATE = 534,
    TIME = 535,
    TIMESTAMP = 536,
    INTERVAL = 537,
    YEAR = 538,
    QUARTER = 539,
    MONTH = 540,
    WEEK = 541,
    DAY = 542,
    HOUR = 543,
    MINUTE = 544,
    SECOND = 545,
    ZONE = 546,
    LIMIT = 547,
    OFFSET = 548,
    SAMPLE = 549,
    CASE = 550,
    WHEN = 551,
    THEN = 552,
    ELSE = 553,
    NULLIF = 554,
    COALESCE = 555,
    IF = 556,
    ELSEIF = 557,
    WHILE = 558,
    DO = 559,
    ATOMIC = 560,
    BEGIN = 561,
    END = 562,
    COPY = 563,
    RECORDS = 564,
    DELIMITERS = 565,
    STDIN = 566,
    STDOUT = 567,
    FWF = 568,
    INDEX = 569,
    REPLACE = 570,
    AS = 571,
    TRIGGER = 572,
    OF = 573,
    BEFORE = 574,
    AFTER = 575,
    ROW = 576,
    STATEMENT = 577,
    sqlNEW = 578,
    OLD = 579,
    EACH = 580,
    REFERENCING = 581,
    OVER = 582,
    PARTITION = 583,
    CURRENT = 584,
    EXCLUDE = 585,
    FOLLOWING = 586,
    PRECEDING = 587,
    OTHERS = 588,
    TIES = 589,
    RANGE = 590,
    UNBOUNDED = 591
  };
#endif
/* Tokens.  */
#define STRING 258
#define X_BODY 259
#define IDENT 260
#define aTYPE 261
#define ALIAS 262
#define AGGR 263
#define AGGR2 264
#define RANK 265
#define sqlINT 266
#define OIDNUM 267
#define HEXADECIMAL 268
#define INTNUM 269
#define APPROXNUM 270
#define USING 271
#define GLOBAL 272
#define CAST 273
#define CONVERT 274
#define CHARACTER 275
#define VARYING 276
#define LARGE 277
#define OBJECT 278
#define VARCHAR 279
#define CLOB 280
#define sqlTEXT 281
#define BINARY 282
#define sqlBLOB 283
#define sqlDECIMAL 284
#define sqlFLOAT 285
#define TINYINT 286
#define SMALLINT 287
#define BIGINT 288
#define HUGEINT 289
#define sqlINTEGER 290
#define sqlDOUBLE 291
#define sqlREAL 292
#define PRECISION 293
#define PARTIAL 294
#define SIMPLE 295
#define ACTION 296
#define CASCADE 297
#define RESTRICT 298
#define BOOL_FALSE 299
#define BOOL_TRUE 300
#define CURRENT_DATE 301
#define CURRENT_TIMESTAMP 302
#define CURRENT_TIME 303
#define LOCALTIMESTAMP 304
#define LOCALTIME 305
#define LEX_ERROR 306
#define sqlASC 307
#define GEOMETRY 308
#define GEOMETRYSUBTYPE 309
#define GEOMETRYA 310
#define USER 311
#define CURRENT_USER 312
#define SESSION_USER 313
#define LOCAL 314
#define LOCKED 315
#define BEST 316
#define EFFORT 317
#define CURRENT_ROLE 318
#define sqlSESSION 319
#define sqlDELETE 320
#define UPDATE 321
#define SELECT 322
#define INSERT 323
#define LATERAL 324
#define LEFT 325
#define RIGHT 326
#define FULL 327
#define OUTER 328
#define NATURAL 329
#define CROSS 330
#define JOIN 331
#define INNER 332
#define COMMIT 333
#define ROLLBACK 334
#define SAVEPOINT 335
#define RELEASE 336
#define WORK 337
#define CHAIN 338
#define NO 339
#define PRESERVE 340
#define ROWS 341
#define START 342
#define TRANSACTION 343
#define READ 344
#define WRITE 345
#define ONLY 346
#define ISOLATION 347
#define LEVEL 348
#define UNCOMMITTED 349
#define COMMITTED 350
#define sqlREPEATABLE 351
#define SERIALIZABLE 352
#define DIAGNOSTICS 353
#define sqlSIZE 354
#define STORAGE 355
#define ASYMMETRIC 356
#define SYMMETRIC 357
#define ORDER 358
#define ORDERED 359
#define BY 360
#define IMPRINTS 361
#define EXISTS 362
#define ESCAPE 363
#define HAVING 364
#define sqlGROUP 365
#define sqlNULL 366
#define FROM 367
#define FOR 368
#define MATCH 369
#define EXTRACT 370
#define SEQUENCE 371
#define INCREMENT 372
#define RESTART 373
#define CONTINUE 374
#define MAXVALUE 375
#define MINVALUE 376
#define CYCLE 377
#define NOMAXVALUE 378
#define NOMINVALUE 379
#define NOCYCLE 380
#define NEXT 381
#define VALUE 382
#define CACHE 383
#define GENERATED 384
#define ALWAYS 385
#define IDENTITY 386
#define SERIAL 387
#define BIGSERIAL 388
#define AUTO_INCREMENT 389
#define SCOLON 390
#define AT 391
#define XMLCOMMENT 392
#define XMLCONCAT 393
#define XMLDOCUMENT 394
#define XMLELEMENT 395
#define XMLATTRIBUTES 396
#define XMLFOREST 397
#define XMLPARSE 398
#define STRIP 399
#define WHITESPACE 400
#define XMLPI 401
#define XMLQUERY 402
#define PASSING 403
#define XMLTEXT 404
#define NIL 405
#define REF 406
#define ABSENT 407
#define EMPTY 408
#define DOCUMENT 409
#define ELEMENT 410
#define CONTENT 411
#define XMLNAMESPACES 412
#define NAMESPACE 413
#define XMLVALIDATE 414
#define RETURNING 415
#define LOCATION 416
#define ID 417
#define ACCORDING 418
#define XMLSCHEMA 419
#define URI 420
#define XMLAGG 421
#define FILTER 422
#define UNION 423
#define EXCEPT 424
#define INTERSECT 425
#define CORRESPONDING 426
#define UNIONJOIN 427
#define WITH 428
#define DATA 429
#define FILTER_FUNC 430
#define NOT 431
#define ALL 432
#define ANY 433
#define NOT_BETWEEN 434
#define BETWEEN 435
#define NOT_IN 436
#define sqlIN 437
#define NOT_LIKE 438
#define LIKE 439
#define NOT_ILIKE 440
#define ILIKE 441
#define OR 442
#define SOME 443
#define AND 444
#define COMPARISON 445
#define LEFT_SHIFT 446
#define RIGHT_SHIFT 447
#define LEFT_SHIFT_ASSIGN 448
#define RIGHT_SHIFT_ASSIGN 449
#define CONCATSTRING 450
#define SUBSTRING 451
#define POSITION 452
#define SPLIT_PART 453
#define UMINUS 454
#define GEOM_OVERLAP 455
#define GEOM_OVERLAP_OR_ABOVE 456
#define GEOM_OVERLAP_OR_BELOW 457
#define GEOM_OVERLAP_OR_LEFT 458
#define GEOM_OVERLAP_OR_RIGHT 459
#define GEOM_BELOW 460
#define GEOM_ABOVE 461
#define GEOM_DIST 462
#define GEOM_MBR_EQUAL 463
#define TEMP 464
#define TEMPORARY 465
#define STREAM 466
#define MERGE 467
#define REMOTE 468
#define REPLICA 469
#define DESC 470
#define AUTHORIZATION 471
#define CHECK 472
#define CONSTRAINT 473
#define CREATE 474
#define COMMENT 475
#define TYPE 476
#define PROCEDURE 477
#define FUNCTION 478
#define sqlLOADER 479
#define AGGREGATE 480
#define RETURNS 481
#define EXTERNAL 482
#define sqlNAME 483
#define DECLARE 484
#define CALL 485
#define LANGUAGE 486
#define ANALYZE 487
#define MINMAX 488
#define SQL_EXPLAIN 489
#define SQL_PLAN 490
#define SQL_DEBUG 491
#define SQL_TRACE 492
#define PREP 493
#define PREPARE 494
#define EXEC 495
#define EXECUTE 496
#define DEFAULT 497
#define DISTINCT 498
#define DROP 499
#define TRUNCATE 500
#define FOREIGN 501
#define RENAME 502
#define ENCRYPTED 503
#define UNENCRYPTED 504
#define PASSWORD 505
#define GRANT 506
#define REVOKE 507
#define ROLE 508
#define ADMIN 509
#define INTO 510
#define IS 511
#define KEY 512
#define ON 513
#define OPTION 514
#define OPTIONS 515
#define PATH 516
#define PRIMARY 517
#define PRIVILEGES 518
#define PUBLIC 519
#define REFERENCES 520
#define SCHEMA 521
#define SET 522
#define AUTO_COMMIT 523
#define RETURN 524
#define ALTER 525
#define ADD 526
#define TABLE 527
#define COLUMN 528
#define TO 529
#define UNIQUE 530
#define VALUES 531
#define VIEW 532
#define WHERE 533
#define sqlDATE 534
#define TIME 535
#define TIMESTAMP 536
#define INTERVAL 537
#define YEAR 538
#define QUARTER 539
#define MONTH 540
#define WEEK 541
#define DAY 542
#define HOUR 543
#define MINUTE 544
#define SECOND 545
#define ZONE 546
#define LIMIT 547
#define OFFSET 548
#define SAMPLE 549
#define CASE 550
#define WHEN 551
#define THEN 552
#define ELSE 553
#define NULLIF 554
#define COALESCE 555
#define IF 556
#define ELSEIF 557
#define WHILE 558
#define DO 559
#define ATOMIC 560
#define BEGIN 561
#define END 562
#define COPY 563
#define RECORDS 564
#define DELIMITERS 565
#define STDIN 566
#define STDOUT 567
#define FWF 568
#define INDEX 569
#define REPLACE 570
#define AS 571
#define TRIGGER 572
#define OF 573
#define BEFORE 574
#define AFTER 575
#define ROW 576
#define STATEMENT 577
#define sqlNEW 578
#define OLD 579
#define EACH 580
#define REFERENCING 581
#define OVER 582
#define PARTITION 583
#define CURRENT 584
#define EXCLUDE 585
#define FOLLOWING 586
#define PRECEDING 587
#define OTHERS 588
#define TIES 589
#define RANGE 590
#define UNBOUNDED 591

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 111 "src/sql/server/sql_parser.y" /* yacc.c:1909  */

	int		i_val,bval;
	lng		l_val,operation;
	double		fval;
	char *		sval;
	symbol*		sym;
	dlist*		l;
	sql_subtype	type;

#line 736 "src/sql/server/sql_parser.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int sqlparse (mvc *m);

#endif /* !YY_SQL_SRC_SQL_SERVER_SQL_PARSER_TAB_H_INCLUDED  */
