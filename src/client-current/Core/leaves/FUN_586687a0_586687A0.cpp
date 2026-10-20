// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586687A0 .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_586687a0_586687A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 64h], 0
        ; Exact mapped bytes 75 04: jne 0x586687b6
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 3C: jmp 0x586687f2
        __asm _emit 0xeb
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB 0B: jmp 0x586687cc
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 67 CF E2 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xcf
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1E: je 0x586687f0
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 06 0D E5 FF: call 0x584b94e0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x0d
        __asm _emit 0xe5
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x586687ee
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 04: jmp 0x586687f2
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB D1: jmp 0x586687c1
        __asm _emit 0xeb
        __asm _emit 0xd1
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
