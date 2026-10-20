// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587ACEB0 .. +0x122 bytes.
extern "C" __declspec(naked) void FUN_587aceb0_587ACEB0() {
    __asm {
        sub esp, 8
        push ebx
        push esi
        mov esi, dword ptr [esp + 14h]
        push edi
        test esi, esi
        ; Exact mapped bytes 0F 84 04 01 00 00: je 0x587acfc6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 20h], 0
        ; Exact mapped bytes 0F 84 FA 00 00 00: je 0x587acfc6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 24h], 0
        lea edi, [esi + 24h]
        ; Exact mapped bytes 0F 84 ED 00 00 00: je 0x587acfc6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 1ch]
        lea ebx, [esi + 1ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 DF 00 00 00: je 0x587acfc6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax], esi
        ; Exact mapped bytes 0F 85 D7 00 00 00: jne 0x587acfc6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 4]
        cmp eax, 2ah
        ; Exact mapped bytes 74 29: je 0x587acf20
        __asm _emit 0x74
        __asm _emit 0x29
        cmp eax, 39h
        ; Exact mapped bytes 74 24: je 0x587acf20
        __asm _emit 0x74
        __asm _emit 0x24
        cmp eax, 45h
        ; Exact mapped bytes 74 1F: je 0x587acf20
        __asm _emit 0x74
        __asm _emit 0x1f
        cmp eax, 49h
        ; Exact mapped bytes 74 1A: je 0x587acf20
        __asm _emit 0x74
        __asm _emit 0x1a
        cmp eax, 5bh
        ; Exact mapped bytes 74 15: je 0x587acf20
        __asm _emit 0x74
        __asm _emit 0x15
        cmp eax, 67h
        ; Exact mapped bytes 74 10: je 0x587acf20
        __asm _emit 0x74
        __asm _emit 0x10
        cmp eax, 71h
        ; Exact mapped bytes 74 0B: je 0x587acf20
        __asm _emit 0x74
        __asm _emit 0x0b
        cmp eax, 29ah
        ; Exact mapped bytes 0F 85 A6 00 00 00: jne 0x587acfc6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx]
        mov ecx, dword ptr [eax + 4]
        mov eax, dword ptr [eax + 8]
        mov dword ptr [esp + 10h], ecx
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x587acf4b
        __asm _emit 0x74
        __asm _emit 0x1b
        push eax
        push dword ptr [esi + 28h]
        mov eax, dword ptr [edi]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        lea ecx, [esi + 24h]
        add esp, 8
        mov dword ptr [esp + 18h], ecx
        lea ecx, [esi + 1ch]
        mov dword ptr [esp + 0ch], ecx
        ; Exact mapped bytes EB 08: jmp 0x587acf53
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 18h], edi
        mov dword ptr [esp + 0ch], ebx
        mov eax, dword ptr [ebx]
        push ebp
        mov ebp, ebx
        mov eax, dword ptr [eax + 44h]
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x587acf72
        __asm _emit 0x74
        __asm _emit 0x13
        push eax
        push dword ptr [esi + 28h]
        mov eax, dword ptr [edi]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov edi, dword ptr [esp + 24h]
        add esp, 8
        mov ebp, dword ptr [esp + 10h]
        mov eax, dword ptr [ebx]
        mov eax, dword ptr [eax + 40h]
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x587acf86
        __asm _emit 0x74
        __asm _emit 0x0b
        push eax
        push dword ptr [esi + 28h]
        mov eax, dword ptr [edi]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        add esp, 8
        mov eax, dword ptr [ebp]
        mov eax, dword ptr [eax + 38h]
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x587acf9b
        __asm _emit 0x74
        __asm _emit 0x0b
        push eax
        push dword ptr [esi + 28h]
        mov eax, dword ptr [edi]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        add esp, 8
        push dword ptr [ebp]
        mov eax, dword ptr [edi]
        push dword ptr [esi + 28h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        add esp, 8
        mov dword ptr [ebp], 0
        xor eax, eax
        mov ecx, 0fffffffdh
        cmp dword ptr [esp + 14h], 71h
        pop ebp
        pop edi
        pop esi
        cmove eax, ecx
        pop ebx
        add esp, 8
        ret
        pop edi
        pop esi
        mov eax, 0fffffffeh
        pop ebx
        add esp, 8
        ret
    }
}
