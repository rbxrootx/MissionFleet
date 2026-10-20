// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585349C0 .. +0xB1 bytes.
extern "C" __declspec(naked) void FUN_585349c0_585349C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588a7020h
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 64h], 0
        ; Exact mapped bytes 74 40: je 0x58534a1b
        __asm _emit 0x74
        __asm _emit 0x40
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 64h], 0
        ; Exact mapped bytes 74 37: je 0x58534a1b
        __asm _emit 0x74
        __asm _emit 0x37
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 64h]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 17: je 0x58534a0a
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 10h], ecx
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 F0: call dword ptr [ebp - 0x10]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf0
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 07: jmp 0x58534a11
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 64h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 68h], 0
        ; Exact mapped bytes 74 40: je 0x58534a64
        __asm _emit 0x74
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 68h], 0
        ; Exact mapped bytes 74 37: je 0x58534a64
        __asm _emit 0x74
        __asm _emit 0x37
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 17: je 0x58534a53
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 18h], eax
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 E8: call dword ptr [ebp - 0x18]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe8
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58534a5a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 68h], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 84 0E 28 00: call 0x587b58f0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x0e
        __asm _emit 0x28
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
