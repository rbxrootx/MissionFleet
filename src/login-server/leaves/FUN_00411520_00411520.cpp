// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00411520 .. +0xDF bytes.
extern "C" __declspec(naked) void FUN_00411520_00411520() {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        ; Exact mapped bytes FF 15 80 C5 43 00: call dword ptr [0x43c580]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        mov esi, dword ptr [edi + 114h]
        xor ebx, ebx
        cmp esi, ebx
        mov ebp, eax
        ; Exact mapped bytes 0F 84 BC 00 00 00: je 0x4115fa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 0ach], ebx
        ; Exact mapped bytes 0F 84 A5 00 00 00: je 0x4115ef
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 64h]
        mov ecx, ebp
        sub ecx, eax
        mov eax, dword ptr [edi + 0c74h]
        cmp ecx, eax
        ; Exact mapped bytes 76 72: jbe 0x4115cd
        __asm _emit 0x76
        __asm _emit 0x72
        mov eax, dword ptr [edi + 0c7ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 3D: je 0x4115a2
        __asm _emit 0x74
        __asm _emit 0x3d
        mov edx, dword ptr [eax + 0be8h]
        mov ecx, 1
        add edx, ecx
        mov dword ptr [eax + 0be8h], edx
        mov edx, dword ptr [eax + 0bech]
        adc edx, ebx
        mov dword ptr [eax + 0bech], edx
        mov edx, dword ptr [eax + 0c20h]
        add edx, ecx
        mov dword ptr [eax + 0c20h], edx
        mov ecx, dword ptr [eax + 0c24h]
        adc ecx, ebx
        mov dword ptr [eax + 0c24h], ecx
        mov eax, dword ptr [esi + 0b8h]
        cmp eax, -1
        ; Exact mapped bytes 74 17: je 0x4115c4
        __asm _emit 0x74
        __asm _emit 0x17
        push ebx
        push eax
        mov eax, dword ptr [esi + 0b0h]
        push 4cch
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 4C C5 43 00: call dword ptr [0x43c54c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 F5 E9 FF FF: call 0x40ffc0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 22: jmp 0x4115ef
        __asm _emit 0xeb
        __asm _emit 0x22
        cmp dword ptr [esi + 0ch], ebx
        ; Exact mapped bytes 74 1D: je 0x4115ef
        __asm _emit 0x74
        __asm _emit 0x1d
        cdq
        sub eax, edx
        sar eax, 1
        cmp ecx, eax
        ; Exact mapped bytes 76 14: jbe 0x4115ef
        __asm _emit 0x76
        __asm _emit 0x14
        push ebx
        push ebx
        push ebx
        push ebx
        push ebx
        push 8001000fh
        mov ecx, esi
        mov dword ptr [esi + 0ch], ebx
        ; Exact mapped bytes E8 11 EA FF FF: call 0x410000
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [esi + 58h]
        cmp esi, ebx
        ; Exact mapped bytes 0F 85 44 FF FF FF: jne 0x41153e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
