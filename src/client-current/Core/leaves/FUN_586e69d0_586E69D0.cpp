// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E69D0 .. +0x13D bytes.
extern "C" __declspec(naked) void FUN_586e69d0_586E69D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 22 01 00 00: jne 0x586e6b05
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 1a8h], 1
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586e69ff
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [edx + 1a4h]
        ; Exact mapped bytes 0F 8D F4 00 00 00: jge 0x586e6b05
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + ecx*4 + 68h]
        ; Exact mapped bytes 75 1A: jne 0x586e6a3a
        __asm _emit 0x75
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        push 1
        mov edx, dword ptr [ebp - 8]
        push edx
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FC 09 00 00: call 0x586e7430
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 C6 00 00 00: jmp 0x586e6b00
        __asm _emit 0xe9
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + eax*4 + 84h]
        ; Exact mapped bytes 75 64: jne 0x586e6ab0
        __asm _emit 0x75
        __asm _emit 0x64
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 1b0h], 1
        ; Exact mapped bytes 75 41: jne 0x586e6a99
        __asm _emit 0x75
        __asm _emit 0x41
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 0ch], 3
        ; Exact mapped bytes EB 09: jmp 0x586e6a71
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 6
        ; Exact mapped bytes 7D 1A: jge 0x586e6a91
        __asm _emit 0x7d
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0f4h]
        ; Exact mapped bytes E8 27 ED DA FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xed
        __asm _emit 0xda
        __asm _emit 0xff
        add eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB D7: jmp 0x586e6a68
        __asm _emit 0xeb
        __asm _emit 0xd7
        cmp dword ptr [ebp - 10h], 3
        ; Exact mapped bytes 72 02: jb 0x586e6a99
        __asm _emit 0x72
        __asm _emit 0x02
        ; Exact mapped bytes EB 6C: jmp 0x586e6b05
        __asm _emit 0xeb
        __asm _emit 0x6c
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        push 1
        mov edx, dword ptr [ebp - 8]
        push edx
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 83 09 00 00: call 0x586e7430
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 50: jmp 0x586e6b00
        __asm _emit 0xeb
        __asm _emit 0x50
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + eax*4 + 0a0h]
        ; Exact mapped bytes 75 17: jne 0x586e6ad9
        __asm _emit 0x75
        __asm _emit 0x17
        mov eax, dword ptr [ebp + 10h]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 8]
        push ecx
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5A 09 00 00: call 0x586e7430
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 27: jmp 0x586e6b00
        __asm _emit 0xeb
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + edx*4 + 0bch]
        ; Exact mapped bytes 75 15: jne 0x586e6b00
        __asm _emit 0x75
        __asm _emit 0x15
        mov edx, dword ptr [ebp + 10h]
        push edx
        push 0
        mov eax, dword ptr [ebp - 8]
        push eax
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 31 09 00 00: call 0x586e7430
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 F1 FE FF FF: jmp 0x586e69f6
        __asm _emit 0xe9
        __asm _emit 0xf1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
