// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F4C6A .. +0x5F bytes.
extern "C" __declspec(naked) void _GetTopLevelOwner_CWnd__QBEPAV1_XZ_004F4C6A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D1 6E 04 00: call 0x53bb4c
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x6e
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x4f4c83
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 42: jmp 0x4f4cc5
        __asm _emit 0xeb
        __asm _emit 0x42
        push 878h
        push 5c5574h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 CA 64 00 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 1ch]
        mov dword ptr [ebp - 8], edx
        push 4
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 E4 26 5E 00: call dword ptr [0x5e26e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 08: je 0x4f4cbc
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB E3: jmp 0x4f4c9f
        __asm _emit 0xeb
        __asm _emit 0xe3
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 BA CC FF FF: call 0x4f197f
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xcc
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
