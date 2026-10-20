// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58490700 .. +0x565 bytes.
extern "C" __declspec(naked) void FUN_58490700_58490700() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        push esi
        mov dword ptr [ebp - 4], ecx
        imul eax, dword ptr [ebp + 14h], 38h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + eax + 64h]
        ; Exact mapped bytes 0F 8D 40 05 00 00: jge 0x58490c5e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x40
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 8C 36 05 00 00: jl 0x58490c5e
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x36
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [eax]
        sub edx, dword ptr [ecx]
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp + 10h]
        mov eax, dword ptr [eax]
        sub eax, dword ptr [ecx]
        imul edx, eax
        mov ecx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ecx + 4]
        sub ecx, dword ptr [eax + 4]
        mov eax, dword ptr [ebp + 0ch]
        mov esi, dword ptr [ebp + 10h]
        mov eax, dword ptr [eax + 4]
        sub eax, dword ptr [esi + 4]
        imul ecx, eax
        add edx, ecx
        ; Exact mapped bytes F2 0F 2A C2: cvtsi2sd xmm0, edx
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc2
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 B3 08 3C 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x08
        __asm _emit 0x3c
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 1B 0B 3A 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x0b
        __asm _emit 0x3a
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        imul ecx, dword ptr [ebp + 14h], 38h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + ecx + 64h]
        ; Exact mapped bytes 7C 11: jl 0x58490799
        __asm _emit 0x7c
        __asm _emit 0x11
        imul ecx, dword ptr [ebp + 14h], 38h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 64h]
        sub eax, 1
        mov dword ptr [ebp + 8], eax
        imul ecx, dword ptr [ebp + 14h], 38h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 60h]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 30h], edx
        imul eax, dword ptr [ebp + 14h], 38h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 60h]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx + eax*4]
        sub ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 46 08 3C 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x08
        __asm _emit 0x3c
        __asm _emit 0x00
        add esp, 4
        cmp eax, 64h
        ; Exact mapped bytes 0F 8E E8 00 00 00: jle 0x584908bb
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp + 14h], 38h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 60h]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ecx + edx*4], eax
        mov ecx, dword ptr [ebp + 8]
        sub ecx, 7
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 7
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7D 07: jge 0x58490806
        __asm _emit 0x7d
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        imul eax, dword ptr [ebp + 14h], 38h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 1ch]
        cmp edx, dword ptr [ecx + eax + 64h]
        ; Exact mapped bytes 7E 11: jle 0x58490827
        __asm _emit 0x7e
        __asm _emit 0x11
        imul eax, dword ptr [ebp + 14h], 38h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 64h]
        sub edx, 1
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 09: jmp 0x58490838
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        cmp edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 7F 76: jg 0x584908b6
        __asm _emit 0x7f
        __asm _emit 0x76
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 69: je 0x584908b1
        __asm _emit 0x74
        __asm _emit 0x69
        imul ecx, dword ptr [ebp + 14h], 38h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 60h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax + ecx*4]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 76 53: jbe 0x584908b1
        __asm _emit 0x76
        __asm _emit 0x53
        imul eax, dword ptr [ebp + 14h], 38h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 60h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + eax*4]
        mov edx, dword ptr [ebp - 8]
        lea eax, [ecx + edx*2]
        imul ecx, dword ptr [ebp + 14h], 38h
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 60h]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + edx*4], eax
        imul eax, dword ptr [ebp + 14h], 38h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 60h]
        mov eax, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + eax*4]
        xor edx, edx
        mov ecx, 3
        div ecx
        imul edx, dword ptr [ebp + 14h], 38h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + edx + 60h]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [edx + ecx*4], eax
        ; Exact mapped bytes E9 79 FF FF FF: jmp 0x5849082f
        __asm _emit 0xe9
        __asm _emit 0x79
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 96 03 00 00: jmp 0x58490c51
        __asm _emit 0xe9
        __asm _emit 0x96
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp + 14h], 38h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 60h]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ecx + edx*4]
        sub eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 38 07 3C 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x07
        __asm _emit 0x3c
        __asm _emit 0x00
        add esp, 4
        mov ecx, eax
        imul edx, dword ptr [ebp + 14h], 38h
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + edx + 60h]
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + eax*4]
        xor edx, edx
        mov esi, 0ah
        div esi
        cmp ecx, eax
        ; Exact mapped bytes 0F 86 32 01 00 00: jbe 0x58490a2e
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, dword ptr [ebp + 14h], 38h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 60h]
        imul ecx, dword ptr [ebp + 14h], 38h
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 60h]
        mov edx, dword ptr [ebp + 8]
        mov esi, dword ptr [ebp + 8]
        mov eax, dword ptr [eax + esi*4]
        mov dword ptr [ecx + edx*4], eax
        imul ecx, dword ptr [ebp + 14h], 38h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 60h]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [eax + ecx*4]
        add edx, dword ptr [ebp - 8]
        imul eax, dword ptr [ebp + 14h], 38h
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + eax + 60h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + ecx*4], edx
        imul edx, dword ptr [ebp + 14h], 38h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 60h]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ecx + edx*4]
        shr eax, 1
        imul ecx, dword ptr [ebp + 14h], 38h
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 60h]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + edx*4], eax
        mov eax, dword ptr [ebp + 8]
        sub eax, 7
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 7
        mov dword ptr [ebp - 24h], ecx
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 7D 07: jge 0x58490986
        __asm _emit 0x7d
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        imul edx, dword ptr [ebp + 14h], 38h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 24h]
        cmp ecx, dword ptr [eax + edx + 64h]
        ; Exact mapped bytes 7E 11: jle 0x584909a7
        __asm _emit 0x7e
        __asm _emit 0x11
        imul edx, dword ptr [ebp + 14h], 38h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 64h]
        sub ecx, 1
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes EB 09: jmp 0x584909b8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        cmp ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 7F 69: jg 0x58490a29
        __asm _emit 0x7f
        __asm _emit 0x69
        mov edx, dword ptr [ebp - 14h]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 5F: je 0x58490a27
        __asm _emit 0x74
        __asm _emit 0x5f
        imul eax, dword ptr [ebp + 14h], 38h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 60h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + eax*4]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 76 49: jbe 0x58490a27
        __asm _emit 0x76
        __asm _emit 0x49
        imul edx, dword ptr [ebp + 14h], 38h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 60h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ecx + edx*4]
        add eax, dword ptr [ebp - 8]
        imul ecx, dword ptr [ebp + 14h], 38h
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 60h]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + edx*4], eax
        imul eax, dword ptr [ebp + 14h], 38h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 60h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + eax*4]
        shr ecx, 1
        imul edx, dword ptr [ebp + 14h], 38h
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + edx + 60h]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx + eax*4], ecx
        ; Exact mapped bytes EB 86: jmp 0x584909af
        __asm _emit 0xeb
        __asm _emit 0x86
        ; Exact mapped bytes E9 23 02 00 00: jmp 0x58490c51
        __asm _emit 0xe9
        __asm _emit 0x23
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, dword ptr [ebp + 14h], 38h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 60h]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [eax + ecx*4]
        sub edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 C5 05 3C 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x00
        add esp, 4
        mov ecx, eax
        imul edx, dword ptr [ebp + 14h], 38h
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + edx + 60h]
        mov eax, dword ptr [ebp + 8]
        imul eax, dword ptr [edx + eax*4], 5
        xor edx, edx
        mov esi, 64h
        div esi
        cmp ecx, eax
        ; Exact mapped bytes 0F 86 6E 01 00 00: jbe 0x58490bde
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x6e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, dword ptr [ebp + 14h], 38h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 60h]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [eax + ecx*4]
        shl edx, 1
        imul eax, dword ptr [ebp + 14h], 38h
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + eax + 60h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + ecx*4], edx
        imul edx, dword ptr [ebp + 14h], 38h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 60h]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ecx + edx*4]
        add eax, dword ptr [ebp - 8]
        imul ecx, dword ptr [ebp + 14h], 38h
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 60h]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + edx*4], eax
        imul eax, dword ptr [ebp + 14h], 38h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 60h]
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + eax*4]
        xor edx, edx
        mov ecx, 3
        div ecx
        imul edx, dword ptr [ebp + 14h], 38h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + edx + 60h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [edx + ecx*4], eax
        mov edx, dword ptr [ebp + 8]
        sub edx, 4
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp + 8]
        add eax, 4
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 7D 07: jge 0x58490b03
        __asm _emit 0x7d
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        imul ecx, dword ptr [ebp + 14h], 38h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 2ch]
        cmp eax, dword ptr [edx + ecx + 64h]
        ; Exact mapped bytes 7E 11: jle 0x58490b24
        __asm _emit 0x7e
        __asm _emit 0x11
        imul ecx, dword ptr [ebp + 14h], 38h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 64h]
        sub eax, 1
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB 09: jmp 0x58490b35
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F 8F 9B 00 00 00: jg 0x58490bdc
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F 84 8A 00 00 00: je 0x58490bd7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp + 14h], 38h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 60h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ecx + edx*4]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 76 74: jbe 0x58490bd7
        __asm _emit 0x76
        __asm _emit 0x74
        imul ecx, dword ptr [ebp + 14h], 38h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 60h]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax + ecx*4]
        shl edx, 1
        imul eax, dword ptr [ebp + 14h], 38h
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + eax + 60h]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + ecx*4], edx
        imul edx, dword ptr [ebp + 14h], 38h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 60h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ecx + edx*4]
        add eax, dword ptr [ebp - 8]
        imul ecx, dword ptr [ebp + 14h], 38h
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 60h]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + edx*4], eax
        imul eax, dword ptr [ebp + 14h], 38h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 60h]
        mov eax, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + eax*4]
        xor edx, edx
        mov ecx, 3
        div ecx
        imul edx, dword ptr [ebp + 14h], 38h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + edx + 60h]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + ecx*4], eax
        ; Exact mapped bytes E9 50 FF FF FF: jmp 0x58490b2c
        __asm _emit 0xe9
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 73: jmp 0x58490c51
        __asm _emit 0xeb
        __asm _emit 0x73
        imul edx, dword ptr [ebp + 14h], 38h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 60h]
        mov edx, dword ptr [ebp + 8]
        imul eax, dword ptr [ecx + edx*4], 0ah
        imul ecx, dword ptr [ebp + 14h], 38h
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 60h]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + edx*4], eax
        imul eax, dword ptr [ebp + 14h], 38h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 60h]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx + eax*4]
        add ecx, dword ptr [ebp - 8]
        imul edx, dword ptr [ebp + 14h], 38h
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + edx + 60h]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + eax*4], ecx
        imul ecx, dword ptr [ebp + 14h], 38h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 60h]
        mov ecx, dword ptr [ebp + 8]
        mov eax, dword ptr [eax + ecx*4]
        xor edx, edx
        mov ecx, 0bh
        div ecx
        imul edx, dword ptr [ebp + 14h], 38h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + edx + 60h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [edx + ecx*4], eax
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 43 84 FF FF: call 0x584890a0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
