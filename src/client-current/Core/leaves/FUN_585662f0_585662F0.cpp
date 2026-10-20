// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585662F0 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_585662f0_585662F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 88 26 02 00 00: mov cx, word ptr [eax + 0x226]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x26
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E9 04: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 7F: and cx, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x7f
        movzx edx, cx
        imul eax, edx, 0ah
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 190h
        ; Exact mapped bytes 7E 07: jle 0x58566324
        __asm _emit 0x7e
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 190h
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
