// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100FF930 .. +0x7C bytes.
extern "C" __declspec(naked) void FUN_100ff930_100FF930() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 24h], 4
        ; Exact mapped bytes 74 6F: je 0x100ff9a9
        __asm _emit 0x74
        __asm _emit 0x6f
        mov eax, dword ptr [esi + 54h]
        test eax, eax
        ; Exact mapped bytes 74 3D: je 0x100ff97e
        __asm _emit 0x74
        __asm _emit 0x3d
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
        ; Exact mapped bytes 74 24: je 0x100ff97e
        __asm _emit 0x74
        __asm _emit 0x24
        mov edx, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        mov ecx, esi
        ; Exact mapped bytes E8 F8 F6 FF FF: call 0x100ff060
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 41 F7 FF FF: call 0x100ff0b0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        test esi, esi
        ; Exact mapped bytes 74 36: je 0x100ff9a9
        __asm _emit 0x74
        __asm _emit 0x36
        mov eax, dword ptr [esi]
        push 1
        mov ecx, esi
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        pop edi
        pop esi
        ret
        mov ecx, dword ptr [esi + 50h]
        inc ecx
        mov dword ptr [esi + 50h], ecx
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 1D: je 0x100ff9a9
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [esi + 3ch]
        cmp edi, eax
        ; Exact mapped bytes 74 0E: je 0x100ff9a4
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        test edi, edi
        mov ecx, edi
        ; Exact mapped bytes 75 EB: jne 0x100ff98c
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
