// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58815400 .. +0x1A bytes.
extern "C" __declspec(naked) void FUN_58815400() {
    __asm {
        ; Exact mapped bytes 83 7C 24 08 02: cmp dword ptr [esp + 8], 2
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x02
        ; Exact mapped bytes 75 0E: jne 0x58815415
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 3B 41 54: cmp eax, dword ptr [ecx + 0x54]
        __asm _emit 0x3b
        __asm _emit 0x41
        __asm _emit 0x54
        ; Exact mapped bytes 75 05: jne 0x58815415
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 4B FD FF FF: call 0x58815160
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
