// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 322 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5881E2E0 .. +0x142 bytes.
extern "C" __declspec(naked) void FUN_5881e2e0_segment_00() {
    __asm {
        sub esp, 408h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 404h], eax
        mov eax, dword ptr [esp + 410h]
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0cch], 0
        push edi
        mov edi, dword ptr [esp + 414h]
        mov dword ptr [esp + 8], eax
        ; Exact mapped bytes 0F 84 F2 00 00 00: je 0x5881e409
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebp
        mov ebp, dword ptr [esp + 420h]
        test edi, edi
        ; Exact mapped bytes 75 21: jne 0x5881e344
        __asm _emit 0x75
        __asm _emit 0x21
        cmp ebp, -1
        ; Exact mapped bytes 75 1C: jne 0x5881e344
        __asm _emit 0x75
        __asm _emit 0x1c
        mov ecx, dword ptr [esi + 0d14h]
        push 0
        push 0
        push 10101h
        push 0
        push eax
        ; Exact mapped bytes E8 B1 38 F3 FF: call 0x58751bf0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x38
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes E9 C4 00 00 00: jmp 0x5881e408
        __asm _emit 0xe9
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 58a0b450h
        push edi
        ; Exact mapped bytes FF 15 A4 C1 98 58: call dword ptr [0x5898c1a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 B0 00 00 00: je 0x5881e408
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        xor ebx, ebx
        cmp ebp, 1
        ; Exact mapped bytes 75 0E: jne 0x5881e36e
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [esi + 0d8h]
        push edi
        ; Exact mapped bytes E8 64 A0 02 00: call 0x588483d0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 10: jmp 0x5881e37e
        __asm _emit 0xeb
        __asm _emit 0x10
        test ebp, ebp
        ; Exact mapped bytes 75 0E: jne 0x5881e380
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [esi + 0d8h]
        push edi
        ; Exact mapped bytes E8 02 A0 02 00: call 0x58848380
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        mov ebx, eax
        push edi
        lea eax, [esp + 18h]
        push 5898d640h
        push eax
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [esp + 1ch]
        add esp, 0ch
        push 3d4h
        push ecx
        lea edx, [esp + 1ch]
        push edx
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        lea eax, [esp + eax + 1ch]
        push eax
        ; Exact mapped bytes FF 15 94 C1 98 58: call dword ptr [0x5898c194]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        test ebx, ebx
        ; Exact mapped bytes 74 1C: je 0x5881e3d4
        __asm _emit 0x74
        __asm _emit 0x1c
        push ebx
        push 0
        push 10101h
        push 0
        lea ecx, [esp + 24h]
        push ecx
        mov ecx, dword ptr [esi + 0d14h]
        ; Exact mapped bytes E8 1E 38 F3 FF: call 0x58751bf0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x38
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 33: jmp 0x5881e407
        __asm _emit 0xeb
        __asm _emit 0x33
        mov ecx, dword ptr [esi + 0d14h]
        push 0
        push 0
        push 10101h
        push 0
        lea edx, [esp + 24h]
        push edx
        ; Exact mapped bytes E8 01 38 F3 FF: call 0x58751bf0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x38
        __asm _emit 0xf3
        __asm _emit 0xff
        push edi
        lea eax, [esi + 0cfch]
        push eax
        ; Exact mapped bytes FF 15 98 C1 98 58: call dword ptr [0x5898c198]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov dword ptr [esi + 0d18h], 1
        pop ebx
        pop ebp
        mov ecx, dword ptr [esp + 40ch]
        pop edi
        pop esi
        xor ecx, esp
        ; Exact mapped bytes E8 C1 E7 15 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xe7
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 408h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
