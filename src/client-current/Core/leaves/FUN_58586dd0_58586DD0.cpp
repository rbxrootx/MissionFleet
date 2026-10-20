// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58586DD0 .. +0x204 bytes.
extern "C" __declspec(naked) void FUN_58586dd0_58586DD0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 0ch], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 50h], 40000000h
        ; Exact mapped bytes 75 41: jne 0x58586e2d
        __asm _emit 0x75
        __asm _emit 0x41
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 54h], 0
        ; Exact mapped bytes 74 38: je 0x58586e2d
        __asm _emit 0x74
        __asm _emit 0x38
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 8B 0D 90 20 96 58: mov ecx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B3 4F 23 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x4f
        __asm _emit 0x23
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 54h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 18h], ecx
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 55 E8: call dword ptr [ebp - 0x18]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe8
        nop
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0ach]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a0h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 F1 E2 F2 FF: call 0x584b5140
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xe2
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 5ch]
        add eax, 1
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 5ch], eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + eax*4 + 5ch]
        cmp eax, dword ptr [edx + 0c4h]
        ; Exact mapped bytes 0F 85 4C 01 00 00: jne 0x58586fcb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 1
        mov dword ptr [ebp - 8], 0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 5ch], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 9ch], 0
        ; Exact mapped bytes 74 63: je 0x58586f0a
        __asm _emit 0x74
        __asm _emit 0x63
        push 1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7B FE FF FF: call 0x58586d30
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 20h]
        cdq
        mov ecx, 0ah
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 75 15: jne 0x58586edc
        __asm _emit 0x75
        __asm _emit 0x15
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 7ch], 1
        mov dword ptr [ebp - 8], 1
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 23: je 0x58586f05
        __asm _emit 0x74
        __asm _emit 0x23
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0ach]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8ch]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 3C 89 F1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x89
        __asm _emit 0xf1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 C1 00 00 00: jmp 0x58586fcb
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 18 FE FF FF: call 0x58586d30
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 28h]
        cdq
        mov ecx, 0ah
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 75 15: jne 0x58586f3f
        __asm _emit 0x75
        __asm _emit 0x15
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 7ch], 1
        mov dword ptr [ebp - 8], 1
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx*4 + 7ch], 0
        ; Exact mapped bytes 75 22: jne 0x58586f6e
        __asm _emit 0x75
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c0h]
        sub ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0c0h], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 90h], 0
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 57: je 0x58586fcb
        __asm _emit 0x74
        __asm _emit 0x57
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 90h], 40000000h
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0ach]
        ; Exact mapped bytes E8 2D DA EF FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xda
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a8h]
        add edx, 1
        mov ecx, dword ptr [ebp - 4]
        imul edx, dword ptr [ecx + 94h]
        add eax, edx
        mov dword ptr [ebp - 2ch], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0ach]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 76 88 F1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x88
        __asm _emit 0xf1
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 0ch]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
