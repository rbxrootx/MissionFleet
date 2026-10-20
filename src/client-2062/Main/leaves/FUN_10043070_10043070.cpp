// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10043070 .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_10043070_10043070() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        add eax, 32h
        mov esi, 0e10h
        cdq
        idiv esi
        pop esi
        test edx, edx
        ; Exact mapped bytes 7D 06: jge 0x1004308b
        __asm _emit 0x7d
        __asm _emit 0x06
        add edx, 0e10h
        mov eax, 51eb851fh
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov dword ptr [ecx + 0a0h], edx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
