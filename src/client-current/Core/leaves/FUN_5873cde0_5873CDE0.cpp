// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5873CDE0 .. +0xE0 bytes.
extern "C" __declspec(naked) void FUN_5873cde0_5873CDE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push esi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 07: jne 0x5873cdf7
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp + 0ch], 1
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 5F: je 0x5873ce5c
        __asm _emit 0x74
        __asm _emit 0x5f
        movzx eax, word ptr [ebp + 8]
        cmp eax, 2
        ; Exact mapped bytes 75 36: jne 0x5873ce3c
        __asm _emit 0x75
        __asm _emit 0x36
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 1f4h]
        ; Exact mapped bytes E8 94 89 D5 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x89
        __asm _emit 0xd5
        __asm _emit 0xff
        mov esi, eax
        add esi, dword ptr [ebp + 0ch]
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 1f4h]
        ; Exact mapped bytes E8 78 89 D5 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x89
        __asm _emit 0xd5
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 7D 1E: jge 0x5873ce5a
        __asm _emit 0x7d
        __asm _emit 0x1e
        movzx eax, word ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 1f4h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F7 DC 07 00: call 0x587bab50
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xdc
        __asm _emit 0x07
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 5D: jmp 0x5873ceb9
        __asm _emit 0xeb
        __asm _emit 0x5d
        movzx ecx, word ptr [ebp + 8]
        cmp ecx, 3
        ; Exact mapped bytes 75 36: jne 0x5873ce9b
        __asm _emit 0x75
        __asm _emit 0x36
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 1f4h]
        ; Exact mapped bytes E8 35 89 D5 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x89
        __asm _emit 0xd5
        __asm _emit 0xff
        mov esi, eax
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 1f4h]
        ; Exact mapped bytes E8 1C 89 D5 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x89
        __asm _emit 0xd5
        __asm _emit 0xff
        sub eax, dword ptr [ebp + 0ch]
        cmp esi, eax
        ; Exact mapped bytes 7D 1E: jge 0x5873ceb9
        __asm _emit 0x7d
        __asm _emit 0x1e
        movzx ecx, word ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 1f4h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 08 E3 07 00: call 0x587bb1c0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xe3
        __asm _emit 0x07
        __asm _emit 0x00
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
