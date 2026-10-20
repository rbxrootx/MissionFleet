// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100FB460 .. +0x91 bytes.
extern "C" __declspec(naked) void FUN_100fb460_100FB460() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        push edi
        ; Exact mapped bytes 66 8B 5E 24: mov bx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x5e
        __asm _emit 0x24
        test bl, 4
        ; Exact mapped bytes 74 7F: je 0x100fb4ed
        __asm _emit 0x74
        __asm _emit 0x7f
        mov ecx, dword ptr [esi + 74h]
        mov eax, dword ptr [esi + 70h]
        cmp eax, ecx
        ; Exact mapped bytes 7E 46: jle 0x100fb4be
        __asm _emit 0x7e
        __asm _emit 0x46
        mov eax, ecx
        cdq
        idiv dword ptr [esi + 78h]
        test edx, edx
        ; Exact mapped bytes 75 0F: jne 0x100fb491
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, ebx
        not eax
        xor al, bl
        and eax, 1
        xor eax, ebx
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        inc ecx
        mov dword ptr [esi + 74h], ecx
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 51: je 0x100fb4ed
        __asm _emit 0x74
        __asm _emit 0x51
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [esi + 3ch]
        cmp edi, eax
        ; Exact mapped bytes 74 0F: je 0x100fb4b5
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        test edi, edi
        mov ecx, edi
        ; Exact mapped bytes 75 EB: jne 0x100fb49c
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        pop ebx
        ret
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        pop edi
        pop esi
        pop ebx
        ret
        mov eax, dword ptr [esi + 7ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100fb4cd
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [esi + 30h]
        ; Exact mapped bytes E8 83 F6 FF FF: call 0x100fab50
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 81 66 24 F0 FF: and word ptr [esi + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 86 3B 00 00: call 0x100ff060
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x3b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 CF 3B 00 00: call 0x100ff0b0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x3b
        __asm _emit 0x00
        __asm _emit 0x00
        test esi, esi
        ; Exact mapped bytes 74 08: je 0x100fb4ed
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [esi]
        push 1
        mov ecx, esi
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        pop edi
        pop esi
        pop ebx
        ret
    }
}
