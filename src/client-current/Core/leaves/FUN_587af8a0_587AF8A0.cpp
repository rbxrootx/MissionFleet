// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587AF8A0 .. +0x12B bytes.
extern "C" __declspec(naked) void FUN_587af8a0_587AF8A0() {
    __asm {
        mov edx, dword ptr [esp + 4]
        test edx, edx
        ; Exact mapped bytes 0F 84 19 01 00 00: je 0x587af9c5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edx + 20h], 0
        ; Exact mapped bytes 0F 84 0F 01 00 00: je 0x587af9c5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edx + 24h], 0
        ; Exact mapped bytes 0F 84 05 01 00 00: je 0x587af9c5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edx + 1ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 FA 00 00 00: je 0x587af9c5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax], edx
        ; Exact mapped bytes 0F 85 F2 00 00 00: jne 0x587af9c5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 4]
        sub eax, 3f34h
        cmp eax, 1fh
        ; Exact mapped bytes 0F 87 E1 00 00 00: ja 0x587af9c5
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edx + 1ch]
        mov dword ptr [eax + 2ch], 0
        mov dword ptr [eax + 30h], 0
        mov dword ptr [eax + 34h], 0
        cmp dword ptr [edx + 20h], 0
        ; Exact mapped bytes 0F 84 BF 00 00 00: je 0x587af9c5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edx + 24h], 0
        ; Exact mapped bytes 0F 84 B5 00 00 00: je 0x587af9c5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edx + 1ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 AA 00 00 00: je 0x587af9c5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax], edx
        ; Exact mapped bytes 0F 85 A2 00 00 00: jne 0x587af9c5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 4]
        sub eax, 3f34h
        cmp eax, 1fh
        ; Exact mapped bytes 0F 87 91 00 00 00: ja 0x587af9c5
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edx + 1ch]
        mov dword ptr [ecx + 20h], 0
        mov dword ptr [edx + 14h], 0
        mov dword ptr [edx + 8], 0
        mov dword ptr [edx + 18h], 0
        mov dword ptr [edx + 2ch], 0
        mov eax, dword ptr [ecx + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x587af967
        __asm _emit 0x74
        __asm _emit 0x06
        and eax, 1
        mov dword ptr [edx + 30h], eax
        lea eax, [ecx + 534h]
        mov dword ptr [ecx + 4], 3f34h
        mov dword ptr [ecx + 70h], eax
        mov dword ptr [ecx + 54h], eax
        mov dword ptr [ecx + 50h], eax
        xor eax, eax
        mov dword ptr [ecx + 8], 0
        mov dword ptr [ecx + 10h], 0
        mov dword ptr [ecx + 14h], 0ffffffffh
        mov dword ptr [ecx + 18h], 8000h
        mov dword ptr [ecx + 24h], 0
        mov dword ptr [ecx + 3ch], 0
        mov dword ptr [ecx + 40h], 0
        mov dword ptr [ecx + 1bc4h], 1
        mov dword ptr [ecx + 1bc8h], 0ffffffffh
        ret
        mov eax, 0fffffffeh
        ret
    }
}
