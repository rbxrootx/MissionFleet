// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882BCF0 .. +0x113 bytes.
extern "C" __declspec(naked) void FUN_5882bcf0() {
    __asm {
        sub esp, 104h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 100h], eax
        push edi
        mov edi, ecx
        mov ecx, dword ptr [edi + 170h]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 D6 00 00 00: je 0x5882bdeb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push esi
        ; Exact mapped bytes E8 84 A7 F5 FF: call 0x587864a0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xa7
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ebx, dword ptr [esp + 114h]
        mov eax, dword ptr [eax + ebx*4 + 80h]
        ; Exact mapped bytes 8B 0D 1C 48 A2 58: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 8A D0 F4 FF: call 0x58778dc0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xd0
        __asm _emit 0xf4
        __asm _emit 0xff
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x5882bdd3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 100h
        lea ecx, [esp + 10h]
        push 0
        push ecx
        ; Exact mapped bytes E8 F7 0E 15 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x0e
        __asm _emit 0x15
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 170h]
        add esp, 0ch
        ; Exact mapped bytes E8 41 A7 F5 FF: call 0x587864a0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xa7
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dl, byte ptr [esi + 9bh]
        mov eax, dword ptr [eax + ebx*4 + 100h]
        and dl, 0fh
        ; Exact mapped bytes 66 0F B6 CA: movzx cx, dl
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xca
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 19: jne 0x5882bd91
        __asm _emit 0x75
        __asm _emit 0x19
        movzx ecx, word ptr [esi + 98h]
        and ecx, 0ffh
        imul ecx, eax
        push eax
        push ecx
        push 5899df2ch
        ; Exact mapped bytes EB 1D: jmp 0x5882bdae
        __asm _emit 0xeb
        __asm _emit 0x1d
        ; Exact mapped bytes 66 83 F9 02: cmp cx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x02
        ; Exact mapped bytes 75 2F: jne 0x5882bdc6
        __asm _emit 0x75
        __asm _emit 0x2f
        movzx ecx, word ptr [esi + 98h]
        and ecx, 0ffh
        imul ecx, eax
        push eax
        push ecx
        push 5899df14h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea edx, [esp + 18h]
        push edx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 10h
        push 0ff000000h
        push ebx
        lea eax, [esp + 14h]
        push eax
        ; Exact mapped bytes EB 0B: jmp 0x5882bdde
        __asm _emit 0xeb
        __asm _emit 0x0b
        push 0ff000000h
        push ebx
        push 5898d61ch
        mov ecx, dword ptr [edi + 11ch]
        ; Exact mapped bytes E8 F7 CB 0D 00: call 0x589089e0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xcb
        __asm _emit 0x0d
        __asm _emit 0x00
        pop esi
        pop ebx
        mov ecx, dword ptr [esp + 104h]
        pop edi
        xor ecx, esp
        ; Exact mapped bytes E8 E0 0D 15 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x0d
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 104h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
