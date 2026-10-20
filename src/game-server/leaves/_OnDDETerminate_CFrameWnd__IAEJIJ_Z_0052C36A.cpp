// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052C36A .. +0x29 bytes.
extern "C" __declspec(naked) void _OnDDETerminate_CFrameWnd__IAEJIJ_Z_0052C36A() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        push 3e1h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 B0 28 5E 00: call dword ptr [0x5e28b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
