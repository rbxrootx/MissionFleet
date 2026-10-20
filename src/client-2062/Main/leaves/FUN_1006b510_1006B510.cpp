// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1006B510 .. +0x19 bytes.
extern "C" __declspec(naked) void FUN_1006b510_1006B510() {
    __asm {
        ; Exact mapped bytes B8 01 00 00 00: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 81 74 0A 01 00 00: mov byte ptr [ecx + 0x10a74], 0
        __asm _emit 0xc6
        __asm _emit 0x81
        __asm _emit 0x74
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 81 78 04 01 00: mov dword ptr [ecx + 0x10478], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 81 74 0A 02 00: mov dword ptr [ecx + 0x20a74], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x74
        __asm _emit 0x0a
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
