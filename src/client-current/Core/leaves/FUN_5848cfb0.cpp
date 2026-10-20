// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5848CFB0 .. +0x1D bytes.
extern "C" __declspec(naked) void FUN_5848cfb0() {
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
        ; Exact mapped bytes 81 C1 4C 03 00 00: add ecx, 0x34c
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x4c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 3B EF FF FF: call 0x5848bf00
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F B6 40 04: movzx eax, byte ptr [eax + 4]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
