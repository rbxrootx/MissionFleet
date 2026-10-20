// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045EC08 .. +0x55 bytes.
extern "C" __declspec(naked) void FUN_0045ec08_0045EC08() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 E4 D0 0E 00: call 0x54bd00
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xd0
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 74 14: je 0x45ec35
        __asm _emit 0x74
        __asm _emit 0x14
        push 0b05h
        push 678664h
        ; Exact mapped bytes E8 10 A1 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x45ec35
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D9: jne 0x45ec14
        __asm _emit 0x75
        __asm _emit 0xd9
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        lea edx, [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 20 04 00 00: call 0x45f074
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
