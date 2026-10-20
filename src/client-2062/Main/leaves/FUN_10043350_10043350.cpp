// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10043350 .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_10043350_10043350() {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov edx, dword ptr [ecx + 0e0h]
        sub eax, edx
        mov dword ptr [ecx + 104h], 0
        ; Exact mapped bytes 79 02: jns 0x1004336a
        __asm _emit 0x79
        __asm _emit 0x02
        xor eax, eax
        mov edx, eax
        neg edx
        sbb edx, edx
        and edx, 40000000h
        mov dword ptr [ecx + 0f8h], edx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
