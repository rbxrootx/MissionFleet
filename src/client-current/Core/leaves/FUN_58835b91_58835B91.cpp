// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58835B91 .. +0x17D bytes.
extern "C" __declspec(naked) void FUN_58835b91_58835B91() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 12ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E8 2D 0C 00 00: call 0x588367d6
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 0F 84 4F 01 00 00: je 0x58835d00
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        push edi
        mov edi, 128h
        lea eax, [ebp - 12ch]
        push edi
        push 0
        push eax
        ; Exact mapped bytes E8 49 72 01 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        push 0
        push 2
        ; Exact mapped bytes FF 15 90 7A 96 58: call dword ptr [0x58967a90]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x7a
        __asm _emit 0x96
        __asm _emit 0x58
        mov esi, eax
        cmp esi, -1
        ; Exact mapped bytes 0F 84 1F 01 00 00: je 0x58835cfe
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 12ch]
        mov dword ptr [ebp - 12ch], edi
        push eax
        push esi
        ; Exact mapped bytes FF 15 94 7A 96 58: call dword ptr [0x58967a94]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x7a
        __asm _emit 0x96
        __asm _emit 0x58
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 85 80 00 00 00: jne 0x58835c7d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 F2 00 00 00: je 0x58835cf7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf2
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
        ; Exact mapped bytes 74 5B: je 0x58835c69
        __asm _emit 0x74
        __asm _emit 0x5b
        push 588f13e4h
        ; Exact mapped bytes E8 3B 67 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x67
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
        ; Exact mapped bytes E8 63 44 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x44
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
        ; Exact mapped bytes 74 36: je 0x58835c69
        __asm _emit 0x74
        __asm _emit 0x36
        push dword ptr [ebp - 110h]
        lea eax, [ebp - 108h]
        push dword ptr [ebp - 118h]
        push dword ptr [ebp - 124h]
        push eax
        push 588f1418h
        ; Exact mapped bytes E8 FD 66 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x66
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
        ; Exact mapped bytes E8 24 44 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        lea eax, [ebp - 12ch]
        push eax
        push esi
        ; Exact mapped bytes FF 15 98 7A 96 58: call dword ptr [0x58967a98]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x7a
        __asm _emit 0x96
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 AF: jne 0x58835c2a
        __asm _emit 0x75
        __asm _emit 0xaf
        ; Exact mapped bytes EB 7A: jmp 0x58835cf7
        __asm _emit 0xeb
        __asm _emit 0x7a
        test eax, eax
        ; Exact mapped bytes 74 76: je 0x58835cf7
        __asm _emit 0x74
        __asm _emit 0x76
        ; Exact mapped bytes 83 3D EC 83 96 58 00: cmp dword ptr [0x589683ec], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 5B: je 0x58835ce5
        __asm _emit 0x74
        __asm _emit 0x5b
        push 588f143ch
        ; Exact mapped bytes E8 BF 66 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x66
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
        ; Exact mapped bytes E8 E7 43 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x43
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
        ; Exact mapped bytes 74 36: je 0x58835ce5
        __asm _emit 0x74
        __asm _emit 0x36
        push dword ptr [ebp - 110h]
        lea eax, [ebp - 108h]
        push dword ptr [ebp - 118h]
        push dword ptr [ebp - 124h]
        push eax
        push 588f1474h
        ; Exact mapped bytes E8 81 66 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x66
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
        ; Exact mapped bytes E8 A8 43 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        lea eax, [ebp - 12ch]
        push eax
        push esi
        ; Exact mapped bytes FF 15 98 7A 96 58: call dword ptr [0x58967a98]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x7a
        __asm _emit 0x96
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 AF: jne 0x58835ca6
        __asm _emit 0x75
        __asm _emit 0xaf
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
        ; Exact mapped bytes E8 46 B3 FF FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xb3
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
