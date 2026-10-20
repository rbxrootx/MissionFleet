// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A0330 .. +0x3D bytes.
extern "C" __declspec(naked) void FUN_587a0330_587A0330() {
    __asm {
        mov edx, dword ptr [esp + 4]
        push esi
        test edx, edx
        ; Exact mapped bytes 74 2A: je 0x587a0363
        __asm _emit 0x74
        __asm _emit 0x2a
        mov esi, dword ptr [esp + 0ch]
        test esi, esi
        ; Exact mapped bytes 74 22: je 0x587a0363
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [edx + 270h]
        test ecx, ecx
        ; Exact mapped bytes 74 18: je 0x587a0363
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [edx + 274h]
        lea eax, [edx + ecx*4]
        add eax, ecx
        mov ecx, dword ptr [esi]
        sub eax, 5
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 74 08: je 0x587a0367
        __asm _emit 0x74
        __asm _emit 0x08
        cmp eax, edx
        ; Exact mapped bytes 77 F3: ja 0x587a0356
        __asm _emit 0x77
        __asm _emit 0xf3
        xor eax, eax
        pop esi
        ret
        movzx eax, byte ptr [eax + 4]
        pop esi
        ret
    }
}
