// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B3300 .. +0x48 bytes.
extern "C" __declspec(naked) void __fassign_004B3300() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 20: je 0x4b332c
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp + 10h]
        push eax
        lea ecx, [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 D7 C3 00 00: call 0x4bf6f0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [edx + 4], ecx
        ; Exact mapped bytes EB 18: jmp 0x4b3344
        __asm _emit 0xeb
        __asm _emit 0x18
        mov edx, dword ptr [ebp + 10h]
        push edx
        lea eax, [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 37 C4 00 00: call 0x4bf770
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx], edx
        mov esp, ebp
        pop ebp
        ret
    }
}
