// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052DF72 .. +0x47 bytes.
extern "C" __declspec(naked) void _BringToTop_CFrameWnd__IAEXH_Z_0052DF72() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 32: je 0x52dfb3
        __asm _emit 0x74
        __asm _emit 0x32
        cmp dword ptr [ebp + 8], 6
        ; Exact mapped bytes 74 2C: je 0x52dfb3
        __asm _emit 0x74
        __asm _emit 0x2c
        cmp dword ptr [ebp + 8], 7
        ; Exact mapped bytes 74 26: je 0x52dfb3
        __asm _emit 0x74
        __asm _emit 0x26
        cmp dword ptr [ebp + 8], 8
        ; Exact mapped bytes 74 20: je 0x52dfb3
        __asm _emit 0x74
        __asm _emit 0x20
        cmp dword ptr [ebp + 8], 4
        ; Exact mapped bytes 74 1A: je 0x52dfb3
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 DC 26 5E 00: call dword ptr [0x5e26dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 8C 27 5E 00: call dword ptr [0x5e278c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
