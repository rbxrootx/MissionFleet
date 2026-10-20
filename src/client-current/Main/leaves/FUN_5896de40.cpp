// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5896DE40 .. +0x19 bytes.
extern "C" __declspec(naked) void FUN_5896de40() {
    __asm {
        ; Exact mapped bytes 8B 41 0C: mov eax, dword ptr [ecx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes 0F AF 44 24 08: imul eax, dword ptr [esp + 8]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 8B 54 24 04: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 8B 49 08: mov ecx, dword ptr [ecx + 8]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x08
        ; Exact mapped bytes 8D 04 50: lea eax, [eax + edx*2]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x50
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
