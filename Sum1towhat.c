{\rtf1\ansi\ansicpg1252\cocoartf1671\cocoasubrtf200
{\fonttbl\f0\fnil\fcharset0 Menlo-Regular;\f1\fswiss\fcharset0 Helvetica;\f2\fnil\fcharset0 Menlo-Bold;
}
{\colortbl;\red255\green255\blue255;\red253\green143\blue63;\red31\green31\blue36;\red252\green106\blue93;
\red252\green95\blue163;\red255\green255\blue255;\red150\green134\blue245;}
{\*\expandedcolortbl;;\csgenericrgb\c99131\c56076\c24611;\csgenericrgb\c12054\c12284\c14131;\csgenericrgb\c98912\c41558\c36568;
\csgenericrgb\c98839\c37355\c63833;\csgenericrgb\c100000\c100000\c100000;\csgenericrgb\c58752\c52717\c95948;}
\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\deftab593
\pard\tx593\pardeftab593\pardirnatural\partightenfactor0

\f0\fs24 \cf2 \cb3 #include \cf4 <stdio.h>
\f1 \cf0 \
\

\f2\b \cf5 int
\f0\b0 \cf6  main()
\f1 \cf0 \

\f0 \cf6 \{
\f1 \cf0 \

\f0 \cf6     
\f2\b \cf5 double
\f0\b0 \cf6  sum = \cf7 0\cf6 , i = \cf7 1\cf6 , sum_end = \cf7 1E9\cf6 ;
\f1 \cf0 \

\f0 \cf6     
\f1 \cf0 \

\f0 \cf6     
\f2\b \cf5 for
\f0\b0 \cf6 (; i <= sum_end; i++)
\f1 \cf0 \

\f0 \cf6     \{
\f1 \cf0 \

\f0 \cf6         sum = sum +i;
\f1 \cf0 \

\f0 \cf6     \}
\f1 \cf0 \

\f0 \cf6     
\f1 \cf0 \

\f0 \cf6     printf(\cf4 "%e\\n"\cf6 , sum);
\f1 \cf0 \

\f0 \cf6     
\f1 \cf0 \

\f0 \cf6     
\f2\b \cf5 return
\f0\b0 \cf6  \cf7 0\cf6 ;
\f1 \cf0 \

\f0 \cf6 \}}