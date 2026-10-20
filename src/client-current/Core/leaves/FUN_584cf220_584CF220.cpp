// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584CF220 .. +0x33C bytes.
extern "C" __declspec(naked) void FUN_584cf220_584CF220() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887f2f1h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 2c4h
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
        push 588988b0h
        lea ecx, [ebp - 23ch]
        ; Exact mapped bytes E8 75 A8 FD FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xa8
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 23ch]
        push eax
        lea ecx, [ebp - 29ch]
        ; Exact mapped bytes E8 6C E5 04 00: call 0x5851d7e0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xe5
        __asm _emit 0x04
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 23ch]
        ; Exact mapped bytes E8 AD AA FD FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xaa
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        push 588988c0h
        lea ecx, [ebp - 26ch]
        ; Exact mapped bytes E8 3C A8 FD FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xa8
        __asm _emit 0xfd
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        push 588988c8h
        lea ecx, [ebp - 254h]
        ; Exact mapped bytes E8 28 A8 FD FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xa8
        __asm _emit 0xfd
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 4
        push 2
        lea ecx, [ebp - 26ch]
        push ecx
        lea edx, [ebp - 254h]
        push edx
        lea ecx, [ebp - 29ch]
        ; Exact mapped bytes E8 09 EA 04 00: call 0x5851dcd0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xea
        __asm _emit 0x04
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 254h]
        ; Exact mapped bytes E8 5A AA FD FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xaa
        __asm _emit 0xfd
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 26ch]
        ; Exact mapped bytes E8 4B AA FD FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xaa
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 2a0h], edx
        push 100h
        push 0
        lea eax, [ebp - 214h]
        push eax
        ; Exact mapped bytes E8 0A DB 37 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xdb
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 2a0h]
        push ecx
        push 588988d4h
        push 100h
        lea edx, [ebp - 214h]
        push edx
        ; Exact mapped bytes E8 CA 1A FE FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x1a
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 10h
        cmp dword ptr [ebp - 2a0h], 0c0000005h
        ; Exact mapped bytes 74 1C: je 0x584cf351
        __asm _emit 0x74
        __asm _emit 0x1c
        cmp dword ptr [ebp - 2a0h], 0c0000094h
        ; Exact mapped bytes 74 10: je 0x584cf351
        __asm _emit 0x74
        __asm _emit 0x10
        cmp dword ptr [ebp - 2a0h], 0c00000fdh
        ; Exact mapped bytes 0F 85 CE 01 00 00: jne 0x584cf51f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xce
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov dword ptr [ebp - 224h], eax
        mov dword ptr [ebp - 220h], eax
        mov dword ptr [ebp - 21ch], eax
        mov dword ptr [ebp - 218h], eax
        lea ecx, [ebp - 224h]
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
        ; Exact mapped bytes E8 85 DA 37 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xda
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
        mov dword ptr [ebp - 2a8h], eax
        ; Exact mapped bytes E8 CB 18 38 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x18
        __asm _emit 0x38
        __asm _emit 0x00
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 2ach], edx
        mov ecx, 5890bf68h
        ; Exact mapped bytes E8 87 69 FF FF: call 0x584c5d40
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x69
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2b0h], eax
        push 589604e0h
        mov edx, dword ptr [ebp - 2a8h]
        push edx
        mov eax, dword ptr [ebp - 2ach]
        push eax
        movzx ecx, word ptr [ebp - 216h]
        push ecx
        movzx edx, word ptr [ebp - 218h]
        push edx
        movzx eax, word ptr [ebp - 21ah]
        push eax
        movzx ecx, word ptr [ebp - 21ch]
        push ecx
        movzx edx, word ptr [ebp - 21eh]
        push edx
        movzx eax, word ptr [ebp - 222h]
        push eax
        movzx ecx, word ptr [ebp - 224h]
        push ecx
        mov edx, dword ptr [ebp - 2b0h]
        push edx
        push 58898908h
        lea eax, [ebp - 114h]
        push eax
        ; Exact mapped bytes E8 1E F9 FF FF: call 0x584ced40
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 34h
        push 0
        push 80h
        push 2
        push 0
        push 0
        push 40000000h
        lea ecx, [ebp - 114h]
        push ecx
        ; Exact mapped bytes E8 BD 3E 2E 00: call 0x587b3300
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x3e
        __asm _emit 0x2e
        __asm _emit 0x00
        mov dword ptr [ebp - 2a4h], eax
        cmp dword ptr [ebp - 2a4h], -1
        ; Exact mapped bytes 0F 84 A5 00 00 00: je 0x584cf4fb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa5
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
        mov dword ptr [ebp - 2cch], eax
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 2c8h], edx
        mov dword ptr [ebp - 2c4h], 0
        ; Exact mapped bytes FF 15 50 42 89 58: call dword ptr [0x58894250]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 2b4h], eax
        ; Exact mapped bytes FF 15 54 42 89 58: call dword ptr [0x58894254]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 2b8h], eax
        push 0
        push 0
        lea eax, [ebp - 2cch]
        push eax
        push 1045h
        mov ecx, dword ptr [ebp - 2a4h]
        push ecx
        mov edx, dword ptr [ebp - 2b4h]
        push edx
        mov eax, dword ptr [ebp - 2b8h]
        push eax
        ; Exact mapped bytes E8 38 34 36 00: call 0x588328ef
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x34
        __asm _emit 0x36
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2a4h]
        push ecx
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        sub esp, 18h
        mov ecx, esp
        mov dword ptr [ebp - 2d0h], esp
        push 589604e0h
        ; Exact mapped bytes E8 F6 A5 FD FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xa5
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes E8 31 04 00 00: call 0x584cf910
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        push 3
        mov ecx, 5890bef0h
        ; Exact mapped bytes E8 82 86 FF FF: call 0x584c7b70
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x86
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 FD 2D 03 00: call 0x585022f0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x2d
        __asm _emit 0x03
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes E8 60 86 38 00: call 0x58857b5a
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 2bch], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 29ch]
        ; Exact mapped bytes E8 A9 F8 FF FF: call 0x584cedc0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 2bch]
        ; Exact mapped bytes EB 22: jmp 0x584cf541
        __asm _emit 0xeb
        __asm _emit 0x22
        mov dword ptr [ebp - 2c0h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 29ch]
        ; Exact mapped bytes E8 85 F8 FF FF: call 0x584cedc0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 2c0h]
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
        ; Exact mapped bytes E8 FA 1A 36 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x1a
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
