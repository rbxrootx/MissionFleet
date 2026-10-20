// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1000A920 .. +0x1E2 bytes.
extern "C" __declspec(naked) void FUN_1000a920_1000A920() {
    __asm {
        push ebp
        mov ebp, ecx
        mov eax, dword ptr [ebp + 310h]
        test eax, eax
        ; Exact mapped bytes 75 5D: jne 0x1000a98a
        __asm _emit 0x75
        __asm _emit 0x5d
        mov eax, dword ptr [ebp + 74h]
        mov ecx, dword ptr [eax + 0e74h]
        test ecx, ecx
        ; Exact mapped bytes 74 1A: je 0x1000a954
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes 66 8B 49 04: mov cx, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x04
        mov edx, dword ptr [ebp + 320h]
        shr ecx, 1
        and ecx, 0ffh
        cmp edx, ecx
        ; Exact mapped bytes 0F 8C AC 01 00 00: jl 0x1000ab00
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xac
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp + 310h], 1
        mov dword ptr [ebp + 33ch], 0ffffff38h
        mov ecx, dword ptr [eax + 5c54h]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 8A 01 00 00: je 0x1000ab00
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [ebp + 7ch]
        mov eax, dword ptr [eax + 7ch]
        lea edx, [ebp + ebp*4]
        pop ebp
        mov byte ptr [eax + edx*4 + 108h], 1
        ret
        cmp eax, 1
        ; Exact mapped bytes 0F 85 6D 01 00 00: jne 0x1000ab00
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 33ch]
        cmp eax, 64h
        ; Exact mapped bytes 7D 0B: jge 0x1000a9a9
        __asm _emit 0x7d
        __asm _emit 0x0b
        add eax, 1eh
        mov dword ptr [ebp + 33ch], eax
        pop ebp
        ret
        ; Exact mapped bytes 66 83 BD C0 02 00 00 04: cmp word ptr [ebp + 0x2c0], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        mov dword ptr [ebp + 33ch], 64h
        mov dword ptr [ebp + 4b8h], 1
        mov dword ptr [ebp + 310h], 0
        ; Exact mapped bytes 75 0E: jne 0x1000a9df
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp + 330h]
        mov dword ptr [ebp + 318h], ecx
        ; Exact mapped bytes EB 0C: jmp 0x1000a9eb
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp + 330h]
        mov dword ptr [ebp + 318h], edx
        mov ecx, dword ptr [ebp + 74h]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 0A 01 00 00: je 0x1000ab00
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 05 66 0E 00: call 0x100f1000
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x66
        __asm _emit 0x0e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 FD 00 00 00: je 0x1000ab00
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov eax, 51eb851fh
        ; Exact mapped bytes 66 8B 8D D6 02 00 00: mov cx, word ptr [ebp + 0x2d6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xd6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        imul ecx
        sar edx, 5
        mov eax, edx
        push edi
        shr eax, 1fh
        add edx, eax
        mov dword ptr [ebp + 45ch], 1
        shl edx, 1
        mov ecx, edx
        mov dword ptr [ebp + 0a0h], edx
        imul ecx, edx
        push ecx
        ; Exact mapped bytes E8 64 1D 16 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x1d
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0a0h]
        mov edi, eax
        imul ecx, ecx
        mov edx, ecx
        xor eax, eax
        shr ecx, 2
        mov dword ptr [ebp + 9ch], edi
        push 2
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, edx
        and ecx, 3
        ; Exact mapped bytes F3 AA: rep stosb byte ptr es:[edi], al
        __asm _emit 0xf3
        __asm _emit 0xaa
        mov eax, dword ptr [ebp + 0a0h]
        push eax
        push eax
        mov eax, dword ptr [ebp + 9ch]
        push eax
        ; Exact mapped bytes E8 8D 78 01 00: call 0x10022300
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 8B 85 D6 02 00 00: mov ax, word ptr [ebp + 0x2d6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xd6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [eax + eax*2]
        mov eax, 66666667h
        imul ecx
        sar edx, 2
        mov ecx, edx
        mov eax, 51eb851fh
        shr ecx, 1fh
        add edx, ecx
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, dword ptr [ebp + 0a0h]
        mov ecx, eax
        imul ecx, eax
        shl edx, 1
        push ecx
        mov dword ptr [ebp + 0a8h], edx
        ; Exact mapped bytes E8 E6 1C 16 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x1c
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0a0h]
        mov esi, dword ptr [ebp + 9ch]
        imul ecx, ecx
        mov edx, ecx
        mov edi, eax
        shr ecx, 2
        mov dword ptr [ebp + 0a4h], eax
        push 1
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, edx
        and ecx, 3
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        mov eax, dword ptr [ebp + 0a8h]
        mov ecx, dword ptr [ebp + 0a0h]
        mov edx, dword ptr [ebp + 0a4h]
        push eax
        push ecx
        push edx
        ; Exact mapped bytes E8 05 78 01 00: call 0x10022300
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 28h
        pop edi
        pop esi
        pop ebp
        ret
    }
}
