// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00552C44 .. +0x1C9 bytes.
extern "C" __declspec(naked) void FUN_00552c44_00552C44() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 34h], ecx
        mov dword ptr [ebp - 30h], 0
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 2ch], 0
        push 284h
        push 67c1e0h
        mov eax, dword ptr [ebp - 34h]
        push eax
        ; Exact mapped bytes E8 E1 75 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x75
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 34h]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 74 14: je 0x552c9c
        __asm _emit 0x74
        __asm _emit 0x14
        push 285h
        push 67c1e0h
        ; Exact mapped bytes E8 A9 60 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x60
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x552c9c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x552c7f
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 34h]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x552cbf
        __asm _emit 0x75
        __asm _emit 0x14
        push 286h
        push 67c1e0h
        ; Exact mapped bytes E8 86 60 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x60
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x552cbf
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x552ca2
        __asm _emit 0x75
        __asm _emit 0xdd
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 74 25: je 0x552cf0
        __asm _emit 0x74
        __asm _emit 0x25
        push 0
        push 14h
        mov edx, dword ptr [ebp + 18h]
        push edx
        ; Exact mapped bytes E8 8E 07 F5 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x07
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x552cf0
        __asm _emit 0x75
        __asm _emit 0x14
        push 288h
        push 67c1e0h
        ; Exact mapped bytes E8 55 60 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x60
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x552cf0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CF: jne 0x552cc5
        __asm _emit 0x75
        __asm _emit 0xcf
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 B4 ED FF FF: call 0x551ab2
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ecx + 28h], eax
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 90 D8 00 00 00: call dword ptr [eax + 0xd8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 34h]
        cmp dword ptr [ecx + 34h], 0
        ; Exact mapped bytes 75 14: jne 0x552d2f
        __asm _emit 0x75
        __asm _emit 0x14
        push 28dh
        push 67c1e0h
        ; Exact mapped bytes E8 16 60 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x60
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x552d2f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x552d12
        __asm _emit 0x75
        __asm _emit 0xdd
        lea eax, [ebp - 24h]
        push eax
        ; Exact mapped bytes 66 8B 4D 14: mov cx, word ptr [ebp + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x14
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        ; Exact mapped bytes E8 A7 98 FF FF: call 0x54c5ee
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x98
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp + 18h], eax
        mov eax, dword ptr [ebp - 34h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 92 C8 00 00 00: call dword ptr [edx + 0xc8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 75 09: jne 0x552d70
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 38h], 0
        ; Exact mapped bytes EB 36: jmp 0x552da6
        __asm _emit 0xeb
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp - 30h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 11 32 F1 FF: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x32
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], esp
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        ; Exact mapped bytes E8 4D A8 EF FF: call 0x44d5f0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xa8
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        mov edx, dword ptr [ebp - 34h]
        add edx, 20h
        push edx
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [eax + 34h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        push 640d30h
        mov edx, dword ptr [ebp - 38h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes FF 15 40 C2 68 00: call dword ptr [0x68c240]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 90 CC 00 00 00: call dword ptr [eax + 0xcc]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        push 29ah
        push 67c1e0h
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        ; Exact mapped bytes E8 62 74 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x74
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 28h]
        lea esp, [ebp - 48h]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
