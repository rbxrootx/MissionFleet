// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585D2EB0 .. +0x19 bytes.
extern "C" __declspec(naked) void FUN_585d2eb0() {
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
        ; Exact mapped bytes 66 8B 48 64: mov cx, word ptr [eax + 0x64]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x64
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        ; Exact mapped bytes 0F B7 C1: movzx eax, cx
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc1
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
