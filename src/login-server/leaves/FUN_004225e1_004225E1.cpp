// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004225E1 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_004225e1_004225E1() {
    __asm {
        push esi
        ; Exact mapped bytes 8B 35 C4 C1 43 00: mov esi, dword ptr [0x43c1c4]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xc4
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes FF 35 3C AC 44 00: push dword ptr [0x44ac3c]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x3c
        __asm _emit 0xac
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes FF 35 2C AC 44 00: push dword ptr [0x44ac2c]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x2c
        __asm _emit 0xac
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes FF 35 1C AC 44 00: push dword ptr [0x44ac1c]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x1c
        __asm _emit 0xac
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes FF 35 FC AB 44 00: push dword ptr [0x44abfc]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0xfc
        __asm _emit 0xab
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        pop esi
        ret
    }
}
