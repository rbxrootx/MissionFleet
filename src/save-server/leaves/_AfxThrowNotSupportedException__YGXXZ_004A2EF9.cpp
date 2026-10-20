// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A2EF9 .. +0x1D bytes.
extern "C" __declspec(naked) void _AfxThrowNotSupportedException__YGXXZ_004A2EF9() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes C7 45 FC 88 6B 68 00: mov dword ptr [ebp - 4], 0x686b88
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x88
        __asm _emit 0x6b
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 68 F8 D8 64 00: push 0x64d8f8
        __asm _emit 0x68
        __asm _emit 0xf8
        __asm _emit 0xd8
        __asm _emit 0x64
        __asm _emit 0x00
        ; Exact mapped bytes 8D 45 FC: lea eax, [ebp - 4]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 0E 2A FC FF: call 0x465920
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x2a
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
