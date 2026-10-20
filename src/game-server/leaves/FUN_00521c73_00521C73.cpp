// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00521C73 .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_00521c73_00521C73() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x521c97
        __asm _emit 0x74
        __asm _emit 0x11
        push 6dh
        push 5c6838h
        ; Exact mapped bytes E8 6E 2D 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x521c97
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x521c7d
        __asm _emit 0x75
        __asm _emit 0xe0
        xor eax, eax
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
