// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00440410 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_00440410_00440410() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        push ecx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 7A 0E 00 00: call 0x4412b0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax], edx
        mov eax, dword ptr [ebp + 8]
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 96 83 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x83
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
