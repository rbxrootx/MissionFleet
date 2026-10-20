// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1004E5B0 .. +0xA6 bytes.
extern "C" __declspec(naked) void FUN_1004e5b0_1004E5B0() {
    __asm {
        push esi
        push edi
        mov edi, ecx
        test byte ptr [edi + 24h], 2
        ; Exact mapped bytes 0F 84 90 00 00 00: je 0x1004e64e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 3ch]
        mov esi, dword ptr [esp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x1004e5e9
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x1004e5e2
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [eax]
        push esi
        mov ecx, eax
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        mov ecx, dword ptr [edi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 09: je 0x1004e5e9
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes EB EA: jmp 0x1004e5cc
        __asm _emit 0xeb
        __asm _emit 0xea
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [esi + 4], 100h
        ; Exact mapped bytes 75 5C: jne 0x1004e64e
        __asm _emit 0x75
        __asm _emit 0x5c
        cmp dword ptr [esi + 8], 78h
        ; Exact mapped bytes 75 56: jne 0x1004e64e
        __asm _emit 0x75
        __asm _emit 0x56
        ; Exact mapped bytes A1 2C 56 1C 10: mov eax, dword ptr [0x101c562c]
        __asm _emit 0xa1
        __asm _emit 0x2c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 21: je 0x1004e622
        __asm _emit 0x74
        __asm _emit 0x21
        ; Exact mapped bytes 8B 0D 50 58 1C 10: mov ecx, dword ptr [0x101c5850]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes C7 05 2C 56 1C 10 00 00 00 00: mov dword ptr [0x101c562c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x2c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 74 39: je 0x1004e64e
        __asm _emit 0x74
        __asm _emit 0x39
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov eax, dword ptr [edi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 50 58 1C 10: mov ecx, dword ptr [0x101c5850]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes C7 05 2C 56 1C 10 01 00 00 00: mov dword ptr [0x101c562c], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x2c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 74 18: je 0x1004e64e
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 8B 0D 50 58 1C 10: mov ecx, dword ptr [0x101c5850]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes A1 F8 58 1C 10: mov eax, dword ptr [0x101c58f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        mov eax, dword ptr [edi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
