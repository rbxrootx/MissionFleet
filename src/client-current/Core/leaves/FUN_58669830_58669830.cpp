// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58669830 .. +0x293 bytes.
extern "C" __declspec(naked) void FUN_58669830_58669830() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 108h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 0f8h], ecx
        mov dword ptr [ebp - 0fch], 0
        push 0f0h
        push 0
        lea eax, [ebp - 0f4h]
        push eax
        ; Exact mapped bytes E8 AA 35 1E 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x35
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 104h], 0
        ; Exact mapped bytes EB 0F: jmp 0x58669884
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 104h]
        add ecx, 1
        mov dword ptr [ebp - 104h], ecx
        cmp dword ptr [ebp - 104h], 0ah
        ; Exact mapped bytes 0F 8D C9 00 00 00: jge 0x5866995a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes 0F BF 82 DA 00 00 00: movsx eax, word ptr [edx + 0xda]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 104h], eax
        ; Exact mapped bytes 0F 8D B0 00 00 00: jge 0x5866995a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0f8h]
        cmp dword ptr [ecx + 0f0h], 0
        ; Exact mapped bytes 75 15: jne 0x586698ce
        __asm _emit 0x75
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 0f8h]
        mov eax, dword ptr [ebp - 0f8h]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [edx + 0f0h], ecx
        mov edx, dword ptr [ebp - 0f8h]
        mov ecx, dword ptr [edx + 0f0h]
        ; Exact mapped bytes E8 01 FC E4 FF: call 0x584b94e0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xfc
        __asm _emit 0xe4
        __asm _emit 0xff
        push eax
        push 588afc50h
        imul eax, dword ptr [ebp - 0fch], 18h
        lea ecx, [ebp + eax - 0f4h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov edx, dword ptr [ebp - 0f8h]
        mov ecx, dword ptr [edx + 0f0h]
        ; Exact mapped bytes E8 22 BE E2 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xbe
        __asm _emit 0xe2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1F: je 0x58669931
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 0f8h]
        mov ecx, dword ptr [eax + 0f0h]
        ; Exact mapped bytes E8 0D BE E2 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xbe
        __asm _emit 0xe2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0f8h]
        mov dword ptr [ecx + 0f0h], eax
        ; Exact mapped bytes EB 15: jmp 0x58669946
        __asm _emit 0xeb
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 0f8h]
        mov eax, dword ptr [ebp - 0f8h]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [edx + 0f0h], ecx
        mov edx, dword ptr [ebp - 0fch]
        add edx, 1
        mov dword ptr [ebp - 0fch], edx
        ; Exact mapped bytes E9 1B FF FF FF: jmp 0x58669875
        __asm _emit 0xe9
        __asm _emit 0x1b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 0fch], 0
        ; Exact mapped bytes 7E 1C: jle 0x5866997f
        __asm _emit 0x7e
        __asm _emit 0x1c
        push 0
        mov eax, dword ptr [ebp - 0fch]
        push eax
        lea ecx, [ebp - 0f4h]
        push ecx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 52 3B F1 FF: call 0x5857d4d0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x3b
        __asm _emit 0xf1
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 100h], 0
        push 0f0h
        push 0
        lea edx, [ebp - 0f4h]
        push edx
        ; Exact mapped bytes E8 74 34 1E 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x34
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 108h], 0
        ; Exact mapped bytes EB 0F: jmp 0x586699ba
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 108h]
        add eax, 1
        mov dword ptr [ebp - 108h], eax
        cmp dword ptr [ebp - 108h], 0ah
        ; Exact mapped bytes 0F 8D C9 00 00 00: jge 0x58669a90
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes 0F BF 91 D8 00 00 00: movsx edx, word ptr [ecx + 0xd8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x91
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 108h], edx
        ; Exact mapped bytes 0F 8D B0 00 00 00: jge 0x58669a90
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0f8h]
        cmp dword ptr [eax + 0f4h], 0
        ; Exact mapped bytes 75 15: jne 0x58669a04
        __asm _emit 0x75
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 0f8h]
        mov edx, dword ptr [ebp - 0f8h]
        mov eax, dword ptr [edx + 64h]
        mov dword ptr [ecx + 0f4h], eax
        mov ecx, dword ptr [ebp - 0f8h]
        mov ecx, dword ptr [ecx + 0f4h]
        ; Exact mapped bytes E8 CB FA E4 FF: call 0x584b94e0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xfa
        __asm _emit 0xe4
        __asm _emit 0xff
        push eax
        push 588afc54h
        imul edx, dword ptr [ebp - 100h], 18h
        lea eax, [ebp + edx - 0f4h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov ecx, dword ptr [ebp - 0f8h]
        mov ecx, dword ptr [ecx + 0f4h]
        ; Exact mapped bytes E8 EC BC E2 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xbc
        __asm _emit 0xe2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1F: je 0x58669a67
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 0f8h]
        mov ecx, dword ptr [edx + 0f4h]
        ; Exact mapped bytes E8 D7 BC E2 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xbc
        __asm _emit 0xe2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0f8h]
        mov dword ptr [ecx + 0f4h], eax
        ; Exact mapped bytes EB 15: jmp 0x58669a7c
        __asm _emit 0xeb
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 0f8h]
        mov eax, dword ptr [ebp - 0f8h]
        mov ecx, dword ptr [eax + 64h]
        mov dword ptr [edx + 0f4h], ecx
        mov edx, dword ptr [ebp - 100h]
        add edx, 1
        mov dword ptr [ebp - 100h], edx
        ; Exact mapped bytes E9 1B FF FF FF: jmp 0x586699ab
        __asm _emit 0xe9
        __asm _emit 0x1b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 100h], 0
        ; Exact mapped bytes 7E 1C: jle 0x58669ab5
        __asm _emit 0x7e
        __asm _emit 0x1c
        push 1
        mov eax, dword ptr [ebp - 100h]
        push eax
        lea ecx, [ebp - 0f4h]
        push ecx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 1C 3A F1 FF: call 0x5857d4d0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x3a
        __asm _emit 0xf1
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 91 75 1C 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x75
        __asm _emit 0x1c
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
