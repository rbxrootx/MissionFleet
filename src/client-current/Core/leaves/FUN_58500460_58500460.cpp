// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58500460 .. +0x321 bytes.
extern "C" __declspec(naked) void FUN_58500460_58500460() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887ffa7h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 120h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 128h], ecx
        push 1
        ; Exact mapped bytes E8 6C 0B 33 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x0b
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 120h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 120h], 0
        ; Exact mapped bytes 74 18: je 0x585004c9
        __asm _emit 0x74
        __asm _emit 0x18
        push 588a3420h
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 FF FB FF FF: call 0x585000c0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 124h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585004d3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 124h], 0
        mov eax, dword ptr [ebp - 124h]
        mov dword ptr [ebp - 12ch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 128h]
        mov edx, dword ptr [ebp - 12ch]
        mov dword ptr [ecx], edx
        mov dword ptr [ebp - 11ch], 0
        mov eax, dword ptr [ebp - 128h]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 45 FF FF FF: call 0x58500450
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 11ch], eax
        cmp dword ptr [ebp - 11ch], 755h
        ; Exact mapped bytes 0F 84 42 02 00 00: je 0x58500763
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x42
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 100h
        push 0
        lea ecx, [ebp - 110h]
        push ecx
        ; Exact mapped bytes E8 DC C8 34 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xc8
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 11ch]
        mov dword ptr [ebp - 118h], edx
        cmp dword ptr [ebp - 118h], 17ch
        ; Exact mapped bytes 77 43: ja 0x58500592
        __asm _emit 0x77
        __asm _emit 0x43
        cmp dword ptr [ebp - 118h], 17ch
        ; Exact mapped bytes 0F 84 08 01 00 00: je 0x58500667
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 118h]
        sub eax, 6eh
        mov dword ptr [ebp - 118h], eax
        cmp dword ptr [ebp - 118h], 0fah
        ; Exact mapped bytes 0F 87 90 01 00 00: ja 0x5850070e
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 118h]
        movzx edx, byte ptr [ecx + 585007c0h]
        ; Exact mapped bytes FF 24 95 84 07 50 58: jmp dword ptr [edx*4 + 0x58500784]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x50
        __asm _emit 0x58
        cmp dword ptr [ebp - 118h], 1f4h
        ; Exact mapped bytes 0F 84 57 01 00 00: je 0x585006f9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 67 01 00 00: jmp 0x5850070e
        __asm _emit 0xe9
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 588a3428h
        ; Exact mapped bytes E8 3F 1A 02 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x1a
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 114h], eax
        ; Exact mapped bytes E9 62 01 00 00: jmp 0x58500721
        __asm _emit 0xe9
        __asm _emit 0x62
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 588a344ch
        ; Exact mapped bytes E8 27 1A 02 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x1a
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 114h], eax
        ; Exact mapped bytes E9 4A 01 00 00: jmp 0x58500721
        __asm _emit 0xe9
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 588a346ch
        ; Exact mapped bytes E8 0F 1A 02 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x1a
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 114h], eax
        ; Exact mapped bytes E9 32 01 00 00: jmp 0x58500721
        __asm _emit 0xe9
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 588a3490h
        ; Exact mapped bytes E8 F7 19 02 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 114h], eax
        ; Exact mapped bytes E9 1A 01 00 00: jmp 0x58500721
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 588a34bch
        ; Exact mapped bytes E8 DF 19 02 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 114h], eax
        ; Exact mapped bytes E9 02 01 00 00: jmp 0x58500721
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 588a34dch
        ; Exact mapped bytes E8 C7 19 02 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 114h], eax
        ; Exact mapped bytes E9 EA 00 00 00: jmp 0x58500721
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588a34fch
        ; Exact mapped bytes E8 AF 19 02 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 114h], eax
        ; Exact mapped bytes E9 D2 00 00 00: jmp 0x58500721
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588a3524h
        ; Exact mapped bytes E8 97 19 02 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 114h], eax
        ; Exact mapped bytes E9 BA 00 00 00: jmp 0x58500721
        __asm _emit 0xe9
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588a3548h
        ; Exact mapped bytes E8 7F 19 02 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 114h], eax
        push 588a356ch
        ; Exact mapped bytes E8 6C 19 02 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 114h], eax
        ; Exact mapped bytes E9 8F 00 00 00: jmp 0x58500721
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588a358ch
        ; Exact mapped bytes E8 54 19 02 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 114h], eax
        push 588a35ach
        ; Exact mapped bytes E8 41 19 02 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 114h], eax
        ; Exact mapped bytes EB 67: jmp 0x58500721
        __asm _emit 0xeb
        __asm _emit 0x67
        push 588a35d0h
        ; Exact mapped bytes E8 2C 19 02 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 114h], eax
        ; Exact mapped bytes EB 52: jmp 0x58500721
        __asm _emit 0xeb
        __asm _emit 0x52
        push 588a35f8h
        ; Exact mapped bytes E8 17 19 02 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 114h], eax
        ; Exact mapped bytes EB 3D: jmp 0x58500721
        __asm _emit 0xeb
        __asm _emit 0x3d
        push 588a3620h
        ; Exact mapped bytes E8 02 19 02 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 114h], eax
        ; Exact mapped bytes EB 28: jmp 0x58500721
        __asm _emit 0xeb
        __asm _emit 0x28
        push 588a3640h
        ; Exact mapped bytes E8 ED 18 02 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 114h], eax
        ; Exact mapped bytes EB 13: jmp 0x58500721
        __asm _emit 0xeb
        __asm _emit 0x13
        push 588a365ch
        ; Exact mapped bytes E8 D8 18 02 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 114h], eax
        mov eax, dword ptr [ebp - 11ch]
        push eax
        push 588a3684h
        ; Exact mapped bytes E8 BE 18 02 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        push eax
        push 1
        lea ecx, [ebp - 110h]
        push ecx
        ; Exact mapped bytes E8 AC 06 FB FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 10h
        push 10h
        lea edx, [ebp - 110h]
        push edx
        mov eax, dword ptr [ebp - 114h]
        push eax
        push 0
        ; Exact mapped bytes FF 15 6C 44 89 58: call dword ptr [0x5889446c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x58500768
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 D3 08 33 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x08
        __asm _emit 0x33
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
