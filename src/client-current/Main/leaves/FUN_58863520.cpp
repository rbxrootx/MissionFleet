// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58863520 .. +0x13 bytes.
extern "C" __declspec(naked) void FUN_58863520() {
    __asm {
        ; Exact mapped bytes 8B 89 A8 00 00 00: mov ecx, dword ptr [ecx + 0xa8]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 BC 00 00 00: mov eax, dword ptr [ecx + 0xbc]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 FE 47 F6 FF: call 0x587c7d30
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x47
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
