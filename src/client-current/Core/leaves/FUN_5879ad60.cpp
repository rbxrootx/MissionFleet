// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879AD60 .. +0x20 bytes.
extern "C" __declspec(naked) void FUN_5879ad60() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 8D 4C 24 DC: lea ecx, [esp - 0x24]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0xdc
        ; Exact mapped bytes 83 EC 24: sub esp, 0x24
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x24
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 8F DC FF FF: call 0x58798a00
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 CC BA 8E 58: push 0x588ebacc
        __asm _emit 0x68
        __asm _emit 0xcc
        __asm _emit 0xba
        __asm _emit 0x8e
        __asm _emit 0x58
        ; Exact mapped bytes 8D 44 24 04: lea eax, [esp + 4]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 65 26 0B 00: call 0x5884d3e5
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x26
        __asm _emit 0x0b
        __asm _emit 0x00
    }
}
