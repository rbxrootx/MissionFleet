// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100B6560 .. +0x166 bytes.
extern "C" __declspec(naked) void FUN_100b6560_100B6560() {
    __asm {
        ; Exact mapped bytes 66 8B 44 24 04: mov ax, word ptr [esp + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        push esi
        ; Exact mapped bytes 66 3D 02 00: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 0F 87 52 01 00 00: ja 0x100b66c2
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 01 00: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 81 B0 00 00 00: mov word ptr [ecx + 0xb0], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 AC 00 00 00: jne 0x100b662d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 60h]
        cmp dword ptr [eax + 164h], 43h
        ; Exact mapped bytes 7E 12: jle 0x100b659f
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100b659f
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 10ch]
        ; Exact mapped bytes EB 02: jmp 0x100b65a1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [ecx + 6ch]
        test eax, eax
        mov dword ptr [edx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100b65d3
        __asm _emit 0x74
        __asm _emit 0x28
        mov esi, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [edx + 0ch], esi
        mov esi, dword ptr [eax - 4]
        mov dword ptr [edx + 10h], esi
        mov esi, dword ptr [eax]
        add edx, 14h
        mov dword ptr [edx], esi
        mov esi, dword ptr [eax + 4]
        mov dword ptr [edx + 4], esi
        mov esi, dword ptr [eax + 8]
        mov dword ptr [edx + 8], esi
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edx + 0ch], eax
        mov eax, dword ptr [ecx + 60h]
        cmp dword ptr [eax + 164h], 44h
        ; Exact mapped bytes 7E 12: jle 0x100b65f1
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100b65f1
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 110h]
        ; Exact mapped bytes EB 02: jmp 0x100b65f3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ecx + 70h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 0F 84 C1 00 00 00: je 0x100b66c2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        pop esi
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 02 00: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 75 7B: jne 0x100b66ae
        __asm _emit 0x75
        __asm _emit 0x7b
        mov eax, dword ptr [ecx + 60h]
        cmp dword ptr [eax + 164h], 45h
        ; Exact mapped bytes 7E 12: jle 0x100b6651
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100b6651
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 114h]
        ; Exact mapped bytes EB 02: jmp 0x100b6653
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [ecx + 6ch]
        test eax, eax
        mov dword ptr [edx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100b6685
        __asm _emit 0x74
        __asm _emit 0x28
        mov esi, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [edx + 0ch], esi
        mov esi, dword ptr [eax - 4]
        mov dword ptr [edx + 10h], esi
        mov esi, dword ptr [eax]
        add edx, 14h
        mov dword ptr [edx], esi
        mov esi, dword ptr [eax + 4]
        mov dword ptr [edx + 4], esi
        mov esi, dword ptr [eax + 8]
        mov dword ptr [edx + 8], esi
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edx + 0ch], eax
        mov eax, dword ptr [ecx + 60h]
        cmp dword ptr [eax + 164h], 46h
        ; Exact mapped bytes 0F 8E 5C FF FF FF: jle 0x100b65f1
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 4E FF FF FF: je 0x100b65f1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax + 118h]
        ; Exact mapped bytes E9 45 FF FF FF: jmp 0x100b65f3
        __asm _emit 0xe9
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ecx + 6ch]
        mov dword ptr [eax + 50h], 0
        mov ecx, dword ptr [ecx + 70h]
        mov dword ptr [ecx + 50h], 0
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
