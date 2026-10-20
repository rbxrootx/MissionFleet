// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888CDB0 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_5888cdb0() {
    __asm {
        add dword ptr [ecx + 5f8h], -1
        mov eax, dword ptr [ecx + 5f8h]
        ; Exact mapped bytes 78 19: js 0x5888cdd8
        __asm _emit 0x78
        __asm _emit 0x19
        nop
        lea edx, [eax + eax*2]
        cmp byte ptr [ecx + edx*8 + 57ch], 0
        ; Exact mapped bytes 75 15: jne 0x5888cde2
        __asm _emit 0x75
        __asm _emit 0x15
        dec eax
        mov dword ptr [ecx + 5f8h], eax
        test eax, eax
        ; Exact mapped bytes 7D E8: jge 0x5888cdc0
        __asm _emit 0x7d
        __asm _emit 0xe8
        mov dword ptr [ecx + 5f8h], 4
        ret
    }
}
