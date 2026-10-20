// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5865D3B0 .. +0x121 bytes.
extern "C" __declspec(naked) void FUN_5865d3b0_5865D3B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 4], ecx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 0e0h]
        ; Exact mapped bytes E8 20 C3 EC FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xc3
        __asm _emit 0xec
        __asm _emit 0xff
        cmp eax, 0fh
        ; Exact mapped bytes 0F 8E BD 00 00 00: jle 0x5865d496
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 0e0h]
        ; Exact mapped bytes E8 80 38 16 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x38
        __asm _emit 0x16
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 5B: je 0x5865d454
        __asm _emit 0x74
        __asm _emit 0x5b
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 0e0h]
        ; Exact mapped bytes E8 E0 C2 EC FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xc2
        __asm _emit 0xec
        __asm _emit 0xff
        sub eax, 0fh
        cmp dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 7D 3A: jge 0x5865d452
        __asm _emit 0x7d
        __asm _emit 0x3a
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5865d42a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 4
        ; Exact mapped bytes 7D 22: jge 0x5865d452
        __asm _emit 0x7d
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0e0h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 11 43 16 00: call 0x587c1760
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x43
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB CF: jmp 0x5865d421
        __asm _emit 0xeb
        __asm _emit 0xcf
        ; Exact mapped bytes EB 40: jmp 0x5865d494
        __asm _emit 0xeb
        __asm _emit 0x40
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7E 3A: jle 0x5865d494
        __asm _emit 0x7e
        __asm _emit 0x3a
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5865d46c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 4
        ; Exact mapped bytes 7D 22: jge 0x5865d494
        __asm _emit 0x7d
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 0e0h]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 10h]
        sub eax, 1
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 CF 42 16 00: call 0x587c1760
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x42
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB CF: jmp 0x5865d463
        __asm _emit 0xeb
        __asm _emit 0xcf
        ; Exact mapped bytes EB 35: jmp 0x5865d4cb
        __asm _emit 0xeb
        __asm _emit 0x35
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5865d4a8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 4
        ; Exact mapped bytes 7D 1D: jge 0x5865d4cb
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0e0h]
        mov dword ptr [ebp - 20h], ecx
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 98 42 16 00: call 0x587c1760
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x42
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB D4: jmp 0x5865d49f
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
