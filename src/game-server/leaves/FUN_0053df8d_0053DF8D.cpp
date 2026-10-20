// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053DF8D .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_0053df8d_0053DF8D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 8]
        add eax, 0ach
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CC F4 FA FF: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xf4
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        or ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
