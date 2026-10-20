// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586F5C90 .. +0x1D3 bytes.
extern "C" __declspec(naked) void FUN_586f5c90_586F5C90() {
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
        ; Exact mapped bytes E8 1B 0D D9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x0d
        __asm _emit 0xd9
        __asm _emit 0xff
        mov esi, eax
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 0d4h]
        ; Exact mapped bytes E8 03 0D D9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x0d
        __asm _emit 0xd9
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 0ch], esi
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 20h], 0dh
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 75 21: jne 0x586f5cf7
        __asm _emit 0x75
        __asm _emit 0x21
        mov dword ptr [ebp - 8], 0
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 0f8h], 19h
        ; Exact mapped bytes E9 D6 00 00 00: jmp 0x586f5dcd
        __asm _emit 0xe9
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 0dh
        ; Exact mapped bytes 7D 21: jge 0x586f5d1e
        __asm _emit 0x7d
        __asm _emit 0x21
        mov dword ptr [ebp - 8], 0
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 0f8h], 19h
        ; Exact mapped bytes E9 AF 00 00 00: jmp 0x586f5dcd
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 20h
        ; Exact mapped bytes 7D 21: jge 0x586f5d45
        __asm _emit 0x7d
        __asm _emit 0x21
        mov dword ptr [ebp - 8], 13h
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 0f8h], 10h
        ; Exact mapped bytes E9 88 00 00 00: jmp 0x586f5dcd
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 33h
        ; Exact mapped bytes 7D 1E: jge 0x586f5d69
        __asm _emit 0x7d
        __asm _emit 0x1e
        mov dword ptr [ebp - 8], 26h
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 0f8h], 9
        ; Exact mapped bytes EB 64: jmp 0x586f5dcd
        __asm _emit 0xeb
        __asm _emit 0x64
        cmp dword ptr [ebp - 0ch], 46h
        ; Exact mapped bytes 7D 1E: jge 0x586f5d8d
        __asm _emit 0x7d
        __asm _emit 0x1e
        mov dword ptr [ebp - 8], 39h
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 0f8h], 4
        ; Exact mapped bytes EB 40: jmp 0x586f5dcd
        __asm _emit 0xeb
        __asm _emit 0x40
        cmp dword ptr [ebp - 0ch], 59h
        ; Exact mapped bytes 7D 1E: jge 0x586f5db1
        __asm _emit 0x7d
        __asm _emit 0x1e
        mov dword ptr [ebp - 8], 4ch
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 0f8h], 1
        ; Exact mapped bytes EB 1C: jmp 0x586f5dcd
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov dword ptr [ebp - 8], 5fh
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 0f8h], 0
        mov ecx, 8
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 0e0h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 14h], eax
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 0d4h]
        ; Exact mapped bytes E8 BE 0B D9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x0b
        __asm _emit 0xd9
        __asm _emit 0xff
        add eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 9C F8 0B 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xf8
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, 8
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 0e0h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 1ch], edx
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 0d4h]
        ; Exact mapped bytes E8 77 0B D9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x0b
        __asm _emit 0xd9
        __asm _emit 0xff
        add eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 55 F8 0B 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xf8
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
