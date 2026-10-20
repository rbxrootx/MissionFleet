// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E47E0 .. +0x16 bytes.
extern "C" __declspec(naked) void FUN_586e47e0() {
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
        ; Exact mapped bytes 8B 48 24: mov ecx, dword ptr [eax + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes E8 BE 78 DA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x78
        __asm _emit 0xda
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
