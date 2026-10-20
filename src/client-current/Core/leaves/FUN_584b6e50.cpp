// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B6E50 .. +0x1C bytes.
extern "C" __declspec(naked) void FUN_584b6e50() {
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
        ; Exact mapped bytes 8B 48 18: mov ecx, dword ptr [eax + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x18
        ; Exact mapped bytes 03 4D 08: add ecx, dword ptr [ebp + 8]
        __asm _emit 0x03
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 89 4A 20: mov dword ptr [edx + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x20
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
