// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042CF65 .. +0x72 bytes.
extern "C" __declspec(naked) void FUN_0042cf65_0042CF65() {
    __asm {
        mov eax, 43aa3eh
        ; Exact mapped bytes E8 99 26 FF FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x26
        __asm _emit 0xff
        __asm _emit 0xff
        push esi
        ; Exact mapped bytes E8 64 8D 00 00: call 0x435cd9
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        cmp dword ptr [esi + 24h], 0
        ; Exact mapped bytes 75 48: jne 0x42cfc5
        __asm _emit 0x75
        __asm _emit 0x48
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 42: je 0x42cfc5
        __asm _emit 0x74
        __asm _emit 0x42
        push ebx
        push 434aabh
        ; Exact mapped bytes E8 4C 09 00 00: call 0x42d8da
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push 48h
        mov ebx, eax
        ; Exact mapped bytes E8 55 09 00 00: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov ecx, eax
        mov dword ptr [ebp + 8], ecx
        and dword ptr [ebp - 4], 0
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x42cfb5
        __asm _emit 0x74
        __asm _emit 0x10
        push 1
        push 4
        push 43e220h
        ; Exact mapped bytes E8 5F 5D 00 00: call 0x432d12
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x42cfb7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        or dword ptr [ebp - 4], 0ffffffffh
        push ebx
        mov dword ptr [esi + 24h], eax
        ; Exact mapped bytes E8 16 09 00 00: call 0x42d8da
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        pop ebx
        mov ecx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [esi + 24h]
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
