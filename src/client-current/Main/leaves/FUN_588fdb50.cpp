// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588FDB50 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_588fdb50() {
    __asm {
        ; Exact mapped bytes A1 F0 45 A2 58: mov eax, dword ptr [0x58a245f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 68h]
        ; Exact mapped bytes 66 83 49 24 04: or word ptr [ecx + 0x24], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x49
        __asm _emit 0x24
        __asm _emit 0x04
        mov edx, eax
        add eax, 68h
        mov eax, dword ptr [eax]
        ; Exact mapped bytes 66 83 48 24 02: or word ptr [eax + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x02
        mov byte ptr [edx + 0a4h], 1
        ret
    }
}
