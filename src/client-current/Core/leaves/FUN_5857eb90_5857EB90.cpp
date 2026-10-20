// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857EB90 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_5857eb90_5857EB90() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 218h], 0
        ; Exact mapped bytes 75 22: jne 0x5857ebc5
        __asm _emit 0x75
        __asm _emit 0x22
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80011105h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D6 DD 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xdd
        __asm _emit 0x2a
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BC 0D 00 00: call 0x5857f980
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
