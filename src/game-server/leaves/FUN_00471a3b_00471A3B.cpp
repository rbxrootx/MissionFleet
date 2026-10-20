// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00471A3B .. +0x320 bytes.
extern "C" __declspec(naked) void FUN_00471a3b_00471A3B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0b8h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 0b8h]
        mov ecx, 2eh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 0b8h], ecx
        mov ecx, dword ptr [ebp - 0b8h]
        add ecx, 38h
        ; Exact mapped bytes E8 62 8A F9 FF: call 0x40a4d0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x8a
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov cl, byte ptr [eax + 180h]
        mov byte ptr [ebp - 0a8h], cl
        mov edx, dword ptr [ebp + 8]
        mov al, byte ptr [edx + 178h]
        mov byte ptr [ebp - 4], al
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 91 70 01 00 00: mov dx, word ptr [ecx + 0x170]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 95 54 FF FF FF: mov word ptr [ebp - 0xac], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 88 84 01 00 00: mov cx, word ptr [eax + 0x184]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 8D 56 FF FF FF: mov word ptr [ebp - 0xaa], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x56
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        mov al, byte ptr [edx + 17ch]
        mov byte ptr [ebp - 3], al
        mov ecx, dword ptr [ebp - 0b8h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 180h]
        shl ecx, 6
        lea ecx, [edx + ecx + 0cb0h]
        ; Exact mapped bytes E8 48 2D F9 FF: call 0x404820
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x2d
        __asm _emit 0xf9
        __asm _emit 0xff
        mov byte ptr [ebp - 0a7h], al
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 16ch]
        imul edx, edx, 370h
        lea esi, [eax + edx + 16be0h]
        mov ecx, 17h
        lea edi, [ebp - 68h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 16ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 0b8h]
        mov ecx, dword ptr [eax + 4]
        mov ecx, dword ptr [ecx + 40ca8h]
        ; Exact mapped bytes E8 A0 18 01 00: call 0x4833c9
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        and eax, 0ffffh
        imul eax, eax, 0ah
        ; Exact mapped bytes 66 89 45 FE: mov word ptr [ebp - 2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfe
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 1a0h]
        mov ecx, dword ptr [edx + 1a4h]
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 150h
        mov esi, esp
        push edx
        push 5bb270h
        lea eax, [ebp - 0a6h]
        push eax
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 6E 6C 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x6c
        __asm _emit 0x03
        __asm _emit 0x00
        push 24h
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        add edx, 54h
        push edx
        lea eax, [ebp - 8ch]
        push eax
        ; Exact mapped bytes E8 93 74 03 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        push 0ach
        lea ecx, [ebp - 0ach]
        push ecx
        mov ecx, dword ptr [ebp - 0b8h]
        add ecx, 38h
        ; Exact mapped bytes E8 1C F4 F9 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xf4
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 0b0h], 0
        ; Exact mapped bytes EB 0F: jmp 0x471bc5
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 0b0h]
        add edx, 1
        mov dword ptr [ebp - 0b0h], edx
        cmp dword ptr [ebp - 0b0h], 20h
        ; Exact mapped bytes 0F 83 01 01 00 00: jae 0x471cd3
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 16ch]
        imul eax, eax, 370h
        lea ecx, [ecx + eax + 16bdch]
        mov edx, dword ptr [ebp - 0b0h]
        imul edx, edx, 0ah
        ; Exact mapped bytes 66 8B 84 11 2E 01 00 00: mov ax, word ptr [ecx + edx + 0x12e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 25 0F 00: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x0f
        __asm _emit 0x00
        and eax, 0ffffh
        cmp eax, 5
        ; Exact mapped bytes 74 7E: je 0x471c8e
        __asm _emit 0x74
        __asm _emit 0x7e
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 16ch]
        imul ecx, ecx, 370h
        lea edx, [edx + ecx + 16bdch]
        mov eax, dword ptr [ebp - 0b0h]
        imul eax, eax, 0ah
        ; Exact mapped bytes 66 8B 8C 02 2E 01 00 00: mov cx, word ptr [edx + eax + 0x12e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        and ecx, 0ffffh
        cmp ecx, 6
        ; Exact mapped bytes 74 3F: je 0x471c8e
        __asm _emit 0x74
        __asm _emit 0x3f
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 16ch]
        imul edx, edx, 370h
        lea eax, [eax + edx + 16bdch]
        mov ecx, dword ptr [ebp - 0b0h]
        imul ecx, ecx, 0ah
        ; Exact mapped bytes 66 8B 94 08 2E 01 00 00: mov dx, word ptr [eax + ecx + 0x12e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        and edx, 0ffffh
        cmp edx, 0dh
        ; Exact mapped bytes 75 40: jne 0x471cce
        __asm _emit 0x75
        __asm _emit 0x40
        push 0ah
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 16ch]
        imul eax, eax, 370h
        lea ecx, [ecx + eax + 16bdch]
        mov edx, dword ptr [ebp - 0b0h]
        imul edx, edx, 0ah
        lea eax, [ecx + edx + 12eh]
        push eax
        mov ecx, dword ptr [ebp - 0b8h]
        add ecx, 38h
        ; Exact mapped bytes E8 F8 F2 F9 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xf2
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes E9 E3 FE FF FF: jmp 0x471bb6
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        mov dl, byte ptr [ecx + 1a4h]
        test edx, edx
        ; Exact mapped bytes 74 27: je 0x471d09
        __asm _emit 0x74
        __asm _emit 0x27
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        mov cl, byte ptr [eax + 1a4h]
        imul ecx, ecx, 1ch
        push ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 1a8h
        push edx
        mov ecx, dword ptr [ebp - 0b8h]
        add ecx, 38h
        ; Exact mapped bytes E8 BD F2 F9 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xf2
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 29: je 0x471d38
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 0b8h]
        add ecx, 38h
        ; Exact mapped bytes E8 73 87 F9 FF: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x87
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 0b4h], eax
        push 4
        lea eax, [ebp - 0b4h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 EB 72 03 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x72
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 0b8h]
        add ecx, 38h
        ; Exact mapped bytes E8 2A 87 F9 FF: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x87
        __asm _emit 0xf9
        __asm _emit 0xff
        pop edi
        pop esi
        add esp, 0b8h
        cmp ebp, esp
        ; Exact mapped bytes E8 8B 6A 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x6a
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
