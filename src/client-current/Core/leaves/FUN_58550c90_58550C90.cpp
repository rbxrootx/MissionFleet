// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58550C90 .. +0x116 bytes.
extern "C" __declspec(naked) void FUN_58550c90_58550C90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58550cab
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0A 5D F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x5d
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [eax + 1284h]
        ; Exact mapped bytes 0F 8D D6 00 00 00: jge 0x58550d9b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + edx*4 + 8], 0
        ; Exact mapped bytes 0F 84 C0 00 00 00: je 0x58550d96
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DF 5C F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x5c
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 58 B7 F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xb7
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 41 EF F4 FF: call 0x5849fc30
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xef
        __asm _emit 0xf4
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        shl edx, cl
        and edx, 80000000h
        ; Exact mapped bytes 0F 84 94 00 00 00: je 0x58550d96
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], -1
        ; Exact mapped bytes 74 1B: je 0x58550d23
        __asm _emit 0x74
        __asm _emit 0x1b
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 AD 5C F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x5c
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [eax + ecx + 1fch]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 73: jne 0x58550d96
        __asm _emit 0x75
        __asm _emit 0x73
        mov eax, dword ptr [ebp + 0ch]
        and eax, 10h
        ; Exact mapped bytes 74 31: je 0x58550d5c
        __asm _emit 0x74
        __asm _emit 0x31
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8A 5C F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x5c
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [eax + ecx + 21ch]
        test edx, edx
        ; Exact mapped bytes 75 17: jne 0x58550d5c
        __asm _emit 0x75
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + eax*4 + 8]
        ; Exact mapped bytes E8 5C 30 01 00: call 0x58563db0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x58550d5c
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 44: jmp 0x58550da0
        __asm _emit 0xeb
        __asm _emit 0x44
        mov edx, dword ptr [ebp + 0ch]
        and edx, 20h
        ; Exact mapped bytes 74 32: je 0x58550d96
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 51 5C F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x5c
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [eax + ecx + 21ch]
        cmp edx, 1
        ; Exact mapped bytes 75 17: jne 0x58550d96
        __asm _emit 0x75
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + eax*4 + 8]
        ; Exact mapped bytes E8 22 30 01 00: call 0x58563db0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x58550d96
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 0A: jmp 0x58550da0
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes E9 07 FF FF FF: jmp 0x58550ca2
        __asm _emit 0xe9
        __asm _emit 0x07
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
