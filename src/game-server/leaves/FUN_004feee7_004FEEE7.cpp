// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FEEE7 .. +0xF7 bytes.
extern "C" __declspec(naked) void FUN_004feee7_004FEEE7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 0edh
        push 5cb750h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 5A C2 FF FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 4], -1
        ; Exact mapped bytes 75 14: jne 0x4fef23
        __asm _emit 0x75
        __asm _emit 0x14
        push 0eeh
        push 5cb750h
        ; Exact mapped bytes E8 E2 5A 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x5a
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fef23
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4fef06
        __asm _emit 0x75
        __asm _emit 0xdd
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 05: jne 0x4fef34
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 A1 00 00 00: jmp 0x4fefd5
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4fef4e
        __asm _emit 0x75
        __asm _emit 0x14
        push 0f3h
        push 5cb750h
        ; Exact mapped bytes E8 B7 5A 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x5a
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fef4e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4fef34
        __asm _emit 0x75
        __asm _emit 0xe0
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 F3 0E FD FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x0e
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4fef7b
        __asm _emit 0x75
        __asm _emit 0x14
        push 0f4h
        push 5cb750h
        ; Exact mapped bytes E8 8A 5A 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x5a
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fef7b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D3: jne 0x4fef54
        __asm _emit 0x75
        __asm _emit 0xd3
        push 0
        lea ecx, [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 F8 21 5E 00: call dword ptr [0x5e21f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 18: jne 0x4fefb8
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 8]
        add ecx, 0ch
        ; Exact mapped bytes E8 FF 1F 03 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x1f
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 FC 23 5E 00: call dword ptr [0x5e23fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 18 C9 FF FF: call 0x4fb8d0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 15: je 0x4fefd5
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 8]
        add ecx, 0ch
        ; Exact mapped bytes E8 DF 1F 03 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x1f
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        push -1
        push 0dh
        ; Exact mapped bytes E8 DB CA FF FF: call 0x4fbab0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
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
