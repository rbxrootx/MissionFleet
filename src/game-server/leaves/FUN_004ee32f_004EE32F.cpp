// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EE32F .. +0x56 bytes.
extern "C" __declspec(naked) void FUN_004ee32f_004EE32F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 78 2B 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x2b
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [eax], -1
        ; Exact mapped bytes 74 14: je 0x4ee35a
        __asm _emit 0x74
        __asm _emit 0x14
        push 226h
        push 5c4bd4h
        ; Exact mapped bytes E8 AB 66 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x66
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ee35a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D9: jne 0x4ee339
        __asm _emit 0x75
        __asm _emit 0xd9
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 51 2B 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x2b
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 3B 05 C0 4B 5C 00: cmp eax, dword ptr [0x5c4bc0]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0xc0
        __asm _emit 0x4b
        __asm _emit 0x5c
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x4ee37e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 41 2B 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x2b
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [eax], 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
