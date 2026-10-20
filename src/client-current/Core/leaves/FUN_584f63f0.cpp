// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F63F0 .. +0x20 bytes.
extern "C" __declspec(naked) void FUN_584f63f0() {
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
        ; Exact mapped bytes 8B 48 30: mov ecx, dword ptr [eax + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x30
        ; Exact mapped bytes E8 5E E6 F8 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xe6
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 00: mov eax, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x00
        ; Exact mapped bytes C1 E8 0A: shr eax, 0xa
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x0a
        ; Exact mapped bytes 25 FF FF 3F 00: and eax, 0x3fffff
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x3f
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
