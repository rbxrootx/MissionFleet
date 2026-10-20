// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588F7AA0 .. +0x17 bytes.
extern "C" __declspec(naked) void FUN_588f7aa0() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 8D 50 FF: lea edx, [eax - 1]
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0xff
        ; Exact mapped bytes 83 FA 62: cmp edx, 0x62
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x62
        ; Exact mapped bytes 77 03: ja 0x588f7aaf
        __asm _emit 0x77
        __asm _emit 0x03
        ; Exact mapped bytes 89 41 60: mov dword ptr [ecx + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x60
        ; Exact mapped bytes E8 EC FE FF FF: call 0x588f79a0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
