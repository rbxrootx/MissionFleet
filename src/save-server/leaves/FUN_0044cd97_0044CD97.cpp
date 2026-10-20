// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044CD97 .. +0x51 bytes.
extern "C" __declspec(naked) void FUN_0044cd97_0044CD97() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 28h], ecx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 14: je 0x44cdba
        __asm _emit 0x74
        __asm _emit 0x14
        push 0ah
        lea eax, [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 1B 0C 02 00: call 0x46d9d0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 12: jmp 0x44cdcc
        __asm _emit 0xeb
        __asm _emit 0x12
        push 0ah
        lea edx, [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 47 0C 02 00: call 0x46da10
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x0c
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
