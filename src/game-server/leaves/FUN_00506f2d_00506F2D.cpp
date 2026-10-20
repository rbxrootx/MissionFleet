// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00506F2D .. +0xA7 bytes.
extern "C" __declspec(naked) void FUN_00506f2d_00506F2D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        ; Exact mapped bytes FF 15 14 27 5E 00: call dword ptr [0x5e2714]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 05: jne 0x506f46
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 87 00 00 00: jmp 0x506fcd
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 02: jne 0x506f50
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 7D: jmp 0x506fcd
        __asm _emit 0xeb
        __asm _emit 0x7d
        push 3
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 B6 FD FF FF: call 0x506d11
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 28: jne 0x506f87
        __asm _emit 0x75
        __asm _emit 0x28
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 D4 26 5E 00: call dword ptr [0x5e26d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 02: jne 0x506f76
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 57: jmp 0x506fcd
        __asm _emit 0xeb
        __asm _emit 0x57
        push 2
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 90 FD FF FF: call 0x506d11
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x506f87
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 46: jmp 0x506fcd
        __asm _emit 0xeb
        __asm _emit 0x46
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 2D: je 0x506fba
        __asm _emit 0x74
        __asm _emit 0x2d
        push -10h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 BC 28 5E 00: call dword ptr [0x5e28bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        and eax, 40000000h
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x506fba
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 D4 26 5E 00: call dword ptr [0x5e26d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov esi, eax
        ; Exact mapped bytes FF 15 10 27 5E 00: call dword ptr [0x5e2710]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, eax
        ; Exact mapped bytes 75 02: jne 0x506fba
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 13: jmp 0x506fcd
        __asm _emit 0xeb
        __asm _emit 0x13
        push 0
        push 0
        push 14fh
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
