// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00426DBD .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_00426dbd_00426DBD() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
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
        ; Exact mapped bytes 8B 3D 98 C2 43 00: mov edi, dword ptr [0x43c298]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        xor ebx, ebx
        ; Exact mapped bytes 39 1D 44 10 45 00: cmp dword ptr [0x451044], ebx
        __asm _emit 0x39
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x426ded
        __asm _emit 0x74
        __asm _emit 0x0e
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        push 13h
        ; Exact mapped bytes E8 21 B8 FF FF: call 0x42260a
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push 1
        pop ebx
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1E 00 00 00: call 0x426e16
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov dword ptr [ebp + 0ch], eax
        test ebx, ebx
        pop ecx
        ; Exact mapped bytes 74 0A: je 0x426e0b
        __asm _emit 0x74
        __asm _emit 0x0a
        push 13h
        ; Exact mapped bytes E8 63 B8 FF FF: call 0x42266b
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        ; Exact mapped bytes EB 03: jmp 0x426e0e
        __asm _emit 0xeb
        __asm _emit 0x03
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov eax, dword ptr [ebp + 0ch]
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
