// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857C8F0 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_5857c8f0_5857C8F0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 214h], 0
        ; Exact mapped bytes 75 22: jne 0x5857c925
        __asm _emit 0x75
        __asm _emit 0x22
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80011105h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 76 00 2B 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x2b
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3C 2F 00 00: call 0x5857f860
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
