// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58591310 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_58591310_58591310() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx]
        ; Exact mapped bytes E8 C7 74 00 00: call 0x585987f0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
