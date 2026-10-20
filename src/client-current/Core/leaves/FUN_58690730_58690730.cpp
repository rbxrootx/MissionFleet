// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58690730 .. +0x2E8 bytes.
extern "C" __declspec(naked) void FUN_58690730_58690730() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push esi
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 7B 62 DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x62
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F4 BC DF FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xbc
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 8D 42 DF FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x42
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 388h]
        mov dword ptr [ecx + 0b8h], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0b4h], 7dh
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b4h]
        push edx
        mov eax, dword ptr [ebp - 4]
        add eax, 0b4h
        push eax
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 33 D6 EB FF: call 0x5854ddc0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xd6
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ech]
        mov dword ptr [ebp - 0ch], edx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 9D F0 E0 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xf0
        __asm _emit 0xe0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0e4h]
        mov dword ptr [ebp - 10h], ecx
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 87 F0 E0 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xf0
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f4h]
        mov dword ptr [ebp - 14h], eax
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 71 F0 E0 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xf0
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0f0h]
        ; Exact mapped bytes E8 53 45 EA FF: call 0x58534d30
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x45
        __asm _emit 0xea
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0b0h], 0
        xor eax, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 C8 00 00 00: mov word ptr [ecx + 0xc8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 90 AC 00 00 00: mov word ptr [eax + 0xac], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0a8h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58690821
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 5
        ; Exact mapped bytes 0F 84 BF 01 00 00: je 0x586909ea
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 148h], 1
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 0fch], 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, dword ptr [ebp - 8]
        mov byte ptr [ecx + 110h], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 120h], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 15ch]
        mov ecx, 4
        imul edx, ecx, 0
        mov dword ptr [eax + edx], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 15ch]
        mov eax, 4
        shl eax, 0
        mov dword ptr [edx + eax], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 184h]
        mov ecx, 4
        imul edx, ecx, 0
        mov dword ptr [eax + edx], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 184h]
        mov eax, 4
        shl eax, 0
        mov dword ptr [edx + eax], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 184h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        xor eax, 0a0e6b2d0h
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        lea ecx, [esi + ecx*8 + 184h]
        mov dword ptr [ecx + edx], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 184h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        xor eax, 0a0e6b2d0h
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        lea edx, [esi + edx*8 + 184h]
        mov dword ptr [edx + ecx], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 654h]
        mov eax, 4
        imul ecx, eax, 0
        mov dword ptr [edx + ecx], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 654h]
        mov edx, 4
        shl edx, 0
        mov dword ptr [ecx + edx], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 6c0h]
        mov dword ptr [ebp - 18h], edx
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 A9 EE E0 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xee
        __asm _emit 0xe0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax*4 + 6ach]
        ; Exact mapped bytes E8 87 43 EA FF: call 0x58534d30
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x43
        __asm _emit 0xea
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 614h], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 67ch]
        mov dword ptr [ebp - 1ch], eax
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 BC 55 DF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x55
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 698h], 0
        ; Exact mapped bytes E9 2E FE FF FF: jmp 0x58690818
        __asm _emit 0xe9
        __asm _emit 0x2e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 72ch]
        mov dword ptr [ebp - 24h], ecx
        push 17h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CD 40 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x40
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 4E 62 DF FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x62
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
