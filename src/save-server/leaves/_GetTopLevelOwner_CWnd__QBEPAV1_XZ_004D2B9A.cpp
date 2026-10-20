// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D2B9A .. +0x5F bytes.
extern "C" __declspec(naked) void _GetTopLevelOwner_CWnd__QBEPAV1_XZ_004D2B9A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 01 8A 05 00: call 0x52b5ac
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x8a
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x4d2bb3
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 42: jmp 0x4d2bf5
        __asm _emit 0xeb
        __asm _emit 0x42
        push 878h
        push 671a64h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 9A 76 00 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 1ch]
        mov dword ptr [ebp - 8], edx
        push 4
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 D8 BE 68 00: call dword ptr [0x68bed8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 08: je 0x4d2bec
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB E3: jmp 0x4d2bcf
        __asm _emit 0xeb
        __asm _emit 0xe3
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 BA CC FF FF: call 0x4cf8af
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
