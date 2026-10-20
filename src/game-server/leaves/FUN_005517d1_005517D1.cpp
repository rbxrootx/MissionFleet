// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005517D1 .. +0xB1 bytes.
extern "C" __declspec(naked) void FUN_005517d1_005517D1() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 EF B1 FB FF: call 0x50c9d4
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xb1
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x5517f0
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 8B 00 00 00: jmp 0x55187b
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 74h], 0
        ; Exact mapped bytes 74 7D: je 0x551876
        __asm _emit 0x74
        __asm _emit 0x7d
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 4ch], 0
        ; Exact mapped bytes 75 74: jne 0x551876
        __asm _emit 0x75
        __asm _emit 0x74
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 78h], 0
        ; Exact mapped bytes 74 1C: je 0x551827
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 78h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 78h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 78h], 0
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x551802
        __asm _emit 0x75
        __asm _emit 0xd5
        lea edx, [ebp - 8]
        push edx
        push 0
        push 4011012h
        push 0
        ; Exact mapped bytes FF 15 88 29 5E 00: call dword ptr [0x5e2988]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 04: je 0x55184d
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 2E: jmp 0x55187b
        __asm _emit 0xeb
        __asm _emit 0x2e
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 14: jne 0x551867
        __asm _emit 0x75
        __asm _emit 0x14
        push 1c5h
        push 5cf7b8h
        ; Exact mapped bytes E8 9E 31 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x31
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x551867
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x55184d
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 78h], edx
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
