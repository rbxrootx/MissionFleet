// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585D6EE0 .. +0xD9 bytes.
extern "C" __declspec(naked) void FUN_585d6ee0_585D6EE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 10730h], 0
        ; Exact mapped bytes 0F 84 BC 00 00 00: je 0x585d6fb5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 10740h], 40000000h
        ; Exact mapped bytes 0F 85 A9 00 00 00: jne 0x585d6fb5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10694h]
        xor edx, edx
        mov ecx, 19h
        div ecx
        test edx, edx
        ; Exact mapped bytes 0F 85 8F 00 00 00: jne 0x585d6fb5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8F FA EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xfa
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C8 DA EA FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xda
        __asm _emit 0xea
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 1ch], edx
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 10730h]
        ; Exact mapped bytes E8 AF DA EA FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xda
        __asm _emit 0xea
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 24h], edx
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 1ch]
        sub ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 18h]
        sub edx, dword ptr [ebp - 20h]
        shl edx, 1
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 14h]
        imul eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, dword ptr [ebp - 10h]
        add eax, ecx
        ; Exact mapped bytes F2 0F 2A C0: cvtsi2sd xmm0, eax
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc0
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 8F A0 27 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xa0
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 F7 A2 25 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xa2
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10730h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 1C 7B 19 00: call 0x5876ead0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x7b
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
