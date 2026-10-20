// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58835A0D .. +0x184 bytes.
extern "C" __declspec(naked) void FUN_58835a0d_58835A0D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 228h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E8 B1 0D 00 00: call 0x588367d6
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 0F 84 56 01 00 00: je 0x58835b83
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        push edi
        mov edi, 224h
        lea eax, [ebp - 228h]
        push edi
        push 0
        push eax
        ; Exact mapped bytes E8 CD 73 01 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes FF 15 50 42 89 58: call dword ptr [0x58894250]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        push 8
        ; Exact mapped bytes FF 15 90 7A 96 58: call dword ptr [0x58967a90]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x7a
        __asm _emit 0x96
        __asm _emit 0x58
        mov esi, eax
        cmp esi, -1
        ; Exact mapped bytes 0F 84 21 01 00 00: je 0x58835b81
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 228h]
        mov dword ptr [ebp - 228h], edi
        push eax
        push esi
        ; Exact mapped bytes FF 15 9C 7A 96 58: call dword ptr [0x58967a9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x7a
        __asm _emit 0x96
        __asm _emit 0x58
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 85 81 00 00 00: jne 0x58835aff
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 F4 00 00 00: je 0x58835b7a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D EC 83 96 58 00: cmp dword ptr [0x589683ec], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 5C: je 0x58835aeb
        __asm _emit 0x74
        __asm _emit 0x5c
        push 588f1498h
        ; Exact mapped bytes E8 BA 68 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes A1 EC 83 96 58: mov eax, dword ptr [0x589683ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, 28h
        push eax
        ; Exact mapped bytes E8 E2 45 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes 83 3D EC 83 96 58 00: cmp dword ptr [0x589683ec], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 37: je 0x58835aeb
        __asm _emit 0x74
        __asm _emit 0x37
        lea eax, [ebp - 108h]
        push eax
        push dword ptr [ebp - 210h]
        lea eax, [ebp - 208h]
        push dword ptr [ebp - 214h]
        push eax
        push 588f14d4h
        ; Exact mapped bytes E8 7B 68 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        ; Exact mapped bytes A1 EC 83 96 58: mov eax, dword ptr [0x589683ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, 28h
        push eax
        ; Exact mapped bytes E8 A2 45 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        lea eax, [ebp - 228h]
        push eax
        push esi
        ; Exact mapped bytes FF 15 A0 7A 96 58: call dword ptr [0x58967aa0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x7a
        __asm _emit 0x96
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 AE: jne 0x58835aab
        __asm _emit 0x75
        __asm _emit 0xae
        ; Exact mapped bytes EB 7B: jmp 0x58835b7a
        __asm _emit 0xeb
        __asm _emit 0x7b
        test eax, eax
        ; Exact mapped bytes 74 77: je 0x58835b7a
        __asm _emit 0x74
        __asm _emit 0x77
        ; Exact mapped bytes 83 3D EC 83 96 58 00: cmp dword ptr [0x589683ec], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 5C: je 0x58835b68
        __asm _emit 0x74
        __asm _emit 0x5c
        push 588f14f4h
        ; Exact mapped bytes E8 3D 68 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes A1 EC 83 96 58: mov eax, dword ptr [0x589683ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, 28h
        push eax
        ; Exact mapped bytes E8 65 45 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes 83 3D EC 83 96 58 00: cmp dword ptr [0x589683ec], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 37: je 0x58835b68
        __asm _emit 0x74
        __asm _emit 0x37
        lea eax, [ebp - 108h]
        push eax
        push dword ptr [ebp - 210h]
        lea eax, [ebp - 208h]
        push dword ptr [ebp - 214h]
        push eax
        push 588f1530h
        ; Exact mapped bytes E8 FE 67 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        ; Exact mapped bytes A1 EC 83 96 58: mov eax, dword ptr [0x589683ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, 28h
        push eax
        ; Exact mapped bytes E8 25 45 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        lea eax, [ebp - 228h]
        push eax
        push esi
        ; Exact mapped bytes FF 15 A0 7A 96 58: call dword ptr [0x58967aa0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x7a
        __asm _emit 0x96
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 AE: jne 0x58835b28
        __asm _emit 0x75
        __asm _emit 0xae
        push esi
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        pop edi
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 C3 B4 FF FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
