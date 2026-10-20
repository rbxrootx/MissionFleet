// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588926F0 .. +0x11 bytes.
extern "C" __declspec(naked) void Unwind_588926f0() {
    __asm {
        ; Exact mapped bytes 8B 8D 5C FE FF FF: mov ecx, dword ptr [ebp - 0x1a4]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x5c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 81 C1 20 02 00 00: add ecx, 0x220
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 BF AD F9 FF: jmp 0x5882d4c0
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0xad
        __asm _emit 0xf9
        __asm _emit 0xff
    }
}
