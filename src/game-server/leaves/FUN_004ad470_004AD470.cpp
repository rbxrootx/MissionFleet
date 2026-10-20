// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AD470 .. +0xD2 bytes.
extern "C" __declspec(naked) void FUN_004ad470_004AD470() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push esi
        ; Exact mapped bytes 83 3D 8C 02 5E 00 00: cmp dword ptr [0x5e028c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 15: jne 0x4ad495
        __asm _emit 0x75
        __asm _emit 0x15
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 D3 CF 00 00: call 0x4ba460
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E9 A8 00 00 00: jmp 0x4ad53d
        __asm _emit 0xe9
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 2C BF FF FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov esi, eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 1E BF FF FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        sub esi, eax
        mov edx, dword ptr [ebp + 8]
        add edx, esi
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 4]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        test ecx, ecx
        ; Exact mapped bytes 74 71: je 0x4ad53b
        __asm _emit 0x74
        __asm _emit 0x71
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 77 69: ja 0x4ad53b
        __asm _emit 0x77
        __asm _emit 0x69
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 8]
        xor eax, eax
        mov al, byte ptr [edx]
        test eax, eax
        ; Exact mapped bytes 74 31: je 0x4ad51a
        __asm _emit 0x74
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 0ch]
        xor edx, edx
        mov dl, byte ptr [ecx]
        test edx, edx
        ; Exact mapped bytes 74 26: je 0x4ad51a
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 8]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        mov edx, dword ptr [ebp - 0ch]
        xor eax, eax
        mov al, byte ptr [edx]
        cmp ecx, eax
        ; Exact mapped bytes 75 14: jne 0x4ad51a
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB C4: jmp 0x4ad4de
        __asm _emit 0xeb
        __asm _emit 0xc4
        mov eax, dword ptr [ebp - 0ch]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        test ecx, ecx
        ; Exact mapped bytes 75 05: jne 0x4ad52a
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 13: jmp 0x4ad53d
        __asm _emit 0xeb
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 0D FF FF FF: call 0x4ad440
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 84: jmp 0x4ad4bf
        __asm _emit 0xeb
        __asm _emit 0x84
        xor eax, eax
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
