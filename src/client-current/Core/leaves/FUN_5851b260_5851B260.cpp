// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851B260 .. +0x3FD bytes.
extern "C" __declspec(naked) void FUN_5851b260_5851B260() {
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
        push esi
        push edi
        mov dword ptr [ebp - 54h], ecx
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 18h], 0c8h
        mov eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [eax + 68h]
        movzx edx, word ptr [ecx + 0a8h]
        mov eax, dword ptr [ebp + 8]
        mov ecx, edx
        imul ecx, dword ptr [eax*4 + 589490f0h]
        mov eax, ecx
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 40h], eax
        mov edx, dword ptr [ebp - 54h]
        mov eax, dword ptr [edx + 68h]
        movzx ecx, word ptr [eax + 0a8h]
        mov edx, dword ptr [ebp + 8]
        mov eax, ecx
        imul eax, dword ptr [edx*4 + 5894c930h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov dword ptr [ebp - 3ch], eax
        mov edx, 4
        imul eax, edx, 0
        mov eax, dword ptr [eax + 5894c930h]
        imul eax, dword ptr [ebp - 3ch]
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 48h], eax
        mov dword ptr [ebp - 44h], 0
        mov edx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 14h], edx
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp - 40h]
        shl eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 5ch], 0
        mov ecx, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 74h], ecx
        mov edx, dword ptr [ebp - 5ch]
        add edx, 1
        mov dword ptr [ebp - 5ch], edx
        cmp dword ptr [ebp - 74h], 3e8h
        ; Exact mapped bytes 0F 8D 1B 03 00 00: jge 0x5851b64d
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x1b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [eax + 84h]
        mov dword ptr [ebp - 4ch], ecx
        mov ecx, 2710h
        sub ecx, dword ptr [ebp - 4ch]
        mov eax, dword ptr [ebp - 18h]
        cdq
        mov esi, 190h
        idiv esi
        imul eax, dword ptr [ebp - 18h]
        cdq
        mov esi, 190h
        idiv esi
        imul eax, ecx
        cdq
        mov ecx, 77a10h
        idiv ecx
        add eax, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 4ch], eax
        cmp dword ptr [ebp - 4ch], 2710h
        ; Exact mapped bytes 7E 07: jle 0x5851b37e
        __asm _emit 0x7e
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 2710h
        mov eax, dword ptr [ebp - 14h]
        imul eax, dword ptr [ebp - 4ch]
        cdq
        mov ecx, 2710h
        idiv ecx
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], 0
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 03 15 68 77 94 58: add edx, dword ptr [0x58947768]
        __asm _emit 0x03
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes 78 1E: js 0x5851b3c3
        __asm _emit 0x78
        __asm _emit 0x1e
        mov eax, 2710h
        sub eax, dword ptr [ebp - 4ch]
        mov ecx, dword ptr [ebp - 4ch]
        sub ecx, eax
        mov eax, ecx
        imul eax, dword ptr [ebp - 0ch]
        cdq
        mov ecx, 2710h
        idiv ecx
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 18h], 0fa0h
        ; Exact mapped bytes 7E 63: jle 0x5851b42f
        __asm _emit 0x7e
        __asm _emit 0x63
        mov edx, dword ptr [ebp - 18h]
        add edx, dword ptr [ebp - 0ch]
        cmp edx, 0fa0h
        ; Exact mapped bytes 7E 55: jle 0x5851b42f
        __asm _emit 0x7e
        __asm _emit 0x55
        cmp dword ptr [ebp - 0ch], 0fffff448h
        ; Exact mapped bytes 7F 2C: jg 0x5851b40f
        __asm _emit 0x7f
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 54h]
        cmp dword ptr [eax + 74h], 1
        ; Exact mapped bytes 75 23: jne 0x5851b40f
        __asm _emit 0x75
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 20h]
        add ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 6B 05 64 77 94 58 64: imul eax, dword ptr [0x58947764], 0x64
        __asm _emit 0x6b
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x64
        cdq
        mov esi, 64h
        idiv esi
        mov esi, eax
        mov eax, ecx
        cdq
        idiv esi
        ; Exact mapped bytes E9 42 02 00 00: jmp 0x5851b64f
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 1B: jmp 0x5851b42a
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 20h]
        add edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 1ch]
        add eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 18h]
        add ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes E9 19 02 00 00: jmp 0x5851b648
        __asm _emit 0xe9
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 18h]
        add edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 79 47: jns 0x5851b490
        __asm _emit 0x79
        __asm _emit 0x47
        imul eax, dword ptr [ebp - 18h], 64h
        cdq
        idiv dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 B6 5B 33 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x5b
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        mov eax, dword ptr [ebp - 14h]
        imul eax, dword ptr [ebp - 68h]
        cdq
        mov ecx, 64h
        idiv ecx
        add eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 10h]
        imul eax, dword ptr [ebp - 68h]
        cdq
        mov ecx, 64h
        idiv ecx
        add eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 77: jmp 0x5851b507
        __asm _emit 0xeb
        __asm _emit 0x77
        mov edx, dword ptr [ebp - 18h]
        add edx, dword ptr [ebp - 0ch]
        cmp edx, 0fa0h
        ; Exact mapped bytes 7E 4E: jle 0x5851b4ec
        __asm _emit 0x7e
        __asm _emit 0x4e
        mov eax, 0fa0h
        sub eax, dword ptr [ebp - 18h]
        imul eax, eax, 64h
        cdq
        idiv dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 5A 5B 33 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x5b
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 6ch], eax
        mov eax, dword ptr [ebp - 14h]
        imul eax, dword ptr [ebp - 6ch]
        cdq
        mov ecx, 64h
        idiv ecx
        add eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 10h]
        imul eax, dword ptr [ebp - 6ch]
        cdq
        mov ecx, 64h
        idiv ecx
        add eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 24h], 0fa0h
        ; Exact mapped bytes EB 1B: jmp 0x5851b507
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 20h]
        add edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 1ch]
        add eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 18h]
        add ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 2ch]
        sub edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 60h], edx
        mov eax, dword ptr [ebp - 28h]
        sub eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 64h], eax
        mov ecx, dword ptr [ebp - 24h]
        sub ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 78h], ecx
        mov edx, dword ptr [ebp - 60h]
        push edx
        ; Exact mapped bytes E8 E2 5A 33 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x5a
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov ecx, eax
        ; Exact mapped bytes 6B 05 64 77 94 58 64: imul eax, dword ptr [0x58947764], 0x64
        __asm _emit 0x6b
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x64
        cdq
        mov esi, 64h
        idiv esi
        mov esi, eax
        mov eax, ecx
        cdq
        idiv esi
        mov esi, eax
        mov edx, dword ptr [ebp - 64h]
        push edx
        ; Exact mapped bytes E8 BC 5A 33 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x5a
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov ecx, eax
        ; Exact mapped bytes 6B 05 64 77 94 58 75: imul eax, dword ptr [0x58947764], 0x75
        __asm _emit 0x6b
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x75
        cdq
        mov edi, 64h
        idiv edi
        mov edi, eax
        mov eax, ecx
        cdq
        idiv edi
        cmp esi, eax
        ; Exact mapped bytes 7E 1C: jle 0x5851b58c
        __asm _emit 0x7e
        __asm _emit 0x1c
        ; Exact mapped bytes 6B 05 64 77 94 58 64: imul eax, dword ptr [0x58947764], 0x64
        __asm _emit 0x6b
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x64
        cdq
        mov ecx, 64h
        idiv ecx
        mov ecx, eax
        mov eax, dword ptr [ebp - 60h]
        cdq
        idiv ecx
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes EB 1A: jmp 0x5851b5a6
        __asm _emit 0xeb
        __asm _emit 0x1a
        ; Exact mapped bytes 6B 05 64 77 94 58 75: imul eax, dword ptr [0x58947764], 0x75
        __asm _emit 0x6b
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x75
        cdq
        mov ecx, 64h
        idiv ecx
        mov ecx, eax
        mov eax, dword ptr [ebp - 64h]
        cdq
        idiv ecx
        mov dword ptr [ebp - 70h], eax
        mov edx, dword ptr [ebp - 70h]
        push edx
        ; Exact mapped bytes E8 5E 5A 33 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x5a
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        cdq
        sub eax, edx
        sar eax, 1
        add eax, 1
        mov dword ptr [ebp - 58h], eax
        mov dword ptr [ebp - 50h], 0
        ; Exact mapped bytes EB 09: jmp 0x5851b5cf
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 50h]
        add eax, 1
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 50h]
        cmp ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes 7D 35: jge 0x5851b60c
        __asm _emit 0x7d
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 60h]
        imul eax, dword ptr [ebp - 50h]
        cdq
        idiv dword ptr [ebp - 58h]
        add eax, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 64h]
        imul eax, dword ptr [ebp - 50h]
        cdq
        idiv dword ptr [ebp - 58h]
        add eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 78h]
        imul eax, dword ptr [ebp - 50h]
        cdq
        idiv dword ptr [ebp - 58h]
        add eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB BA: jmp 0x5851b5c6
        __asm _emit 0xeb
        __asm _emit 0xba
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 7F 1B: jg 0x5851b62d
        __asm _emit 0x7f
        __asm _emit 0x1b
        ; Exact mapped bytes 6B 05 64 77 94 58 64: imul eax, dword ptr [0x58947764], 0x64
        __asm _emit 0x6b
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x64
        cdq
        mov ecx, 64h
        idiv ecx
        mov ecx, eax
        mov eax, dword ptr [ebp - 2ch]
        cdq
        idiv ecx
        ; Exact mapped bytes EB 24: jmp 0x5851b64f
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes EB 1B: jmp 0x5851b648
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 20h]
        add edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 1ch]
        add eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 18h]
        add ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes E9 C9 FC FF FF: jmp 0x5851b316
        __asm _emit 0xe9
        __asm _emit 0xc9
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        pop edi
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 F5 59 31 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x59
        __asm _emit 0x31
        __asm _emit 0x00
        mov esp, ebp
    }
}
