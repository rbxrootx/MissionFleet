// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B2110 .. +0xEF bytes.
extern "C" __declspec(naked) void FUN_004b2110_004B2110() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 18h]
        cmp dword ptr [eax], 19930520h
        ; Exact mapped bytes 75 09: jne 0x4b212a
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 08: jmp 0x4b2132
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes E8 51 FF FF FF: call 0x4b2080
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        and edx, 66h
        test edx, edx
        ; Exact mapped bytes 74 2F: je 0x4b216e
        __asm _emit 0x74
        __asm _emit 0x2f
        mov eax, dword ptr [ebp + 18h]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 74 1C: je 0x4b2164
        __asm _emit 0x74
        __asm _emit 0x1c
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 75 16: jne 0x4b2164
        __asm _emit 0x75
        __asm _emit 0x16
        push -1
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 1F 05 00 00: call 0x4b2680
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov eax, 1
        ; Exact mapped bytes E9 8D 00 00 00: jmp 0x4b21fb
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 18h]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 74 7F: je 0x4b21f6
        __asm _emit 0x74
        __asm _emit 0x7f
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx], 0e06d7363h
        ; Exact mapped bytes 75 4C: jne 0x4b21ce
        __asm _emit 0x75
        __asm _emit 0x4c
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 14h], 19930520h
        ; Exact mapped bytes 76 40: jbe 0x4b21ce
        __asm _emit 0x76
        __asm _emit 0x40
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 1ch]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 2E: je 0x4b21ce
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp + 24h]
        and ecx, 0ffh
        push ecx
        mov edx, dword ptr [ebp + 20h]
        push edx
        mov eax, dword ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 55 FC: call dword ptr [ebp - 4]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xfc
        add esp, 20h
        ; Exact mapped bytes EB 2D: jmp 0x4b21fb
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov eax, dword ptr [ebp + 20h]
        push eax
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        mov dl, byte ptr [ebp + 24h]
        push edx
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 0D 00 00 00: call 0x4b2200
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 20h
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
