// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054B203 .. +0x53 bytes.
extern "C" __declspec(naked) void FUN_0054b203_0054B203() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 04: jne 0x54b213
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 3D: jmp 0x54b250
        __asm _emit 0xeb
        __asm _emit 0x3d
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 D4 1C F6 FF: call 0x4acef0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x1c
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        lea ecx, [eax + eax + 2]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 80 2A 5E 00: call dword ptr [0x5e2a80]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 14: je 0x54b24d
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 D6 DD F5 FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xdd
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
