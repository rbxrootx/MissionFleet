// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879A2E0 .. +0x127 bytes.
extern "C" __declspec(naked) void FUN_5879a2e0_5879A2E0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58891aa0h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0c4h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push ebx
        push esi
        push edi
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], ecx
        mov eax, dword ptr [ecx + 8]
        and eax, 0ffh
        ; Exact mapped bytes 74 71: je 0x5879a38c
        __asm _emit 0x74
        __asm _emit 0x71
        cmp eax, 7
        ; Exact mapped bytes 0F 85 A2 00 00 00: jne 0x5879a3c6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp + 8]
        mov ebx, dword ptr [ebp + 0ch]
        sub ebx, esi
        mov dword ptr [ebp - 38h], esi
        shl ebx, 2
        mov dword ptr [ebp - 34h], ebx
        mov eax, dword ptr [ecx]
        lea ecx, [ebp - 38h]
        push ecx
        lea ecx, [ebp - 1ch]
        mov dword ptr [ebp - 4], 2
        push ecx
        mov ecx, eax
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes E8 E0 E1 FF FF: call 0x58798530
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, dword ptr [ebp - 14h]
        cmp byte ptr [edi + 0dh], 0
        ; Exact mapped bytes 75 10: jne 0x5879a369
        __asm _emit 0x75
        __asm _emit 0x10
        lea eax, [edi + 10h]
        push eax
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 8B F0 FF FF: call 0x587993f0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 74 05: je 0x5879a36e
        __asm _emit 0x74
        __asm _emit 0x05
        mov edi, dword ptr [ebp - 2ch]
        mov edi, dword ptr [edi]
        mov eax, dword ptr [ebp - 30h]
        mov eax, dword ptr [eax]
        cmp edi, dword ptr [eax]
        ; Exact mapped bytes 75 35: jne 0x5879a3ac
        __asm _emit 0x75
        __asm _emit 0x35
        test esi, esi
        ; Exact mapped bytes 74 11: je 0x5879a38c
        __asm _emit 0x74
        __asm _emit 0x11
        and bl, 3
        cmp bl, 1
        ; Exact mapped bytes 75 09: jne 0x5879a38c
        __asm _emit 0x75
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 77 F2 0B 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xf2
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        xor eax, eax
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
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 AA 6C 09 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x6c
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        test esi, esi
        ; Exact mapped bytes 74 11: je 0x5879a3c1
        __asm _emit 0x74
        __asm _emit 0x11
        and bl, 3
        cmp bl, 1
        ; Exact mapped bytes 75 09: jne 0x5879a3c1
        __asm _emit 0x75
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 42 F2 0B 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xf2
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        lea eax, [edi + 18h]
        ; Exact mapped bytes EB C8: jmp 0x5879a38e
        __asm _emit 0xeb
        __asm _emit 0xc8
        push 1
        lea ecx, [ebp - 0d0h]
        ; Exact mapped bytes E8 2D 30 D8 FF: call 0x5851d400
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x30
        __asm _emit 0xd8
        __asm _emit 0xff
        lea eax, [ebp - 0d0h]
        mov dword ptr [ebp - 4], 0
        push 588b7028h
        push eax
        ; Exact mapped bytes E8 05 A2 D6 FF: call 0x585045f0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xa2
        __asm _emit 0xd6
        __asm _emit 0xff
        add esp, 8
        lea eax, [ebp - 28h]
        lea ecx, [ebp - 0d0h]
        push eax
        ; Exact mapped bytes E8 03 3E D8 FF: call 0x5851e200
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x3e
        __asm _emit 0xd8
        __asm _emit 0xff
        push eax
        mov byte ptr [ebp - 4], 1
        ; Exact mapped bytes E8 29 09 00 00: call 0x5879ad30
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
