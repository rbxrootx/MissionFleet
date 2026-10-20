// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586F7A10 .. +0x5FC bytes.
extern "C" __declspec(naked) void FUN_586f7a10_586F7A10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5E 0A 00 00: call 0x586f8480
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 80h
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 8], 588b3590h
        lea eax, [ebp - 0ch]
        push eax
        push 0f003fh
        push 0
        mov ecx, dword ptr [ebp - 8]
        push ecx
        push 80000002h
        ; Exact mapped bytes FF 15 20 40 89 58: call dword ptr [0x58894020]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x586f7a7d
        __asm _emit 0x74
        __asm _emit 0x28
        lea edx, [ebp - 20h]
        push edx
        lea eax, [ebp - 0ch]
        push eax
        push 0
        push 0f003fh
        push 0
        push 588b3276h
        push 0
        mov ecx, dword ptr [ebp - 8]
        push ecx
        push 80000002h
        ; Exact mapped bytes FF 15 40 40 89 58: call dword ptr [0x58894040]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 150h]
        push edx
        push 588b35c8h
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AB 08 00 00: call 0x586f8350
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 150h]
        push ecx
        push 588b35d8h
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 83 08 00 00: call 0x586f8350
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 150h]
        push eax
        push 588b35ech
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5C 08 00 00: call 0x586f8350
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 150h]
        push eax
        push 588b35fch
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 34 08 00 00: call 0x586f8350
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        shl eax, 2
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 150h]
        push edx
        push 588b3610h
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0C 08 00 00: call 0x586f8350
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 5
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 150h]
        push edx
        push 588b3620h
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E4 07 00 00: call 0x586f8350
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 6
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 150h]
        push edx
        push 588b3634h
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BC 07 00 00: call 0x586f8350
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 7
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 150h]
        push edx
        push 588b364ch
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 94 07 00 00: call 0x586f8350
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        shl edx, 3
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 150h]
        push ecx
        push 588b3658h
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6C 07 00 00: call 0x586f8350
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 9
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 150h]
        push ecx
        push 588b3660h
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 44 07 00 00: call 0x586f8350
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0ah
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 150h]
        push ecx
        push 588b3674h
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1C 07 00 00: call 0x586f8350
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0bh
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 150h]
        push ecx
        push 588b3688h
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F4 06 00 00: call 0x586f8350
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0ch
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 150h]
        push ecx
        push 588b369ch
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CC 06 00 00: call 0x586f8350
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0dh
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 150h]
        push ecx
        push 588b36ach
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A4 06 00 00: call 0x586f8350
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0eh
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 150h]
        push ecx
        push 588b36bch
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7C 06 00 00: call 0x586f8350
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0fh
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 150h]
        push ecx
        push 588b36c8h
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 54 06 00 00: call 0x586f8350
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 4
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 150h]
        push eax
        push 588b36d8h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2C 06 00 00: call 0x586f8350
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 11h
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 150h]
        push eax
        push 588b36e8h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 04 06 00 00: call 0x586f8350
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 12h
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 150h]
        push eax
        push 588b36fch
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DC 05 00 00: call 0x586f8350
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 13h
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 150h]
        push eax
        push 588b3710h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B4 05 00 00: call 0x586f8350
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 14h
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 150h]
        push eax
        push 588b3720h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8C 05 00 00: call 0x586f8350
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 15h
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 150h]
        push eax
        push 588b3730h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 64 05 00 00: call 0x586f8350
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 16h
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 150h]
        push eax
        push 588b3740h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3C 05 00 00: call 0x586f8350
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 17h
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 150h]
        push eax
        push 588b3750h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 14 05 00 00: call 0x586f8350
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 18h
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 150h]
        push eax
        push 588b3758h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EC 04 00 00: call 0x586f8350
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 19h
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 150h]
        push eax
        push 588b3760h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C4 04 00 00: call 0x586f8350
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 1ah
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 150h]
        push eax
        push 588b3770h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9C 04 00 00: call 0x586f8350
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 1bh
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 150h]
        push eax
        push 588b3784h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 74 04 00 00: call 0x586f8350
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 1dh
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 150h]
        push eax
        push 588b3790h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4C 04 00 00: call 0x586f8350
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 1eh
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 150h]
        push eax
        push 588b379ch
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 24 04 00 00: call 0x586f8350
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 1ch
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 150h]
        push eax
        push 588b37b0h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FC 03 00 00: call 0x586f8350
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 64 40 89 58: call dword ptr [0x58894064]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x586f7f71
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 1fh
        ; Exact mapped bytes 0F 8D 8C 00 00 00: jge 0x586f8007
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 150h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4F F7 FF FF: call 0x586f76e0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 61: jne 0x586f7ff7
        __asm _emit 0x75
        __asm _emit 0x61
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x586f7faf
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 1fh
        ; Exact mapped bytes 7D 2F: jge 0x586f7fe4
        __asm _emit 0x7d
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 74 25: je 0x586f7fe2
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 14h]
        mov esi, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx*4 + 150h]
        cmp ecx, dword ptr [esi + eax*4 + 150h]
        ; Exact mapped bytes 75 09: jne 0x586f7fe2
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 1
        ; Exact mapped bytes EB 02: jmp 0x586f7fe4
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB C2: jmp 0x586f7fa6
        __asm _emit 0xeb
        __asm _emit 0xc2
        cmp dword ptr [ebp - 18h], 1
        ; Exact mapped bytes 75 0B: jne 0x586f7ff5
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8E 04 00 00: call 0x586f8480
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 12: jmp 0x586f8007
        __asm _emit 0xeb
        __asm _emit 0x12
        ; Exact mapped bytes EB 0B: jmp 0x586f8002
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 81 04 00 00: call 0x586f8480
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 05: jmp 0x586f8007
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 61 FF FF FF: jmp 0x586f7f68
        __asm _emit 0xe9
        __asm _emit 0x61
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
