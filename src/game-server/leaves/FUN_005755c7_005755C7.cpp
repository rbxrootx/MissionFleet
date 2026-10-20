// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005755C7 .. +0x430 bytes.
extern "C" __declspec(naked) void FUN_005755c7_005755C7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 140h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 114h], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 110h], 0
        push 1
        push 20h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 54 A8 F5 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xa8
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x57561a
        __asm _emit 0x75
        __asm _emit 0x14
        push 5deh
        push 5cbcc4h
        ; Exact mapped bytes E8 EB F3 FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xf3
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x57561a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x5755f5
        __asm _emit 0x75
        __asm _emit 0xd5
        push 5dfh
        push 5cbcc4h
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 2D 5B F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x5b
        __asm _emit 0xf8
        __asm _emit 0xff
        push 20h
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 30 3D F3 FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x3d
        __asm _emit 0xf3
        __asm _emit 0xff
        add esp, 0ch
        lea ecx, [ebp - 10ch]
        mov dword ptr [ebp - 0ch], ecx
        push 587d98h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 37 5A F8 FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x5a
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 8A 01 00 00: je 0x5757eb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 118h], edx
        mov ecx, dword ptr [ebp - 118h]
        add ecx, 10h
        ; Exact mapped bytes E8 32 B9 FB FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xb9
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes 66 8B 51 0C: mov dx, word ptr [ecx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 66 89 10: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 118h]
        mov edx, dword ptr [ecx + 14h]
        mov dword ptr [eax + 10h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 118h]
        mov edx, dword ptr [ecx + 20h]
        mov dword ptr [eax + 1ch], edx
        mov ecx, dword ptr [ebp - 118h]
        add ecx, 18h
        ; Exact mapped bytes E8 D5 B8 FB FF: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xb8
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 8A 00 00 00: jne 0x575749
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 118h]
        add ecx, 18h
        ; Exact mapped bytes E8 DD B8 FB FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xb8
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 110h], eax
        cmp dword ptr [ebp - 110h], 0
        ; Exact mapped bytes 75 0C: jne 0x5756e8
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 11ch], 0
        ; Exact mapped bytes EB 4E: jmp 0x575736
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov eax, dword ptr [ebp - 110h]
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 114h], eax
        mov eax, dword ptr [ebp - 114h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 B0 40 F3 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x40
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 120h], esp
        mov ecx, dword ptr [ebp - 114h]
        push ecx
        mov edx, dword ptr [ebp - 110h]
        push edx
        mov eax, dword ptr [ebp - 120h]
        push eax
        ; Exact mapped bytes E8 90 B8 F1 FF: call 0x490fc0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xb8
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 11ch], eax
        mov ecx, dword ptr [ebp - 11ch]
        push ecx
        ; Exact mapped bytes FF 15 F8 24 5E 00: call dword ptr [0x5e24f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 0ch], eax
        mov ecx, dword ptr [ebp - 118h]
        add ecx, 1ch
        ; Exact mapped bytes E8 35 B8 FB FF: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xb8
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 8A 00 00 00: jne 0x5757e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 118h]
        add ecx, 1ch
        ; Exact mapped bytes E8 3D B8 FB FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xb8
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 110h], eax
        cmp dword ptr [ebp - 110h], 0
        ; Exact mapped bytes 75 0C: jne 0x575788
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 124h], 0
        ; Exact mapped bytes EB 4E: jmp 0x5757d6
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov eax, dword ptr [ebp - 110h]
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 114h], eax
        mov eax, dword ptr [ebp - 114h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 10 40 F3 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x40
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 128h], esp
        mov ecx, dword ptr [ebp - 114h]
        push ecx
        mov edx, dword ptr [ebp - 110h]
        push edx
        mov eax, dword ptr [ebp - 128h]
        push eax
        ; Exact mapped bytes E8 F0 B7 F1 FF: call 0x490fc0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xb7
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 124h], eax
        mov ecx, dword ptr [ebp - 124h]
        push ecx
        ; Exact mapped bytes FF 15 F8 24 5E 00: call dword ptr [0x5e24f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 4], eax
        ; Exact mapped bytes EB 4F: jmp 0x57583a
        __asm _emit 0xeb
        __asm _emit 0x4f
        push 584838h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 98 58 F8 FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x58
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x57581c
        __asm _emit 0x74
        __asm _emit 0x20
        push 100h
        lea eax, [ebp - 10ch]
        push eax
        push 0f10ah
        ; Exact mapped bytes E8 2E 54 F8 FF: call 0x4fac40
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x54
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 C7 01 0A F1: mov word ptr [ecx], 0xf10a
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x0a
        __asm _emit 0xf1
        ; Exact mapped bytes EB 1E: jmp 0x57583a
        __asm _emit 0xeb
        __asm _emit 0x1e
        push 100h
        lea edx, [ebp - 10ch]
        push edx
        push 0f108h
        ; Exact mapped bytes E8 0E 54 F8 FF: call 0x4fac40
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x54
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 C7 00 08 F1: mov word ptr [eax], 0xf108
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0xf1
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 110h], ecx
        cmp dword ptr [ebp - 110h], 0
        ; Exact mapped bytes 75 0C: jne 0x575858
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 12ch], 0
        ; Exact mapped bytes EB 4E: jmp 0x5758a6
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov edx, dword ptr [ebp - 110h]
        push edx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 114h], eax
        mov eax, dword ptr [ebp - 114h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 40 3F F3 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x3f
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 130h], esp
        mov eax, dword ptr [ebp - 114h]
        push eax
        mov ecx, dword ptr [ebp - 110h]
        push ecx
        mov edx, dword ptr [ebp - 130h]
        push edx
        ; Exact mapped bytes E8 20 B7 F1 FF: call 0x490fc0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xb7
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 12ch], eax
        mov eax, dword ptr [ebp - 12ch]
        push eax
        ; Exact mapped bytes FF 15 F8 24 5E 00: call dword ptr [0x5e24f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], eax
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 0F 85 81 00 00 00: jne 0x575947
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 E1 FC FB FF: call 0x5355ac
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xfc
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 110h], eax
        cmp dword ptr [ebp - 110h], 0
        ; Exact mapped bytes 75 0C: jne 0x5758e6
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 134h], 0
        ; Exact mapped bytes EB 4E: jmp 0x575934
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov eax, dword ptr [ebp - 110h]
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 114h], eax
        mov eax, dword ptr [ebp - 114h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 B2 3E F3 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x3e
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 138h], esp
        mov ecx, dword ptr [ebp - 114h]
        push ecx
        mov edx, dword ptr [ebp - 110h]
        push edx
        mov eax, dword ptr [ebp - 138h]
        push eax
        ; Exact mapped bytes E8 92 B6 F1 FF: call 0x490fc0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xb6
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 134h], eax
        mov ecx, dword ptr [ebp - 134h]
        push ecx
        ; Exact mapped bytes FF 15 F8 24 5E 00: call dword ptr [0x5e24f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 4], eax
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 0F 85 94 00 00 00: jne 0x5759e8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x5759e8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 9A FB FB FF: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xfb
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 110h], edx
        cmp dword ptr [ebp - 110h], 0
        ; Exact mapped bytes 75 0C: jne 0x575987
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 13ch], 0
        ; Exact mapped bytes EB 4E: jmp 0x5759d5
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov eax, dword ptr [ebp - 110h]
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 114h], eax
        mov eax, dword ptr [ebp - 114h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 11 3E F3 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x3e
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 140h], esp
        mov ecx, dword ptr [ebp - 114h]
        push ecx
        mov edx, dword ptr [ebp - 110h]
        push edx
        mov eax, dword ptr [ebp - 140h]
        push eax
        ; Exact mapped bytes E8 F1 B5 F1 FF: call 0x490fc0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xb5
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 13ch], eax
        mov ecx, dword ptr [ebp - 13ch]
        push ecx
        ; Exact mapped bytes FF 15 F8 24 5E 00: call dword ptr [0x5e24f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 0ch], eax
        lea esp, [ebp - 14ch]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
