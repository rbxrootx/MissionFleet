// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00579F06 .. +0x1B7 bytes.
extern "C" __declspec(naked) void FUN_00579f06_00579F06() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58fca1h
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
        push ecx
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], esp
        mov dword ptr [ebp - 28h], ecx
        push 221h
        push 67d108h
        mov eax, dword ptr [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 22 03 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x03
        __asm _emit 0xf6
        __asm _emit 0xff
        push 1
        push 0ch
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 1B 95 F2 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x95
        __asm _emit 0xf2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x579f63
        __asm _emit 0x75
        __asm _emit 0x14
        push 222h
        push 67d108h
        ; Exact mapped bytes E8 E2 ED FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xed
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x579f63
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x579f3e
        __asm _emit 0x75
        __asm _emit 0xd5
        lea eax, [ebp - 20h]
        push eax
        push 1
        push 0
        ; Exact mapped bytes FF 15 2C C3 68 00: call dword ptr [0x68c32c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 09: je 0x579f89
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 71 1F FD FF: call 0x54befa
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x1f
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 14: jne 0x579fa3
        __asm _emit 0x75
        __asm _emit 0x14
        push 228h
        push 67d108h
        ; Exact mapped bytes E8 A2 ED FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xed
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x579fa3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x579f89
        __asm _emit 0x75
        __asm _emit 0xe0
        lea eax, [ebp - 1ch]
        push eax
        push 0
        push 1012h
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes FF 15 B4 C2 68 00: call dword ptr [0x68c2b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 33: je 0x579ffa
        __asm _emit 0x74
        __asm _emit 0x33
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x579feb
        __asm _emit 0x74
        __asm _emit 0x14
        push 22fh
        push 67d108h
        ; Exact mapped bytes E8 5A ED FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xed
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x579feb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D6: jne 0x579fc7
        __asm _emit 0x75
        __asm _emit 0xd6
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 00 1F FD FF: call 0x54befa
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x1f
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x57a014
        __asm _emit 0x75
        __asm _emit 0x14
        push 232h
        push 67d108h
        ; Exact mapped bytes E8 31 ED FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xed
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x57a014
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x579ffa
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 A9 EA FF FF: call 0x578acb
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx + 7ch], 0
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax + 80h], 0
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 90 A8 00 00 00: call dword ptr [eax + 0xa8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 1C 5C FD FF: call 0x54fc7b
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x5c
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes E9 9F 00 00 00: jmp 0x57a103
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 636e20h
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 1F 01 F6 FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x01
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x57a089
        __asm _emit 0x75
        __asm _emit 0x14
        push 23eh
        push 67d108h
        ; Exact mapped bytes E8 BC EC FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xec
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x57a089
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x57a064
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x57a0b3
        __asm _emit 0x74
        __asm _emit 0x14
        push 241h
        push 67d108h
        ; Exact mapped bytes E8 92 EC FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xec
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x57a0b3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D6: jne 0x57a08f
        __asm _emit 0x75
        __asm _emit 0xd6
        mov eax, dword ptr [ebp - 20h]
        push eax
    }
}
