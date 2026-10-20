// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042EF21 .. +0x4F bytes.
extern "C" __declspec(naked) void FUN_0042ef21_0042EF21() {
    __asm {
        push ebp
        mov ebp, esp
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 15 14 C5 43 00: call dword ptr [0x43c514]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        not ecx
        and ecx, eax
        or ecx, dword ptr [ebp + 14h]
        cmp eax, ecx
        ; Exact mapped bytes 75 04: jne 0x42ef42
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 2A: jmp 0x42ef6c
        __asm _emit 0xeb
        __asm _emit 0x2a
        push ecx
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 15 DC C4 43 00: call dword ptr [0x43c4dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 18h]
        xor ecx, ecx
        cmp eax, ecx
        ; Exact mapped bytes 74 11: je 0x42ef69
        __asm _emit 0x74
        __asm _emit 0x11
        or al, 17h
        push eax
        push ecx
        push ecx
        push ecx
        push ecx
        push ecx
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 15 D4 C4 43 00: call dword ptr [0x43c4d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        push 1
        pop eax
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
