// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584931F0 .. +0x130 bytes.
extern "C" __declspec(naked) void FUN_584931f0_584931F0() {
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
        ; Exact mapped bytes 75 56: jne 0x58493277
        __asm _emit 0x75
        __asm _emit 0x56
        push 14h
        ; Exact mapped bytes E8 DC DD 39 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xdd
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 11: je 0x5849324c
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 99 E7 FF FF: call 0x584919e0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x58493253
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
        ; Exact mapped bytes E9 89 00 00 00: jmp 0x58493300
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 2ch], edx
        push 14h
        ; Exact mapped bytes E8 7D DD 39 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xdd
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 11: je 0x584932ab
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 3A E7 FF FF: call 0x584919e0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x584932b2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 28h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 B5 C1 00 00: call 0x5849f480
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes E8 D9 8D FF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x8d
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 41 C2 00 00: call 0x5849f530
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 8]
        ; Exact mapped bytes E8 B6 8D FF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x8d
        __asm _emit 0xff
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
