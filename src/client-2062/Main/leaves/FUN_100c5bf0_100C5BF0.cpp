// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100C5BF0 .. +0xD0 bytes.
extern "C" __declspec(naked) void FUN_100c5bf0_100C5BF0() {
    __asm {
        ; Exact mapped bytes A1 10 57 1C 10: mov eax, dword ptr [0x101c5710]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        mov ebx, ecx
        push esi
        mov edx, dword ptr [eax + 118h]
        mov esi, dword ptr [esp + 0ch]
        xor ecx, ecx
        push edi
        test edx, edx
        ; Exact mapped bytes 74 1E: je 0x100c5c28
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edi, dword ptr [edx + 4]
        test edi, edi
        ; Exact mapped bytes 74 11: je 0x100c5c28
        __asm _emit 0x74
        __asm _emit 0x11
        xor eax, eax
        mov al, byte ptr [edi + 330h]
        cmp eax, esi
        ; Exact mapped bytes 75 05: jne 0x100c5c28
        __asm _emit 0x75
        __asm _emit 0x05
        mov ecx, 1
        mov eax, dword ptr [esi*4 + 101ace60h]
        push ecx
        push 0
        push 0
        mov ecx, dword ptr [eax + 24h]
        push 0
        add eax, 4
        push ecx
        mov ecx, dword ptr [ebx + esi*4 + 150h]
        push eax
        push esi
        ; Exact mapped bytes E8 D5 F8 FE FF: call 0x100b5520
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xf8
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [esi*4 + 101ace60h]
        mov eax, dword ptr [esp + 14h]
        test eax, eax
        mov edi, dword ptr [ecx + 20h]
        ; Exact mapped bytes 75 10: jne 0x100c5c6d
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes 8B 15 10 57 1C 10: mov edx, dword ptr [0x101c5710]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 118h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x100c5c74
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes E8 9E 63 F6 FF: call 0x1002c010
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x63
        __asm _emit 0xf6
        __asm _emit 0xff
        sub edi, eax
        mov eax, 10624dd3h
        mov ecx, dword ptr [ebx + esi*4 + 0c4h]
        imul edi
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov edi, edx
        push edi
        ; Exact mapped bytes E8 8C 9A 03 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x9a
        __asm _emit 0x03
        __asm _emit 0x00
        test edi, edi
        ; Exact mapped bytes 75 14: jne 0x100c5cac
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [ebx + esi*4 + 0c4h]
        push -64h
        ; Exact mapped bytes E8 BA 94 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + esi*4 + 0c4h]
        push 0
        ; Exact mapped bytes E8 A6 94 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
