// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00418737 .. +0xAE bytes.
extern "C" __declspec(naked) void FUN_00418737_00418737() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 100h
        mov eax, dword ptr [ecx]
        lea edx, [ebp - 100h]
        push 100h
        push edx
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 50 78: call dword ptr [eax + 0x78]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x78
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x418766
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [ebp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 03: je 0x418762
        __asm _emit 0x74
        __asm _emit 0x03
        and dword ptr [eax], 0
        xor eax, eax
        ; Exact mapped bytes EB 7B: jmp 0x4187e1
        __asm _emit 0xeb
        __asm _emit 0x7b
        ; Exact mapped bytes 0F BE 85 00 FF FF FF: movsx eax, byte ptr [ebp - 0x100]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push esi
        push edi
        push eax
        lea esi, [ebp - 100h]
        ; Exact mapped bytes E8 A1 76 00 00: call 0x41fe1c
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 84 C3 43 00: mov edi, dword ptr [0x43c384]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x84
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        pop ecx
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x418799
        __asm _emit 0x74
        __asm _emit 0x13
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov esi, eax
        ; Exact mapped bytes 0F BE 06: movsx eax, byte ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x06
        push eax
        ; Exact mapped bytes E8 88 76 00 00: call 0x41fe1c
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        pop ecx
        ; Exact mapped bytes 75 ED: jne 0x418786
        __asm _emit 0x75
        __asm _emit 0xed
        mov al, byte ptr [esi]
        cmp al, 2bh
        ; Exact mapped bytes 74 04: je 0x4187a3
        __asm _emit 0x74
        __asm _emit 0x04
        cmp al, 2dh
        ; Exact mapped bytes 75 05: jne 0x4187a8
        __asm _emit 0x75
        __asm _emit 0x05
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov esi, eax
        ; Exact mapped bytes 0F BE 06: movsx eax, byte ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x06
        push eax
        ; Exact mapped bytes E8 8C 75 00 00: call 0x41fd3d
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        mov ecx, dword ptr [ebp + 0ch]
        pop esi
        test ecx, ecx
        ; Exact mapped bytes 74 02: je 0x4187bd
        __asm _emit 0x74
        __asm _emit 0x02
        mov dword ptr [ecx], eax
        test eax, eax
        ; Exact mapped bytes 74 A1: je 0x418762
        __asm _emit 0x74
        __asm _emit 0xa1
        cmp dword ptr [ebp + 10h], 0
        push 0ah
        lea eax, [ebp - 100h]
        push 0
        push eax
        ; Exact mapped bytes 74 07: je 0x4187d9
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes E8 B0 8A 00 00: call 0x421287
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 05: jmp 0x4187de
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E8 C5 8C 00 00: call 0x4214a3
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        leave
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
