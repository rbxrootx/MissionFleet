// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58652AE0 .. +0x34 bytes.
extern "C" __declspec(naked) void FUN_58652ae0_58652AE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 300h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0d4h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 83 86 16 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x86
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
