// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A8C00 .. +0x51 bytes.
extern "C" __declspec(naked) void FUN_584a8c00_584A8C00() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp - 4]
        and eax, 0fffffffch
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 7fffh
        shl ecx, 2
        mov edx, dword ptr [ebp - 4]
        and edx, 0fffe0003h
        or edx, ecx
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp + 10h]
        and eax, 7fffh
        shl eax, 11h
        mov ecx, dword ptr [ebp - 4]
        and ecx, 1ffffh
        or ecx, eax
        mov dword ptr [ebp - 4], ecx
        lea edx, [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E4 0F 2C 00: call 0x58769c30
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
