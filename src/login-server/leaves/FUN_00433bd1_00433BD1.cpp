// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00433BD1 .. +0x72 bytes.
extern "C" __declspec(naked) void FUN_00433bd1_00433BD1() {
    __asm {
        mov eax, 43aa7ah
        ; Exact mapped bytes E8 2D BA FE FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xba
        __asm _emit 0xfe
        __asm _emit 0xff
        push esi
        ; Exact mapped bytes E8 F8 20 00 00: call 0x435cd9
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        cmp dword ptr [esi + 1ch], 0
        ; Exact mapped bytes 75 48: jne 0x433c31
        __asm _emit 0x75
        __asm _emit 0x48
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 42: je 0x433c31
        __asm _emit 0x74
        __asm _emit 0x42
        push ebx
        push 434aabh
        ; Exact mapped bytes E8 E0 9C FF FF: call 0x42d8da
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0xff
        push 48h
        mov ebx, eax
        ; Exact mapped bytes E8 E9 9C FF FF: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov ecx, eax
        mov dword ptr [ebp + 8], ecx
        and dword ptr [ebp - 4], 0
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x433c21
        __asm _emit 0x74
        __asm _emit 0x10
        push 2
        push 4
        push 43e4d0h
        ; Exact mapped bytes E8 F3 F0 FF FF: call 0x432d12
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x433c23
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        or dword ptr [ebp - 4], 0ffffffffh
        push ebx
        mov dword ptr [esi + 1ch], eax
        ; Exact mapped bytes E8 AA 9C FF FF: call 0x42d8da
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0xff
        pop ebx
        mov ecx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [esi + 1ch]
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
