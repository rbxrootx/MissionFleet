// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ED49F .. +0x4F bytes.
extern "C" __declspec(naked) void FUN_004ed49f_004ED49F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 36: je 0x4ed4e5
        __asm _emit 0x74
        __asm _emit 0x36
        mov eax, dword ptr [ebp + 0ch]
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 74 14: je 0x4ed4cb
        __asm _emit 0x74
        __asm _emit 0x14
        push 0e6h
        push 677b4ch
        ; Exact mapped bytes E8 7A B8 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xb8
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ed4cb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DE: jne 0x4ed4af
        __asm _emit 0x75
        __asm _emit 0xde
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 92 57 FE FF: call 0x4d2c6b
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x57
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x4ed4e5
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 26 94 FE FF: call 0x4d690b
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
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
