// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005707BA .. +0xE2 bytes.
extern "C" __declspec(naked) void FUN_005707ba_005707BA() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 3
        ; Exact mapped bytes 0F 87 9A 00 00 00: ja 0x570870
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 24 8D 9C 08 57 00: jmp dword ptr [ecx*4 + 0x57089c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x9c
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 38h], 0
        ; Exact mapped bytes 74 21: je 0x57080a
        __asm _emit 0x74
        __asm _emit 0x21
        push 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B5 00 00 00: call 0x5708ac
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 38h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 38h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 18: call dword ptr [eax + 0x18]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x18
        ; Exact mapped bytes E9 84 00 00 00: jmp 0x570893
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 34h], 0
        ; Exact mapped bytes 74 12: je 0x57082a
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 34h]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 34h]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 1C: call dword ptr [ecx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x1c
        ; Exact mapped bytes EB 67: jmp 0x570893
        __asm _emit 0xeb
        __asm _emit 0x67
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 34h], 0
        ; Exact mapped bytes 74 12: je 0x570847
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 34h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 34h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 20: call dword ptr [edx + 0x20]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x20
        ; Exact mapped bytes EB 4A: jmp 0x570893
        __asm _emit 0xeb
        __asm _emit 0x4a
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 34h], 0
        ; Exact mapped bytes 74 1C: je 0x57086e
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 34h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 34h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        ; Exact mapped bytes EB 23: jmp 0x570893
        __asm _emit 0xeb
        __asm _emit 0x23
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x57088d
        __asm _emit 0x74
        __asm _emit 0x14
        push 94h
        push 5d0930h
        ; Exact mapped bytes E8 78 41 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x41
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x57088d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x570870
        __asm _emit 0x75
        __asm _emit 0xdd
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
