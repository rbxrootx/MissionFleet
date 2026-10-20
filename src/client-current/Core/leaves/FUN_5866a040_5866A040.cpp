// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5866A040 .. +0x143 bytes.
extern "C" __declspec(naked) void FUN_5866a040_5866A040() {
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
        mov dword ptr [ebp - 20h], ecx
        xor eax, eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 66 89 81 DA 00 00 00: mov word ptr [ecx + 0xda], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 0E: jne 0x5866a073
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 53 E6 FF FF: call 0x586686c0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 DD 00 00 00: jmp 0x5866a150
        __asm _emit 0xe9
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], 0
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB 09: jmp 0x5866a08c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 28h]
        add edx, 1
        mov dword ptr [ebp - 28h], edx
        cmp dword ptr [ebp - 28h], 1000h
        ; Exact mapped bytes 0F 8D 9F 00 00 00: jge 0x5866a138
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 18h
        push 0
        lea eax, [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 6A 2D 1E 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x2d
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 2ch], 0
        mov ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 42: je 0x5866a0fb
        __asm _emit 0x74
        __asm _emit 0x42
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 3bh
        ; Exact mapped bytes 75 04: jne 0x5866a0cb
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes EB 32: jmp 0x5866a0fb
        __asm _emit 0xeb
        __asm _emit 0x32
        ; Exact mapped bytes EB 0D: jmp 0x5866a0d8
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 0ch]
        sub ecx, 1
        cmp dword ptr [ebp - 24h], ecx
        ; Exact mapped bytes 75 02: jne 0x5866a0d8
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 23: jmp 0x5866a0fb
        __asm _emit 0xeb
        __asm _emit 0x23
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 2ch]
        mov cl, byte ptr [edx]
        mov byte ptr [ebp + eax - 1ch], cl
        mov edx, dword ptr [ebp - 24h]
        add edx, 1
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 2ch]
        add eax, 1
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB B5: jmp 0x5866a0b0
        __asm _emit 0xeb
        __asm _emit 0xb5
        lea ecx, [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 E9 CE FF FF: call 0x58666ff0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp + 0ch]
        sub edx, 1
        cmp dword ptr [ebp - 24h], edx
        ; Exact mapped bytes 75 04: jne 0x5866a117
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes EB 23: jmp 0x5866a138
        __asm _emit 0xeb
        __asm _emit 0x23
        ; Exact mapped bytes EB 1C: jmp 0x5866a133
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F BF 88 DA 00 00 00: movsx ecx, word ptr [eax + 0xda]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x88
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 75 04: jne 0x5866a12a
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes EB 10: jmp 0x5866a138
        __asm _emit 0xeb
        __asm _emit 0x10
        ; Exact mapped bytes EB 09: jmp 0x5866a133
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 24h]
        add edx, 1
        mov dword ptr [ebp - 24h], edx
        ; Exact mapped bytes E9 4B FF FF FF: jmp 0x5866a083
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F BF 88 DA 00 00 00: movsx ecx, word ptr [eax + 0xda]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x88
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 74 09: je 0x5866a150
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 71 E5 FF FF: call 0x586686c0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 30h]
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 30h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 34h], ecx
        push 0
        push 0ee49h
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 55 CC: call dword ptr [ebp - 0x34]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xcc
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 CD 6E 1C 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x6e
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
