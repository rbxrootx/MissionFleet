// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58485DE0 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_58485de0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 66 0F B6 45 08: movzx ax, byte ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E0 01: and ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x01
        ; Exact mapped bytes 66 D1 E0: shl ax, 1
        __asm _emit 0x66
        __asm _emit 0xd1
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov ecx, 0fffdh
        ; Exact mapped bytes 66 23 D1: and dx, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd1
        ; Exact mapped bytes 66 0B D0: or dx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd0
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        mov esp, ebp
        pop ebp
        ret 4
    }
}
