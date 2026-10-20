// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58743000 .. +0xD9 bytes.
extern "C" __declspec(naked) void FUN_58743000_58743000() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 BE 00 00 00: jne 0x587430d1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 90h]
        ; Exact mapped bytes 75 10: jne 0x58743031
        __asm _emit 0x75
        __asm _emit 0x10
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 75 09 00 00: call 0x587439a0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 A0 00 00 00: jmp 0x587430d1
        __asm _emit 0xe9
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 94h]
        ; Exact mapped bytes 75 10: jne 0x5874304f
        __asm _emit 0x75
        __asm _emit 0x10
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 57 09 00 00: call 0x587439a0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 82 00 00 00: jmp 0x587430d1
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58743061
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 3
        ; Exact mapped bytes 7D 6A: jge 0x587430d1
        __asm _emit 0x7d
        __asm _emit 0x6a
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + edx*4 + 74h]
        ; Exact mapped bytes 75 59: jne 0x587430cf
        __asm _emit 0x75
        __asm _emit 0x59
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58743088
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 3
        ; Exact mapped bytes 7D 36: jge 0x587430c4
        __asm _emit 0x7d
        __asm _emit 0x36
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 2C: je 0x587430c2
        __asm _emit 0x74
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 74h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx*4 + 74h]
        ; Exact mapped bytes E8 0E DB 07 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xdb
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 CF E4 07 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xe4
        __asm _emit 0x07
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB BB: jmp 0x5874307f
        __asm _emit 0xeb
        __asm _emit 0xbb
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C4 01 00 00: call 0x58743290
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 02: jmp 0x587430d1
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 87: jmp 0x58743058
        __asm _emit 0xeb
        __asm _emit 0x87
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
