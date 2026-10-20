// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00434454 .. +0x19 bytes.
extern "C" __declspec(naked) void FUN_00434454_00434454() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 45 FC: lea eax, [ebp - 4]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 68 F0 44 44 00: push 0x4444f0
        __asm _emit 0x68
        __asm _emit 0xf0
        __asm _emit 0x44
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes C7 45 FC 60 F6 44 00: mov dword ptr [ebp - 4], 0x44f660
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x60
        __asm _emit 0xf6
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes E8 BA B1 FE FF: call 0x41f627
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xb1
        __asm _emit 0xfe
        __asm _emit 0xff
    }
}
