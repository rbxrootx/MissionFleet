// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1002F090 .. +0x10E bytes.
extern "C" __declspec(naked) void FUN_1002f090_1002F090() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov dword ptr [esi + 0a028h], 1eh
        and eax, 0e1ffh
        mov dword ptr [esi + 80h], 0
        or ah, 1
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0a00ch]
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x1002f0e0
        __asm _emit 0x74
        __asm _emit 0x1c
        cmp eax, 4
        ; Exact mapped bytes 75 44: jne 0x1002f10d
        __asm _emit 0x75
        __asm _emit 0x44
        mov dword ptr [esi + 80h], edi
        mov dword ptr [esi + 0a028h], 64h
        mov edi, 3
        ; Exact mapped bytes EB 2D: jmp 0x1002f10d
        __asm _emit 0xeb
        __asm _emit 0x2d
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 27h
        ; Exact mapped bytes 7E 12: jle 0x1002f100
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x1002f100
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 9ch]
        ; Exact mapped bytes EB 02: jmp 0x1002f102
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 80h], eax
        mov edi, 2
        mov ecx, dword ptr [esi + 80h]
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x1002f11e
        __asm _emit 0x74
        __asm _emit 0x07
        mov edx, dword ptr [ecx]
        push 0
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov eax, dword ptr [esi + 70h]
        cmp dword ptr [eax + 160h], edi
        ; Exact mapped bytes 7E 15: jle 0x1002f13e
        __asm _emit 0x7e
        __asm _emit 0x15
        test edi, edi
        ; Exact mapped bytes 7C 11: jl 0x1002f13e
        __asm _emit 0x7c
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x1002f13e
        __asm _emit 0x74
        __asm _emit 0x07
        shl edi, 6
        add edi, eax
        ; Exact mapped bytes EB 02: jmp 0x1002f140
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esi + 2c4h]
        test edi, edi
        mov dword ptr [eax + 54h], edi
        ; Exact mapped bytes 74 28: je 0x1002f175
        __asm _emit 0x74
        __asm _emit 0x28
        mov ecx, dword ptr [edi + 18h]
        add edi, 20h
        mov dword ptr [eax + 0ch], ecx
        mov edx, dword ptr [edi - 4]
        mov dword ptr [eax + 10h], edx
        mov ecx, dword ptr [edi]
        add eax, 14h
        mov dword ptr [eax], ecx
        mov edx, dword ptr [edi + 4]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [edi + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [edi + 0ch]
        mov dword ptr [eax + 0ch], edx
        mov ecx, dword ptr [esi + 2c4h]
        ; Exact mapped bytes E8 50 34 00 00: call 0x100325d0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 2c4h]
        push 1
        ; Exact mapped bytes E8 13 33 00 00: call 0x100324a0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 28h], 0
        mov dword ptr [esi + 58h], 100h
        pop edi
        pop esi
        ret
    }
}
