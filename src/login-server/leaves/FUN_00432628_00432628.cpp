// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00432628 .. +0x72 bytes.
extern "C" __declspec(naked) void FUN_00432628_00432628() {
    __asm {
        mov eax, 43ab42h
        ; Exact mapped bytes E8 D6 CF FE FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xcf
        __asm _emit 0xfe
        __asm _emit 0xff
        push esi
        ; Exact mapped bytes E8 A1 36 00 00: call 0x435cd9
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        cmp dword ptr [esi + 18h], 0
        ; Exact mapped bytes 75 48: jne 0x432688
        __asm _emit 0x75
        __asm _emit 0x48
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 42: je 0x432688
        __asm _emit 0x74
        __asm _emit 0x42
        push ebx
        push 434aabh
        ; Exact mapped bytes E8 89 B2 FF FF: call 0x42d8da
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xb2
        __asm _emit 0xff
        __asm _emit 0xff
        push 48h
        mov ebx, eax
        ; Exact mapped bytes E8 92 B2 FF FF: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xb2
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov ecx, eax
        mov dword ptr [ebp + 8], ecx
        and dword ptr [ebp - 4], 0
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x432678
        __asm _emit 0x74
        __asm _emit 0x10
        push 1
        push 4
        push 43e8c8h
        ; Exact mapped bytes E8 9C 06 00 00: call 0x432d12
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x43267a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        or dword ptr [ebp - 4], 0ffffffffh
        push ebx
        mov dword ptr [esi + 18h], eax
        ; Exact mapped bytes E8 53 B2 FF FF: call 0x42d8da
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xb2
        __asm _emit 0xff
        __asm _emit 0xff
        pop ebx
        mov ecx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [esi + 18h]
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
