// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00429561 .. +0x79 bytes.
extern "C" __declspec(naked) void FUN_00429561_00429561() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push esi
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 114h]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 3C: je 0x4295c7
        __asm _emit 0x74
        __asm _emit 0x3c
        mov esi, esp
        push -1
        mov edx, dword ptr [ebp + 8]
        push edx
        push -1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 23 03 00 00: call 0x4298c0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 1
        push 800h
        ; Exact mapped bytes FF 15 DC B7 68 00: call dword ptr [0x68b7dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 3E B8 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xb8
        __asm _emit 0x03
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 75 05: jne 0x4295bc
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 0D: jmp 0x4295c9
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 58h]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB BE: jmp 0x429585
        __asm _emit 0xeb
        __asm _emit 0xbe
        xor eax, eax
        pop esi
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 1C B8 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xb8
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
