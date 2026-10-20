// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10043290 .. +0xBA bytes.
extern "C" __declspec(naked) void FUN_10043290_10043290() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0f8h]
        test eax, eax
        ; Exact mapped bytes 0F 84 A7 00 00 00: je 0x10043348
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 5ch]
        test eax, eax
        ; Exact mapped bytes 0F 85 9C 00 00 00: jne 0x10043348
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 104h]
        test eax, eax
        ; Exact mapped bytes 0F 85 8E 00 00 00: jne 0x10043348
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 98h]
        mov ecx, dword ptr [esi + 9ch]
        cmp eax, ecx
        ; Exact mapped bytes 7D 09: jge 0x100432d3
        __asm _emit 0x7d
        __asm _emit 0x09
        inc eax
        mov dword ptr [esi + 98h], eax
        pop esi
        ret
        mov eax, dword ptr [esi + 58h]
        test eax, eax
        ; Exact mapped bytes 74 64: je 0x1004333e
        __asm _emit 0x74
        __asm _emit 0x64
        mov eax, dword ptr [esi + 88h]
        mov ecx, dword ptr [esi + 138h]
        add eax, 328h
        mov eax, dword ptr [eax + ecx*4 + 9cch]
        test eax, eax
        ; Exact mapped bytes 74 48: je 0x1004333e
        __asm _emit 0x74
        __asm _emit 0x48
        mov al, byte ptr [eax]
        and eax, 0fh
        ; Exact mapped bytes 66 3D 06 00: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 75 3D: jne 0x1004333e
        __asm _emit 0x75
        __asm _emit 0x3d
        ; Exact mapped bytes A1 1C 57 1C 10: mov eax, dword ptr [0x101c571c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 2cch]
        test ecx, ecx
        ; Exact mapped bytes 74 2E: je 0x1004333e
        __asm _emit 0x74
        __asm _emit 0x2e
        push 9fh
        push 0
        push 1017f088h
        ; Exact mapped bytes E8 0F 5E FE FF: call 0x10029130
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 1C 57 1C 10: mov ecx, dword ptr [0x101c571c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 10101h
        push 1
        push 101aa648h
        mov ecx, dword ptr [ecx + 2cch]
        ; Exact mapped bytes E8 F2 5D FE FF: call 0x10029130
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x5d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [esi + 104h], 40000000h
        pop esi
        ret
    }
}
