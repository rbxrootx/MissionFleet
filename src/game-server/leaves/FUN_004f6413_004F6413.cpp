// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F6413 .. +0xC6 bytes.
extern "C" __declspec(naked) void FUN_004f6413_004F6413() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 19: jne 0x4f643b
        __asm _emit 0x75
        __asm _emit 0x19
        push 5c5978h
        push 5c59c0h
        ; Exact mapped bytes E8 E4 97 FD FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x97
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes E9 95 00 00 00: jmp 0x4f64d0
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 12: je 0x4f6453
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [ebp + 10h], 1
        ; Exact mapped bytes 74 0C: je 0x4f6453
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 06: je 0x4f6453
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 10h], 5
        ; Exact mapped bytes 75 04: jne 0x4f6457
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 79: jmp 0x4f64d0
        __asm _emit 0xeb
        __asm _emit 0x79
        cmp dword ptr [ebp + 10h], 2
        ; Exact mapped bytes 75 13: jne 0x4f6470
        __asm _emit 0x75
        __asm _emit 0x13
        push 2
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 A9 08 01 00: call 0x506d11
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x4f6470
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 60: jmp 0x4f64d0
        __asm _emit 0xeb
        __asm _emit 0x60
        lea ecx, [ebp - 0ch]
        push ecx
        push 0ch
        mov edx, dword ptr [ebp + 14h]
        push edx
        ; Exact mapped bytes FF 15 60 21 5E 00: call dword ptr [0x5e2160]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4f6498
        __asm _emit 0x75
        __asm _emit 0x14
        push 0bffh
        push 5c5574h
        ; Exact mapped bytes E8 6D E5 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xe5
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f6498
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D2: jne 0x4f6470
        __asm _emit 0x75
        __asm _emit 0xd2
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 5C 20 5E 00: call dword ptr [0x5e205c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x20
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp dword ptr [ebp + 18h], -1
        ; Exact mapped bytes 75 0B: jne 0x4f64bd
        __asm _emit 0x75
        __asm _emit 0x0b
        push 8
        ; Exact mapped bytes FF 15 80 25 5E 00: call dword ptr [0x5e2580]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp + 18h], eax
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 58 20 5E 00: call dword ptr [0x5e2058]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x20
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, 1
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
