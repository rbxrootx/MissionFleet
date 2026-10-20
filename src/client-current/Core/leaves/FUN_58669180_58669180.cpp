// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58669180 .. +0x183 bytes.
extern "C" __declspec(naked) void FUN_58669180_58669180() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 30h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 24h]
        push ecx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        push 589604e0h
        lea edx, [ebp - 24h]
        push edx
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 57: jne 0x5866920c
        __asm _emit 0x75
        __asm _emit 0x57
        mov eax, dword ptr [ebp + 8]
        add eax, 18h
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 DC F5 FF FF: call 0x586687a0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 75 12: jne 0x586691df
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp + 8]
        add ecx, 18h
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 24 F6 FF FF: call 0x58668800
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 22: je 0x58669207
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 23 71 E4 FF: call 0x584b0310
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x71
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 11: je 0x58669207
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea eax, [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 2A 64 FB FF: call 0x5861f630
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x64
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 E7 00 00 00: jmp 0x586692f3
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], 1
        lea ecx, [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 81 F5 FF FF: call 0x586687a0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 75 16: jne 0x5866923e
        __asm _emit 0x75
        __asm _emit 0x16
        lea edx, [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 CC F5 FF FF: call 0x58668800
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 34h], 0
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x586692db
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 C0 70 E4 FF: call 0x584b0310
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x70
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 75 40: jne 0x58669299
        __asm _emit 0x75
        __asm _emit 0x40
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 FB 03 E5 FF: call 0x584b9660
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x03
        __asm _emit 0xe5
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 41 F9 FF FF: call 0x58668bb0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 1F: je 0x58669297
        __asm _emit 0x74
        __asm _emit 0x1f
        push 1
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 FA 5A FB FF: call 0x5861ed80
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x5a
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea eax, [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 9A 63 FB FF: call 0x5861f630
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x63
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 11: jmp 0x586692aa
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea edx, [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 87 63 FB FF: call 0x5861f630
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x63
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 30h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 5
        ; Exact mapped bytes 75 18: jne 0x586692d9
        __asm _emit 0x75
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea edx, [ebp - 24h]
        push edx
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 58 39 FB FF: call 0x5861cc30
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x39
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 18: jmp 0x586692f3
        __asm _emit 0xeb
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea edx, [ebp - 24h]
        push edx
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3E 39 FB FF: call 0x5861cc30
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x39
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 53 7D 1C 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x7d
        __asm _emit 0x1c
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
