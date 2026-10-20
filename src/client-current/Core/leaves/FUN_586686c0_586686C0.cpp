// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586686C0 .. +0xE0 bytes.
extern "C" __declspec(naked) void FUN_586686c0_586686C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BF 88 DA 00 00 00: movsx ecx, word ptr [eax + 0xda]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x88
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 0F 8E C1 00 00 00: jle 0x5866879c
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 AE 00 00 00: je 0x5866879c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        mov ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 0F 84 9A 00 00 00: je 0x5866879c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B6 C2 E1 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xc2
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 31: je 0x58668744
        __asm _emit 0x74
        __asm _emit 0x31
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 17: je 0x58668736
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
        ; Exact mapped bytes EB 07: jmp 0x5866873d
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
        ; Exact mapped bytes 74 0F: je 0x58668768
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BF 82 DA 00 00 00: movsx eax, word ptr [edx + 0xda]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 75 2F: jne 0x58668797
        __asm _emit 0x75
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0f0h], 0
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 70h], 0
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 6ch], 0
        xor ecx, ecx
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 89 8A DA 00 00 00: mov word ptr [edx + 0xda], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 05: jmp 0x5866879c
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 59 FF FF FF: jmp 0x586686f5
        __asm _emit 0xe9
        __asm _emit 0x59
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
