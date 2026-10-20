// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004279F5 .. +0xA4 bytes.
extern "C" __declspec(naked) void FUN_004279f5_004279F5() {
    __asm {
        push ebx
        push esi
        push edi
        push 2
        xor ebx, ebx
        xor edi, edi
        ; Exact mapped bytes E8 07 AC FF FF: call 0x42260a
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xac
        __asm _emit 0xff
        __asm _emit 0xff
        xor esi, esi
        pop ecx
        ; Exact mapped bytes 39 35 40 10 45 00: cmp dword ptr [0x451040], esi
        __asm _emit 0x39
        __asm _emit 0x35
        __asm _emit 0x40
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 7E 74: jle 0x427a82
        __asm _emit 0x7e
        __asm _emit 0x74
        ; Exact mapped bytes A1 24 00 45 00: mov eax, dword ptr [0x450024]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x45
        __asm _emit 0x00
        mov eax, dword ptr [eax + esi*4]
        test eax, eax
        ; Exact mapped bytes 74 5F: je 0x427a79
        __asm _emit 0x74
        __asm _emit 0x5f
        test byte ptr [eax + 0ch], 83h
        ; Exact mapped bytes 74 59: je 0x427a79
        __asm _emit 0x74
        __asm _emit 0x59
        push eax
        push esi
        ; Exact mapped bytes E8 21 F3 FF FF: call 0x426d48
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 24 00 45 00: mov eax, dword ptr [0x450024]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x45
        __asm _emit 0x00
        pop ecx
        pop ecx
        mov eax, dword ptr [eax + esi*4]
        mov ecx, dword ptr [eax + 0ch]
        test cl, 83h
        ; Exact mapped bytes 74 30: je 0x427a69
        __asm _emit 0x74
        __asm _emit 0x30
        cmp dword ptr [esp + 10h], 1
        ; Exact mapped bytes 75 0F: jne 0x427a4f
        __asm _emit 0x75
        __asm _emit 0x0f
        push eax
        ; Exact mapped bytes E8 1C FF FF FF: call 0x427962
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, -1
        pop ecx
        ; Exact mapped bytes 74 1D: je 0x427a69
        __asm _emit 0x74
        __asm _emit 0x1d
        inc ebx
        ; Exact mapped bytes EB 1A: jmp 0x427a69
        __asm _emit 0xeb
        __asm _emit 0x1a
        cmp dword ptr [esp + 10h], 0
        ; Exact mapped bytes 75 13: jne 0x427a69
        __asm _emit 0x75
        __asm _emit 0x13
        test cl, 2
        ; Exact mapped bytes 74 0E: je 0x427a69
        __asm _emit 0x74
        __asm _emit 0x0e
        push eax
        ; Exact mapped bytes E8 01 FF FF FF: call 0x427962
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, -1
        pop ecx
        ; Exact mapped bytes 75 02: jne 0x427a69
        __asm _emit 0x75
        __asm _emit 0x02
        or edi, eax
        ; Exact mapped bytes A1 24 00 45 00: mov eax, dword ptr [0x450024]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x45
        __asm _emit 0x00
        push dword ptr [eax + esi*4]
        push esi
        ; Exact mapped bytes E8 23 F3 FF FF: call 0x426d9a
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        inc esi
        ; Exact mapped bytes 3B 35 40 10 45 00: cmp esi, dword ptr [0x451040]
        __asm _emit 0x3b
        __asm _emit 0x35
        __asm _emit 0x40
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 7C 8C: jl 0x427a0e
        __asm _emit 0x7c
        __asm _emit 0x8c
        push 2
        ; Exact mapped bytes E8 E2 AB FF FF: call 0x42266b
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xab
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [esp + 14h], 1
        pop ecx
        mov eax, ebx
        ; Exact mapped bytes 74 02: je 0x427a95
        __asm _emit 0x74
        __asm _emit 0x02
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret
    }
}
