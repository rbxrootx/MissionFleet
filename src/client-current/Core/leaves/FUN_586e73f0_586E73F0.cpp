// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E73F0 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_586e73f0_586E73F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 1f4h]
        mov dword ptr [ebp - 8], edx
        movzx eax, word ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 75 3D 0D 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x3d
        __asm _emit 0x0d
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
