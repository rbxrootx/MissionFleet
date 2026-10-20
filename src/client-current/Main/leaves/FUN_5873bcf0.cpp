// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5873BCF0 .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_5873bcf0() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 4]
        test eax, eax
        ; Exact mapped bytes 74 5A: je 0x5873bd54
        __asm _emit 0x74
        __asm _emit 0x5a
        mov edx, dword ptr [esp + 8]
        mov edi, edi
        mov ecx, eax
        mov eax, dword ptr [eax + 8]
        cmp dword ptr [ecx + 10h], edx
        ; Exact mapped bytes 74 08: je 0x5873bd12
        __asm _emit 0x74
        __asm _emit 0x08
        test eax, eax
        ; Exact mapped bytes 75 F2: jne 0x5873bd00
        __asm _emit 0x75
        __asm _emit 0xf2
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 4]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x5873bd21
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [eax + 8], edx
        ; Exact mapped bytes EB 06: jmp 0x5873bd27
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ecx + 8]
        mov dword ptr [esi + 4], eax
        mov eax, dword ptr [ecx + 8]
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x5873bd43
        __asm _emit 0x74
        __asm _emit 0x15
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        dec dword ptr [esi + 0ch]
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 4]
        mov dword ptr [esi + 8], eax
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        dec dword ptr [esi + 0ch]
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
