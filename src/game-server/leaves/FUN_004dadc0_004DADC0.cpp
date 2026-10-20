// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DADC0 .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_004dadc0_004DADC0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x4dade7
        __asm _emit 0x75
        __asm _emit 0x14
        push 1e3h
        push 5835a8h
        ; Exact mapped bytes E8 1E 9C 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x9c
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4dade7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4dadca
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 35 B9 05 00: call 0x53672a
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xb9
        __asm _emit 0x05
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 2C B9 05 00: call 0x53672a
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xb9
        __asm _emit 0x05
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 6C 1E 5E 00: call dword ptr [0x5e1e6c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
