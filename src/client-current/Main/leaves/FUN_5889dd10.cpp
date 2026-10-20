// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5889DD10 .. +0x16 bytes.
extern "C" __declspec(naked) void FUN_5889dd10() {
    __asm {
        ; Exact mapped bytes 8B 41 70: mov eax, dword ptr [ecx + 0x70]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x70
        ; Exact mapped bytes 83 78 64 01: cmp dword ptr [eax + 0x64], 1
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x64
        __asm _emit 0x01
        ; Exact mapped bytes 7E 0C: jle 0x5889dd25
        __asm _emit 0x7e
        __asm _emit 0x0c
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 8B 51 64: mov edx, dword ptr [ecx + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x64
        ; Exact mapped bytes 4A: dec edx
        __asm _emit 0x4a
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 3B 96 06 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x96
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
