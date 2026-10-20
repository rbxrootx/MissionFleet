// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00471D5B .. +0x318 bytes.
extern "C" __declspec(naked) void FUN_00471d5b_00471D5B() {
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
        add ecx, 5ch
        ; Exact mapped bytes E8 42 87 F9 FF: call 0x40a4d0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x87
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov cl, byte ptr [eax + 180h]
        mov byte ptr [ebp - 0a8h], cl
        mov edx, dword ptr [ebp + 8]
        mov al, byte ptr [edx + 178h]
        mov byte ptr [ebp - 4], al
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 91 74 01 00 00: mov dx, word ptr [ecx + 0x174]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x74
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
        ; Exact mapped bytes E8 28 2A F9 FF: call 0x404820
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x2a
        __asm _emit 0xf9
        __asm _emit 0xff
        mov byte ptr [ebp - 0a7h], al
        mov edx, dword ptr [ebp + 8]
        mov esi, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B8 90 FD FF: call 0x44aec7
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x90
        __asm _emit 0xfd
        __asm _emit 0xff
        imul eax, eax, 370h
        lea esi, [esi + eax + 16be0h]
        mov ecx, 17h
        lea edi, [ebp - 68h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 99 90 FD FF: call 0x44aec7
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0b8h]
        mov edx, dword ptr [ecx + 4]
        mov ecx, dword ptr [edx + 40ca8h]
        ; Exact mapped bytes E8 82 15 01 00: call 0x4833c9
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        and eax, 0ffffh
        imul eax, eax, 0ah
        ; Exact mapped bytes 66 89 45 FE: mov word ptr [ebp - 2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfe
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 528h]
        mov edx, dword ptr [eax + 52ch]
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 8]
        add eax, 150h
        mov esi, esp
        push eax
        push 5bb274h
        lea ecx, [ebp - 0a6h]
        push ecx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 51 69 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x69
        __asm _emit 0x03
        __asm _emit 0x00
        push 24h
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        add eax, 54h
        push eax
        lea ecx, [ebp - 8ch]
        push ecx
        ; Exact mapped bytes E8 76 71 03 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x71
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        push 0ach
        lea edx, [ebp - 0ach]
        push edx
        mov ecx, dword ptr [ebp - 0b8h]
        add ecx, 5ch
        ; Exact mapped bytes E8 FF F0 F9 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xf0
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 0b0h], 0
        ; Exact mapped bytes EB 0F: jmp 0x471ee2
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 0b0h]
        add eax, 1
        mov dword ptr [ebp - 0b0h], eax
        cmp dword ptr [ebp - 0b0h], 20h
        ; Exact mapped bytes 0F 83 FD 00 00 00: jae 0x471fec
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov esi, dword ptr [ecx + 168h]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C7 8F FD FF: call 0x44aec7
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x8f
        __asm _emit 0xfd
        __asm _emit 0xff
        imul eax, eax, 370h
        lea edx, [esi + eax + 16bdch]
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
        cmp ecx, 5
        ; Exact mapped bytes 74 7B: je 0x471fa8
        __asm _emit 0x74
        __asm _emit 0x7b
        mov edx, dword ptr [ebp + 8]
        mov esi, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 89 8F FD FF: call 0x44aec7
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x8f
        __asm _emit 0xfd
        __asm _emit 0xff
        imul eax, eax, 370h
        lea eax, [esi + eax + 16bdch]
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
        cmp edx, 6
        ; Exact mapped bytes 74 3D: je 0x471fa8
        __asm _emit 0x74
        __asm _emit 0x3d
        mov eax, dword ptr [ebp + 8]
        mov esi, dword ptr [eax + 168h]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4B 8F FD FF: call 0x44aec7
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x8f
        __asm _emit 0xfd
        __asm _emit 0xff
        imul eax, eax, 370h
        lea ecx, [esi + eax + 16bdch]
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
        cmp eax, 0dh
        ; Exact mapped bytes 75 3F: jne 0x471fe7
        __asm _emit 0x75
        __asm _emit 0x3f
        push 0ah
        mov ecx, dword ptr [ebp + 8]
        mov esi, dword ptr [ecx + 168h]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0C 8F FD FF: call 0x44aec7
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x8f
        __asm _emit 0xfd
        __asm _emit 0xff
        imul eax, eax, 370h
        lea edx, [esi + eax + 16bdch]
        mov eax, dword ptr [ebp - 0b0h]
        imul eax, eax, 0ah
        lea ecx, [edx + eax + 12eh]
        push ecx
        mov ecx, dword ptr [ebp - 0b8h]
        add ecx, 5ch
        ; Exact mapped bytes E8 DF EF F9 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xef
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes E9 E7 FE FF FF: jmp 0x471ed3
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        mov al, byte ptr [edx + 1a4h]
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x472021
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        mov dl, byte ptr [ecx + 52ch]
        imul edx, edx, 1ch
        push edx
        mov eax, dword ptr [ebp + 8]
        add eax, 530h
        push eax
        mov ecx, dword ptr [ebp - 0b8h]
        add ecx, 5ch
        ; Exact mapped bytes E8 A5 EF F9 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xef
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 29: je 0x472050
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 0b8h]
        add ecx, 5ch
        ; Exact mapped bytes E8 5B 84 F9 FF: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x84
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 0b4h], eax
        push 4
        lea ecx, [ebp - 0b4h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 D3 6F 03 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x6f
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 0b8h]
        add ecx, 5ch
        ; Exact mapped bytes E8 12 84 F9 FF: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x84
        __asm _emit 0xf9
        __asm _emit 0xff
        pop edi
        pop esi
        add esp, 0b8h
        cmp ebp, esp
        ; Exact mapped bytes E8 73 67 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x67
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
