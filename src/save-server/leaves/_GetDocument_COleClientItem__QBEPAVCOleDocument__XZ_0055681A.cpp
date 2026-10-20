// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055681A .. +0x24 bytes.
extern "C" __declspec(naked) void _GetDocument_COleClientItem__QBEPAVCOleDocument__XZ_0055681A() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 12ah
        push 67c1ech
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 2C 3A F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x3a
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 1ch]
        mov esp, ebp
        pop ebp
        ret
    }
}
