// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584EFFC0 .. +0x2D6 bytes.
extern "C" __declspec(naked) void FUN_584effc0_584EFFC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1b0h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 19ch], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x584efff5
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x584efffc
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 8A 02 00 00: jmp 0x584f0286
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 80h
        push 0
        lea edx, [ebp - 84h]
        push edx
        ; Exact mapped bytes E8 01 CE 35 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xce
        __asm _emit 0x35
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 190h], 3
        mov dword ptr [ebp - 198h], 0ffffffffh
        mov dword ptr [ebp - 1a4h], 0
        lea eax, [ebp - 1a4h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 2C 7B 36 00: call 0x58857b70
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x7b
        __asm _emit 0x36
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 1a0h], eax
        cmp dword ptr [ebp - 1a0h], 0
        ; Exact mapped bytes 0F 84 27 02 00 00: je 0x584f0281
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x27
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 80h
        push 0
        lea eax, [ebp - 84h]
        push eax
        ; Exact mapped bytes E8 A3 CD 35 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xcd
        __asm _emit 0x35
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 1a0h]
        push ecx
        push 588a2614h
        lea edx, [ebp - 84h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        push 588a2618h
        lea eax, [ebp - 84h]
        push eax
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 1E: jne 0x584f00c0
        __asm _emit 0x75
        __asm _emit 0x1e
        mov dword ptr [ebp - 190h], 0
        mov ecx, dword ptr [ebp - 198h]
        add ecx, 1
        mov dword ptr [ebp - 198h], ecx
        ; Exact mapped bytes E9 A1 01 00 00: jmp 0x584f0261
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 588a2624h
        lea edx, [ebp - 84h]
        push edx
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x584f00e5
        __asm _emit 0x75
        __asm _emit 0x0f
        mov dword ptr [ebp - 190h], 1
        ; Exact mapped bytes E9 7C 01 00 00: jmp 0x584f0261
        __asm _emit 0xe9
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 588a262ch
        lea eax, [ebp - 84h]
        push eax
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x584f010a
        __asm _emit 0x75
        __asm _emit 0x0f
        mov dword ptr [ebp - 190h], 2
        ; Exact mapped bytes E9 57 01 00 00: jmp 0x584f0261
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 190h]
        mov dword ptr [ebp - 194h], ecx
        cmp dword ptr [ebp - 194h], 0
        ; Exact mapped bytes 74 1F: je 0x584f013e
        __asm _emit 0x74
        __asm _emit 0x1f
        cmp dword ptr [ebp - 194h], 1
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x584f01ad
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 194h], 2
        ; Exact mapped bytes 0F 84 CF 00 00 00: je 0x584f0208
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 23 01 00 00: jmp 0x584f0261
        __asm _emit 0xe9
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 108h
        push 0
        lea edx, [ebp - 18ch]
        push edx
        ; Exact mapped bytes E8 BF CC 35 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xcc
        __asm _emit 0x35
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 84h]
        push eax
        lea ecx, [ebp - 18ch]
        push ecx
        ; Exact mapped bytes FF 15 38 42 89 58: call dword ptr [0x58894238]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push 588a2638h
        lea edx, [ebp - 18ch]
        push edx
        ; Exact mapped bytes FF 15 38 42 89 58: call dword ptr [0x58894238]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 198h]
        mov dword ptr [ebp - 88h], eax
        mov ecx, dword ptr [ebp - 19ch]
        add ecx, 24h
        mov dword ptr [ebp - 1a8h], ecx
        lea edx, [ebp - 18ch]
        push edx
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 09 12 00 00: call 0x584f13b0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 B4 00 00 00: jmp 0x584f0261
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 108h
        push 0
        lea eax, [ebp - 18ch]
        push eax
        ; Exact mapped bytes E8 50 CC 35 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xcc
        __asm _emit 0x35
        __asm _emit 0x00
        add esp, 0ch
        lea ecx, [ebp - 84h]
        push ecx
        lea edx, [ebp - 18ch]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        mov dword ptr [ebp - 88h], 4
        mov eax, dword ptr [ebp - 19ch]
        add eax, 18h
        mov dword ptr [ebp - 1ach], eax
        lea ecx, [ebp - 18ch]
        push ecx
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes E8 AB 11 00 00: call 0x584f13b0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 59: jmp 0x584f0261
        __asm _emit 0xeb
        __asm _emit 0x59
        push 108h
        push 0
        lea edx, [ebp - 18ch]
        push edx
        ; Exact mapped bytes E8 F5 CB 35 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xcb
        __asm _emit 0x35
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 84h]
        push eax
        lea ecx, [ebp - 18ch]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        mov dword ptr [ebp - 88h], 2
        mov edx, dword ptr [ebp - 19ch]
        add edx, 18h
        mov dword ptr [ebp - 1b0h], edx
        lea eax, [ebp - 18ch]
        push eax
        mov ecx, dword ptr [ebp - 1b0h]
        ; Exact mapped bytes E8 50 11 00 00: call 0x584f13b0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        lea ecx, [ebp - 1a4h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 0
        ; Exact mapped bytes E8 FD 78 36 00: call 0x58857b70
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x78
        __asm _emit 0x36
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 1a0h], eax
        ; Exact mapped bytes E9 CC FD FF FF: jmp 0x584f004d
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 C0 0D 34 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
