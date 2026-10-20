// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587BB410 .. +0x7B bytes.
extern "C" __declspec(naked) void FUN_587bb410_587BB410() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5889237dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 10 86 00 00: call 0x587c3a50
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588bdfd0h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D8 04 00 00: call 0x587bb930
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 11: je 0x587bb470
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 71 05 00 00: call 0x587bb9e0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
