// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5868F6A0 .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_5868f6a0_5868F6A0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0a8h], 1
        ; Exact mapped bytes 75 04: jne 0x5868f6b7
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 22: jmp 0x5868f6d9
        __asm _emit 0xeb
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0a8h], 1
        movzx edx, word ptr [ebp + 8]
        push edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CC 79 F3 FF: call 0x585c70a0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x79
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
