// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586AEA40 .. +0x354 bytes.
extern "C" __declspec(naked) void FUN_586aea40_586AEA40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0c8h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        mov dword ptr [ebp - 8ch], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 1D 03 00 00: jne 0x586aed81
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8ch]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 64h]
        ; Exact mapped bytes 0F 85 E9 02 00 00: jne 0x586aed5f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 98h], 0
        mov dword ptr [ebp - 90h], 0
        mov dword ptr [ebp - 88h], 0
        ; Exact mapped bytes EB 0F: jmp 0x586aeaa5
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 88h]
        add edx, 1
        mov dword ptr [ebp - 88h], edx
        cmp dword ptr [ebp - 88h], 20h
        ; Exact mapped bytes 0F 8D 5C 01 00 00: jge 0x586aec0e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C3 5E DD FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x5e
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 9ch], eax
        mov eax, dword ptr [ebp - 88h]
        push eax
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 8B E5 DD FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xe5
        __asm _emit 0xdd
        __asm _emit 0xff
        movzx ecx, ax
        cmp ecx, 5
        ; Exact mapped bytes 0F 85 F3 00 00 00: jne 0x586aebd4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 94 5E DD FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x5e
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        push 1
        mov edx, dword ptr [ebp - 88h]
        push edx
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 0A 12 E0 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x12
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        cmp dword ptr [ebp - 94h], 0
        ; Exact mapped bytes 0F 84 B9 00 00 00: je 0x586aebd2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5C 5E DD FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x5e
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 0a4h], eax
        push 1
        mov eax, dword ptr [ebp - 88h]
        push eax
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 D2 E4 DD FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xe4
        __asm _emit 0xdd
        __asm _emit 0xff
        movzx ecx, ax
        xor ecx, 55h
        mov edx, dword ptr [ebp - 94h]
        imul ecx, dword ptr [edx + 74h]
        add ecx, dword ptr [ebp - 90h]
        mov dword ptr [ebp - 90h], ecx
        push 4
        push 0
        lea eax, [ebp - 0a8h]
        push eax
        ; Exact mapped bytes E8 A6 E2 19 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xe2
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 08 5E DD FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x5e
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 0b0h], eax
        mov ecx, dword ptr [ebp - 0a8h]
        mov dword ptr [ebp - 0ach], ecx
        push 1
        push 1
        mov edx, dword ptr [ebp - 0ach]
        push edx
        mov eax, dword ptr [ebp - 88h]
        push eax
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 19 61 0A 00: call 0x58754cc0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x61
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CD 5D DD FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x5d
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 0b4h], eax
        push 1
        push 55h
        push 1
        mov ecx, dword ptr [ebp - 88h]
        push ecx
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 3F 59 0A 00: call 0x58754510
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x59
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 35: jmp 0x586aec09
        __asm _emit 0xeb
        __asm _emit 0x35
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A1 5D DD FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x5d
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 0b8h], eax
        mov edx, dword ptr [ebp - 88h]
        push edx
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 69 E4 DD FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xe4
        __asm _emit 0xdd
        __asm _emit 0xff
        movzx eax, ax
        cmp eax, 6
        ; Exact mapped bytes 75 0A: jne 0x586aec09
        __asm _emit 0x75
        __asm _emit 0x0a
        mov dword ptr [ebp - 98h], 1
        ; Exact mapped bytes E9 88 FE FF FF: jmp 0x586aea96
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 35 F8 04 96 58: mov esi, dword ptr [0x589604f8]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x96
        __asm _emit 0x58
        xor esi, 55555555h
        mov ecx, dword ptr [ebp - 8ch]
        mov ecx, dword ptr [ecx + 60h]
        ; Exact mapped bytes E8 88 6B DE FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x6b
        __asm _emit 0xde
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 7D 3B: jge 0x586aec67
        __asm _emit 0x7d
        __asm _emit 0x3b
        ; Exact mapped bytes E8 BF 85 E2 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x85
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 0bch], eax
        push 0
        push 0
        push 0
        push 39bh
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 23 A1 E2 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xa1
        __asm _emit 0xe2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8ch]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        xor eax, eax
        ; Exact mapped bytes E9 1C 01 00 00: jmp 0x586aed83
        __asm _emit 0xe9
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 98h], 0
        ; Exact mapped bytes 0F 85 B3 00 00 00: jne 0x586aed27
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 01 5D DD FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x5d
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DA 5D DD FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x5d
        __asm _emit 0xdd
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        shr eax, 0ah
        and eax, 3fffffh
        mov dword ptr [ebp - 0c0h], eax
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 0c0h]
        push ecx
        push 8001f001h
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DB DC 17 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xdc
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        cmp dword ptr [ebp - 90h], 0
        ; Exact mapped bytes 76 66: jbe 0x586aed25
        __asm _emit 0x76
        __asm _emit 0x66
        push 80h
        push 0
        lea edx, [ebp - 84h]
        push edx
        ; Exact mapped bytes E8 3E E1 19 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xe1
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 90h]
        push eax
        push 588b0b40h
        ; Exact mapped bytes E8 0A 33 E7 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x33
        __asm _emit 0xe7
        __asm _emit 0xff
        add esp, 4
        push eax
        lea ecx, [ebp - 84h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        lea edx, [ebp - 84h]
        push edx
        ; Exact mapped bytes FF 15 A0 42 89 58: call dword ptr [0x588942a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes E8 E4 84 E2 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 0c4h], eax
        lea eax, [ebp - 84h]
        push eax
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 2C 9F E2 FF: call 0x584d8c50
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x9f
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 22: jmp 0x586aed49
        __asm _emit 0xeb
        __asm _emit 0x22
        ; Exact mapped bytes E8 C4 84 E2 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x84
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 0c8h], eax
        push 0
        push 0
        push 0
        push 3adh
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 28 A0 E2 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xa0
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 8ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8ch]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 22: jmp 0x586aed81
        __asm _emit 0xeb
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 8ch]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 68h]
        ; Exact mapped bytes 75 14: jne 0x586aed81
        __asm _emit 0x75
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 8ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8ch]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        xor eax, eax
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 C2 22 18 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x22
        __asm _emit 0x18
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
