// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0057517F .. +0x295 bytes.
extern "C" __declspec(naked) void FUN_0057517f_0057517F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 64h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 60h], ecx
        push 5e1h
        push 67cd14h
        mov eax, dword ptr [ebp - 60h]
        push eax
        ; Exact mapped bytes E8 C2 50 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x50
        __asm _emit 0xf6
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 25: je 0x5751c9
        __asm _emit 0x74
        __asm _emit 0x25
        push 0
        push 10h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 B5 E2 F2 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xe2
        __asm _emit 0xf2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5751c9
        __asm _emit 0x75
        __asm _emit 0x14
        push 5e3h
        push 67cd14h
        ; Exact mapped bytes E8 7C 3B FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x3b
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5751c9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CF: jne 0x57519e
        __asm _emit 0x75
        __asm _emit 0xcf
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x5751e9
        __asm _emit 0x75
        __asm _emit 0x14
        push 5e4h
        push 67cd14h
        ; Exact mapped bytes E8 5C 3B FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x3b
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5751e9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x5751cf
        __asm _emit 0x75
        __asm _emit 0xe0
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 D0 CF FB FF: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xcf
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 0E: je 0x57520b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 AF D2 FB FF: call 0x5324b8
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xd2
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes EB 27: jmp 0x575232
        __asm _emit 0xeb
        __asm _emit 0x27
        lea edx, [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes FF 51 14: call dword ptr [ecx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x575232
        __asm _emit 0x74
        __asm _emit 0x13
        push 0
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes FF 51 1C: call dword ptr [ecx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x1c
        ; Exact mapped bytes E9 D9 01 00 00: jmp 0x57540b
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 14: je 0x57524c
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 60h]
        mov ecx, dword ptr [eax + 0c0h]
        mov edx, dword ptr [ecx + 0dch]
        mov dword ptr [ebp - 64h], edx
        ; Exact mapped bytes EB 12: jmp 0x57525e
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 60h]
        mov ecx, dword ptr [eax + 0c0h]
        mov edx, dword ptr [ecx + 0e0h]
        mov dword ptr [ebp - 64h], edx
        mov eax, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes E8 F0 35 F6 FF: call 0x4d8859
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x35
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 60h]
        mov edx, dword ptr [eax + 20h]
        cmp edx, dword ptr [ecx + 0c0h]
        ; Exact mapped bytes 75 14: jne 0x57528b
        __asm _emit 0x75
        __asm _emit 0x14
        push 1
        mov eax, dword ptr [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 60h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes FF 92 28 01 00 00: call dword ptr [edx + 0x128]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 14h], eax
        push 1
        lea ecx, [ebp - 30h]
        push ecx
        lea edx, [ebp - 20h]
        push edx
        push 1
        push 0
        push 0ffffh
        push 0
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 28 E1 F5 FF: call 0x4d33e8
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xe1
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 24h]
        sub eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        sub ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        sub edx, dword ptr [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp - 20h]
        sub eax, dword ptr [ebp - 30h]
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 F1 CE FB FF: call 0x5321d5
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xce
        __asm _emit 0xfb
        __asm _emit 0xff
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 DB CE FB FF: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xce
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 40h], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 34h], ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 E7 D0 FB FF: call 0x5323f3
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xd0
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x575323
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 6ch
        ; Exact mapped bytes E8 2F 16 FB FF: call 0x52694a
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x16
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 B4 00 00 00: jne 0x5753d7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 40h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes FF 51 18: call dword ptr [ecx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 0F 85 9C 00 00 00: jne 0x5753d7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes FF 52 1C: call dword ptr [edx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x1c
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x575363
        __asm _emit 0x74
        __asm _emit 0x14
        push 615h
        push 67cd14h
        ; Exact mapped bytes E8 E2 39 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x39
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x575363
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D2: jne 0x57533b
        __asm _emit 0x75
        __asm _emit 0xd2
        push 1
        lea edx, [ebp - 30h]
        push edx
        push 0
        push 0
        push 0
        push 0ffffh
        push 0
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 64 E0 F5 FF: call 0x4d33e8
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xe0
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 6ch
        ; Exact mapped bytes E8 C8 16 FB FF: call 0x526a57
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x16
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 3D: je 0x5753d5
        __asm _emit 0x74
        __asm _emit 0x3d
        lea eax, [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 6ch
        ; Exact mapped bytes E8 D2 16 FB FF: call 0x526a79
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x16
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4ch], ecx
        push 621h
        push 67cd14h
        mov edx, dword ptr [ebp - 4ch]
        push edx
        ; Exact mapped bytes E8 A1 4E F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x4e
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 B3 04 FA FF: call 0x51587a
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x04
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 08: jne 0x5753d3
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 A1 6A FB FF: call 0x52be74
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x6a
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes EB BD: jmp 0x575392
        __asm _emit 0xeb
        __asm _emit 0xbd
        ; Exact mapped bytes EB 34: jmp 0x57540b
        __asm _emit 0xeb
        __asm _emit 0x34
        push 0
        mov eax, dword ptr [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 60h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes FF 92 28 01 00 00: call dword ptr [edx + 0x128]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 0
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 DA CD FB FF: call 0x5321d5
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xcd
        __asm _emit 0xfb
        __asm _emit 0xff
        lea eax, [ebp - 5ch]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes FF 52 1C: call dword ptr [edx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x1c
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
