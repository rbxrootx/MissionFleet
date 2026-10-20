// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585B0DC0 .. +0x83 bytes.
extern "C" __declspec(naked) void FUN_585b0dc0_585B0DC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x585b0de0
        __asm _emit 0x75
        __asm _emit 0x11
        push 0ffh
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 34 F1 FF FF: call 0x585aff10
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 63: jmp 0x585b0e41
        __asm _emit 0xeb
        __asm _emit 0x63
        ; Exact mapped bytes EB 20: jmp 0x585b0e00
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 78 3C ED FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x3c
        __asm _emit 0xed
        __asm _emit 0xff
        cmp dword ptr [eax + 0a4h], 0
        ; Exact mapped bytes 74 0F: je 0x585b0e00
        __asm _emit 0x74
        __asm _emit 0x0f
        push 0ffh
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 12 F1 FF FF: call 0x585aff10
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 41: jmp 0x585b0e41
        __asm _emit 0xeb
        __asm _emit 0x41
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 48 89 F7 FF: call 0x58529750
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x89
        __asm _emit 0xf7
        __asm _emit 0xff
        movzx eax, ax
        and eax, 0ff00h
        sar eax, 8
        mov byte ptr [ebp - 1], al
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C2 3B ED FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x3b
        __asm _emit 0xed
        __asm _emit 0xff
        movzx ecx, byte ptr [eax + 35ch]
        movzx edx, byte ptr [ebp - 1]
        cmp ecx, edx
        ; Exact mapped bytes 75 07: jne 0x585b0e34
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 0F: jmp 0x585b0e41
        __asm _emit 0xeb
        __asm _emit 0x0f
        ; Exact mapped bytes EB 0D: jmp 0x585b0e41
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 0ffh
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 CF F0 FF FF: call 0x585aff10
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
    }
}
