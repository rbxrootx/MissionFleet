// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041FA02 .. +0x97 bytes.
extern "C" __declspec(naked) void FUN_0041fa02_0041FA02() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes 83 3D AC 11 45 00 00: cmp dword ptr [0x4511ac], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xac
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push esi
        ; Exact mapped bytes 75 0F: jne 0x41fa1f
        __asm _emit 0x75
        __asm _emit 0x0f
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 95 4D 00 00: call 0x4247b0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x4d
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        ; Exact mapped bytes EB 76: jmp 0x41fa95
        __asm _emit 0xeb
        __asm _emit 0x76
        push 19h
        ; Exact mapped bytes E8 E4 2B 00 00: call 0x42260a
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp + 8]
        pop ecx
        ; Exact mapped bytes 66 0F B6 1E: movzx bx, byte ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x1e
        ; Exact mapped bytes 66 85 DB: test bx, bx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 74 4A: je 0x41fa7d
        __asm _emit 0x74
        __asm _emit 0x4a
        movzx eax, bl
        test byte ptr [eax + 4512c1h], 4
        ; Exact mapped bytes 74 1A: je 0x41fa59
        __asm _emit 0x74
        __asm _emit 0x1a
        mov al, byte ptr [esi + 1]
        inc esi
        test al, al
        ; Exact mapped bytes 74 1D: je 0x41fa64
        __asm _emit 0x74
        __asm _emit 0x1d
        movzx ecx, bx
        movzx eax, al
        shl ecx, 8
        or ecx, eax
        cmp dword ptr [ebp + 0ch], ecx
        ; Exact mapped bytes 74 19: je 0x41fa70
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes EB 08: jmp 0x41fa61
        __asm _emit 0xeb
        __asm _emit 0x08
        movzx eax, bx
        cmp dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 74 1C: je 0x41fa7d
        __asm _emit 0x74
        __asm _emit 0x1c
        inc esi
        ; Exact mapped bytes EB C6: jmp 0x41fa2a
        __asm _emit 0xeb
        __asm _emit 0xc6
        push 19h
        ; Exact mapped bytes E8 00 2C 00 00: call 0x42266b
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        xor eax, eax
        ; Exact mapped bytes EB 25: jmp 0x41fa95
        __asm _emit 0xeb
        __asm _emit 0x25
        push 19h
        ; Exact mapped bytes E8 F4 2B 00 00: call 0x42266b
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        lea eax, [esi - 1]
        ; Exact mapped bytes EB 18: jmp 0x41fa95
        __asm _emit 0xeb
        __asm _emit 0x18
        push 19h
        ; Exact mapped bytes E8 E7 2B 00 00: call 0x42266b
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        pop ecx
        movzx ecx, bx
        sub eax, ecx
        neg eax
        sbb eax, eax
        not eax
        and eax, esi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
