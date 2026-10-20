// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00416D50 .. +0x576 bytes.
extern "C" __declspec(naked) void FUN_00416d50_00416D50() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58b338h
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
        mov eax, 11044h
        ; Exact mapped bytes E8 2E F2 04 00: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xf2
        __asm _emit 0x04
        __asm _emit 0x00
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 11050h]
        mov ecx, 4411h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 10h], ecx
        push 394h
        lea ecx, [ebp - 760h]
        ; Exact mapped bytes E8 51 AB FE FF: call 0x4018ed
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xab
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        push 18h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 28h]
        push ecx
        ; Exact mapped bytes E8 4E E5 04 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xe5
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        push 18h
        mov edx, dword ptr [ebp + 0ch]
        add edx, 18h
        push edx
        lea eax, [ebp - 40h]
        push eax
        ; Exact mapped bytes E8 39 E5 04 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xe5
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        push 4
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 30h
        push ecx
        lea edx, [ebp - 44h]
        push edx
        ; Exact mapped bytes E8 24 E5 04 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xe5
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 108h]
        ; Exact mapped bytes E8 8A A9 FE FF: call 0x40177b
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xa9
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 764h], eax
        lea edx, [ebp - 40h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 108h]
        ; Exact mapped bytes E8 72 A9 FE FF: call 0x40177b
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xa9
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 768h], eax
        cmp dword ptr [ebp - 764h], -1
        ; Exact mapped bytes 0F 84 68 04 00 00: je 0x417284
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 768h], -1
        ; Exact mapped bytes 0F 84 5B 04 00 00: je 0x417284
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5b
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 764h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 108h]
        ; Exact mapped bytes E8 5B AC FE FF: call 0x401a9b
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xac
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 76ch], eax
        push 1
        mov eax, dword ptr [ebp - 768h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 108h]
        ; Exact mapped bytes E8 3E AC FE FF: call 0x401a9b
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xac
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 770h], eax
        cmp dword ptr [ebp - 76ch], -1
        ; Exact mapped bytes 0F 84 14 04 00 00: je 0x417284
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x14
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 770h], -1
        ; Exact mapped bytes 0F 84 07 04 00 00: je 0x417284
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 44h]
        push edx
        mov eax, dword ptr [ebp - 76ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 108h]
        ; Exact mapped bytes E8 C8 A7 FE FF: call 0x40165e
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xa7
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 774h], eax
        cmp dword ptr [ebp - 774h], -1
        ; Exact mapped bytes 0F 84 DB 03 00 00: je 0x417284
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdb
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 37ch
        lea edx, [ebp - 3c0h]
        push edx
        mov eax, dword ptr [ebp - 774h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 108h]
        ; Exact mapped bytes E8 3C AA FE FF: call 0x401906
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xaa
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp - 300h], 0
        ; Exact mapped bytes 0F 85 AD 03 00 00: jne 0x417284
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xad
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 778h], 0
        ; Exact mapped bytes EB 0F: jmp 0x416ef2
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 778h]
        add edx, 1
        mov dword ptr [ebp - 778h], edx
        cmp dword ptr [ebp - 778h], 64h
        ; Exact mapped bytes 0F 8D 42 02 00 00: jge 0x417141
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x42
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 778h]
        push eax
        mov ecx, dword ptr [ebp - 770h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 108h]
        ; Exact mapped bytes E8 43 A7 FE FF: call 0x40165e
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xa7
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 77ch], eax
        cmp dword ptr [ebp - 77ch], -1
        ; Exact mapped bytes 0F 84 1F 01 00 00: je 0x41704d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 37ch
        lea eax, [ebp - 73ch]
        push eax
        mov ecx, dword ptr [ebp - 77ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 108h]
        ; Exact mapped bytes E8 B7 A9 FE FF: call 0x401906
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xa9
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp - 67ch], 1
        ; Exact mapped bytes 0F 85 EC 00 00 00: jne 0x417048
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 778h]
        mov dword ptr [ebp - 3c0h], eax
        push 37ch
        lea ecx, [ebp - 3c0h]
        push ecx
        mov edx, dword ptr [ebp - 77ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 108h]
        ; Exact mapped bytes E8 28 A9 FE FF: call 0x4018b1
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xa9
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 300h], 1
        push 37ch
        lea ecx, [ebp - 3c0h]
        push ecx
        mov edx, dword ptr [ebp - 774h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 108h]
        ; Exact mapped bytes E8 FD A8 FE FF: call 0x4018b1
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xa8
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 300h], 0
        push 18h
        lea ecx, [ebp - 40h]
        push ecx
        lea ecx, [ebp - 760h]
        ; Exact mapped bytes E8 3B A0 FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xa0
        __asm _emit 0xfe
        __asm _emit 0xff
        push 37ch
        lea edx, [ebp - 3c0h]
        push edx
        lea ecx, [ebp - 760h]
        ; Exact mapped bytes E8 24 A0 FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xa0
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        push 18h
        lea eax, [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp - 44h]
        shl eax, 10h
        or al, 1
        push eax
        push 80020ef9h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 17 31 01 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 760h]
        ; Exact mapped bytes E8 20 A9 FE FF: call 0x401938
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xa9
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 760h]
        ; Exact mapped bytes E8 FF A4 FE FF: call 0x401523
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xa4
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp - 778h]
        shl eax, 10h
        push eax
        push 80020ef9h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 DF 30 01 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 F9 00 00 00: jmp 0x417141
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 EF 00 00 00: jmp 0x41713c
        __asm _emit 0xe9
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 778h]
        mov dword ptr [ebp - 3c0h], ecx
        push 37ch
        lea edx, [ebp - 3c0h]
        push edx
        push 63315ch
        mov eax, dword ptr [ebp - 770h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 108h]
        ; Exact mapped bytes E8 F0 A8 FE FF: call 0x40196f
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xa8
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 300h], 1
        push 37ch
        lea edx, [ebp - 3c0h]
        push edx
        mov eax, dword ptr [ebp - 774h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 108h]
        ; Exact mapped bytes E8 07 A8 FE FF: call 0x4018b1
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xa8
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 300h], 0
        push 18h
        lea edx, [ebp - 40h]
        push edx
        lea ecx, [ebp - 760h]
        ; Exact mapped bytes E8 45 9F FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x9f
        __asm _emit 0xfe
        __asm _emit 0xff
        push 37ch
        lea eax, [ebp - 3c0h]
        push eax
        lea ecx, [ebp - 760h]
        ; Exact mapped bytes E8 2E 9F FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x9f
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        push 18h
        lea ecx, [ebp - 28h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        shl ecx, 10h
        or ecx, 1
        push ecx
        push 80020ef9h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 20 30 01 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 760h]
        ; Exact mapped bytes E8 29 A8 FE FF: call 0x401938
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xa8
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 760h]
        ; Exact mapped bytes E8 08 A4 FE FF: call 0x401523
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xa4
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp - 778h]
        shl ecx, 10h
        push ecx
        push 80020ef9h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E8 2F 01 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 05: jmp 0x417141
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 A2 FD FF FF: jmp 0x416ee3
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 780h], 0
        ; Exact mapped bytes EB 0F: jmp 0x41715c
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 780h]
        add edx, 1
        mov dword ptr [ebp - 780h], edx
        cmp dword ptr [ebp - 780h], 64h
        ; Exact mapped bytes 0F 8D 1B 01 00 00: jge 0x417284
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 780h]
        push eax
        mov ecx, dword ptr [ebp - 76ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 108h]
        ; Exact mapped bytes E8 D9 A4 FE FF: call 0x40165e
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xa4
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 774h], eax
        cmp dword ptr [ebp - 774h], -1
        ; Exact mapped bytes 0F 84 E7 00 00 00: je 0x41727f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 37ch
        lea eax, [ebp - 0afch]
        push eax
        mov ecx, dword ptr [ebp - 774h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 108h]
        ; Exact mapped bytes E8 4D A7 FE FF: call 0x401906
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xa7
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp - 0a3ch], 0
        ; Exact mapped bytes 0F 85 B9 00 00 00: jne 0x41727f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        lea eax, [ebp - 314h]
        push eax
        lea ecx, [ebp - 0a50h]
        push ecx
        ; Exact mapped bytes FF 15 E0 B7 68 00: call dword ptr [0x68b7e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 0D DC 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 94 00 00 00: jne 0x41727f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0aa4h]
        cmp edx, dword ptr [ebp - 368h]
        ; Exact mapped bytes 0F 85 82 00 00 00: jne 0x41727f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0aa0h]
        cmp eax, dword ptr [ebp - 364h]
        ; Exact mapped bytes 75 74: jne 0x41727f
        __asm _emit 0x75
        __asm _emit 0x74
        mov dword ptr [ebp - 0a3ch], 1
        push 37ch
        lea ecx, [ebp - 0afch]
        push ecx
        mov edx, dword ptr [ebp - 774h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 108h]
        ; Exact mapped bytes E8 7B A6 FE FF: call 0x4018b1
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xa6
        __asm _emit 0xfe
        __asm _emit 0xff
        push 634098h
        push 63408ch
        lea ecx, [ebp - 1100ch]
        ; Exact mapped bytes E8 D0 A5 FE FF: call 0x40181b
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xa5
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 0a50h]
        push ecx
        lea edx, [ebp - 28h]
        push edx
        push 6340a4h
        lea eax, [ebp - 1100ch]
        push eax
        ; Exact mapped bytes E8 EA A2 FE FF: call 0x401555
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xa2
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 10h
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 1100ch]
        ; Exact mapped bytes E8 3D A2 FE FF: call 0x4014ba
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xa2
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 05: jmp 0x417284
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 C9 FE FF FF: jmp 0x41714d
        __asm _emit 0xe9
        __asm _emit 0xc9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 11010h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 760h]
        ; Exact mapped bytes E8 56 A7 FE FF: call 0x4019f6
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xa7
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 11010h]
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
        add esp, 11050h
        cmp ebp, esp
        ; Exact mapped bytes E8 30 DB 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xdb
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
