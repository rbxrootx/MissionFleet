// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100E3040 .. +0x100 bytes.
extern "C" __declspec(naked) void FUN_100e3040_100E3040() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov ebx, 3
        ; Exact mapped bytes 66 81 66 24 F0 FF: and word ptr [esi + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        lea edi, [esi + 0e4h]
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 E2 11 01 00: call 0x100f4240
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 F3: jne 0x100e3057
        __asm _emit 0x75
        __asm _emit 0xf3
        mov ecx, dword ptr [esi + 0bch]
        xor edi, edi
        mov dword ptr [esi + 50h], edi
        mov dword ptr [esi + 0a0h], edi
        mov dword ptr [esi + 9ch], edi
        mov dword ptr [esi + 0a4h], edi
        mov dword ptr [esi + 0a8h], edi
        ; Exact mapped bytes E8 34 58 F3 FF: call 0x100188c0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x58
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0c0h]
        ; Exact mapped bytes E8 29 58 F3 FF: call 0x100188c0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x58
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0c4h]
        ; Exact mapped bytes 8B 2D B0 50 17 10: mov ebp, dword ptr [0x101750b0]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [eax + 6ch]
        cmp eax, edi
        ; Exact mapped bytes 74 0D: je 0x100e30b7
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, 101ace48h
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x100e30b7
        __asm _emit 0x74
        __asm _emit 0x04
        push ecx
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov eax, dword ptr [esi + 0c4h]
        mov ebx, 0fffeh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0c8h]
        mov eax, dword ptr [eax + 6ch]
        cmp eax, edi
        ; Exact mapped bytes 74 0D: je 0x100e30e0
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, 101ace48h
        test edx, edx
        ; Exact mapped bytes 74 04: je 0x100e30e0
        __asm _emit 0x74
        __asm _emit 0x04
        push edx
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov eax, dword ptr [esi + 0c8h]
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0dch]
        mov eax, dword ptr [eax + 6ch]
        cmp eax, edi
        ; Exact mapped bytes 74 0D: je 0x100e3104
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, 101ace48h
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x100e3104
        __asm _emit 0x74
        __asm _emit 0x04
        push ecx
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov eax, dword ptr [esi + 0dch]
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0e0h]
        mov eax, dword ptr [eax + 6ch]
        cmp eax, edi
        ; Exact mapped bytes 74 0D: je 0x100e3128
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, 101ace48h
        test edx, edx
        ; Exact mapped bytes 74 04: je 0x100e3128
        __asm _emit 0x74
        __asm _emit 0x04
        push edx
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov eax, dword ptr [esi + 0e0h]
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        mov esi, dword ptr [esi + 0b8h]
        mov dword ptr [esi + 50h], edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
