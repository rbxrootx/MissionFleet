// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E7BB3 .. +0xD1 bytes.
extern "C" __declspec(naked) void FUN_004e7bb3_004E7BB3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x4e7bdc
        __asm _emit 0x75
        __asm _emit 0x14
        push 2e7h
        push 6733e0h
        ; Exact mapped bytes E8 69 11 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e7bdc
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4e7bbf
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 2C B6 68 00: call dword ptr [0x68b62c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ecx + 4]
        cmp eax, dword ptr [edx + 8]
        ; Exact mapped bytes 74 6C: je 0x4e7c78
        __asm _emit 0x74
        __asm _emit 0x6c
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 3A A2 04 00: call 0x531e4e
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xa2
        __asm _emit 0x04
        __asm _emit 0x00
        lea ecx, [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 9C B4 68 00: call dword ptr [0x68b49c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xb4
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4e7c3d
        __asm _emit 0x75
        __asm _emit 0x14
        push 2ech
        push 6733e0h
        ; Exact mapped bytes E8 08 11 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e7c3d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D1: jne 0x4e7c14
        __asm _emit 0x75
        __asm _emit 0xd1
        push 0
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        push edx
        ; Exact mapped bytes FF 15 00 B6 68 00: call dword ptr [0x68b600]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4e7c72
        __asm _emit 0x75
        __asm _emit 0x14
        push 2edh
        push 6733e0h
        ; Exact mapped bytes E8 D3 10 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x10
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e7c72
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CB: jne 0x4e7c43
        __asm _emit 0x75
        __asm _emit 0xcb
        mov eax, dword ptr [ebp - 4]
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
