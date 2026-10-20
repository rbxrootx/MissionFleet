// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005624EA .. +0x6C bytes.
extern "C" __declspec(naked) void _GetClipboardOwner_COleDataSource__SGPAV1_XZ_005624EA() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov ecx, 5deccch
        ; Exact mapped bytes E8 86 14 00 00: call 0x563980
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 04: jne 0x56250a
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 48: jmp 0x562552
        __asm _emit 0xeb
        __asm _emit 0x48
        push 76h
        push 5ce898h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        push edx
        ; Exact mapped bytes E8 43 8C F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x8c
        __asm _emit 0xf9
        __asm _emit 0xff
        push 58ec68h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes E8 07 9B FE FF: call 0x54c034
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x9b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 C4 29 5E 00: call dword ptr [0x5e29c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x56254c
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 8], 0
        xor eax, eax
        ; Exact mapped bytes EB 06: jmp 0x562552
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
