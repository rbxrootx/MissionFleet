// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A62FB .. +0xEB bytes.
extern "C" __declspec(naked) void FUN_004a62fb_004A62FB() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        sub eax, 34h
        mov dword ptr [ebp - 8], eax
        push 247h
        push 5d0270h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 40 4E 05 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x4e
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [edx], 0
        mov dword ptr [ebp - 4], 80004005h
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 0F 85 A0 00 00 00: jne 0x4a63da
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x4a63da
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 2ch], 0
        ; Exact mapped bytes 75 78: jne 0x4a63c8
        __asm _emit 0x75
        __asm _emit 0x78
        push 58ec98h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D7 5C 0A 00: call 0x54c034
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x5c
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x4a637a
        __asm _emit 0x75
        __asm _emit 0x14
        push 255h
        push 5d0270h
        ; Exact mapped bytes E8 8B E6 08 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xe6
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a637a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4a6360
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x4a63ad
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov ecx, dword ptr [ebp + 18h]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx], edx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 13: je 0x4a63c6
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 52 38: call dword ptr [edx + 0x38]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x38
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 12: jmp 0x4a63da
        __asm _emit 0xeb
        __asm _emit 0x12
        push 5d02ech
        push 5d0330h
        ; Exact mapped bytes E8 3E 98 02 00: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x98
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
