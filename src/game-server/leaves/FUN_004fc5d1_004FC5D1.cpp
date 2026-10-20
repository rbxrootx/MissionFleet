// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FC5D1 .. +0x141 bytes.
extern "C" __declspec(naked) void FUN_004fc5d1_004FC5D1() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 F0 06 00 00: call 0x4fccd0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 31 FF FF FF: call 0x4fc520
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 F2 06 00 00: call 0x4fccf0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 2A: je 0x4fc62f
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 22 07 00 00: call 0x4fcd30
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 8]
        add ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 CE 08 FB FF: call 0x4acef0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x08
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax*2 + 2]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0D: je 0x4fc642
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 48 10: mov cx, word ptr [eax + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 4D EE: mov word ptr [ebp - 0x12], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xee
        ; Exact mapped bytes EB 0B: jmp 0x4fc64d
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 42 08: mov ax, word ptr [edx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 45 EE: mov word ptr [ebp - 0x12], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xee
        ; Exact mapped bytes 66 8B 4D EE: mov cx, word ptr [ebp - 0x12]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xee
        ; Exact mapped bytes 66 89 4D F4: mov word ptr [ebp - 0xc], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf4
        mov edx, dword ptr [ebp - 0ch]
        and edx, 0ffffh
        test edx, edx
        ; Exact mapped bytes 0F 8E A2 00 00 00: jle 0x4fc708
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        add eax, 3
        and al, 0fch
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        neg ecx
        sbb ecx, ecx
        and ecx, 6
        add ecx, 12h
        mov edx, dword ptr [ebp - 8]
        add edx, ecx
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        cmp ecx, 0ffffh
        ; Exact mapped bytes 75 0B: jne 0x4fc6a1
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 8]
        add edx, 4
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 0F: jmp 0x4fc6b0
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 A6 06 00 00: call 0x4fcd50
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        xor edx, edx
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        cmp edx, 0ffffh
        ; Exact mapped bytes 75 0B: jne 0x4fc6cb
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 8]
        add eax, 4
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 0F: jmp 0x4fc6da
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 7C 06 00 00: call 0x4fcd50
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 45 F0: mov word ptr [ebp - 0x10], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf0
        mov ecx, dword ptr [ebp - 10h]
        and ecx, 0ffffh
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 2]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes 66 8B 4D F4: mov cx, word ptr [ebp - 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes 66 83 E9 01: sub cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 4D F4: mov word ptr [ebp - 0xc], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes E9 4D FF FF FF: jmp 0x4fc655
        __asm _emit 0xe9
        __asm _emit 0x4d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        sub eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
