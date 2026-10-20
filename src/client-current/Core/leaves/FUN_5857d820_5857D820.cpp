// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857D820 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_5857d820_5857D820() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 20ch], 0
        ; Exact mapped bytes 75 22: jne 0x5857d855
        __asm _emit 0x75
        __asm _emit 0x22
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80011105h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 46 F1 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xf1
        __asm _emit 0x2a
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8C 20 00 00: call 0x5857f8e0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
