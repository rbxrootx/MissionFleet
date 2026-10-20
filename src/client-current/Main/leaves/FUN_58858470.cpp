// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58858470 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_58858470() {
    __asm {
        mov edx, dword ptr [esp + 4]
        mov ecx, dword ptr [ecx + 0aach]
        add edx, 0ffffd8f0h
        mov eax, 134679adh
        imul edx
        sar edx, 8
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov dword ptr [esp + 4], eax
        ; Exact mapped bytes E9 C6 EE 0A 00: jmp 0x58907360
        __asm _emit 0xe9
        __asm _emit 0xc6
        __asm _emit 0xee
        __asm _emit 0x0a
        __asm _emit 0x00
    }
}
