// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857E540 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_5857e540_5857E540() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 1fch], 0
        ; Exact mapped bytes 75 22: jne 0x5857e575
        __asm _emit 0x75
        __asm _emit 0x22
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80011105h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 26 E4 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xe4
        __asm _emit 0x2a
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AC 13 00 00: call 0x5857f920
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
