// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58815160 .. +0xB4 bytes.
extern "C" __declspec(naked) void FUN_58815160() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 58h]
        mov eax, dword ptr [eax + 80h]
        push edi
        ; Exact mapped bytes 8B 3D A8 C1 98 58: mov edi, dword ptr [0x5898c1a8]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        ; Exact mapped bytes 75 13: jne 0x5881518d
        __asm _emit 0x75
        __asm _emit 0x13
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 8]
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 58h]
        pop edi
        pop esi
        ; Exact mapped bytes E9 B3 A7 F4 FF: jmp 0x5875f940
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0xa7
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 58h]
        mov eax, dword ptr [ecx + 80h]
        push eax
        push 58a0b450h
        ; Exact mapped bytes FF 15 A4 C1 98 58: call dword ptr [0x5898c1a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 1E: jne 0x588151c4
        __asm _emit 0x75
        __asm _emit 0x1e
        push esi
        push eax
        push eax
        push 1c9h
        ; Exact mapped bytes E8 3D 69 F5 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x69
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 76 FB F4 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xfb
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 58h]
        pop edi
        pop esi
        ; Exact mapped bytes E9 7C A7 F4 FF: jmp 0x5875f940
        __asm _emit 0xe9
        __asm _emit 0x7c
        __asm _emit 0xa7
        __asm _emit 0xf4
        __asm _emit 0xff
        mov edx, dword ptr [esi + 58h]
        mov eax, dword ptr [edx + 80h]
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        cmp eax, 4
        ; Exact mapped bytes 7D 20: jge 0x588151f5
        __asm _emit 0x7d
        __asm _emit 0x20
        push esi
        push 0
        push 0
        push 1c7h
        ; Exact mapped bytes E8 0C 69 F5 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x69
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 45 FB F4 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xfb
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 58h]
        pop edi
        pop esi
        ; Exact mapped bytes E9 4B A7 F4 FF: jmp 0x5875f940
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0xa7
        __asm _emit 0xf4
        __asm _emit 0xff
        mov eax, dword ptr [esi + 58h]
        mov ecx, dword ptr [eax + 80h]
        push ecx
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 06 40 FA FF: call 0x587b9210
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x40
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 58h]
        pop edi
        pop esi
        ; Exact mapped bytes E9 2C A7 F4 FF: jmp 0x5875f940
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0xa7
        __asm _emit 0xf4
        __asm _emit 0xff
    }
}
