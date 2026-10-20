// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042C000 .. +0x164 bytes.
extern "C" __declspec(naked) void FUN_0042c000_0042C000() {
    __asm {
        sub esp, 14h
        push ebx
        push esi
        mov esi, dword ptr [esp + 20h]
        push edi
        push ebp
        push -10h
        push esi
        ; Exact mapped bytes FF 15 14 C5 43 00: call dword ptr [0x43c514]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        mov dword ptr [esp + 10h], eax
        test eax, 10000000h
        ; Exact mapped bytes 0F 84 39 01 00 00: je 0x42c15c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esp + 14h]
        push eax
        push esi
        ; Exact mapped bytes FF 15 2C C5 43 00: call dword ptr [0x43c52c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, dword ptr [esp + 10h]
        and eax, 1fh
        cmp eax, 12h
        ; Exact mapped bytes 0F 87 1D 01 00 00: ja 0x42c15c
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [eax + 42c18ch]
        ; Exact mapped bytes FF 24 8D 64 C1 42 00: jmp dword ptr [ecx*4 + 0x42c164]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0xc1
        __asm _emit 0x42
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes 8B 2D 4C C5 43 00: mov ebp, dword ptr [0x43c54c]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x4c
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        push 0
        push 31h
        push esi
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ebx, eax
        test ebx, ebx
        ; Exact mapped bytes 74 10: je 0x42c073
        __asm _emit 0x74
        __asm _emit 0x10
        mov edi, dword ptr [esp + 2ch]
        push ebx
        push edi
        ; Exact mapped bytes FF 15 70 C0 43 00: call dword ptr [0x43c070]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        mov ebx, eax
        ; Exact mapped bytes EB 04: jmp 0x42c077
        __asm _emit 0xeb
        __asm _emit 0x04
        mov edi, dword ptr [esp + 2ch]
        push 2
        push edi
        ; Exact mapped bytes FF 15 3C C0 43 00: call dword ptr [0x43c03c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        push esi
        push edi
        push 138h
        push esi
        ; Exact mapped bytes FF 15 08 C5 43 00: call dword ptr [0x43c508]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ebp, eax
        test ebp, ebp
        ; Exact mapped bytes 74 0A: je 0x42c0a1
        __asm _emit 0x74
        __asm _emit 0x0a
        push ebp
        push edi
        ; Exact mapped bytes FF 15 70 C0 43 00: call dword ptr [0x43c070]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        mov ebp, eax
        mov eax, dword ptr [esp + 10h]
        lea ecx, [esp + 14h]
        push eax
        push ecx
        push edi
        push esi
        ; Exact mapped bytes E8 6E FE FF FF: call 0x42bf20
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        test ebx, ebx
        ; Exact mapped bytes 74 08: je 0x42c0c1
        __asm _emit 0x74
        __asm _emit 0x08
        push ebx
        push edi
        ; Exact mapped bytes FF 15 70 C0 43 00: call dword ptr [0x43c070]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        test ebp, ebp
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x42c15c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebp
        push edi
        ; Exact mapped bytes FF 15 70 C0 43 00: call dword ptr [0x43c070]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 14h
        ret
        lea eax, [esp + 14h]
        push 0fh
        mov edi, dword ptr [esp + 30h]
        push 0
        push 2
        push eax
        push edi
        ; Exact mapped bytes E8 62 D0 FF FF: call 0x429150
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 14h
        ret
        lea eax, [esp + 14h]
        push 0fh
        mov edi, dword ptr [esp + 30h]
        push 0
        inc dword ptr [esp + 1ch]
        push 0
        inc dword ptr [esp + 24h]
        push eax
        push edi
        ; Exact mapped bytes E8 3A D0 FF FF: call 0x429150
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [esp + 28h]
        add esp, 14h
        push -1
        push -1
        push ecx
        ; Exact mapped bytes FF 15 80 C4 43 00: call dword ptr [0x43c480]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        lea ecx, [esp + 14h]
        push 0fh
        push 2
        push 2
        push ecx
        push edi
        ; Exact mapped bytes E8 17 D0 FF FF: call 0x429150
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 14h
        ret
        lea eax, [esp + 14h]
        push 0fh
        mov edi, dword ptr [esp + 30h]
        push 2
        push 0
        push eax
        push edi
        ; Exact mapped bytes E8 F7 CF FF FF: call 0x429150
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 14h
        ret
    }
}
