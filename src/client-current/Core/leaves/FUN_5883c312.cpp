// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883C312 .. +0x1F bytes.
extern "C" __declspec(naked) void FUN_5883c312() {
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
        ; Exact mapped bytes EB 0B: jmp 0x5883c327
        __asm _emit 0xeb
        __asm _emit 0x0b
        ; Exact mapped bytes 6B C0 1F: imul eax, eax, 0x1f
        __asm _emit 0x6b
        __asm _emit 0xc0
        __asm _emit 0x1f
        ; Exact mapped bytes 8D 52 02: lea edx, [edx + 2]
        __asm _emit 0x8d
        __asm _emit 0x52
        __asm _emit 0x02
        ; Exact mapped bytes 0F B7 C9: movzx ecx, cx
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc9
        ; Exact mapped bytes 03 C1: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xc1
        ; Exact mapped bytes 0F B7 0A: movzx ecx, word ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x0a
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 ED: jne 0x5883c31c
        __asm _emit 0x75
        __asm _emit 0xed
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
