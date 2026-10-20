// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1002C290 .. +0x5F bytes.
extern "C" __declspec(naked) void FUN_1002c290_1002C290() {
    __asm {
        push esi
        mov esi, ecx
        xor eax, eax
        push edi
        mov ecx, dword ptr [esi + 0ch]
        test ecx, ecx
        ; Exact mapped bytes 74 4D: je 0x1002c2ea
        __asm _emit 0x74
        __asm _emit 0x4d
        mov edx, dword ptr [esp + 0ch]
        xor edi, edi
        ; Exact mapped bytes 66 8B B9 2C 03 00 00: mov di, word ptr [ecx + 0x32c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xb9
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, edx
        ; Exact mapped bytes 74 0C: je 0x1002c2ba
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ecx + 78h]
        test ecx, ecx
        ; Exact mapped bytes 75 EC: jne 0x1002c2a1
        __asm _emit 0x75
        __asm _emit 0xec
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 74 27: je 0x1002c2e5
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [ecx + 74h]
        mov eax, dword ptr [ecx + 78h]
        test edx, edx
        ; Exact mapped bytes 74 05: je 0x1002c2cd
        __asm _emit 0x74
        __asm _emit 0x05
        mov dword ptr [edx + 78h], eax
        ; Exact mapped bytes EB 03: jmp 0x1002c2d0
        __asm _emit 0xeb
        __asm _emit 0x03
        mov dword ptr [esi + 0ch], eax
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x1002c2d9
        __asm _emit 0x74
        __asm _emit 0x05
        mov dword ptr [eax + 74h], edx
        ; Exact mapped bytes EB 03: jmp 0x1002c2dc
        __asm _emit 0xeb
        __asm _emit 0x03
        mov dword ptr [esi + 10h], edx
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        dec dword ptr [esi + 8]
        mov eax, 1
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
