// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041DBFF .. +0x73 bytes.
extern "C" __declspec(naked) void FUN_0041dbff_0041DBFF() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        test esi, esi
        push edi
        ; Exact mapped bytes 74 66: je 0x41dc6f
        __asm _emit 0x74
        __asm _emit 0x66
        push dword ptr [esi + 1ch]
        ; Exact mapped bytes FF 15 A4 C4 43 00: call dword ptr [0x43c4a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 59: je 0x41dc6f
        __asm _emit 0x74
        __asm _emit 0x59
        push dword ptr [esi + 1ch]
        ; Exact mapped bytes 8B 35 08 C5 43 00: mov esi, dword ptr [0x43c508]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        push eax
        ; Exact mapped bytes E8 B1 16 01 00: call 0x42f2d8
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 44: je 0x41dc6f
        __asm _emit 0x74
        __asm _emit 0x44
        mov edi, dword ptr [eax + 34h]
        test edi, edi
        ; Exact mapped bytes 75 05: jne 0x41dc37
        __asm _emit 0x75
        __asm _emit 0x05
        push dword ptr [eax + 1ch]
        ; Exact mapped bytes EB E8: jmp 0x41dc1f
        __asm _emit 0xeb
        __asm _emit 0xe8
        mov eax, dword ptr [edi + 48h]
        test eax, eax
        ; Exact mapped bytes 74 31: je 0x41dc6f
        __asm _emit 0x74
        __asm _emit 0x31
        push dword ptr [eax + 20h]
        ; Exact mapped bytes E8 92 16 01 00: call 0x42f2d8
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 25: je 0x41dc6f
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [esp + 10h]
        cmp ecx, eax
        ; Exact mapped bytes 74 1D: je 0x41dc6f
        __asm _emit 0x74
        __asm _emit 0x1d
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x41dc66
        __asm _emit 0x74
        __asm _emit 0x10
        push dword ptr [ecx + 1ch]
        push dword ptr [eax + 1ch]
        ; Exact mapped bytes FF 15 C8 C4 43 00: call dword ptr [0x43c4c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x41dc6f
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [edi]
        push 0
        mov ecx, edi
        ; Exact mapped bytes FF 50 5C: call dword ptr [eax + 0x5c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x5c
        pop edi
        pop esi
        ret
    }
}
