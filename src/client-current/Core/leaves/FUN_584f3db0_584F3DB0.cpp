// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F3DB0 .. +0x1AC bytes.
extern "C" __declspec(naked) void FUN_584f3db0_584F3DB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        push esi
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        add eax, 58h
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 B1 42 F9 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x42
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x584f3de1
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 34h]
        push edx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 A0 3C F9 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x3c
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 10h]
        add eax, 58h
        mov dword ptr [ebp - 18h], eax
        lea ecx, [ebp - 38h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 9A 43 F9 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x43
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 D1 3B F9 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x3b
        __asm _emit 0xf9
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 0F 84 4B 01 00 00: je 0x584f3f55
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 2E 3C F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x3c
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 A7 2B F9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x2b
        __asm _emit 0xf9
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8D 91 F9 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x91
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 0F 85 25 01 00 00: jne 0x584f3f50
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 0D 3C F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 F6 F0 FF FF: call 0x584f2f30
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 37 42 F9 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x42
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x584f3e5b
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea ecx, [ebp - 3ch]
        push ecx
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 26 3C F9 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x3c
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 DD 3B F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x3b
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 C6 F0 FF FF: call 0x584f2f30
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        lea edx, [ebp - 40h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 17 43 F9 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x43
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 4E 3B F9 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x3b
        __asm _emit 0xf9
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 0F 84 C1 00 00 00: je 0x584f3f4e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 AB 3B F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x3b
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 04 86 F9 FF: call 0x5848c4a0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x86
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        lea ecx, [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 D5 41 F9 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x41
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x584f3ebd
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 44h]
        push edx
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 C4 3B F9 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x3b
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 7B 3B F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x3b
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 D4 85 F9 FF: call 0x5848c4a0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x85
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        lea eax, [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 B5 42 F9 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x42
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 EC 3A F9 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x3a
        __asm _emit 0xf9
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 5E: je 0x584f3f49
        __asm _emit 0x74
        __asm _emit 0x5e
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 4D 3B F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x3b
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 F6 18 FA FF: call 0x584957f0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x18
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x584f3f44
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FA 61 FB FF: call 0x584aa100
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x61
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 2F 3B F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x3b
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 D8 18 FA FF: call 0x584957f0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x18
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E1 61 FB FF: call 0x584aa100
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x61
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp - 30h]
        push eax
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 10: jne 0x584f3f44
        __asm _emit 0x75
        __asm _emit 0x10
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 04 3B F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x3b
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 1D 7B F9 FF: call 0x5848ba60
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x7b
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 65 FF FF FF: jmp 0x584f3eae
        __asm _emit 0xe9
        __asm _emit 0x65
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 FE FE FF FF: jmp 0x584f3e4c
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 05: jmp 0x584f3f55
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 7D FE FF FF: jmp 0x584f3dd2
        __asm _emit 0xe9
        __asm _emit 0x7d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
