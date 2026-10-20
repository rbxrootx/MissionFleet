// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58586FE0 .. +0x1A bytes.
extern "C" __declspec(naked) void FUN_58586fe0() {
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
        ; Exact mapped bytes 66 8B 40 24: mov ax, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E8 02: shr ax, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E0 01: and ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x01
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
