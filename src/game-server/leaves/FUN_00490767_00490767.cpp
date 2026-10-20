// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00490767 .. +0x51 bytes.
extern "C" __declspec(naked) void FUN_00490767_00490767() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 28h], ecx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 14: je 0x49078a
        __asm _emit 0x74
        __asm _emit 0x14
        push 0ah
        lea eax, [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 0B 0D 02 00: call 0x4b1490
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 12: jmp 0x49079c
        __asm _emit 0xeb
        __asm _emit 0x12
        push 0ah
        lea edx, [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 37 0D 02 00: call 0x4b14d0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        lea ecx, [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 28h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 92 8C 00 00 00: call dword ptr [edx + 0x8c]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
