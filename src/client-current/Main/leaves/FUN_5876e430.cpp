// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5876E430 .. +0x86 bytes.
extern "C" __declspec(naked) void FUN_5876e430() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 74 5B: je 0x5876e496
        __asm _emit 0x74
        __asm _emit 0x5b
        mov eax, dword ptr [esi + 28h]
        sub eax, dword ptr [esi + 58h]
        mov ecx, 0
        sets cl
        dec ecx
        and eax, ecx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 8C 48 19 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x48
        __asm _emit 0x19
        __asm _emit 0x00
        cmp dword ptr [esi + 28h], 0
        ; Exact mapped bytes 7E 42: jle 0x5876e49c
        __asm _emit 0x7e
        __asm _emit 0x42
        cmp dword ptr [esi + 60h], 0
        ; Exact mapped bytes 74 11: je 0x5876e471
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [esi + 5ch]
        neg edx
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 33 4A 19 00: call 0x58902ea0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x4a
        __asm _emit 0x19
        __asm _emit 0x00
        add dword ptr [esi + 5ch], -2
        mov ecx, dword ptr [esi + 3ch]
        inc dword ptr [esi + 50h]
        test ecx, ecx
        ; Exact mapped bytes 74 1B: je 0x5876e496
        __asm _emit 0x74
        __asm _emit 0x1b
        push edi
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0ch]
        cmp edi, dword ptr [esi + 3ch]
        ; Exact mapped bytes 74 0B: je 0x5876e498
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, edi
        test edi, edi
        ; Exact mapped bytes 75 EB: jne 0x5876e480
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        pop edi
        pop esi
        ; Exact mapped bytes FF E2: jmp edx
        __asm _emit 0xff
        __asm _emit 0xe2
        mov ecx, esi
        ; Exact mapped bytes E8 7D 47 19 00: call 0x58902c20
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x47
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 C6 47 19 00: call 0x58902c70
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x47
        __asm _emit 0x19
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax]
        push 1
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        pop esi
        ret
    }
}
