// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B4B60 .. +0x5E bytes.
extern "C" __declspec(naked) void FUN_587b4b60_587B4B60() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887e060h
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
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588bdc30h
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 3ch], 0
        ; Exact mapped bytes 74 0E: je 0x587b4ba6
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 3ch]
        ; Exact mapped bytes E8 FD 1D CD FF: call 0x584869a0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x1d
        __asm _emit 0xcd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB E9: jmp 0x587b4b8f
        __asm _emit 0xeb
        __asm _emit 0xe9
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F2 1D CD FF: call 0x584869a0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x1d
        __asm _emit 0xcd
        __asm _emit 0xff
        nop
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
        ret
    }
}
