// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584AED70 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_584aed70() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7D 5E 30 00: call 0x587b4c00
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x5e
        __asm _emit 0x30
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 51 5F 30 00: call 0x587b4ce0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x5f
        __asm _emit 0x30
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret 4
    }
}
