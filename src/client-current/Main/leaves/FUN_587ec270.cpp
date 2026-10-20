// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587EC270 .. +0x1B bytes.
extern "C" __declspec(naked) void FUN_587ec270() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 04: mov dword ptr [esp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 0F B6 80 54 03 00 00: movzx eax, byte ptr [eax + 0x354]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x80
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8C 81 F0 18 02 00: mov ecx, dword ptr [ecx + eax*4 + 0x218f0]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x81
        __asm _emit 0xf0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 A5 81 0C 00: jmp 0x588b4430
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x81
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
