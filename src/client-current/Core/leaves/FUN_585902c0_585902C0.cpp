// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585902C0 .. +0x44 bytes.
extern "C" __declspec(naked) void FUN_585902c0_585902C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov byte ptr [ebp - 1], 0
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 75 06: jne 0x585902d9
        __asm _emit 0x75
        __asm _emit 0x06
        mov byte ptr [ebp - 1], 1
        ; Exact mapped bytes EB 04: jmp 0x585902dd
        __asm _emit 0xeb
        __asm _emit 0x04
        mov byte ptr [ebp - 1], 0
        movzx eax, byte ptr [ebp - 1]
        push eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F3 5A EF FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x5a
        __asm _emit 0xef
        __asm _emit 0xff
        movzx ecx, byte ptr [ebp - 1]
        push ecx
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E3 5A EF FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x5a
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
