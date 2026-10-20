// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857F010 .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_5857f010_5857F010() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 23: je 0x5857f049
        __asm _emit 0x74
        __asm _emit 0x23
        push 0
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        push 0
        push 800100f0h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 4A D9 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xd9
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1A: jmp 0x5857f063
        __asm _emit 0xeb
        __asm _emit 0x1a
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 4]
        push eax
        push 1
        push 800100f0h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 2E D9 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xd9
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
