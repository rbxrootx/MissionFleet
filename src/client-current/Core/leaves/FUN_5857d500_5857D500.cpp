// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857D500 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_5857d500_5857D500() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 134h], 0
        ; Exact mapped bytes 75 28: jne 0x5857d53b
        __asm _emit 0x75
        __asm _emit 0x28
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        push 800100a0h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 62 F4 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xf4
        __asm _emit 0x2a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 134h], 20000000h
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
