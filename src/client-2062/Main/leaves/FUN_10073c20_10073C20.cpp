// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10073C20 .. +0x10F bytes.
extern "C" __declspec(naked) void FUN_10073c20_10073C20() {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0ch]
        push esi
        mov esi, ebp
        mov ebx, ecx
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        and esi, 0ffffh
        push edi
        push esi
        ; Exact mapped bytes E8 92 85 FB FF: call 0x1002c1d0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x85
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 0F 84 E0 00 00 00: je 0x10073d28
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test byte ptr [ebx + 1b8h], 1
        ; Exact mapped bytes 74 12: je 0x10073c63
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 8B 0D F0 58 1C 10: mov ecx, dword ptr [0x101c58f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        lea eax, [edi + 332h]
        push eax
        ; Exact mapped bytes E8 FD E8 FC FF: call 0x10042560
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp edi, dword ptr [ecx + 4]
        ; Exact mapped bytes 74 15: je 0x10073c83
        __asm _emit 0x74
        __asm _emit 0x15
        mov edx, dword ptr [edi + 0f10h]
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 6ch]
        push eax
        ; Exact mapped bytes E8 FD 8A 04 00: call 0x100bc780
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x8a
        __asm _emit 0x04
        __asm _emit 0x00
        xor ecx, ecx
        push esi
        mov cl, byte ptr [edi + 330h]
        mov edi, ecx
        mov ecx, dword ptr [edi*4 + 101ace60h]
        ; Exact mapped bytes E8 26 82 FB FF: call 0x1002bec0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x82
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebx + 174h]
        push 0
        push edi
        ; Exact mapped bytes E8 48 1F 05 00: call 0x100c5bf0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x1f
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 0D 85 FB FF: call 0x1002c1c0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x85
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebx + 174h]
        push eax
        ; Exact mapped bytes E8 F1 16 05 00: call 0x100c53b0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x16
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 4]
        ; Exact mapped bytes 66 3B AA 2C 03 00 00: cmp bp, word ptr [edx + 0x32c]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xaa
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 3A: jne 0x10073d0b
        __asm _emit 0x75
        __asm _emit 0x3a
        mov esi, 101ace60h
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 43 82 FB FF: call 0x1002bf20
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x82
        __asm _emit 0xfb
        __asm _emit 0xff
        add esi, 4
        cmp esi, 101ace80h
        ; Exact mapped bytes 7C EE: jl 0x10073cd6
        __asm _emit 0x7c
        __asm _emit 0xee
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 5D 85 FB FF: call 0x1002c250
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x85
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebx + 0a0h]
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 0
        push eax
        ; Exact mapped bytes E8 A7 8B FD FF: call 0x1004c8b0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x8b
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 06: jmp 0x10073d11
        __asm _emit 0xeb
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 7F 85 FB FF: call 0x1002c290
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x85
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 A4 84 FB FF: call 0x1002c1c0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x84
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebx + 174h]
        push eax
        ; Exact mapped bytes E8 88 16 05 00: call 0x100c53b0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x16
        __asm _emit 0x05
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
