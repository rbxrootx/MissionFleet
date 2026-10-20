// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584E4060 .. +0x208 bytes.
extern "C" __declspec(naked) void FUN_584e4060_584E4060() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 8]
        cdq
        mov ecx, 384h
        idiv ecx
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 3
        ; Exact mapped bytes 0F 87 DC 01 00 00: ja 0x584e4261
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xdc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 24 95 68 42 4E 58: jmp dword ptr [edx*4 + 0x584e4268]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x68
        __asm _emit 0x42
        __asm _emit 0x4e
        __asm _emit 0x58
        mov eax, dword ptr [ebp + 0ch]
        cdq
        mov ecx, 384h
        idiv ecx
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 3
        ; Exact mapped bytes 77 66: ja 0x584e4109
        __asm _emit 0x77
        __asm _emit 0x66
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 24 95 78 42 4E 58: jmp dword ptr [edx*4 + 0x584e4278]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x78
        __asm _emit 0x42
        __asm _emit 0x4e
        __asm _emit 0x58
        mov eax, dword ptr [ebp + 0ch]
        sub eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 51: jmp 0x584e4109
        __asm _emit 0xeb
        __asm _emit 0x51
        mov ecx, dword ptr [ebp + 8]
        add ecx, 708h
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 7E 0B: jle 0x584e40d1
        __asm _emit 0x7e
        __asm _emit 0x0b
        mov edx, dword ptr [ebp + 0ch]
        sub edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB 26: jmp 0x584e40f7
        __asm _emit 0xeb
        __asm _emit 0x26
        mov eax, dword ptr [ebp + 8]
        add eax, 708h
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 7D 12: jge 0x584e40f0
        __asm _emit 0x7d
        __asm _emit 0x12
        mov ecx, 0e10h
        sub ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [ebp + 8]
        neg ecx
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 07: jmp 0x584e40f7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 708h
        ; Exact mapped bytes EB 10: jmp 0x584e4109
        __asm _emit 0xeb
        __asm _emit 0x10
        mov edx, 0e10h
        sub edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ebp + 8]
        neg edx
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes E9 53 01 00 00: jmp 0x584e4261
        __asm _emit 0xe9
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        cdq
        mov ecx, 384h
        idiv ecx
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 3
        ; Exact mapped bytes 77 56: ja 0x584e4178
        __asm _emit 0x77
        __asm _emit 0x56
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 24 95 88 42 4E 58: jmp dword ptr [edx*4 + 0x584e4288]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x88
        __asm _emit 0x42
        __asm _emit 0x4e
        __asm _emit 0x58
        mov eax, dword ptr [ebp + 8]
        sub eax, dword ptr [ebp + 0ch]
        neg eax
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 3F: jmp 0x584e4178
        __asm _emit 0xeb
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp + 8]
        add ecx, 708h
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 7E 0B: jle 0x584e4152
        __asm _emit 0x7e
        __asm _emit 0x0b
        mov edx, dword ptr [ebp + 0ch]
        sub edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB 26: jmp 0x584e4178
        __asm _emit 0xeb
        __asm _emit 0x26
        mov eax, dword ptr [ebp + 8]
        add eax, 708h
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 7D 12: jge 0x584e4171
        __asm _emit 0x7d
        __asm _emit 0x12
        mov ecx, 0e10h
        sub ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [ebp + 8]
        neg ecx
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 07: jmp 0x584e4178
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 708h
        ; Exact mapped bytes E9 E4 00 00 00: jmp 0x584e4261
        __asm _emit 0xe9
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        cdq
        mov ecx, 384h
        idiv ecx
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 3
        ; Exact mapped bytes 77 56: ja 0x584e41e7
        __asm _emit 0x77
        __asm _emit 0x56
        mov edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 24 95 98 42 4E 58: jmp dword ptr [edx*4 + 0x584e4298]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x98
        __asm _emit 0x42
        __asm _emit 0x4e
        __asm _emit 0x58
        mov eax, dword ptr [ebp + 8]
        sub eax, 708h
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 7E 10: jle 0x584e41b8
        __asm _emit 0x7e
        __asm _emit 0x10
        mov ecx, 0e10h
        sub ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 22: jmp 0x584e41da
        __asm _emit 0xeb
        __asm _emit 0x22
        mov edx, dword ptr [ebp + 8]
        sub edx, 708h
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 7D 0D: jge 0x584e41d3
        __asm _emit 0x7d
        __asm _emit 0x0d
        mov eax, dword ptr [ebp + 8]
        sub eax, dword ptr [ebp + 0ch]
        neg eax
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 07: jmp 0x584e41da
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 708h
        ; Exact mapped bytes EB 0B: jmp 0x584e41e7
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp + 8]
        sub ecx, dword ptr [ebp + 0ch]
        neg ecx
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 78: jmp 0x584e4261
        __asm _emit 0xeb
        __asm _emit 0x78
        mov eax, dword ptr [ebp + 0ch]
        cdq
        mov ecx, 384h
        idiv ecx
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 3
        ; Exact mapped bytes 77 64: ja 0x584e4261
        __asm _emit 0x77
        __asm _emit 0x64
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 24 95 A8 42 4E 58: jmp dword ptr [edx*4 + 0x584e42a8]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xa8
        __asm _emit 0x42
        __asm _emit 0x4e
        __asm _emit 0x58
        mov eax, 0e10h
        sub eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 4A: jmp 0x584e4261
        __asm _emit 0xeb
        __asm _emit 0x4a
        mov ecx, dword ptr [ebp + 8]
        sub ecx, 708h
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 7E 10: jle 0x584e4235
        __asm _emit 0x7e
        __asm _emit 0x10
        mov edx, 0e10h
        sub edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB 21: jmp 0x584e4256
        __asm _emit 0xeb
        __asm _emit 0x21
        mov eax, dword ptr [ebp + 8]
        sub eax, 708h
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 7D 0D: jge 0x584e424f
        __asm _emit 0x7d
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 8]
        sub ecx, dword ptr [ebp + 0ch]
        neg ecx
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 07: jmp 0x584e4256
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 708h
        mov edx, dword ptr [ebp + 8]
        sub edx, dword ptr [ebp + 0ch]
        neg edx
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
