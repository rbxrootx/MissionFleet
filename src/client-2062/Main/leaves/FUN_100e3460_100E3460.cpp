// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100E3460 .. +0x134 bytes.
extern "C" __declspec(naked) void FUN_100e3460_100E3460() {
    __asm {
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        push ebp
        push esi
        mov esi, ecx
        xor ebx, ebx
        mov cl, byte ptr [eax + 20bc4h]
        push edi
        ; Exact mapped bytes 8B 3D 88 51 17 10: mov edi, dword ptr [0x10175188]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov ebp, 40000000h
        test cl, cl
        ; Exact mapped bytes 74 3D: je 0x100e34bf
        __asm _emit 0x74
        __asm _emit 0x3d
        mov ecx, dword ptr [esi + 88h]
        xor edx, edx
        mov eax, ecx
        mov ebp, 3ch
        div ebp
        mov eax, 88888889h
        mov ebx, 1
        push edx
        mul ecx
        mov ecx, dword ptr [esi + 0c4h]
        shr edx, 5
        push edx
        mov edx, dword ptr [ecx + 6ch]
        push 101ac344h
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 10h
        mov ebp, 40000000h
        ; Exact mapped bytes EB 2A: jmp 0x100e34e9
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov eax, dword ptr [esi + 0e4h]
        cmp dword ptr [eax + 60h], ebp
        ; Exact mapped bytes 75 1A: jne 0x100e34e4
        __asm _emit 0x75
        __asm _emit 0x1a
        mov ecx, dword ptr [esi + 0c4h]
        mov eax, dword ptr [eax + 58h]
        push eax
        push 1017f3cch
        mov edx, dword ptr [ecx + 6ch]
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 0ch
        ; Exact mapped bytes EB 05: jmp 0x100e34e9
        __asm _emit 0xeb
        __asm _emit 0x05
        mov ebx, 1
        mov eax, dword ptr [esi + 0e8h]
        cmp dword ptr [eax + 60h], ebp
        ; Exact mapped bytes 75 1A: jne 0x100e350e
        __asm _emit 0x75
        __asm _emit 0x1a
        mov ecx, dword ptr [esi + 0c8h]
        mov eax, dword ptr [eax + 58h]
        push eax
        push 1017f3cch
        mov edx, dword ptr [ecx + 6ch]
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 0ch
        ; Exact mapped bytes EB 01: jmp 0x100e350f
        __asm _emit 0xeb
        __asm _emit 0x01
        inc ebx
        mov eax, dword ptr [esi + 0ech]
        cmp dword ptr [eax + 60h], ebp
        ; Exact mapped bytes 75 3F: jne 0x100e3559
        __asm _emit 0x75
        __asm _emit 0x3f
        mov ecx, dword ptr [esi + 94h]
        test ecx, ecx
        ; Exact mapped bytes 74 1B: je 0x100e353f
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [eax + 58h]
        push ecx
        mov ecx, dword ptr [esi + 0dch]
        push eax
        push 101ac33ch
        mov edx, dword ptr [ecx + 6ch]
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 10h
        ; Exact mapped bytes EB 1B: jmp 0x100e355a
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov ecx, dword ptr [esi + 0dch]
        mov eax, dword ptr [eax + 58h]
        push eax
        push 1017f3cch
        mov edx, dword ptr [ecx + 6ch]
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 0ch
        ; Exact mapped bytes EB 01: jmp 0x100e355a
        __asm _emit 0xeb
        __asm _emit 0x01
        inc ebx
        mov eax, dword ptr [esi + 0f0h]
        cmp dword ptr [eax + 60h], ebp
        ; Exact mapped bytes 75 1A: jne 0x100e357f
        __asm _emit 0x75
        __asm _emit 0x1a
        mov ecx, dword ptr [esi + 0e0h]
        mov eax, dword ptr [eax + 58h]
        push eax
        push 1017f3cch
        mov edx, dword ptr [ecx + 6ch]
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 0ch
        ; Exact mapped bytes EB 01: jmp 0x100e3580
        __asm _emit 0xeb
        __asm _emit 0x01
        inc ebx
        cmp ebx, 4
        ; Exact mapped bytes 75 0A: jne 0x100e358f
        __asm _emit 0x75
        __asm _emit 0x0a
        mov dword ptr [esi + 9ch], 0
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
