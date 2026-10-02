// Complete Ghidra body ranges for the selected function.
// 2 discontiguous segments; total 877 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588290F0 .. +0xAF bytes.
extern "C" __declspec(naked) void FUN_588290f0_segment_00() {
    __asm {
        sub esp, 0a0h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 9ch], eax
        push ebx
        push ebp
        push esi
        push edi
        mov eax, dword ptr [esp + 0bch]
        ; Exact mapped bytes 8B 2D 30 C0 98 58: mov ebp, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov esi, ecx
        mov ecx, dword ptr [esp + 0b4h]
        mov dword ptr [esi + 144h], ecx
        mov dword ptr [esp + 18h], eax
        xor eax, eax
        mov dword ptr [esi + 13ch], eax
        mov edx, dword ptr [esi + 0fch]
        mov dword ptr [edx + 50h], eax
        mov ecx, dword ptr [esi + 100h]
        mov dword ptr [ecx + 50h], eax
        mov edx, dword ptr [esi + 104h]
        mov dword ptr [edx + 50h], eax
        mov ecx, dword ptr [esi + 108h]
        mov dword ptr [ecx + 50h], eax
        mov edx, dword ptr [esi + 10ch]
        mov dword ptr [edx + 50h], eax
        mov ecx, dword ptr [esi + 110h]
        mov dword ptr [ecx + 50h], eax
        mov edx, dword ptr [esi + 114h]
        mov dword ptr [edx + 50h], eax
        mov ecx, dword ptr [esi + 118h]
        mov dword ptr [ecx + 50h], eax
        xor edi, edi
        mov dword ptr [esp + 14h], 589baa94h
        ; Exact mapped bytes EB 02: jmp 0x58829186
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        xor ebx, ebx
        cmp dword ptr [esp + 0b8h], eax
        ; Exact mapped bytes 0F 86 0D 01 00 00: jbe 0x588292a2
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 18h]
        mov dword ptr [esp + 10h], edx
        ; Exact mapped bytes EB 03: jmp 0x588291a2
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588291A0 .. +0x2BE bytes.
extern "C" __declspec(naked) void FUN_588290f0_segment_01() {
    __asm {
        xor eax, eax
        mov ecx, dword ptr [esp + 14h]
        cmp dword ptr [ecx], eax
        ; Exact mapped bytes 74 41: je 0x588291eb
        __asm _emit 0x74
        __asm _emit 0x41
        mov ecx, dword ptr [esi + 0f8h]
        push edi
        ; Exact mapped bytes E8 8A EF 0D 00: call 0x58908140
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xef
        __asm _emit 0x0d
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 74 30: je 0x588291eb
        __asm _emit 0x74
        __asm _emit 0x30
        mov ecx, dword ptr [esi + 0f8h]
        push edi
        ; Exact mapped bytes E8 79 EF 0D 00: call 0x58908140
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xef
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 50 20: mov dx, word ptr [eax + 0x20]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x20
        mov eax, dword ptr [esp + 10h]
        ; Exact mapped bytes 66 3B 10: cmp dx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x10
        ; Exact mapped bytes 75 17: jne 0x588291eb
        __asm _emit 0x75
        __asm _emit 0x17
        mov ecx, dword ptr [esi + 0f8h]
        push edi
        ; Exact mapped bytes E8 60 EF 0D 00: call 0x58908140
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xef
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, 0a9h
        ; Exact mapped bytes 66 39 48 20: cmp word ptr [eax + 0x20], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x48
        __asm _emit 0x20
        ; Exact mapped bytes 75 14: jne 0x588291ff
        __asm _emit 0x75
        __asm _emit 0x14
        add dword ptr [esp + 10h], 3ch
        inc ebx
        cmp ebx, dword ptr [esp + 0b8h]
        ; Exact mapped bytes 72 A6: jb 0x588291a0
        __asm _emit 0x72
        __asm _emit 0xa6
        ; Exact mapped bytes E9 A3 00 00 00: jmp 0x588292a2
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 18h]
        mov edx, ebx
        shl edx, 4
        sub edx, ebx
        lea ebx, [eax + edx*4]
        mov eax, dword ptr [ebx + 8]
        cmp eax, 80h
        ; Exact mapped bytes 0F 83 C2 00 00 00: jae 0x588292dd
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 BE 00 00 00: je 0x588292e1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 40h
        ; Exact mapped bytes 75 7A: jne 0x588292a2
        __asm _emit 0x75
        __asm _emit 0x7a
        push 707070h
        push edi
        push 5899deb0h
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [esi + 11ch]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 9C F7 0D 00: call 0x589089e0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xf7
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes A1 68 47 A2 58: mov eax, dword ptr [0x58a24768]
        __asm _emit 0xa1
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 59h
        ; Exact mapped bytes 7E 17: jle 0x58829269
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58829269
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 164h]
        ; Exact mapped bytes EB 02: jmp 0x5882926b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 11ch]
        push edi
        push eax
        ; Exact mapped bytes E8 F8 10 F6 FF: call 0x5878a370
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x10
        __asm _emit 0xf6
        __asm _emit 0xff
        push 707070h
        push edi
        push 5899dc20h
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [esi + 120h]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 4C F7 0D 00: call 0x589089e0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xf7
        __asm _emit 0x0d
        __asm _emit 0x00
        push edi
        push 0
        mov ecx, dword ptr [esi + 120h]
        ; Exact mapped bytes E8 CE 10 F6 FF: call 0x5878a370
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x10
        __asm _emit 0xf6
        __asm _emit 0xff
        mov eax, dword ptr [esp + 14h]
        add eax, 0e84h
        inc edi
        cmp eax, 589c2d38h
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes 0F 8C C9 FE FF FF: jl 0x58829184
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xc9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 EE F9 FF FF: call 0x58828cb0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 0ach]
        pop edi
        pop esi
        pop ebp
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 06 39 15 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x39
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 0a0h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 21: jne 0x58829302
        __asm _emit 0x75
        __asm _emit 0x21
        push 707070h
        push edi
        push 5899dc44h
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [esi + 11ch]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 E3 F6 0D 00: call 0x589089e0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xf6
        __asm _emit 0x0d
        __asm _emit 0x00
        push edi
        push 0
        ; Exact mapped bytes EB 55: jmp 0x58829357
        __asm _emit 0xeb
        __asm _emit 0x55
        mov ecx, dword ptr [esi + 11ch]
        push 707070h
        push edi
        lea edx, [ebx + 0ch]
        push edx
        ; Exact mapped bytes E8 C9 F6 0D 00: call 0x589089e0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xf6
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 24h]
        test eax, eax
        ; Exact mapped bytes 76 10: jbe 0x5882932e
        __asm _emit 0x76
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D E0 45 A2 58: mov ecx, dword ptr [0x58a245e0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push edi
        dec eax
        push eax
        ; Exact mapped bytes E8 C4 CC F2 FF: call 0x58755ff0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xcc
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes EB 28: jmp 0x58829356
        __asm _emit 0xeb
        __asm _emit 0x28
        ; Exact mapped bytes A1 68 47 A2 58: mov eax, dword ptr [0x58a24768]
        __asm _emit 0xa1
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 59h
        ; Exact mapped bytes 7E 17: jle 0x58829353
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58829353
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov eax, dword ptr [eax + 164h]
        ; Exact mapped bytes EB 02: jmp 0x58829355
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push edi
        push eax
        mov ecx, dword ptr [esi + 11ch]
        ; Exact mapped bytes E8 0E 10 F6 FF: call 0x5878a370
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x10
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 12ch]
        push 707070h
        push edi
        push 5898c922h
        ; Exact mapped bytes E8 68 F6 0D 00: call 0x589089e0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xf6
        __asm _emit 0x0d
        __asm _emit 0x00
        movzx eax, word ptr [ebx + 28h]
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 2F: jne 0x588293b0
        __asm _emit 0x75
        __asm _emit 0x2f
        mov ecx, dword ptr [ebx + 8]
        ; Exact mapped bytes 3B 0D A0 B4 A0 58: cmp ecx, dword ptr [0x58a0b4a0]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 74 24: je 0x588293b0
        __asm _emit 0x74
        __asm _emit 0x24
        push 707070h
        push edi
        push 5899de8ch
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [esi + 120h]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 38 F6 0D 00: call 0x589089e0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xf6
        __asm _emit 0x0d
        __asm _emit 0x00
        push edi
        push 1
        ; Exact mapped bytes E9 E7 FE FF FF: jmp 0x58829297
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 F8 02: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 75 10: jne 0x588293c6
        __asm _emit 0x75
        __asm _emit 0x10
        push 707070h
        push edi
        push 5899de6ch
        ; Exact mapped bytes E9 BD FE FF FF: jmp 0x58829283
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 F8 03: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x03
        ; Exact mapped bytes 75 10: jne 0x588293dc
        __asm _emit 0x75
        __asm _emit 0x10
        push 707070h
        push edi
        push 5899de4ch
        ; Exact mapped bytes E9 A7 FE FF FF: jmp 0x58829283
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 F8 01: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 75 62: jne 0x58829444
        __asm _emit 0x75
        __asm _emit 0x62
        lea edx, [esp + 1ch]
        push edx
        add ebx, 2ah
        push ebx
        ; Exact mapped bytes E8 A0 BE F6 FF: call 0x58795290
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xbe
        __asm _emit 0xf6
        __asm _emit 0xff
        movzx eax, word ptr [esp + 2eh]
        movzx ecx, word ptr [esp + 2ch]
        movzx edx, word ptr [esp + 2ah]
        add esp, 8
        push eax
        push ecx
        push edx
        push 5899de20h
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        add esp, 4
        push eax
        lea eax, [esp + 3ch]
        push eax
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 14h
        push 707070h
        push edi
        lea ecx, [esp + 34h]
        push ecx
        mov ecx, dword ptr [esi + 12ch]
        ; Exact mapped bytes E8 AC F5 0D 00: call 0x589089e0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xf5
        __asm _emit 0x0d
        __asm _emit 0x00
        push 707070h
        push edi
        push 5899de00h
        ; Exact mapped bytes E9 3F FE FF FF: jmp 0x58829283
        __asm _emit 0xe9
        __asm _emit 0x3f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 F8 04: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x04
        ; Exact mapped bytes 0F 85 2A FE FF FF: jne 0x58829278
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 707070h
        push edi
        push 5899dde0h
        ; Exact mapped bytes E9 25 FE FF FF: jmp 0x58829283
        __asm _emit 0xe9
        __asm _emit 0x25
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
