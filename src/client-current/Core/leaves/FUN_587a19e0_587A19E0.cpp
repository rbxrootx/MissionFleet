// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A19E0 .. +0x70 bytes.
extern "C" __declspec(naked) void FUN_587a19e0_587A19E0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        test eax, eax
        ; Exact mapped bytes 74 67: je 0x587a1a4f
        __asm _emit 0x74
        __asm _emit 0x67
        mov edx, dword ptr [esp + 8]
        test edx, edx
        ; Exact mapped bytes 74 5F: je 0x587a1a4f
        __asm _emit 0x74
        __asm _emit 0x5f
        mov ecx, dword ptr [esp + 0ch]
        test ecx, ecx
        ; Exact mapped bytes 74 57: je 0x587a1a4f
        __asm _emit 0x74
        __asm _emit 0x57
        test dword ptr [eax + 74h], 200h
        ; Exact mapped bytes 75 4E: jne 0x587a1a4f
        __asm _emit 0x75
        __asm _emit 0x4e
        push ebx
        mov bl, byte ptr [ecx + 2]
        test bl, bl
        ; Exact mapped bytes 74 37: je 0x587a1a40
        __asm _emit 0x74
        __asm _emit 0x37
        cmp bl, 0ch
        ; Exact mapped bytes 77 32: ja 0x587a1a40
        __asm _emit 0x77
        __asm _emit 0x32
        mov bl, byte ptr [ecx + 3]
        test bl, bl
        ; Exact mapped bytes 74 2B: je 0x587a1a40
        __asm _emit 0x74
        __asm _emit 0x2b
        cmp bl, 1fh
        ; Exact mapped bytes 77 26: ja 0x587a1a40
        __asm _emit 0x77
        __asm _emit 0x26
        cmp byte ptr [ecx + 4], 17h
        ; Exact mapped bytes 77 20: ja 0x587a1a40
        __asm _emit 0x77
        __asm _emit 0x20
        cmp byte ptr [ecx + 5], 3bh
        ; Exact mapped bytes 77 1A: ja 0x587a1a40
        __asm _emit 0x77
        __asm _emit 0x1a
        cmp byte ptr [ecx + 6], 3ch
        ; Exact mapped bytes 77 14: ja 0x587a1a40
        __asm _emit 0x77
        __asm _emit 0x14
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [ecx + 4]
        or dword ptr [edx + 8], 200h
        mov dword ptr [edx + 64h], eax
        mov dword ptr [edx + 68h], ecx
        pop ebx
        ret
        push 588b7fe4h
        push eax
        ; Exact mapped bytes E8 E5 D9 FF FF: call 0x5879f430
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        pop ebx
        ret
    }
}
