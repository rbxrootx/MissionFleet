// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100C5E20 .. +0x121 bytes.
extern "C" __declspec(naked) void FUN_100c5e20_100C5E20() {
    __asm {
        push esi
        mov esi, ecx
        mov cl, 1
        mov eax, dword ptr [esi + 1a8h]
        mov al, byte ptr [eax + 24h]
        and al, cl
        ; Exact mapped bytes 74 0B: je 0x100c5e3d
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [esi + 1ach]
        test byte ptr [edx + 24h], cl
        ; Exact mapped bytes 74 17: je 0x100c5e54
        __asm _emit 0x74
        __asm _emit 0x17
        test al, al
        ; Exact mapped bytes 0F 85 FA 00 00 00: jne 0x100c5f3f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 1ach]
        test byte ptr [edx + 24h], cl
        ; Exact mapped bytes 0F 84 EB 00 00 00: je 0x100c5f3f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 0F 84 A2 00 00 00: je 0x100c5efe
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D DC 58 1C 10: mov ecx, dword ptr [0x101c58dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 A9 E0 02 00: call 0x100f3f10
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xe0
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 D0 00 00 00: je 0x100c5f3f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 2
        ; Exact mapped bytes 7E 0F: jle 0x100c5e8c
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100c5e8c
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes EB 02: jmp 0x100c5e8e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov eax, dword ptr [ecx]
        push 0
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 7
        ; Exact mapped bytes 7E 0F: jle 0x100c5eb2
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100c5eb2
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [eax + 1ch]
        ; Exact mapped bytes EB 02: jmp 0x100c5eb4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        push 0
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        xor eax, eax
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 86 94 00 00 00: mov ax, word ptr [esi + 0x94]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 8E 96 00 00 00: mov cx, word ptr [esi + 0x96]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 C6 72 F8 FF: call 0x1004d1a0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x72
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [esi + 1a8h]
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 19ch]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov ecx, dword ptr [esi + 1a0h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        pop esi
        ret
        xor ecx, ecx
        xor edx, edx
        ; Exact mapped bytes 66 8B 8E 94 00 00 00: mov cx, word ptr [esi + 0x94]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 96 96 00 00 00: mov dx, word ptr [esi + 0x96]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        ; Exact mapped bytes E8 A3 72 F8 FF: call 0x1004d1c0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x72
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 19ch]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov ecx, dword ptr [esi + 1a0h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov esi, dword ptr [esi + 1ach]
        ; Exact mapped bytes 66 81 66 24 F0 FF: and word ptr [esi + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        pop esi
        ret
    }
}
