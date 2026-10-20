// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5855CAD0 .. +0x26DE bytes.
extern "C" __declspec(naked) void FUN_5855cad0_5855CAD0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888353ch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 7dch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push esi
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 5f4h], ecx
        mov eax, dword ptr [ebp - 5f4h]
        mov dword ptr [eax], 588a9494h
        mov ecx, dword ptr [ebp - 5f4h]
        add ecx, 14ch
        ; Exact mapped bytes E8 B1 A9 F2 FF: call 0x584874d0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xa9
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 5f4h]
        add ecx, 158h
        ; Exact mapped bytes E8 99 A9 F2 FF: call 0x584874d0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xa9
        __asm _emit 0xf2
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 B5 0D 00 00: je 0x5855d8fa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb5
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], -1
        ; Exact mapped bytes 0F 85 AB 0D 00 00: jne 0x5855d8fa
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xab
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0f4240h
        ; Exact mapped bytes 0F 84 9E 0D 00 00: je 0x5855d8fa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0f4241h
        ; Exact mapped bytes 0F 84 91 0D 00 00: je 0x5855d8fa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 5f4h]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp - 5f4h]
        mov dword ptr [eax + 168h], 1
        mov ecx, dword ptr [ebp - 5f4h]
        mov dword ptr [ecx + 3e4h], 0
        mov edx, dword ptr [ebp - 5f4h]
        mov dword ptr [edx + 3e8h], 0
        mov eax, dword ptr [ebp - 5f4h]
        mov dword ptr [eax + 3ech], 0
        push 40h
        push 0
        mov ecx, dword ptr [ebp - 5f4h]
        add ecx, 3f0h
        push ecx
        ; Exact mapped bytes E8 45 02 2F 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x02
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 69ch], 0
        mov dword ptr [ebp - 5fch], 0
        mov edx, dword ptr [ebp + 8]
        push edx
        push 588a9404h
        lea eax, [ebp - 150h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        push 0
        push 0
        lea ecx, [ebp - 6e8h]
        push ecx
        lea edx, [ebp - 150h]
        push edx
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 98 99 F6 FF: call 0x584c65b0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x99
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 60ch], eax
        mov eax, dword ptr [ebp - 60ch]
        mov dword ptr [ebp - 768h], eax
        cmp dword ptr [ebp - 768h], 0
        ; Exact mapped bytes 75 15: jne 0x5855cc48
        __asm _emit 0x75
        __asm _emit 0x15
        push 3
        lea ecx, [ebp - 150h]
        push ecx
        ; Exact mapped bytes 8B 0D A4 20 96 58: mov ecx, dword ptr [0x589620a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 09 4B F9 FF: call 0x584f1750
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x4b
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        push 28h
        mov edx, dword ptr [ebp - 60ch]
        push edx
        lea eax, [ebp - 394h]
        push eax
        ; Exact mapped bytes E8 33 FC 2E 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xfc
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        cmp dword ptr [ebp - 394h], 1
        ; Exact mapped bytes 75 3E: jne 0x5855cca7
        __asm _emit 0x75
        __asm _emit 0x3e
        cmp dword ptr [ebp - 390h], 2
        ; Exact mapped bytes 75 35: jne 0x5855cca7
        __asm _emit 0x75
        __asm _emit 0x35
        push 11ch
        mov ecx, dword ptr [ebp - 60ch]
        add ecx, dword ptr [ebp - 5fch]
        push ecx
        mov edx, dword ptr [ebp - 5f4h]
        add edx, 30h
        push edx
        ; Exact mapped bytes E8 FD FB 2E 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xfb
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 5fch]
        add eax, 11ch
        mov dword ptr [ebp - 5fch], eax
        cmp dword ptr [ebp - 394h], 1
        ; Exact mapped bytes 0F 85 6E 03 00 00: jne 0x5855d022
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 390h], 1
        ; Exact mapped bytes 0F 85 61 03 00 00: jne 0x5855d022
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x61
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 5fch]
        add ecx, 28h
        mov dword ptr [ebp - 5fch], ecx
        push 11ch
        mov edx, dword ptr [ebp - 60ch]
        add edx, dword ptr [ebp - 5fch]
        push edx
        lea eax, [ebp - 36ch]
        push eax
        ; Exact mapped bytes E8 A2 FB 2E 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xfb
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 5fch]
        add ecx, 11ch
        mov dword ptr [ebp - 5fch], ecx
        lea edx, [ebp - 36ch]
        push edx
        mov eax, dword ptr [ebp - 5f4h]
        add eax, 30h
        push eax
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 5f4h]
        mov edx, dword ptr [ebp - 34ch]
        mov dword ptr [ecx + 50h], edx
        mov eax, dword ptr [ebp - 5f4h]
        mov ecx, dword ptr [ebp - 348h]
        mov dword ptr [eax + 54h], ecx
        mov edx, dword ptr [ebp - 5f4h]
        mov eax, dword ptr [ebp - 344h]
        mov dword ptr [edx + 58h], eax
        mov ecx, dword ptr [ebp - 5f4h]
        mov edx, dword ptr [ebp - 340h]
        mov dword ptr [ecx + 5ch], edx
        mov eax, dword ptr [ebp - 5f4h]
        mov ecx, dword ptr [ebp - 33ch]
        mov dword ptr [eax + 60h], ecx
        mov edx, dword ptr [ebp - 5f4h]
        mov eax, dword ptr [ebp - 338h]
        mov dword ptr [edx + 64h], eax
        mov ecx, dword ptr [ebp - 5f4h]
        mov edx, dword ptr [ebp - 334h]
        mov dword ptr [ecx + 68h], edx
        mov eax, dword ptr [ebp - 5f4h]
        mov ecx, dword ptr [ebp - 330h]
        mov dword ptr [eax + 6ch], ecx
        mov dword ptr [ebp - 650h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5855cdad
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 650h]
        add edx, 1
        mov dword ptr [ebp - 650h], edx
        cmp dword ptr [ebp - 650h], 8
        ; Exact mapped bytes 7D 1F: jge 0x5855cdd5
        __asm _emit 0x7d
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 650h]
        mov ecx, dword ptr [ebp - 5f4h]
        mov edx, dword ptr [ebp - 650h]
        mov edx, dword ptr [ebp + edx*4 - 32ch]
        mov dword ptr [ecx + eax*4 + 70h], edx
        ; Exact mapped bytes EB C9: jmp 0x5855cd9e
        __asm _emit 0xeb
        __asm _emit 0xc9
        lea eax, [ebp - 30ch]
        push eax
        mov ecx, dword ptr [ebp - 5f4h]
        add ecx, 90h
        push ecx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 5f4h]
        mov eax, dword ptr [ebp - 2cch]
        mov dword ptr [edx + 0d0h], eax
        mov ecx, dword ptr [ebp - 5f4h]
        mov edx, dword ptr [ebp - 2c8h]
        mov dword ptr [ecx + 0d4h], edx
        mov eax, dword ptr [ebp - 5f4h]
        mov ecx, dword ptr [ebp - 2c4h]
        mov dword ptr [eax + 0d8h], ecx
        mov edx, dword ptr [ebp - 5f4h]
        mov eax, dword ptr [ebp - 2c0h]
        mov dword ptr [edx + 0dch], eax
        mov ecx, dword ptr [ebp - 5f4h]
        mov edx, dword ptr [ebp - 2bch]
        mov dword ptr [ecx + 0e0h], edx
        mov eax, dword ptr [ebp - 5f4h]
        mov ecx, dword ptr [ebp - 2b8h]
        mov dword ptr [eax + 0e4h], ecx
        mov edx, dword ptr [ebp - 5f4h]
        mov eax, dword ptr [ebp - 2b4h]
        mov dword ptr [edx + 0e8h], eax
        mov ecx, dword ptr [ebp - 5f4h]
        mov edx, dword ptr [ebp - 2b0h]
        mov dword ptr [ecx + 0ech], edx
        mov eax, dword ptr [ebp - 5f4h]
        mov ecx, dword ptr [ebp - 2ach]
        mov dword ptr [eax + 0f0h], ecx
        mov edx, dword ptr [ebp - 5f4h]
        mov eax, dword ptr [ebp - 2a8h]
        mov dword ptr [edx + 0f4h], eax
        mov ecx, dword ptr [ebp - 5f4h]
        mov edx, dword ptr [ebp - 2a4h]
        mov dword ptr [ecx + 0f8h], edx
        mov eax, dword ptr [ebp - 5f4h]
        mov ecx, dword ptr [ebp - 2a0h]
        mov dword ptr [eax + 0fch], ecx
        mov edx, dword ptr [ebp - 5f4h]
        mov eax, dword ptr [ebp - 29ch]
        mov dword ptr [edx + 100h], eax
        mov ecx, dword ptr [ebp - 5f4h]
        mov edx, dword ptr [ebp - 298h]
        mov dword ptr [ecx + 104h], edx
        mov eax, dword ptr [ebp - 5f4h]
        mov ecx, dword ptr [ebp - 294h]
        mov dword ptr [eax + 108h], ecx
        mov edx, dword ptr [ebp - 5f4h]
        mov eax, dword ptr [ebp - 290h]
        mov dword ptr [edx + 10ch], eax
        mov ecx, dword ptr [ebp - 5f4h]
        mov edx, dword ptr [ebp - 28ch]
        mov dword ptr [ecx + 110h], edx
        mov eax, dword ptr [ebp - 5f4h]
        mov ecx, dword ptr [ebp - 288h]
        mov dword ptr [eax + 114h], ecx
        mov edx, dword ptr [ebp - 5f4h]
        mov eax, dword ptr [ebp - 284h]
        mov dword ptr [edx + 118h], eax
        mov ecx, dword ptr [ebp - 5f4h]
        mov edx, dword ptr [ebp - 280h]
        mov dword ptr [ecx + 11ch], edx
        mov eax, dword ptr [ebp - 5f4h]
        mov ecx, dword ptr [ebp - 27ch]
        mov dword ptr [eax + 120h], ecx
        mov edx, dword ptr [ebp - 5f4h]
        mov eax, dword ptr [ebp - 278h]
        mov dword ptr [edx + 124h], eax
        mov ecx, dword ptr [ebp - 5f4h]
        mov edx, dword ptr [ebp - 274h]
        mov dword ptr [ecx + 128h], edx
        mov eax, dword ptr [ebp - 5f4h]
        mov ecx, dword ptr [ebp - 270h]
        mov dword ptr [eax + 12ch], ecx
        mov edx, dword ptr [ebp - 5f4h]
        mov eax, dword ptr [ebp - 26ch]
        mov dword ptr [edx + 130h], eax
        mov ecx, dword ptr [ebp - 5f4h]
        mov edx, dword ptr [ebp - 268h]
        mov dword ptr [ecx + 134h], edx
        mov eax, dword ptr [ebp - 5f4h]
        mov ecx, dword ptr [ebp - 264h]
        mov dword ptr [eax + 138h], ecx
        mov edx, dword ptr [ebp - 5f4h]
        mov eax, dword ptr [ebp - 260h]
        mov dword ptr [edx + 13ch], eax
        mov ecx, dword ptr [ebp - 5f4h]
        mov edx, dword ptr [ebp - 25ch]
        mov dword ptr [ecx + 140h], edx
        mov eax, dword ptr [ebp - 5f4h]
        mov ecx, dword ptr [ebp - 258h]
        mov dword ptr [eax + 144h], ecx
        mov edx, dword ptr [ebp - 5f4h]
        mov eax, dword ptr [ebp - 254h]
        mov dword ptr [edx + 148h], eax
        ; Exact mapped bytes E9 88 01 00 00: jmp 0x5855d1aa
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 5fch]
        add ecx, 28h
        mov dword ptr [ebp - 5fch], ecx
        push 0c4h
        mov edx, dword ptr [ebp - 60ch]
        add edx, dword ptr [ebp - 5fch]
        push edx
        lea eax, [ebp - 458h]
        push eax
        ; Exact mapped bytes E8 41 F8 2E 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xf8
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 5fch]
        add ecx, 0c4h
        mov dword ptr [ebp - 5fch], ecx
        lea edx, [ebp - 458h]
        push edx
        mov eax, dword ptr [ebp - 5f4h]
        add eax, 30h
        push eax
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 5f4h]
        mov edx, dword ptr [ebp - 438h]
        mov dword ptr [ecx + 50h], edx
        mov eax, dword ptr [ebp - 5f4h]
        mov ecx, dword ptr [ebp - 434h]
        mov dword ptr [eax + 54h], ecx
        mov edx, dword ptr [ebp - 5f4h]
        mov eax, dword ptr [ebp - 430h]
        mov dword ptr [edx + 58h], eax
        mov ecx, dword ptr [ebp - 5f4h]
        mov edx, dword ptr [ebp - 42ch]
        mov dword ptr [ecx + 5ch], edx
        mov eax, dword ptr [ebp - 5f4h]
        mov ecx, dword ptr [ebp - 428h]
        mov dword ptr [eax + 60h], ecx
        mov edx, dword ptr [ebp - 5f4h]
        mov eax, dword ptr [ebp - 424h]
        mov dword ptr [edx + 64h], eax
        mov ecx, dword ptr [ebp - 5f4h]
        mov edx, dword ptr [ebp - 420h]
        mov dword ptr [ecx + 68h], edx
        mov eax, dword ptr [ebp - 5f4h]
        mov ecx, dword ptr [ebp - 41ch]
        mov dword ptr [eax + 6ch], ecx
        mov dword ptr [ebp - 654h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5855d10e
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 654h]
        add edx, 1
        mov dword ptr [ebp - 654h], edx
        cmp dword ptr [ebp - 654h], 8
        ; Exact mapped bytes 7D 1F: jge 0x5855d136
        __asm _emit 0x7d
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 654h]
        mov ecx, dword ptr [ebp - 5f4h]
        mov edx, dword ptr [ebp - 654h]
        mov edx, dword ptr [ebp + edx*4 - 418h]
        mov dword ptr [ecx + eax*4 + 70h], edx
        ; Exact mapped bytes EB C9: jmp 0x5855d0ff
        __asm _emit 0xeb
        __asm _emit 0xc9
        lea eax, [ebp - 3f8h]
        push eax
        mov ecx, dword ptr [ebp - 5f4h]
        add ecx, 90h
        push ecx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 5f4h]
        mov eax, dword ptr [ebp - 3b8h]
        mov dword ptr [edx + 0d0h], eax
        mov ecx, dword ptr [ebp - 5f4h]
        mov edx, dword ptr [ebp - 3b4h]
        mov dword ptr [ecx + 0d4h], edx
        mov eax, dword ptr [ebp - 5f4h]
        mov ecx, dword ptr [ebp - 3b0h]
        mov dword ptr [eax + 0d8h], ecx
        mov edx, dword ptr [ebp - 5f4h]
        mov eax, dword ptr [ebp - 3ach]
        mov dword ptr [edx + 124h], eax
        mov ecx, dword ptr [ebp - 5f4h]
        mov edx, dword ptr [ebp - 3a8h]
        mov dword ptr [ecx + 128h], edx
        mov eax, dword ptr [ebp - 5f4h]
        cmp dword ptr [eax + 64h], 0
        ; Exact mapped bytes 0F 86 DD 00 00 00: jbe 0x5855d297
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 5f4h]
        add ecx, 14ch
        mov dword ptr [ebp - 7c8h], ecx
        mov edx, dword ptr [ebp - 5f4h]
        mov eax, dword ptr [edx + 64h]
        push eax
        mov ecx, dword ptr [ebp - 7c8h]
        ; Exact mapped bytes E8 FF CE F5 FF: call 0x584ba0e0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xce
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 688h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5855d1fd
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 688h]
        add ecx, 1
        mov dword ptr [ebp - 688h], ecx
        mov edx, dword ptr [ebp - 5f4h]
        mov eax, dword ptr [ebp - 688h]
        cmp eax, dword ptr [edx + 64h]
        ; Exact mapped bytes 0F 83 85 00 00 00: jae 0x5855d297
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1ch
        ; Exact mapped bytes E8 EB 3D 2D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x3d
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 7cch], eax
        mov ecx, dword ptr [ebp - 7cch]
        mov dword ptr [ebp - 68ch], ecx
        push 1ch
        push 0
        mov edx, dword ptr [ebp - 68ch]
        push edx
        ; Exact mapped bytes E8 D2 FB 2E 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xfb
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        push 1ch
        mov eax, dword ptr [ebp - 60ch]
        add eax, dword ptr [ebp - 5fch]
        push eax
        mov ecx, dword ptr [ebp - 68ch]
        push ecx
        ; Exact mapped bytes E8 34 F6 2E 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xf6
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 5fch]
        add edx, 1ch
        mov dword ptr [ebp - 5fch], edx
        mov eax, dword ptr [ebp - 5f4h]
        add eax, 14ch
        mov dword ptr [ebp - 7d0h], eax
        lea ecx, [ebp - 68ch]
        push ecx
        mov ecx, dword ptr [ebp - 7d0h]
        ; Exact mapped bytes E8 8F AF F2 FF: call 0x58488220
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xaf
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 57 FF FF FF: jmp 0x5855d1ee
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 5f4h]
        cmp dword ptr [edx + 68h], 0
        ; Exact mapped bytes 0F 86 29 05 00 00: jbe 0x5855d7d0
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x29
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 5f4h]
        add eax, 158h
        mov dword ptr [ebp - 7d4h], eax
        mov ecx, dword ptr [ebp - 5f4h]
        mov edx, dword ptr [ecx + 68h]
        push edx
        mov ecx, dword ptr [ebp - 7d4h]
        ; Exact mapped bytes E8 13 CE F5 FF: call 0x584ba0e0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xce
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 690h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5855d2e9
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 690h]
        add eax, 1
        mov dword ptr [ebp - 690h], eax
        mov ecx, dword ptr [ebp - 5f4h]
        mov edx, dword ptr [ebp - 690h]
        cmp edx, dword ptr [ecx + 68h]
        ; Exact mapped bytes 0F 83 D2 04 00 00: jae 0x5855d7d0
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xd2
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 8ch
        ; Exact mapped bytes E8 FC 3C 2D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x3c
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 7d8h], eax
        mov eax, dword ptr [ebp - 7d8h]
        mov dword ptr [ebp - 634h], eax
        push 88h
        push 0
        mov ecx, dword ptr [ebp - 634h]
        push ecx
        ; Exact mapped bytes E8 E0 FA 2E 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xfa
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        push 88h
        mov edx, dword ptr [ebp - 60ch]
        add edx, dword ptr [ebp - 5fch]
        push edx
        mov eax, dword ptr [ebp - 634h]
        push eax
        ; Exact mapped bytes E8 3F F5 2E 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xf5
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 5fch]
        add ecx, 88h
        mov dword ptr [ebp - 5fch], ecx
        mov edx, dword ptr [ebp - 634h]
        cmp dword ptr [edx + 74h], 0
        ; Exact mapped bytes 0F 86 30 04 00 00: jbe 0x5855d7a6
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ch
        ; Exact mapped bytes E8 87 3C 2D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x3c
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 6b0h], eax
        cmp dword ptr [ebp - 6b0h], 0
        ; Exact mapped bytes 74 13: je 0x5855d3a2
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 6b0h]
        ; Exact mapped bytes E8 36 A1 F2 FF: call 0x584874d0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xa1
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 6dch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5855d3ac
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 6dch], 0
        mov eax, dword ptr [ebp - 634h]
        mov ecx, dword ptr [ebp - 6dch]
        mov dword ptr [eax + 88h], ecx
        mov edx, dword ptr [ebp - 634h]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 7dch], eax
        mov ecx, dword ptr [ebp - 634h]
        mov edx, dword ptr [ecx + 74h]
        push edx
        mov ecx, dword ptr [ebp - 7dch]
        ; Exact mapped bytes E8 FB CC F5 FF: call 0x584ba0e0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xcc
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 694h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5855d401
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 694h]
        add eax, 1
        mov dword ptr [ebp - 694h], eax
        mov ecx, dword ptr [ebp - 634h]
        mov edx, dword ptr [ebp - 694h]
        cmp edx, dword ptr [ecx + 74h]
        ; Exact mapped bytes 0F 83 90 03 00 00: jae 0x5855d7a6
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x90
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 8ch
        ; Exact mapped bytes E8 E4 3B 2D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x3b
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 7e0h], eax
        mov eax, dword ptr [ebp - 7e0h]
        mov dword ptr [ebp - 638h], eax
        push 88h
        push 0
        mov ecx, dword ptr [ebp - 638h]
        push ecx
        ; Exact mapped bytes E8 C8 F9 2E 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xf9
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        push 88h
        mov edx, dword ptr [ebp - 60ch]
        add edx, dword ptr [ebp - 5fch]
        push edx
        mov eax, dword ptr [ebp - 638h]
        push eax
        ; Exact mapped bytes E8 27 F4 2E 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xf4
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 5fch]
        add ecx, 88h
        mov dword ptr [ebp - 5fch], ecx
        mov edx, dword ptr [ebp - 638h]
        cmp dword ptr [edx + 74h], 0
        ; Exact mapped bytes 0F 86 13 03 00 00: jbe 0x5855d7a1
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x13
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ch
        ; Exact mapped bytes E8 6F 3B 2D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x3b
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 6e0h], eax
        cmp dword ptr [ebp - 6e0h], 0
        ; Exact mapped bytes 74 13: je 0x5855d4ba
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 6e0h]
        ; Exact mapped bytes E8 1E A0 F2 FF: call 0x584874d0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xa0
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 6e4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5855d4c4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 6e4h], 0
        mov eax, dword ptr [ebp - 638h]
        mov ecx, dword ptr [ebp - 6e4h]
        mov dword ptr [eax + 88h], ecx
        mov edx, dword ptr [ebp - 638h]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 6fch], eax
        mov ecx, dword ptr [ebp - 638h]
        mov edx, dword ptr [ecx + 74h]
        push edx
        mov ecx, dword ptr [ebp - 6fch]
        ; Exact mapped bytes E8 E3 CB F5 FF: call 0x584ba0e0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xcb
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 698h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5855d519
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 698h]
        add eax, 1
        mov dword ptr [ebp - 698h], eax
        mov ecx, dword ptr [ebp - 638h]
        mov edx, dword ptr [ebp - 698h]
        cmp edx, dword ptr [ecx + 74h]
        ; Exact mapped bytes 0F 83 4E 02 00 00: jae 0x5855d77c
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 134h
        ; Exact mapped bytes E8 CC 3A 2D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x3a
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 700h], eax
        mov eax, dword ptr [ebp - 700h]
        mov dword ptr [ebp - 614h], eax
        push 134h
        push 0
        mov ecx, dword ptr [ebp - 614h]
        push ecx
        ; Exact mapped bytes E8 B0 F8 2E 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xf8
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        push 134h
        mov edx, dword ptr [ebp - 60ch]
        add edx, dword ptr [ebp - 5fch]
        push edx
        mov eax, dword ptr [ebp - 614h]
        push eax
        ; Exact mapped bytes E8 0F F3 2E 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xf3
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 5fch]
        add ecx, 134h
        mov dword ptr [ebp - 5fch], ecx
        mov edx, dword ptr [ebp - 5f4h]
        add edx, dword ptr [ebp - 69ch]
        mov eax, dword ptr [ebp - 614h]
        mov cl, byte ptr [eax + 11ch]
        mov byte ptr [edx + 3f0h], cl
        mov edx, dword ptr [ebp - 69ch]
        add edx, 1
        mov dword ptr [ebp - 69ch], edx
        mov eax, dword ptr [ebp - 614h]
        cmp dword ptr [eax + 12ch], 0
        ; Exact mapped bytes 0F 86 A9 00 00 00: jbe 0x5855d67f
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 614h]
        mov eax, dword ptr [ecx + 12ch]
        mov edx, 18h
        mul edx
        mov ecx, 0ffffffffh
        cmovb eax, ecx
        push eax
        ; Exact mapped bytes E8 4B 3A 2D 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x3a
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 704h], eax
        mov edx, dword ptr [ebp - 614h]
        mov eax, dword ptr [ebp - 704h]
        mov dword ptr [edx + 120h], eax
        mov dword ptr [ebp - 660h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5855d62d
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 660h]
        add ecx, 1
        mov dword ptr [ebp - 660h], ecx
        mov edx, dword ptr [ebp - 614h]
        mov eax, dword ptr [ebp - 660h]
        cmp eax, dword ptr [edx + 12ch]
        ; Exact mapped bytes 73 3C: jae 0x5855d67d
        __asm _emit 0x73
        __asm _emit 0x3c
        push 18h
        mov ecx, dword ptr [ebp - 60ch]
        add ecx, dword ptr [ebp - 5fch]
        push ecx
        imul edx, dword ptr [ebp - 660h], 18h
        mov eax, dword ptr [ebp - 614h]
        add edx, dword ptr [eax + 120h]
        push edx
        ; Exact mapped bytes E8 27 F2 2E 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xf2
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 5fch]
        add ecx, 18h
        mov dword ptr [ebp - 5fch], ecx
        ; Exact mapped bytes EB A1: jmp 0x5855d61e
        __asm _emit 0xeb
        __asm _emit 0xa1
        ; Exact mapped bytes EB 10: jmp 0x5855d68f
        __asm _emit 0xeb
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 614h]
        mov dword ptr [edx + 120h], 0
        mov eax, dword ptr [ebp - 614h]
        cmp dword ptr [eax + 130h], 0
        ; Exact mapped bytes 0F 86 B0 00 00 00: jbe 0x5855d752
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 614h]
        mov eax, dword ptr [ecx + 130h]
        mov edx, 180h
        mul edx
        mov ecx, 0ffffffffh
        cmovb eax, ecx
        push eax
        ; Exact mapped bytes E8 7F 39 2D 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x39
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 708h], eax
        mov edx, dword ptr [ebp - 614h]
        mov eax, dword ptr [ebp - 708h]
        mov dword ptr [edx + 124h], eax
        mov dword ptr [ebp - 664h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5855d6f9
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 664h]
        add ecx, 1
        mov dword ptr [ebp - 664h], ecx
        mov edx, dword ptr [ebp - 614h]
        mov eax, dword ptr [ebp - 664h]
        cmp eax, dword ptr [edx + 130h]
        ; Exact mapped bytes 73 45: jae 0x5855d752
        __asm _emit 0x73
        __asm _emit 0x45
        push 180h
        mov ecx, dword ptr [ebp - 60ch]
        add ecx, dword ptr [ebp - 5fch]
        push ecx
        imul edx, dword ptr [ebp - 664h], 180h
        mov eax, dword ptr [ebp - 614h]
        add edx, dword ptr [eax + 124h]
        push edx
        ; Exact mapped bytes E8 55 F1 2E 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xf1
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 5fch]
        add ecx, 180h
        mov dword ptr [ebp - 5fch], ecx
        ; Exact mapped bytes EB 98: jmp 0x5855d6ea
        __asm _emit 0xeb
        __asm _emit 0x98
        mov edx, dword ptr [ebp - 638h]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 70ch], eax
        lea ecx, [ebp - 614h]
        push ecx
        mov ecx, dword ptr [ebp - 70ch]
        ; Exact mapped bytes E8 AA AA F2 FF: call 0x58488220
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 8E FD FF FF: jmp 0x5855d50a
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 634h]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 710h], eax
        lea ecx, [ebp - 638h]
        push ecx
        mov ecx, dword ptr [ebp - 710h]
        ; Exact mapped bytes E8 80 AA F2 FF: call 0x58488220
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xaa
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 4C FC FF FF: jmp 0x5855d3f2
        __asm _emit 0xe9
        __asm _emit 0x4c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 5f4h]
        add edx, 158h
        mov dword ptr [ebp - 714h], edx
        lea eax, [ebp - 634h]
        push eax
        mov ecx, dword ptr [ebp - 714h]
        ; Exact mapped bytes E8 56 AA F2 FF: call 0x58488220
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xaa
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 0A FB FF FF: jmp 0x5855d2da
        __asm _emit 0xe9
        __asm _emit 0x0a
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 390h], 1
        ; Exact mapped bytes 75 3B: jne 0x5855d814
        __asm _emit 0x75
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp - 5f4h]
        cmp dword ptr [ecx + 134h], 0
        ; Exact mapped bytes 76 2C: jbe 0x5855d814
        __asm _emit 0x76
        __asm _emit 0x2c
        mov dword ptr [ebp - 7e8h], 0
        lea edx, [ebp - 5fch]
        push edx
        mov eax, dword ptr [ebp - 60ch]
        add eax, dword ptr [ebp - 5fch]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 5f4h]
        ; Exact mapped bytes E8 9D 28 00 00: call 0x585600b0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        push 0
        mov edx, dword ptr [ebp - 6e8h]
        push edx
        mov eax, dword ptr [ebp - 60ch]
        push eax
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B1 94 F6 FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x94
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 5f4h]
        mov dword ptr [ecx + 16ch], eax
        cmp dword ptr [ebp - 60ch], 0
        ; Exact mapped bytes 74 25: je 0x5855d869
        __asm _emit 0x74
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 60ch]
        mov dword ptr [ebp - 718h], edx
        mov eax, dword ptr [ebp - 718h]
        push eax
        ; Exact mapped bytes E8 EF 37 2D 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x37
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60ch], 0
        mov ecx, dword ptr [ebp - 5f4h]
        add ecx, 90h
        push ecx
        push 588a9414h
        lea edx, [ebp - 250h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        push 198h
        ; Exact mapped bytes E8 6F 37 2D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x37
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 6ech], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 6ech], 0
        ; Exact mapped bytes 74 1E: je 0x5855d8c9
        __asm _emit 0x74
        __asm _emit 0x1e
        push 1
        push 0
        lea eax, [ebp - 250h]
        push eax
        mov ecx, dword ptr [ebp - 6ech]
        ; Exact mapped bytes E8 EF 2A 22 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x2a
        __asm _emit 0x22
        __asm _emit 0x00
        mov dword ptr [ebp - 6f0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5855d8d3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 6f0h], 0
        mov ecx, dword ptr [ebp - 6f0h]
        mov dword ptr [ebp - 71ch], ecx
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 5f4h]
        mov eax, dword ptr [ebp - 71ch]
        mov dword ptr [edx + 164h], eax
        ; Exact mapped bytes E9 2D 18 00 00: jmp 0x5855f127
        __asm _emit 0xe9
        __asm _emit 0x2d
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0f4240h
        ; Exact mapped bytes 0F 85 A5 13 00 00: jne 0x5855ecac
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa5
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 5f4h]
        mov dword ptr [ecx + 16ch], 0
        ; Exact mapped bytes 0F B7 15 20 8D 94 58: movzx edx, word ptr [0x58948d20]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes 8B 0D 24 06 96 58: mov ecx, dword ptr [0x58960624]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F6 06 FB FF: call 0x5850e020
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x06
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 5f4h]
        mov dword ptr [edx + ecx + 170h], 0
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 5f4h]
        mov dword ptr [ecx + eax + 170h], 12h
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 5f4h]
        mov dword ptr [eax + edx + 170h], 12h
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 5f4h]
        mov dword ptr [eax + edx + 170h], 0ch
        mov ecx, 4
        shl ecx, 2
        mov edx, dword ptr [ebp - 5f4h]
        mov dword ptr [edx + ecx + 170h], 0ch
        mov dword ptr [ebp - 6a0h], 0
        ; Exact mapped bytes 8B 0D 24 06 96 58: mov ecx, dword ptr [0x58960624]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 55 FC FA FF: call 0x5850d610
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xfc
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 24 06 96 58: mov ecx, dword ptr [0x58960624]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0A 04 FB FF: call 0x5850ddd0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x04
        __asm _emit 0xfb
        __asm _emit 0xff
        movzx eax, ax
        mov dword ptr [ebp - 6a0h], eax
        mov ecx, dword ptr [ebp - 5f4h]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp - 5f4h]
        mov dword ptr [eax + 168h], 1
        push 11ch
        push 0
        mov ecx, dword ptr [ebp - 5f4h]
        add ecx, 30h
        push ecx
        ; Exact mapped bytes E8 0F F4 2E 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xf4
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 5f4h]
        mov dword ptr [edx + 68h], 1
        mov eax, dword ptr [ebp - 5f4h]
        mov ecx, dword ptr [ebp - 6a0h]
        mov dword ptr [eax + 6ch], ecx
        mov edx, dword ptr [ebp - 5f4h]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 50h], eax
        mov ecx, dword ptr [ebp - 5f4h]
        mov dword ptr [ecx + 168h], 1
        mov edx, dword ptr [ebp - 5f4h]
        add edx, 158h
        mov dword ptr [ebp - 720h], edx
        mov eax, dword ptr [ebp - 5f4h]
        mov ecx, dword ptr [eax + 68h]
        push ecx
        mov ecx, dword ptr [ebp - 720h]
        ; Exact mapped bytes E8 7D C6 F5 FF: call 0x584ba0e0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xc6
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        push 8ch
        ; Exact mapped bytes E8 96 35 2D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x35
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 724h], eax
        mov edx, dword ptr [ebp - 724h]
        mov dword ptr [ebp - 608h], edx
        push 88h
        push 0
        mov eax, dword ptr [ebp - 608h]
        push eax
        ; Exact mapped bytes E8 7A F3 2E 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xf3
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        xor ecx, ecx
        mov edx, dword ptr [ebp - 608h]
        ; Exact mapped bytes 66 89 0A: mov word ptr [edx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0a
        push 588a9420h
        mov eax, dword ptr [ebp - 608h]
        add eax, 2
        push eax
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push 588a942ch
        mov ecx, dword ptr [ebp - 608h]
        add ecx, 42h
        push ecx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 608h]
        mov dword ptr [edx + 64h], 1
        mov eax, dword ptr [ebp - 608h]
        mov dword ptr [eax + 68h], 0
        mov ecx, dword ptr [ebp - 608h]
        mov dword ptr [ecx + 6ch], 3
        mov edx, dword ptr [ebp - 608h]
        mov dword ptr [edx + 70h], 2
        mov eax, dword ptr [ebp - 608h]
        mov dword ptr [eax + 74h], 1
        mov ecx, dword ptr [ebp - 608h]
        mov dword ptr [ecx + 78h], 1
        push 0ch
        ; Exact mapped bytes E8 E1 34 2D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x34
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 6f4h], eax
        cmp dword ptr [ebp - 6f4h], 0
        ; Exact mapped bytes 74 13: je 0x5855db48
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 6f4h]
        ; Exact mapped bytes E8 90 99 F2 FF: call 0x584874d0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x99
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 6a8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5855db52
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 6a8h], 0
        mov edx, dword ptr [ebp - 608h]
        mov eax, dword ptr [ebp - 6a8h]
        mov dword ptr [edx + 88h], eax
        mov ecx, dword ptr [ebp - 608h]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 728h], edx
        mov eax, dword ptr [ebp - 608h]
        mov ecx, dword ptr [eax + 74h]
        push ecx
        mov ecx, dword ptr [ebp - 728h]
        ; Exact mapped bytes E8 55 C5 F5 FF: call 0x584ba0e0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xc5
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        push 8ch
        ; Exact mapped bytes E8 6E 34 2D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x34
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 72ch], eax
        mov edx, dword ptr [ebp - 72ch]
        mov dword ptr [ebp - 604h], edx
        push 88h
        push 0
        mov eax, dword ptr [ebp - 604h]
        push eax
        ; Exact mapped bytes E8 52 F2 2E 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xf2
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, 1
        mov edx, dword ptr [ebp - 604h]
        ; Exact mapped bytes 66 89 0A: mov word ptr [edx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0a
        push 588a9438h
        mov eax, dword ptr [ebp - 604h]
        add eax, 2
        push eax
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push 588a9444h
        ; Exact mapped bytes E8 02 44 FC FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x44
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 730h], eax
        mov ecx, dword ptr [ebp - 604h]
        add ecx, 42h
        mov dword ptr [ebp - 734h], ecx
        mov edx, dword ptr [ebp - 730h]
        push edx
        mov eax, dword ptr [ebp - 734h]
        push eax
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 604h]
        mov dword ptr [ecx + 64h], 1
        mov edx, dword ptr [ebp - 604h]
        mov dword ptr [edx + 68h], 1
        mov eax, dword ptr [ebp - 604h]
        mov dword ptr [eax + 6ch], 3
        mov ecx, dword ptr [ebp - 604h]
        mov dword ptr [ecx + 70h], 2
        mov edx, dword ptr [ebp - 604h]
        mov eax, dword ptr [ebp - 6a0h]
        mov dword ptr [edx + 74h], eax
        mov ecx, dword ptr [ebp - 604h]
        mov dword ptr [ecx + 78h], 1
        push 0ch
        ; Exact mapped bytes E8 93 33 2D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x33
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 6ach], eax
        cmp dword ptr [ebp - 6ach], 0
        ; Exact mapped bytes 74 13: je 0x5855dc96
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 6ach]
        ; Exact mapped bytes E8 42 98 F2 FF: call 0x584874d0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x98
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 6d4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5855dca0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 6d4h], 0
        mov edx, dword ptr [ebp - 604h]
        mov eax, dword ptr [ebp - 6d4h]
        mov dword ptr [edx + 88h], eax
        mov ecx, dword ptr [ebp - 604h]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 738h], edx
        mov eax, dword ptr [ebp - 604h]
        mov ecx, dword ptr [eax + 74h]
        push ecx
        mov ecx, dword ptr [ebp - 738h]
        ; Exact mapped bytes E8 07 C4 F5 FF: call 0x584ba0e0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xc4
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 63ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x5855dcf5
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 63ch]
        add edx, 1
        mov dword ptr [ebp - 63ch], edx
        mov eax, dword ptr [ebp - 604h]
        mov ecx, dword ptr [ebp - 63ch]
        cmp ecx, dword ptr [eax + 74h]
        ; Exact mapped bytes 0F 83 3F 0E 00 00: jae 0x5855eb49
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x3f
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        push 134h
        ; Exact mapped bytes E8 F0 32 2D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x32
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 73ch], eax
        mov edx, dword ptr [ebp - 73ch]
        mov dword ptr [ebp - 5f8h], edx
        push 134h
        push 0
        mov eax, dword ptr [ebp - 5f8h]
        push eax
        ; Exact mapped bytes E8 D4 F0 2E 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xf0
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 63ch]
        mov edx, dword ptr [ecx*4 + 58949080h]
        push edx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 98 8E F9 FF: call 0x584f6bf0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x8e
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 600h], eax
        cmp dword ptr [ebp - 600h], 0
        ; Exact mapped bytes 75 05: jne 0x5855dd6c
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 7A FF FF FF: jmp 0x5855dce6
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 678h], 0
        mov eax, dword ptr [ebp - 600h]
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 E9 04: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x04
        mov edx, 0ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        movzx eax, cx
        mov dword ptr [ebp - 658h], eax
        mov dword ptr [ebp - 610h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5855ddb0
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 610h]
        add ecx, 1
        mov dword ptr [ebp - 610h], ecx
        cmp dword ptr [ebp - 610h], 20h
        ; Exact mapped bytes 0F 8D 23 01 00 00: jge 0x5855dee0
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 80000000h
        mov ecx, dword ptr [ebp - 610h]
        shr edx, cl
        mov eax, dword ptr [ebp - 600h]
        and edx, dword ptr [eax + 268h]
        mov ecx, 1fh
        sub ecx, dword ptr [ebp - 610h]
        shr edx, cl
        mov dword ptr [ebp - 740h], edx
        cmp dword ptr [ebp - 740h], 0
        ; Exact mapped bytes 0F 85 E5 00 00 00: jne 0x5855dedb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 610h]
        mov edx, dword ptr [ebp - 600h]
        movzx eax, word ptr [edx + ecx*2 + 86h]
        test eax, eax
        ; Exact mapped bytes 0F 8E C9 00 00 00: jle 0x5855dedb
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 4
        push 0
        lea ecx, [ebp - 6b4h]
        push ecx
        ; Exact mapped bytes E8 EE EF 2E 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xef
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        push 4
        push 0
        lea edx, [ebp - 668h]
        push edx
        ; Exact mapped bytes E8 DB EF 2E 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xef
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        mov byte ptr [ebp - 668h], 5
        mov byte ptr [ebp - 667h], 0
        mov eax, dword ptr [ebp - 610h]
        mov ecx, dword ptr [ebp - 600h]
        ; Exact mapped bytes 66 8B 94 41 86 00 00 00: mov dx, word ptr [ecx + eax*2 + 0x86]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x41
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 95 9A F9 FF FF: mov word ptr [ebp - 0x666], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x9a
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        push 4
        lea eax, [ebp - 668h]
        push eax
        lea ecx, [ebp - 6b4h]
        push ecx
        ; Exact mapped bytes E8 1A EA 2E 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xea
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 6b4h]
        push edx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E5 8E F9 FF: call 0x584f6d70
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x8e
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 6b8h], eax
        cmp dword ptr [ebp - 6b8h], 0
        ; Exact mapped bytes 74 41: je 0x5855dedb
        __asm _emit 0x74
        __asm _emit 0x41
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 6b8h]
        mov eax, dword ptr [edx + ecx + 28h]
        mov dword ptr [ebp - 6bch], eax
        mov ecx, dword ptr [ebp - 6bch]
        cmp ecx, dword ptr [ebp - 658h]
        ; Exact mapped bytes 76 0C: jbe 0x5855decc
        __asm _emit 0x76
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 6bch]
        mov dword ptr [ebp - 658h], edx
        mov eax, dword ptr [ebp - 678h]
        add eax, 1
        mov dword ptr [ebp - 678h], eax
        ; Exact mapped bytes E9 C1 FE FF FF: jmp 0x5855dda1
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 5f8h]
        mov dword ptr [ecx + 11ch], 2
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D5 77 F3 FF: call 0x584956d0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x77
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 0E 9D F2 FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x9d
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 748h], eax
        imul edx, dword ptr [ebp - 63ch], 3
        ; Exact mapped bytes A1 24 8D 94 58: mov eax, dword ptr [0x58948d24]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x58
        lea ecx, [eax + edx - 11h]
        mov dword ptr [ebp - 744h], ecx
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [ebp + 14h]
        mov esi, dword ptr [edx + 84h]
        sub esi, dword ptr [eax + 80h]
        mov ecx, dword ptr [ebp - 744h]
        push ecx
        mov ecx, dword ptr [ebp - 748h]
        ; Exact mapped bytes E8 6E DD F2 FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xdd
        __asm _emit 0xf2
        __asm _emit 0xff
        xor edx, edx
        div esi
        mov eax, dword ptr [ebp + 14h]
        add edx, dword ptr [eax + 80h]
        mov dword ptr [ebp - 74ch], edx
        mov ecx, dword ptr [ebp - 5f8h]
        mov edx, dword ptr [ebp - 74ch]
        mov dword ptr [ecx], edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 62 77 F3 FF: call 0x584956d0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x77
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9B 9C F2 FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x9c
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 754h], eax
        imul eax, dword ptr [ebp - 63ch], 7
        ; Exact mapped bytes 8B 0D 24 8D 94 58: mov ecx, dword ptr [0x58948d24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x58
        lea edx, [ecx + eax - 13h]
        mov dword ptr [ebp - 750h], edx
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [ebp + 14h]
        mov esi, dword ptr [eax + 8ch]
        sub esi, dword ptr [ecx + 88h]
        mov edx, dword ptr [ebp - 750h]
        push edx
        mov ecx, dword ptr [ebp - 754h]
        ; Exact mapped bytes E8 FA DC F2 FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xdc
        __asm _emit 0xf2
        __asm _emit 0xff
        xor edx, edx
        div esi
        mov eax, dword ptr [ebp + 14h]
        add edx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 758h], edx
        mov ecx, dword ptr [ebp - 5f8h]
        mov edx, dword ptr [ebp - 758h]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp - 5f8h]
        cmp dword ptr [eax + 4], 0c8h
        ; Exact mapped bytes 7D 18: jge 0x5855dfff
        __asm _emit 0x7d
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 5f8h]
        mov edx, dword ptr [ecx + 4]
        add edx, 0c8h
        mov eax, dword ptr [ebp - 5f8h]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp - 5f8h]
        mov byte ptr [ecx + 0dh], 0
        mov edx, dword ptr [ebp - 63ch]
        add edx, 8000h
        mov eax, dword ptr [ebp - 5f8h]
        ; Exact mapped bytes 66 89 50 08: mov word ptr [eax + 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        xor ecx, ecx
        mov edx, dword ptr [ebp - 5f8h]
        ; Exact mapped bytes 66 89 4A 0A: mov word ptr [edx + 0xa], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 5f8h]
        mov ecx, dword ptr [ebp - 608h]
        mov dl, byte ptr [ecx + 78h]
        mov byte ptr [eax + 0ch], dl
        push 588a9460h
        mov eax, dword ptr [ebp - 5f8h]
        add eax, 0eh
        push eax
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 5f8h]
        mov edx, dword ptr [ebp - 604h]
        mov eax, dword ptr [edx + 64h]
        mov dword ptr [ecx + 28h], eax
        mov ecx, dword ptr [ebp - 5f8h]
        mov edx, dword ptr [ebp - 604h]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ecx + 2ch], eax
        mov ecx, 1
        mov edx, dword ptr [ebp - 5f8h]
        ; Exact mapped bytes 66 89 4A 30: mov word ptr [edx + 0x30], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x30
        mov eax, dword ptr [ebp - 600h]
        movzx ecx, word ptr [eax + 35eh]
        mov edx, dword ptr [ebp - 5f8h]
        mov dword ptr [edx + 34h], ecx
        mov eax, dword ptr [ebp - 604h]
        add eax, 42h
        push eax
        mov ecx, dword ptr [ebp - 5f8h]
        add ecx, 38h
        push ecx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 5f8h]
        mov byte ptr [edx + 108h], 3
        mov eax, dword ptr [ebp - 5f8h]
        mov byte ptr [eax + 110h], 0
        mov ecx, dword ptr [ebp - 5f8h]
        mov byte ptr [ecx + 111h], 0
        mov edx, dword ptr [ebp - 5f8h]
        mov eax, dword ptr [edx + 4ch]
        or eax, 1
        mov ecx, dword ptr [ebp - 5f8h]
        mov dword ptr [ecx + 4ch], eax
        mov edx, dword ptr [ebp - 678h]
        and edx, 1fh
        shl edx, 1
        mov eax, dword ptr [ebp - 5f8h]
        mov ecx, dword ptr [eax + 4ch]
        and ecx, 0ffffffc1h
        or ecx, edx
        mov edx, dword ptr [ebp - 5f8h]
        mov dword ptr [edx + 4ch], ecx
        mov eax, dword ptr [ebp - 5f8h]
        mov ecx, dword ptr [eax + 4ch]
        and ecx, 0fffffc3fh
        mov edx, dword ptr [ebp - 5f8h]
        mov dword ptr [edx + 4ch], ecx
        mov eax, dword ptr [ebp - 5f8h]
        mov ecx, dword ptr [eax + 4ch]
        and ecx, 3ffh
        mov edx, dword ptr [ebp - 5f8h]
        mov dword ptr [edx + 4ch], ecx
        mov eax, dword ptr [ebp - 5f8h]
        mov ecx, dword ptr [ebp - 600h]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [eax + 50h], edx
        mov eax, dword ptr [ebp - 5f8h]
        mov dword ptr [eax + 54h], 0
        mov ecx, dword ptr [ebp - 600h]
        add ecx, 33ch
        push ecx
        mov edx, dword ptr [ebp - 5f8h]
        add edx, 58h
        push edx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push 4
        mov eax, dword ptr [ebp - 600h]
        push eax
        mov ecx, dword ptr [ebp - 5f8h]
        add ecx, 70h
        push ecx
        ; Exact mapped bytes E8 F9 E6 2E 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xe6
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        push 4
        push 0
        lea edx, [ebp - 66ch]
        push edx
        ; Exact mapped bytes E8 66 EC 2E 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xec
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        push 4
        push 0
        lea eax, [ebp - 670h]
        push eax
        ; Exact mapped bytes E8 53 EC 2E 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xec
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        mov byte ptr [ebp - 66ch], 2
        mov byte ptr [ebp - 66bh], 0
        mov ecx, 2
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 600h]
        ; Exact mapped bytes 66 8B 8C 10 82 00 00 00: mov cx, word ptr [eax + edx + 0x82]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x10
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 8D 96 F9 FF FF: mov word ptr [ebp - 0x66a], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x96
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 670h], 3
        mov byte ptr [ebp - 66fh], 0
        mov edx, 2
        shl edx, 0
        mov eax, dword ptr [ebp - 600h]
        ; Exact mapped bytes 66 8B 8C 10 82 00 00 00: mov cx, word ptr [eax + edx + 0x82]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x10
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 8D 92 F9 FF FF: mov word ptr [ebp - 0x66e], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x92
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        push 4
        lea edx, [ebp - 66ch]
        push edx
        mov eax, dword ptr [ebp - 5f8h]
        add eax, 74h
        push eax
        ; Exact mapped bytes E8 62 E6 2E 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xe6
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        push 4
        lea ecx, [ebp - 670h]
        push ecx
        mov edx, dword ptr [ebp - 5f8h]
        add edx, 78h
        push edx
        ; Exact mapped bytes E8 47 E6 2E 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xe6
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 600h]
        ; Exact mapped bytes 66 8B 48 10: mov cx, word ptr [eax + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x10
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        push edx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 93 82 F9 FF: call 0x584f6500
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x82
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 75ch], eax
        mov eax, dword ptr [ebp - 5f8h]
        add eax, 7ch
        mov dword ptr [ebp - 760h], eax
        push 4
        mov ecx, dword ptr [ebp - 75ch]
        push ecx
        mov edx, dword ptr [ebp - 760h]
        push edx
        ; Exact mapped bytes E8 F9 E5 2E 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xe5
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 600h]
        ; Exact mapped bytes 66 8B 48 10: mov cx, word ptr [eax + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x10
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        push edx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 45 82 F9 FF: call 0x584f6500
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x82
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 764h], eax
        mov eax, dword ptr [ebp - 5f8h]
        add eax, 80h
        mov dword ptr [ebp - 7a8h], eax
        push 4
        mov ecx, dword ptr [ebp - 764h]
        push ecx
        mov edx, dword ptr [ebp - 7a8h]
        push edx
        ; Exact mapped bytes E8 A9 E5 2E 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xe5
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 600h]
        ; Exact mapped bytes 66 8B 48 10: mov cx, word ptr [eax + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x10
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        push edx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F5 81 F9 FF: call 0x584f6500
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 76ch], eax
        mov eax, dword ptr [ebp - 5f8h]
        add eax, 84h
        mov dword ptr [ebp - 770h], eax
        push 4
        mov ecx, dword ptr [ebp - 76ch]
        push ecx
        mov edx, dword ptr [ebp - 770h]
        push edx
        ; Exact mapped bytes E8 59 E5 2E 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xe5
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 600h]
        ; Exact mapped bytes 66 8B 48 10: mov cx, word ptr [eax + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x10
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        push edx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A5 81 F9 FF: call 0x584f6500
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 774h], eax
        mov eax, dword ptr [ebp - 5f8h]
        add eax, 88h
        mov dword ptr [ebp - 778h], eax
        push 4
        mov ecx, dword ptr [ebp - 774h]
        push ecx
        mov edx, dword ptr [ebp - 778h]
        push edx
        ; Exact mapped bytes E8 09 E5 2E 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xe5
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 600h]
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        mov dword ptr [ebp - 6c0h], edx
        cmp dword ptr [ebp - 6c0h], 10h
        ; Exact mapped bytes 0F 87 EE 01 00 00: ja 0x5855e59c
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xee
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 6c0h]
        ; Exact mapped bytes FF 24 85 B0 F1 55 58: jmp dword ptr [eax*4 + 0x5855f1b0]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0xf1
        __asm _emit 0x55
        __asm _emit 0x58
        mov dword ptr [ebp - 620h], 0
        mov dword ptr [ebp - 624h], 0
        mov dword ptr [ebp - 628h], 0
        mov dword ptr [ebp - 62ch], 0
        ; Exact mapped bytes E9 B4 01 00 00: jmp 0x5855e59c
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 620h], 1
        mov dword ptr [ebp - 624h], 1
        mov dword ptr [ebp - 628h], 2
        mov dword ptr [ebp - 62ch], 1
        ; Exact mapped bytes E9 87 01 00 00: jmp 0x5855e59c
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 620h], 2
        mov dword ptr [ebp - 624h], 1
        mov dword ptr [ebp - 628h], 2
        mov dword ptr [ebp - 62ch], 2
        ; Exact mapped bytes E9 5A 01 00 00: jmp 0x5855e59c
        __asm _emit 0xe9
        __asm _emit 0x5a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 620h], 3
        mov dword ptr [ebp - 624h], 2
        mov dword ptr [ebp - 628h], 3
        mov dword ptr [ebp - 62ch], 3
        ; Exact mapped bytes E9 2D 01 00 00: jmp 0x5855e59c
        __asm _emit 0xe9
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 620h], 4
        mov dword ptr [ebp - 624h], 2
        mov dword ptr [ebp - 628h], 4
        mov dword ptr [ebp - 62ch], 3
        ; Exact mapped bytes E9 00 01 00 00: jmp 0x5855e59c
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 620h], 5
        mov dword ptr [ebp - 624h], 3
        mov dword ptr [ebp - 628h], 5
        mov dword ptr [ebp - 62ch], 5
        ; Exact mapped bytes E9 D3 00 00 00: jmp 0x5855e59c
        __asm _emit 0xe9
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 620h], 6
        mov dword ptr [ebp - 624h], 3
        mov dword ptr [ebp - 628h], 5
        mov dword ptr [ebp - 62ch], 5
        ; Exact mapped bytes E9 A6 00 00 00: jmp 0x5855e59c
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 620h], 6
        mov dword ptr [ebp - 624h], 3
        mov dword ptr [ebp - 628h], 5
        mov dword ptr [ebp - 62ch], 5
        ; Exact mapped bytes EB 7C: jmp 0x5855e59c
        __asm _emit 0xeb
        __asm _emit 0x7c
        mov dword ptr [ebp - 620h], 5
        mov dword ptr [ebp - 624h], 2
        mov dword ptr [ebp - 628h], 3
        mov dword ptr [ebp - 62ch], 5
        ; Exact mapped bytes EB 52: jmp 0x5855e59c
        __asm _emit 0xeb
        __asm _emit 0x52
        mov dword ptr [ebp - 620h], 9
        mov dword ptr [ebp - 624h], 9
        mov dword ptr [ebp - 628h], 9
        mov dword ptr [ebp - 62ch], 9
        ; Exact mapped bytes EB 28: jmp 0x5855e59c
        __asm _emit 0xeb
        __asm _emit 0x28
        mov dword ptr [ebp - 620h], 0ah
        mov dword ptr [ebp - 624h], 0ah
        mov dword ptr [ebp - 628h], 0ah
        mov dword ptr [ebp - 62ch], 0ah
        imul ecx, dword ptr [ebp - 620h], 0ah
        mov edx, dword ptr [ebp - 5f8h]
        ; Exact mapped bytes 66 89 8A 8C 00 00 00: mov word ptr [edx + 0x8c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, dword ptr [ebp - 624h], 0ah
        mov ecx, dword ptr [ebp - 5f8h]
        ; Exact mapped bytes 66 89 81 8E 00 00 00: mov word ptr [ecx + 0x8e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp - 628h], 0ah
        mov eax, dword ptr [ebp - 5f8h]
        ; Exact mapped bytes 66 89 90 90 00 00 00: mov word ptr [eax + 0x90], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, dword ptr [ebp - 62ch], 0ah
        mov edx, dword ptr [ebp - 5f8h]
        ; Exact mapped bytes 66 89 8A 92 00 00 00: mov word ptr [edx + 0x92], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 674h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5855e607
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 674h]
        add eax, 1
        mov dword ptr [ebp - 674h], eax
        cmp dword ptr [ebp - 674h], 6
        ; Exact mapped bytes 7D 23: jge 0x5855e633
        __asm _emit 0x7d
        __asm _emit 0x23
        push 0ch
        push 0
        imul ecx, dword ptr [ebp - 674h], 0ch
        mov edx, dword ptr [ebp - 5f8h]
        lea eax, [edx + ecx + 0a4h]
        push eax
        ; Exact mapped bytes E8 E2 E7 2E 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xe7
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB C5: jmp 0x5855e5f8
        __asm _emit 0xeb
        __asm _emit 0xc5
        xor ecx, ecx
        mov edx, dword ptr [ebp - 5f8h]
        ; Exact mapped bytes 66 89 8A EC 00 00 00: mov word ptr [edx + 0xec], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 5f8h]
        mov ecx, dword ptr [ebp - 678h]
        mov dword ptr [eax + 12ch], ecx
        mov edx, dword ptr [ebp - 5f8h]
        mov dword ptr [edx + 130h], 3
        mov eax, dword ptr [ebp - 5f8h]
        cmp dword ptr [eax + 12ch], 0
        ; Exact mapped bytes 0F 86 BC 01 00 00: jbe 0x5855e833
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xbc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 5f8h]
        mov eax, dword ptr [ecx + 12ch]
        mov edx, 18h
        mul edx
        mov ecx, 0ffffffffh
        cmovb eax, ecx
        push eax
        ; Exact mapped bytes E8 AA 29 2D 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x29
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 77ch], eax
        mov edx, dword ptr [ebp - 5f8h]
        mov eax, dword ptr [ebp - 77ch]
        mov dword ptr [edx + 120h], eax
        mov dword ptr [ebp - 6a4h], 0
        mov dword ptr [ebp - 610h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5855e6d8
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 610h]
        add ecx, 1
        mov dword ptr [ebp - 610h], ecx
        cmp dword ptr [ebp - 610h], 20h
        ; Exact mapped bytes 0F 8D 4C 01 00 00: jge 0x5855e831
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 80000000h
        mov ecx, dword ptr [ebp - 610h]
        shr edx, cl
        mov eax, dword ptr [ebp - 600h]
        and edx, dword ptr [eax + 268h]
        mov ecx, 1fh
        sub ecx, dword ptr [ebp - 610h]
        shr edx, cl
        mov dword ptr [ebp - 780h], edx
        cmp dword ptr [ebp - 780h], 0
        ; Exact mapped bytes 0F 85 0E 01 00 00: jne 0x5855e82c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 610h]
        mov edx, dword ptr [ebp - 600h]
        movzx eax, word ptr [edx + ecx*2 + 86h]
        test eax, eax
        ; Exact mapped bytes 0F 8E F2 00 00 00: jle 0x5855e82c
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 18h
        push 0
        lea ecx, [ebp - 470h]
        push ecx
        ; Exact mapped bytes E8 C6 E6 2E 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xe6
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        push 4
        push 0
        lea edx, [ebp - 684h]
        push edx
        ; Exact mapped bytes E8 B3 E6 2E 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xe6
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        mov byte ptr [ebp - 684h], 5
        mov byte ptr [ebp - 683h], 0
        mov eax, dword ptr [ebp - 610h]
        mov ecx, dword ptr [ebp - 600h]
        ; Exact mapped bytes 66 8B 94 41 86 00 00 00: mov dx, word ptr [ecx + eax*2 + 0x86]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x41
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 95 7E F9 FF FF: mov word ptr [ebp - 0x682], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x7e
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        push 4
        lea eax, [ebp - 684h]
        push eax
        lea ecx, [ebp - 470h]
        push ecx
        ; Exact mapped bytes E8 F2 E0 2E 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xe0
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        push 0
        mov edx, dword ptr [ebp - 470h]
        push edx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BB 7D F9 FF: call 0x584f6570
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x7d
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 6c4h], eax
        cmp dword ptr [ebp - 6c4h], 0
        ; Exact mapped bytes 74 34: je 0x5855e7f8
        __asm _emit 0x74
        __asm _emit 0x34
        push 4
        mov eax, dword ptr [ebp - 6c4h]
        push eax
        lea ecx, [ebp - 46ch]
        push ecx
        ; Exact mapped bytes E8 B7 E0 2E 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xe0
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        mov edx, 1
        imul eax, edx, 0
        mov byte ptr [ebp + eax - 464h], 32h
        mov cl, byte ptr [ebp - 610h]
        mov byte ptr [ebp - 462h], cl
        push 18h
        lea edx, [ebp - 470h]
        push edx
        imul eax, dword ptr [ebp - 6a4h], 18h
        mov ecx, dword ptr [ebp - 5f8h]
        add eax, dword ptr [ecx + 120h]
        push eax
        ; Exact mapped bytes E8 76 E0 2E 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xe0
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 6a4h]
        add edx, 1
        mov dword ptr [ebp - 6a4h], edx
        ; Exact mapped bytes E9 98 FE FF FF: jmp 0x5855e6c9
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 10: jmp 0x5855e843
        __asm _emit 0xeb
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 5f8h]
        mov dword ptr [eax + 120h], 0
        mov ecx, dword ptr [ebp - 5f8h]
        mov eax, dword ptr [ecx + 130h]
        mov edx, 180h
        mul edx
        mov ecx, 0ffffffffh
        cmovb eax, ecx
        push eax
        ; Exact mapped bytes E8 DE 27 2D 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x27
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 784h], eax
        mov edx, dword ptr [ebp - 5f8h]
        mov eax, dword ptr [ebp - 784h]
        mov dword ptr [edx + 124h], eax
        mov dword ptr [ebp - 644h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5855e89a
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 644h]
        add ecx, 1
        mov dword ptr [ebp - 644h], ecx
        mov edx, dword ptr [ebp - 5f8h]
        mov eax, dword ptr [ebp - 644h]
        cmp eax, dword ptr [edx + 130h]
        ; Exact mapped bytes 0F 83 6D 02 00 00: jae 0x5855eb1f
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x6d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 180h
        push 0
        lea ecx, [ebp - 5f0h]
        push ecx
        ; Exact mapped bytes E8 4B E5 2E 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xe5
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        mov edx, 2
        imul eax, edx, 0
        xor ecx, ecx
        ; Exact mapped bytes 66 89 8C 05 18 FA FF FF: mov word ptr [ebp + eax - 0x5e8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x05
        __asm _emit 0x18
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        imul edx, dword ptr [ebp - 658h], 5
        add edx, 32h
        mov eax, 2
        shl eax, 0
        ; Exact mapped bytes 66 89 94 05 18 FA FF FF: mov word ptr [ebp + eax - 0x5e8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x05
        __asm _emit 0x18
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, 2
        shl ecx, 1
        xor edx, edx
        ; Exact mapped bytes 66 89 94 0D 18 FA FF FF: mov word ptr [ebp + ecx - 0x5e8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 2
        shl eax, 0
        mov ecx, 2
        imul edx, ecx, 0bh
        ; Exact mapped bytes 66 8B 84 05 18 FA FF FF: mov ax, word ptr [ebp + eax - 0x5e8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0x18
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 84 15 24 FA FF FF: mov word ptr [ebp + edx - 0x5dc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 600h]
        ; Exact mapped bytes 66 8B 51 10: mov dx, word ptr [ecx + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x10
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        mov eax, 0fff0h
        ; Exact mapped bytes 66 23 85 1E FA FF FF: and ax, word ptr [ebp - 0x5e2]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x85
        __asm _emit 0x1e
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        ; Exact mapped bytes 66 89 85 1E FA FF FF: mov word ptr [ebp - 0x5e2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x1e
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 8D A8 F9 FF FF: mov cx, word ptr [ebp - 0x658]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xa8
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 E1 7F: and cx, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x7f
        ; Exact mapped bytes 66 C1 E1 04: shl cx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0x04
        mov edx, 0f80fh
        ; Exact mapped bytes 66 23 95 1E FA FF FF: and dx, word ptr [ebp - 0x5e2]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x95
        __asm _emit 0x1e
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        ; Exact mapped bytes 66 89 95 1E FA FF FF: mov word ptr [ebp - 0x5e2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x1e
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 85 BC F9 FF FF: mov ax, word ptr [ebp - 0x644]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xbc
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        ; Exact mapped bytes 66 C1 E0 0B: shl ax, 0xb
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe0
        __asm _emit 0x0b
        mov ecx, 7ffh
        ; Exact mapped bytes 66 23 8D 1E FA FF FF: and cx, word ptr [ebp - 0x5e2]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x8d
        __asm _emit 0x1e
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        ; Exact mapped bytes 66 89 8D 1E FA FF FF: mov word ptr [ebp - 0x5e2], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x1e
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 67ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x5855e9b6
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 67ch]
        add edx, 1
        mov dword ptr [ebp - 67ch], edx
        cmp dword ptr [ebp - 67ch], 0bh
        ; Exact mapped bytes 7D 1A: jge 0x5855e9d9
        __asm _emit 0x7d
        __asm _emit 0x1a
        imul eax, dword ptr [ebp - 658h], 16h
        add eax, 14h
        mov ecx, dword ptr [ebp - 67ch]
        ; Exact mapped bytes 66 89 84 4D 24 FA FF FF: mov word ptr [ebp + ecx*2 - 0x5dc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x4d
        __asm _emit 0x24
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB CE: jmp 0x5855e9a7
        __asm _emit 0xeb
        __asm _emit 0xce
        ; Exact mapped bytes 66 8B 95 1E FA FF FF: mov dx, word ptr [ebp - 0x5e2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x1e
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        mov dword ptr [ebp - 6c8h], eax
        cmp dword ptr [ebp - 6c8h], 4
        ; Exact mapped bytes 77 51: ja 0x5855ea47
        __asm _emit 0x77
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 6c8h]
        ; Exact mapped bytes FF 24 8D F4 F1 55 58: jmp dword ptr [ecx*4 + 0x5855f1f4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xf4
        __asm _emit 0xf1
        __asm _emit 0x55
        __asm _emit 0x58
        mov edx, 1f4h
        ; Exact mapped bytes 66 89 95 60 FA FF FF: mov word ptr [ebp - 0x5a0], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x60
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 36: jmp 0x5855ea47
        __asm _emit 0xeb
        __asm _emit 0x36
        mov eax, 212h
        ; Exact mapped bytes 66 89 85 60 FA FF FF: mov word ptr [ebp - 0x5a0], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 28: jmp 0x5855ea47
        __asm _emit 0xeb
        __asm _emit 0x28
        mov ecx, 226h
        ; Exact mapped bytes 66 89 8D 60 FA FF FF: mov word ptr [ebp - 0x5a0], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x60
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 1A: jmp 0x5855ea47
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov edx, 1f4h
        ; Exact mapped bytes 66 89 95 60 FA FF FF: mov word ptr [ebp - 0x5a0], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x60
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 0C: jmp 0x5855ea47
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, 235h
        ; Exact mapped bytes 66 89 85 60 FA FF FF: mov word ptr [ebp - 0x5a0], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 644h], 0
        ; Exact mapped bytes 74 36: je 0x5855ea86
        __asm _emit 0x74
        __asm _emit 0x36
        ; Exact mapped bytes 66 8B 8D 1E FA FF FF: mov cx, word ptr [ebp - 0x5e2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x1e
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        mov eax, dword ptr [ebp - 5f4h]
        mov ecx, dword ptr [eax + edx*4 + 170h]
        and ecx, 7fffffffh
        shl ecx, 1
        mov edx, dword ptr [ebp - 59ch]
        and edx, 1
        or edx, ecx
        mov dword ptr [ebp - 59ch], edx
        ; Exact mapped bytes EB 12: jmp 0x5855ea98
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 59ch]
        and eax, 1
        or eax, 2
        mov dword ptr [ebp - 59ch], eax
        mov ecx, dword ptr [ebp - 644h]
        push ecx
        mov edx, dword ptr [ebp - 63ch]
        push edx
        push 588a946ch
        lea eax, [ebp - 50h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        lea ecx, [ebp - 50h]
        push ecx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, 14h
        ; Exact mapped bytes 7D 14: jge 0x5855eadb
        __asm _emit 0x7d
        __asm _emit 0x14
        lea edx, [ebp - 50h]
        push edx
        lea eax, [ebp - 564h]
        push eax
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes EB 14: jmp 0x5855eaef
        __asm _emit 0xeb
        __asm _emit 0x14
        push 14h
        lea ecx, [ebp - 50h]
        push ecx
        lea edx, [ebp - 564h]
        push edx
        ; Exact mapped bytes FF 15 0C 43 89 58: call dword ptr [0x5889430c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        push 180h
        lea eax, [ebp - 5f0h]
        push eax
        imul ecx, dword ptr [ebp - 644h], 180h
        mov edx, dword ptr [ebp - 5f8h]
        add ecx, dword ptr [edx + 124h]
        push ecx
        ; Exact mapped bytes E8 79 DD 2E 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xdd
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 6C FD FF FF: jmp 0x5855e88b
        __asm _emit 0xe9
        __asm _emit 0x6c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 604h]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 788h], ecx
        lea edx, [ebp - 5f8h]
        push edx
        mov ecx, dword ptr [ebp - 788h]
        ; Exact mapped bytes E8 DD 96 F2 FF: call 0x58488220
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x96
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 9D F1 FF FF: jmp 0x5855dce6
        __asm _emit 0xe9
        __asm _emit 0x9d
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 608h]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 78ch], ecx
        lea edx, [ebp - 604h]
        push edx
        mov ecx, dword ptr [ebp - 78ch]
        ; Exact mapped bytes E8 B3 96 F2 FF: call 0x58488220
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x96
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 5f4h]
        add eax, 158h
        mov dword ptr [ebp - 790h], eax
        lea ecx, [ebp - 608h]
        push ecx
        mov ecx, dword ptr [ebp - 790h]
        ; Exact mapped bytes E8 90 96 F2 FF: call 0x58488220
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x96
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        push 1ch
        ; Exact mapped bytes E8 6C 24 2D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 794h], eax
        mov edx, dword ptr [ebp - 794h]
        mov dword ptr [ebp - 648h], edx
        push 1ch
        ; Exact mapped bytes E8 50 24 2D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x24
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 798h], eax
        mov eax, dword ptr [ebp - 798h]
        mov dword ptr [ebp - 64ch], eax
        push 1ch
        push 0
        mov ecx, dword ptr [ebp - 648h]
        push ecx
        ; Exact mapped bytes E8 37 E2 2E 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xe2
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        push 1ch
        push 0
        mov edx, dword ptr [ebp - 64ch]
        push edx
        ; Exact mapped bytes E8 24 E2 2E 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xe2
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 648h]
        mov ecx, dword ptr [ebp - 608h]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [eax], edx
        mov eax, dword ptr [ebp - 648h]
        mov dword ptr [eax + 0ch], 3
        mov ecx, dword ptr [ebp - 648h]
        mov dword ptr [ecx + 10h], 0ffffh
        mov edx, dword ptr [ebp - 648h]
        mov dword ptr [edx + 14h], 0
        mov eax, dword ptr [ebp - 64ch]
        mov ecx, dword ptr [ebp - 608h]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [eax], edx
        mov eax, dword ptr [ebp - 64ch]
        mov dword ptr [eax + 0ch], 1
        mov ecx, dword ptr [ebp - 64ch]
        mov dword ptr [ecx + 10h], 0ffffh
        mov edx, dword ptr [ebp - 64ch]
        mov dword ptr [edx + 14h], 1
        mov eax, dword ptr [ebp - 5f4h]
        add eax, 14ch
        mov dword ptr [ebp - 79ch], eax
        lea ecx, [ebp - 648h]
        push ecx
        mov ecx, dword ptr [ebp - 79ch]
        ; Exact mapped bytes E8 9E 95 F2 FF: call 0x58488220
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x95
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 5f4h]
        add edx, 14ch
        mov dword ptr [ebp - 7a0h], edx
        lea eax, [ebp - 64ch]
        push eax
        mov ecx, dword ptr [ebp - 7a0h]
        ; Exact mapped bytes E8 7A 95 F2 FF: call 0x58488220
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x95
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 7B 04 00 00: jmp 0x5855f127
        __asm _emit 0xe9
        __asm _emit 0x7b
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0f4241h
        ; Exact mapped bytes 0F 85 6E 04 00 00: jne 0x5855f127
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 5f4h]
        mov dword ptr [ecx + 16ch], 0
        mov edx, dword ptr [ebp - 5f4h]
        mov dword ptr [edx + 168h], 1
        mov eax, dword ptr [ebp - 5f4h]
        mov dword ptr [eax + 4], 0f4241h
        mov ecx, dword ptr [ebp - 5f4h]
        mov dword ptr [ecx + 164h], 0
        push 11ch
        push 0
        mov edx, dword ptr [ebp - 5f4h]
        add edx, 30h
        push edx
        ; Exact mapped bytes E8 04 E1 2E 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xe1
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 5f4h]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [eax + 68h], ecx
        mov edx, dword ptr [ebp - 5f4h]
        mov dword ptr [edx + 6ch], 0
        mov eax, dword ptr [ebp - 5f4h]
        mov dword ptr [eax + 50h], 0f4241h
        mov ecx, dword ptr [ebp - 5f4h]
        mov dword ptr [ecx + 3e4h], 0
        mov edx, dword ptr [ebp - 5f4h]
        mov dword ptr [edx + 3e8h], 0
        mov eax, dword ptr [ebp - 5f4h]
        mov dword ptr [eax + 3ech], 0
        mov ecx, dword ptr [ebp - 5f4h]
        add ecx, 158h
        mov dword ptr [ebp - 7a4h], ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov ecx, dword ptr [ebp - 7a4h]
        ; Exact mapped bytes E8 5A B3 F5 FF: call 0x584ba0e0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xb3
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 630h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5855eda2
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 630h]
        add eax, 1
        mov dword ptr [ebp - 630h], eax
        mov ecx, dword ptr [ebp - 630h]
        cmp ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F 8D 76 03 00 00: jge 0x5855f127
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x76
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 8ch
        ; Exact mapped bytes E8 49 22 2D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x22
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 7e4h], eax
        mov edx, dword ptr [ebp - 7e4h]
        mov dword ptr [ebp - 618h], edx
        push 88h
        push 0
        mov eax, dword ptr [ebp - 618h]
        push eax
        ; Exact mapped bytes E8 2D E0 2E 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xe0
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        xor ecx, ecx
        mov edx, dword ptr [ebp - 618h]
        ; Exact mapped bytes 66 89 0A: mov word ptr [edx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0a
        push 588a9474h
        mov eax, dword ptr [ebp - 618h]
        add eax, 2
        push eax
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push 588a9411h
        mov ecx, dword ptr [ebp - 618h]
        add ecx, 42h
        push ecx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 630h]
        add edx, 1
        mov eax, dword ptr [ebp - 618h]
        mov dword ptr [eax + 64h], edx
        mov ecx, dword ptr [ebp - 618h]
        mov dword ptr [ecx + 68h], 0
        mov edx, dword ptr [ebp - 618h]
        mov dword ptr [edx + 6ch], 3
        mov eax, dword ptr [ebp - 618h]
        mov dword ptr [eax + 70h], 2
        mov ecx, dword ptr [ebp - 618h]
        mov dword ptr [ecx + 74h], 1
        mov edx, dword ptr [ebp - 618h]
        mov eax, dword ptr [ebp - 630h]
        mov dword ptr [edx + 78h], eax
        push 0ch
        ; Exact mapped bytes E8 8D 21 2D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x21
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 6cch], eax
        cmp dword ptr [ebp - 6cch], 0
        ; Exact mapped bytes 74 13: je 0x5855ee9c
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 6cch]
        ; Exact mapped bytes E8 3C 86 F2 FF: call 0x584874d0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x86
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 6d0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5855eea6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 6d0h], 0
        mov ecx, dword ptr [ebp - 618h]
        mov edx, dword ptr [ebp - 6d0h]
        mov dword ptr [ecx + 88h], edx
        mov eax, dword ptr [ebp - 618h]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 7ach], ecx
        push 1
        mov ecx, dword ptr [ebp - 7ach]
        ; Exact mapped bytes E8 09 B2 F5 FF: call 0x584ba0e0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xb2
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        push 8ch
        ; Exact mapped bytes E8 22 21 2D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x21
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 7b0h], eax
        mov edx, dword ptr [ebp - 7b0h]
        mov dword ptr [ebp - 61ch], edx
        push 88h
        push 0
        mov eax, dword ptr [ebp - 61ch]
        push eax
        ; Exact mapped bytes E8 06 DF 2E 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xdf
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, 1
        mov edx, dword ptr [ebp - 61ch]
        ; Exact mapped bytes 66 89 0A: mov word ptr [edx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0a
        push 588a9480h
        mov eax, dword ptr [ebp - 61ch]
        add eax, 2
        push eax
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push 588a9412h
        mov ecx, dword ptr [ebp - 61ch]
        add ecx, 42h
        push ecx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 630h]
        add edx, 1
        mov eax, dword ptr [ebp - 61ch]
        mov dword ptr [eax + 64h], edx
        mov ecx, dword ptr [ebp - 61ch]
        mov dword ptr [ecx + 68h], 1
        mov edx, dword ptr [ebp - 61ch]
        mov dword ptr [edx + 6ch], 3
        mov eax, dword ptr [ebp - 61ch]
        mov dword ptr [eax + 70h], 2
        mov ecx, dword ptr [ebp - 61ch]
        mov dword ptr [ecx + 74h], 0
        mov edx, dword ptr [ebp - 61ch]
        mov eax, dword ptr [ebp - 630h]
        mov dword ptr [edx + 78h], eax
        push 0ch
        ; Exact mapped bytes E8 63 20 2D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x20
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 6f8h], eax
        cmp dword ptr [ebp - 6f8h], 0
        ; Exact mapped bytes 74 13: je 0x5855efc6
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 6f8h]
        ; Exact mapped bytes E8 12 85 F2 FF: call 0x584874d0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x85
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 6d8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5855efd0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 6d8h], 0
        mov ecx, dword ptr [ebp - 61ch]
        mov edx, dword ptr [ebp - 6d8h]
        mov dword ptr [ecx + 88h], edx
        mov eax, dword ptr [ebp - 61ch]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 7b4h], ecx
        push 18h
        mov ecx, dword ptr [ebp - 7b4h]
        ; Exact mapped bytes E8 DF B0 F5 FF: call 0x584ba0e0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xb0
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 618h]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 7b8h], eax
        lea ecx, [ebp - 61ch]
        push ecx
        mov ecx, dword ptr [ebp - 7b8h]
        ; Exact mapped bytes E8 FB 91 F2 FF: call 0x58488220
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x91
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 5f4h]
        add edx, 158h
        mov dword ptr [ebp - 7bch], edx
        lea eax, [ebp - 618h]
        push eax
        mov ecx, dword ptr [ebp - 7bch]
        ; Exact mapped bytes E8 D7 91 F2 FF: call 0x58488220
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x91
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 680h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5855f065
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 680h]
        add ecx, 1
        mov dword ptr [ebp - 680h], ecx
        mov edx, dword ptr [ebp - 680h]
        cmp edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F 8D AE 00 00 00: jge 0x5855f122
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1ch
        ; Exact mapped bytes E8 89 1F 2D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x1f
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 7c0h], eax
        mov eax, dword ptr [ebp - 7c0h]
        mov dword ptr [ebp - 640h], eax
        push 1ch
        push 0
        mov ecx, dword ptr [ebp - 640h]
        push ecx
        ; Exact mapped bytes E8 70 DD 2E 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xdd
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 640h]
        mov eax, dword ptr [ebp - 618h]
        mov ecx, dword ptr [eax + 64h]
        mov dword ptr [edx], ecx
        mov edx, dword ptr [ebp - 640h]
        mov dword ptr [edx + 0ch], 3
        mov eax, dword ptr [ebp - 640h]
        mov dword ptr [eax + 10h], 0ffffh
        mov ecx, dword ptr [ebp - 640h]
        mov edx, dword ptr [ebp - 630h]
        mov dword ptr [ecx + 14h], edx
        mov eax, dword ptr [ebp - 680h]
        cmp eax, dword ptr [ebp - 630h]
        ; Exact mapped bytes 75 0D: jne 0x5855f0f8
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 640h]
        mov dword ptr [ecx + 0ch], 1
        mov edx, dword ptr [ebp - 5f4h]
        add edx, 14ch
        mov dword ptr [ebp - 7c4h], edx
        lea eax, [ebp - 640h]
        push eax
        mov ecx, dword ptr [ebp - 7c4h]
        ; Exact mapped bytes E8 04 91 F2 FF: call 0x58488220
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x91
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 34 FF FF FF: jmp 0x5855f056
        __asm _emit 0xe9
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 6C FC FF FF: jmp 0x5855ed93
        __asm _emit 0xe9
        __asm _emit 0x6c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 65ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x5855f142
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 65ch]
        add ecx, 1
        mov dword ptr [ebp - 65ch], ecx
        cmp dword ptr [ebp - 65ch], 8
        ; Exact mapped bytes 7D 3A: jge 0x5855f185
        __asm _emit 0x7d
        __asm _emit 0x3a
        push 48h
        push 0
        imul edx, dword ptr [ebp - 65ch], 48h
        mov eax, dword ptr [ebp - 5f4h]
        lea ecx, [eax + edx + 184h]
        push ecx
        ; Exact mapped bytes E8 A7 DC 2E 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xdc
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 65ch]
        mov eax, dword ptr [ebp - 5f4h]
        mov dword ptr [eax + edx*4 + 3c4h], 0
        ; Exact mapped bytes EB AE: jmp 0x5855f133
        __asm _emit 0xeb
        __asm _emit 0xae
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 5f4h]
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
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 A8 1E 2D 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x1e
        __asm _emit 0x2d
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
