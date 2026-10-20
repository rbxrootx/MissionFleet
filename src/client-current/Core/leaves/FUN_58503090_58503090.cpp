// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58503090 .. +0x317 bytes.
extern "C" __declspec(naked) void FUN_58503090_58503090() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588801e9h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 384h
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
        mov dword ptr [ebp - 368h], 0
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 384h]
        ; Exact mapped bytes E8 A9 EC FF FF: call 0x58501d80
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea eax, [ebp - 37ch]
        push eax
        push 20019h
        push 0
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 4F 2C FC FF: call 0x584c5d40
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x2c
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        push 80000002h
        ; Exact mapped bytes FF 15 20 40 89 58: call dword ptr [0x58894020]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 388h], eax
        cmp dword ptr [ebp - 388h], 0
        ; Exact mapped bytes 74 44: je 0x58503150
        __asm _emit 0x74
        __asm _emit 0x44
        lea ecx, [ebp - 384h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 35 EC FF FF: call 0x58501d50
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 368h]
        or edx, 1
        mov dword ptr [ebp - 368h], edx
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 384h]
        ; Exact mapped bytes E8 67 EE FF FF: call 0x58501fa0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 E8 6B FA FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 3E 02 00 00: jmp 0x5850338e
        __asm _emit 0xe9
        __asm _emit 0x3e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 36ch], 0
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 0F 84 DB 01 00 00: je 0x58503342
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 104h
        push 0
        lea ecx, [ebp - 218h]
        push ecx
        ; Exact mapped bytes E8 96 9C 34 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x9c
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 0ch
        push 104h
        push 0
        lea edx, [ebp - 31ch]
        push edx
        ; Exact mapped bytes E8 80 9C 34 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x9c
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 374h], 104h
        mov dword ptr [ebp - 378h], 104h
        mov eax, dword ptr [ebp - 36ch]
        mov dword ptr [ebp - 38ch], eax
        mov ecx, dword ptr [ebp - 36ch]
        add ecx, 1
        mov dword ptr [ebp - 36ch], ecx
        lea edx, [ebp - 378h]
        push edx
        lea eax, [ebp - 31ch]
        push eax
        lea ecx, [ebp - 390h]
        push ecx
        push 0
        lea edx, [ebp - 374h]
        push edx
        lea eax, [ebp - 218h]
        push eax
        mov ecx, dword ptr [ebp - 38ch]
        push ecx
        mov edx, dword ptr [ebp - 37ch]
        push edx
        ; Exact mapped bytes FF 15 30 40 89 58: call dword ptr [0x58894030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 370h], eax
        cmp dword ptr [ebp - 370h], 0
        ; Exact mapped bytes 74 10: je 0x5850321a
        __asm _emit 0x74
        __asm _emit 0x10
        cmp dword ptr [ebp - 370h], 0eah
        ; Exact mapped bytes 0F 85 21 01 00 00: jne 0x5850333b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 34ch]
        ; Exact mapped bytes E8 BB 40 FC FF: call 0x584c72e0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x40
        __asm _emit 0xfc
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 334h]
        ; Exact mapped bytes E8 AC 40 FC FF: call 0x584c72e0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x40
        __asm _emit 0xfc
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 364h]
        ; Exact mapped bytes E8 9D 40 FC FF: call 0x584c72e0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x40
        __asm _emit 0xfc
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 4
        push 104h
        push 0
        lea eax, [ebp - 114h]
        push eax
        ; Exact mapped bytes E8 B6 9B 34 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x9b
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 0ch
        lea ecx, [ebp - 218h]
        push ecx
        push 588a37a8h
        push 104h
        lea edx, [ebp - 114h]
        push edx
        ; Exact mapped bytes E8 76 DB FA FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xdb
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 10h
        lea eax, [ebp - 114h]
        push eax
        lea ecx, [ebp - 34ch]
        ; Exact mapped bytes E8 D1 42 FC FF: call 0x584c7560
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x42
        __asm _emit 0xfc
        __asm _emit 0xff
        push 104h
        push 0
        lea ecx, [ebp - 114h]
        push ecx
        ; Exact mapped bytes E8 6E 9B 34 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x9b
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 0ch
        lea edx, [ebp - 31ch]
        push edx
        push 588a37ach
        push 104h
        lea eax, [ebp - 114h]
        push eax
        ; Exact mapped bytes E8 2E DB FA FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xdb
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 10h
        lea ecx, [ebp - 114h]
        push ecx
        lea ecx, [ebp - 334h]
        ; Exact mapped bytes E8 89 42 FC FF: call 0x584c7560
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0xfc
        __asm _emit 0xff
        lea edx, [ebp - 334h]
        push edx
        lea eax, [ebp - 34ch]
        push eax
        lea ecx, [ebp - 384h]
        ; Exact mapped bytes E8 F0 EC FF FF: call 0x58501fe0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E9 41 FC FF: call 0x584c74e0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x41
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 374h], 104h
        mov dword ptr [ebp - 378h], 104h
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 364h]
        ; Exact mapped bytes E8 16 6A FA FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x6a
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 334h]
        ; Exact mapped bytes E8 07 6A FA FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x6a
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 34ch]
        ; Exact mapped bytes E8 F8 69 FA FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x69
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 02: jmp 0x5850333d
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 05: jmp 0x58503342
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 18 FE FF FF: jmp 0x5850315a
        __asm _emit 0xe9
        __asm _emit 0x18
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 37ch]
        push ecx
        ; Exact mapped bytes FF 15 64 40 89 58: call dword ptr [0x58894064]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        lea edx, [ebp - 384h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F2 E9 FF FF: call 0x58501d50
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 368h]
        or eax, 1
        mov dword ptr [ebp - 368h], eax
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 384h]
        ; Exact mapped bytes E8 24 EC FF FF: call 0x58501fa0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 A5 69 FA FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x69
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
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
        ; Exact mapped bytes E8 AD DC 32 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xdc
        __asm _emit 0x32
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
