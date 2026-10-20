// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58509D80 .. +0x47 bytes.
extern "C" __declspec(naked) void FUN_58509d80_58509D80() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes EB 12: jmp 0x58509d97
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [ebp + 1ch]
        sub eax, 1
        mov dword ptr [ebp + 1ch], eax
        lea ecx, [ebp + 10h]
        ; Exact mapped bytes E8 2A D7 F7 FF: call 0x584874c0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xd7
        __asm _emit 0xf7
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 76 17: jbe 0x58509db4
        __asm _emit 0x76
        __asm _emit 0x17
        movzx ecx, byte ptr [ebp + 18h]
        push ecx
        lea ecx, [ebp + 10h]
        ; Exact mapped bytes E8 16 D7 F7 FF: call 0x584874c0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xd7
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4F D6 FF FF: call 0x58507400
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D1: jmp 0x58509d85
        __asm _emit 0xeb
        __asm _emit 0xd1
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [edx], eax
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        pop ebp
        ret
    }
}
