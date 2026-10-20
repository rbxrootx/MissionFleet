// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C79F0 .. +0xEB bytes.
extern "C" __declspec(naked) void FUN_587c79f0() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 D8 00 00 00: je 0x587c7ad7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0bch]
        mov ecx, dword ptr [esi + 0c0h]
        push ebp
        xor ebp, ebp
        mov dword ptr [esi + 98h], ebp
        mov edx, 40000000h
        cmp eax, ecx
        ; Exact mapped bytes 74 29: je 0x587c7a46
        __asm _emit 0x74
        __asm _emit 0x29
        sub eax, ecx
        xor ecx, ecx
        test eax, eax
        setg cl
        mov eax, ecx
        mov dword ptr [esi + 9ch], eax
        cmp eax, ebp
        mov eax, dword ptr [esi + 94h]
        ; Exact mapped bytes 75 02: jne 0x587c7a3a
        __asm _emit 0x75
        __asm _emit 0x02
        neg eax
        mov dword ptr [esi + 0a0h], eax
        mov dword ptr [esi + 98h], edx
        cmp dword ptr [esi + 98h], edx
        ; Exact mapped bytes 75 11: jne 0x587c7a5f
        __asm _emit 0x75
        __asm _emit 0x11
        cmp dword ptr [esi + 90h], ebp
        ; Exact mapped bytes 75 09: jne 0x587c7a5f
        __asm _emit 0x75
        __asm _emit 0x09
        push 3
        mov ecx, esi
        ; Exact mapped bytes E8 61 FE FF FF: call 0x587c78c0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push edi
        mov edi, 1
        cmp dword ptr [esi + 88h], edi
        ; Exact mapped bytes 75 13: jne 0x587c7a80
        __asm _emit 0x75
        __asm _emit 0x13
        push 2
        mov ecx, esi
        ; Exact mapped bytes E8 4A FE FF FF: call 0x587c78c0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, edi
        ; Exact mapped bytes 75 06: jne 0x587c7a80
        __asm _emit 0x75
        __asm _emit 0x06
        mov dword ptr [esi + 88h], ebp
        cmp dword ptr [esi + 84h], edi
        ; Exact mapped bytes 75 12: jne 0x587c7a9a
        __asm _emit 0x75
        __asm _emit 0x12
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 30 FE FF FF: call 0x587c78c0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, edi
        ; Exact mapped bytes 75 06: jne 0x587c7a9a
        __asm _emit 0x75
        __asm _emit 0x06
        mov dword ptr [esi + 84h], ebp
        cmp dword ptr [esi + 80h], edi
        ; Exact mapped bytes 75 12: jne 0x587c7ab4
        __asm _emit 0x75
        __asm _emit 0x12
        push ebp
        mov ecx, esi
        ; Exact mapped bytes E8 16 FE FF FF: call 0x587c78c0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, edi
        ; Exact mapped bytes 75 06: jne 0x587c7ab4
        __asm _emit 0x75
        __asm _emit 0x06
        mov dword ptr [esi + 80h], ebp
        mov ecx, dword ptr [esi + 3ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 1A: je 0x587c7ad5
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes EB 03: jmp 0x587c7ac0
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov edi, dword ptr [ecx + 38h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        cmp edi, dword ptr [esi + 3ch]
        ; Exact mapped bytes 74 0C: je 0x587c7ad9
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, edi
        cmp edi, ebp
        ; Exact mapped bytes 75 EB: jne 0x587c7ac0
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop ebp
        pop esi
        ret
        pop edi
        pop ebp
    }
}
