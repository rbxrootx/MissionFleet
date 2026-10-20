// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584CEF40 .. +0x2DD bytes.
extern "C" __declspec(naked) void FUN_584cef40_584CEF40() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887f291h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 1c4h
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
        push 5889894ch
        lea ecx, [ebp - 13ch]
        ; Exact mapped bytes E8 55 AB FD FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xab
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 13ch]
        push eax
        lea ecx, [ebp - 19ch]
        ; Exact mapped bytes E8 4C E8 04 00: call 0x5851d7e0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 13ch]
        ; Exact mapped bytes E8 8D AD FD FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xad
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        push 5889895ch
        lea ecx, [ebp - 16ch]
        ; Exact mapped bytes E8 1C AB FD FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xab
        __asm _emit 0xfd
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        push 58898964h
        lea ecx, [ebp - 154h]
        ; Exact mapped bytes E8 08 AB FD FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xab
        __asm _emit 0xfd
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 4
        push 1
        lea ecx, [ebp - 16ch]
        push ecx
        lea edx, [ebp - 154h]
        push edx
        lea ecx, [ebp - 19ch]
        ; Exact mapped bytes E8 E9 EC 04 00: call 0x5851dcd0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 154h]
        ; Exact mapped bytes E8 3A AD FD FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xad
        __asm _emit 0xfd
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 16ch]
        ; Exact mapped bytes E8 2B AD FD FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xad
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        xor eax, eax
        mov dword ptr [ebp - 124h], eax
        mov dword ptr [ebp - 120h], eax
        mov dword ptr [ebp - 11ch], eax
        mov dword ptr [ebp - 118h], eax
        lea ecx, [ebp - 124h]
        push ecx
        ; Exact mapped bytes FF 15 48 42 89 58: call dword ptr [0x58894248]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push 104h
        push 0
        lea edx, [ebp - 114h]
        push edx
        ; Exact mapped bytes E8 D0 DD 37 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xdd
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes A1 2C D2 8F 58: mov eax, dword ptr [0x588fd22c]
        __asm _emit 0xa1
        __asm _emit 0x2c
        __asm _emit 0xd2
        __asm _emit 0x8f
        __asm _emit 0x58
        xor eax, 55h
        mov dword ptr [ebp - 1a4h], eax
        ; Exact mapped bytes E8 16 1C 38 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x1c
        __asm _emit 0x38
        __asm _emit 0x00
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 1a8h], edx
        mov ecx, 5890bf68h
        ; Exact mapped bytes E8 D2 6C FF FF: call 0x584c5d40
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1ach], eax
        push 589604e0h
        mov edx, dword ptr [ebp - 1a4h]
        push edx
        mov eax, dword ptr [ebp - 1a8h]
        push eax
        movzx ecx, word ptr [ebp - 116h]
        push ecx
        movzx edx, word ptr [ebp - 118h]
        push edx
        movzx eax, word ptr [ebp - 11ah]
        push eax
        movzx ecx, word ptr [ebp - 11ch]
        push ecx
        movzx edx, word ptr [ebp - 11eh]
        push edx
        movzx eax, word ptr [ebp - 122h]
        push eax
        movzx ecx, word ptr [ebp - 124h]
        push ecx
        mov edx, dword ptr [ebp - 1ach]
        push edx
        push 58898970h
        push 104h
        lea eax, [ebp - 114h]
        push eax
        ; Exact mapped bytes E8 14 1D FE FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x1d
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 38h
        push 0
        push 80h
        push 2
        push 0
        push 0
        push 40000000h
        lea ecx, [ebp - 114h]
        push ecx
        ; Exact mapped bytes E8 03 42 2E 00: call 0x587b3300
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x42
        __asm _emit 0x2e
        __asm _emit 0x00
        mov dword ptr [ebp - 1a0h], eax
        cmp dword ptr [ebp - 1a0h], -1
        ; Exact mapped bytes 75 27: jne 0x584cf133
        __asm _emit 0x75
        __asm _emit 0x27
        mov dword ptr [ebp - 1b0h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 19ch]
        ; Exact mapped bytes E8 98 FC FF FF: call 0x584cedc0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1b0h]
        ; Exact mapped bytes E9 CF 00 00 00: jmp 0x584cf202
        __asm _emit 0xe9
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 4C 42 89 58: call dword ptr [0x5889424c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 1cch], eax
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 1c8h], edx
        mov dword ptr [ebp - 1c4h], 0
        ; Exact mapped bytes FF 15 50 42 89 58: call dword ptr [0x58894250]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 1b4h], eax
        ; Exact mapped bytes FF 15 54 42 89 58: call dword ptr [0x58894254]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 1b8h], eax
        push 0
        push 0
        lea eax, [ebp - 1cch]
        push eax
        push 1045h
        mov ecx, dword ptr [ebp - 1a0h]
        push ecx
        mov edx, dword ptr [ebp - 1b4h]
        push edx
        mov eax, dword ptr [ebp - 1b8h]
        push eax
        ; Exact mapped bytes E8 5B 37 36 00: call 0x588328ef
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x37
        __asm _emit 0x36
        __asm _emit 0x00
        mov dword ptr [ebp - 1bch], eax
        cmp dword ptr [ebp - 1bch], 0
        ; Exact mapped bytes 74 2A: je 0x584cf1cd
        __asm _emit 0x74
        __asm _emit 0x2a
        sub esp, 18h
        mov ecx, esp
        mov dword ptr [ebp - 1d0h], esp
        push 589604e0h
        ; Exact mapped bytes E8 18 A9 FD FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xa9
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes E8 53 07 00 00: call 0x584cf910
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        push 4
        mov ecx, 5890bef0h
        ; Exact mapped bytes E8 A4 89 FF FF: call 0x584c7b70
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x89
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 1a0h]
        push ecx
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes E8 11 31 03 00: call 0x585022f0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x31
        __asm _emit 0x03
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 1c0h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 19ch]
        ; Exact mapped bytes E8 C4 FB FF FF: call 0x584cedc0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1c0h]
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
        ; Exact mapped bytes E8 39 1E 36 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x1e
        __asm _emit 0x36
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
