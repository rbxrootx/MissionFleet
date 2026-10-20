// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052710F .. +0x3D bytes.
extern "C" __declspec(naked) void FUN_0052710f_0052710F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 14: jne 0x527136
        __asm _emit 0x75
        __asm _emit 0x14
        push 17eh
        push 6345f0h
        ; Exact mapped bytes E8 0F 1C 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x527136
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x527119
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        add eax, 8
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
