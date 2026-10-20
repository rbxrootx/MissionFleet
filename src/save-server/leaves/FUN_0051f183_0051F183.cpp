// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051F183 .. +0x142 bytes.
extern "C" __declspec(naked) void FUN_0051f183_0051F183() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x51f1a6
        __asm _emit 0x75
        __asm _emit 0x11
        push 57h
        push 6792bch
        ; Exact mapped bytes E8 9F 9B 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51f1a6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x51f18f
        __asm _emit 0x75
        __asm _emit 0xe3
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 74h], 0
        ; Exact mapped bytes 75 11: jne 0x51f1c6
        __asm _emit 0x75
        __asm _emit 0x11
        push 59h
        push 6792bch
        ; Exact mapped bytes E8 7F 9B 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51f1c6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x51f1ac
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 6F: jne 0x51f241
        __asm _emit 0x75
        __asm _emit 0x6f
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x51f1e4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 4
        ; Exact mapped bytes 7D 57: jge 0x51f241
        __asm _emit 0x7d
        __asm _emit 0x57
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx*8 + 63ae4ch]
        and edx, 0f000h
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 64h]
        and ecx, 0f000h
        cmp edx, ecx
        ; Exact mapped bytes 75 35: jne 0x51f23f
        __asm _emit 0x75
        __asm _emit 0x35
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx*8 + 63ae48h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 20 55 FF FF: call 0x51473d
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x55
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp + 0ch], eax
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 11: jne 0x51f237
        __asm _emit 0x75
        __asm _emit 0x11
        push 63h
        push 6792bch
        ; Exact mapped bytes E8 0E 9B 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51f237
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E3: jne 0x51f220
        __asm _emit 0x75
        __asm _emit 0xe3
        ; Exact mapped bytes EB 02: jmp 0x51f241
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 9A: jmp 0x51f1db
        __asm _emit 0xeb
        __asm _emit 0x9a
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 11: jne 0x51f258
        __asm _emit 0x75
        __asm _emit 0x11
        push 6ah
        push 6792bch
        ; Exact mapped bytes E8 ED 9A 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51f258
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E3: jne 0x51f241
        __asm _emit 0x75
        __asm _emit 0xe3
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 6ch
        ; Exact mapped bytes E8 AC 2B FA FF: call 0x4c1e1b
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x2b
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x51f284
        __asm _emit 0x75
        __asm _emit 0x11
        push 6bh
        push 6792bch
        ; Exact mapped bytes E8 C1 9A 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51f284
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D4: jne 0x51f25e
        __asm _emit 0x75
        __asm _emit 0xd4
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 6ch]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 11: je 0x51f2a6
        __asm _emit 0x74
        __asm _emit 0x11
        push 6ch
        push 6792bch
        ; Exact mapped bytes E8 9F 9A 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51f2a6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DE: jne 0x51f28a
        __asm _emit 0x75
        __asm _emit 0xde
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 63 96 FE FF: call 0x50891f
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x96
        __asm _emit 0xfe
        __asm _emit 0xff
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
