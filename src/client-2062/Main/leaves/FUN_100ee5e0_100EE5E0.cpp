// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100EE5E0 .. +0x1AB bytes.
extern "C" __declspec(naked) void FUN_100ee5e0_100EE5E0() {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        xor ebx, ebx
        mov edi, dword ptr [esi + 0f10h]
        mov dword ptr [esi + 84h], ebx
        push edi
        ; Exact mapped bytes E8 05 09 01 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 9D 09 01 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, dword ptr [esi + 0f14h]
        mov ecx, esi
        push edi
        ; Exact mapped bytes E8 EF 08 01 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 87 09 01 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, dword ptr [esi + 1034h]
        mov ecx, esi
        push edi
        ; Exact mapped bytes E8 D9 08 01 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 71 09 01 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0f10h]
        mov eax, 0fffeh
        lea ebp, [esi + 0f7ch]
        mov dword ptr [esp + 10h], 8
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0f14h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0f0ch]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0eech]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0ef0h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0ef4h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0ef8h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0f24h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 1034h]
        ; Exact mapped bytes 66 81 61 24 F0 FF: and word ptr [ecx + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x61
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 5c04h]
        mov ecx, dword ptr [ecx + 3b4h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov edx, dword ptr [esi + 5c08h]
        mov ecx, dword ptr [edx + 3b4h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 5ce0h]
        mov dword ptr [esi + 5c64h], 1
        mov dword ptr [esi + 5c60h], ebx
        mov dword ptr [esi + 5c5ch], ebx
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov edi, dword ptr [ebp]
        cmp edi, ebx
        ; Exact mapped bytes 74 0F: je 0x100ee6f4
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [edi + 0ch]
        ; Exact mapped bytes E8 63 DA F1 FF: call 0x1000c150
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xda
        __asm _emit 0xf1
        __asm _emit 0xff
        mov edi, dword ptr [edi + 8]
        cmp edi, ebx
        ; Exact mapped bytes 75 F1: jne 0x100ee6e5
        __asm _emit 0x75
        __asm _emit 0xf1
        mov edi, dword ptr [ebp]
        cmp edi, ebx
        ; Exact mapped bytes 74 13: je 0x100ee70e
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, edi
        mov edi, dword ptr [edi + 8]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100ee70a
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        cmp edi, ebx
        ; Exact mapped bytes 75 ED: jne 0x100ee6fb
        __asm _emit 0x75
        __asm _emit 0xed
        mov eax, dword ptr [esp + 10h]
        mov dword ptr [ebp + 4], ebx
        mov dword ptr [ebp], ebx
        mov dword ptr [ebp + 8], ebx
        add ebp, 10h
        dec eax
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 75 B9: jne 0x100ee6de
        __asm _emit 0x75
        __asm _emit 0xb9
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 21714h], ebx
        ; Exact mapped bytes 74 24: je 0x100ee757
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [edx + 4], esi
        ; Exact mapped bytes 75 19: jne 0x100ee757
        __asm _emit 0x75
        __asm _emit 0x19
        mov eax, dword ptr [esi + 5c04h]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 5c08h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        ; Exact mapped bytes E8 CD 1B F8 FF: call 0x10070330
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x1b
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        test byte ptr [eax + 10560h], 1
        ; Exact mapped bytes 74 14: je 0x100ee785
        __asm _emit 0x74
        __asm _emit 0x14
        cmp dword ptr [esi + 5c54h], ebx
        ; Exact mapped bytes 75 0C: jne 0x100ee785
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [eax + 21a4ch]
        push esi
        ; Exact mapped bytes E8 2B 5E F3 FF: call 0x100245b0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x5e
        __asm _emit 0xf3
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}
