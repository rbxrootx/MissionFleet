// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C0E9A .. +0xFB bytes.
extern "C" __declspec(naked) void FUN_004c0e9a_004C0E9A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 134h
        push 6746f0h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 A7 93 01 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 14: jge 0x4c0ed3
        __asm _emit 0x7d
        __asm _emit 0x14
        push 135h
        push 6746f0h
        ; Exact mapped bytes E8 72 7E 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x7e
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c0ed3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4c0eb9
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7D 14: jge 0x4c0ef3
        __asm _emit 0x7d
        __asm _emit 0x14
        push 136h
        push 6746f0h
        ; Exact mapped bytes E8 52 7E 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x7e
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c0ef3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4c0ed9
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 8]
        cmp eax, dword ptr [ecx + 8]
        ; Exact mapped bytes 7E 14: jle 0x4c0f1b
        __asm _emit 0x7e
        __asm _emit 0x14
        push 137h
        push 6746f0h
        ; Exact mapped bytes E8 2A 7E 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x7e
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c0f1b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x4c0ef9
        __asm _emit 0x75
        __asm _emit 0xd8
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        sub edx, eax
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp + 8]
        lea ecx, [edx + eax*4]
        push ecx
        ; Exact mapped bytes E8 35 F6 FF FF: call 0x4c057d
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 2C: je 0x4c0f7d
        __asm _emit 0x74
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 4]
        shl edx, 2
        push edx
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4]
        lea eax, [edx + eax*4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp + 8]
        lea ecx, [edx + eax*4]
        push ecx
        ; Exact mapped bytes E8 E6 4C FA FF: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x4c
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        sub eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 8], eax
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
