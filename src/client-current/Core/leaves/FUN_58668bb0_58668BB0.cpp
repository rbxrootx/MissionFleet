// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58668BB0 .. +0x261 bytes.
extern "C" __declspec(naked) void FUN_58668bb0_58668BB0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58889499h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 60h
        push esi
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 14h], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 74h
        ; Exact mapped bytes E8 55 F6 E1 FF: call 0x58488240
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xf6
        __asm _emit 0xe1
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 80h
        ; Exact mapped bytes E8 45 F6 E1 FF: call 0x58488240
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xf6
        __asm _emit 0xe1
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 0F 85 92 00 00 00: jne 0x58668c95
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ca4h
        ; Exact mapped bytes E8 F7 83 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x83
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 40: je 0x58668c60
        __asm _emit 0x74
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D8 BD E1 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xbd
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 CA BD E1 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xbd
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        add ecx, 0c3h
        mov dword ptr [ebp - 30h], ecx
        push 40h
        push 0
        push 0
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 95 51 FB FF: call 0x5861ddf0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x51
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x58668c67
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 34h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 74h
        mov dword ptr [ebp - 38h], ecx
        lea edx, [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 91 F5 E1 FF: call 0x58488220
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xf5
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 05 01 00 00: jmp 0x58668d9a
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        add eax, 74h
        mov dword ptr [ebp - 3ch], eax
        lea ecx, [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 D6 F3 E1 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xf3
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x58668cbc
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 60h]
        push edx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 C5 ED E1 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xed
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 10h]
        add eax, 74h
        mov dword ptr [ebp - 40h], eax
        lea ecx, [ebp - 64h]
        push ecx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 BF F4 E1 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xf4
        __asm _emit 0xe1
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 F6 EC E1 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xec
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 22: je 0x58668d03
        __asm _emit 0x74
        __asm _emit 0x22
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 57 ED E1 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xed
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 F0 08 E5 FF: call 0x584b95e0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x08
        __asm _emit 0xe5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x58668d01
        __asm _emit 0x74
        __asm _emit 0x0d
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 44 ED E1 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xed
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB AA: jmp 0x58668cad
        __asm _emit 0xeb
        __asm _emit 0xaa
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 0F 85 8D 00 00 00: jne 0x58668d9a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ca4h
        ; Exact mapped bytes E8 ED 82 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x82
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 40: je 0x58668d6a
        __asm _emit 0x74
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 CE BC E1 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xbc
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 44h], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C0 BC E1 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xbc
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        add edx, 0c3h
        mov dword ptr [ebp - 48h], edx
        push 40h
        push 0
        push 0
        mov eax, dword ptr [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 8B 50 FB FF: call 0x5861ddf0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x58668d71
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 4ch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 10h]
        add edx, 74h
        mov dword ptr [ebp - 50h], edx
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 87 F4 E1 FF: call 0x58488220
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xf4
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 5C: je 0x58668dfc
        __asm _emit 0x74
        __asm _emit 0x5c
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 80h
        mov dword ptr [ebp - 5ch], ecx
        mov edx, dword ptr [ebp - 10h]
        add edx, 80h
        mov dword ptr [ebp - 54h], edx
        lea eax, [ebp - 68h]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 BC F2 E1 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xf2
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 58h], ecx
        lea edx, [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 58h]
        push eax
        lea ecx, [ebp - 6ch]
        push ecx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 D3 12 E5 FF: call 0x584ba0b0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x12
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 7A 04 E5 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x04
        __asm _emit 0xe5
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 5
        ; Exact mapped bytes 75 0E: jne 0x58668dfc
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov eax, dword ptr [ebp - 14h]
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
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
