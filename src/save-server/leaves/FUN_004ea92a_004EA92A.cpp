// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EA92A .. +0x371 bytes.
extern "C" __declspec(naked) void FUN_004ea92a_004EA92A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 20h], ecx
        push 299h
        push 674180h
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        ; Exact mapped bytes E8 14 F9 FE FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xf9
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 71 AD 03 00: call 0x5256c5
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xad
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4ea96c
        __asm _emit 0x75
        __asm _emit 0x14
        push 29ah
        push 674180h
        ; Exact mapped bytes E8 D9 E3 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xe3
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ea96c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x4ea94c
        __asm _emit 0x75
        __asm _emit 0xda
        mov eax, dword ptr [ebp - 20h]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 1D: jne 0x4ea998
        __asm _emit 0x75
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 20h]
        cmp dword ptr [ecx + 2ch], 0
        ; Exact mapped bytes 75 14: jne 0x4ea998
        __asm _emit 0x75
        __asm _emit 0x14
        push 29bh
        push 674180h
        ; Exact mapped bytes E8 AD E3 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xe3
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ea998
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D4: jne 0x4ea972
        __asm _emit 0x75
        __asm _emit 0xd4
        mov eax, dword ptr [ebp - 20h]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 1D: jne 0x4ea9c4
        __asm _emit 0x75
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 20h]
        cmp dword ptr [ecx + 24h], 0
        ; Exact mapped bytes 75 14: jne 0x4ea9c4
        __asm _emit 0x75
        __asm _emit 0x14
        push 29ch
        push 674180h
        ; Exact mapped bytes E8 81 E3 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xe3
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ea9c4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D4: jne 0x4ea99e
        __asm _emit 0x75
        __asm _emit 0xd4
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 77 14: ja 0x4ea9e4
        __asm _emit 0x77
        __asm _emit 0x14
        push 29dh
        push 674180h
        ; Exact mapped bytes E8 61 E3 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xe3
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ea9e4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4ea9ca
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 1ch]
        ; Exact mapped bytes 76 14: jbe 0x4eaa09
        __asm _emit 0x76
        __asm _emit 0x14
        push 29eh
        push 674180h
        ; Exact mapped bytes E8 3C E3 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xe3
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4eaa09
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DB: jne 0x4ea9ea
        __asm _emit 0x75
        __asm _emit 0xdb
        mov ecx, dword ptr [ebp - 20h]
        cmp dword ptr [ecx + 2ch], 0
        ; Exact mapped bytes 74 33: je 0x4eaa4b
        __asm _emit 0x74
        __asm _emit 0x33
        push 0
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + 28h]
        sub ecx, dword ptr [eax + 2ch]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 2ch]
        push eax
        ; Exact mapped bytes E8 33 8A FB FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x8a
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4eaa4b
        __asm _emit 0x75
        __asm _emit 0x14
        push 2a0h
        push 674180h
        ; Exact mapped bytes E8 FA E2 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xe2
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4eaa4b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 BE: jne 0x4eaa0f
        __asm _emit 0x75
        __asm _emit 0xbe
        mov edx, dword ptr [ebp - 20h]
        cmp dword ptr [edx + 24h], 0
        ; Exact mapped bytes 74 33: je 0x4eaa8d
        __asm _emit 0x74
        __asm _emit 0x33
        push 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [eax + 28h]
        sub edx, dword ptr [ecx + 24h]
        push edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 24h]
        push ecx
        ; Exact mapped bytes E8 F1 89 FB FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x89
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4eaa8d
        __asm _emit 0x75
        __asm _emit 0x14
        push 2a2h
        push 674180h
        ; Exact mapped bytes E8 B8 E2 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xe2
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4eaa8d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 BE: jne 0x4eaa51
        __asm _emit 0x75
        __asm _emit 0xbe
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [eax + 28h]
        sub edx, dword ptr [ecx + 24h]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 20h]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 0F 85 3F 01 00 00: jne 0x4eabf7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        cmp dword ptr [edx + 24h], 0
        ; Exact mapped bytes 75 14: jne 0x4eaad5
        __asm _emit 0x75
        __asm _emit 0x14
        push 2aah
        push 674180h
        ; Exact mapped bytes E8 70 E2 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xe2
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4eaad5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4eaab8
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 20h]
        cmp dword ptr [ecx + 2ch], 0
        ; Exact mapped bytes 75 14: jne 0x4eaaf8
        __asm _emit 0x75
        __asm _emit 0x14
        push 2abh
        push 674180h
        ; Exact mapped bytes E8 4D E2 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xe2
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4eaaf8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4eaadb
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 20h]
        cmp dword ptr [eax + 28h], 0
        ; Exact mapped bytes 75 14: jne 0x4eab1b
        __asm _emit 0x75
        __asm _emit 0x14
        push 2ach
        push 674180h
        ; Exact mapped bytes E8 2A E2 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xe2
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4eab1b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4eaafe
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + 24h]
        cmp ecx, dword ptr [eax + 2ch]
        ; Exact mapped bytes 0F 86 BF 00 00 00: jbe 0x4eabf2
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7E 35: jle 0x4eab6e
        __asm _emit 0x7e
        __asm _emit 0x35
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 24h]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 2ch]
        push eax
        ; Exact mapped bytes E8 10 B1 F7 FF: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xb1
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 2ch]
        mov dword ptr [ecx + 24h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 2ch]
        add edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 28h], edx
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 1ch]
        sub eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 2ch]
        add edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + 20h]
        mov eax, dword ptr [ebp - 20h]
        mov edx, dword ptr [eax + 20h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 3C: call dword ptr [eax + 0x3c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x3c
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 14h]
        add edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 18h]
        sub eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 76 0E: jbe 0x4eabd7
        __asm _emit 0x76
        __asm _emit 0x0e
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 76 08: jbe 0x4eabd7
        __asm _emit 0x76
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 14h]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 72 B5: jb 0x4eab8c
        __asm _emit 0x72
        __asm _emit 0xb5
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 2ch]
        mov dword ptr [edx + 24h], ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 2ch]
        add eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 28h], eax
        ; Exact mapped bytes E9 81 00 00 00: jmp 0x4eac78
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 19: je 0x4eac16
        __asm _emit 0x74
        __asm _emit 0x19
        push 1
        mov edx, dword ptr [ebp - 4]
        neg edx
        push edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 20h]
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 20h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 30: call dword ptr [edx + 0x30]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x30
        mov eax, dword ptr [ebp - 20h]
        add eax, 28h
        push eax
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 2ch
        push ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ecx + 20h]
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 20h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 58: call dword ptr [edx + 0x58]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x58
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [eax + 28h]
        sub edx, dword ptr [ecx + 2ch]
        cmp dword ptr [ebp - 1ch], edx
        ; Exact mapped bytes 74 14: je 0x4eac66
        __asm _emit 0x74
        __asm _emit 0x14
        push 2d1h
        push 674180h
        ; Exact mapped bytes E8 DF E0 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xe0
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4eac66
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x4eac41
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 2ch]
        mov dword ptr [ecx + 24h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ecx + 28h]
        sub eax, dword ptr [edx + 24h]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 73 09: jae 0x4eac92
        __asm _emit 0x73
        __asm _emit 0x09
        push 0
        push 3
        ; Exact mapped bytes E8 97 0E 00 00: call 0x4ebb29
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
