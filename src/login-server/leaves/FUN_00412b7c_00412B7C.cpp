// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00412B7C .. +0xBF bytes.
extern "C" __declspec(naked) void FUN_00412b7c_00412B7C() {
    __asm {
        mov eax, 43a619h
        ; Exact mapped bytes E8 82 CA 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push ecx
        push esi
        mov esi, ecx
        push edi
        cmp dword ptr [esi + 4], 0
        ; Exact mapped bytes 74 7B: je 0x412c0d
        __asm _emit 0x74
        __asm _emit 0x7b
        push 1
        pop eax
        cmp dword ptr [esi + 90h], eax
        ; Exact mapped bytes 0F 84 8C 00 00 00: je 0x412c2d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 0eh]
        push eax
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 C3 99 01 00: call 0x42c570
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x99
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes 66 83 FF 02: cmp di, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x02
        ; Exact mapped bytes 74 EC: je 0x412ba1
        __asm _emit 0x74
        __asm _emit 0xec
        mov eax, dword ptr [esi]
        push edi
        mov ecx, esi
        ; Exact mapped bytes FF 50 48: call dword ptr [eax + 0x48]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x48
        test eax, eax
        ; Exact mapped bytes 75 61: jne 0x412c22
        __asm _emit 0x75
        __asm _emit 0x61
        push 14h
        ; Exact mapped bytes E8 24 AD 01 00: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xad
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov ecx, eax
        mov dword ptr [ebp - 14h], ecx
        and dword ptr [ebp - 4], 0
        test ecx, ecx
        ; Exact mapped bytes 74 0A: je 0x412be0
        __asm _emit 0x74
        __asm _emit 0x0a
        push edi
        ; Exact mapped bytes E8 BE ED FF FF: call 0x41199a
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x412be2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [edi]
        or dword ptr [ebp - 4], 0ffffffffh
        push 0
        mov ecx, edi
        push dword ptr [esi + 4]
        push dword ptr [esi + 8]
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        push 43d50ch
        lea ecx, [edi + 10h]
        ; Exact mapped bytes E8 57 9B 01 00: call 0x42c759
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x9b
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7C 0B: jl 0x412c11
        __asm _emit 0x7c
        __asm _emit 0x0b
        mov ecx, edi
        ; Exact mapped bytes E8 19 FB 01 00: call 0x432726
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xfb
        __asm _emit 0x01
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 1C: jmp 0x412c2d
        __asm _emit 0xeb
        __asm _emit 0x1c
        lea eax, [ebp - 14h]
        push 443350h
        push eax
        mov dword ptr [ebp - 14h], edi
        ; Exact mapped bytes E8 05 CA 00 00: call 0x41f627
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 39 45 F2: cmp word ptr [ebp - 0xe], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x45
        __asm _emit 0xf2
        ; Exact mapped bytes 74 03: je 0x412c2d
        __asm _emit 0x74
        __asm _emit 0x03
        push 1
        pop eax
        mov ecx, dword ptr [ebp - 0ch]
        pop edi
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ret
    }
}
