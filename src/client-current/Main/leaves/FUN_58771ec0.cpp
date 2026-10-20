// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58771EC0 .. +0x17 bytes.
extern "C" __declspec(naked) void FUN_58771ec0() {
    __asm {
        ; Exact mapped bytes E8 0B 1A 00 00: call 0x587738d0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 08: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 8B 54 24 04: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 DA 03 00 00: call 0x587722b0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
