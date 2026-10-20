// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58532B70 .. +0x3E6 bytes.
extern "C" __declspec(naked) void FUN_58532b70_58532B70() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888299ah
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 148h
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
        mov dword ptr [ebp - 114h], ecx
        mov eax, dword ptr [ebp - 114h]
        cmp dword ptr [eax + 121b0h], 0
        ; Exact mapped bytes 74 5B: je 0x58532c0b
        __asm _emit 0x74
        __asm _emit 0x5b
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 121b0h]
        mov dword ptr [ebp - 124h], edx
        cmp dword ptr [ebp - 124h], 0
        ; Exact mapped bytes 74 26: je 0x58532bf1
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 134h], edx
        push 1
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes FF 95 CC FE FF FF: call dword ptr [ebp - 0x134]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xcc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 138h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58532bfb
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 138h], 0
        mov eax, dword ptr [ebp - 114h]
        mov dword ptr [eax + 121b0h], 0
        push 8
        mov ecx, 5890bef0h
        ; Exact mapped bytes E8 59 4F F9 FF: call 0x584c7b70
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x4f
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 CE 5E FF FF: call 0x58528af0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x5e
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 B1 31 F5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x31
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D6 69 FB FF: call 0x584e9610
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x69
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 120h], eax
        mov ecx, dword ptr [ebp - 114h]
        movzx edx, word ptr [ecx + 121b4h]
        push edx
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 87 0C 00 00: call 0x585338e0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 114h]
        movzx ecx, word ptr [eax + 121b4h]
        and ecx, 0ff00h
        sar ecx, 8
        mov byte ptr [ebp - 115h], cl
        mov edx, 0a9h
        ; Exact mapped bytes 66 89 95 E4 FE FF FF: mov word ptr [ebp - 0x11c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, byte ptr [ebp - 115h]
        test eax, eax
        ; Exact mapped bytes 0F 8E 88 00 00 00: jle 0x58532d18
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 120h], 0
        ; Exact mapped bytes 74 7F: je 0x58532d18
        __asm _emit 0x74
        __asm _emit 0x7f
        ; Exact mapped bytes EB 11: jmp 0x58532cac
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 0A 94 F5 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x94
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 120h], eax
        cmp dword ptr [ebp - 120h], 0
        ; Exact mapped bytes 74 63: je 0x58532d18
        __asm _emit 0x74
        __asm _emit 0x63
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 20 92 F5 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x92
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 128h], eax
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 9F 06 F9 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x06
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 54h]
        shr ecx, 1
        and ecx, 7fffffffh
        cmp ecx, 1
        ; Exact mapped bytes 75 35: jne 0x58532d16
        __asm _emit 0x75
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 84 06 F9 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 0E: mov dx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        movzx ecx, byte ptr [ebp - 115h]
        cmp eax, ecx
        ; Exact mapped bytes 75 14: jne 0x58532d16
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 43 6A FF FF: call 0x58529750
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x6a
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 85 E4 FE FF FF: mov word ptr [ebp - 0x11c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58532d18
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 83: jmp 0x58532c9b
        __asm _emit 0xeb
        __asm _emit 0x83
        movzx edx, word ptr [ebp - 11ch]
        push edx
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B5 0B 00 00: call 0x585338e0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 114h]
        mov dword ptr [eax + 94h], 40000000h
        mov ecx, dword ptr [ebp - 114h]
        cmp dword ptr [ecx + 98h], 40000000h
        ; Exact mapped bytes 75 34: jne 0x58532d81
        __asm _emit 0x75
        __asm _emit 0x34
        mov edx, dword ptr [ebp - 114h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov ecx, 0e0ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 200h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 114h]
        mov dword ptr [edx + 1214ch], 16h
        ; Exact mapped bytes A1 EC 90 94 58: mov eax, dword ptr [0x589490ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes A3 64 05 96 58: mov dword ptr [0x58960564], eax
        __asm _emit 0xa3
        __asm _emit 0x64
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        push 30000h
        ; Exact mapped bytes 8B 0D 3C 06 96 58: mov ecx, dword ptr [0x5896063c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D5 C1 19 00: call 0x586cef70
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xc1
        __asm _emit 0x19
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5A 0C 05 00: call 0x58583a00
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x0c
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7F 69 FF FF: call 0x58529730
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x69
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 140h], eax
        ; Exact mapped bytes 8B 0D 54 05 96 58: mov ecx, dword ptr [0x58960554]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 13ch], ecx
        mov edx, dword ptr [ebp - 13ch]
        push edx
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 8B 29 0E 00: call 0x58615760
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x29
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 114h]
        mov dword ptr [eax + 0a8h], 0
        push 100h
        push 0
        lea ecx, [ebp - 110h]
        push ecx
        ; Exact mapped bytes E8 18 A0 31 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xa0
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 9958h]
        push eax
        mov ecx, dword ptr [ebp - 114h]
        add ecx, 148h
        push ecx
        push 588a4500h
        lea edx, [ebp - 110h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        ; Exact mapped bytes 83 3D 98 75 94 58 00: cmp dword ptr [0x58947598], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 5F: jne 0x58532e92
        __asm _emit 0x75
        __asm _emit 0x5f
        push 1a0h
        ; Exact mapped bytes E8 C7 E1 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xe1
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 12ch], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 12ch], 0
        ; Exact mapped bytes 74 13: je 0x58532e69
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 7F BA 03 00: call 0x5856e8e0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xba
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 130h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58532e73
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 130h], 0
        mov eax, dword ptr [ebp - 130h]
        mov dword ptr [ebp - 144h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes 89 0D 98 75 94 58: mov dword ptr [0x58947598], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        push 0
        lea edx, [ebp - 110h]
        push edx
        ; Exact mapped bytes A1 B4 56 90 58: mov eax, dword ptr [0x589056b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x56
        __asm _emit 0x90
        __asm _emit 0x58
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes 8B 0D 98 75 94 58: mov ecx, dword ptr [0x58947598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 92 90 2F 00: call 0x5882bf40
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x90
        __asm _emit 0x2f
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 0b4h]
        mov dword ptr [ebp - 148h], eax
        push 0
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 63 30 F5 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x30
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 0b8h]
        mov dword ptr [ebp - 14ch], edx
        push 0
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 44 30 F5 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x30
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + ecx + 0c4h]
        mov dword ptr [ebp - 150h], eax
        push 0
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 1C 30 F5 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x30
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + ecx + 0c4h]
        mov dword ptr [ebp - 154h], eax
        push 0
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 F4 2F F5 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x2f
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
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
        ; Exact mapped bytes E8 FE E0 2F 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xe0
        __asm _emit 0x2f
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
