// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58563020 .. +0x1E6 bytes.
extern "C" __declspec(naked) void FUN_58563020_58563020() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 12ch]
        cmp edx, dword ptr [ecx + 130h]
        ; Exact mapped bytes 0F 84 C1 01 00 00: je 0x58563202
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 84h], 0
        ; Exact mapped bytes 0F 85 83 01 00 00: jne 0x585631d4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x83
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 108h], 0
        ; Exact mapped bytes 74 18: je 0x58563075
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 124h]
        imul ecx, dword ptr [eax + 0d0h]
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes EB 07: jmp 0x5856307c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 130h]
        sub edx, dword ptr [ecx + 12ch]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0cch]
        add ecx, 2
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 130h]
        mov dword ptr [edx + 12ch], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 4F E2 F2 FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xe2
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 4
        cmp eax, 708h
        ; Exact mapped bytes 7D 31: jge 0x585630fc
        __asm _emit 0x7d
        __asm _emit 0x31
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7E 10: jle 0x585630e1
        __asm _emit 0x7e
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 7D 06: jge 0x585630df
        __asm _emit 0x7d
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB 19: jmp 0x585630fa
        __asm _emit 0xeb
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 26 E2 F2 FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xe2
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 4
        cmp dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 7D 08: jge 0x585630fa
        __asm _emit 0x7d
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 0ch]
        neg eax
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 46: jmp 0x58563142
        __asm _emit 0xeb
        __asm _emit 0x46
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7E 1B: jle 0x5856311d
        __asm _emit 0x7e
        __asm _emit 0x1b
        mov ecx, 0e10h
        sub ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 0ch]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 7D 06: jge 0x5856311b
        __asm _emit 0x7d
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 25: jmp 0x58563142
        __asm _emit 0xeb
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 8]
        add ecx, 0e10h
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 DE E1 F2 FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xe1
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 4
        cmp dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 7D 08: jge 0x58563142
        __asm _emit 0x7d
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 0ch]
        neg eax
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a8h]
        sub edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0a8h], edx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a8h]
        add edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0a8h], edx
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 0a8h]
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0a8h], edx
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0a8h], 0
        ; Exact mapped bytes 7D 17: jge 0x585631a9
        __asm _emit 0x7d
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a8h]
        add eax, 0e10h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0a8h], eax
        push 2
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a8h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 93 05 00 00: call 0x58563750
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a8h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7F 05 00 00: call 0x58563750
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 12: jmp 0x585631e6
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 130h]
        mov dword ptr [eax + 12ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a8h]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 130h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4F 04 00 00: call 0x58563650
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
