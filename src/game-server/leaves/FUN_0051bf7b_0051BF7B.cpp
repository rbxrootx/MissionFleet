// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051BF7B .. +0x8F0 bytes.
extern "C" __declspec(naked) void FUN_0051bf7b_0051BF7B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ach
        mov dword ptr [ebp - 1ach], ecx
        push 4ah
        push 5cb704h
        mov eax, dword ptr [ebp - 1ach]
        mov ecx, dword ptr [eax + 68h]
        push ecx
        ; Exact mapped bytes E8 C0 F1 FD FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xf1
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 1ach]
        mov dword ptr [edx + 88h], 1
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes E8 18 14 00 00: call 0x51d3d3
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ach]
        mov ecx, dword ptr [eax + 84h]
        ; Exact mapped bytes E8 4D 68 FE FF: call 0x502819
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x68
        __asm _emit 0xfe
        __asm _emit 0xff
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x51bfe6
        __asm _emit 0x74
        __asm _emit 0x13
        push 0
        mov ecx, dword ptr [ebp - 1ach]
        mov ecx, dword ptr [ecx + 84h]
        ; Exact mapped bytes E8 D7 68 FE FF: call 0x5028bd
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x68
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 1ach]
        mov eax, dword ptr [edx + 68h]
        mov ecx, dword ptr [eax + 64h]
        and ecx, 4
        test ecx, ecx
        ; Exact mapped bytes 0F 84 EB 02 00 00: je 0x51c2e8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xeb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 4C 9D 01 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x9d
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 5D 9F 01 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x9f
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 1ach]
        mov ecx, dword ptr [edx + 68h]
        ; Exact mapped bytes E8 93 00 02 00: call 0x53c0af
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ach]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 8], edx
        push 0ah
        push 0
        lea eax, [ebp - 70h]
        push eax
        mov ecx, dword ptr [ebp - 1ach]
        mov ecx, dword ptr [ecx + 68h]
        mov edx, dword ptr [ebp - 1ach]
        mov eax, dword ptr [edx + 68h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 C4 00 00 00: call dword ptr [edx + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 28h], ecx
        mov dword ptr [ebp - 24h], edx
        push 10h
        push 0
        lea eax, [ebp - 78h]
        push eax
        mov ecx, dword ptr [ebp - 1ach]
        mov ecx, dword ptr [ecx + 68h]
        mov edx, dword ptr [ebp - 1ach]
        mov eax, dword ptr [edx + 68h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 C4 00 00 00: call dword ptr [edx + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 20h], ecx
        mov dword ptr [ebp - 1ch], edx
        push 6
        push 0
        lea eax, [ebp - 80h]
        push eax
        mov ecx, dword ptr [ebp - 1ach]
        mov ecx, dword ptr [ecx + 68h]
        mov edx, dword ptr [ebp - 1ach]
        mov eax, dword ptr [edx + 68h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 C4 00 00 00: call dword ptr [edx + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 98h], eax
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 94h], ecx
        mov edx, dword ptr [ebp - 94h]
        push edx
        mov eax, dword ptr [ebp - 98h]
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 CA 9D 01 00: call 0x535ea7
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x9d
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0a0h], ecx
        mov dword ptr [ebp - 9ch], edx
        mov eax, dword ptr [ebp - 9ch]
        push eax
        mov ecx, dword ptr [ebp - 0a0h]
        push ecx
        lea ecx, [ebp - 90h]
        ; Exact mapped bytes E8 C7 9C 01 00: call 0x535dce
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ach]
        add edx, 28h
        mov ecx, dword ptr [eax]
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edx + 0ch], eax
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 0b8h], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 0b4h], edx
        mov eax, dword ptr [ebp - 0b4h]
        push eax
        mov ecx, dword ptr [ebp - 0b8h]
        push ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 59 9D 01 00: call 0x535ea7
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x9d
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 0c0h], edx
        mov dword ptr [ebp - 0bch], eax
        mov ecx, dword ptr [ebp - 0bch]
        push ecx
        mov edx, dword ptr [ebp - 0c0h]
        push edx
        lea ecx, [ebp - 0b0h]
        ; Exact mapped bytes E8 56 9C 01 00: call 0x535dce
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ach]
        add ecx, 38h
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 0d8h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 0d4h], edx
        mov eax, dword ptr [ebp - 0d4h]
        push eax
        mov ecx, dword ptr [ebp - 0d8h]
        push ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 E8 9C 01 00: call 0x535ea7
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 0e0h], edx
        mov dword ptr [ebp - 0dch], eax
        mov ecx, dword ptr [ebp - 0dch]
        push ecx
        mov edx, dword ptr [ebp - 0e0h]
        push edx
        lea ecx, [ebp - 0d0h]
        ; Exact mapped bytes E8 E5 9B 01 00: call 0x535dce
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x9b
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ach]
        add ecx, 48h
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 0f8h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 0f4h], edx
        mov eax, dword ptr [ebp - 0f4h]
        push eax
        mov ecx, dword ptr [ebp - 0f8h]
        push ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 77 9C 01 00: call 0x535ea7
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 100h], edx
        mov dword ptr [ebp - 0fch], eax
        mov ecx, dword ptr [ebp - 0fch]
        push ecx
        mov edx, dword ptr [ebp - 100h]
        push edx
        lea ecx, [ebp - 0f0h]
        ; Exact mapped bytes E8 74 9B 01 00: call 0x535dce
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x9b
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ach]
        add ecx, 58h
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        push 0
        push 0c40000h
        mov ecx, dword ptr [ebp - 1ach]
        add ecx, 48h
        push ecx
        ; Exact mapped bytes E8 BE 36 01 00: call 0x52f94d
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        push 0c40000h
        mov edx, dword ptr [ebp - 1ach]
        add edx, 58h
        push edx
        ; Exact mapped bytes E8 A8 36 01 00: call 0x52f94d
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes A1 AC E8 5D 00: mov eax, dword ptr [0x5de8ac]
        __asm _emit 0xa1
        __asm _emit 0xac
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        neg eax
        push eax
        ; Exact mapped bytes 8B 0D A8 E8 5D 00: mov ecx, dword ptr [0x5de8a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        neg ecx
        push ecx
        mov ecx, dword ptr [ebp - 1ach]
        add ecx, 48h
        ; Exact mapped bytes E8 D2 9D 01 00: call 0x536096
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x9d
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 AC E8 5D 00: mov edx, dword ptr [0x5de8ac]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        neg edx
        push edx
        ; Exact mapped bytes A1 A8 E8 5D 00: mov eax, dword ptr [0x5de8a8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        neg eax
        push eax
        mov ecx, dword ptr [ebp - 1ach]
        add ecx, 58h
        ; Exact mapped bytes E8 B3 9D 01 00: call 0x536096
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x9d
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 EF 04 00 00: jmp 0x51c7d7
        __asm _emit 0xe9
        __asm _emit 0xef
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ach]
        mov edx, dword ptr [ecx + 68h]
        mov eax, dword ptr [edx + 64h]
        and eax, 2
        test eax, eax
        ; Exact mapped bytes 0F 84 33 02 00 00: je 0x51c532
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x33
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 4A 9A 01 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x9a
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 5B 9C 01 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 1ach]
        mov ecx, dword ptr [ecx + 68h]
        ; Exact mapped bytes E8 91 FD 01 00: call 0x53c0af
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xfd
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ach]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 8], ecx
        push 0ah
        push -1
        lea edx, [ebp - 108h]
        push edx
        mov eax, dword ptr [ebp - 1ach]
        mov ecx, dword ptr [eax + 68h]
        mov edx, dword ptr [ebp - 1ach]
        mov eax, dword ptr [edx + 68h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 C4 00 00 00: call dword ptr [edx + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 48h], ecx
        mov dword ptr [ebp - 44h], edx
        push 10h
        push -1
        lea eax, [ebp - 110h]
        push eax
        mov ecx, dword ptr [ebp - 1ach]
        mov ecx, dword ptr [ecx + 68h]
        mov edx, dword ptr [ebp - 1ach]
        mov eax, dword ptr [edx + 68h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 C4 00 00 00: call dword ptr [edx + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 40h], ecx
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 128h], eax
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 124h], ecx
        mov edx, dword ptr [ebp - 124h]
        push edx
        mov eax, dword ptr [ebp - 128h]
        push eax
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 EF 9A 01 00: call 0x535ea7
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x9a
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 130h], ecx
        mov dword ptr [ebp - 12ch], edx
        mov eax, dword ptr [ebp - 12ch]
        push eax
        mov ecx, dword ptr [ebp - 130h]
        push ecx
        lea ecx, [ebp - 120h]
        ; Exact mapped bytes E8 EC 99 01 00: call 0x535dce
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x99
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ach]
        add edx, 28h
        mov ecx, dword ptr [eax]
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edx + 0ch], eax
        mov ecx, dword ptr [ebp - 1ach]
        add ecx, 28h
        mov edx, dword ptr [ebp - 1ach]
        add edx, 48h
        mov eax, dword ptr [ecx]
        mov dword ptr [edx], eax
        mov eax, dword ptr [ecx + 4]
        mov dword ptr [edx + 4], eax
        mov eax, dword ptr [ecx + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ecx + 0ch]
        mov dword ptr [edx + 0ch], ecx
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 148h], edx
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 144h], eax
        mov ecx, dword ptr [ebp - 144h]
        push ecx
        mov edx, dword ptr [ebp - 148h]
        push edx
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 56 9A 01 00: call 0x535ea7
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x9a
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 150h], ecx
        mov dword ptr [ebp - 14ch], edx
        mov eax, dword ptr [ebp - 14ch]
        push eax
        mov ecx, dword ptr [ebp - 150h]
        push ecx
        lea ecx, [ebp - 140h]
        ; Exact mapped bytes E8 53 99 01 00: call 0x535dce
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x99
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ach]
        add edx, 38h
        mov ecx, dword ptr [eax]
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edx + 0ch], eax
        mov ecx, dword ptr [ebp - 1ach]
        add ecx, 38h
        mov edx, dword ptr [ebp - 1ach]
        add edx, 58h
        mov eax, dword ptr [ecx]
        mov dword ptr [edx], eax
        mov eax, dword ptr [ecx + 4]
        mov dword ptr [edx + 4], eax
        mov eax, dword ptr [ecx + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ecx + 0ch]
        mov dword ptr [edx + 0ch], ecx
        push 0
        push 0c40000h
        mov edx, dword ptr [ebp - 1ach]
        add edx, 48h
        push edx
        ; Exact mapped bytes E8 75 34 01 00: call 0x52f94d
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        push 0c40000h
        mov eax, dword ptr [ebp - 1ach]
        add eax, 58h
        push eax
        ; Exact mapped bytes E8 5F 34 01 00: call 0x52f94d
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D AC E8 5D 00: mov ecx, dword ptr [0x5de8ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        neg ecx
        push ecx
        ; Exact mapped bytes 8B 15 A8 E8 5D 00: mov edx, dword ptr [0x5de8a8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        neg edx
        push edx
        mov ecx, dword ptr [ebp - 1ach]
        add ecx, 48h
        ; Exact mapped bytes E8 88 9B 01 00: call 0x536096
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x9b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes A1 AC E8 5D 00: mov eax, dword ptr [0x5de8ac]
        __asm _emit 0xa1
        __asm _emit 0xac
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        neg eax
        push eax
        ; Exact mapped bytes 8B 0D A8 E8 5D 00: mov ecx, dword ptr [0x5de8a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        neg ecx
        push ecx
        mov ecx, dword ptr [ebp - 1ach]
        add ecx, 58h
        ; Exact mapped bytes E8 69 9B 01 00: call 0x536096
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x9b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 A5 02 00 00: jmp 0x51c7d7
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 17 98 01 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 28 9A 01 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x9a
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 1ach]
        mov ecx, dword ptr [edx + 68h]
        ; Exact mapped bytes E8 5E FB 01 00: call 0x53c0af
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xfb
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ach]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 8], edx
        mov eax, dword ptr [ebp - 1ach]
        mov ecx, dword ptr [eax + 78h]
        and ecx, 0a000h
        mov dword ptr [ebp - 64h], ecx
        mov edx, dword ptr [ebp - 64h]
        neg edx
        sbb edx, edx
        and edx, 6
        add edx, 0ah
        mov dword ptr [ebp - 68h], edx
        mov eax, dword ptr [ebp - 68h]
        push eax
        push -1
        lea ecx, [ebp - 158h]
        push ecx
        mov edx, dword ptr [ebp - 1ach]
        mov ecx, dword ptr [edx + 68h]
        mov eax, dword ptr [ebp - 1ach]
        mov edx, dword ptr [eax + 68h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 90 C4 00 00 00: call dword ptr [eax + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 50h], ecx
        mov dword ptr [ebp - 4ch], edx
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 0F 84 B0 00 00 00: je 0x51c671
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ach]
        add eax, 28h
        mov ecx, dword ptr [ebp - 60h]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 5ch]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp - 58h]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp - 54h]
        mov dword ptr [eax + 0ch], edx
        mov eax, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 170h], eax
        mov ecx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 16ch], ecx
        mov edx, dword ptr [ebp - 16ch]
        push edx
        mov eax, dword ptr [ebp - 170h]
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        push ecx
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 43 98 01 00: call 0x535e50
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        cdq
        sub eax, edx
        sar eax, 1
        mov edx, dword ptr [ebp + 8]
        sub edx, eax
        push edx
        lea ecx, [ebp - 180h]
        ; Exact mapped bytes E8 46 93 01 00: call 0x535969
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 178h], ecx
        mov dword ptr [ebp - 174h], edx
        mov eax, dword ptr [ebp - 174h]
        push eax
        mov ecx, dword ptr [ebp - 178h]
        push ecx
        lea ecx, [ebp - 168h]
        ; Exact mapped bytes E8 81 97 01 00: call 0x535dce
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x97
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ach]
        add edx, 38h
        mov ecx, dword ptr [eax]
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edx + 0ch], eax
        ; Exact mapped bytes E9 AB 00 00 00: jmp 0x51c71c
        __asm _emit 0xe9
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ach]
        add ecx, 38h
        mov edx, dword ptr [ebp - 60h]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 5ch]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp - 58h]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp - 54h]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 198h], ecx
        mov edx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 194h], edx
        mov eax, dword ptr [ebp - 194h]
        push eax
        mov ecx, dword ptr [ebp - 198h]
        push ecx
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 81 97 01 00: call 0x535e3a
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x97
        __asm _emit 0x01
        __asm _emit 0x00
        cdq
        sub eax, edx
        sar eax, 1
        mov edx, dword ptr [ebp + 0ch]
        sub edx, eax
        push edx
        mov eax, dword ptr [ebp - 60h]
        push eax
        lea ecx, [ebp - 1a8h]
        ; Exact mapped bytes E8 96 92 01 00: call 0x535969
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 1a0h], ecx
        mov dword ptr [ebp - 19ch], edx
        mov eax, dword ptr [ebp - 19ch]
        push eax
        mov ecx, dword ptr [ebp - 1a0h]
        push ecx
        lea ecx, [ebp - 190h]
        ; Exact mapped bytes E8 D1 96 01 00: call 0x535dce
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ach]
        add edx, 28h
        mov ecx, dword ptr [eax]
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edx + 0ch], eax
        mov ecx, dword ptr [ebp - 1ach]
        add ecx, 28h
        mov edx, dword ptr [ebp - 1ach]
        add edx, 48h
        mov eax, dword ptr [ecx]
        mov dword ptr [edx], eax
        mov eax, dword ptr [ecx + 4]
        mov dword ptr [edx + 4], eax
        mov eax, dword ptr [ecx + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ecx + 0ch]
        mov dword ptr [edx + 0ch], ecx
        mov edx, dword ptr [ebp - 1ach]
        add edx, 38h
        mov eax, dword ptr [ebp - 1ach]
        add eax, 58h
        mov ecx, dword ptr [edx]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [edx + 4]
        mov dword ptr [eax + 4], ecx
        mov ecx, dword ptr [edx + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [edx + 0ch]
        mov dword ptr [eax + 0ch], edx
        push 0
        push 0c40000h
        mov eax, dword ptr [ebp - 1ach]
        add eax, 48h
        push eax
        ; Exact mapped bytes E8 CB 31 01 00: call 0x52f94d
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        push 0c40000h
        mov ecx, dword ptr [ebp - 1ach]
        add ecx, 58h
        push ecx
        ; Exact mapped bytes E8 B5 31 01 00: call 0x52f94d
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 AC E8 5D 00: mov edx, dword ptr [0x5de8ac]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        neg edx
        push edx
        ; Exact mapped bytes A1 A8 E8 5D 00: mov eax, dword ptr [0x5de8a8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        neg eax
        push eax
        mov ecx, dword ptr [ebp - 1ach]
        add ecx, 48h
        ; Exact mapped bytes E8 DF 98 01 00: call 0x536096
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D AC E8 5D 00: mov ecx, dword ptr [0x5de8ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        neg ecx
        push ecx
        ; Exact mapped bytes 8B 15 A8 E8 5D 00: mov edx, dword ptr [0x5de8a8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        neg edx
        push edx
        mov ecx, dword ptr [ebp - 1ach]
        add ecx, 58h
        ; Exact mapped bytes E8 BF 98 01 00: call 0x536096
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 1ach]
        add edx, 28h
        push edx
        ; Exact mapped bytes E8 E2 F4 FF FF: call 0x51bcd0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 1ach]
        add edx, 38h
        push edx
        ; Exact mapped bytes E8 CB F4 FF FF: call 0x51bcd0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 1ach]
        add edx, 48h
        push edx
        ; Exact mapped bytes E8 B4 F4 FF FF: call 0x51bcd0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 1ach]
        add edx, 58h
        push edx
        ; Exact mapped bytes E8 9D F4 FF FF: call 0x51bcd0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes E8 2E 10 00 00: call 0x51d86c
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ach]
        mov dword ptr [ecx + 74h], eax
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes E8 11 00 00 00: call 0x51c86b
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes E8 AF 13 00 00: call 0x51dc14
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
