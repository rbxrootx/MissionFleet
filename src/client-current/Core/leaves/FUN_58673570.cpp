// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58673570 .. +0x1D bytes.
extern "C" __declspec(naked) void FUN_58673570() {
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
        ; Exact mapped bytes 8B 88 F0 02 00 00: mov ecx, dword ptr [eax + 0x2f0]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xf0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 2B 8B E1 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x8b
        __asm _emit 0xe1
        __asm _emit 0xff
        ; Exact mapped bytes 66 0F B6 00: movzx ax, byte ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
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
