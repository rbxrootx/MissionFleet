// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050687F .. +0x378 bytes.
extern "C" __declspec(naked) void FUN_0050687f_0050687F() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57d4d6h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 30h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 34h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 25: je 0x5068cb
        __asm _emit 0x74
        __asm _emit 0x25
        push 0
        push 18h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 A3 95 FC FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x95
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5068cb
        __asm _emit 0x75
        __asm _emit 0x14
        push 108h
        push 5c79a0h
        ; Exact mapped bytes E8 3A E1 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xe1
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5068cb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CF: jne 0x5068a0
        __asm _emit 0x75
        __asm _emit 0xcf
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 23 B0 02 00: call 0x5318fc
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xb0
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5068f1
        __asm _emit 0x75
        __asm _emit 0x14
        push 109h
        push 5c79a0h
        ; Exact mapped bytes E8 14 E1 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xe1
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5068f1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x5068d1
        __asm _emit 0x75
        __asm _emit 0xda
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 24: je 0x506921
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 8], 0ffffh
        ; Exact mapped bytes 75 18: jne 0x506921
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        push edx
        push 5c79e4h
        ; Exact mapped bytes E8 FC 92 FC FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x92
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes E8 A8 94 FC FF: call 0x4cfdc9
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x94
        __asm _emit 0xfc
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 5E FC FF FF: call 0x506589
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 E3 B3 02 00: call 0x531d1a
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xb3
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        and ecx, 0ffffh
        cmp ecx, 7fffh
        ; Exact mapped bytes 75 0E: jne 0x506956
        __asm _emit 0x75
        __asm _emit 0x0e
        lea edx, [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 21 B4 02 00: call 0x531d75
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xb4
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 21: jmp 0x506977
        __asm _emit 0xeb
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 1ch]
        and eax, 0ffffh
        and eax, 8000h
        shl eax, 10h
        mov ecx, dword ptr [ebp - 1ch]
        and ecx, 0ffffh
        and ch, 7fh
        or eax, ecx
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp - 14h]
        and edx, 80000000h
        test edx, edx
        ; Exact mapped bytes 75 28: jne 0x5069ac
        __asm _emit 0x75
        __asm _emit 0x28
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 13: jne 0x50699d
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 34h]
        add ecx, 10h
        ; Exact mapped bytes E8 15 A6 02 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xa6
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        push 5
        ; Exact mapped bytes E8 0C F8 FF FF: call 0x5061a9
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax], ecx
        xor eax, eax
        ; Exact mapped bytes E9 38 02 00 00: jmp 0x506be4
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        and edx, 0ffffh
        cmp edx, 0ffffh
        ; Exact mapped bytes 0F 85 1B 01 00 00: jne 0x506adc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        ; Exact mapped bytes E8 F2 DF FF FF: call 0x5049c0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 13: jne 0x5069ea
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 34h]
        add ecx, 10h
        ; Exact mapped bytes E8 C8 A5 02 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xa5
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        push 6
        ; Exact mapped bytes E8 BF F7 FF FF: call 0x5061a9
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 8]
        and eax, 7fffffffh
        cmp eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F 84 A4 00 00 00: je 0x506aa2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 8]
        and edx, 80000000h
        test edx, edx
        ; Exact mapped bytes 75 15: jne 0x506a23
        __asm _emit 0x75
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 34h]
        add ecx, 10h
        ; Exact mapped bytes E8 91 A5 02 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xa5
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        push 7
        ; Exact mapped bytes E8 88 F7 FF FF: call 0x5061a9
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 7F: jmp 0x506aa2
        __asm _emit 0xeb
        __asm _emit 0x7f
        mov eax, dword ptr [ebp - 34h]
        cmp dword ptr [eax + 38h], 0
        ; Exact mapped bytes 75 4D: jne 0x506a79
        __asm _emit 0x75
        __asm _emit 0x4d
        push 13dh
        push 5c79a0h
        push 1ch
        ; Exact mapped bytes E8 22 66 FE FF: call 0x4ed05f
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x66
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 0F: je 0x506a5c
        __asm _emit 0x74
        __asm _emit 0x0f
        push 0ah
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 A9 46 FE FF: call 0x4eb100
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x46
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x506a63
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 2ch], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [edx + 38h], eax
        push 13eh
        push 5c79a0h
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ecx + 38h]
        push edx
        ; Exact mapped bytes E8 D1 46 FF FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 34h]
        mov ecx, dword ptr [edx + 38h]
        ; Exact mapped bytes E8 61 CD 02 00: call 0x533803
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xcd
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 C6 F7 FF FF: call 0x506270
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ecx + 30h]
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ecx + 30h]
        add edx, 1
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [eax + 30h], edx
        mov ecx, dword ptr [ebp - 34h]
        mov ecx, dword ptr [ecx + 34h]
        ; Exact mapped bytes E8 BC E4 FD FF: call 0x4e4f93
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xe4
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes E9 B5 00 00 00: jmp 0x506b91
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        and edx, 7fffffffh
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 10: je 0x506afe
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [eax + 34h]
        ; Exact mapped bytes E8 F9 BA 02 00: call 0x5325f2
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xba
        __asm _emit 0x02
        __asm _emit 0x00
        cmp dword ptr [ebp - 24h], eax
        ; Exact mapped bytes 76 13: jbe 0x506b11
        __asm _emit 0x76
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 34h]
        add ecx, 10h
        ; Exact mapped bytes E8 A1 A4 02 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        push 5
        ; Exact mapped bytes E8 98 F6 FF FF: call 0x5061a9
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp - 34h]
        mov ecx, dword ptr [edx + 34h]
        ; Exact mapped bytes E8 FD BA 02 00: call 0x53261d
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xba
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 14: jne 0x506b3d
        __asm _emit 0x75
        __asm _emit 0x14
        push 14eh
        push 5c79a0h
        ; Exact mapped bytes E8 C8 DE 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xde
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x506b3d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x506b23
        __asm _emit 0x75
        __asm _emit 0xe0
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 10h], 0
        mov ecx, dword ptr [ebp - 34h]
        cmp dword ptr [ecx + 38h], 0
        ; Exact mapped bytes 74 22: je 0x506b7c
        __asm _emit 0x74
        __asm _emit 0x22
        lea edx, [ebp - 28h]
        push edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        mov ecx, dword ptr [ecx + 38h]
        ; Exact mapped bytes E8 43 4A FE FF: call 0x4eb5b0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x4a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 06: je 0x506b7c
        __asm _emit 0x74
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 0F: jne 0x506b91
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 8]
        and ecx, 7fffffffh
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 23: je 0x506bba
        __asm _emit 0x74
        __asm _emit 0x23
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 87 48 FF FF: call 0x4fb42a
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 13: jne 0x506bba
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 34h]
        add ecx, 10h
        ; Exact mapped bytes E8 F8 A3 02 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xa3
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        push 6
        ; Exact mapped bytes E8 EF F5 FF FF: call 0x5061a9
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 0A: je 0x506bca
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB 09: jmp 0x506bd3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0ch], eax
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 08: je 0x506be1
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
