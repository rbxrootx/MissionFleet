// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58909160 .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_58909160() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 90h]
        mov dword ptr [esi], 589a2a64h
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x58909186
        __asm _emit 0x74
        __asm _emit 0x13
        push eax
        ; Exact mapped bytes E8 C9 3A 07 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x3a
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 90h], 0
        cmp dword ptr [esi + 94h], 0
        ; Exact mapped bytes 74 58: je 0x589091e7
        __asm _emit 0x74
        __asm _emit 0x58
        push edi
        xor edi, edi
        cmp dword ptr [esi + 5ch], edi
        ; Exact mapped bytes 7E 36: jle 0x589091cd
        __asm _emit 0x7e
        __asm _emit 0x36
        ; Exact mapped bytes EB 07: jmp 0x589091a0
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 94h]
        cmp dword ptr [eax + edi*4], 0
        lea eax, [eax + edi*4]
        ; Exact mapped bytes 74 18: je 0x589091c7
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 8B 3A 07 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x3a
        __asm _emit 0x07
        __asm _emit 0x00
    }
}
