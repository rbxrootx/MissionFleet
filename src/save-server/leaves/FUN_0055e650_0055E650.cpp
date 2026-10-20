// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055E650 .. +0x168 bytes.
extern "C" __declspec(naked) void FUN_0055e650_0055E650() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        push 2b9h
        push 67b3b8h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 F1 BB F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xbb
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 64 FF FF FF: call 0x55e5db
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 1
        ; Exact mapped bytes 74 53: je 0x55e6d9
        __asm _emit 0x74
        __asm _emit 0x53
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 74 05: je 0x55e691
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 91 00 00 00: jmp 0x55e722
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F BE 82 D0 00 00 00: movsx eax, byte ptr [edx + 0xd0]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x82
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x55e6b3
        __asm _emit 0x75
        __asm _emit 0x14
        push 2c3h
        push 67b3b8h
        ; Exact mapped bytes E8 92 A6 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xa6
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55e6b3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D8: jne 0x55e691
        __asm _emit 0x75
        __asm _emit 0xd8
        push 0
        push 0
        push 1
        mov edx, dword ptr [ebp - 0ch]
        add edx, 0d0h
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3C 47 FF FF: call 0x552e0d
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x47
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E9 84 00 00 00: jmp 0x55e75d
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F BE 88 D0 00 00 00: movsx ecx, byte ptr [eax + 0xd0]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x88
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 75 14: jne 0x55e6fb
        __asm _emit 0x75
        __asm _emit 0x14
        push 2c8h
        push 67b3b8h
        ; Exact mapped bytes E8 4A A6 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xa6
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55e6fb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x55e6d9
        __asm _emit 0x75
        __asm _emit 0xd8
        push 0
        push 0
        push 1
        push 640d20h
        mov eax, dword ptr [ebp - 0ch]
        add eax, 0d0h
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 27 45 FF FF: call 0x552c44
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 3B: jmp 0x55e75d
        __asm _emit 0xeb
        __asm _emit 0x3b
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 14: je 0x55e73c
        __asm _emit 0x74
        __asm _emit 0x14
        push 2cdh
        push 67b3b8h
        ; Exact mapped bytes E8 09 A6 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xa6
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55e73c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x55e722
        __asm _emit 0x75
        __asm _emit 0xe0
        push 0
        push 0
        push 1
        mov edx, dword ptr [ebp - 0ch]
        add edx, 84h
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 78 48 FF FF: call 0x552fd2
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 49: je 0x55e7ac
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 27 1F 00 00: call 0x560692
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 4
        ; Exact mapped bytes 75 3C: jne 0x55e7ac
        __asm _emit 0x75
        __asm _emit 0x3c
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 0cch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C2 64 FF FF: call 0x554c44
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 19: jne 0x55e79f
        __asm _emit 0x75
        __asm _emit 0x19
        push 67b494h
        push 67b4cch
        ; Exact mapped bytes E8 80 1E F4 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x1e
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 8
        mov eax, 1
        ; Exact mapped bytes EB 10: jmp 0x55e7af
        __asm _emit 0xeb
        __asm _emit 0x10
        push 4
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 50 5C: call dword ptr [eax + 0x5c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x5c
        mov eax, dword ptr [ebp - 4]
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
