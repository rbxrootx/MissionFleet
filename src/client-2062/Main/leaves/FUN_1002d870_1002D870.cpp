// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1002D870 .. +0x12D bytes.
extern "C" __declspec(naked) void FUN_1002d870_1002D870() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        mov eax, dword ptr [esi + 0a024h]
        push edi
        push 7
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        and eax, 0eefdh
        mov dword ptr [esi + 58h], edi
        or eax, 0e05h
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes E8 31 3A 00 00: call 0x100312d0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 C6 E8 13 00: call 0x1016c170
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 9fech]
        cmp ecx, edi
        ; Exact mapped bytes 0F 84 B6 00 00 00: je 0x1002d96e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 35h
        ; Exact mapped bytes 7E 11: jle 0x1002d8d7
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        cmp eax, edi
        ; Exact mapped bytes 74 07: je 0x1002d8d7
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 0d40h
        ; Exact mapped bytes EB 02: jmp 0x1002d8d9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        cmp eax, edi
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x1002d908
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 1cah
        ; Exact mapped bytes 7E 12: jle 0x1002d92b
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, edi
        ; Exact mapped bytes 74 08: je 0x1002d92b
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 728h]
        ; Exact mapped bytes EB 02: jmp 0x1002d92d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 9ff0h]
        push eax
        ; Exact mapped bytes E8 C7 81 FE FF: call 0x10015b00
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x81
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [esi + 9ff4h]
        mov dword ptr [eax + 28h], 100h
        mov dword ptr [eax + 84h], edi
        mov dword ptr [eax + 8ch], 40000000h
        mov ecx, dword ptr [esi + 9ff4h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push edi
        push edi
        ; Exact mapped bytes E8 02 EF 01 00: call 0x1004c870
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xef
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 9ff4h]
        cmp eax, edi
        ; Exact mapped bytes 74 1F: je 0x1002d997
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [eax + 28h]
        mov dword ptr [eax + 84h], ecx
        mov ecx, dword ptr [esi + 9ff4h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        ; Exact mapped bytes 8B 0D FC 56 1C 10: mov ecx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov dword ptr [esi + 58h], edi
        pop edi
        pop esi
        ret
    }
}
