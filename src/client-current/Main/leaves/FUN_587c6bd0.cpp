// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C6BD0 .. +0x1C bytes.
extern "C" __declspec(naked) void FUN_587c6bd0() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8D 71 58: lea esi, [ecx + 0x58]
        __asm _emit 0x8d
        __asm _emit 0x71
        __asm _emit 0x58
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 35 FE FF FF: call 0x587c6a10
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes C7 06 8C AD 99 58: mov dword ptr [esi], 0x5899ad8c
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0x8c
        __asm _emit 0xad
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes E8 2F AF 1A 00: call 0x58971b16
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xaf
        __asm _emit 0x1a
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
