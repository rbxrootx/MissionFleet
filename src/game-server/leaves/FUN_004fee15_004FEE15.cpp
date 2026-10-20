// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FEE15 .. +0xD2 bytes.
extern "C" __declspec(naked) void FUN_004fee15_004FEE15() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 0dbh
        push 5cb750h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 2C C3 FF FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 4], -1
        ; Exact mapped bytes 75 14: jne 0x4fee51
        __asm _emit 0x75
        __asm _emit 0x14
        push 0dch
        push 5cb750h
        ; Exact mapped bytes E8 B4 5B 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x5b
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fee51
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4fee34
        __asm _emit 0x75
        __asm _emit 0xdd
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 04: jne 0x4fee61
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 7D: jmp 0x4feede
        __asm _emit 0xeb
        __asm _emit 0x7d
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4fee7b
        __asm _emit 0x75
        __asm _emit 0x14
        push 0e1h
        push 5cb750h
        ; Exact mapped bytes E8 8A 5B 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x5b
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fee7b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4fee61
        __asm _emit 0x75
        __asm _emit 0xe0
        push 1
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 C6 0F FD FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4feea8
        __asm _emit 0x75
        __asm _emit 0x14
        push 0e2h
        push 5cb750h
        ; Exact mapped bytes E8 5D 5B 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x5b
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4feea8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D3: jne 0x4fee81
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
        ; Exact mapped bytes FF 15 F0 21 5E 00: call dword ptr [0x5e21f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x4feedb
        __asm _emit 0x75
        __asm _emit 0x0e
        push 0
        ; Exact mapped bytes FF 15 FC 23 5E 00: call dword ptr [0x5e23fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 F5 C9 FF FF: call 0x4fb8d0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
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
