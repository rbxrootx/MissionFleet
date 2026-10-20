// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051E395 .. +0x696 bytes.
extern "C" __declspec(naked) void FUN_0051e395_0051E395() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58ee16h
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
        sub esp, 0dch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0e8h], ecx
        ; Exact mapped bytes 83 3D 14 6E 68 00 00: cmp dword ptr [0x686e14], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x14
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 10: je 0x51e3d5
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 D2 13 FB FF: call 0x4cf7a2
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x13
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes E9 45 06 00 00: jmp 0x51ea1a
        __asm _emit 0xe9
        __asm _emit 0x45
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0e8h]
        push eax
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 75 A3 FC FF: call 0x4e8759
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xa3
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 D4 3D 01 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 CC 3D 01 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 88 7E FB FF: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x7e
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        lea ecx, [ebp - 2ch]
        push ecx
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 F7 D6 00 00: call 0x52bb0f
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        neg edx
        push edx
        mov eax, dword ptr [ebp - 2ch]
        neg eax
        push eax
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 46 41 01 00: call 0x532572
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 4ch]
        ; Exact mapped bytes E8 B6 4A 01 00: call 0x532eea
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        push 6
        ; Exact mapped bytes FF 15 84 BE 68 00: call dword ptr [0x68be84]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 4ch]
        ; Exact mapped bytes E8 DC 4A 01 00: call 0x532f25
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 99 4A 01 00: call 0x532eea
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 0e8h]
        mov edx, dword ptr [ecx + 0c4h]
        neg edx
        sbb edx, edx
        add edx, 0bh
        push edx
        ; Exact mapped bytes FF 15 84 BE 68 00: call dword ptr [0x68be84]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 AD 4A 01 00: call 0x532f25
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 44h]
        ; Exact mapped bytes E8 6A 4A 01 00: call 0x532eea
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 3
        mov eax, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [eax + 0c4h]
        neg ecx
        sbb ecx, ecx
        add ecx, 3
        push ecx
        ; Exact mapped bytes FF 15 84 BE 68 00: call dword ptr [0x68be84]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 44h]
        ; Exact mapped bytes E8 7E 4A 01 00: call 0x532f25
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        push 6
        ; Exact mapped bytes FF 15 C4 BF 68 00: call dword ptr [0x68bfc4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        push 5
        ; Exact mapped bytes FF 15 C4 BF 68 00: call dword ptr [0x68bfc4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 EF 36 01 00: call 0x531bb0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        push 21h
        ; Exact mapped bytes FF 15 C4 BF 68 00: call dword ptr [0x68bfc4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        push 20h
        ; Exact mapped bytes FF 15 C4 BF 68 00: call dword ptr [0x68bfc4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 68h]
        ; Exact mapped bytes E8 D5 36 01 00: call 0x531bb0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 6ch]
        and edx, 40600h
        test edx, edx
        ; Exact mapped bytes 0F 84 A8 01 00 00: je 0x51e694
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
        ; Exact mapped bytes E8 C2 3E 01 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        lea eax, [ebp - 60h]
        push eax
        ; Exact mapped bytes E8 C3 FD FF FF: call 0x51e2cd
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
        ; Exact mapped bytes E8 D0 3F 01 00: call 0x5324ee
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x3f
        __asm _emit 0x01
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
        ; Exact mapped bytes E8 8A 3E 01 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        lea eax, [ebp - 60h]
        push eax
        ; Exact mapped bytes E8 8B FD FF FF: call 0x51e2cd
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
        ; Exact mapped bytes E8 50 36 01 00: call 0x531bb0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 6ch]
        and edx, 200h
        test edx, edx
        ; Exact mapped bytes 0F 85 0F 01 00 00: jne 0x51e680
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 64h]
        ; Exact mapped bytes 03 05 5C 71 68 00: add eax, dword ptr [0x68715c]
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0x5c
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        shl ecx, 1
        sub eax, ecx
        push eax
        mov edx, dword ptr [ebp - 68h]
        ; Exact mapped bytes 03 15 58 71 68 00: add edx, dword ptr [0x687158]
        __asm _emit 0x03
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 3ch]
        imul eax, eax, 3
        sub edx, eax
        push edx
        lea ecx, [ebp - 7ch]
        ; Exact mapped bytes E8 14 36 01 00: call 0x531bb0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x36
        __asm _emit 0x01
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
        ; Exact mapped bytes E8 A6 EA FF FF: call 0x51d05d
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xea
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
        ; Exact mapped bytes E8 8B EA FF FF: call 0x51d05d
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xea
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
        ; Exact mapped bytes E8 6D EA FF FF: call 0x51d05d
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xea
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
        ; Exact mapped bytes E8 4F EA FF FF: call 0x51d05d
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xea
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
        ; Exact mapped bytes E8 34 EA FF FF: call 0x51d05d
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xea
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
        ; Exact mapped bytes E8 19 EA FF FF: call 0x51d05d
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xea
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
        ; Exact mapped bytes E8 FB E9 FF FF: call 0x51d05d
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xe9
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
        ; Exact mapped bytes E8 DD E9 FF FF: call 0x51d05d
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 70h]
        neg ecx
        push ecx
        mov edx, dword ptr [ebp - 74h]
        neg edx
        push edx
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 5A 3E 01 00: call 0x5324ee
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 6ch]
        and eax, 0c00000h
        test eax, eax
        ; Exact mapped bytes 0F 84 25 03 00 00: je 0x51e9c9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x25
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
        ; Exact mapped bytes 03 15 5C 71 68 00: add edx, dword ptr [0x68715c]
        __asm _emit 0x03
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x71
        __asm _emit 0x68
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
        ; Exact mapped bytes E8 E3 3C 01 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        lea eax, [ebp - 60h]
        push eax
        ; Exact mapped bytes E8 E4 FB FF FF: call 0x51e2cd
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
        ; Exact mapped bytes E8 F1 3D 01 00: call 0x5324ee
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        lea eax, [ebp - 44h]
        push eax
        lea ecx, [ebp - 1ch]
        push ecx
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 15 66 01 00: call 0x534d22
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x00
        lea edx, [ebp - 4ch]
        push edx
        mov eax, dword ptr [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 A1 3C 01 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        lea edx, [ebp - 60h]
        push edx
        ; Exact mapped bytes E8 A2 FB FF FF: call 0x51e2cd
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 3D 60 71 68 00 00: cmp dword ptr [0x687160], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x60
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 A9 01 00 00: je 0x51e8e1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 60 71 68 00: mov eax, dword ptr [0x687160]
        __asm _emit 0xa1
        __asm _emit 0x60
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 D6 59 01 00: call 0x53411c
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 0bch], eax
        lea ecx, [ebp - 0d0h]
        ; Exact mapped bytes E8 B0 65 00 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 4
        lea ecx, [ebp - 0d0h]
        push ecx
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 B4 28 FB FF: call 0x4d1021
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x28
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 6ch]
        and edx, 80000h
        neg edx
        sbb edx, edx
        ; Exact mapped bytes 23 15 58 71 68 00: and edx, dword ptr [0x687158]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        add eax, edx
        mov dword ptr [ebp - 0b8h], eax
        lea ecx, [ebp - 0d0h]
        ; Exact mapped bytes E8 CA 65 00 00: call 0x524d60
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 0d0h]
        ; Exact mapped bytes E8 08 66 00 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 0cch]
        push ecx
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 ED 75 01 00: call 0x535d9f
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x75
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 F6 3A 01 00: call 0x5322b0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x3a
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp - 0cch], eax
        ; Exact mapped bytes 7F 26: jg 0x51e7e8
        __asm _emit 0x7f
        __asm _emit 0x26
        push 6
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 24 8E FC FF: call 0x4e75f0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x8e
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        sub eax, dword ptr [ebp - 0b8h]
        cdq
        sub eax, edx
        sar eax, 1
        mov edx, dword ptr [ebp - 0b8h]
        add edx, eax
        mov dword ptr [ebp - 0b8h], edx
        lea eax, [ebp - 0b4h]
        push eax
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 B0 7A 01 00: call 0x5362a7
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x51e80f
        __asm _emit 0x75
        __asm _emit 0x14
        push 24eh
        push 679288h
        ; Exact mapped bytes E8 36 A5 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51e80f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D3: jne 0x51e7e8
        __asm _emit 0x75
        __asm _emit 0xd3
        mov edx, dword ptr [ebp - 0b0h]
        add edx, dword ptr [ebp - 0ach]
        add edx, dword ptr [ebp - 0a8h]
        mov dword ptr [ebp - 0c0h], edx
        push 1
        push 0
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 B5 3C 01 00: call 0x5324ee
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 85 3A 01 00: call 0x5322c6
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x3a
        __asm _emit 0x01
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 0c0h]
        add eax, 1
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 0c4h], eax
        mov eax, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [eax + 0c4h]
        neg ecx
        sbb ecx, ecx
        and ecx, 0fffffff6h
        add ecx, 13h
        push ecx
        ; Exact mapped bytes FF 15 84 BE 68 00: call dword ptr [0x68be84]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 E0 7F FC FF: call 0x4e685b
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x7f
        __asm _emit 0xfc
        __asm _emit 0xff
        push 1
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 D2 7D FC FF: call 0x4e6657
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x7d
        __asm _emit 0xfc
        __asm _emit 0xff
        push 0
        lea ecx, [ebp - 0d0h]
        ; Exact mapped bytes E8 CE 64 00 00: call 0x524d60
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 0d0h]
        ; Exact mapped bytes E8 0C 65 00 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 1B 3B 01 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x3b
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        push 4
        mov edx, dword ptr [ebp - 18h]
        add edx, dword ptr [ebp - 0c4h]
        push edx
        mov eax, dword ptr [ebp - 0b8h]
        push eax
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 30 72 01 00: call 0x535af3
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0bch]
        push ecx
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 4A 58 01 00: call 0x53411c
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 0d0h]
        ; Exact mapped bytes E8 0B E0 FA FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xe0
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 6ch]
        and edx, 80000h
        test edx, edx
        ; Exact mapped bytes 0F 84 CF 00 00 00: je 0x51e9c1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 0e0h]
        ; Exact mapped bytes E8 52 73 FC FF: call 0x4e5c4f
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x73
        __asm _emit 0xfc
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 5
        lea eax, [ebp - 60h]
        push eax
        lea ecx, [ebp - 0e0h]
        ; Exact mapped bytes E8 F5 54 01 00: call 0x533e05
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 47: jne 0x51e95b
        __asm _emit 0x75
        __asm _emit 0x47
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 0e0h]
        ; Exact mapped bytes E8 54 76 FC FF: call 0x4e5f77
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x76
        __asm _emit 0xfc
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 44h]
        ; Exact mapped bytes E8 DA 45 01 00: call 0x532f09
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 CE 45 01 00: call 0x532f09
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 4ch]
        ; Exact mapped bytes E8 C2 45 01 00: call 0x532f09
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 B5 9E FC FF: call 0x4e880b
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x9e
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes E9 BF 00 00 00: jmp 0x51ea1a
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 64 71 68 00: mov ecx, dword ptr [0x687164]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        lea ecx, [ebp - 0e0h]
        ; Exact mapped bytes E8 AF 57 01 00: call 0x53411c
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 0e4h], eax
        push 0cc0020h
        push 0
        push 0
        lea edx, [ebp - 0e0h]
        push edx
        ; Exact mapped bytes A1 5C 71 68 00: mov eax, dword ptr [0x68715c]
        __asm _emit 0xa1
        __asm _emit 0x5c
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 8B 0D 58 71 68 00: mov ecx, dword ptr [0x687158]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 F7 6D 01 00: call 0x535797
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x6d
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0e4h]
        push ecx
        lea ecx, [ebp - 0e0h]
        ; Exact mapped bytes E8 6A 57 01 00: call 0x53411c
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 0e0h]
        ; Exact mapped bytes E8 B6 75 FC FF: call 0x4e5f77
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x75
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 28h], edx
        ; Exact mapped bytes EB 1E: jmp 0x51e9e7
        __asm _emit 0xeb
        __asm _emit 0x1e
        lea eax, [ebp - 4ch]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        mov edx, dword ptr [ebp - 3ch]
        push edx
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 E5 39 01 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        lea eax, [ebp - 60h]
        push eax
        ; Exact mapped bytes E8 E6 F8 FF FF: call 0x51e2cd
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 44h]
        ; Exact mapped bytes E8 16 45 01 00: call 0x532f09
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 0A 45 01 00: call 0x532f09
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 4ch]
        ; Exact mapped bytes E8 FE 44 01 00: call 0x532f09
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 F1 9D FC FF: call 0x4e880b
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x9d
        __asm _emit 0xfc
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
