// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053435E .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_0053435e_0053435E() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0A C4 FD FF: call 0x510783
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xc4
        __asm _emit 0xfd
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
