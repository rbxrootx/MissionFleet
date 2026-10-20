// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046000D .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_0046000d_0046000D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 60 24 12 00: call 0x582480
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7D 04: jge 0x46002d
        __asm _emit 0x7d
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 09: jmp 0x460036
        __asm _emit 0xeb
        __asm _emit 0x09
        lea edx, [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 06 00 00 00: call 0x46003c
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
