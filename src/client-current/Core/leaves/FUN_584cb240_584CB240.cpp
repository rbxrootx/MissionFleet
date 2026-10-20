// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584CB240 .. +0x1A5 bytes.
extern "C" __declspec(naked) void FUN_584cb240_584CB240() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 124h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        mov dword ptr [ebp - 108h], ecx
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7B 0B 1B 00: call 0x5867bde0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x0b
        __asm _emit 0x1b
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 69 01 00 00: je 0x584cb3d6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 48 B7 FB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xb7
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 108h]
        cmp eax, dword ptr [ecx + 50h]
        ; Exact mapped bytes 74 16: je 0x584cb299
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 32 B7 FB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xb7
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 108h]
        cmp eax, dword ptr [edx + 54h]
        ; Exact mapped bytes 75 23: jne 0x584cb2bc
        __asm _emit 0x75
        __asm _emit 0x23
        push 58896238h
        ; Exact mapped bytes E8 4D 6D 05 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x6d
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 4
        push eax
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        ; Exact mapped bytes E9 B2 00 00 00: jmp 0x584cb36e
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F9 B6 FB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xb6
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E2 1C FC FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x1c
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 108h]
        mov ecx, dword ptr [ecx + 50h]
        ; Exact mapped bytes E8 D2 1C FC FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x1c
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 75 47: jne 0x584cb329
        __asm _emit 0x75
        __asm _emit 0x47
        mov edx, dword ptr [ebp - 108h]
        mov ecx, dword ptr [edx + 50h]
        ; Exact mapped bytes E8 10 EE FD FF: call 0x584aa100
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xee
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 10ch], eax
        push 58896260h
        ; Exact mapped bytes E8 F0 6C 05 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x6c
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 110h], eax
        mov eax, dword ptr [ebp - 10ch]
        push eax
        mov ecx, dword ptr [ebp - 110h]
        push ecx
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        ; Exact mapped bytes EB 45: jmp 0x584cb36e
        __asm _emit 0xeb
        __asm _emit 0x45
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + 54h]
        ; Exact mapped bytes E8 C9 ED FD FF: call 0x584aa100
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xed
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 114h], eax
        push 58896288h
        ; Exact mapped bytes E8 A9 6C 05 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x6c
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 118h], eax
        mov ecx, dword ptr [ebp - 114h]
        push ecx
        mov edx, dword ptr [ebp - 118h]
        push edx
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 67 0A 1B 00: call 0x5867bde0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x0a
        __asm _emit 0x1b
        __asm _emit 0x00
        mov dword ptr [ebp - 120h], eax
        push 588962b0h
        ; Exact mapped bytes E8 67 6C 05 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x6c
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 11ch], eax
        push 9fh
        push 0
        mov ecx, dword ptr [ebp - 11ch]
        push ecx
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 55 35 03 00: call 0x584fe900
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x35
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2A 0A 1B 00: call 0x5867bde0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x0a
        __asm _emit 0x1b
        __asm _emit 0x00
        mov dword ptr [ebp - 124h], eax
        push 10101h
        push 1
        lea edx, [ebp - 104h]
        push edx
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 2B 35 03 00: call 0x584fe900
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x35
        __asm _emit 0x03
        __asm _emit 0x00
        nop
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 6F 5C 36 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x5c
        __asm _emit 0x36
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
