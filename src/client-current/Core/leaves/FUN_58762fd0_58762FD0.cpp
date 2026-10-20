// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58762FD0 .. +0x181 bytes.
extern "C" __declspec(naked) void FUN_58762fd0_58762FD0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        sar ecx, 3
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        sar eax, 3
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 14e0h]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 12: jne 0x58763011
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 14e4h]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F 84 3A 01 00 00: je 0x5876314b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 14e0h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 14e4h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5e84h]
        ; Exact mapped bytes E8 A9 CB D3 FF: call 0x5849fbe0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xcb
        __asm _emit 0xd3
        __asm _emit 0xff
        cdq
        mov ecx, 1eh
        idiv ecx
        cdq
        mov ecx, 78h
        idiv ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov eax, dword ptr [ebp - 4]
        add ecx, dword ptr [eax + edx*8 + 1738h]
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 12d4h]
        and edx, 8000003fh
        ; Exact mapped bytes 79 05: jns 0x58763070
        __asm _emit 0x79
        __asm _emit 0x05
        dec edx
        or edx, 0ffffffc0h
        inc edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx*8 + 12e0h], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 5e84h]
        ; Exact mapped bytes E8 55 CB D3 FF: call 0x5849fbe0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xcb
        __asm _emit 0xd3
        __asm _emit 0xff
        cdq
        mov ecx, 1eh
        idiv ecx
        cdq
        mov ecx, 78h
        idiv ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 8]
        sub eax, dword ptr [ecx + edx*8 + 173ch]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 12d4h]
        and edx, 8000003fh
        ; Exact mapped bytes 79 05: jns 0x587630c4
        __asm _emit 0x79
        __asm _emit 0x05
        dec edx
        or edx, 0ffffffc0h
        inc edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax + edx*8 + 12e4h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 12d4h]
        add eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 12d4h], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 23: je 0x5876310f
        __asm _emit 0x74
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 12dch], 3fh
        ; Exact mapped bytes 7D 15: jge 0x5876310d
        __asm _emit 0x7d
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 12dch]
        add ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 12dch], ecx
        ; Exact mapped bytes EB 21: jmp 0x58763130
        __asm _emit 0xeb
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 12dch], 0
        ; Exact mapped bytes 7E 15: jle 0x58763130
        __asm _emit 0x7e
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 12dch]
        sub edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 12dch], edx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 12d4h]
        sub eax, dword ptr [edx + 12dch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 12d8h], eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
