// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5896FE80 .. +0x1F bytes.
extern "C" __declspec(naked) void FUN_5896fe80() {
    __asm {
        ; Exact mapped bytes 8B 41 0C: mov eax, dword ptr [ecx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 15 FC DF 9C 58: mov edx, dword ptr [0x589cdffc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xdf
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 0F AF 44 24 08: imul eax, dword ptr [esp + 8]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 0F AF 54 24 04: imul edx, dword ptr [esp + 4]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 8B 49 08: mov ecx, dword ptr [ecx + 8]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x08
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 0F B7 04 08: movzx eax, word ptr [eax + ecx]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x04
        __asm _emit 0x08
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
