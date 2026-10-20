// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00449AE6 .. +0x138 bytes.
extern "C" __declspec(naked) void FUN_00449ae6_00449AE6() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 108h], 0
        ; Exact mapped bytes 75 10: jne 0x449b11
        __asm _emit 0x75
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 104h], 0
        ; Exact mapped bytes 0F 84 FC 00 00 00: je 0x449c0d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0f8h], 1
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 104h], 0
        ; Exact mapped bytes 74 69: je 0x449b93
        __asm _emit 0x74
        __asm _emit 0x69
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 108h], 0
        ; Exact mapped bytes 74 5D: je 0x449b93
        __asm _emit 0x74
        __asm _emit 0x5d
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 10ch], 1
        ; Exact mapped bytes 75 26: jne 0x449b68
        __asm _emit 0x75
        __asm _emit 0x26
        mov esi, esp
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 104h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 104h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        cmp esi, esp
        ; Exact mapped bytes E8 7A EC 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xec
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 24: jmp 0x449b8c
        __asm _emit 0xeb
        __asm _emit 0x24
        mov esi, esp
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 108h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 108h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        cmp esi, esp
        ; Exact mapped bytes E8 54 EC 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xec
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 7C: jmp 0x449c0f
        __asm _emit 0xeb
        __asm _emit 0x7c
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 104h], 0
        ; Exact mapped bytes 74 37: je 0x449bd6
        __asm _emit 0x74
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 108h], 0
        ; Exact mapped bytes 75 2B: jne 0x449bd6
        __asm _emit 0x75
        __asm _emit 0x2b
        mov esi, esp
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 104h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 104h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        cmp esi, esp
        ; Exact mapped bytes E8 11 EC 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xec
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 39: jmp 0x449c0f
        __asm _emit 0xeb
        __asm _emit 0x39
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 108h], 0
        ; Exact mapped bytes 74 2B: je 0x449c0d
        __asm _emit 0x74
        __asm _emit 0x2b
        mov esi, esp
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 108h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 108h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        cmp esi, esp
        ; Exact mapped bytes E8 DA EB 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xeb
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x449c0f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop esi
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 C6 EB 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xeb
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
