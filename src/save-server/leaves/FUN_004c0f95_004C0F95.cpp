// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C0F95 .. +0x17E bytes.
extern "C" __declspec(naked) void FUN_004c0f95_004C0F95() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58d138h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 20h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 1ch], ecx
        push 146h
        push 6746f0h
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 97 92 01 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x4c0fe3
        __asm _emit 0x75
        __asm _emit 0x14
        push 147h
        push 6746f0h
        ; Exact mapped bytes E8 62 7D 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x7d
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c0fe3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4c0fc9
        __asm _emit 0x75
        __asm _emit 0xe0
        push 674700h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 9A 91 01 00: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x91
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4c100e
        __asm _emit 0x75
        __asm _emit 0x14
        push 148h
        push 6746f0h
        ; Exact mapped bytes E8 37 7D 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x7d
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c100e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4c0fe9
        __asm _emit 0x75
        __asm _emit 0xd5
        push 149h
        push 6746f0h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 39 92 01 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 14: jge 0x4c1041
        __asm _emit 0x7d
        __asm _emit 0x14
        push 14ah
        push 6746f0h
        ; Exact mapped bytes E8 04 7D 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x7d
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c1041
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4c1027
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 93 56 06 00: call 0x5266e2
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x56
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 8E A9 00 00 00: jle 0x4c1100
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 83 56 06 00: call 0x5266e2
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x56
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        push 0
        lea edx, [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 B0 56 06 00: call 0x52671e
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x56
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 B7 FD FF FF: call 0x4c0e45
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 4F B8 00 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x4c10af
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 2B 56 06 00: call 0x5266e2
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x56
        __asm _emit 0x06
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 7D 44: jge 0x4c1100
        __asm _emit 0x7d
        __asm _emit 0x44
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        lea edx, [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 52 56 06 00: call 0x52671e
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x56
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 2ch], eax
        mov dword ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 EA 56 06 00: call 0x5267d9
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x56
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 EE B7 00 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB A6: jmp 0x4c10a6
        __asm _emit 0xeb
        __asm _emit 0xa6
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
