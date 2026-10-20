// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5881DF50 .. +0x1C4 bytes.
extern "C" __declspec(naked) void FUN_5881df50() {
    __asm {
        mov eax, dword ptr [esp + 8]
        push esi
        mov esi, ecx
        cmp eax, 0ee49h
        ; Exact mapped bytes 0F 85 E7 00 00 00: jne 0x5881e049
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 8]
        cmp eax, dword ptr [esi + 0d8h]
        ; Exact mapped bytes 74 08: je 0x5881df76
        __asm _emit 0x74
        __asm _emit 0x08
        cmp eax, esi
        ; Exact mapped bytes 0F 85 98 01 00 00: jne 0x5881e10e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 10h]
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5881df92
        __asm _emit 0x75
        __asm _emit 0x14
        or byte ptr [esi + 0d0h], 2
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 00 B2 F9 FF: call 0x587b9190
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xb2
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 52: jmp 0x5881dfe4
        __asm _emit 0xeb
        __asm _emit 0x52
        cmp eax, 1
        ; Exact mapped bytes 75 41: jne 0x5881dfd8
        __asm _emit 0x75
        __asm _emit 0x41
        or byte ptr [esi + 0d0h], 4
        ; Exact mapped bytes 66 83 3D A8 B4 A0 58 06: cmp word ptr [0x58a0b4a8], 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xa8
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        __asm _emit 0x06
        mov al, byte ptr [esi + 0d0h]
        ; Exact mapped bytes 75 20: jne 0x5881dfce
        __asm _emit 0x75
        __asm _emit 0x20
        cmp al, 0fh
        ; Exact mapped bytes 74 1C: je 0x5881dfce
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80013115h
        ; Exact mapped bytes E8 A4 2C 15 00: call 0x58970c70
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x2c
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes EB 16: jmp 0x5881dfe4
        __asm _emit 0xeb
        __asm _emit 0x16
        or al, 8
        mov byte ptr [esi + 0d0h], al
        ; Exact mapped bytes EB 0C: jmp 0x5881dfe4
        __asm _emit 0xeb
        __asm _emit 0x0c
        cmp eax, 2
        ; Exact mapped bytes 75 07: jne 0x5881dfe4
        __asm _emit 0x75
        __asm _emit 0x07
        or byte ptr [esi + 0d0h], 8
        cmp byte ptr [esi + 0d0h], 0fh
        ; Exact mapped bytes 0F 85 1D 01 00 00: jne 0x5881e10e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 0d20h], 0
        ; Exact mapped bytes 0F 84 10 01 00 00: je 0x5881e10e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 10101h
        push 0
        push 5899da58h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 0d14h]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 CD 3B F3 FF: call 0x58751bf0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x3b
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0dch]
        mov dword ptr [esi + 0d20h], 0
        mov ecx, dword ptr [eax + 0bch]
        mov dword ptr [ecx + 10ch], 1
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, 0ee4ah
        ; Exact mapped bytes 75 1B: jne 0x5881e06b
        __asm _emit 0x75
        __asm _emit 0x1b
        mov edx, dword ptr [esp + 8]
        cmp edx, dword ptr [esi + 0d8h]
        ; Exact mapped bytes 0F 85 AE 00 00 00: jne 0x5881e10e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 4E 24 02: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x02
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 0F 84 9A 00 00 00: je 0x5881e10e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 0f230h
        ; Exact mapped bytes 75 20: jne 0x5881e09b
        __asm _emit 0x75
        __asm _emit 0x20
        mov eax, dword ptr [esp + 8]
        cmp eax, dword ptr [esi + 0d14h]
        ; Exact mapped bytes 0F 85 83 00 00 00: jne 0x5881e10e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 0d18h], 0
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, 0f231h
        ; Exact mapped bytes 75 6C: jne 0x5881e10e
        __asm _emit 0x75
        __asm _emit 0x6c
        mov ecx, dword ptr [esp + 8]
        cmp ecx, dword ptr [esi + 0d8h]
        ; Exact mapped bytes 75 60: jne 0x5881e10e
        __asm _emit 0x75
        __asm _emit 0x60
        cmp dword ptr [esp + 10h], 1
        ; Exact mapped bytes 75 59: jne 0x5881e10e
        __asm _emit 0x75
        __asm _emit 0x59
        mov edx, dword ptr [esi + 64h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 74 4E: je 0x5881e10e
        __asm _emit 0x74
        __asm _emit 0x4e
        cmp dword ptr [esi + 0d20h], 0
        ; Exact mapped bytes 74 25: je 0x5881e0ee
        __asm _emit 0x74
        __asm _emit 0x25
        push 0
        push 0
        push 10101h
        push 0
        push 5899da2ch
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 0d14h]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 02 3B F3 FF: call 0x58751bf0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x3b
        __asm _emit 0xf3
        __asm _emit 0xff
        mov al, byte ptr [esi + 0d0h]
        mov cl, al
        or cl, 4
        ; Exact mapped bytes 74 08: je 0x5881e103
        __asm _emit 0x74
        __asm _emit 0x08
        xor al, 4
        mov byte ptr [esi + 0d0h], al
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 82 B0 F9 FF: call 0x587b9190
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xb0
        __asm _emit 0xf9
        __asm _emit 0xff
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
