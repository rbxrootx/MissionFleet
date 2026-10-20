// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586F5E70 .. +0x1DF bytes.
extern "C" __declspec(naked) void FUN_586f5e70_586F5E70() {
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
        ; Exact mapped bytes E8 3B 0B D9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x0b
        __asm _emit 0xd9
        __asm _emit 0xff
        mov esi, eax
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 0d4h]
        ; Exact mapped bytes E8 22 0B D9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x0b
        __asm _emit 0xd9
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 0ch], esi
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 20h], 0dh
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 75 22: jne 0x586f5ed9
        __asm _emit 0x75
        __asm _emit 0x22
        mov dword ptr [ebp - 8], 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 0f8h], 19h
        ; Exact mapped bytes E9 DC 00 00 00: jmp 0x586f5fb5
        __asm _emit 0xe9
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 0dh
        ; Exact mapped bytes 7D 22: jge 0x586f5f01
        __asm _emit 0x7d
        __asm _emit 0x22
        mov dword ptr [ebp - 8], 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 0f8h], 19h
        ; Exact mapped bytes E9 B4 00 00 00: jmp 0x586f5fb5
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 20h
        ; Exact mapped bytes 7D 22: jge 0x586f5f29
        __asm _emit 0x7d
        __asm _emit 0x22
        mov dword ptr [ebp - 8], 13h
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 0f8h], 10h
        ; Exact mapped bytes E9 8C 00 00 00: jmp 0x586f5fb5
        __asm _emit 0xe9
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 33h
        ; Exact mapped bytes 7D 1F: jge 0x586f5f4e
        __asm _emit 0x7d
        __asm _emit 0x1f
        mov dword ptr [ebp - 8], 26h
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 0f8h], 9
        ; Exact mapped bytes EB 67: jmp 0x586f5fb5
        __asm _emit 0xeb
        __asm _emit 0x67
        cmp dword ptr [ebp - 0ch], 46h
        ; Exact mapped bytes 7D 1F: jge 0x586f5f73
        __asm _emit 0x7d
        __asm _emit 0x1f
        mov dword ptr [ebp - 8], 39h
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 0f8h], 4
        ; Exact mapped bytes EB 42: jmp 0x586f5fb5
        __asm _emit 0xeb
        __asm _emit 0x42
        cmp dword ptr [ebp - 0ch], 59h
        ; Exact mapped bytes 7D 1F: jge 0x586f5f98
        __asm _emit 0x7d
        __asm _emit 0x1f
        mov dword ptr [ebp - 8], 4ch
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 0f8h], 1
        ; Exact mapped bytes EB 1D: jmp 0x586f5fb5
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov dword ptr [ebp - 8], 5fh
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 0f8h], 0
        mov ecx, 8
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 0e0h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 14h], eax
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 0d4h]
        ; Exact mapped bytes E8 D4 09 D9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x09
        __asm _emit 0xd9
        __asm _emit 0xff
        add eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 B2 F6 0B 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xf6
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, 8
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 0e0h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 1ch], edx
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 0d4h]
        ; Exact mapped bytes E8 8B 09 D9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x09
        __asm _emit 0xd9
        __asm _emit 0xff
        add eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 69 F6 0B 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xf6
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
