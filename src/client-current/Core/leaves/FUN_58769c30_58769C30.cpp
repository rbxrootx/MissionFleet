// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58769C30 .. +0x36F bytes.
extern "C" __declspec(naked) void FUN_58769c30_58769C30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 260h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 208h], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        and ecx, 3
        ; Exact mapped bytes 0F 85 9D 01 00 00: jne 0x58769df4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        shr eax, 2
        and eax, 7fffh
        mov ecx, dword ptr [ebp - 208h]
        mov dword ptr [ecx + 5ea0h], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        shr eax, 11h
        and eax, 7fffh
        mov ecx, dword ptr [ebp - 208h]
        mov dword ptr [ecx + 5ea4h], eax
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 5e84h]
        mov dword ptr [ebp - 210h], eax
        mov ecx, dword ptr [ebp - 208h]
        add ecx, 5ea0h
        push ecx
        mov ecx, dword ptr [ebp - 210h]
        ; Exact mapped bytes E8 1D 32 D4 FF: call 0x584aced0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x32
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 83 3D 6C 20 96 58 00: cmp dword ptr [0x5896206c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x6c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 2E 01 00 00: je 0x58769def
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 100h
        push 0
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes E8 3C 31 0E 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x31
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 5e84h]
        ; Exact mapped bytes E8 38 0A E0 FF: call 0x5856a720
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x0a
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 214h], eax
        mov ecx, dword ptr [ebp - 208h]
        mov ecx, dword ptr [ecx + 5e84h]
        ; Exact mapped bytes E8 31 F9 D7 FF: call 0x584e9630
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xf9
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 218h], eax
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 5ea4h]
        mov dword ptr [ebp - 21ch], eax
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 5ea0h]
        mov dword ptr [ebp - 220h], edx
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 0C 27 D2 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x27
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 25 AD D1 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xad
        __asm _emit 0xd1
        __asm _emit 0xff
        add eax, 0ch
        mov dword ptr [ebp - 224h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 41 BC D2 FF: call 0x58495990
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xbc
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 228h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 30 B9 D2 FF: call 0x58495690
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xb9
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 22ch], eax
        mov eax, dword ptr [ebp - 214h]
        push eax
        mov ecx, dword ptr [ebp - 218h]
        push ecx
        mov edx, dword ptr [ebp - 21ch]
        push edx
        mov eax, dword ptr [ebp - 220h]
        push eax
        mov ecx, dword ptr [ebp - 224h]
        push ecx
        mov edx, dword ptr [ebp - 228h]
        push edx
        mov eax, dword ptr [ebp - 22ch]
        push eax
        push 588b5394h
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 24h
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 230h], eax
        ; Exact mapped bytes A1 70 20 96 58: mov eax, dword ptr [0x58962070]
        __asm _emit 0xa1
        __asm _emit 0x70
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 234h], eax
        push 0
        lea ecx, [ebp - 25ch]
        push ecx
        mov edx, dword ptr [ebp - 230h]
        push edx
        lea eax, [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp - 234h]
        push ecx
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes E9 82 01 00 00: jmp 0x58769f76
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        and eax, 3
        cmp eax, 1
        ; Exact mapped bytes 0F 85 71 01 00 00: jne 0x58769f76
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x71
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        shr edx, 2
        and edx, 3fffffffh
        push edx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A1 A1 DB FF: call 0x58523fc0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xa1
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 20ch], eax
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 5e84h]
        mov dword ptr [ebp - 238h], ecx
        mov edx, dword ptr [ebp - 20ch]
        push edx
        mov ecx, dword ptr [ebp - 238h]
        ; Exact mapped bytes E8 E7 30 D4 FF: call 0x584acf30
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x30
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 83 3D 6C 20 96 58 00: cmp dword ptr [0x5896206c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x6c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 1F 01 00 00: je 0x58769f76
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 100h
        push 0
        lea eax, [ebp - 204h]
        push eax
        ; Exact mapped bytes E8 A6 2F 0E 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x2f
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 208h]
        mov ecx, dword ptr [ecx + 5e84h]
        ; Exact mapped bytes E8 A2 08 E0 FF: call 0x5856a720
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x08
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 23ch], eax
        mov edx, dword ptr [ebp - 208h]
        mov ecx, dword ptr [edx + 5e84h]
        ; Exact mapped bytes E8 9B F7 D7 FF: call 0x584e9630
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xf7
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 240h], eax
        mov ecx, dword ptr [ebp - 20ch]
        ; Exact mapped bytes E8 9A 25 D2 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x25
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B3 AB D1 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xab
        __asm _emit 0xd1
        __asm _emit 0xff
        add eax, 0ch
        mov dword ptr [ebp - 244h], eax
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 7F 25 D2 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x25
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 98 AB D1 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xab
        __asm _emit 0xd1
        __asm _emit 0xff
        add eax, 0ch
        mov dword ptr [ebp - 248h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B4 BA D2 FF: call 0x58495990
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xba
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 24ch], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A3 B7 D2 FF: call 0x58495690
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xb7
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 250h], eax
        mov eax, dword ptr [ebp - 23ch]
        push eax
        mov ecx, dword ptr [ebp - 240h]
        push ecx
        mov edx, dword ptr [ebp - 244h]
        push edx
        mov eax, dword ptr [ebp - 248h]
        push eax
        mov ecx, dword ptr [ebp - 24ch]
        push ecx
        mov edx, dword ptr [ebp - 250h]
        push edx
        push 588b53d4h
        lea eax, [ebp - 204h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 20h
        lea ecx, [ebp - 204h]
        push ecx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 254h], eax
        ; Exact mapped bytes 8B 15 70 20 96 58: mov edx, dword ptr [0x58962070]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 258h], edx
        push 0
        lea eax, [ebp - 260h]
        push eax
        mov ecx, dword ptr [ebp - 254h]
        push ecx
        lea edx, [ebp - 204h]
        push edx
        mov eax, dword ptr [ebp - 258h]
        push eax
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov ecx, dword ptr [ebp - 208h]
        add ecx, 5ea0h
        push ecx
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 12 E4 FF FF: call 0x587683a0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 B7 70 0C 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x70
        __asm _emit 0x0c
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
