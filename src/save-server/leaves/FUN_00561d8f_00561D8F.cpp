// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00561D8F .. +0x213 bytes.
extern "C" __declspec(naked) void FUN_00561d8f_00561D8F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        push 1
        push 4
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 BE 16 F4 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x16
        __asm _emit 0xf4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x561dc0
        __asm _emit 0x75
        __asm _emit 0x14
        push 218h
        push 67c6f0h
        ; Exact mapped bytes E8 85 6F FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x6f
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x561dc0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x561d9b
        __asm _emit 0x75
        __asm _emit 0xd5
        push 1
        push 4
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 93 16 F4 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x16
        __asm _emit 0xf4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x561deb
        __asm _emit 0x75
        __asm _emit 0x14
        push 219h
        push 67c6f0h
        ; Exact mapped bytes E8 5A 6F FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x6f
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x561deb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x561dc6
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 25: je 0x561e1c
        __asm _emit 0x74
        __asm _emit 0x25
        push 1
        push 14h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 62 16 F4 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x16
        __asm _emit 0xf4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x561e1c
        __asm _emit 0x75
        __asm _emit 0x14
        push 21bh
        push 67c6f0h
        ; Exact mapped bytes E8 29 6F FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x6f
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x561e1c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CF: jne 0x561df1
        __asm _emit 0x75
        __asm _emit 0xcf
        push 21ch
        push 67c6f0h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 2B 84 F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x84
        __asm _emit 0xf7
        __asm _emit 0xff
        push 21dh
        push 67c6f0h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 54h]
        push edx
        ; Exact mapped bytes E8 15 84 F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 54h]
        ; Exact mapped bytes E8 CF 0E F7 FF: call 0x4d2d25
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x0e
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx], eax
        push 221h
        push 67c6f0h
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 F0 83 F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x83
        __asm _emit 0xf7
        __asm _emit 0xff
        push 636f38h
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes E8 11 83 F7 FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x83
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x561e97
        __asm _emit 0x75
        __asm _emit 0x14
        push 222h
        push 67c6f0h
        ; Exact mapped bytes E8 AE 6E FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x6e
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x561e97
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D3: jne 0x561e70
        __asm _emit 0x75
        __asm _emit 0xd3
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 54h]
        ; Exact mapped bytes E8 CA 0B F7 FF: call 0x4d2a72
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x0b
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx]
        ; Exact mapped bytes 74 4A: je 0x561eff
        __asm _emit 0x74
        __asm _emit 0x4a
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax], ecx
        push 229h
        push 67c6f0h
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 8E 83 F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x83
        __asm _emit 0xf7
        __asm _emit 0xff
        push 636f38h
        mov ecx, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes E8 AF 82 F7 FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x82
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x561ef9
        __asm _emit 0x75
        __asm _emit 0x14
        push 22ah
        push 67c6f0h
        ; Exact mapped bytes E8 4C 6E FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x6e
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x561ef9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D3: jne 0x561ed2
        __asm _emit 0x75
        __asm _emit 0xd3
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x561f94
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 09 49 FF FF: call 0x55681a
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x49
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 EA F5 FC FF: call 0x531502
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xf5
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0B: je 0x561f2c
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 28h]
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes EB 07: jmp 0x561f33
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 13: je 0x561f52
        __asm _emit 0x74
        __asm _emit 0x13
        push 0
        push 0
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 34 BC 68 00: call dword ptr [0x68bc34]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x561f59
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 10h], edx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + 10h]
        neg ecx
        sbb ecx, ecx
        and ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edx + 0ch], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ecx + 1ch]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        cmp dword ptr [ecx], 0
        setne dl
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax + 4], edx
        mov eax, 1
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
