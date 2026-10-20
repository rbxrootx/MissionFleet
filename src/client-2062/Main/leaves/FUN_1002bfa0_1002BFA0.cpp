// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1002BFA0 .. +0x61 bytes.
extern "C" __declspec(naked) void FUN_1002bfa0_1002BFA0() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 34h]
        test eax, eax
        ; Exact mapped bytes 74 53: je 0x1002bffd
        __asm _emit 0x74
        __asm _emit 0x53
        mov edx, dword ptr [esp + 8]
        cmp dword ptr [eax + 18h], edx
        ; Exact mapped bytes 74 08: je 0x1002bfbb
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax]
        test eax, eax
        ; Exact mapped bytes 74 44: je 0x1002bffd
        __asm _emit 0x74
        __asm _emit 0x44
        ; Exact mapped bytes EB F3: jmp 0x1002bfae
        __asm _emit 0xeb
        __asm _emit 0xf3
        ; Exact mapped bytes 66 8B 48 28: mov cx, word ptr [eax + 0x28]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x28
        test cl, 1
        ; Exact mapped bytes 75 2E: jne 0x1002bff2
        __asm _emit 0x75
        __asm _emit 0x2e
        or ecx, 1
        ; Exact mapped bytes 66 89 48 28: mov word ptr [eax + 0x28], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x28
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        test byte ptr [eax + 10560h], 1
        ; Exact mapped bytes 74 16: je 0x1002bfef
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        ; Exact mapped bytes E8 EB 01 00 00: call 0x1002c1d0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 3c8h]
        test ecx, ecx
        ; Exact mapped bytes 75 03: jne 0x1002bff2
        __asm _emit 0x75
        __asm _emit 0x03
        dec dword ptr [esi + 2ch]
        mov eax, dword ptr [esi + 2ch]
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x1002bffd
        __asm _emit 0x75
        __asm _emit 0x04
        or byte ptr [esi + 30h], 2
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
