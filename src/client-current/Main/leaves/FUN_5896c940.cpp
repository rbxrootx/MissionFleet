// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5896C940 .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_5896c940() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 74 4B: je 0x5896c996
        __asm _emit 0x74
        __asm _emit 0x4b
        mov eax, dword ptr [esi + 50h]
        cmp eax, 4
        ; Exact mapped bytes 74 05: je 0x5896c958
        __asm _emit 0x74
        __asm _emit 0x05
        cmp eax, 6
        ; Exact mapped bytes 75 20: jne 0x5896c978
        __asm _emit 0x75
        __asm _emit 0x20
        mov eax, dword ptr [esi + 58h]
        test eax, eax
        ; Exact mapped bytes 75 15: jne 0x5896c974
        __asm _emit 0x75
        __asm _emit 0x15
        mov ecx, dword ptr [esi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5896c96c
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 C4 EC F9 FF: call 0x5890b630
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xec
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 60h]
        mov dword ptr [esi + 58h], ecx
        ; Exact mapped bytes EB 04: jmp 0x5896c978
        __asm _emit 0xeb
        __asm _emit 0x04
        dec eax
        mov dword ptr [esi + 58h], eax
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 17: je 0x5896c996
        __asm _emit 0x74
        __asm _emit 0x17
        push edi
        mov edi, dword ptr [ecx + 38h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        cmp edi, dword ptr [esi + 3ch]
        ; Exact mapped bytes 74 0B: je 0x5896c998
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, edi
        test edi, edi
        ; Exact mapped bytes 75 EB: jne 0x5896c980
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        pop edi
        pop esi
        ; Exact mapped bytes FF E0: jmp eax
        __asm _emit 0xff
        __asm _emit 0xe0
    }
}
