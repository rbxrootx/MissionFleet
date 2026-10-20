// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58523550 .. +0x1D bytes.
extern "C" __declspec(naked) void FUN_58523550() {
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
        ; Exact mapped bytes 66 8B 48 2C: mov cx, word ptr [eax + 0x2c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x2c
        ; Exact mapped bytes 66 83 C9 01: or cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x01
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 66 89 4A 2C: mov word ptr [edx + 0x2c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x2c
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
