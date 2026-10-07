// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 245 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58880DF0 .. +0xF5 bytes.
extern "C" __declspec(naked) void FUN_58880df0_segment_00() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes E8 A8 BD FF FF: call 0x5887cba0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xbd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [esi + 70h], -1
        ; Exact mapped bytes 0F 84 E1 00 00 00: je 0x58880ee3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 74h]
        test eax, eax
        ; Exact mapped bytes 0F 84 D6 00 00 00: je 0x58880ee3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1b4h]
        add eax, 14h
        push eax
        ; Exact mapped bytes E8 C4 0E EB FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x0e
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 1D A2 FF FF: call 0x5887b040
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xa2
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 74h]
        mov eax, dword ptr [eax + 0ch]
        ; Exact mapped bytes 8B 0D 30 47 A2 58: mov ecx, dword ptr [0x58a24730]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 18: jle 0x58880e4f
        __asm _emit 0x7e
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 7C 14: jl 0x58880e4f
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x58880e4f
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x58880e51
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 108h]
        mov dword ptr [ecx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x58880e86
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi + 74h]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 9F FC FF FF: call 0x58880b30
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 4E: jne 0x58880ee3
        __asm _emit 0x75
        __asm _emit 0x4e
        mov eax, dword ptr [esi + 6ch]
        cmp eax, 4
        ; Exact mapped bytes 77 46: ja 0x58880ee3
        __asm _emit 0x77
        __asm _emit 0x46
        ; Exact mapped bytes FF 24 85 E8 0E 88 58: jmp dword ptr [eax*4 + 0x58880ee8]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x88
        __asm _emit 0x58
        mov edx, dword ptr [esi + 74h]
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 41 CD FF FF: call 0x5887dbf0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        ret
        mov eax, dword ptr [esi + 74h]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 F4 D3 FF FF: call 0x5887e2b0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        ret
        mov ecx, dword ptr [esi + 74h]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 C7 DA FF FF: call 0x5887e990
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        ret
        mov edx, dword ptr [esi + 74h]
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 EA DD FF FF: call 0x5887ecc0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        ret
        mov eax, dword ptr [esi + 74h]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 AD F9 FF FF: call 0x58880890
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        ret
    }
}
