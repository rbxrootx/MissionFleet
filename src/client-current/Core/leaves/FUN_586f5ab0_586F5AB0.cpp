// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586F5AB0 .. +0x1DF bytes.
extern "C" __declspec(naked) void FUN_586f5ab0_586F5AB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        push esi
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FB 0E D9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x0e
        __asm _emit 0xd9
        __asm _emit 0xff
        mov esi, eax
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 0d4h]
        ; Exact mapped bytes E8 E2 0E D9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x0e
        __asm _emit 0xd9
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 0ch], esi
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 20h], 0dh
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 75 22: jne 0x586f5b19
        __asm _emit 0x75
        __asm _emit 0x22
        mov dword ptr [ebp - 8], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 0f8h], 0fffff060h
        ; Exact mapped bytes E9 DC 00 00 00: jmp 0x586f5bf5
        __asm _emit 0xe9
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 0dh
        ; Exact mapped bytes 7D 22: jge 0x586f5b41
        __asm _emit 0x7d
        __asm _emit 0x22
        mov dword ptr [ebp - 8], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 0f8h], 0fffff060h
        ; Exact mapped bytes E9 B4 00 00 00: jmp 0x586f5bf5
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 20h
        ; Exact mapped bytes 7D 22: jge 0x586f5b69
        __asm _emit 0x7d
        __asm _emit 0x22
        mov dword ptr [ebp - 8], 13h
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 0f8h], 0fffff380h
        ; Exact mapped bytes E9 8C 00 00 00: jmp 0x586f5bf5
        __asm _emit 0xe9
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 33h
        ; Exact mapped bytes 7D 1F: jge 0x586f5b8e
        __asm _emit 0x7d
        __asm _emit 0x1f
        mov dword ptr [ebp - 8], 26h
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 0f8h], 0fffff6a0h
        ; Exact mapped bytes EB 67: jmp 0x586f5bf5
        __asm _emit 0xeb
        __asm _emit 0x67
        cmp dword ptr [ebp - 0ch], 46h
        ; Exact mapped bytes 7D 1F: jge 0x586f5bb3
        __asm _emit 0x7d
        __asm _emit 0x1f
        mov dword ptr [ebp - 8], 39h
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 0f8h], 0fffff9c0h
        ; Exact mapped bytes EB 42: jmp 0x586f5bf5
        __asm _emit 0xeb
        __asm _emit 0x42
        cmp dword ptr [ebp - 0ch], 59h
        ; Exact mapped bytes 7D 1F: jge 0x586f5bd8
        __asm _emit 0x7d
        __asm _emit 0x1f
        mov dword ptr [ebp - 8], 4ch
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 0f8h], 0fffffce0h
        ; Exact mapped bytes EB 1D: jmp 0x586f5bf5
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov dword ptr [ebp - 8], 5fh
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 0f8h], 0
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 0e0h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 14h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0d4h]
        ; Exact mapped bytes E8 94 0D D9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x0d
        __asm _emit 0xd9
        __asm _emit 0xff
        add eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 72 FA 0B 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xfa
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 0e0h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 0d4h]
        ; Exact mapped bytes E8 4B 0D D9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x0d
        __asm _emit 0xd9
        __asm _emit 0xff
        add eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 29 FA 0B 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xfa
        __asm _emit 0x0b
        __asm _emit 0x00
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
