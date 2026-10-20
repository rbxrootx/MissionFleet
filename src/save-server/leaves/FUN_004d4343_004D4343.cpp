// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D4343 .. +0xC6 bytes.
extern "C" __declspec(naked) void FUN_004d4343_004D4343() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 19: jne 0x4d436b
        __asm _emit 0x75
        __asm _emit 0x19
        push 671e68h
        push 671eb0h
        ; Exact mapped bytes E8 B4 C2 FC FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xc2
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes E9 95 00 00 00: jmp 0x4d4400
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 12: je 0x4d4383
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [ebp + 10h], 1
        ; Exact mapped bytes 74 0C: je 0x4d4383
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 06: je 0x4d4383
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 10h], 5
        ; Exact mapped bytes 75 04: jne 0x4d4387
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 79: jmp 0x4d4400
        __asm _emit 0xeb
        __asm _emit 0x79
        cmp dword ptr [ebp + 10h], 2
        ; Exact mapped bytes 75 13: jne 0x4d43a0
        __asm _emit 0x75
        __asm _emit 0x13
        push 2
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 39 79 01 00: call 0x4ebcd1
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x4d43a0
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 60: jmp 0x4d4400
        __asm _emit 0xeb
        __asm _emit 0x60
        lea ecx, [ebp - 0ch]
        push ecx
        push 0ch
        mov edx, dword ptr [ebp + 14h]
        push edx
        ; Exact mapped bytes FF 15 8C B6 68 00: call dword ptr [0x68b68c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4d43c8
        __asm _emit 0x75
        __asm _emit 0x14
        push 0bffh
        push 671a64h
        ; Exact mapped bytes E8 7D 49 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x49
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d43c8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D2: jne 0x4d43a0
        __asm _emit 0x75
        __asm _emit 0xd2
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 90 B6 68 00: call dword ptr [0x68b690]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [ebp + 18h], -1
        ; Exact mapped bytes 75 0B: jne 0x4d43ed
        __asm _emit 0x75
        __asm _emit 0x0b
        push 8
        ; Exact mapped bytes FF 15 84 BE 68 00: call dword ptr [0x68be84]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp + 18h], eax
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 94 B6 68 00: call dword ptr [0x68b694]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xb6
        __asm _emit 0x68
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
