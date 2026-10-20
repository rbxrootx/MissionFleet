// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58764F50 .. +0x7C bytes.
extern "C" __declspec(naked) void FUN_58764f50_58764F50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5C 1A D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x1a
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 45: jne 0x58764fae
        __asm _emit 0x75
        __asm _emit 0x45
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9C 20 D7 FF: call 0x584d7010
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x20
        __asm _emit 0xd7
        __asm _emit 0xff
        cmp eax, 40000000h
        ; Exact mapped bytes 75 33: jne 0x58764fae
        __asm _emit 0x75
        __asm _emit 0x33
        push 0
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E8 9A 00 00: call 0x5876ea70
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2B A3 F1 FF: call 0x5867f2c0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xa3
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 50 BC DE FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xbc
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 03 F0 DE FF: call 0x58553fb0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xf0
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 5ef0h], 40000000h
        ; Exact mapped bytes 75 0B: jne 0x58764fc8
        __asm _emit 0x75
        __asm _emit 0x0b
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 29 A3 00 00: call 0x5876f2f0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
