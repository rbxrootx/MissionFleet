// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857D460 .. +0x6B bytes.
extern "C" __declspec(naked) void FUN_5857d460_5857D460() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 2E: jne 0x5857d49b
        __asm _emit 0x75
        __asm _emit 0x2e
        push 0
        push 589604e0h
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        add eax, 1
        push eax
        push 589604e0h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 80010fa0h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F8 F4 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xf4
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 2A: jmp 0x5857d4c5
        __asm _emit 0xeb
        __asm _emit 0x2a
        push 0
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        add eax, 1
        push eax
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 80010fa0h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CC F4 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xf4
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
