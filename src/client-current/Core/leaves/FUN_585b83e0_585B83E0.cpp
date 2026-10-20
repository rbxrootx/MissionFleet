// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585B83E0 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_585b83e0_585B83E0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 3c8h
        push 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1028h]
        push ecx
        ; Exact mapped bytes E8 13 4A 29 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x4a
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 0ch
        push 3c8h
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1028h]
        push ecx
        ; Exact mapped bytes E8 78 44 29 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x44
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 0ch
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
