// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850BC1F .. +0x21 bytes.
extern "C" __declspec(naked) void Catch_All_5850bc1f_5850BC1F() {
    __asm {
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 14h]
        add edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 2ch], edx
        push 1
        push 4
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 F7 06 00 00: call 0x5850c330
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, 5850bc49h
        ret
    }
}
