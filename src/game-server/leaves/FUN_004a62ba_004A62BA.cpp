// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A62BA .. +0x1E bytes.
extern "C" __declspec(naked) void FUN_004a62ba_004A62BA() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 83 E8 34: sub eax, 0x34
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x34
        ; Exact mapped bytes 89 45 FC: mov dword ptr [ebp - 4], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 49 20: mov ecx, dword ptr [ecx + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x20
        ; Exact mapped bytes E8 32 5D 0A 00: call 0x54c004
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x5d
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
