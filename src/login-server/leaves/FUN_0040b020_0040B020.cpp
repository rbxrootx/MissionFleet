// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040B020 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_0040b020_0040B020() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        and ecx, 0ffffh
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FF 35 02 00: call 0x42e63c
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
