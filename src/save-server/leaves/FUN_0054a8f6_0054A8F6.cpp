// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054A8F6 .. +0x55 bytes.
extern "C" __declspec(naked) void FUN_0054a8f6_0054A8F6() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x54a917
        __asm _emit 0x75
        __asm _emit 0x14
        push 98h
        push 678964h
        ; Exact mapped bytes E8 2E E4 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xe4
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54a917
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x54a8fd
        __asm _emit 0x75
        __asm _emit 0xe0
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x54a93f
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 03: jmp 0x54a942
        __asm _emit 0xeb
        __asm _emit 0x03
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
