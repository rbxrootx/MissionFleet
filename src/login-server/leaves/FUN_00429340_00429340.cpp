// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00429340 .. +0xAC bytes.
extern "C" __declspec(naked) void FUN_00429340_00429340() {
    __asm {
        mov eax, dword ptr [esp + 8]
        sub esp, 108h
        push ebx
        cmp byte ptr [eax], 0
        push esi
        push edi
        lea esi, [esp + 14h]
        ; Exact mapped bytes 74 4B: je 0x4293a1
        __asm _emit 0x74
        __asm _emit 0x4b
        ; Exact mapped bytes 8B 3D 84 C3 43 00: mov edi, dword ptr [0x43c384]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x84
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        xor ebx, ebx
        mov cl, byte ptr [eax]
        cmp cl, 26h
        ; Exact mapped bytes 75 07: jne 0x42936c
        __asm _emit 0x75
        __asm _emit 0x07
        inc eax
        cmp byte ptr [eax], bl
        ; Exact mapped bytes 75 2D: jne 0x429397
        __asm _emit 0x75
        __asm _emit 0x2d
        ; Exact mapped bytes EB 35: jmp 0x4293a1
        __asm _emit 0xeb
        __asm _emit 0x35
        ; Exact mapped bytes 38 1D 05 1F 45 00: cmp byte ptr [0x451f05], bl
        __asm _emit 0x38
        __asm _emit 0x1d
        __asm _emit 0x05
        __asm _emit 0x1f
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 74 23: je 0x429397
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes 3A 0D 04 1F 45 00: cmp cl, byte ptr [0x451f04]
        __asm _emit 0x3a
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x1f
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 75 07: jne 0x429383
        __asm _emit 0x75
        __asm _emit 0x07
        inc eax
        cmp byte ptr [eax], bl
        ; Exact mapped bytes 75 16: jne 0x429397
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes EB 1E: jmp 0x4293a1
        __asm _emit 0xeb
        __asm _emit 0x1e
        cmp cl, 1eh
        ; Exact mapped bytes 74 05: je 0x42938d
        __asm _emit 0x74
        __asm _emit 0x05
        cmp cl, 1fh
        ; Exact mapped bytes 75 0A: jne 0x429397
        __asm _emit 0x75
        __asm _emit 0x0a
        inc eax
        cmp byte ptr [eax], bl
        ; Exact mapped bytes 74 0F: je 0x4293a1
        __asm _emit 0x74
        __asm _emit 0x0f
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes EB 06: jmp 0x42939d
        __asm _emit 0xeb
        __asm _emit 0x06
        mov cl, byte ptr [eax]
        inc eax
        mov byte ptr [esi], cl
        inc esi
        cmp byte ptr [eax], bl
        ; Exact mapped bytes 75 BD: jne 0x42935e
        __asm _emit 0x75
        __asm _emit 0xbd
        lea eax, [esp + 0ch]
        lea ecx, [esp + 14h]
        push eax
        mov byte ptr [esi], 0
        push ecx
        ; Exact mapped bytes FF 15 60 C2 43 00: call dword ptr [0x43c260]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        lea ecx, [esp + 18h]
        push eax
        mov eax, dword ptr [esp + 120h]
        push ecx
        push eax
        ; Exact mapped bytes FF 15 5C C0 43 00: call dword ptr [0x43c05c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 0ch]
        mov eax, dword ptr [esp + 120h]
        mov edx, dword ptr [esp + 10h]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 124h]
        pop edi
        pop esi
        pop ebx
        mov dword ptr [ecx], edx
        add esp, 108h
        ret
    }
}
