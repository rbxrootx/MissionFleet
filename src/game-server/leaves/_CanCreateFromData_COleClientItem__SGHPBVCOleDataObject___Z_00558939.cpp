// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00558939 .. +0x5E bytes.
extern "C" __declspec(naked) void _CanCreateFromData_COleClientItem__SGHPBVCOleDataObject___Z_00558939() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 74 07: je 0x55894f
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes E8 E8 FE FF FF: call 0x558835
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 42: jmp 0x558991
        __asm _emit 0xeb
        __asm _emit 0x42
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B2 BB 00 00: call 0x564509
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 75 04: jne 0x558963
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 2E: jmp 0x558991
        __asm _emit 0xeb
        __asm _emit 0x2e
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 15 D4 29 5E 00: call dword ptr [0x5e29d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7C 0F: jl 0x558987
        __asm _emit 0x7c
        __asm _emit 0x0f
        cmp dword ptr [ebp - 4], 1
        ; Exact mapped bytes 74 09: je 0x558987
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes EB 07: jmp 0x55898e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
