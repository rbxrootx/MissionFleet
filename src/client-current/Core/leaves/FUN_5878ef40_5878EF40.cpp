// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878EF40 .. +0x15F bytes.
extern "C" __declspec(naked) void FUN_5878ef40_5878EF40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        mov dword ptr [ebp - 4], ecx
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0D 18 00 00: call 0x58790760
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 37: je 0x5878ef91
        __asm _emit 0x74
        __asm _emit 0x37
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 68h]
        ; Exact mapped bytes E8 9B 3E 00 00: call 0x58792e00
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 09: je 0x5878ef77
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 3A 8C FF FF: call 0x58787bb0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x8c
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E8 24 72 FF FF: call 0x587861a0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 05 6E FF FF: call 0x58785d90
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x6e
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 08 01 00 00: jmp 0x5878f099
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 20h], edx
        movzx eax, word ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp + 10h]
        lea edx, [ecx + eax*8]
        mov dword ptr [ebp - 8], edx
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5878efb6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        movzx ecx, word ptr [ebp + 0ch]
        cmp dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes 0F 8D C3 00 00 00: jge 0x5878f086
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + ecx*8 + 4]
        push eax
        mov ecx, dword ptr [edx + ecx*8]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 8D 3E 00 00: call 0x58792e70
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 22: jne 0x5878f00e
        __asm _emit 0x75
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 68h]
        ; Exact mapped bytes E8 09 3E 00 00: call 0x58792e00
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 09: je 0x5878f009
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 A8 8B FF FF: call 0x58787bb0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x8b
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 8B 00 00 00: jmp 0x5878f099
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 EA B9 FF FF: call 0x5878aa00
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        mov al, byte ptr [eax + 8]
        mov byte ptr [ebp - 1ch], al
        cmp byte ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 22: je 0x5878f044
        __asm _emit 0x74
        __asm _emit 0x22
        cmp byte ptr [ebp - 1ch], 1
        ; Exact mapped bytes 74 02: je 0x5878f02a
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 36: jmp 0x5878f060
        __asm _emit 0xeb
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BA F8 FF FF: call 0x5878e8f0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        add edx, 180h
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 1C: jmp 0x5878f060
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 8]
        push eax
        push 0
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EC F8 FF FF: call 0x5878e940
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        add ecx, 0d0h
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + ecx*8 + 4]
        push eax
        mov ecx, dword ptr [edx + ecx*8]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 B0 44 00 00: call 0x58793530
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 27 FF FF FF: jmp 0x5878efad
        __asm _emit 0xe9
        __asm _emit 0x27
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 15 71 FF FF: call 0x587861a0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x71
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 F8 6C FF FF: call 0x58785d90
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
