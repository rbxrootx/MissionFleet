// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DC290 .. +0x1B bytes.
extern "C" __declspec(naked) void FUN_004dc290_004DC290() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 2B 44 06 00: call 0x5406c4
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x44
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 1C: mov eax, dword ptr [eax + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x1c
        ; Exact mapped bytes 89 45 FC: mov dword ptr [ebp - 4], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes E8 7D FE FF FF: call 0x4dc124
        __asm _emit 0xe8
        __asm _emit 0x7d
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
