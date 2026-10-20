// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587E0A50 .. +0x102 bytes.
extern "C" __declspec(naked) void FUN_587e0a50() {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 0ch]
        xor ebx, ebx
        mov dword ptr [esi + 0ech], ebx
        ; Exact mapped bytes A1 F4 47 A2 58: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push edi
        mov edi, ecx
        cmp esi, dword ptr [eax + 8]
        ; Exact mapped bytes 74 72: je 0x587e0add
        __asm _emit 0x74
        __asm _emit 0x72
        mov ecx, dword ptr [esi + 0ce4h]
        cmp esi, dword ptr [eax + 4]
        ; Exact mapped bytes 75 11: jne 0x587e0a87
        __asm _emit 0x75
        __asm _emit 0x11
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [esi + 0ce4h]
        mov dword ptr [edx + 0ce0h], ebx
        ; Exact mapped bytes EB 1E: jmp 0x587e0aa5
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov eax, dword ptr [esi + 0ce0h]
        mov dword ptr [eax + 0ce4h], ecx
        mov edx, dword ptr [esi + 0ce4h]
        mov eax, dword ptr [esi + 0ce0h]
        mov dword ptr [edx + 0ce0h], eax
        ; Exact mapped bytes 8B 0D F4 47 A2 58: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [esi + 0ce0h], edx
        ; Exact mapped bytes A1 F4 47 A2 58: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ecx + 0ce4h], esi
        ; Exact mapped bytes 8B 15 F4 47 A2 58: mov edx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [edx + 8], esi
        mov ecx, edi
        mov dword ptr [esi + 0ce4h], ebx
        ; Exact mapped bytes E8 48 96 FF FF: call 0x587da120
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x96
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 F4 47 A2 58: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + 4]
        mov dl, byte ptr [edi + 61h]
        xor ecx, ecx
        cmp eax, ebx
        ; Exact mapped bytes 74 55: je 0x587e0b3e
        __asm _emit 0x74
        __asm _emit 0x55
        lea ebx, [ecx + 1]
        push ebp
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov ebp, dword ptr [eax + 0cc0h]
        cmp byte ptr [ebp + 35ch], dl
        ; Exact mapped bytes 75 0A: jne 0x587e0b08
        __asm _emit 0x75
        __asm _emit 0x0a
        cmp dword ptr [eax + 0ech], ebx
        ; Exact mapped bytes 74 02: je 0x587e0b08
        __asm _emit 0x74
        __asm _emit 0x02
        add ecx, ebx
        mov eax, dword ptr [eax + 0ce4h]
        test eax, eax
        ; Exact mapped bytes 75 DE: jne 0x587e0af0
        __asm _emit 0x75
        __asm _emit 0xde
        pop ebp
        cmp ecx, ebx
        ; Exact mapped bytes 75 27: jne 0x587e0b3e
        __asm _emit 0x75
        __asm _emit 0x27
        mov ecx, dword ptr [edi + 0b4h]
        push eax
        ; Exact mapped bytes E8 BD 21 12 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x21
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0b8h]
        push 0
        ; Exact mapped bytes E8 B0 21 12 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x21
        __asm _emit 0x12
        __asm _emit 0x00
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 48 EA FF FF: call 0x587df580
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0d78h]
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 34 EA FF FF: call 0x587df580
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
