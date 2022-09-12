/* Copyright (c) 2012, Texas Instruments Incorporated
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions
are met:

*  Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.

*  Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.

*  Neither the name of Texas Instruments Incorporated nor the names of
   its contributors may be used to endorse or promote products derived
   from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.*/


#include <ti/grlib/grlib.h>

static const unsigned char pixel_game_over_fail_screen4BPP_UNCOMP[] =
{
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x20, 0x0f, 0xff, 0xff, 0xff, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x20, 0xff, 0xff, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0xff, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x20, 0x0f, 0xff, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x00, 0x00, 0xff, 0xff, 0xff, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x20, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x20, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x20, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x20, 0x0f, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0x22, 0x22, 0x22, 0x00, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x20, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x22, 0x22, 0x22, 0x20, 0xff, 0xff, 0x22, 0x22, 0x22, 0x20, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x20, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x22, 0x22, 0x22, 0x00, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x20, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x22, 0x00, 0x02, 0x22, 0x22, 0x22, 0x20, 0x00, 0x22, 0x22, 0x22, 0x20, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x22, 0x0f, 0x02, 0x22, 0x22, 0x22, 0x20, 0xf0, 0x22, 0x22, 0x22, 0x20, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x22, 0x22, 0x22, 0x00, 0x00, 0x00, 0x02, 0x22, 0x22, 0x20, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x20, 0x0f, 0xff, 0x22, 0x22, 0x22, 0x00, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x20, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x20, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x22, 0x0f, 0xff, 0x22, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x20, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x22, 0x0f, 0xf2, 0x22, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x20, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x22, 0x0f, 0xf2, 0x22, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x20, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x22, 0x22, 0x22, 0x20, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x22, 0x0f, 0xf0, 0x22, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0x22, 0x22, 0x22, 0x20, 0xff, 0xff, 0x22, 0x22, 0x22, 0x20, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x20, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x22, 0x0f, 0xff, 0x00, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0x22, 0x22, 0x22, 0x00, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xf0, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xf0, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x22, 0x00, 0x00, 0x00, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x20, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0xf0, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x20, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x02, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x20, 0x0f, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0xff, 0x02, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x20, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x02, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x20, 0x0f, 0xff, 0xff, 0x02, 0x22, 0x20, 0x0f, 0xff, 0xff, 0xf0, 0x22, 0x22, 0x00, 0xff, 0xff, 0xf0, 0x22, 0x22, 0x00, 0xff, 0xff, 0x02, 0x22, 0x20, 0x0f, 0xff, 0xf0, 0x22, 0x22, 0x00, 0xff, 0xff, 0xff, 0x02, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xf0, 0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x22, 0x22, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0x22, 0x22, 0x0f, 0xff, 0xff, 0xff, 0xf2, 0x22, 0x2f, 0xff, 0xff, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x22, 0x22, 0x22, 0x2f, 0xff, 0xff, 0xff, 0xff, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x20, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x00, 0xff, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x0f, 0xff, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x0f, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x20, 0xff, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x00, 0xff, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x20, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x20, 0x0f, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0x22, 0x22, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x00, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xf2, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x20, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x22, 0x22, 0x22, 0x20, 0xff, 0xff, 0x22, 0x22, 0x22, 0x20, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x22, 0x22, 0x22, 0x00, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x22, 0x22, 0x20, 0x0f, 0xff, 0xff, 0xff, 0x22, 0x22, 0x20, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xf1, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x22, 0x22, 0x20, 0xff, 0xff, 0xff, 0xff, 0x22, 0x22, 0x20, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x20, 0xff, 0xff, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x22, 0x22, 0x20, 0xff, 0xff, 0xff, 0xff, 0x22, 0x22, 0x20, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x20, 0xff, 0xff, 0xff, 0xff, 0x22, 0x22, 0x22, 0x00, 0x00, 0x02, 0x22, 0x22, 0x20, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x22, 0x22, 0x20, 0xff, 0xff, 0xff, 0xff, 0x22, 0x22, 0x20, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x20, 0xff, 0xff, 0xff, 0xff, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x20, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x22, 0x22, 0x20, 0xff, 0xff, 0xff, 0xff, 0x22, 0x22, 0x20, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x00, 0xff, 0xff, 0xff, 0xff, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x20, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x22, 0x22, 0x20, 0xff, 0xff, 0xff, 0xff, 0x22, 0x22, 0x20, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0x22, 0x22, 0x22, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x20, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x22, 0x22, 0x20, 0x0f, 0xff, 0xff, 0xff, 0x22, 0x22, 0x20, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x20, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x22, 0x22, 0x22, 0x00, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x22, 0x22, 0x22, 0x20, 0x00, 0x02, 0x22, 0x22, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x22, 0x22, 0x22, 0x20, 0xff, 0xff, 0x22, 0x22, 0x22, 0x20, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x20, 0x0f, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x22, 0x22, 0x22, 0x00, 0xff, 0xff, 0x22, 0x22, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x22, 0x22, 0x22, 0x20, 0x00, 0x00, 0x22, 0x22, 0x22, 0x20, 0xff, 0xff, 0xf0, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xf2, 0x22, 0x22, 0x20, 0x0f, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0x22, 0x22, 0x20, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x02, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x00, 0xff, 0xff, 0xf0, 0x22, 0x22, 0x22, 0x00, 0xff, 0xf2, 0x22, 0x22, 0x20, 0xff, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0x22, 0x22, 0x20, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x20, 0x0f, 0xff, 0xff, 0xff, 0x02, 0x22, 0x22, 0x20, 0x0f, 0x22, 0x22, 0x22, 0x00, 0xff, 0xff, 0xff, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x20, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x02, 0x22, 0x22, 0x02, 0x22, 0x22, 0x00, 0x0f, 0xff, 0xff, 0xff, 0x02, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x02, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x22, 0x22, 0x22, 0x22, 0x20, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0x22, 0x22, 0x22, 0x0f, 0xff, 0xff, 0x22, 0x22, 0x22, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x02, 0x22, 0x22, 0x22, 0x22, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x22, 0x22, 0x20, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x20, 0x0f, 0xff, 0xff, 0x02, 0x22, 0x20, 0x0f, 0xff, 0xff, 0x02, 0x22, 0x22, 0x20, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2, 0x22, 0x22, 0x22, 0x2f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2, 0x22, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2, 0x2f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x22, 0x22, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2, 0x2f, 0x22, 0xf2, 0x2f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x22, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2, 0x2f, 0xf2, 0x2f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x22, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x22, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2, 0x2f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x22, 0xff, 0xff, 0x22, 0x22, 0x22, 0x2f, 0xf2, 0x2f, 0xff, 0xf2, 0x2f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2, 0xff, 0x2f, 0xff, 0xf2, 0x22, 0x22, 0x22, 0xff, 0x22, 0x22, 0x2f, 0xff, 0xf2, 0x22, 0x2f, 0xff, 0xf2, 0x22, 0x22, 0x2f, 0xff, 0xff, 0xff, 0xf2, 0x2f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x22, 0xff, 0xff, 0xff, 0x22, 0xff, 0x22, 0xff, 0x22, 0xff, 0x22, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2, 0xff, 0x2f, 0xff, 0x22, 0xff, 0xf2, 0x2f, 0xff, 0xff, 0xff, 0x22, 0xff, 0xff, 0xf2, 0x2f, 0xff, 0xff, 0x22, 0xff, 0x22, 0xff, 0xff, 0xff, 0x22, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x22, 0xff, 0xff, 0xff, 0x22, 0xff, 0xff, 0xff, 0x22, 0xff, 0x22, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x22, 0xff, 0x22, 0xff, 0x22, 0xff, 0xf2, 0x2f, 0xff, 0x22, 0x22, 0x22, 0xff, 0xff, 0xf2, 0x2f, 0xff, 0xff, 0x22, 0xff, 0x22, 0xff, 0xff, 0xf2, 0x2f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x22, 0xff, 0xff, 0xff, 0x22, 0xff, 0xff, 0xff, 0xf2, 0x22, 0x2f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x22, 0x22, 0x22, 0xff, 0x22, 0xff, 0xf2, 0x2f, 0xf2, 0x2f, 0xff, 0x22, 0xff, 0xff, 0xf2, 0x2f, 0xff, 0xff, 0x22, 0xff, 0x22, 0xff, 0xff, 0xf2, 0x2f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x22, 0xff, 0xff, 0xff, 0x22, 0xff, 0xff, 0xff, 0xff, 0x22, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x22, 0xff, 0x22, 0xff, 0xf2, 0x22, 0x22, 0x2f, 0xf2, 0x2f, 0xff, 0x22, 0xff, 0xff, 0xf2, 0x2f, 0xff, 0xff, 0x22, 0xff, 0x22, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2, 0x22, 0x2f, 0xff, 0x22, 0x22, 0x22, 0xff, 0xff, 0xff, 0x22, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2, 0x2f, 0xff, 0xf2, 0x2f, 0xff, 0xff, 0xf2, 0x2f, 0xff, 0x22, 0x22, 0x22, 0x2f, 0xf2, 0x22, 0x22, 0x2f, 0xf2, 0x22, 0xff, 0x22, 0x2f, 0xff, 0xf2, 0x2f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x22, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2, 0x2f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x22, 0x2f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2, 0x22, 0x22, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};

static const unsigned long palette_game_over_fail_screen4BPP_UNCOMP[]=
{
	0x00ff00, 	0x2e2e2e, 	0xffffff, 	0x000000, 
	0x000000, 	0x000000, 	0x000000, 	0x000000, 
	0x000000, 	0x000000, 	0x000000, 	0x000000, 
	0x000000, 	0x000000, 	0x000000, 	0x000000
};

const tImage  game_over_fail_screen4BPP_UNCOMP=
{
	IMAGE_FMT_4BPP_UNCOMP,
	128,
	86,
	16,
	palette_game_over_fail_screen4BPP_UNCOMP,
	pixel_game_over_fail_screen4BPP_UNCOMP,
};
