// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850EB20 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_5850eb20_5850EB20() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 10c44h]
        add edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 10c44h], edx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
