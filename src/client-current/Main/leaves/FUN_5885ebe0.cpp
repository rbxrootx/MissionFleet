// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885EBE0 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_5885ebe0() {
    __asm {
        mov edx, dword ptr [esp + 4]
        mov ecx, dword ptr [ecx + 760h]
        add edx, 0ffffd8f0h
        mov eax, 134679adh
        imul edx
        sar edx, 8
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov dword ptr [esp + 4], eax
        ; Exact mapped bytes E9 56 87 0A 00: jmp 0x58907360
        __asm _emit 0xe9
        __asm _emit 0x56
        __asm _emit 0x87
        __asm _emit 0x0a
        __asm _emit 0x00
    }
}
