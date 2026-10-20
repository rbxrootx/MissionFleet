// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58756730 .. +0x1FF bytes.
extern "C" __declspec(naked) void FUN_58756730_58756730() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 5ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 8]
        sub edx, 1
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 8], edx
        imul edx, dword ptr [ebp + 0ch], 0ch
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 1814h]
        mov dword ptr [ebp - 18h], ecx
        lea edx, [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 13 19 D3 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x19
        __asm _emit 0xd3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x5875677f
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea eax, [ebp - 48h]
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 02 13 D3 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x13
        __asm _emit 0xd3
        __asm _emit 0xff
        nop
        imul ecx, dword ptr [ebp + 0ch], 0ch
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 1814h]
        mov dword ptr [ebp - 1ch], eax
        lea ecx, [ebp - 4ch]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 F4 19 D3 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x19
        __asm _emit 0xd3
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 2B 12 D3 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x12
        __asm _emit 0xd3
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 3B: je 0x587567e7
        __asm _emit 0x74
        __asm _emit 0x3b
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 8C 12 D3 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x12
        __asm _emit 0xd3
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 2A: jne 0x587567e5
        __asm _emit 0x75
        __asm _emit 0x2a
        imul ecx, dword ptr [ebp + 0ch], 0ch
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 1814h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        lea eax, [ebp - 50h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 CE 37 D6 FF: call 0x584b9fb0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x37
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 02: jmp 0x587567e7
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 89: jmp 0x58756770
        __asm _emit 0xeb
        __asm _emit 0x89
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx*4 + 8], 0
        ; Exact mapped bytes 0F 85 31 01 00 00: jne 0x58756929
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 808h], 0
        ; Exact mapped bytes 74 45: je 0x5875684d
        __asm _emit 0x74
        __asm _emit 0x45
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 808h]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 17: je 0x58756835
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 28h], ecx
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 55 D8: call dword ptr [ebp - 0x28]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd8
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5875683c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 808h], 0
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx*4 + 1008h], 0
        ; Exact mapped bytes 74 45: je 0x587568a2
        __asm _emit 0x74
        __asm _emit 0x45
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 1008h]
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 17: je 0x5875688a
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 30h], edx
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 55 D0: call dword ptr [ebp - 0x30]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd0
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x58756891
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 1008h], 0
        mov edx, dword ptr [ebp - 4]
        add edx, 1808h
        mov dword ptr [ebp - 38h], edx
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 C6 17 D3 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x17
        __asm _emit 0xd3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x587568cc
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea ecx, [ebp - 54h]
        push ecx
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 B5 11 D3 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x11
        __asm _emit 0xd3
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        add edx, 1808h
        mov dword ptr [ebp - 3ch], edx
        lea eax, [ebp - 58h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 AC 18 D3 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x18
        __asm _emit 0xd3
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 E3 10 D3 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x10
        __asm _emit 0xd3
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 35: je 0x58756929
        __asm _emit 0x74
        __asm _emit 0x35
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 44 11 D3 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0xd3
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 24: jne 0x58756927
        __asm _emit 0x75
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        add eax, 1808h
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 40h], ecx
        mov edx, dword ptr [ebp - 40h]
        push edx
        lea eax, [ebp - 5ch]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 8C 36 D6 FF: call 0x584b9fb0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x36
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 02: jmp 0x58756929
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 94: jmp 0x587568bd
        __asm _emit 0xeb
        __asm _emit 0x94
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
