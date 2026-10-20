// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044D6D0 .. +0x2D bytes.
extern "C" __declspec(naked) void __0CEnumUnknown__QAE_PBXI_Z_0044D6D0() {
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
        ; Exact mapped bytes E8 D5 98 11 00: call 0x566fc0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x98
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx], 639254h
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
