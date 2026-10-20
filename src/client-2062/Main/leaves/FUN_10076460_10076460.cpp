// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10076460 .. +0x126 bytes.
extern "C" __declspec(naked) void FUN_10076460_10076460() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        mov ebx, 0fffeh
        push edi
        push 100h
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        and eax, 0e4fdh
        or eax, 405h
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov eax, dword ptr [esi + 39ch]
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 398h]
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 3a0h]
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 4]
        mov dword ptr [esi + 50h], ecx
        mov ecx, dword ptr [esi + 3ech]
        mov dword ptr [esi + 54h], 2bch
        ; Exact mapped bytes E8 69 8C 08 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x8c
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [esi + 3ech]
        xor edi, edi
        mov dword ptr [edx + 7ch], edi
        mov ecx, dword ptr [esi + 3ech]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 8B 0D 14 57 1C 10: mov ecx, dword ptr [0x101c5714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 28 16 04 00: call 0x100b7b00
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x16
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [ecx + 1d0h], edi
        ; Exact mapped bytes A1 18 57 1C 10: mov eax, dword ptr [0x101c5718]
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [eax + 50h], edi
        mov dword ptr [eax + 54h], 226h
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 220000h
        ; Exact mapped bytes E8 02 5C 04 00: call 0x100bc110
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x5c
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 97 67 04 00: call 0x100bccb0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x67
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 38ch]
        push edi
        ; Exact mapped bytes E8 7B BF FB FF: call 0x100324a0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xbf
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 390h]
        push edi
        ; Exact mapped bytes E8 6F BF FB FF: call 0x100324a0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xbf
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [esi + 394h]
        mov dword ptr [eax + 50h], edi
        mov eax, dword ptr [esi + 394h]
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 60h]
        cmp ecx, edi
        ; Exact mapped bytes 74 30: je 0x1007657b
        __asm _emit 0x74
        __asm _emit 0x30
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 8B 0D 50 58 1C 10: mov ecx, dword ptr [0x101c5850]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esi + 60h]
        cmp ecx, eax
        ; Exact mapped bytes 75 06: jne 0x10076563
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 89 3D 50 58 1C 10: mov dword ptr [0x101c5850], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x50
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 39 3D E4 7D 1A 10: cmp dword ptr [0x101a7de4], edi
        __asm _emit 0x39
        __asm _emit 0x3d
        __asm _emit 0xe4
        __asm _emit 0x7d
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 74 10: je 0x1007657b
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 60h]
        cmp ecx, edi
        ; Exact mapped bytes 74 06: je 0x10076578
        __asm _emit 0x74
        __asm _emit 0x06
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 60h], edi
        mov ecx, esi
        ; Exact mapped bytes E8 1E 08 00 00: call 0x10076da0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        ret
    }
}
