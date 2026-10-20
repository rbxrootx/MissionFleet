// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004910A0 .. +0x2D bytes.
extern "C" __declspec(naked) void __0CEnumUnknown__QAE_PBXI_Z_004910A0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 1
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 4
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 05 00 0D 00: call 0x5610c0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx], 586c3ch
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
