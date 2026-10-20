// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041FBE6 .. +0x16 bytes.
extern "C" __declspec(naked) void FUN_0041fbe6_0041FBE6() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 00: movzx eax, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x00
        ; Exact mapped bytes F6 80 C1 12 45 00 04: test byte ptr [eax + 0x4512c1], 4
        __asm _emit 0xf6
        __asm _emit 0x80
        __asm _emit 0xc1
        __asm _emit 0x12
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 58: pop eax
        __asm _emit 0x58
        ; Exact mapped bytes 0F 95 C0: setne al
        __asm _emit 0x0f
        __asm _emit 0x95
        __asm _emit 0xc0
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
