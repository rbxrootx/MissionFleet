// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588741D0 .. +0x85 bytes.
extern "C" __declspec(naked) void FUN_588741d0() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        push edi
        test al, 2
        ; Exact mapped bytes 74 71: je 0x5887424d
        __asm _emit 0x74
        __asm _emit 0x71
        mov eax, dword ptr [esi + 3ch]
        mov edi, dword ptr [esp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x5887420d
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x58874206
        __asm _emit 0x74
        __asm _emit 0x18
        mov edi, edi
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 10h]
        push edi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 0B: je 0x5887420d
        __asm _emit 0x74
        __asm _emit 0x0b
        test eax, eax
        ; Exact mapped bytes 75 EA: jne 0x588741f0
        __asm _emit 0x75
        __asm _emit 0xea
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [edi + 4], 100h
        ; Exact mapped bytes 75 37: jne 0x5887424d
        __asm _emit 0x75
        __asm _emit 0x37
        mov edi, dword ptr [edi + 8]
        cmp edi, 0dh
        ; Exact mapped bytes 74 1E: je 0x5887423c
        __asm _emit 0x74
        __asm _emit 0x1e
        cmp edi, 1bh
        ; Exact mapped bytes 75 2A: jne 0x5887424d
        __asm _emit 0x75
        __asm _emit 0x2a
        mov edx, dword ptr [esi]
        mov eax, dword ptr [esi + 74h]
        mov edx, dword ptr [edx + 18h]
        push 0
        push 2
        push eax
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 70h]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 18h]
        push 0
        push 2
        push ecx
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
