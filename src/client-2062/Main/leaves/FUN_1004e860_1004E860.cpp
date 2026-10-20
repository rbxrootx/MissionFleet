// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1004E860 .. +0xB3 bytes.
extern "C" __declspec(naked) void FUN_1004e860_1004E860() {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov ebx, ecx
        ; Exact mapped bytes E8 A5 A6 0B 00: call 0x10108f10
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xa6
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, dword ptr [ebx + 1b0h]
        xor ebp, ebp
        mov esi, dword ptr [edi + 4]
        cmp esi, ebp
        ; Exact mapped bytes 74 13: je 0x1004e88d
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, esi
        mov esi, dword ptr [esi + 8]
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x1004e889
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        cmp esi, ebp
        ; Exact mapped bytes 75 ED: jne 0x1004e87a
        __asm _emit 0x75
        __asm _emit 0xed
        mov dword ptr [edi + 8], ebp
        mov dword ptr [edi + 4], ebp
        mov dword ptr [edi + 0ch], ebp
        mov ecx, dword ptr [ebx + 3ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 26: je 0x1004e8c3
        __asm _emit 0x74
        __asm _emit 0x26
        mov esi, dword ptr [ecx + 38h]
        mov eax, dword ptr [ebx + 3ch]
        cmp esi, eax
        ; Exact mapped bytes 74 12: je 0x1004e8b9
        __asm _emit 0x74
        __asm _emit 0x12
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x1004e8b1
        __asm _emit 0x74
        __asm _emit 0x06
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, ebp
        mov ecx, esi
        ; Exact mapped bytes 75 E6: jne 0x1004e89d
        __asm _emit 0x75
        __asm _emit 0xe6
        ; Exact mapped bytes EB 0A: jmp 0x1004e8c3
        __asm _emit 0xeb
        __asm _emit 0x0a
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x1004e8c3
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov eax, dword ptr [ebx + 0f0h]
        cmp eax, ebp
        ; Exact mapped bytes 74 0F: je 0x1004e8dc
        __asm _emit 0x74
        __asm _emit 0x0f
        push eax
        ; Exact mapped bytes E8 B1 DE 11 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xde
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebx + 0f0h], ebp
        mov ecx, 1dh
        xor eax, eax
        lea edi, [ebx + 130h]
        mov dword ptr [ebx + 128h], 1
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov eax, dword ptr [ebx + 1ach]
        cmp eax, ebp
        ; Exact mapped bytes 74 0F: je 0x1004e90e
        __asm _emit 0x74
        __asm _emit 0x0f
        push eax
        ; Exact mapped bytes E8 7F DE 11 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xde
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebx + 1ach], ebp
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
