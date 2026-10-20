// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588FC930 .. +0x56 bytes.
extern "C" __declspec(naked) void FUN_588fc930() {
    __asm {
        xor eax, eax
        ; Exact mapped bytes 66 89 81 94 00 00 00: mov word ptr [ecx + 0x94], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ecx + 98h], 1
        mov edx, 0fffdh
        ; Exact mapped bytes 66 21 51 24: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        mov edx, dword ptr [esp + 0ch]
        mov eax, 7dh
        ; Exact mapped bytes 66 89 81 94 00 00 00: mov word ptr [ecx + 0x94], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [esp + 8]
        push 0
        lea ecx, [eax*4]
        push ecx
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        push eax
        movzx eax, byte ptr [esp + 14h]
        push eax
        push 80015103h
        ; Exact mapped bytes E8 ED 42 07 00: call 0x58970c70
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x42
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
