// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C63BA .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_004c63ba_004C63BA() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9E 3F 01 00: call 0x4da36a
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 77 14: ja 0x4c63e9
        __asm _emit 0x77
        __asm _emit 0x14
        push 17bh
        push 671270h
        ; Exact mapped bytes E8 5C 29 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x29
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c63e9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4c63cc
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0ch], 0
        ; Exact mapped bytes 74 1D: je 0x4c6415
        __asm _emit 0x74
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x4c6415
        __asm _emit 0x75
        __asm _emit 0x14
        push 17ch
        push 671270h
        ; Exact mapped bytes E8 30 29 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x29
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c6415
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D4: jne 0x4c63ef
        __asm _emit 0x75
        __asm _emit 0xd4
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
