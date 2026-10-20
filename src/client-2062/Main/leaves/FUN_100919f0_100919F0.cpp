// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100919F0 .. +0x13E bytes.
extern "C" __declspec(naked) void FUN_100919f0_100919F0() {
    __asm {
        ; Exact mapped bytes A1 08 57 1C 10: mov eax, dword ptr [0x101c5708]
        __asm _emit 0xa1
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        mov esi, ecx
        mov eax, dword ptr [eax + 0d8h]
        test eax, eax
        mov dword ptr [esi + 64h], eax
        ; Exact mapped bytes 0F 84 23 01 00 00: je 0x10091b2c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 18 01 00 00: je 0x10091b2c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push edi
        mov edi, eax
        mov ecx, dword ptr [edi + 70h]
        push 999999h
        push edi
        mov edx, dword ptr [ecx + 6ch]
        mov ecx, dword ptr [esi + 0b8h]
        push edx
        ; Exact mapped bytes E8 80 22 07 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x22
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 87 9E 00 00 00: movsx eax, word ptr [edi + 0x9e]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x87
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 6
        ; Exact mapped bytes 77 72: ja 0x10091aae
        __asm _emit 0x77
        __asm _emit 0x72
        ; Exact mapped bytes FF 24 85 30 1B 09 10: jmp dword ptr [eax*4 + 0x10091b30]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0x1b
        __asm _emit 0x09
        __asm _emit 0x10
        push 999999h
        push 0
        push 101abb50h
        ; Exact mapped bytes EB 52: jmp 0x10091aa3
        __asm _emit 0xeb
        __asm _emit 0x52
        push 999999h
        push 0
        push 101abb34h
        ; Exact mapped bytes EB 44: jmp 0x10091aa3
        __asm _emit 0xeb
        __asm _emit 0x44
        push 999999h
        push 0
        push 101abb24h
        ; Exact mapped bytes EB 36: jmp 0x10091aa3
        __asm _emit 0xeb
        __asm _emit 0x36
        push 999999h
        push 0
        push 101abb18h
        ; Exact mapped bytes EB 28: jmp 0x10091aa3
        __asm _emit 0xeb
        __asm _emit 0x28
        push 999999h
        push 0
        push 101aba94h
        ; Exact mapped bytes EB 1A: jmp 0x10091aa3
        __asm _emit 0xeb
        __asm _emit 0x1a
        push 999999h
        push 0
        push 101abb0ch
        ; Exact mapped bytes EB 0C: jmp 0x10091aa3
        __asm _emit 0xeb
        __asm _emit 0x0c
        push 999999h
        push 0
        push 101aba84h
        mov ecx, dword ptr [esi + 0bch]
        ; Exact mapped bytes E8 02 22 07 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x22
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BF 80 00 00 00 00: cmp word ptr [edi + 0x80], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbf
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 37: je 0x10091aef
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes 8B 0D 04 57 1C 10: mov ecx, dword ptr [0x101c5704]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ebx, [edi + 78h]
        push ebx
        ; Exact mapped bytes E8 A9 0D F8 FF: call 0x10012870
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x10091ae1
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes 8B 0D 04 57 1C 10: mov ecx, dword ptr [0x101c5704]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 999999h
        push 0
        push ebx
        ; Exact mapped bytes E8 92 0D F8 FF: call 0x10012870
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes EB 1A: jmp 0x10091afb
        __asm _emit 0xeb
        __asm _emit 0x1a
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        ; Exact mapped bytes E8 73 B1 FB FF: call 0x1004cc60
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xb1
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes EB 17: jmp 0x10091b06
        __asm _emit 0xeb
        __asm _emit 0x17
        push 999999h
        push 0
        push 101abafch
        mov ecx, dword ptr [esi + 0c0h]
        ; Exact mapped bytes E8 AA 21 07 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x21
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [edi + 74h]
        push 999999h
        push 0
        mov ecx, dword ptr [eax + 6ch]
        push ecx
        mov ecx, dword ptr [esi + 0c4h]
        ; Exact mapped bytes E8 91 21 07 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x21
        __asm _emit 0x07
        __asm _emit 0x00
        mov edi, dword ptr [edi + 54h]
        test edi, edi
        ; Exact mapped bytes 0F 85 EE FE FF FF: jne 0x10091a18
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xee
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop ebx
        pop esi
        ret
    }
}
