// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584891C0 .. +0x118 bytes.
extern "C" __declspec(naked) void FUN_584891c0_584891C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        push esi
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 18h], 1
        mov eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F BF 88 EE 00 00 00: movsx ecx, word ptr [eax + 0xee]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x88
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, -1
        ; Exact mapped bytes 75 07: jne 0x584891e7
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0ffffffffh
        mov edx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + 0ch]
        ; Exact mapped bytes E8 CE D7 FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        sub edx, eax
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes E8 A9 2E 00 00: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        sub edx, eax
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 0B: jne 0x58489223
        __asm _emit 0x75
        __asm _emit 0x0b
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 05: jne 0x58489223
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 AE 00 00 00: jmp 0x584892d1
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 20h], ecx
        imul edx, dword ptr [ebp - 4], 50h
        mov dword ptr [ebp - 0ch], edx
        imul eax, dword ptr [ebp - 8], 50h
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 C7 7D 3C 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x7d
        __asm _emit 0x3c
        __asm _emit 0x00
        add esp, 4
        mov esi, eax
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 B9 7D 3C 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x7d
        __asm _emit 0x3c
        __asm _emit 0x00
        add esp, 4
        add esi, eax
        mov eax, dword ptr [ebp - 0ch]
        cdq
        idiv esi
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 A2 7D 3C 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x7d
        __asm _emit 0x3c
        __asm _emit 0x00
        add esp, 4
        mov esi, eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 94 7D 3C 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x7d
        __asm _emit 0x3c
        __asm _emit 0x00
        add esp, 4
        add esi, eax
        mov eax, dword ptr [ebp - 10h]
        cdq
        idiv esi
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7E 07: jle 0x58489294
        __asm _emit 0x7e
        __asm _emit 0x07
        imul edx, dword ptr [ebp - 1ch], -1
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7E 07: jle 0x584892a1
        __asm _emit 0x7e
        __asm _emit 0x07
        imul eax, dword ptr [ebp - 20h], -1
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 0ch]
        imul ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 10h]
        imul edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        add ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        add ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 4], ecx
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
