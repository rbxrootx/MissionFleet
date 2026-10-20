// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584E4770 .. +0x4B bytes.
extern "C" __declspec(naked) void FUN_584e4770_584E4770() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 18h], ecx
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes FF 15 48 42 89 58: call dword ptr [0x58894248]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 18h]
        mov byte ptr [ecx + 60h], 1
        movzx edx, word ptr [ebp - 0ch]
        cmp edx, 8
        ; Exact mapped bytes 72 10: jb 0x584e47ad
        __asm _emit 0x72
        __asm _emit 0x10
        movzx eax, word ptr [ebp - 0ch]
        cmp eax, 13h
        ; Exact mapped bytes 73 07: jae 0x584e47ad
        __asm _emit 0x73
        __asm _emit 0x07
        mov ecx, dword ptr [ebp - 18h]
        mov byte ptr [ecx + 60h], 0
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 99 C8 34 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xc8
        __asm _emit 0x34
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
