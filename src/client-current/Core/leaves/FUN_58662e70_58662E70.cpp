// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58662E70 .. +0x162 bytes.
extern "C" __declspec(naked) void FUN_58662e70_58662E70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 36: jne 0x58662ebf
        __asm _emit 0x75
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 5F E1 FF FF: call 0x58660ff0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 30h]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 30h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 18h]
        mov dword ptr [ebp - 34h], edx
        push 1
        push 0ee49h
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 55 CC: call dword ptr [ebp - 0x34]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xcc
        nop
        ; Exact mapped bytes E9 07 01 00 00: jmp 0x58662fc6
        __asm _emit 0xe9
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], 0
        mov dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58662ed8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, 1
        mov dword ptr [ebp - 2ch], ecx
        push 18h
        push 0
        lea edx, [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 2B 9F 1E 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x9f
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 28h], 0
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x58662f3a
        __asm _emit 0x74
        __asm _emit 0x42
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 3bh
        ; Exact mapped bytes 75 04: jne 0x58662f0a
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes EB 32: jmp 0x58662f3a
        __asm _emit 0xeb
        __asm _emit 0x32
        ; Exact mapped bytes EB 0D: jmp 0x58662f17
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [ebp + 0ch]
        sub eax, 1
        cmp dword ptr [ebp - 24h], eax
        ; Exact mapped bytes 75 02: jne 0x58662f17
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 23: jmp 0x58662f3a
        __asm _emit 0xeb
        __asm _emit 0x23
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 28h]
        mov al, byte ptr [ecx]
        mov byte ptr [ebp + edx - 1ch], al
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 1
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 28h]
        add edx, 1
        mov dword ptr [ebp - 28h], edx
        ; Exact mapped bytes EB B5: jmp 0x58662eef
        __asm _emit 0xeb
        __asm _emit 0xb5
        lea eax, [ebp - 1ch]
        push eax
        push 589604e0h
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x58662f5a
        __asm _emit 0x74
        __asm _emit 0x0d
        lea ecx, [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 17 A1 FF FF: call 0x5865d070
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xa1
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp + 0ch]
        sub edx, 1
        cmp dword ptr [ebp - 24h], edx
        ; Exact mapped bytes 75 04: jne 0x58662f69
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes EB 10: jmp 0x58662f77
        __asm _emit 0xeb
        __asm _emit 0x10
        ; Exact mapped bytes EB 09: jmp 0x58662f72
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 24h]
        add eax, 1
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes E9 58 FF FF FF: jmp 0x58662ecf
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 3D 30 05 96 58 00: cmp dword ptr [0x58960530], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 1D: jne 0x58662f9d
        __asm _emit 0x75
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F BF 91 FA 00 00 00: movsx edx, word ptr [ecx + 0xfa]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x91
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        sub eax, 1
        cmp edx, eax
        ; Exact mapped bytes 74 09: je 0x58662f9d
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 54 E0 FF FF: call 0x58660ff0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 30h]
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 3ch], eax
        push 1
        push 0ee49h
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes FF 55 C4: call dword ptr [ebp - 0x3c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xc4
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 80 E0 1C 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xe0
        __asm _emit 0x1c
        __asm _emit 0x00
        mov esp, ebp
    }
}
