// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58735FA0 .. +0x6E bytes.
extern "C" __declspec(naked) void FUN_58735fa0() {
    __asm {
        sub esp, 88h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 84h], eax
        mov al, byte ptr [esp + 8ch]
        mov ecx, dword ptr [ecx + 0ch]
        mov byte ptr [esp], 1
        mov byte ptr [esp + 1], 2
        mov byte ptr [esp + 2], 0
        mov byte ptr [esp + 3], 7
        mov edx, dword ptr [esp]
        mov dword ptr [esp + 4], edx
        push 7
        lea edx, [esp + 8]
        mov byte ptr [esp + 0eh], al
        ; Exact mapped bytes 66 8B 84 24 94 00 00 00: mov ax, word ptr [esp + 0x94]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edx
        push 0ch
        ; Exact mapped bytes 66 89 44 24 14: mov word ptr [esp + 0x14], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes E8 69 E2 1A 00: call 0x588e4260
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xe2
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 84h]
        xor ecx, esp
        ; Exact mapped bytes E8 D5 6B 24 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x6b
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 88h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
