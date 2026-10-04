// CPannelCommunicatorIDPannel vtable slot +0x08. The original instruction
// order matters for the byte match; a separate portable model gives semantics.
extern "C" __declspec(naked) void FUN_58848b90() {
    __asm {
        mov eax, dword ptr [ecx + 4]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ecx + 0x50], eax
        mov ax, word ptr [ecx + 0x24]
        mov dword ptr [ecx + 0x54], edx
        mov edx, 0xe4ff
        and ax, dx
        mov edx, 0x400
        or ax, dx
        mov dword ptr [ecx + 0x58], 0
        mov word ptr [ecx + 0x24], ax
        ret
    }
}
