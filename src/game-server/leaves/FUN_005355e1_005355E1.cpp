// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005355E1 .. +0x1F bytes.
extern "C" __declspec(naked) void FUN_005355e1_005355E1() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 6A 1D: push 0x1d
        __asm _emit 0x6a
        __asm _emit 0x1d
        ; Exact mapped bytes 68 C0 1F 58 00: push 0x581fc0
        __asm _emit 0x68
        __asm _emit 0xc0
        __asm _emit 0x1f
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 C9 41 FC FF: call 0x4f97b9
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x41
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 6A 5B FC FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x5b
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes E8 BE 41 FC FF: call 0x4f97b9
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x41
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 8B 40 5C: mov eax, dword ptr [eax + 0x5c]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x5c
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
