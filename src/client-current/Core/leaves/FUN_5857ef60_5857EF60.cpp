// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857EF60 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_5857ef60_5857EF60() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 210h], 0
        ; Exact mapped bytes 75 22: jne 0x5857ef95
        __asm _emit 0x75
        __asm _emit 0x22
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80011105h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 06 DA 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xda
        __asm _emit 0x2a
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0C 0A 00 00: call 0x5857f9a0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
