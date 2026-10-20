// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850BA60 .. +0x14 bytes.
extern "C" __declspec(naked) void FUN_5850ba60() {
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
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 41 18: mov eax, dword ptr [ecx + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x18
        ; Exact mapped bytes 8B 51 1C: mov edx, dword ptr [ecx + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x1c
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
