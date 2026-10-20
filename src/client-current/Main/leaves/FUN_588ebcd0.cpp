// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588EBCD0 .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_588ebcd0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, ecx
        test eax, eax
        ; Exact mapped bytes 74 59: je 0x588ebd34
        __asm _emit 0x74
        __asm _emit 0x59
        mov ecx, dword ptr [esi + 4]
        test ecx, ecx
        ; Exact mapped bytes 74 52: je 0x588ebd34
        __asm _emit 0x74
        __asm _emit 0x52
        cmp dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes 74 0B: je 0x588ebcf2
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 8]
        test ecx, ecx
        ; Exact mapped bytes 75 F4: jne 0x588ebce2
        __asm _emit 0x75
        __asm _emit 0xf4
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 4]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x588ebd01
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [eax + 8], edx
        ; Exact mapped bytes EB 06: jmp 0x588ebd07
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ecx + 8]
        mov dword ptr [esi + 4], eax
        mov eax, dword ptr [ecx + 8]
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x588ebd23
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
