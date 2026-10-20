// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B7010 .. +0x8C bytes.
extern "C" __declspec(naked) void FUN_587b7010() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 74 7B: je 0x587b7096
        __asm _emit 0x74
        __asm _emit 0x7b
        mov eax, dword ptr [esi + 54h]
        test eax, eax
        ; Exact mapped bytes 74 53: je 0x587b7075
        __asm _emit 0x74
        __asm _emit 0x53
        movzx ecx, word ptr [eax + 0ch]
        imul ecx, dword ptr [eax + 8]
        dec ecx
        xor eax, eax
        cmp dword ptr [esi + 50h], ecx
        setge al
        test eax, eax
        ; Exact mapped bytes 74 3E: je 0x587b7075
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        test dl, 1
        ; Exact mapped bytes 74 09: je 0x587b7049
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, 0fffeh
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 58h]
        test ecx, ecx
        ; Exact mapped bytes 74 0B: je 0x587b705b
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 14h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        test eax, eax
        ; Exact mapped bytes 75 3B: jne 0x587b7096
        __asm _emit 0x75
        __asm _emit 0x3b
        mov ecx, esi
        ; Exact mapped bytes E8 BE BB 14 00: call 0x58902c20
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xbb
        __asm _emit 0x14
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 07 BC 14 00: call 0x58902c70
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xbc
        __asm _emit 0x14
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx]
        push 1
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop esi
        ret
        mov ecx, dword ptr [esi + 3ch]
        inc dword ptr [esi + 50h]
        test ecx, ecx
        ; Exact mapped bytes 74 17: je 0x587b7096
        __asm _emit 0x74
        __asm _emit 0x17
        push edi
        mov edi, dword ptr [ecx + 38h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        cmp edi, dword ptr [esi + 3ch]
        ; Exact mapped bytes 74 0B: je 0x587b7098
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, edi
        test edi, edi
        ; Exact mapped bytes 75 EB: jne 0x587b7080
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
