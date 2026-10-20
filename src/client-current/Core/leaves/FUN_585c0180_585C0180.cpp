// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585C0180 .. +0x130 bytes.
extern "C" __declspec(naked) void FUN_585c0180_585C0180() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887d933h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 28h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 56: jne 0x585c0207
        __asm _emit 0x75
        __asm _emit 0x56
        push 14h
        ; Exact mapped bytes E8 4C 0E 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x0e
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 11: je 0x585c01dc
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 99 93 FF FF: call 0x585b9570
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x93
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x585c01e3
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 1ch], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [edx + 4], eax
        ; Exact mapped bytes E9 89 00 00 00: jmp 0x585c0290
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 2ch], edx
        push 14h
        ; Exact mapped bytes E8 ED 0D 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x0d
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 11: je 0x585c023b
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 3A 93 FF FF: call 0x585b9570
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x93
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x585c0242
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 28h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 25 F2 ED FF: call 0x5849f480
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xf2
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes E8 49 BE EC FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xbe
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 B1 F2 ED FF: call 0x5849f530
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xf2
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 8]
        ; Exact mapped bytes E8 26 BE EC FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xbe
        __asm _emit 0xec
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 8], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0ch]
        add ecx, 1
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
