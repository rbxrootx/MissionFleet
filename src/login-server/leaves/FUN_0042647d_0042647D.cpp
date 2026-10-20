// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042647D .. +0x6F bytes.
extern "C" __declspec(naked) void FUN_0042647d_0042647D() {
    __asm {
        push ebx
        xor ebx, ebx
        ; Exact mapped bytes 39 1D 4C FF 44 00: cmp dword ptr [0x44ff4c], ebx
        __asm _emit 0x39
        __asm _emit 0x1d
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 75 13: jne 0x42649b
        __asm _emit 0x75
        __asm _emit 0x13
        mov eax, dword ptr [esp + 8]
        cmp eax, 61h
        ; Exact mapped bytes 7C 59: jl 0x4264ea
        __asm _emit 0x7c
        __asm _emit 0x59
        cmp eax, 7ah
        ; Exact mapped bytes 7F 54: jg 0x4264ea
        __asm _emit 0x7f
        __asm _emit 0x54
        sub eax, 20h
        pop ebx
        ret
        push esi
        mov esi, 451048h
        push edi
        push esi
        ; Exact mapped bytes FF 15 14 C2 43 00: call dword ptr [0x43c214]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 39 1D 44 10 45 00: cmp dword ptr [0x451044], ebx
        __asm _emit 0x39
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 98 C2 43 00: mov edi, dword ptr [0x43c298]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x4264c5
        __asm _emit 0x74
        __asm _emit 0x0e
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        push 13h
        ; Exact mapped bytes E8 49 C1 FF FF: call 0x42260a
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push 1
        pop ebx
        push dword ptr [esp + 10h]
        ; Exact mapped bytes E8 1E 00 00 00: call 0x4264ec
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test ebx, ebx
        pop ecx
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 74 0A: je 0x4264e1
        __asm _emit 0x74
        __asm _emit 0x0a
        push 13h
        ; Exact mapped bytes E8 8D C1 FF FF: call 0x42266b
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        ; Exact mapped bytes EB 03: jmp 0x4264e4
        __asm _emit 0xeb
        __asm _emit 0x03
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov eax, dword ptr [esp + 10h]
        pop edi
        pop esi
        pop ebx
        ret
    }
}
