// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58791E70 .. +0x1F bytes.
extern "C" __declspec(naked) void FUN_58791e70() {
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
        ; Exact mapped bytes 83 7D 08 00: cmp dword ptr [ebp + 8], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 7E 06: jle 0x58791e83
        __asm _emit 0x7e
        __asm _emit 0x06
        ; Exact mapped bytes 83 7D 08 64: cmp dword ptr [ebp + 8], 0x64
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x08
        __asm _emit 0x64
        ; Exact mapped bytes 7E 04: jle 0x58791e87
        __asm _emit 0x7e
        __asm _emit 0x04
        ; Exact mapped bytes 32 C0: xor al, al
        __asm _emit 0x32
        __asm _emit 0xc0
        ; Exact mapped bytes EB 02: jmp 0x58791e89
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes B0 01: mov al, 1
        __asm _emit 0xb0
        __asm _emit 0x01
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
