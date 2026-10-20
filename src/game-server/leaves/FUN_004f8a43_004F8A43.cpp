// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F8A43 .. +0x141 bytes.
extern "C" __declspec(naked) void FUN_004f8a43_004F8A43() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4f8a69
        __asm _emit 0x75
        __asm _emit 0x14
        push 2c8h
        push 5c5b58h
        ; Exact mapped bytes E8 9C BF 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f8a69
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4f8a4f
        __asm _emit 0x75
        __asm _emit 0xe0
        push -1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 B8 73 FD FF: call 0x4cfe32
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x73
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4f8a92
        __asm _emit 0x75
        __asm _emit 0x14
        push 2c9h
        push 5c5b58h
        ; Exact mapped bytes E8 73 BF 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xbf
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f8a92
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D7: jne 0x4f8a6f
        __asm _emit 0x75
        __asm _emit 0xd7
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 0F 84 A0 00 00 00: je 0x4f8b45
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 74 05: je 0x4f8ab3
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 C8 00 00 00: jmp 0x4f8b7b
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 400h
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 0ch]
        ; Exact mapped bytes E8 17 29 04 00: call 0x53b3e1
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x29
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 4]
        and edx, 0fffff6fbh
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 8]
        cmp edx, dword ptr [ecx + 20h]
        ; Exact mapped bytes 72 14: jb 0x4f8afb
        __asm _emit 0x72
        __asm _emit 0x14
        push 2d5h
        push 5c5b58h
        ; Exact mapped bytes E8 0A BF 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xbf
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f8afb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x4f8ad9
        __asm _emit 0x75
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 4]
        or ch, 4
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 0ch]
        ; Exact mapped bytes E8 7D 2B 04 00: call 0x53b6a2
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x2b
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4f8b3d
        __asm _emit 0x75
        __asm _emit 0x14
        push 2d7h
        push 5c5b58h
        ; Exact mapped bytes E8 C8 BE 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xbe
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f8b3d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 BE: jne 0x4f8b01
        __asm _emit 0x75
        __asm _emit 0xbe
        ; Exact mapped bytes EB 36: jmp 0x4f8b7b
        __asm _emit 0xeb
        __asm _emit 0x36
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 14h], 0
        ; Exact mapped bytes 75 14: jne 0x4f8b62
        __asm _emit 0x75
        __asm _emit 0x14
        push 2dbh
        push 5c5b58h
        ; Exact mapped bytes E8 A3 BE 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xbe
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f8b62
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4f8b45
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 14h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes E8 08 E3 00 00: call 0x506e83
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xe3
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
