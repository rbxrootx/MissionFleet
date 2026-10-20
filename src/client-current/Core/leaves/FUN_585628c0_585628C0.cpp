// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585628C0 .. +0x148 bytes.
extern "C" __declspec(naked) void FUN_585628c0_585628C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 1ch]
        ; Exact mapped bytes 7D 65: jge 0x58562939
        __asm _emit 0x7d
        __asm _emit 0x65
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 1ch], 0
        ; Exact mapped bytes 74 0B: je 0x585628e8
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB 07: jmp 0x585628ef
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1ch]
        sub eax, dword ptr [ebp + 8]
        imul eax, eax, 64h
        cdq
        idiv dword ptr [ebp - 8]
        mov ecx, 64h
        sub ecx, eax
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 38h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 34h]
        cmp edx, dword ptr [ecx + 38h]
        ; Exact mapped bytes 7E 0B: jle 0x58562925
        __asm _emit 0x7e
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 38h]
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB 09: jmp 0x5856292e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 34h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 34h], edx
        ; Exact mapped bytes EB 0F: jmp 0x58562948
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 48h]
        add ecx, 64h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 38h], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 40h], 18h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A6 F6 FF FF: call 0x58562000
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5A 40 F2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x40
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 6ch], eax
        ; Exact mapped bytes 0F 85 90 00 00 00: jne 0x58562a02
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 43 40 F2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x40
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6C 2D F3 FF: call 0x584956f0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x2d
        __asm _emit 0xf3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 7A: jne 0x58562a02
        __asm _emit 0x75
        __asm _emit 0x7a
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0ch], 0
        ; Exact mapped bytes 75 71: jne 0x58562a02
        __asm _emit 0x75
        __asm _emit 0x71
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 38h], 0ah
        ; Exact mapped bytes 7D 68: jge 0x58562a02
        __asm _emit 0x7d
        __asm _emit 0x68
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ch], 40000000h
        push 4dh
        push 46h
        push 0dh
        ; Exact mapped bytes 8B 0D 1C 07 96 58: mov ecx, dword ptr [0x5896071c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BB F2 20 00: call 0x58771c70
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xf2
        __asm _emit 0x20
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 49: jne 0x58562a02
        __asm _emit 0x75
        __asm _emit 0x49
        push 5
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BA 20 F2 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x20
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes 8B 15 94 20 96 58: mov edx, dword ptr [0x58962094]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 E2 93 25 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x93
        __asm _emit 0x25
        __asm _emit 0x00
        push 5
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 95 20 F2 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x20
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 1ch], eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 55 E4: call dword ptr [ebp - 0x1c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe4
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
