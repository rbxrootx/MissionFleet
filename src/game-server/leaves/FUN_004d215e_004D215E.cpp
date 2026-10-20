// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D215E .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_004d215e_004D215E() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov ecx, 5de870h
        ; Exact mapped bytes E8 81 00 00 00: call 0x4d21f0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x4d218c
        __asm _emit 0x75
        __asm _emit 0x14
        push 95h
        push 5c938ch
        ; Exact mapped bytes E8 79 28 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d218c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4d2172
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
