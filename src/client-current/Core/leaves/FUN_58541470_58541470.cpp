// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58541470 .. +0x1BF bytes.
extern "C" __declspec(naked) void FUN_58541470_58541470() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 2D: jne 0x585414ac
        __asm _emit 0x75
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 26ch]
        cmp ecx, 0bh
        ; Exact mapped bytes 74 1E: je 0x585414ac
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 26ch]
        cmp eax, 0ch
        ; Exact mapped bytes 74 0F: je 0x585414ac
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 26ch]
        cmp edx, 0eh
        ; Exact mapped bytes 75 47: jne 0x585414f3
        __asm _emit 0x75
        __asm _emit 0x47
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a4h]
        mov dword ptr [ebp - 0ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 1E 4A F4 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x4a
        __asm _emit 0xf4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a8h]
        mov dword ptr [ebp - 10h], eax
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 08 4A F4 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x4a
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a8h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 50 E3 F5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xe3
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2D: jmp 0x58541520
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a4h]
        mov dword ptr [ebp - 18h], edx
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 87 4A F4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x4a
        __asm _emit 0xf4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a8h]
        mov dword ptr [ebp - 1ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 71 4A F4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x4a
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        add eax, 64h
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        add edx, 0aah
        mov dword ptr [ebp - 34h], edx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5854154d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 20h
        ; Exact mapped bytes 0F 8D A3 00 00 00: jge 0x585415fa
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        and ecx, 1
        ; Exact mapped bytes 74 73: je 0x585415d2
        __asm _emit 0x74
        __asm _emit 0x73
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 1d0h]
        mov dword ptr [ebp - 20h], ecx
        lea edx, [ebp - 38h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 B5 DE F5 FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xde
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax*4 + 1d0h]
        ; Exact mapped bytes E8 32 34 F4 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x34
        __asm _emit 0xf4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 3E: je 0x585415d0
        __asm _emit 0x74
        __asm _emit 0x3e
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 1d0h]
        ; Exact mapped bytes E8 1C 34 F4 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x34
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 15 54 F4 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 38h]
        lea edx, [ecx + eax + 5]
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 1d0h]
        mov dword ptr [ebp - 24h], edx
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 11 49 F4 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x49
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1B: jmp 0x585415ed
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 1d0h]
        mov dword ptr [ebp - 28h], edx
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 F4 48 F4 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x48
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp + 8]
        shr eax, 1
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes E9 4A FF FF FF: jmp 0x58541544
        __asm _emit 0xe9
        __asm _emit 0x4a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0d0h]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 7E 9B 27 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x9b
        __asm _emit 0x27
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0d0h]
        mov dword ptr [ebp - 30h], edx
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 B8 48 F4 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x48
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
