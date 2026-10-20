// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00464726 .. +0x78 bytes.
extern "C" __declspec(naked) void FUN_00464726_00464726() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 92 C4 00 00 00: call dword ptr [edx + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 2bh
        push 67d074h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 0D 5B 07 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x5b
        __asm _emit 0x07
        __asm _emit 0x00
        push 63d0d0h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 30 5A 07 00: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x5a
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x464775
        __asm _emit 0x75
        __asm _emit 0x11
        push 2ch
        push 67d074h
        ; Exact mapped bytes E8 D0 45 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x45
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x464775
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D8: jne 0x464753
        __asm _emit 0x75
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 36 45 11 00: call 0x578cb9
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x45
        __asm _emit 0x11
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x464789
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 0C: jmp 0x464795
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7E 11 11 00: call 0x575913
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x11
        __asm _emit 0x11
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
