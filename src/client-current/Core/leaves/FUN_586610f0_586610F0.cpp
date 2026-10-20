// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586610F0 .. +0xE9 bytes.
extern "C" __declspec(naked) void FUN_586610f0_586610F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BF 88 F8 00 00 00: movsx ecx, word ptr [eax + 0xf8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x88
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 0F 8E CA 00 00 00: jle 0x586611d5
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 13ch]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 B4 00 00 00: je 0x586611d5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        mov ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 0F 84 A0 00 00 00: je 0x586611d5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 83 38 E2 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x38
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 31: je 0x58661177
        __asm _emit 0x74
        __asm _emit 0x31
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 17: je 0x58661169
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 14h], edx
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 EC: call dword ptr [ebp - 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xec
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x58661170
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0F: je 0x5866119b
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BF 82 F8 00 00 00: movsx eax, word ptr [edx + 0xf8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 75 35: jne 0x586611d0
        __asm _emit 0x75
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 140h], 0
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 13ch], 0
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 138h], 0
        xor ecx, ecx
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 89 8A F8 00 00 00: mov word ptr [edx + 0xf8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 05: jmp 0x586611d5
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 53 FF FF FF: jmp 0x58661128
        __asm _emit 0xe9
        __asm _emit 0x53
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
