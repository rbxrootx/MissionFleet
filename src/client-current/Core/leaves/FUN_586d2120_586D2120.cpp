// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586D2120 .. +0x4BF bytes.
extern "C" __declspec(naked) void FUN_586d2120_586D2120() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 78h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 4ch], ecx
        ; Exact mapped bytes A1 EC 90 94 58: mov eax, dword ptr [0x589490ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 05 2C 06 96 58: cmp eax, dword ptr [0x5896062c]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 4A: jne 0x586d218a
        __asm _emit 0x75
        __asm _emit 0x4a
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 85 38 DC FF: call 0x584959d0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x38
        __asm _emit 0xdc
        __asm _emit 0xff
        cmp eax, 7
        ; Exact mapped bytes 74 10: je 0x586d2160
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 75 38 DC FF: call 0x584959d0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x38
        __asm _emit 0xdc
        __asm _emit 0xff
        cmp eax, 0ch
        ; Exact mapped bytes 75 2A: jne 0x586d218a
        __asm _emit 0x75
        __asm _emit 0x2a
        push 588b2084h
        ; Exact mapped bytes E8 86 FE E4 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xfe
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        push 6464ffh
        mov ecx, dword ptr [ebp - 50h]
        push ecx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CC E1 00 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 45 04 00 00: jmp 0x586d25cf
        __asm _emit 0xe9
        __asm _emit 0x45
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], 6dh
        mov edx, dword ptr [ebp - 3ch]
        push edx
        ; Exact mapped bytes E8 A8 EE 15 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xee
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 54h], eax
        mov eax, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 38h], eax
        xor ecx, ecx
        ; Exact mapped bytes 66 89 4D C0: mov word ptr [ebp - 0x40], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xc0
        mov edx, dword ptr [ebp - 3ch]
        push edx
        push 0
        mov eax, dword ptr [ebp - 38h]
        push eax
        ; Exact mapped bytes E8 55 AC 17 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xac
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 0ch
        push 30h
        push 0
        lea ecx, [ebp - 34h]
        push ecx
        ; Exact mapped bytes E8 45 AC 17 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xac
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 0ch
        push 589604e0h
        lea edx, [ebp - 34h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 05 4F E0 FF: call 0x584d70f0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x4f
        __asm _emit 0xe0
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 36: jne 0x586d2226
        __asm _emit 0x75
        __asm _emit 0x36
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 15 CD E9 FF: call 0x5856ef10
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xcd
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4E F4 DF FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xf4
        __asm _emit 0xdf
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x586d2226
        __asm _emit 0x74
        __asm _emit 0x20
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FF CC E9 FF: call 0x5856ef10
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xcc
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 38 F4 DF FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xf4
        __asm _emit 0xdf
        __asm _emit 0xff
        push eax
        lea eax, [ebp - 1ch]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        push 30h
        lea ecx, [ebp - 34h]
        push ecx
        mov edx, dword ptr [ebp - 38h]
        push edx
        ; Exact mapped bytes E8 5B A6 17 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xa6
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 0ch
        push 3ch
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4ch]
        mov ecx, dword ptr [ecx + eax*4 + 6ch]
        ; Exact mapped bytes E8 07 F4 DF FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xf4
        __asm _emit 0xdf
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp - 38h]
        add edx, 30h
        push edx
        ; Exact mapped bytes E8 3A A6 17 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xa6
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 4ch]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 85 60 03 00 00: jne 0x586d25cf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 16 4E E0 FF: call 0x584d7090
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x4e
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        mov eax, dword ptr [ebp - 44h]
        sub eax, 1
        mov dword ptr [ebp - 44h], eax
        cmp dword ptr [ebp - 44h], 4
        ; Exact mapped bytes 0F 87 3F 03 00 00: ja 0x586d25cf
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x3f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes FF 24 8D E0 25 6D 58: jmp dword ptr [ecx*4 + 0x586d25e0]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xe0
        __asm _emit 0x25
        __asm _emit 0x6d
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4B 4E E0 FF: call 0x584d70f0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x4e
        __asm _emit 0xe0
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 74 45: je 0x586d22ef
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 8B 15 EC 90 94 58: mov edx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 15 0C 06 96 58: cmp edx, dword ptr [0x5896060c]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 74 0D: je 0x586d22c5
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes A1 EC 90 94 58: mov eax, dword ptr [0x589490ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 05 14 06 96 58: cmp eax, dword ptr [0x58960614]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 2A: jne 0x586d22ef
        __asm _emit 0x75
        __asm _emit 0x2a
        push 588b20a0h
        ; Exact mapped bytes E8 21 FD E4 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xfd
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        push 6464ffh
        mov ecx, dword ptr [ebp - 58h]
        push ecx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 67 E0 00 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 86 00 00 00: jmp 0x586d2375
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F6 4D E0 FF: call 0x584d70f0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x4d
        __asm _emit 0xe0
        __asm _emit 0xff
        cmp eax, 3
        ; Exact mapped bytes 75 16: jne 0x586d2315
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B6 46 DB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x46
        __asm _emit 0xdb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9F AC DB FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xac
        __asm _emit 0xdb
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 C0: mov word ptr [ebp - 0x40], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xc0
        ; Exact mapped bytes 83 3D 98 75 94 58 00: cmp dword ptr [0x58947598], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 57: je 0x586d2375
        __asm _emit 0x74
        __asm _emit 0x57
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C7 4D E0 FF: call 0x584d70f0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x4d
        __asm _emit 0xe0
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 BA: mov word ptr [ebp - 0x46], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xba
        push 1
        mov edx, dword ptr [ebp - 3ch]
        push edx
        mov eax, dword ptr [ebp - 38h]
        push eax
        movzx ecx, word ptr [ebp - 40h]
        push ecx
        movzx edx, word ptr [ebp - 46h]
        push edx
        ; Exact mapped bytes 8B 0D 98 75 94 58: mov ecx, dword ptr [0x58947598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 44 E6 E9 FF: call 0x58570990
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xe6
        __asm _emit 0xe9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 25: jne 0x586d2375
        __asm _emit 0x75
        __asm _emit 0x25
        push 588b20c4h
        ; Exact mapped bytes E8 96 FC E4 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xfc
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 5ch], eax
        push 6464ffh
        mov eax, dword ptr [ebp - 5ch]
        push eax
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DC DF 00 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 55 02 00 00: jmp 0x586d25cf
        __asm _emit 0xe9
        __asm _emit 0x55
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F9 24 F0 FF: call 0x585d4880
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 49: je 0x586d23d4
        __asm _emit 0x74
        __asm _emit 0x49
        ; Exact mapped bytes 83 3D 98 75 94 58 00: cmp dword ptr [0x58947598], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 3E: je 0x586d23d2
        __asm _emit 0x74
        __asm _emit 0x3e
        push 1
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        mov edx, dword ptr [ebp - 38h]
        push edx
        ; Exact mapped bytes 8B 0D 98 75 94 58: mov ecx, dword ptr [0x58947598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 27 E7 E9 FF: call 0x58570ad0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xe7
        __asm _emit 0xe9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 25: jne 0x586d23d2
        __asm _emit 0x75
        __asm _emit 0x25
        push 588b20ech
        ; Exact mapped bytes E8 39 FC E4 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xfc
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        push 6464ffh
        mov eax, dword ptr [ebp - 60h]
        push eax
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 7F DF 00 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 25: jmp 0x586d23f9
        __asm _emit 0xeb
        __asm _emit 0x25
        push 588b2114h
        ; Exact mapped bytes E8 12 FC E4 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xfc
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 64h], eax
        push 6464ffh
        mov ecx, dword ptr [ebp - 64h]
        push ecx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 58 DF 00 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 D1 01 00 00: jmp 0x586d25cf
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 3
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 75 24 F0 FF: call 0x585d4880
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 49: je 0x586d2458
        __asm _emit 0x74
        __asm _emit 0x49
        ; Exact mapped bytes 83 3D 98 75 94 58 00: cmp dword ptr [0x58947598], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 3E: je 0x586d2456
        __asm _emit 0x74
        __asm _emit 0x3e
        push 1
        mov edx, dword ptr [ebp - 3ch]
        push edx
        mov eax, dword ptr [ebp - 38h]
        push eax
        ; Exact mapped bytes 8B 0D 98 75 94 58: mov ecx, dword ptr [0x58947598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 63 E7 E9 FF: call 0x58570b90
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xe7
        __asm _emit 0xe9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 25: jne 0x586d2456
        __asm _emit 0x75
        __asm _emit 0x25
        push 588b2130h
        ; Exact mapped bytes E8 B5 FB E4 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xfb
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        push 6464ffh
        mov ecx, dword ptr [ebp - 68h]
        push ecx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FB DE 00 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 25: jmp 0x586d247d
        __asm _emit 0xeb
        __asm _emit 0x25
        push 588b2158h
        ; Exact mapped bytes E8 8E FB E4 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xfb
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 6ch], eax
        push 6464ffh
        mov edx, dword ptr [ebp - 6ch]
        push edx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D4 DE 00 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 4D 01 00 00: jmp 0x586d25cf
        __asm _emit 0xe9
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 2
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F1 23 F0 FF: call 0x585d4880
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x23
        __asm _emit 0xf0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 49: je 0x586d24dc
        __asm _emit 0x74
        __asm _emit 0x49
        ; Exact mapped bytes 83 3D 98 75 94 58 00: cmp dword ptr [0x58947598], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 3E: je 0x586d24da
        __asm _emit 0x74
        __asm _emit 0x3e
        push 1
        mov eax, dword ptr [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        ; Exact mapped bytes 8B 0D 98 75 94 58: mov ecx, dword ptr [0x58947598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8F E5 E9 FF: call 0x58570a40
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xe5
        __asm _emit 0xe9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 25: jne 0x586d24da
        __asm _emit 0x75
        __asm _emit 0x25
        push 588b2174h
        ; Exact mapped bytes E8 31 FB E4 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xfb
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 70h], eax
        push 6464ffh
        mov edx, dword ptr [ebp - 70h]
        push edx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 77 DE 00 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 25: jmp 0x586d2501
        __asm _emit 0xeb
        __asm _emit 0x25
        push 588b219ch
        ; Exact mapped bytes E8 0A FB E4 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xfb
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 74h], eax
        push 6464ffh
        mov eax, dword ptr [ebp - 74h]
        push eax
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 50 DE 00 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 C9 00 00 00: jmp 0x586d25cf
        __asm _emit 0xe9
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 38h]
        push edx
        ; Exact mapped bytes E8 FB A8 17 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xa8
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 0ch
        push 30h
        push 0
        lea eax, [ebp - 34h]
        push eax
        ; Exact mapped bytes E8 EB A8 17 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xa8
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 0ch
        push 589604e0h
        push 18h
        lea ecx, [ebp - 34h]
        push ecx
        ; Exact mapped bytes E8 48 1C 0E 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x1c
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2A F5 FF FF: call 0x586d1a70
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        push 18h
        lea edx, [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 2E 1C 0E 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x1c
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 0ch
        push 30h
        lea eax, [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        ; Exact mapped bytes E8 2C A3 17 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xa3
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 0ch
        push 3ch
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4ch]
        mov ecx, dword ptr [eax + edx*4 + 6ch]
        ; Exact mapped bytes E8 D8 F0 DF FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xf0
        __asm _emit 0xdf
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 38h]
        add ecx, 30h
        push ecx
        ; Exact mapped bytes E8 0B A3 17 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xa3
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes 83 3D 98 75 94 58 00: cmp dword ptr [0x58947598], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 3E: je 0x586d25cf
        __asm _emit 0x74
        __asm _emit 0x3e
        push 1
        mov edx, dword ptr [ebp - 3ch]
        push edx
        mov eax, dword ptr [ebp - 38h]
        push eax
        ; Exact mapped bytes 8B 0D 98 75 94 58: mov ecx, dword ptr [0x58947598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 EA E2 E9 FF: call 0x58570890
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xe2
        __asm _emit 0xe9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 25: jne 0x586d25cf
        __asm _emit 0x75
        __asm _emit 0x25
        push 588b21b8h
        ; Exact mapped bytes E8 3C FA E4 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xfa
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 78h], eax
        push 6464ffh
        mov ecx, dword ptr [ebp - 78h]
        push ecx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 82 DD 00 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 77 EA 15 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xea
        __asm _emit 0x15
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
