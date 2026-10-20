// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5871EA40 .. +0x29D bytes.
extern "C" __declspec(naked) void FUN_5871ea40_5871EA40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 4ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a0h]
        mov dword ptr [ebp - 14h], ecx
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 31 C7 09 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xc7
        __asm _emit 0x09
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a4h]
        mov dword ptr [ebp - 18h], eax
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 1B C7 09 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xc7
        __asm _emit 0x09
        __asm _emit 0x00
        xor ecx, ecx
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8A C0 01 00 00: mov word ptr [edx + 0x1c0], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 98h]
        mov dword ptr [ebp - 1ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 F9 74 D6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x74
        __asm _emit 0xd6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 9ch]
        mov dword ptr [ebp - 20h], eax
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 E3 74 D6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x74
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5871eac0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 3
        ; Exact mapped bytes 7D 15: jge 0x5871eadb
        __asm _emit 0x7d
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0f0h]
        ; Exact mapped bytes E8 E8 1D 0A 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB DC: jmp 0x5871eab7
        __asm _emit 0xeb
        __asm _emit 0xdc
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5871eaed
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 17eh]
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 7D 38: jge 0x5871eb34
        __asm _emit 0x7d
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 188h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 17: je 0x5871eb2b
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 24h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 DC: call dword ptr [ebp - 0x24]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xdc
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x5871eb32
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB B0: jmp 0x5871eae4
        __asm _emit 0xeb
        __asm _emit 0xb0
        xor edx, edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 90 7E 01 00 00: mov word ptr [eax + 0x17e], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5871eb52
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 180h]
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 7D 38: jge 0x5871eb99
        __asm _emit 0x7d
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 17: je 0x5871eb90
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 2ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 55 D4: call dword ptr [ebp - 0x2c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd4
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x5871eb97
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        ; Exact mapped bytes EB B0: jmp 0x5871eb49
        __asm _emit 0xeb
        __asm _emit 0xb0
        xor edx, edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 90 80 01 00 00: mov word ptr [eax + 0x180], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 188h]
        mov dword ptr [ebp - 34h], edx
        push 4
        mov eax, dword ptr [ebp - 34h]
        push eax
        ; Exact mapped bytes E8 78 24 11 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x24
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 18ch]
        mov dword ptr [ebp - 38h], edx
        push 4
        mov eax, dword ptr [ebp - 38h]
        push eax
        ; Exact mapped bytes E8 5E 24 11 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x24
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 188h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 18ch], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 148h]
        mov dword ptr [ebp - 3ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 D7 72 D6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x72
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 19ch]
        cmp eax, 7
        ; Exact mapped bytes 75 68: jne 0x5871ec81
        __asm _emit 0x75
        __asm _emit 0x68
        mov ecx, 4
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8A 9C 01 00 00: mov word ptr [edx + 0x19c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c0h]
        mov dword ptr [ebp - 40h], ecx
        push 0
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 A2 72 D6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x72
        __asm _emit 0xd6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c0h]
        mov dword ptr [ebp - 44h], eax
        push 0
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 EC 0B D8 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x0b
        __asm _emit 0xd8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0bch]
        mov dword ptr [ebp - 48h], edx
        push 1
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 76 72 D6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x72
        __asm _emit 0xd6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0bch]
        mov dword ptr [ebp - 4ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 C0 0B D8 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x0b
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 170h]
        ; Exact mapped bytes E8 D1 A5 D9 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xa5
        __asm _emit 0xd9
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 2
        ; Exact mapped bytes 74 16: je 0x5871ecad
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 170h]
        ; Exact mapped bytes E8 BB A5 D9 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xa5
        __asm _emit 0xd9
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 1
        ; Exact mapped bytes 75 2C: jne 0x5871ecd9
        __asm _emit 0x75
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 170h]
        ; Exact mapped bytes E8 25 ED FF FF: call 0x5871d9e0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1A: je 0x5871ecd9
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 170h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 170h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
