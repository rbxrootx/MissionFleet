// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10106240 .. +0x12B bytes.
extern "C" __declspec(naked) void FUN_10106240_10106240() {
    __asm {
        push -1
        push 10174a46h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esi + 88h]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x10106274
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 88h], 0
        push 6ch
        ; Exact mapped bytes E8 25 65 06 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x65
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 8], eax
        mov edi, dword ptr [esp + 1ch]
        mov dword ptr [esp + 14h], 0
        test eax, eax
        ; Exact mapped bytes 74 29: je 0x101062bb
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [edi + 20h]
        push 40h
        push ecx
        mov ecx, dword ptr [edi + 28h]
        sub edx, ecx
        mov ecx, dword ptr [esi + 14h]
        sub edx, ecx
        mov ecx, dword ptr [esi + 1ch]
        add edx, ecx
        mov ecx, dword ptr [esi + 4]
        add edx, ecx
        mov ecx, eax
        push edx
        push edi
        push esi
        ; Exact mapped bytes E8 17 38 00 00: call 0x10109ad0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x101062bd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 8ch]
        mov dword ptr [esp + 14h], 0ffffffffh
        test ecx, ecx
        mov dword ptr [esi + 88h], eax
        ; Exact mapped bytes 74 10: je 0x101062e5
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 8ch], 0
        push 6ch
        ; Exact mapped bytes E8 B4 64 06 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x64
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 1ch], eax
        test eax, eax
        mov dword ptr [esp + 14h], 1
        ; Exact mapped bytes 74 2D: je 0x1010632c
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [edi + 20h]
        push 40h
        push ecx
        mov ecx, dword ptr [edi + 28h]
        mov edi, dword ptr [esi + 1ch]
        sub edx, ecx
        mov ecx, dword ptr [esi + 14h]
        sub edx, ecx
        mov ecx, dword ptr [esi + 4]
        add edx, edi
        add edx, ecx
        mov ecx, dword ptr [esp + 28h]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 A6 37 00 00: call 0x10109ad0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1010632e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 8ch], eax
        mov esi, dword ptr [esi + 88h]
        test esi, esi
        mov dword ptr [esp + 14h], 0ffffffffh
        ; Exact mapped bytes 74 12: je 0x10106358
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [esi + 20h]
        mov edi, dword ptr [esi + 18h]
        sub edx, edi
        mov ecx, eax
        push edx
        push 0
        ; Exact mapped bytes E8 D8 8A FF FF: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x8a
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 0ch]
        pop edi
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
