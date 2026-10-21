// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588F7D10 .. +0x1E bytes.
extern "C" __declspec(naked) void FUN_588f7d10() {
    __asm {
        ; Exact mapped bytes 0F B6 41 6A: movzx eax, byte ptr [ecx + 0x6a]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x41
        __asm _emit 0x6a
        ; Exact mapped bytes 3B 44 24 04: cmp eax, dword ptr [esp + 4]
        __asm _emit 0x3b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 75 0F: jne 0x588f7d29
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes 0F B6 49 6B: movzx ecx, byte ptr [ecx + 0x6b]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x49
        __asm _emit 0x6b
        ; Exact mapped bytes 3B 4C 24 08: cmp ecx, dword ptr [esp + 8]
        __asm _emit 0x3b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 75 05: jne 0x588f7d29
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes B0 01: mov al, 1
        __asm _emit 0xb0
        __asm _emit 0x01
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 32 C0: xor al, al
        __asm _emit 0x32
        __asm _emit 0xc0
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
