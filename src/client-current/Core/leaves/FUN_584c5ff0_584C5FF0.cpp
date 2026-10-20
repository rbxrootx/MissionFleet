// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C5FF0 .. +0x175 bytes.
extern "C" __declspec(naked) void FUN_584c5ff0_584C5FF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 02: shr cx, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 4E 01 00 00: je 0x584c6161
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 108h], 0
        ; Exact mapped bytes 75 55: jne 0x584c6074
        __asm _emit 0x75
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 10ch]
        cmp eax, dword ptr [edx + 110h]
        ; Exact mapped bytes 7D 17: jge 0x584c604a
        __asm _emit 0x7d
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10ch]
        add edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10ch], edx
        ; Exact mapped bytes EB 25: jmp 0x584c606f
        __asm _emit 0xeb
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 108h], 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10ch], 0
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 72 FE FB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xfe
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 ED 00 00 00: jmp 0x584c6161
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 108h], 1
        ; Exact mapped bytes 0F 85 DD 00 00 00: jne 0x584c6161
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 44 FF FF FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 0F 8E 99 00 00 00: jle 0x584c612e
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 114h]
        sub eax, dword ptr [edx + 0fch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 114h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 114h]
        cdq
        mov ecx, 64h
        idiv ecx
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 66 F6 2E 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xf6
        __asm _emit 0x2e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0fch]
        sub eax, 46h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0fch], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0fch], 0
        ; Exact mapped bytes 7D 41: jge 0x584c612c
        __asm _emit 0x7d
        __asm _emit 0x41
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DD FE FF FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        sub edx, dword ptr [ecx + 100h]
        ; Exact mapped bytes 78 18: js 0x584c6118
        __asm _emit 0x78
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C8 FE FF FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        sub edx, dword ptr [ecx + 100h]
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB 07: jmp 0x584c611f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 15 F4 2E 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x2e
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 33: jmp 0x584c6161
        __asm _emit 0xeb
        __asm _emit 0x33
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6A 08 FC FF: call 0x584869a0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x08
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 17: je 0x584c615a
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 10h], ecx
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 F0: call dword ptr [ebp - 0x10]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf0
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 07: jmp 0x584c6161
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
