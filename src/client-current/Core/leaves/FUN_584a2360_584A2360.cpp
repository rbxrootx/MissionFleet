// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A2360 .. +0x30 bytes.
extern "C" __declspec(naked) void FUN_584a2360_584A2360() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 74 1A: je 0x584a238c
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 8], edx
        push 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C5 13 00 00: call 0x584a3750
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
