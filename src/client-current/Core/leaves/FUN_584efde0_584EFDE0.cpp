// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584EFDE0 .. +0x8E bytes.
extern "C" __declspec(naked) void FUN_584efde0_584EFDE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 98h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 98h], ecx
        lea eax, [ebp - 94h]
        push eax
        ; Exact mapped bytes FF 15 3C 42 89 58: call dword ptr [0x5889423c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        movzx ecx, word ptr [ebp - 88h]
        push ecx
        movzx edx, word ptr [ebp - 8ah]
        push edx
        movzx eax, word ptr [ebp - 8ch]
        push eax
        movzx ecx, word ptr [ebp - 8eh]
        push ecx
        movzx edx, word ptr [ebp - 92h]
        push edx
        movzx eax, word ptr [ebp - 94h]
        push eax
        push 588a2694h
        lea ecx, [ebp - 84h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 20h
        push 0
        lea edx, [ebp - 84h]
        push edx
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 51 0F 00 00: call 0x584f0db0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 E6 11 34 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x11
        __asm _emit 0x34
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
