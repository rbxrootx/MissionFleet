// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879E8F0 .. +0x188 bytes.
extern "C" __declspec(naked) void FUN_5879e8f0_5879E8F0() {
    __asm {
        push edi
        mov edi, dword ptr [esp + 8]
        test edi, edi
        ; Exact mapped bytes 0F 84 79 01 00 00: je 0x5879ea76
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        mov esi, dword ptr [esp + 10h]
        test esi, esi
        ; Exact mapped bytes 0F 84 6B 01 00 00: je 0x5879ea75
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test dword ptr [edi + 74h], 400h
        ; Exact mapped bytes 0F 85 5E 01 00 00: jne 0x5879ea75
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes E8 B3 70 00 00: call 0x587a59d0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test dword ptr [edi + 74h], 1000h
        ; Exact mapped bytes 74 21: je 0x5879e94a
        __asm _emit 0x74
        __asm _emit 0x21
        cmp dword ptr [edi + 284h], 0
        ; Exact mapped bytes 74 18: je 0x5879e94a
        __asm _emit 0x74
        __asm _emit 0x18
        push 588b74f4h
        push edi
        ; Exact mapped bytes E8 F3 0A 00 00: call 0x5879f430
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [edi + 284h], 0
        movzx eax, byte ptr [esi + 1ch]
        push eax
        movzx eax, byte ptr [esi + 1bh]
        push eax
        movzx eax, byte ptr [esi + 1ah]
        push eax
        movzx eax, byte ptr [esi + 19h]
        push eax
        movzx eax, byte ptr [esi + 18h]
        push eax
        push dword ptr [esi + 4]
        push dword ptr [esi]
        push edi
        ; Exact mapped bytes E8 52 49 00 00: call 0x587a32c0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        push esi
        push edi
        ; Exact mapped bytes E8 09 01 00 00: call 0x5879ea80
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 2ch
        test byte ptr [esi + 8], 2
        ; Exact mapped bytes 74 12: je 0x5879e992
        __asm _emit 0x74
        __asm _emit 0x12
        movzx eax, byte ptr [esi + 19h]
        push eax
        lea eax, [esi + 6ch]
        push eax
        push edi
        ; Exact mapped bytes E8 B1 6B 00 00: call 0x587a5540
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x6b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test dword ptr [esi + 8], 40000h
        ; Exact mapped bytes 74 0F: je 0x5879e9aa
        __asm _emit 0x74
        __asm _emit 0x0f
        push dword ptr [esi + 3ch]
        push dword ptr [esi + 38h]
        push edi
        ; Exact mapped bytes E8 C9 51 00 00: call 0x587a3b70
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x51
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test dword ptr [esi + 8], 80000h
        ; Exact mapped bytes 74 37: je 0x5879e9ea
        __asm _emit 0x74
        __asm _emit 0x37
        push dword ptr [esi + 54h]
        movzx eax, word ptr [esi + 4eh]
        push dword ptr [esi + 50h]
        push eax
        movzx eax, word ptr [esi + 4ch]
        push eax
        movzx eax, word ptr [esi + 4ah]
        push eax
        movzx eax, word ptr [esi + 48h]
        push eax
        movzx eax, word ptr [esi + 46h]
        push eax
        movzx eax, word ptr [esi + 44h]
        push eax
        movzx eax, word ptr [esi + 42h]
        push eax
        movzx eax, word ptr [esi + 40h]
        push eax
        push edi
        ; Exact mapped bytes E8 09 65 00 00: call 0x587a4ef0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 2ch
        test dword ptr [esi + 8], 20000h
        ; Exact mapped bytes 74 1D: je 0x5879ea10
        __asm _emit 0x74
        __asm _emit 0x1d
        movzx eax, byte ptr [esi + 2bh]
        push eax
        movzx eax, byte ptr [esi + 2ah]
        push eax
        movzx eax, byte ptr [esi + 29h]
        push eax
        movzx eax, byte ptr [esi + 28h]
        push eax
        push edi
        ; Exact mapped bytes E8 C3 50 00 00: call 0x587a3ad0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        test dword ptr [esi + 8], 1000h
        ; Exact mapped bytes 74 12: je 0x5879ea2b
        __asm _emit 0x74
        __asm _emit 0x12
        push dword ptr [esi + 34h]
        push dword ptr [esi + 30h]
        push dword ptr [esi + 2ch]
        push edi
        ; Exact mapped bytes E8 78 60 00 00: call 0x587a4aa0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        test dword ptr [esi + 8], 800h
        ; Exact mapped bytes 74 0F: je 0x5879ea43
        __asm _emit 0x74
        __asm _emit 0x0f
        push dword ptr [esi + 110h]
        push edi
        ; Exact mapped bytes E8 00 6F 00 00: call 0x587a5940
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x6f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        test byte ptr [esi + 8], 1
        ; Exact mapped bytes 74 0F: je 0x5879ea58
        __asm _emit 0x74
        __asm _emit 0x0f
        push dword ptr [esi + 10ch]
        push edi
        ; Exact mapped bytes E8 DB 5E 00 00: call 0x587a4930
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        test byte ptr [esi + 8], 4
        ; Exact mapped bytes 74 10: je 0x5879ea6e
        __asm _emit 0x74
        __asm _emit 0x10
        lea eax, [esi + 0ech]
        push eax
        push edi
        ; Exact mapped bytes E8 65 4F 00 00: call 0x587a39d0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x4f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        or dword ptr [edi + 74h], 400h
        pop esi
        pop edi
        ret
    }
}
