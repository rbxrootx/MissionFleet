// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00526963 .. +0x3D bytes.
extern "C" __declspec(naked) void FUN_00526963_00526963() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x52698a
        __asm _emit 0x75
        __asm _emit 0x14
        push 106h
        push 6345f0h
        ; Exact mapped bytes E8 BB 23 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52698a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x52696d
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        add eax, 8
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
