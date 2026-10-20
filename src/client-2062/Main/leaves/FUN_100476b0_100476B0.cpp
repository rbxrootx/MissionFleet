// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100476B0 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_100476b0_100476B0() {
    __asm {
        mov edx, dword ptr [esp + 4]
        mov eax, dword ptr [esp + 8]
        cmp edx, 1
        mov dword ptr [ecx + 68h], edx
        mov dword ptr [ecx + 60h], eax
        ; Exact mapped bytes 75 22: jne 0x100476e5
        __asm _emit 0x75
        __asm _emit 0x22
        mov edx, dword ptr [ecx + 50h]
        mov edx, dword ptr [edx*4 + 101ad160h]
        imul edx, eax
        mov eax, dword ptr [ecx + 8]
        mov dword ptr [ecx + 64h], edx
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 3
        mov dword ptr [ecx + 58h], eax
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
