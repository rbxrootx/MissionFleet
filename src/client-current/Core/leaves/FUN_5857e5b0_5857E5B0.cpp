// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857E5B0 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_5857e5b0_5857E5B0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 208h], 0
        ; Exact mapped bytes 75 22: jne 0x5857e5e5
        __asm _emit 0x75
        __asm _emit 0x22
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80011105h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B6 E3 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xe3
        __asm _emit 0x2a
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5C 13 00 00: call 0x5857f940
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
