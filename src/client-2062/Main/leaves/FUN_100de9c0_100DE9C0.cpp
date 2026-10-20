// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100DE9C0 .. +0xE5 bytes.
extern "C" __declspec(naked) void FUN_100de9c0_100DE9C0() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esi + 2ach]
        mov eax, dword ptr [ecx + 88h]
        test eax, eax
        ; Exact mapped bytes 75 19: jne 0x100de9ed
        __asm _emit 0x75
        __asm _emit 0x19
        mov esi, dword ptr [esi + 74h]
        mov al, byte ptr [esi + 24h]
        and al, 1
        cmp al, 1
        ; Exact mapped bytes 0F 85 BE 00 00 00: jne 0x100deaa2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 66 24 FE FF: and word ptr [esi + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        pop edi
        pop esi
        ret
        ; Exact mapped bytes E8 4E 54 02 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 2ach]
        mov edi, eax
        ; Exact mapped bytes E8 91 54 02 00: call 0x10103e90
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        cmp edi, eax
        ; Exact mapped bytes 0F 8F 89 00 00 00: jg 0x100dea90
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 2ach]
        ; Exact mapped bytes E8 2E 54 02 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 2ach]
        mov edi, eax
        add edi, 7
        ; Exact mapped bytes E8 6E 54 02 00: call 0x10103e90
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        cmp edi, eax
        ; Exact mapped bytes 7E 6A: jle 0x100dea90
        __asm _emit 0x7e
        __asm _emit 0x6a
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 24h
        ; Exact mapped bytes 7E 12: jle 0x100dea46
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100dea46
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [eax + 90h]
        ; Exact mapped bytes EB 02: jmp 0x100dea48
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        push ebx
        push 0
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov ecx, dword ptr [esi + 2ach]
        mov edi, dword ptr [ecx + 8]
        ; Exact mapped bytes E8 E2 53 02 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x53
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 2ach]
        mov ebx, eax
        ; Exact mapped bytes E8 25 54 02 00: call 0x10103e90
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        sub eax, ebx
        add edi, eax
        lea ecx, [eax + eax*2]
        lea edx, [edi + ecx*4 - 2]
        mov ecx, dword ptr [esi + 74h]
        push edx
        ; Exact mapped bytes E8 41 03 02 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x00
        mov esi, dword ptr [esi + 74h]
        pop ebx
        test byte ptr [esi + 24h], 1
        ; Exact mapped bytes 75 19: jne 0x100deaa2
        __asm _emit 0x75
        __asm _emit 0x19
        or byte ptr [esi + 24h], 1
        pop edi
        pop esi
        ret
        mov esi, dword ptr [esi + 74h]
        mov al, byte ptr [esi + 24h]
        and al, 1
        cmp al, 1
        ; Exact mapped bytes 75 06: jne 0x100deaa2
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 66 81 66 24 FE FF: and word ptr [esi + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        pop edi
        pop esi
        ret
    }
}
