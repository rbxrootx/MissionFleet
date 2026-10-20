// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10103CB0 .. +0xF4 bytes.
extern "C" __declspec(naked) void FUN_10103cb0_10103CB0() {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 10h]
        xor ebx, ebx
        mov esi, ecx
        cmp edi, ebx
        ; Exact mapped bytes 74 1B: je 0x10103cda
        __asm _emit 0x74
        __asm _emit 0x1b
        push edi
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        inc eax
        push eax
        ; Exact mapped bytes E8 D3 8A 06 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x8a
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        push edi
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov edi, eax
        mov eax, dword ptr [esi + 7ch]
        push 18h
        cmp eax, ebx
        ; Exact mapped bytes 75 69: jne 0x10103d4c
        __asm _emit 0x75
        __asm _emit 0x69
        ; Exact mapped bytes E8 B8 8A 06 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x8a
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        cmp eax, ebx
        ; Exact mapped bytes 74 3C: je 0x10103d2b
        __asm _emit 0x74
        __asm _emit 0x3c
        mov ecx, dword ptr [esp + 14h]
        mov edx, dword ptr [esp + 18h]
        mov dword ptr [eax], 10176858h
        mov dword ptr [eax + 4], edi
        mov dword ptr [eax + 8], ecx
        mov dword ptr [eax + 10h], ebx
        mov dword ptr [eax + 14h], ebx
        mov dword ptr [eax + 0ch], edx
        mov dword ptr [esi + 78h], eax
        mov dword ptr [esi + 80h], eax
        mov dword ptr [esi + 7ch], eax
        mov eax, dword ptr [esi + 88h]
        inc eax
        pop edi
        mov dword ptr [esi + 88h], eax
        pop esi
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        xor eax, eax
        pop edi
        mov dword ptr [esi + 78h], eax
        mov dword ptr [esi + 80h], eax
        mov dword ptr [esi + 7ch], eax
        mov eax, dword ptr [esi + 88h]
        inc eax
        mov dword ptr [esi + 88h], eax
        pop esi
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes E8 4F 8A 06 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x8a
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        cmp eax, ebx
        ; Exact mapped bytes 74 1F: je 0x10103d77
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [esp + 14h]
        mov edx, dword ptr [esp + 18h]
        mov dword ptr [eax], 10176858h
        mov dword ptr [eax + 4], edi
        mov dword ptr [eax + 8], ecx
        mov dword ptr [eax + 10h], ebx
        mov dword ptr [eax + 14h], ebx
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes EB 02: jmp 0x10103d79
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 7ch]
        pop edi
        mov dword ptr [ecx + 14h], eax
        mov eax, dword ptr [esi + 7ch]
        mov edx, dword ptr [eax + 14h]
        mov dword ptr [edx + 10h], eax
        mov eax, dword ptr [esi + 7ch]
        mov ecx, dword ptr [eax + 14h]
        mov eax, dword ptr [esi + 88h]
        inc eax
        mov dword ptr [esi + 7ch], ecx
        mov dword ptr [esi + 88h], eax
        pop esi
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
