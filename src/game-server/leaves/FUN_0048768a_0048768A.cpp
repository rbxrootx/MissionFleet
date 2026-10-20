// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048768A .. +0x118 bytes.
extern "C" __declspec(naked) void FUN_0048768a_0048768A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 4], -1
        ; Exact mapped bytes 0F 84 DA 00 00 00: je 0x48778f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 0ach], 0
        ; Exact mapped bytes 0F 84 CA 00 00 00: je 0x48778f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 95 00 00 00: je 0x487770
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 0
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 20h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        lea eax, [ebp - 0ch]
        push eax
        push 1
        lea ecx, [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 60 29 5E 00: call dword ptr [0x5e2960]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 D8 10 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 4C: jne 0x487759
        __asm _emit 0x75
        __asm _emit 0x4c
        mov esi, esp
        ; Exact mapped bytes FF 15 50 29 5E 00: call dword ptr [0x5e2950]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 C4 10 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 3e5h
        ; Exact mapped bytes 75 02: jne 0x48772a
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 46: jmp 0x487770
        __asm _emit 0xeb
        __asm _emit 0x46
        cmp dword ptr [ebp - 10h], 2747h
        ; Exact mapped bytes 74 09: je 0x48773c
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [ebp - 10h], 274ah
        ; Exact mapped bytes 75 04: jne 0x487740
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 51: jmp 0x487791
        __asm _emit 0xeb
        __asm _emit 0x51
        cmp dword ptr [ebp - 10h], 2733h
        ; Exact mapped bytes 74 10: je 0x487759
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 D2 13 00 00: call 0x488b27
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 38: jmp 0x487791
        __asm _emit 0xeb
        __asm _emit 0x38
        mov edx, dword ptr [ebp - 8]
        sub edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        add eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E9 61 FF FF FF: jmp 0x4876d1
        __asm _emit 0xe9
        __asm _emit 0x61
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 4ch], 0
        ; Exact mapped bytes 74 0F: je 0x487788
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 4ch]
        ; Exact mapped bytes E8 C8 1C 00 00: call 0x489450
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x487791
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop esi
        add esp, 14h
        cmp ebp, esp
        ; Exact mapped bytes E8 44 10 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
