// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584E5AD0 .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_584e5ad0_584E5AD0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 81 65 08 00: call 0x5856c060
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x65
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, 0fffeh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 48 24: mov word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 CA 02: or dx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xca
        __asm _emit 0x02
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        push 100h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2C FA 2C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xfa
        __asm _emit 0x2c
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
