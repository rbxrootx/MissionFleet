// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054DA1B .. +0xD8 bytes.
extern "C" __declspec(naked) void FUN_0054da1b_0054DA1B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 07: jne 0x54da31
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 B9 00 00 00: jmp 0x54daea
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 52 58: call dword ptr [edx + 0x58]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 85 92 00 00 00: jne 0x54dadb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 1
        ; Exact mapped bytes 0F 85 88 00 00 00: jne 0x54dadb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        lea ecx, [ebp - 8]
        push ecx
        push 1
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 50 30: call dword ptr [eax + 0x30]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x30
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 04: je 0x54da79
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 71: jmp 0x54daea
        __asm _emit 0xeb
        __asm _emit 0x71
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 14: jne 0x54da93
        __asm _emit 0x75
        __asm _emit 0x14
        push 4ach
        push 679318h
        ; Exact mapped bytes E8 B2 B2 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xb2
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54da93
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x54da79
        __asm _emit 0x75
        __asm _emit 0xe0
        mov dword ptr [ebp - 10h], 0
        push 0
        lea eax, [ebp - 10h]
        push eax
        push 1
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 13: je 0x54dad0
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov dword ptr [ebp - 8], 0
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E1: jne 0x54dab7
        __asm _emit 0x75
        __asm _emit 0xe1
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes EB 0F: jmp 0x54daea
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov eax, dword ptr [ebp + 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
