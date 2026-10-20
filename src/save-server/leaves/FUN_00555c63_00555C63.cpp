// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00555C63 .. +0x17B bytes.
extern "C" __declspec(naked) void FUN_00555c63_00555C63() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 0ch], 0
        push 787h
        push 67c1e0h
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 C2 45 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x45
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x555cbb
        __asm _emit 0x75
        __asm _emit 0x14
        push 788h
        push 67c1e0h
        ; Exact mapped bytes E8 8A 30 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x30
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x555cbb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x555c9e
        __asm _emit 0x75
        __asm _emit 0xdd
        push -1
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 76 D7 F4 FF: call 0x4a3442
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xd7
        __asm _emit 0xf4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x555ce4
        __asm _emit 0x75
        __asm _emit 0x14
        push 789h
        push 67c1e0h
        ; Exact mapped bytes E8 61 30 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x30
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x555ce4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D7: jne 0x555cc1
        __asm _emit 0x75
        __asm _emit 0xd7
        push -1
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 4D D7 F4 FF: call 0x4a3442
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xd7
        __asm _emit 0xf4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x555d0d
        __asm _emit 0x75
        __asm _emit 0x14
        push 78bh
        push 67c1e0h
        ; Exact mapped bytes E8 38 30 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x30
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x555d0d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D7: jne 0x555cea
        __asm _emit 0x75
        __asm _emit 0xd7
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 09: jne 0x555d28
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 36: jmp 0x555d5e
        __asm _emit 0xeb
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 59 02 F1 FF: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x02
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], esp
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 95 78 EF FF: call 0x44d5f0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x78
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 09: jne 0x555d73
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 36: jmp 0x555da9
        __asm _emit 0xeb
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 0E 02 F1 FF: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], esp
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        ; Exact mapped bytes E8 4A 78 EF FF: call 0x44d5f0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x78
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 20h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 20h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 92 D0 00 00 00: call dword ptr [edx + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea esp, [ebp - 30h]
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
