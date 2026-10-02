// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B3FD0 .. +0x74 bytes.
extern "C" __declspec(naked) void FUN_587b3fd0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov eax, dword ptr [ebp + 20h]
        push eax
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        ; Exact mapped bytes E8 DD 05 00 00: call 0x587b45c0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp + 20h]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        ; Exact mapped bytes E8 56 05 00 00: call 0x587b4550
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp + 24h]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 B0 40 89 58: call dword ptr [0x588940b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 13 D0 07 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xd0
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 10h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 20 00: ret 0x20
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
