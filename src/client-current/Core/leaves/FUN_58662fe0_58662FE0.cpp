// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58662FE0 .. +0x137 bytes.
extern "C" __declspec(naked) void FUN_58662fe0_58662FE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 24h], ecx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 0E: jne 0x58663007
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 EF E0 FF FF: call 0x586610f0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 DD 00 00 00: jmp 0x586630e4
        __asm _emit 0xe9
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB 09: jmp 0x58663020
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 28h]
        add eax, 1
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 1000h
        ; Exact mapped bytes 0F 8D 9F 00 00 00: jge 0x586630cc
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 18h
        push 0
        lea ecx, [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 D6 9D 1E 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x9d
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 2ch], 0
        mov edx, 1
        test edx, edx
        ; Exact mapped bytes 74 42: je 0x5866308f
        __asm _emit 0x74
        __asm _emit 0x42
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 3bh
        ; Exact mapped bytes 75 04: jne 0x5866305f
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes EB 32: jmp 0x5866308f
        __asm _emit 0xeb
        __asm _emit 0x32
        ; Exact mapped bytes EB 0D: jmp 0x5866306c
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov edx, dword ptr [ebp + 0ch]
        sub edx, 1
        cmp dword ptr [ebp - 20h], edx
        ; Exact mapped bytes 75 02: jne 0x5866306c
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 23: jmp 0x5866308f
        __asm _emit 0xeb
        __asm _emit 0x23
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 2ch]
        mov dl, byte ptr [eax]
        mov byte ptr [ebp + ecx - 1ch], dl
        mov eax, dword ptr [ebp - 20h]
        add eax, 1
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, 1
        mov dword ptr [ebp - 2ch], ecx
        ; Exact mapped bytes EB B5: jmp 0x58663044
        __asm _emit 0xeb
        __asm _emit 0xb5
        lea edx, [ebp - 1ch]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 75 A1 FF FF: call 0x5865d210
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xa1
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp + 0ch]
        sub eax, 1
        cmp dword ptr [ebp - 20h], eax
        ; Exact mapped bytes 75 04: jne 0x586630ab
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes EB 23: jmp 0x586630cc
        __asm _emit 0xeb
        __asm _emit 0x23
        ; Exact mapped bytes EB 1C: jmp 0x586630c7
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 0F BF 91 F8 00 00 00: movsx edx, word ptr [ecx + 0xf8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x91
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 75 04: jne 0x586630be
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes EB 10: jmp 0x586630cc
        __asm _emit 0xeb
        __asm _emit 0x10
        ; Exact mapped bytes EB 09: jmp 0x586630c7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 20h]
        add eax, 1
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes E9 4B FF FF FF: jmp 0x58663017
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 0F BF 91 F8 00 00 00: movsx edx, word ptr [ecx + 0xf8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x91
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 74 09: je 0x586630e4
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 0D E0 FF FF: call 0x586610f0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 30h]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 30h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 18h]
        mov dword ptr [ebp - 34h], edx
        push 0
        push 0ee49h
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 55 CC: call dword ptr [ebp - 0x34]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xcc
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 39 DF 1C 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xdf
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
