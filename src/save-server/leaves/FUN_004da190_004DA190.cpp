// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DA190 .. +0x73 bytes.
extern "C" __declspec(naked) void FUN_004da190_004DA190() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 11: jne 0x4da1b3
        __asm _emit 0x75
        __asm _emit 0x11
        push 2bh
        push 673c70h
        ; Exact mapped bytes E8 92 EB 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xeb
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4da1b3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x4da19c
        __asm _emit 0x75
        __asm _emit 0xe3
        push 1
        push 4
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 A0 92 FC FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x92
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4da1db
        __asm _emit 0x75
        __asm _emit 0x11
        push 2dh
        push 673c70h
        ; Exact mapped bytes E8 6A EB 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xeb
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4da1db
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x4da1b9
        __asm _emit 0x75
        __asm _emit 0xd8
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 30 03 00 00: call 0x4da52a
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
