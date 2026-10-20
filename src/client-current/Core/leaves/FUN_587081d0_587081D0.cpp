// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587081D0 .. +0x24B bytes.
extern "C" __declspec(naked) void FUN_587081d0_587081D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 0ch], 0
        mov eax, dword ptr [ebp - 4]
        add eax, 0e0h
        push eax
        ; Exact mapped bytes 8B 0D 98 75 94 58: mov ecx, dword ptr [0x58947598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 3C 6D E6 FF: call 0x5856ef30
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x6d
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58708207
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 3
        ; Exact mapped bytes 0F 8D 21 01 00 00: jge 0x58708332
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 128h]
        mov dword ptr [ebp - 10h], ecx
        imul edx, dword ptr [ebp - 8], 18h
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 0e0h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 68 DE D7 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xde
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        imul edx, dword ptr [ebp - 8], 18h
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 0e0h]
        mov edx, 1
        imul eax, edx, 0
        ; Exact mapped bytes 0F BE 0C 01: movsx ecx, byte ptr [ecx + eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x0c
        __asm _emit 0x01
        test ecx, ecx
        ; Exact mapped bytes 0F 84 D2 00 00 00: je 0x5870832d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 9ch]
        mov dword ptr [ebp - 14h], ecx
        imul edx, dword ptr [ebp - 0ch], 14h
        mov eax, 2dah
        sub eax, edx
        push eax
        push 176h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 9C D3 0A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xd3
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0a8h]
        mov dword ptr [ebp - 18h], eax
        imul ecx, dword ptr [ebp - 0ch], 14h
        mov edx, 2dah
        sub edx, ecx
        push edx
        push 176h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 73 D3 0A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xd3
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 128h]
        mov dword ptr [ebp - 1ch], edx
        imul eax, dword ptr [ebp - 0ch], 14h
        mov ecx, 2dfh
        sub ecx, eax
        push ecx
        push 1a4h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 4A D3 0A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xd3
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 9ch]
        mov dword ptr [ebp - 20h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 A0 DC D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xdc
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0a8h]
        mov dword ptr [ebp - 24h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 86 DC D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xdc
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 128h]
        mov dword ptr [ebp - 28h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 6C DC D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xdc
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes E9 CC FE FF FF: jmp 0x587081fe
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b8h]
        mov dword ptr [ebp - 2ch], ecx
        imul edx, dword ptr [ebp - 0ch], 14h
        mov eax, 2dah
        sub eax, edx
        sub eax, 3
        push eax
        push 176h
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 C6 D2 0A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xd2
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0bch]
        mov dword ptr [ebp - 30h], edx
        imul eax, dword ptr [ebp - 0ch], 14h
        mov ecx, 2dah
        sub ecx, eax
        sub ecx, 3
        push ecx
        push 176h
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 9E D2 0A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xd2
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c0h]
        mov dword ptr [ebp - 34h], eax
        push 2eeh
        push 176h
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 80 D2 0A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xd2
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c4h]
        mov dword ptr [ebp - 38h], edx
        push 2eeh
        push 176h
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 62 D2 0A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xd2
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b8h]
        mov dword ptr [ebp - 3ch], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 BC DB D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xdb
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0bch]
        mov dword ptr [ebp - 40h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 A6 DB D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xdb
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c0h]
        mov dword ptr [ebp - 44h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 90 DB D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xdb
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c4h]
        mov dword ptr [ebp - 48h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 7A DB D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xdb
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
