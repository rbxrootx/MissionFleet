// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004876E0 .. +0x164 bytes.
extern "C" __declspec(naked) void FUN_004876e0_004876E0() {
    __asm {
        sub esp, 14h
        push ebx
        push esi
        mov esi, dword ptr [esp + 20h]
        push edi
        push ebp
        push -10h
        push esi
        ; Exact mapped bytes FF 15 A0 BF 68 00: call dword ptr [0x68bfa0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [esp + 10h], eax
        test eax, 10000000h
        ; Exact mapped bytes 0F 84 39 01 00 00: je 0x48783c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esp + 14h]
        push eax
        push esi
        ; Exact mapped bytes FF 15 7C BE 68 00: call dword ptr [0x68be7c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [esp + 10h]
        and eax, 1fh
        cmp eax, 12h
        ; Exact mapped bytes 0F 87 1D 01 00 00: ja 0x48783c
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [eax + 48786ch]
        ; Exact mapped bytes FF 24 8D 44 78 48 00: jmp dword ptr [ecx*4 + 0x487844]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x78
        __asm _emit 0x48
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes 8B 2D B0 BF 68 00: mov ebp, dword ptr [0x68bfb0]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        push 0
        push 31h
        push esi
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ebx, eax
        test ebx, ebx
        ; Exact mapped bytes 74 10: je 0x487753
        __asm _emit 0x74
        __asm _emit 0x10
        mov edi, dword ptr [esp + 2ch]
        push ebx
        push edi
        ; Exact mapped bytes FF 15 40 B4 68 00: call dword ptr [0x68b440]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xb4
        __asm _emit 0x68
        __asm _emit 0x00
        mov ebx, eax
        ; Exact mapped bytes EB 04: jmp 0x487757
        __asm _emit 0xeb
        __asm _emit 0x04
        mov edi, dword ptr [esp + 2ch]
        push 2
        push edi
        ; Exact mapped bytes FF 15 BC B5 68 00: call dword ptr [0x68b5bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb5
        __asm _emit 0x68
        __asm _emit 0x00
        push esi
        push edi
        push 138h
        push esi
        ; Exact mapped bytes FF 15 A4 BF 68 00: call dword ptr [0x68bfa4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ebp, eax
        test ebp, ebp
        ; Exact mapped bytes 74 0A: je 0x487781
        __asm _emit 0x74
        __asm _emit 0x0a
        push ebp
        push edi
        ; Exact mapped bytes FF 15 40 B4 68 00: call dword ptr [0x68b440]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xb4
        __asm _emit 0x68
        __asm _emit 0x00
        mov ebp, eax
        mov eax, dword ptr [esp + 10h]
        lea ecx, [esp + 14h]
        push eax
        push ecx
        push edi
        push esi
        ; Exact mapped bytes E8 6E FE FF FF: call 0x487600
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        test ebx, ebx
        ; Exact mapped bytes 74 08: je 0x4877a1
        __asm _emit 0x74
        __asm _emit 0x08
        push ebx
        push edi
        ; Exact mapped bytes FF 15 40 B4 68 00: call dword ptr [0x68b440]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xb4
        __asm _emit 0x68
        __asm _emit 0x00
        test ebp, ebp
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x48783c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebp
        push edi
        ; Exact mapped bytes FF 15 40 B4 68 00: call dword ptr [0x68b440]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xb4
        __asm _emit 0x68
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
        ; Exact mapped bytes E8 52 CF FF FF: call 0x484720
        __asm _emit 0xe8
        __asm _emit 0x52
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
        lea eax, [esp + 14h]
        push 0fh
        mov edi, dword ptr [esp + 30h]
        push 0
        inc dword ptr [esp + 1ch]
        push 0
        inc dword ptr [esp + 24h]
        push eax
        push edi
        ; Exact mapped bytes E8 2A CF FF FF: call 0x484720
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [esp + 28h]
        add esp, 14h
        push -1
        push -1
        push ecx
        ; Exact mapped bytes FF 15 5C BF 68 00: call dword ptr [0x68bf5c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        lea ecx, [esp + 14h]
        push 0fh
        push 2
        push 2
        push ecx
        push edi
        ; Exact mapped bytes E8 07 CF FF FF: call 0x484720
        __asm _emit 0xe8
        __asm _emit 0x07
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
        lea eax, [esp + 14h]
        push 0fh
        mov edi, dword ptr [esp + 30h]
        push 2
        push 0
        push eax
        push edi
        ; Exact mapped bytes E8 E7 CE FF FF: call 0x484720
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xce
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
