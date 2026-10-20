// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883C2F7 .. +0x1B bytes.
extern "C" __declspec(naked) void FUN_5883c2f7() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 8B 55 08: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes EB 09: jmp 0x5883c30a
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes 6B C0 1F: imul eax, eax, 0x1f
        __asm _emit 0x6b
        __asm _emit 0xc0
        __asm _emit 0x1f
        ; Exact mapped bytes 0F BE C9: movsx ecx, cl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc9
        ; Exact mapped bytes 03 C1: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xc1
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 75 F1: jne 0x5883c301
        __asm _emit 0x75
        __asm _emit 0xf1
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
