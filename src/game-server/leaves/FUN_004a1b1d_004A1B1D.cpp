// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A1B1D .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_004a1b1d_004A1B1D() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 0ch]
        add eax, 8
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 57 03 09 00: call 0x531e86
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x03
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EC 02 09 00: call 0x531e27
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x02
        __asm _emit 0x09
        __asm _emit 0x00
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
