// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DC275 .. +0x1B bytes.
extern "C" __declspec(naked) void FUN_004dc275_004DC275() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 46 44 06 00: call 0x5406c4
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x44
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 24: mov eax, dword ptr [eax + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x24
        ; Exact mapped bytes 89 45 FC: mov dword ptr [ebp - 4], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes E8 98 FE FF FF: call 0x4dc124
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xfe
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
