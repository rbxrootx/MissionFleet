// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857F9E0 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_5857f9e0_5857F9E0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 4D 08: mov cx, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 88 26 01 00 00: mov word ptr [eax + 0x126], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, word ptr [ebp + 8]
        cmp edx, 6
        ; Exact mapped bytes 7C 0F: jl 0x5857fa0d
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov eax, 2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 28 01 00 00: mov word ptr [ecx + 0x128], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
