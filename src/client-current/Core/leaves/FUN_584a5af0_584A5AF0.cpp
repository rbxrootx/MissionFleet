// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A5AF0 .. +0x410 bytes.
extern "C" __declspec(naked) void FUN_584a5af0_584A5AF0() {
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
        imul eax, dword ptr [ebp + 10h], 38h
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 54h]
        mov ecx, dword ptr [ecx*4 + 589490f0h]
        imul ecx, dword ptr [edx + eax + 30h]
        mov eax, ecx
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 40h], eax
        imul edx, dword ptr [ebp + 10h], 38h
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 54h]
        mov eax, dword ptr [eax*4 + 5894c930h]
        imul eax, dword ptr [ecx + edx + 30h]
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
        ; Exact mapped bytes 0F 8D 36 03 00 00: jge 0x584a5ef0
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x36
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, dword ptr [ebp + 10h], 38h
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ecx + eax + 40h]
        mov dword ptr [ebp - 4ch], edx
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
        ; Exact mapped bytes 7E 07: jle 0x584a5c08
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
        ; Exact mapped bytes 78 2F: js 0x584a5c5e
        __asm _emit 0x78
        __asm _emit 0x2f
        imul eax, dword ptr [ebp + 10h], 38h
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes 0F BF 54 01 18: movsx edx, word ptr [ecx + eax + 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x18
        cmp edx, 2
        ; Exact mapped bytes 75 1E: jne 0x584a5c5e
        __asm _emit 0x75
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
        ; Exact mapped bytes 7E 6B: jle 0x584a5cd2
        __asm _emit 0x7e
        __asm _emit 0x6b
        mov edx, dword ptr [ebp - 18h]
        add edx, dword ptr [ebp - 0ch]
        cmp edx, 0fa0h
        ; Exact mapped bytes 7E 5D: jle 0x584a5cd2
        __asm _emit 0x7e
        __asm _emit 0x5d
        cmp dword ptr [ebp - 0ch], 0fffff448h
        ; Exact mapped bytes 7F 34: jg 0x584a5cb2
        __asm _emit 0x7f
        __asm _emit 0x34
        imul eax, dword ptr [ebp + 10h], 38h
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes 0F BF 54 01 18: movsx edx, word ptr [ecx + eax + 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x18
        cmp edx, 2
        ; Exact mapped bytes 75 23: jne 0x584a5cb2
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
        ; Exact mapped bytes E9 42 02 00 00: jmp 0x584a5ef2
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 1B: jmp 0x584a5ccd
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
        ; Exact mapped bytes E9 19 02 00 00: jmp 0x584a5eeb
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
        ; Exact mapped bytes 79 47: jns 0x584a5d33
        __asm _emit 0x79
        __asm _emit 0x47
        imul eax, dword ptr [ebp - 18h], 64h
        cdq
        idiv dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 13 B3 3A 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xb3
        __asm _emit 0x3a
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
        ; Exact mapped bytes EB 77: jmp 0x584a5daa
        __asm _emit 0xeb
        __asm _emit 0x77
        mov edx, dword ptr [ebp - 18h]
        add edx, dword ptr [ebp - 0ch]
        cmp edx, 0fa0h
        ; Exact mapped bytes 7E 4E: jle 0x584a5d8f
        __asm _emit 0x7e
        __asm _emit 0x4e
        mov eax, 0fa0h
        sub eax, dword ptr [ebp - 18h]
        imul eax, eax, 64h
        cdq
        idiv dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 B7 B2 3A 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xb2
        __asm _emit 0x3a
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
        ; Exact mapped bytes EB 1B: jmp 0x584a5daa
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
        ; Exact mapped bytes E8 3F B2 3A 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xb2
        __asm _emit 0x3a
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
        ; Exact mapped bytes E8 19 B2 3A 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xb2
        __asm _emit 0x3a
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
        ; Exact mapped bytes 7E 1C: jle 0x584a5e2f
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
        ; Exact mapped bytes EB 1A: jmp 0x584a5e49
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
        ; Exact mapped bytes E8 BB B1 3A 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xb1
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 4
        cdq
        sub eax, edx
        sar eax, 1
        add eax, 1
        mov dword ptr [ebp - 58h], eax
        mov dword ptr [ebp - 50h], 0
        ; Exact mapped bytes EB 09: jmp 0x584a5e72
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 50h]
        add eax, 1
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 50h]
        cmp ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes 7D 35: jge 0x584a5eaf
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
        ; Exact mapped bytes EB BA: jmp 0x584a5e69
        __asm _emit 0xeb
        __asm _emit 0xba
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 7F 1B: jg 0x584a5ed0
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
        ; Exact mapped bytes EB 24: jmp 0x584a5ef2
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes EB 1B: jmp 0x584a5eeb
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
        ; Exact mapped bytes E9 AE FC FF FF: jmp 0x584a5b9e
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        pop edi
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 52 B1 38 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xb1
        __asm _emit 0x38
        __asm _emit 0x00
        mov esp, ebp
    }
}
