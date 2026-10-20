// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587AA270 .. +0xC1 bytes.
extern "C" __declspec(naked) void FUN_587aa270_587AA270() {
    __asm {
        sub esp, 0ch
        push ebx
        push esi
        push edi
        ; Exact mapped bytes E8 95 01 00 00: call 0x587aa410
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D C8 5E 96 58 00: cmp dword ptr [0x58965ec8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xc8
        __asm _emit 0x5e
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 92 00 00 00: je 0x587aa31a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 1ch]
        test ecx, ecx
        ; Exact mapped bytes 75 10: jne 0x587aa2a0
        __asm _emit 0x75
        __asm _emit 0x10
        push dword ptr [esp + 20h]
        ; Exact mapped bytes E8 17 FF FF FF: call 0x587aa1b0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov esi, eax
        ; Exact mapped bytes EB 7F: jmp 0x587aa31f
        __asm _emit 0xeb
        __asm _emit 0x7f
        ; Exact mapped bytes 8B 15 98 9C 96 58: mov edx, dword ptr [0x58969c98]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        xor edi, edi
        test edx, edx
        ; Exact mapped bytes 74 14: je 0x587aa2c0
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 8B 35 90 9C 96 58: mov esi, dword ptr [0x58969c90]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, esi
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 74 0F: je 0x587aa2c7
        __asm _emit 0x74
        __asm _emit 0x0f
        inc edi
        add eax, 2ch
        cmp edi, edx
        ; Exact mapped bytes 72 F4: jb 0x587aa2b4
        __asm _emit 0x72
        __asm _emit 0xf4
        mov esi, 4
        ; Exact mapped bytes EB 58: jmp 0x587aa31f
        __asm _emit 0xeb
        __asm _emit 0x58
        cmp edi, -1
        ; Exact mapped bytes 74 F4: je 0x587aa2c0
        __asm _emit 0x74
        __asm _emit 0xf4
        mov ebx, dword ptr [esp + 20h]
        imul eax, edi, 2ch
        movzx eax, byte ptr [eax + esi + 14h]
        shr eax, 1
        and eax, 1
        cmp eax, ebx
        ; Exact mapped bytes 74 2E: je 0x587aa30f
        __asm _emit 0x74
        __asm _emit 0x2e
        push 1
        lea eax, [esp + 10h]
        push edi
        push eax
        ; Exact mapped bytes E8 A2 01 00 00: call 0x587aa490
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        add esp, 0ch
        test esi, esi
        ; Exact mapped bytes 75 28: jne 0x587aa31f
        __asm _emit 0x75
        __asm _emit 0x28
        push ebx
        push edi
        ; Exact mapped bytes E8 42 00 00 00: call 0x587aa340
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        lea eax, [esp + 14h]
        push eax
        ; Exact mapped bytes E8 66 07 00 00: call 0x587aaa70
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 10: jmp 0x587aa31f
        __asm _emit 0xeb
        __asm _emit 0x10
        mov esi, ebx
        neg esi
        sbb esi, esi
        add esi, 6
        ; Exact mapped bytes EB 05: jmp 0x587aa31f
        __asm _emit 0xeb
        __asm _emit 0x05
        mov esi, 2
        xor eax, eax
        mov ecx, 58965ec4h
        xchg dword ptr [ecx], eax
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        add esp, 0ch
        ret
    }
}
