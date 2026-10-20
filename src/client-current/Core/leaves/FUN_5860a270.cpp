// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5860A270 .. +0x17 bytes.
extern "C" __declspec(naked) void FUN_5860a270() {
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
        ; Exact mapped bytes 8B 0D 48 06 96 58: mov ecx, dword ptr [0x58960648]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CE A1 0B 00: call 0x586c4450
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xa1
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
