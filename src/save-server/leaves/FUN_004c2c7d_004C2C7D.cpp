// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C2C7D .. +0xC6 bytes.
extern "C" __declspec(naked) void FUN_004c2c7d_004C2C7D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DB 76 01 00: call 0x4da36a
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x76
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 75 48: jne 0x4c2ce0
        __asm _emit 0x75
        __asm _emit 0x48
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 74 14: je 0x4c2cb5
        __asm _emit 0x74
        __asm _emit 0x14
        push 1a1h
        push 67c688h
        ; Exact mapped bytes E8 90 60 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x60
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c2cb5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4c2c98
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 74 14: je 0x4c2cd8
        __asm _emit 0x74
        __asm _emit 0x14
        push 1a2h
        push 67c688h
        ; Exact mapped bytes E8 6D 60 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x60
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c2cd8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4c2cbb
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes EB 5C: jmp 0x4c2d3c
        __asm _emit 0xeb
        __asm _emit 0x5c
        push 1
        push 0ch
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes E8 76 07 FE FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x07
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4c2d08
        __asm _emit 0x75
        __asm _emit 0x14
        push 1a7h
        push 67c688h
        ; Exact mapped bytes E8 3D 60 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x60
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c2d08
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D2: jne 0x4c2ce0
        __asm _emit 0x75
        __asm _emit 0xd2
        push 1
        push 0ch
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        push eax
        ; Exact mapped bytes E8 48 07 FE FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x07
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4c2d36
        __asm _emit 0x75
        __asm _emit 0x14
        push 1a8h
        push 67c688h
        ; Exact mapped bytes E8 0F 60 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x60
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c2d36
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D2: jne 0x4c2d0e
        __asm _emit 0x75
        __asm _emit 0xd2
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
