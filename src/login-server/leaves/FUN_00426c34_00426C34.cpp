// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00426C34 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_00426c34_00426C34() {
    __asm {
        mov eax, dword ptr [esp + 4]
        ; Exact mapped bytes 3B 05 80 11 45 00: cmp eax, dword ptr [0x451180]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 72 03: jb 0x426c43
        __asm _emit 0x72
        __asm _emit 0x03
        xor eax, eax
        ret
        mov ecx, eax
        and eax, 1fh
        sar ecx, 5
        lea eax, [eax + eax*8]
        mov ecx, dword ptr [ecx*4 + 451080h]
        mov al, byte ptr [ecx + eax*4 + 4]
        and eax, 40h
        ret
    }
}
