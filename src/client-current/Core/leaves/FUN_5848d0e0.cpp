// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5848D0E0 .. +0x19 bytes.
extern "C" __declspec(naked) void FUN_5848d0e0() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 89 4D FC: mov dword ptr [ebp - 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 88 FC 04 00 00: mov ecx, dword ptr [eax + 0x4fc]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xfc
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 CB 98 FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x98
        __asm _emit 0xff
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
