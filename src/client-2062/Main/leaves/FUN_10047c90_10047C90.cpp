// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10047C90 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_10047c90_10047C90() {
    __asm {
        mov edx, dword ptr [esp + 4]
        mov eax, dword ptr [esp + 8]
        cmp edx, 1
        mov dword ptr [ecx + 64h], edx
        mov dword ptr [ecx + 68h], eax
        ; Exact mapped bytes 75 21: jne 0x10047cc4
        __asm _emit 0x75
        __asm _emit 0x21
        mov edx, dword ptr [ecx + 78h]
        mov edx, dword ptr [edx*4 + 101ad160h]
        imul edx, eax
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov dword ptr [ecx + 74h], edx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
