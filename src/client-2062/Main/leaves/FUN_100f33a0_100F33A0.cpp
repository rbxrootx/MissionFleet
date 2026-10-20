// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F33A0 .. +0xA7 bytes.
extern "C" __declspec(naked) void FUN_100f33a0_100F33A0() {
    __asm {
        mov eax, dword ptr [ecx + 4ch]
        xor eax, 0aaaaaaaah
        ; Exact mapped bytes 74 7D: je 0x100f3427
        __asm _emit 0x74
        __asm _emit 0x7d
        mov eax, dword ptr [ecx + 83ch]
        test eax, eax
        ; Exact mapped bytes 74 50: je 0x100f3404
        __asm _emit 0x74
        __asm _emit 0x50
        mov edx, dword ptr [ecx + 0b4ch]
        mov ecx, dword ptr [ecx + 904h]
        xor ecx, 0aaaaaaaah
        mov eax, dword ptr [edx + 64h]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 3
        cmp ecx, eax
        ; Exact mapped bytes 77 08: ja 0x100f33e1
        __asm _emit 0x77
        __asm _emit 0x08
        mov eax, 1
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esp + 4]
        test eax, eax
        ; Exact mapped bytes 74 59: je 0x100f3442
        __asm _emit 0x74
        __asm _emit 0x59
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 0
        push 0
        push 12dh
        ; Exact mapped bytes E8 B1 A6 F2 FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xa6
        __asm _emit 0xf2
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esp + 4]
        test eax, eax
        ; Exact mapped bytes 74 36: je 0x100f3442
        __asm _emit 0x74
        __asm _emit 0x36
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 0
        push 0
        push 132h
        ; Exact mapped bytes E8 8E A6 F2 FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xa6
        __asm _emit 0xf2
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esp + 4]
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x100f3442
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 0
        push 0
        push 0eh
        ; Exact mapped bytes E8 6E A6 F2 FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xa6
        __asm _emit 0xf2
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
