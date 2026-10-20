// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00421B11 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_00421b11_00421B11() {
    __asm {
        ; Exact mapped bytes 6A 09: push 9
        __asm _emit 0x6a
        __asm _emit 0x09
        ; Exact mapped bytes E8 53 0B 00 00: call 0x42266b
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
