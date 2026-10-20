// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585D2C70 .. +0x1C bytes.
extern "C" __declspec(naked) void FUN_585d2c70() {
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
        ; Exact mapped bytes 8B 48 50: mov ecx, dword ptr [eax + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x50
        ; Exact mapped bytes E8 BE 1D EB FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x1d
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes 8B 80 AC 00 00 00: mov eax, dword ptr [eax + 0xac]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
