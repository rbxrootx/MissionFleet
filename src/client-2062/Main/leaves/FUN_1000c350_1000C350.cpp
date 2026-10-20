// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1000C350 .. +0x5B bytes.
extern "C" __declspec(naked) void FUN_1000c350_1000C350() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 4]
        test eax, eax
        ; Exact mapped bytes 74 4D: je 0x1000c3a7
        __asm _emit 0x74
        __asm _emit 0x4d
        mov edx, dword ptr [esp + 8]
        mov ecx, eax
        mov eax, dword ptr [eax + 8]
        cmp dword ptr [ecx + 10h], edx
        ; Exact mapped bytes 74 08: je 0x1000c370
        __asm _emit 0x74
        __asm _emit 0x08
        test eax, eax
        ; Exact mapped bytes 75 F2: jne 0x1000c35e
        __asm _emit 0x75
        __asm _emit 0xf2
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 4]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x1000c37f
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [eax + 8], edx
        ; Exact mapped bytes EB 06: jmp 0x1000c385
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ecx + 8]
        mov dword ptr [esi + 4], eax
        mov eax, dword ptr [ecx + 8]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x1000c394
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax + 4], edx
        ; Exact mapped bytes EB 06: jmp 0x1000c39a
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ecx + 4]
        mov dword ptr [esi + 8], eax
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1000c3a4
        __asm _emit 0x74
        __asm _emit 0x06
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        dec dword ptr [esi + 0ch]
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
