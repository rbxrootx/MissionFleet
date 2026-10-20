// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100C6DB0 .. +0xF6 bytes.
extern "C" __declspec(naked) void FUN_100c6db0_100C6DB0() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 24h], 2
        ; Exact mapped bytes 0F 84 E0 00 00 00: je 0x100c6e9e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esp + 0ch]
        cmp dword ptr [edi + 4], 100h
        ; Exact mapped bytes 0F 85 A8 00 00 00: jne 0x100c6e77
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 8]
        add eax, -31h
        cmp eax, 8
        ; Exact mapped bytes 0F 87 99 00 00 00: ja 0x100c6e77
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 A8 6E 0C 10: jmp dword ptr [eax*4 + 0x100c6ea8]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0x6e
        __asm _emit 0x0c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        ; Exact mapped bytes E8 0E A2 FA FF: call 0x10071000
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xa2
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes E9 80 00 00 00: jmp 0x100c6e77
        __asm _emit 0xe9
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 1
        ; Exact mapped bytes E8 FC A1 FA FF: call 0x10071000
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xa1
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes EB 71: jmp 0x100c6e77
        __asm _emit 0xeb
        __asm _emit 0x71
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 2
        ; Exact mapped bytes E8 ED A1 FA FF: call 0x10071000
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xa1
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes EB 62: jmp 0x100c6e77
        __asm _emit 0xeb
        __asm _emit 0x62
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 3
        ; Exact mapped bytes E8 DE A1 FA FF: call 0x10071000
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xa1
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes EB 53: jmp 0x100c6e77
        __asm _emit 0xeb
        __asm _emit 0x53
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 4
        ; Exact mapped bytes E8 CF A1 FA FF: call 0x10071000
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xa1
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes EB 44: jmp 0x100c6e77
        __asm _emit 0xeb
        __asm _emit 0x44
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 5
        ; Exact mapped bytes E8 C0 A1 FA FF: call 0x10071000
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xa1
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes EB 35: jmp 0x100c6e77
        __asm _emit 0xeb
        __asm _emit 0x35
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 6
        ; Exact mapped bytes E8 B1 A1 FA FF: call 0x10071000
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xa1
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes EB 26: jmp 0x100c6e77
        __asm _emit 0xeb
        __asm _emit 0x26
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 7
        ; Exact mapped bytes E8 A2 A1 FA FF: call 0x10071000
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xa1
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes EB 17: jmp 0x100c6e77
        __asm _emit 0xeb
        __asm _emit 0x17
        xor eax, eax
        mov cl, 1
        ; Exact mapped bytes 8B 15 F4 56 1C 10: mov edx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        inc eax
        cmp eax, 8
        mov byte ptr [edx + eax + 41fh], cl
        ; Exact mapped bytes 7C ED: jl 0x100c6e64
        __asm _emit 0x7c
        __asm _emit 0xed
        mov eax, dword ptr [esi + 3ch]
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x100c6e9e
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x100c6e97
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [eax]
        push edi
        mov ecx, eax
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 09: je 0x100c6e9e
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes EB EA: jmp 0x100c6e81
        __asm _emit 0xeb
        __asm _emit 0xea
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
