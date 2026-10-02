// Complete Ghidra body ranges for the selected function.
// 2 discontiguous segments; total 191 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587D6450 .. +0x77 bytes.
extern "C" __declspec(naked) void FUN_587d6450_segment_00() {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 10h]
        push edi
        mov edi, ecx
        mov dword ptr [esp + 8], edi
        test esi, esi
        ; Exact mapped bytes 0F 86 A8 00 00 00: jbe 0x587d650d
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebp
        mov ebp, dword ptr [esp + 14h]
        lea eax, [ebp - 1]
        cmp eax, 18h
        ; Exact mapped bytes 0F 87 90 00 00 00: ja 0x587d6506
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 0C 6D 2C 48 A2 58: movsx ecx, word ptr [ebp*2 + 0x58a2482c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x0c
        __asm _emit 0x6d
        __asm _emit 0x2c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 36: je 0x587d64b8
        __asm _emit 0x74
        __asm _emit 0x36
        mov eax, dword ptr [ebp*4 + 58a24860h]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x587d6496
        __asm _emit 0x74
        __asm _emit 0x09
        push eax
        ; Exact mapped bytes E8 93 69 1A 00: call 0x5897ce26
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x69
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        xor ecx, ecx
        mov eax, esi
        mov edx, 118h
        mul edx
        seto cl
        neg ecx
        or ecx, eax
        push ecx
        ; Exact mapped bytes E8 80 B0 19 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xb0
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp*4 + 58a24860h], eax
        test esi, esi
        ; Exact mapped bytes 76 36: jbe 0x587d64f2
        __asm _emit 0x76
        __asm _emit 0x36
        push ebx
        mov ebx, dword ptr [esp + 20h]
        xor eax, eax
        mov edx, esi
        ; Exact mapped bytes EB 09: jmp 0x587d64d0
        __asm _emit 0xeb
        __asm _emit 0x09
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587D64D0 .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_587d6450_segment_01() {
    __asm {
        mov edi, dword ptr [ebp*4 + 58a24860h]
        add edi, eax
        lea esi, [eax + ebx]
        mov ecx, 46h
        add eax, 118h
        sub edx, 1
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 75 E3: jne 0x587d64d0
        __asm _emit 0x75
        __asm _emit 0xe3
        mov edi, dword ptr [esp + 10h]
        pop ebx
        cmp dword ptr [edi + 0fch], 0c8h
        ; Exact mapped bytes 75 08: jne 0x587d6506
        __asm _emit 0x75
        __asm _emit 0x08
        push ebp
        mov ecx, edi
        ; Exact mapped bytes E8 2A B3 FF FF: call 0x587d1830
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xb3
        __asm _emit 0xff
        __asm _emit 0xff
        pop ebp
        pop edi
        pop esi
        pop ecx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes E8 3E 9B FF FF: call 0x587d0050
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ecx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
