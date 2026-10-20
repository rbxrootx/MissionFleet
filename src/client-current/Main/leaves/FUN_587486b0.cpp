// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587486B0 .. +0xD7 bytes.
extern "C" __declspec(naked) void FUN_587486b0() {
    __asm {
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 18h]
        mov ebx, dword ptr [eax]
        mov eax, dword ptr [esi]
        push edi
        mov edi, dword ptr [esp + 1ch]
        test edi, edi
        ; Exact mapped bytes 74 04: je 0x587486cb
        __asm _emit 0x74
        __asm _emit 0x04
        cmp edi, eax
        ; Exact mapped bytes 74 09: je 0x587486d4
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes E8 A2 45 23 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x45
        __asm _emit 0x23
        __asm _emit 0x00
        mov edi, dword ptr [esp + 1ch]
        cmp dword ptr [esp + 20h], ebx
        ; Exact mapped bytes 75 66: jne 0x58748740
        __asm _emit 0x75
        __asm _emit 0x66
        mov ecx, dword ptr [esp + 24h]
        mov ebx, dword ptr [esi + 18h]
        mov eax, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x587486eb
        __asm _emit 0x74
        __asm _emit 0x04
        cmp ecx, eax
        ; Exact mapped bytes 74 09: je 0x587486f4
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes E8 82 45 23 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x45
        __asm _emit 0x23
        __asm _emit 0x00
        mov edi, dword ptr [esp + 1ch]
        cmp dword ptr [esp + 28h], ebx
        ; Exact mapped bytes 75 46: jne 0x58748740
        __asm _emit 0x75
        __asm _emit 0x46
        mov ecx, dword ptr [esi + 18h]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 48 FF FF FF: call 0x58748650
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 18h]
        mov dword ptr [eax + 4], eax
        mov eax, dword ptr [esi + 18h]
        mov dword ptr [esi + 1ch], 0
        mov dword ptr [eax], eax
        mov eax, dword ptr [esi + 18h]
        mov dword ptr [eax + 8], eax
        mov eax, dword ptr [esi + 18h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [esi]
        mov eax, dword ptr [esp + 18h]
        pop edi
        pop esi
        mov dword ptr [eax + 4], ecx
        mov dword ptr [eax], edx
        pop ebx
        add esp, 8
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test edi, edi
        ; Exact mapped bytes 74 06: je 0x5874874a
        __asm _emit 0x74
        __asm _emit 0x06
        cmp edi, dword ptr [esp + 24h]
        ; Exact mapped bytes 74 09: je 0x58748753
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes E8 23 45 23 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x45
        __asm _emit 0x23
        __asm _emit 0x00
        mov edi, dword ptr [esp + 1ch]
        mov ebx, dword ptr [esp + 20h]
        cmp ebx, dword ptr [esp + 28h]
        ; Exact mapped bytes 74 1D: je 0x5874877a
        __asm _emit 0x74
        __asm _emit 0x1d
        lea ecx, [esp + 1ch]
        ; Exact mapped bytes E8 3A F9 FF FF: call 0x587480a0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        push ebx
        push edi
        lea eax, [esp + 14h]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 8C FB FF FF: call 0x58748300
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, dword ptr [esp + 1ch]
        ; Exact mapped bytes EB C6: jmp 0x58748740
        __asm _emit 0xeb
        __asm _emit 0xc6
        mov esi, dword ptr [esi]
        mov eax, dword ptr [esp + 18h]
        pop edi
        mov dword ptr [eax], esi
        pop esi
        mov dword ptr [eax + 4], ebx
    }
}
