// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587CA3F0 .. +0x1C7 bytes.
extern "C" __declspec(naked) void FUN_587ca3f0() {
    __asm {
        push -1
        push 5897ef86h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        push eax
        lea eax, [esp + 18h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        mov eax, dword ptr [esi + 0cch]
        cmp eax, 0fffffc7ch
        ; Exact mapped bytes 7C 0B: jl 0x587ca42f
        __asm _emit 0x7c
        __asm _emit 0x0b
        add eax, -0ah
        mov dword ptr [esi + 0cch], eax
        ; Exact mapped bytes EB 0A: jmp 0x587ca439
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [esi + 0cch], 0fffffc7ch
        mov eax, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 2b8h]
        push eax
        push edx
        ; Exact mapped bytes E8 44 8E 13 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x8e
        __asm _emit 0x13
        __asm _emit 0x00
        mov eax, dword ptr [esi + 1ech]
        dec eax
        and eax, 8000001fh
        ; Exact mapped bytes 79 05: jns 0x587ca45f
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0ffffffe0h
        inc eax
        mov ebx, dword ptr [esi + eax*8 + 0d4h]
        mov ebp, dword ptr [esi + eax*8 + 0d8h]
        push 60h
        ; Exact mapped bytes E8 DA 27 1B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x27
        __asm _emit 0x1b
        __asm _emit 0x00
        mov ecx, eax
        add esp, 4
        mov dword ptr [esp + 14h], ecx
        xor edi, edi
        mov dword ptr [esp + 20h], edi
        cmp ecx, edi
        ; Exact mapped bytes 74 4A: je 0x587ca4d1
        __asm _emit 0x74
        __asm _emit 0x4a
        ; Exact mapped bytes A1 F0 46 A2 58: mov eax, dword ptr [0x58a246f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 1eh
        ; Exact mapped bytes 7E 14: jle 0x587ca4a9
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 190h], edi
        ; Exact mapped bytes 74 0C: je 0x587ca4a9
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edi, dword ptr [eax + 190h]
        add edi, 780h
        mov edx, dword ptr [esi + 0c8h]
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        push eax
        push 1388h
        push ebp
        push ebx
        push edi
        push esi
        ; Exact mapped bytes E8 81 10 12 00: call 0x588eb550
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x10
        __asm _emit 0x12
        __asm _emit 0x00
        mov edi, eax
        mov ecx, dword ptr [esi + 0c4h]
        mov eax, 10624dd3h
        imul ecx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        push 0fffffeffh
        mov ecx, edi
        mov dword ptr [esp + 24h], 0ffffffffh
        mov dword ptr [edi + 5ch], eax
        ; Exact mapped bytes E8 21 88 13 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x88
        __asm _emit 0x13
        __asm _emit 0x00
        push 0c8h
        mov ecx, edi
        ; Exact mapped bytes E8 D5 87 13 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x87
        __asm _emit 0x13
        __asm _emit 0x00
        cmp dword ptr [esi + 0c8h], 0
        ; Exact mapped bytes 0F 8F 8B 00 00 00: jg 0x587ca5a3
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 210h]
        mov dword ptr [esi + 214h], 4
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov eax, dword ptr [esi + 2b8h]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 60h
        ; Exact mapped bytes E8 09 27 1B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x27
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 1
        test eax, eax
        ; Exact mapped bytes 74 4B: je 0x587ca5a3
        __asm _emit 0x74
        __asm _emit 0x4b
        ; Exact mapped bytes 8B 0D F4 46 A2 58: mov ecx, dword ptr [0x58a246f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 9
        ; Exact mapped bytes 7E 17: jle 0x587ca57e
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x587ca57e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 240h
        ; Exact mapped bytes EB 02: jmp 0x587ca580
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esi + 8]
        push -1
        push 1770h
        push edx
        mov edx, dword ptr [esi + 4]
        push edx
        push ecx
        ; Exact mapped bytes 8B 0D E0 46 A2 58: mov ecx, dword ptr [0x58a246e0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        push 3ch
        push ecx
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 BD CC FE FF: call 0x587b7260
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xcc
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 18h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 10h
        ret
    }
}
