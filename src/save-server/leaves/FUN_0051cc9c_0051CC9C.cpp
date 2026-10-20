// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051CC9C .. +0x34A bytes.
extern "C" __declspec(naked) void FUN_0051cc9c_0051CC9C() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58e18dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 44h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4ch], ecx
        push 0
        push 10h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 9C 67 F8 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x67
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x51cce2
        __asm _emit 0x75
        __asm _emit 0x14
        push 92h
        push 6778d4h
        ; Exact mapped bytes E8 63 C0 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51cce2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x51ccbd
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 25: je 0x51cd13
        __asm _emit 0x74
        __asm _emit 0x25
        push 0
        push 10h
        mov edx, dword ptr [ebp + 14h]
        push edx
        ; Exact mapped bytes E8 6B 67 F8 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x67
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x51cd13
        __asm _emit 0x75
        __asm _emit 0x14
        push 94h
        push 6778d4h
        ; Exact mapped bytes E8 32 C0 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51cd13
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CF: jne 0x51cce8
        __asm _emit 0x75
        __asm _emit 0xcf
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 6D 6A 01 00: call 0x53378e
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 5E 6A 01 00: call 0x53378e
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 52 6A 01 00: call 0x53378e
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 A9 6A 01 00: call 0x5337f5
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        push edx
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 B0 54 01 00: call 0x532208
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        neg eax
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        neg ecx
        push ecx
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 82 57 01 00: call 0x5324ee
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        push edx
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 4A 56 01 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 4E 58 01 00: call 0x5325cf
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 39 56 01 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 63 6A 01 00: call 0x5337f5
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 0
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 27 6A 01 00: call 0x5337c9
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        push 3
        lea eax, [ebp - 30h]
        push eax
        lea ecx, [ebp - 28h]
        push ecx
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 A2 6C 01 00: call 0x533a56
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        cmp dword ptr [ebp + 20h], 0
        ; Exact mapped bytes 75 08: jne 0x51cdc9
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes E8 46 FE FF FF: call 0x51cc0c
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp + 20h], eax
        cmp dword ptr [ebp + 24h], 0
        ; Exact mapped bytes 75 06: jne 0x51cdd5
        __asm _emit 0x75
        __asm _emit 0x06
        mov edx, dword ptr [ebp + 20h]
        mov dword ptr [ebp + 24h], edx
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 B1 69 01 00: call 0x53378e
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 A5 69 01 00: call 0x53378e
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 0F 84 A4 00 00 00: je 0x51ce9b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 0
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 C2 69 01 00: call 0x5337c9
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 14h]
        push eax
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 E5 6B 01 00: call 0x5339f8
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 EE 57 01 00: call 0x53260d
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 1ch]
        neg edx
        push edx
        mov eax, dword ptr [ebp + 18h]
        neg eax
        push eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 BB 56 01 00: call 0x5324ee
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 83 55 01 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 87 57 01 00: call 0x5325cf
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 72 55 01 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 9F 6B 01 00: call 0x5339f8
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        push 3
        lea edx, [ebp - 30h]
        push edx
        lea eax, [ebp - 28h]
        push eax
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 EB 6B 01 00: call 0x533a56
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 20h]
        mov edx, dword ptr [ebp + 24h]
        mov eax, dword ptr [ecx + 4]
        cmp eax, dword ptr [edx + 4]
        ; Exact mapped bytes 75 22: jne 0x51ce9b
        __asm _emit 0x75
        __asm _emit 0x22
        push 0
        push 0
        push 0
        push 0
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 40 69 01 00: call 0x5337c9
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        push 3
        lea ecx, [ebp - 38h]
        push ecx
        lea edx, [ebp - 48h]
        push edx
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 BB 6B 01 00: call 0x533a56
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 20h]
        mov ecx, dword ptr [ebp + 24h]
        mov edx, dword ptr [eax + 4]
        cmp edx, dword ptr [ecx + 4]
        ; Exact mapped bytes 74 6A: je 0x51cf13
        __asm _emit 0x74
        __asm _emit 0x6a
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 64: je 0x51cf13
        __asm _emit 0x74
        __asm _emit 0x64
        lea eax, [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 B9 A1 FC FF: call 0x4e7074
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xa1
        __asm _emit 0xfc
        __asm _emit 0xff
        lea ecx, [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp - 4ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes FF 50 58: call dword ptr [eax + 0x58]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x58
        mov ecx, dword ptr [ebp + 24h]
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 FD 94 FC FF: call 0x4e63d3
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x94
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        push 5a0049h
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 E0 53 01 00: call 0x5322c6
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 C1 53 01 00: call 0x5322b0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 40 88 01 00: call 0x535740
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 C7 94 FC FF: call 0x4e63d3
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x94
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], 0
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 08: je 0x51cf21
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ebp - 40h]
        mov dword ptr [ebp - 50h], edx
        ; Exact mapped bytes EB 06: jmp 0x51cf27
        __asm _emit 0xeb
        __asm _emit 0x06
        lea eax, [ebp - 38h]
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 50h]
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 41 A1 FC FF: call 0x4e7074
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xa1
        __asm _emit 0xfc
        __asm _emit 0xff
        lea edx, [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 4ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes FF 52 58: call dword ptr [edx + 0x58]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x58
        mov eax, dword ptr [ebp + 20h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 85 94 FC FF: call 0x4e63d3
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        push 5a0049h
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 68 53 01 00: call 0x5322c6
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 49 53 01 00: call 0x5322b0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 C8 87 01 00: call 0x535740
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 0C: je 0x51cf8a
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 49 94 FC FF: call 0x4e63d3
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x94
        __asm _emit 0xfc
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 E0 A0 FC FF: call 0x4e7074
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xa0
        __asm _emit 0xfc
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 0D 68 01 00: call 0x5337ad
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 01 68 01 00: call 0x5337ad
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 F5 67 01 00: call 0x5337ad
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 E9 67 01 00: call 0x5337ad
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 DA 67 01 00: call 0x5337ad
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 20 00: ret 0x20
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
