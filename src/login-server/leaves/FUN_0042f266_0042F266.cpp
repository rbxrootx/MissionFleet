// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042F266 .. +0x72 bytes.
extern "C" __declspec(naked) void FUN_0042f266_0042F266() {
    __asm {
        mov eax, 43a87ah
        ; Exact mapped bytes E8 98 03 FF FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0xff
        __asm _emit 0xff
        push esi
        ; Exact mapped bytes E8 63 6A 00 00: call 0x435cd9
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x6a
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        cmp dword ptr [esi + 14h], 0
        ; Exact mapped bytes 75 48: jne 0x42f2c6
        __asm _emit 0x75
        __asm _emit 0x48
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 42: je 0x42f2c6
        __asm _emit 0x74
        __asm _emit 0x42
        push ebx
        push 434aabh
        ; Exact mapped bytes E8 4B E6 FF FF: call 0x42d8da
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        push 48h
        mov ebx, eax
        ; Exact mapped bytes E8 54 E6 FF FF: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov ecx, eax
        mov dword ptr [ebp + 8], ecx
        and dword ptr [ebp - 4], 0
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x42f2b6
        __asm _emit 0x74
        __asm _emit 0x10
        push 1
        push 1ch
        push 43d918h
        ; Exact mapped bytes E8 5E 3A 00 00: call 0x432d12
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x42f2b8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        or dword ptr [ebp - 4], 0ffffffffh
        push ebx
        mov dword ptr [esi + 14h], eax
        ; Exact mapped bytes E8 15 E6 FF FF: call 0x42d8da
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        pop ebx
        mov ecx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [esi + 14h]
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
