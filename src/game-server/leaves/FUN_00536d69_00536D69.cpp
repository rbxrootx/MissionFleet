// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00536D69 .. +0x10 bytes.
extern "C" __declspec(naked) void FUN_00536d69_00536D69() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 1C CF FC FF: call 0x503c91
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xcf
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
