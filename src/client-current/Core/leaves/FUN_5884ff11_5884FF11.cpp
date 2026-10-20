// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884FF11 .. +0x102 bytes.
extern "C" __declspec(naked) void FUN_5884ff11_5884FF11() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        push dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 CD 05 00 00: call 0x588504ec
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        ; Exact mapped bytes E8 01 F7 FF FF: call 0x5884f626
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 18h]
        xor esi, esi
        mov edx, dword ptr [ebp + 8]
        mov ebx, 1fffffffh
        mov edi, 19930522h
        cmp dword ptr [eax + 20h], esi
        ; Exact mapped bytes 75 22: jne 0x5884ff5e
        __asm _emit 0x75
        __asm _emit 0x22
        cmp dword ptr [edx], 0e06d7363h
        ; Exact mapped bytes 74 1A: je 0x5884ff5e
        __asm _emit 0x74
        __asm _emit 0x1a
        cmp dword ptr [edx], 80000026h
        ; Exact mapped bytes 74 12: je 0x5884ff5e
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ecx]
        and eax, ebx
        cmp eax, edi
        ; Exact mapped bytes 72 0A: jb 0x5884ff5e
        __asm _emit 0x72
        __asm _emit 0x0a
        test byte ptr [ecx + 20h], 1
        ; Exact mapped bytes 0F 85 AD 00 00 00: jne 0x5885000b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test byte ptr [edx + 4], 66h
        ; Exact mapped bytes 74 26: je 0x5884ff8a
        __asm _emit 0x74
        __asm _emit 0x26
        cmp dword ptr [ecx + 4], esi
        ; Exact mapped bytes 0F 84 9E 00 00 00: je 0x5885000b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 1ch], esi
        ; Exact mapped bytes 0F 85 95 00 00 00: jne 0x5885000b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 4D 03 00 00: call 0x588502cf
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 81 00 00 00: jmp 0x5885000b
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ecx + 0ch], esi
        ; Exact mapped bytes 75 1E: jne 0x5884ffad
        __asm _emit 0x75
        __asm _emit 0x1e
        mov eax, dword ptr [ecx]
        and eax, ebx
        cmp eax, 19930521h
        ; Exact mapped bytes 72 05: jb 0x5884ff9f
        __asm _emit 0x72
        __asm _emit 0x05
        cmp dword ptr [ecx + 1ch], esi
        ; Exact mapped bytes 75 0E: jne 0x5884ffad
        __asm _emit 0x75
        __asm _emit 0x0e
        cmp eax, edi
        ; Exact mapped bytes 72 68: jb 0x5885000b
        __asm _emit 0x72
        __asm _emit 0x68
        mov eax, dword ptr [ecx + 20h]
        shr eax, 2
        test al, 1
        ; Exact mapped bytes 74 5E: je 0x5885000b
        __asm _emit 0x74
        __asm _emit 0x5e
        cmp dword ptr [edx], 0e06d7363h
        ; Exact mapped bytes 75 3A: jne 0x5884ffef
        __asm _emit 0x75
        __asm _emit 0x3a
        cmp dword ptr [edx + 10h], 3
        ; Exact mapped bytes 72 34: jb 0x5884ffef
        __asm _emit 0x72
        __asm _emit 0x34
        cmp dword ptr [edx + 14h], edi
        ; Exact mapped bytes 76 2F: jbe 0x5884ffef
        __asm _emit 0x76
        __asm _emit 0x2f
        mov eax, dword ptr [edx + 1ch]
        mov esi, dword ptr [eax + 8]
        test esi, esi
        ; Exact mapped bytes 74 25: je 0x5884ffef
        __asm _emit 0x74
        __asm _emit 0x25
        movzx eax, byte ptr [ebp + 24h]
        push eax
        push dword ptr [ebp + 20h]
        push dword ptr [ebp + 1ch]
        push ecx
        push dword ptr [ebp + 14h]
        mov ecx, esi
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes FF 15 9C 45 89 58: call dword ptr [0x5889459c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        add esp, 20h
        ; Exact mapped bytes EB 1F: jmp 0x5885000e
        __asm _emit 0xeb
        __asm _emit 0x1f
        push dword ptr [ebp + 20h]
        push dword ptr [ebp + 1ch]
        push dword ptr [ebp + 24h]
        push ecx
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 A2 F9 FF FF: call 0x5884f9aa
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 20h
        xor eax, eax
        inc eax
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
