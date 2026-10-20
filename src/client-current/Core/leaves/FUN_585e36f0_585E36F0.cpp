// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585E36F0 .. +0x232 bytes.
extern "C" __declspec(naked) void FUN_585e36f0_585E36F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 21ea4h]
        cmp ecx, 1
        ; Exact mapped bytes 74 13: je 0x585e371b
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 21ea4h]
        cmp eax, 2
        ; Exact mapped bytes 0F 85 03 02 00 00: jne 0x585e391e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 10694h], 4ech
        ; Exact mapped bytes 73 7D: jae 0x585e37a7
        __asm _emit 0x73
        __asm _emit 0x7d
        mov edx, dword ptr [ebp - 4]
        mov eax, 4ech
        sub eax, dword ptr [edx + 10694h]
        imul ecx, eax, 0f0h
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov dword ptr [ebp - 0ch], eax
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 21e90h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 0ch]
        cdq
        mov ecx, 3ch
        idiv ecx
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 18 7A 1D 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x7a
        __asm _emit 0x1d
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 21e90h]
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 0ch]
        cdq
        mov ecx, 3ch
        idiv ecx
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 EF 79 1D 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x79
        __asm _emit 0x1d
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 77 01 00 00: jmp 0x585e391e
        __asm _emit 0xe9
        __asm _emit 0x77
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 10694h], 4ech
        ; Exact mapped bytes 0F 82 64 01 00 00: jb 0x585e391e
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 21e9ch]
        ; Exact mapped bytes E8 C8 20 EB FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x20
        __asm _emit 0xeb
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 0F 85 4B 01 00 00: jne 0x585e391e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585e37e5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 1D: jge 0x585e3808
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 21e88h]
        mov dword ptr [ebp - 18h], edx
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 DB 26 EA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x26
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x585e37dc
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585e381a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 1D: jge 0x585e383d
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 21e90h]
        mov dword ptr [ebp - 1ch], eax
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 A6 26 EA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x26
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x585e3811
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 21e98h]
        mov dword ptr [ebp - 20h], edx
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 8D 26 EA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x26
        __asm _emit 0xea
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 21e9ch]
        mov dword ptr [ebp - 24h], ecx
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 77 26 EA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x26
        __asm _emit 0xea
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 21eb4h]
        mov dword ptr [ebp - 2ch], eax
        push 9eh
        ; Exact mapped bytes 8B 0D 6C 07 96 58: mov ecx, dword ptr [0x5896076c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9B 12 EA FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x12
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 9C 26 EA FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x26
        __asm _emit 0xea
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 21eb8h]
        mov dword ptr [ebp - 34h], eax
        push 9fh
        ; Exact mapped bytes 8B 0D 6C 07 96 58: mov ecx, dword ptr [0x5896076c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 70 12 EA FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x12
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 71 26 EA FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x26
        __asm _emit 0xea
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 21eb4h]
        mov dword ptr [ebp - 38h], eax
        push 32bh
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 D8 1D 1D 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x1d
        __asm _emit 0x1d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 21eb8h]
        mov dword ptr [ebp - 3ch], edx
        push 32bh
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 BF 1D 1D 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x1d
        __asm _emit 0x1d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 21eb4h]
        mov dword ptr [ebp - 40h], ecx
        push 1
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 D9 25 EA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x25
        __asm _emit 0xea
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 21eb8h]
        mov dword ptr [ebp - 44h], eax
        push 1
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 C3 25 EA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x25
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
