// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045F86E .. +0xB8 bytes.
extern "C" __declspec(naked) void FUN_0045f86e_0045F86E() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 84 A1 00 00 00: je 0x45f920
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 0ch
        ; Exact mapped bytes A1 20 0D 64 00: mov eax, dword ptr [0x640d20]
        __asm _emit 0xa1
        __asm _emit 0x20
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x00
        mov dword ptr [edx], eax
        ; Exact mapped bytes 8B 0D 24 0D 64 00: mov ecx, dword ptr [0x640d24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x00
        mov dword ptr [edx + 4], ecx
        ; Exact mapped bytes A1 28 0D 64 00: mov eax, dword ptr [0x640d28]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x00
        mov dword ptr [edx + 8], eax
        ; Exact mapped bytes 8B 0D 2C 0D 64 00: mov ecx, dword ptr [0x640d2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x00
        mov dword ptr [edx + 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 1ch], 0
        ; Exact mapped bytes 74 1C: je 0x45f8d4
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1ch]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 1ch], 0
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x45f8af
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 74 1C: je 0x45f8ff
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 8], 0
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x45f8da
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
