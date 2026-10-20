// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00411320 .. +0xB7 bytes.
extern "C" __declspec(naked) void FUN_00411320_00411320() {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0ch]
        mov esi, ecx
        test edi, edi
        ; Exact mapped bytes 0F 84 A0 00 00 00: je 0x4113d0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 10ch]
        cmp eax, -1
        ; Exact mapped bytes 74 0C: je 0x411347
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp dword ptr [esi + 110h], eax
        ; Exact mapped bytes 0F 8D 89 00 00 00: jge 0x4113d0
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 4ch]
        test ecx, ecx
        ; Exact mapped bytes 74 0A: je 0x411358
        __asm _emit 0x74
        __asm _emit 0x0a
        cmp ecx, esi
        ; Exact mapped bytes 74 7E: je 0x4113d0
        __asm _emit 0x74
        __asm _emit 0x7e
        mov eax, dword ptr [ecx]
        push edi
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov eax, dword ptr [esi + 118h]
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x411370
        __asm _emit 0x74
        __asm _emit 0x0e
        mov dword ptr [edi + 54h], eax
        mov ecx, dword ptr [esi + 118h]
        mov dword ptr [ecx + 58h], edi
        ; Exact mapped bytes EB 0D: jmp 0x41137d
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov dword ptr [esi + 114h], edi
        mov dword ptr [edi + 54h], 0
        mov dword ptr [esi + 118h], edi
        mov dword ptr [edi + 4ch], esi
        mov dword ptr [edi + 58h], 0
        ; Exact mapped bytes FF 15 80 C5 43 00: call dword ptr [0x43c580]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        mov dword ptr [edi + 64h], eax
        mov edx, dword ptr [esi + 110h]
        inc edx
        mov dword ptr [esi + 110h], edx
        mov eax, dword ptr [esi + 0c98h]
        cmp eax, -1
        ; Exact mapped bytes 74 18: je 0x4113c6
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [esi + 0c90h]
        push 0
        push eax
        push 46bh
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 4C C5 43 00: call dword ptr [0x43c54c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        pop edi
        mov eax, 1
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
