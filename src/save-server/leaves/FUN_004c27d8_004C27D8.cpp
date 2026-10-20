// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C27D8 .. +0x109 bytes.
extern "C" __declspec(naked) void FUN_004c27d8_004C27D8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        push 106h
        push 67c688h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 69 7A 01 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x4c280e
        __asm _emit 0x75
        __asm _emit 0x11
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 99 FB FF FF: call 0x4c23a2
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 CA 00 00 00: jmp 0x4c28d8
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], edx
        push 1
        push 0ch
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 45 0C FE FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x0c
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4c2839
        __asm _emit 0x75
        __asm _emit 0x14
        push 10dh
        push 67c688h
        ; Exact mapped bytes E8 0C 65 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x65
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c2839
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x4c2814
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 6A F9 FF FF: call 0x4c21bb
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 74 3A: je 0x4c289f
        __asm _emit 0x74
        __asm _emit 0x3a
        push 1
        push 0ch
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 F2 0B FE FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x0b
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4c288c
        __asm _emit 0x75
        __asm _emit 0x14
        push 113h
        push 67c688h
        ; Exact mapped bytes E8 B9 64 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x64
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c288c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D3: jne 0x4c2865
        __asm _emit 0x75
        __asm _emit 0xd3
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + 4], ecx
        ; Exact mapped bytes EB 2E: jmp 0x4c28cd
        __asm _emit 0xeb
        __asm _emit 0x2e
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [edx + 8]
        ; Exact mapped bytes 74 14: je 0x4c28be
        __asm _emit 0x74
        __asm _emit 0x14
        push 118h
        push 67c688h
        ; Exact mapped bytes E8 87 64 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x64
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c28be
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DB: jne 0x4c289f
        __asm _emit 0x75
        __asm _emit 0xdb
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
