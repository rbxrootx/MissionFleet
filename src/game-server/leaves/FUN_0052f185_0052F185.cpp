// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052F185 .. +0x6A5 bytes.
extern "C" __declspec(naked) void FUN_0052f185_0052F185() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57f336h
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
        sub esp, 0e4h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0f0h], ecx
        ; Exact mapped bytes 83 3D FC E8 5D 00 00: cmp dword ptr [0x5de8fc], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xfc
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 10: je 0x52f1c5
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 B2 26 FC FF: call 0x4f1872
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x26
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes E9 54 06 00 00: jmp 0x52f819
        __asm _emit 0xe9
        __asm _emit 0x54
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0f0h]
        push eax
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 D1 45 FD FF: call 0x5037a5
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x45
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 6E 6B 00 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x6b
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 66 6B 00 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x6b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 08 FC FB FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xfc
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        lea ecx, [ebp - 2ch]
        push ecx
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 A7 CE 00 00: call 0x53c0af
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        neg edx
        push edx
        mov eax, dword ptr [ebp - 2ch]
        neg eax
        push eax
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 FE 6E 00 00: call 0x53611a
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x6e
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 4ch]
        ; Exact mapped bytes E8 6E 78 00 00: call 0x536a92
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        push 6
        ; Exact mapped bytes FF 15 80 25 5E 00: call dword ptr [0x5e2580]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 4ch]
        ; Exact mapped bytes E8 94 78 00 00: call 0x536acd
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 51 78 00 00: call 0x536a92
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 0f0h]
        mov edx, dword ptr [ecx + 0c4h]
        neg edx
        sbb edx, edx
        add edx, 0bh
        push edx
        ; Exact mapped bytes FF 15 80 25 5E 00: call dword ptr [0x5e2580]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 65 78 00 00: call 0x536acd
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 44h]
        ; Exact mapped bytes E8 22 78 00 00: call 0x536a92
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 3
        mov eax, dword ptr [ebp - 0f0h]
        mov ecx, dword ptr [eax + 0c4h]
        neg ecx
        sbb ecx, ecx
        add ecx, 3
        push ecx
        ; Exact mapped bytes FF 15 80 25 5E 00: call dword ptr [0x5e2580]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 44h]
        ; Exact mapped bytes E8 36 78 00 00: call 0x536acd
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        push 6
        ; Exact mapped bytes FF 15 B8 28 5E 00: call dword ptr [0x5e28b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        push 5
        ; Exact mapped bytes FF 15 B8 28 5E 00: call dword ptr [0x5e28b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 8F 63 00 00: call 0x535640
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        push 21h
        ; Exact mapped bytes FF 15 B8 28 5E 00: call dword ptr [0x5e28b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        push 20h
        ; Exact mapped bytes FF 15 B8 28 5E 00: call dword ptr [0x5e28b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 68h]
        ; Exact mapped bytes E8 75 63 00 00: call 0x535640
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 6ch]
        and edx, 40600h
        test edx, edx
        ; Exact mapped bytes 0F 84 A8 01 00 00: je 0x52f484
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 4ch]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        mov edx, dword ptr [ebp - 3ch]
        push edx
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 7A 6C 00 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea eax, [ebp - 60h]
        push eax
        ; Exact mapped bytes E8 C3 FD FF FF: call 0x52f0bd
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 38h]
        neg ecx
        push ecx
        mov edx, dword ptr [ebp - 3ch]
        neg edx
        push edx
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 88 6D 00 00: call 0x536096
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x6d
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        sub ecx, dword ptr [ebp - 38h]
        push ecx
        mov edx, dword ptr [ebp - 68h]
        sub edx, dword ptr [ebp - 3ch]
        push edx
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 42 6C 00 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea eax, [ebp - 60h]
        push eax
        ; Exact mapped bytes E8 8B FD FF FF: call 0x52f0bd
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 38h]
        shl ecx, 1
        mov edx, dword ptr [ebp - 64h]
        sub edx, ecx
        push edx
        mov eax, dword ptr [ebp - 3ch]
        shl eax, 1
        mov ecx, dword ptr [ebp - 68h]
        sub ecx, eax
        push ecx
        lea ecx, [ebp - 74h]
        ; Exact mapped bytes E8 F0 62 00 00: call 0x535640
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 6ch]
        and edx, 200h
        test edx, edx
        ; Exact mapped bytes 0F 85 0F 01 00 00: jne 0x52f470
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 64h]
        ; Exact mapped bytes 03 05 3C EC 5D 00: add eax, dword ptr [0x5dec3c]
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        shl ecx, 1
        sub eax, ecx
        push eax
        mov edx, dword ptr [ebp - 68h]
        ; Exact mapped bytes 03 15 38 EC 5D 00: add edx, dword ptr [0x5dec38]
        __asm _emit 0x03
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 3ch]
        imul eax, eax, 3
        sub edx, eax
        push edx
        lea ecx, [ebp - 7ch]
        ; Exact mapped bytes E8 B4 62 00 00: call 0x535640
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 1
        mov ecx, dword ptr [ebp - 74h]
        push ecx
        mov edx, dword ptr [ebp - 28h]
        add edx, dword ptr [ebp - 78h]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 C6 37 FF FF: call 0x522b6d
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x37
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 1
        mov ecx, dword ptr [ebp - 74h]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        sub edx, dword ptr [ebp - 78h]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 AB 37 FF FF: call 0x522b6d
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x37
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 1
        mov ecx, dword ptr [ebp - 74h]
        push ecx
        mov edx, dword ptr [ebp - 28h]
        add edx, dword ptr [ebp - 78h]
        push edx
        mov eax, dword ptr [ebp - 24h]
        sub eax, dword ptr [ebp - 74h]
        push eax
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 8D 37 FF FF: call 0x522b6d
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x37
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 1
        mov ecx, dword ptr [ebp - 74h]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        sub edx, dword ptr [ebp - 78h]
        push edx
        mov eax, dword ptr [ebp - 24h]
        sub eax, dword ptr [ebp - 74h]
        push eax
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 6F 37 FF FF: call 0x522b6d
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x37
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 70h]
        push ecx
        push 1
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        add eax, dword ptr [ebp - 7ch]
        push eax
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 54 37 FF FF: call 0x522b6d
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x37
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 70h]
        push ecx
        push 1
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov eax, dword ptr [ebp - 24h]
        sub eax, dword ptr [ebp - 7ch]
        push eax
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 39 37 FF FF: call 0x522b6d
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x37
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 70h]
        push ecx
        push 1
        mov edx, dword ptr [ebp - 20h]
        sub edx, dword ptr [ebp - 70h]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        add eax, dword ptr [ebp - 7ch]
        push eax
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 1B 37 FF FF: call 0x522b6d
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x37
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 70h]
        push ecx
        push 1
        mov edx, dword ptr [ebp - 20h]
        sub edx, dword ptr [ebp - 70h]
        push edx
        mov eax, dword ptr [ebp - 24h]
        sub eax, dword ptr [ebp - 7ch]
        push eax
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 FD 36 FF FF: call 0x522b6d
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x36
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 70h]
        neg ecx
        push ecx
        mov edx, dword ptr [ebp - 74h]
        neg edx
        push edx
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 12 6C 00 00: call 0x536096
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 6ch]
        and eax, 0c00000h
        test eax, eax
        ; Exact mapped bytes 0F 84 34 03 00 00: je 0x52f7c8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x34
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 03 15 3C EC 5D 00: add edx, dword ptr [0x5dec3c]
        __asm _emit 0x03
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        add edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 10h], edx
        lea eax, [ebp - 4ch]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        mov edx, dword ptr [ebp - 3ch]
        push edx
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 9B 6A 00 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x6a
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea eax, [ebp - 60h]
        push eax
        ; Exact mapped bytes E8 E4 FB FF FF: call 0x52f0bd
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 38h]
        neg ecx
        push ecx
        mov edx, dword ptr [ebp - 3ch]
        neg edx
        push edx
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 A9 6B 00 00: call 0x536096
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x6b
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 44h]
        push eax
        lea ecx, [ebp - 1ch]
        push ecx
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 18 94 00 00: call 0x538915
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 4ch]
        push edx
        mov eax, dword ptr [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 59 6A 00 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x6a
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea edx, [ebp - 60h]
        push edx
        ; Exact mapped bytes E8 A2 FB FF FF: call 0x52f0bd
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 3D 40 EC 5D 00 00: cmp dword ptr [0x5dec40], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x40
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 B9 01 00 00: je 0x52f6e1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 40 EC 5D 00: mov eax, dword ptr [0x5dec40]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 8E 87 00 00: call 0x537cc4
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0bch], eax
        lea ecx, [ebp - 0d0h]
        ; Exact mapped bytes E8 C0 19 00 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 4
        lea ecx, [ebp - 0d0h]
        push ecx
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 94 3B FC FF: call 0x4f30f1
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x3b
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 6ch]
        and edx, 80000h
        neg edx
        sbb edx, edx
        ; Exact mapped bytes 23 15 38 EC 5D 00: and edx, dword ptr [0x5dec38]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        add eax, edx
        mov dword ptr [ebp - 0b8h], eax
        lea ecx, [ebp - 0d0h]
        ; Exact mapped bytes E8 DA 19 00 00: call 0x530f60
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 0d0h]
        ; Exact mapped bytes E8 18 1A 00 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 0ech]
        push ecx
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 F0 A3 00 00: call 0x539992
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 0cch], edx
        mov dword ptr [ebp - 0c8h], eax
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 7F 68 00 00: call 0x535e3a
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0cch], eax
        ; Exact mapped bytes 7F 26: jg 0x52f5e9
        __asm _emit 0x7f
        __asm _emit 0x26
        push 6
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 43 30 FD FF: call 0x502610
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x30
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        sub eax, dword ptr [ebp - 0b8h]
        cdq
        sub eax, edx
        sar eax, 1
        mov ecx, dword ptr [ebp - 0b8h]
        add ecx, eax
        mov dword ptr [ebp - 0b8h], ecx
        lea edx, [ebp - 0b4h]
        push edx
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 A2 A8 00 00: call 0x539e9a
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x52f610
        __asm _emit 0x75
        __asm _emit 0x14
        push 24eh
        push 5ccab0h
        ; Exact mapped bytes E8 F5 53 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x53
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52f610
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D3: jne 0x52f5e9
        __asm _emit 0x75
        __asm _emit 0xd3
        mov ecx, dword ptr [ebp - 0b0h]
        add ecx, dword ptr [ebp - 0ach]
        add ecx, dword ptr [ebp - 0a8h]
        mov dword ptr [ebp - 0c0h], ecx
        push 1
        push 0
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 5C 6A 00 00: call 0x536096
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x6a
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 0E 68 00 00: call 0x535e50
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 0c0h]
        add eax, 1
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 0c4h], eax
        mov edx, dword ptr [ebp - 0f0h]
        mov eax, dword ptr [edx + 0c4h]
        neg eax
        sbb eax, eax
        and al, 0f6h
        add eax, 13h
        push eax
        ; Exact mapped bytes FF 15 80 25 5E 00: call dword ptr [0x5e2580]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 00 22 FD FF: call 0x50187b
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x22
        __asm _emit 0xfd
        __asm _emit 0xff
        push 1
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 F2 1F FD FF: call 0x501677
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x1f
        __asm _emit 0xfd
        __asm _emit 0xff
        push 0
        lea ecx, [ebp - 0d0h]
        ; Exact mapped bytes E8 CE 18 00 00: call 0x530f60
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 0d0h]
        ; Exact mapped bytes E8 0C 19 00 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 C3 68 00 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 4
        mov ecx, dword ptr [ebp - 18h]
        add ecx, dword ptr [ebp - 0c4h]
        push ecx
        mov edx, dword ptr [ebp - 0b8h]
        push edx
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 23 A0 00 00: call 0x5396e6
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0bch]
        push eax
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 F2 85 00 00: call 0x537cc4
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 0d0h]
        ; Exact mapped bytes E8 6B E1 FB FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xe1
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 6ch]
        and ecx, 80000h
        test ecx, ecx
        ; Exact mapped bytes 0F 84 CE 00 00 00: je 0x52f7c0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 0e0h]
        ; Exact mapped bytes E8 72 15 FD FF: call 0x500c6f
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x15
        __asm _emit 0xfd
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 5
        lea edx, [ebp - 60h]
        push edx
        lea ecx, [ebp - 0e0h]
        ; Exact mapped bytes E8 9D 82 00 00: call 0x5379ad
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 47: jne 0x52f75b
        __asm _emit 0x75
        __asm _emit 0x47
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 0e0h]
        ; Exact mapped bytes E8 74 18 FD FF: call 0x500f97
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x18
        __asm _emit 0xfd
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 44h]
        ; Exact mapped bytes E8 82 73 00 00: call 0x536ab1
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x73
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 76 73 00 00: call 0x536ab1
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x73
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 4ch]
        ; Exact mapped bytes E8 6A 73 00 00: call 0x536ab1
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x73
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 01 41 FD FF: call 0x503857
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x41
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes E9 BE 00 00 00: jmp 0x52f819
        __asm _emit 0xe9
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 44 EC 5D 00: mov eax, dword ptr [0x5dec44]
        __asm _emit 0xa1
        __asm _emit 0x44
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 0e0h]
        ; Exact mapped bytes E8 58 85 00 00: call 0x537cc4
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0e4h], eax
        push 0cc0020h
        push 0
        push 0
        lea ecx, [ebp - 0e0h]
        push ecx
        ; Exact mapped bytes 8B 15 3C EC 5D 00: mov edx, dword ptr [0x5dec3c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes A1 38 EC 5D 00: mov eax, dword ptr [0x5dec38]
        __asm _emit 0xa1
        __asm _emit 0x38
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 EB 9B 00 00: call 0x53938a
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0e4h]
        push eax
        lea ecx, [ebp - 0e0h]
        ; Exact mapped bytes E8 13 85 00 00: call 0x537cc4
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 0e0h]
        ; Exact mapped bytes E8 D7 17 FD FF: call 0x500f97
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x17
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 28h], ecx
        ; Exact mapped bytes EB 1E: jmp 0x52f7e6
        __asm _emit 0xeb
        __asm _emit 0x1e
        lea edx, [ebp - 4ch]
        push edx
        mov eax, dword ptr [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 8E 67 00 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea edx, [ebp - 60h]
        push edx
        ; Exact mapped bytes E8 D7 F8 FF FF: call 0x52f0bd
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 44h]
        ; Exact mapped bytes E8 BF 72 00 00: call 0x536ab1
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x72
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 B3 72 00 00: call 0x536ab1
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x72
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 4ch]
        ; Exact mapped bytes E8 A7 72 00 00: call 0x536ab1
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x72
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 3E 40 FD FF: call 0x503857
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x40
        __asm _emit 0xfd
        __asm _emit 0xff
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
        ret
    }
}
