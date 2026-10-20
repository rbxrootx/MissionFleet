// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AD350 .. +0xE6 bytes.
extern "C" __declspec(naked) void FUN_004ad350_004AD350() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes 83 3D 8C 02 5E 00 00: cmp dword ptr [0x5e028c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 11: jne 0x4ad37c
        __asm _emit 0x75
        __asm _emit 0x11
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 BC D0 00 00: call 0x4ba430
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes E9 B6 00 00 00: jmp 0x4ad432
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 19h
        ; Exact mapped bytes E8 6D 7E 00 00: call 0x4b51f0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x7e
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        test ecx, ecx
        ; Exact mapped bytes 74 55: je 0x4ad3e6
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        mov al, byte ptr [edx]
        xor ecx, ecx
        mov cl, byte ptr [eax + 5e03a1h]
        and ecx, 4
        mov edx, dword ptr [ebp + 8]
        add edx, 1
        mov dword ptr [ebp + 8], edx
        test ecx, ecx
        ; Exact mapped bytes 74 34: je 0x4ad3e4
        __asm _emit 0x74
        __asm _emit 0x34
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        test ecx, ecx
        ; Exact mapped bytes 74 27: je 0x4ad3e2
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [ebp + 8]
        mov al, byte ptr [edx]
        mov byte ptr [ebp - 4], al
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 8]
        mov al, byte ptr [edx - 1]
        mov byte ptr [ecx], al
        mov ecx, dword ptr [ebp + 8]
        mov dl, byte ptr [ebp - 4]
        mov byte ptr [ecx - 1], dl
        mov eax, dword ptr [ebp + 8]
        add eax, 1
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes EB 02: jmp 0x4ad3e4
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x4ad3e6
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB A0: jmp 0x4ad386
        __asm _emit 0xeb
        __asm _emit 0xa0
        mov ecx, dword ptr [ebp + 8]
        sub ecx, 1
        mov dword ptr [ebp + 8], ecx
        mov edx, dword ptr [ebp - 0ch]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 73 2E: jae 0x4ad425
        __asm _emit 0x73
        __asm _emit 0x2e
        mov eax, dword ptr [ebp - 0ch]
        mov cl, byte ptr [eax]
        mov byte ptr [ebp - 4], cl
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp + 8]
        mov cl, byte ptr [eax]
        mov byte ptr [edx], cl
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp + 8]
        mov cl, byte ptr [ebp - 4]
        mov byte ptr [eax], cl
        mov edx, dword ptr [ebp + 8]
        sub edx, 1
        mov dword ptr [ebp + 8], edx
        ; Exact mapped bytes EB CA: jmp 0x4ad3ef
        __asm _emit 0xeb
        __asm _emit 0xca
        push 19h
        ; Exact mapped bytes E8 64 7E 00 00: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x7e
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
