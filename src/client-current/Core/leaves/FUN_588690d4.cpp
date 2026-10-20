// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588690D4 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_588690d4() {
    __asm {
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes B9 80 99 96 58: mov ecx, 0x58969980
        __asm _emit 0xb9
        __asm _emit 0x80
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 87 01: xchg dword ptr [ecx], eax
        __asm _emit 0x87
        __asm _emit 0x01
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
