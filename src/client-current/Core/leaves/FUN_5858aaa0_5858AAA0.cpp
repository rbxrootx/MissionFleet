// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5858AAA0 .. +0x25B bytes.
extern "C" __declspec(naked) void FUN_5858aaa0_5858AAA0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58884033h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 4ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 0cch], 0fffffc7ch
        ; Exact mapped bytes 7C 17: jl 0x5858aaee
        __asm _emit 0x7c
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0cch]
        sub edx, 0ah
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0cch], edx
        ; Exact mapped bytes EB 0D: jmp 0x5858aafb
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0cch], 0fffffc7ch
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 2b8h]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 4
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 1A 49 F1 FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x49
        __asm _emit 0xf1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 1ech]
        sub eax, 1
        and eax, 8000001fh
        ; Exact mapped bytes 79 05: jns 0x5858ab2e
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0ffffffe0h
        inc eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*8 + 0d4h]
        mov dword ptr [ebp - 58h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1ech]
        sub ecx, 1
        and ecx, 8000001fh
        ; Exact mapped bytes 79 05: jns 0x5858ab54
        __asm _emit 0x79
        __asm _emit 0x05
        dec ecx
        or ecx, 0ffffffe0h
        inc ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*8 + 0d8h]
        mov dword ptr [ebp - 54h], eax
        push 60h
        ; Exact mapped bytes E8 9C 64 2A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x64
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 4A: je 0x5858abc5
        __asm _emit 0x74
        __asm _emit 0x4a
        mov ecx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ecx + 0c8h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov dword ptr [ebp - 2ch], eax
        push 1eh
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 34 9F EF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x9f
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov edx, dword ptr [ebp - 2ch]
        push edx
        push 1388h
        mov eax, dword ptr [ebp - 54h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        push ecx
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 80 60 1E 00: call 0x58770c40
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x60
        __asm _emit 0x1e
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5858abcc
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 34h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 10h]
        mov eax, dword ptr [eax + 0c4h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 F7 47 F1 FF: call 0x5849f3f0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x47
        __asm _emit 0xf1
        __asm _emit 0xff
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 AA A9 22 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xa9
        __asm _emit 0x22
        __asm _emit 0x00
        push 0c8h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 2D A9 22 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xa9
        __asm _emit 0x22
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 0c8h], 0
        ; Exact mapped bytes 0F 8F C8 00 00 00: jg 0x5858acec
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 214h], 4
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 210h]
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 210h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 2b8h]
        mov dword ptr [ebp - 38h], edx
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 30 B3 EF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xb3
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        push 60h
        ; Exact mapped bytes E8 9C 63 2A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x63
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 57: je 0x5858acd2
        __asm _emit 0x74
        __asm _emit 0x57
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 40h], eax
        push 9
        ; Exact mapped bytes 8B 0D F4 06 96 58: mov ecx, dword ptr [0x589606f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 36 9E EF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x9e
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes 8B 0D 10 07 96 58: mov ecx, dword ptr [0x58960710]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 48h], ecx
        push -1
        push 1770h
        mov edx, dword ptr [ebp - 3ch]
        push edx
        mov eax, dword ptr [ebp - 40h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        push 3ch
        mov eax, dword ptr [ebp - 48h]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 33 29 FE FF: call 0x5856d600
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x29
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x5858acd9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 4ch], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 50h], edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ret
    }
}
