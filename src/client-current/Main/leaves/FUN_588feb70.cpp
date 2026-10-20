// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588FEB70 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_588feb70() {
    __asm {
        mov eax, dword ptr [esp + 4]
        lea edx, [eax - 1]
        cmp edx, 63h
        ; Exact mapped bytes 77 1A: ja 0x588feb96
        __asm _emit 0x77
        __asm _emit 0x1a
        lea eax, [eax + eax*2]
        lea eax, [ecx + eax*8 - 14h]
        xor ecx, ecx
        mov byte ptr [eax], cl
        mov dword ptr [eax + 4], ecx
        mov dword ptr [eax + 8], ecx
        mov dword ptr [eax + 0ch], ecx
        mov dword ptr [eax + 10h], ecx
        mov dword ptr [eax + 14h], ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
