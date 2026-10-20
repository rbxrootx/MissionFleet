// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586DE990 .. +0x1D7 bytes.
extern "C" __declspec(naked) void FUN_586de990_586DE990() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0ach], 8
        ; Exact mapped bytes 0F 84 B8 01 00 00: je 0x586deb62
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0ach], 9
        ; Exact mapped bytes 0F 84 A8 01 00 00: je 0x586deb62
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 4cch]
        ; Exact mapped bytes E8 28 AD E4 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xad
        __asm _emit 0xe4
        __asm _emit 0xff
        mov esi, eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4cch]
        ; Exact mapped bytes E8 98 22 0E 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x22
        __asm _emit 0x0e
        __asm _emit 0x00
        sub esi, eax
        cmp esi, 6
        ; Exact mapped bytes 7D 25: jge 0x586dea04
        __asm _emit 0x7d
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 4cch]
        ; Exact mapped bytes E8 03 AD E4 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xad
        __asm _emit 0xe4
        __asm _emit 0xff
        mov esi, eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 4cch]
        ; Exact mapped bytes E8 73 22 0E 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x22
        __asm _emit 0x0e
        __asm _emit 0x00
        sub esi, eax
        mov dword ptr [ebp - 0ch], esi
        ; Exact mapped bytes EB 07: jmp 0x586dea0b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 6
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586dea23
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F 8D 05 01 00 00: jge 0x586deb34
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4cch]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 4cch]
        ; Exact mapped bytes E8 27 22 0E 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x22
        __asm _emit 0x0e
        __asm _emit 0x00
        add eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 05 21 0E 00: call 0x587c0b60
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x21
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], -1
        ; Exact mapped bytes 0F 84 AC 00 00 00: je 0x586deb14
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 4d0h]
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4cch]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4cch]
        ; Exact mapped bytes E8 DE 21 0E 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x21
        __asm _emit 0x0e
        __asm _emit 0x00
        add eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 BC 20 0E 00: call 0x587c0b60
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x20
        __asm _emit 0x0e
        __asm _emit 0x00
        add eax, 68eh
        mov dword ptr [ebp - 28h], eax
        mov edx, dword ptr [ebp - 28h]
        push edx
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 65 60 DA FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x60
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 66 74 DA FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x74
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 15ch], 120000h
        ; Exact mapped bytes 75 1D: jne 0x586deaf7
        __asm _emit 0x75
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 4d0h]
        mov dword ptr [ebp - 34h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 9C 74 DA FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x74
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1B: jmp 0x586deb12
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 4d0h]
        mov dword ptr [ebp - 38h], ecx
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 7F 74 DA FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x74
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1B: jmp 0x586deb2f
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 4d0h]
        mov dword ptr [ebp - 3ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 02 74 DA FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x74
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 E6 FE FF FF: jmp 0x586dea1a
        __asm _emit 0xe9
        __asm _emit 0xe6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 09: jmp 0x586deb3f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 7D 1D: jge 0x586deb62
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 4d0h]
        mov dword ptr [ebp - 40h], edx
        push 0
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 31 74 DA FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x74
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x586deb36
        __asm _emit 0xeb
        __asm _emit 0xd4
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
