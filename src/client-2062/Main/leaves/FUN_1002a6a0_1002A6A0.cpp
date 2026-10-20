// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1002A6A0 .. +0xB9 bytes.
extern "C" __declspec(naked) void FUN_1002a6a0_1002A6A0() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 24h], 4
        ; Exact mapped bytes 0F 84 A8 00 00 00: je 0x1002a756
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 54h]
        test eax, eax
        ; Exact mapped bytes 74 36: je 0x1002a6eb
        __asm _emit 0x74
        __asm _emit 0x36
        xor ecx, ecx
        mov edx, dword ptr [esi + 50h]
        ; Exact mapped bytes 66 8B 48 0C: mov cx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0c
        imul ecx, dword ptr [eax + 8]
        dec ecx
        xor eax, eax
        cmp edx, ecx
        setge al
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x1002a6eb
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, esi
        ; Exact mapped bytes E8 8B 49 0D 00: call 0x100ff060
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 D4 49 0D 00: call 0x100ff0b0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x49
        __asm _emit 0x0d
        __asm _emit 0x00
        test esi, esi
        ; Exact mapped bytes 74 76: je 0x1002a756
        __asm _emit 0x74
        __asm _emit 0x76
        mov edx, dword ptr [esi]
        push 1
        mov ecx, esi
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        pop edi
        pop esi
        ret
        mov edx, dword ptr [esi + 58h]
        inc edx
        mov eax, edx
        mov dword ptr [esi + 58h], edx
        cdq
        idiv dword ptr [esi + 5ch]
        test eax, eax
        ; Exact mapped bytes 74 2B: je 0x1002a727
        __asm _emit 0x74
        __asm _emit 0x2b
        mov eax, dword ptr [esi + 50h]
        mov dword ptr [esi + 58h], 0
        inc eax
        mov dword ptr [esi + 50h], eax
        ; Exact mapped bytes FF 15 20 51 17 10: call dword ptr [0x10175120]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        cdq
        mov ecx, 3
        idiv ecx
        mov eax, 1
        mov ecx, esi
        sub eax, edx
        push eax
        ; Exact mapped bytes E8 59 47 0D 00: call 0x100fee80
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x47
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 60h]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 8E 47 0D 00: call 0x100feec0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x47
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 1D: je 0x1002a756
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [esi + 3ch]
        cmp edi, eax
        ; Exact mapped bytes 74 0E: je 0x1002a751
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        test edi, edi
        mov ecx, edi
        ; Exact mapped bytes 75 EB: jne 0x1002a739
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        pop edi
        pop esi
        ret
    }
}
