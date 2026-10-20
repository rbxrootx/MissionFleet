// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100487D0 .. +0x9B bytes.
extern "C" __declspec(naked) void FUN_100487d0_100487D0() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        test cl, 4
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x10048868
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 54h]
        test eax, eax
        ; Exact mapped bytes 74 55: je 0x1004883d
        __asm _emit 0x74
        __asm _emit 0x55
        xor edx, edx
        mov edi, dword ptr [esi + 50h]
        ; Exact mapped bytes 66 8B 50 0C: mov dx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0c
        imul edx, dword ptr [eax + 8]
        dec edx
        xor eax, eax
        cmp edi, edx
        setge al
        test eax, eax
        ; Exact mapped bytes 74 3C: je 0x1004883d
        __asm _emit 0x74
        __asm _emit 0x3c
        test cl, 1
        ; Exact mapped bytes 74 0A: je 0x10048810
        __asm _emit 0x74
        __asm _emit 0x0a
        and ecx, 0fffeh
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 58h]
        test ecx, ecx
        ; Exact mapped bytes 74 09: je 0x10048820
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 75 48: jne 0x10048868
        __asm _emit 0x75
        __asm _emit 0x48
        mov ecx, esi
        ; Exact mapped bytes E8 39 68 0B 00: call 0x100ff060
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x68
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 82 68 0B 00: call 0x100ff0b0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x68
        __asm _emit 0x0b
        __asm _emit 0x00
        test esi, esi
        ; Exact mapped bytes 74 36: je 0x10048868
        __asm _emit 0x74
        __asm _emit 0x36
        mov edx, dword ptr [esi]
        push 1
        mov ecx, esi
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        pop edi
        pop esi
        ret
        mov ecx, dword ptr [esi + 50h]
        inc ecx
        mov dword ptr [esi + 50h], ecx
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 1D: je 0x10048868
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [esi + 3ch]
        cmp edi, eax
        ; Exact mapped bytes 74 0E: je 0x10048863
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        test edi, edi
        mov ecx, edi
        ; Exact mapped bytes 75 EB: jne 0x1004884b
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        pop edi
        pop esi
        ret
    }
}
