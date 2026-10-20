// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58879960 .. +0x91 bytes.
extern "C" __declspec(naked) void FUN_58879960_58879960() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ebx
        push esi
        mov esi, dword ptr [ebp + 8]
        push edi
        test esi, esi
        ; Exact mapped bytes 78 67: js 0x588799d6
        __asm _emit 0x78
        __asm _emit 0x67
        ; Exact mapped bytes 3B 35 B0 9B 96 58: cmp esi, dword ptr [0x58969bb0]
        __asm _emit 0x3b
        __asm _emit 0x35
        __asm _emit 0xb0
        __asm _emit 0x9b
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 73 5F: jae 0x588799d6
        __asm _emit 0x73
        __asm _emit 0x5f
        mov eax, esi
        mov ebx, esi
        and eax, 3fh
        shr ebx, 6
        imul edi, eax, 38h
        mov eax, dword ptr [ebx*4 + 589699b0h]
        test byte ptr [edi + eax + 28h], 1
        ; Exact mapped bytes 74 44: je 0x588799d6
        __asm _emit 0x74
        __asm _emit 0x44
        cmp dword ptr [edi + eax + 18h], -1
        ; Exact mapped bytes 74 3D: je 0x588799d6
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes E8 95 26 00 00: call 0x5887c033
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 23: jne 0x588799c6
        __asm _emit 0x75
        __asm _emit 0x23
        xor eax, eax
        sub esi, eax
        ; Exact mapped bytes 74 14: je 0x588799bd
        __asm _emit 0x74
        __asm _emit 0x14
        sub esi, 1
        ; Exact mapped bytes 74 0A: je 0x588799b8
        __asm _emit 0x74
        __asm _emit 0x0a
        sub esi, 1
        ; Exact mapped bytes 75 13: jne 0x588799c6
        __asm _emit 0x75
        __asm _emit 0x13
        push eax
        push -0ch
        ; Exact mapped bytes EB 08: jmp 0x588799c0
        __asm _emit 0xeb
        __asm _emit 0x08
        push eax
        push -0bh
        ; Exact mapped bytes EB 03: jmp 0x588799c0
        __asm _emit 0xeb
        __asm _emit 0x03
        push eax
        push -0ah
        ; Exact mapped bytes FF 15 F0 42 89 58: call dword ptr [0x588942f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebx*4 + 589699b0h]
        or dword ptr [eax + edi + 18h], 0ffffffffh
        xor eax, eax
        ; Exact mapped bytes EB 16: jmp 0x588799ec
        __asm _emit 0xeb
        __asm _emit 0x16
        ; Exact mapped bytes E8 94 8A FE FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x8a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 9
        ; Exact mapped bytes E8 74 8A FE FF: call 0x5886245a
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x8a
        __asm _emit 0xfe
        __asm _emit 0xff
        and dword ptr [eax], 0
        or eax, 0ffffffffh
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
