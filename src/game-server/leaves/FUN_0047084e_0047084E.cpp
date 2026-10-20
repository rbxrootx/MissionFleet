// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047084E .. +0x1FC bytes.
extern "C" __declspec(naked) void FUN_0047084e_0047084E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 80h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 80h]
        mov ecx, 20h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 80h], ecx
        push 5ch
        push 0
        lea eax, [ebp - 5ch]
        push eax
        ; Exact mapped bytes E8 F6 8A 03 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x8a
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        push 0ah
        push 0
        lea ecx, [ebp - 68h]
        push ecx
        ; Exact mapped bytes E8 E6 8A 03 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x8a
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes EB 09: jmp 0x47089f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 6ch]
        add edx, 1
        mov dword ptr [ebp - 6ch], edx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + 168h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 4E: mov dx, word ptr [ecx + 0x4e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x4e
        cmp dword ptr [ebp - 6ch], edx
        ; Exact mapped bytes 0F 8D 7E 01 00 00: jge 0x470a35
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 5ch
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [eax]
        push ecx
        lea edx, [ebp - 5ch]
        push edx
        ; Exact mapped bytes E8 55 87 03 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x87
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 74h], 31h
        mov dword ptr [ebp - 78h], 0
        mov eax, dword ptr [ebp - 5ch]
        shr eax, 0ah
        and eax, 3fffffh
        mov dword ptr [ebp - 7ch], eax
        lea ecx, [ebp - 74h]
        push ecx
        lea edx, [ebp - 78h]
        push edx
        lea eax, [ebp - 7ch]
        push eax
        ; Exact mapped bytes E8 C5 2E F9 FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x2e
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 2A 01 00 00: je 0x470a30
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 5ch]
        shr eax, 0ah
        and eax, 3fffffh
        imul eax, eax, 370h
        lea edi, [edx + eax + 16be0h]
        mov ecx, 17h
        lea esi, [ebp - 5ch]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 5ch]
        shr eax, 0ah
        and eax, 3fffffh
        imul eax, eax, 370h
        mov dword ptr [edx + eax + 16bdch], 0
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        add edx, 5ch
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [eax], edx
        mov dword ptr [ebp - 70h], 0
        ; Exact mapped bytes EB 09: jmp 0x470975
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 70h]
        add ecx, 1
        mov dword ptr [ebp - 70h], ecx
        mov edx, dword ptr [ebp - 5ch]
        shr edx, 1
        and edx, 1fh
        cmp dword ptr [ebp - 70h], edx
        ; Exact mapped bytes 73 71: jae 0x4709f3
        __asm _emit 0x73
        __asm _emit 0x71
        push 0ah
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [eax]
        push ecx
        lea edx, [ebp - 68h]
        push edx
        ; Exact mapped bytes E8 8A 86 03 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x86
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 5ch]
        shr edx, 0ah
        and edx, 3fffffh
        imul edx, edx, 370h
        lea eax, [ecx + edx + 16bdch]
        mov ecx, dword ptr [ebp - 60h]
        and ecx, 0ffh
        imul ecx, ecx, 0ah
        lea edx, [eax + ecx + 12eh]
        mov eax, dword ptr [ebp - 68h]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp - 64h]
        mov dword ptr [edx + 4], ecx
        ; Exact mapped bytes 66 8B 45 A0: mov ax, word ptr [ebp - 0x60]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa0
        ; Exact mapped bytes 66 89 42 08: mov word ptr [edx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        add edx, 0ah
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [eax], edx
        ; Exact mapped bytes E9 79 FF FF FF: jmp 0x47096c
        __asm _emit 0xe9
        __asm _emit 0x79
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 5ch]
        shr eax, 0ah
        and eax, 3fffffh
        imul eax, eax, 370h
        mov ecx, dword ptr [edx + eax + 16be0h]
        and ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 15: je 0x470a30
        __asm _emit 0x74
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 5ch]
        shr edx, 0ah
        and edx, 3fffffh
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax + 16ch], edx
        ; Exact mapped bytes E9 61 FE FF FF: jmp 0x470896
        __asm _emit 0xe9
        __asm _emit 0x61
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        add esp, 80h
        cmp ebp, esp
        ; Exact mapped bytes E8 9C 7D 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x7d
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
