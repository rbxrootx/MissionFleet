// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10015AE0 .. +0x13 bytes.
extern "C" __declspec(naked) void FUN_10015ae0_10015AE0() {
    __asm {
        ; Exact mapped bytes 8B 81 A4 00 00 00: mov eax, dword ptr [ecx + 0xa4]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 08: jne 0x10015af2
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes E8 CE C4 06 00: call 0x10081fc0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xc4
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
