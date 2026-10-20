// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5858D980 .. +0x120 bytes.
extern "C" __declspec(naked) void FUN_5858d980_5858D980() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 20h], ecx
        mov dword ptr [ebp - 0ch], 0
        push 8
        push 0
        lea eax, [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 73 F4 2B 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xf4
        __asm _emit 0x2b
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 35 E5 EF FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xe5
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 0B: jmp 0x5858d9bb
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 78 E7 EF FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xe7
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 7B: je 0x5858da3c
        __asm _emit 0x74
        __asm _emit 0x7b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E7 F5 EF FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xf5
        __asm _emit 0xef
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 7C 16: jl 0x5858d9e3
        __asm _emit 0x7c
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DB F5 EF FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xf5
        __asm _emit 0xef
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 7F 09: jg 0x5858d9e3
        __asm _emit 0x7f
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 1
        ; Exact mapped bytes EB 07: jmp 0x5858d9ea
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 02: jne 0x5858d9f2
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB BE: jmp 0x5858d9b0
        __asm _emit 0xeb
        __asm _emit 0xbe
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D6 10 00 00: call 0x5858ead0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 2710h
        ; Exact mapped bytes 75 02: jne 0x5858da03
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB AD: jmp 0x5858d9b0
        __asm _emit 0xeb
        __asm _emit 0xad
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 35 EA EF FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xea
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 3E 1D F2 FF: call 0x584af750
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x1d
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 93 F5 EF FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xf5
        __asm _emit 0xef
        __asm _emit 0xff
        lea ecx, [ebp + eax*4 - 2ch]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        add ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx], ecx
        ; Exact mapped bytes E9 74 FF FF FF: jmp 0x5858d9b0
        __asm _emit 0xe9
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5858da4e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 74 31: je 0x5858da85
        __asm _emit 0x74
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 20h]
        imul eax, dword ptr [edx + ecx*4 + 0a4h], 7
        xor edx, edx
        mov ecx, 0ah
        div ecx
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 24h]
        cmp eax, dword ptr [ebp + edx*4 - 2ch]
        ; Exact mapped bytes 76 09: jbe 0x5858da83
        __asm _emit 0x76
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes EB 02: jmp 0x5858da85
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB C0: jmp 0x5858da45
        __asm _emit 0xeb
        __asm _emit 0xc0
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 0E: je 0x5858da99
        __asm _emit 0x74
        __asm _emit 0x0e
        push 1
        ; Exact mapped bytes 8B 0D 28 06 96 58: mov ecx, dword ptr [0x58960628]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 98 26 00 00: call 0x58590130
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 0ch]
        mov esp, ebp
        pop ebp
        ret
    }
}
