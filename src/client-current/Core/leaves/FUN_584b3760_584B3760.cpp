// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B3760 .. +0x168 bytes.
extern "C" __declspec(naked) void FUN_584b3760_584B3760() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0b8h]
        mov dword ptr [ebp - 14h], ecx
        push 12h
        ; Exact mapped bytes 8B 0D BC 07 96 58: mov ecx, dword ptr [0x589607bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9E 13 FD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x13
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 9F 27 FD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x27
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0c4h]
        mov dword ptr [ebp - 1ch], ecx
        push 3
        ; Exact mapped bytes 8B 0D BC 07 96 58: mov ecx, dword ptr [0x589607bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 26 13 FD FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x13
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 A7 34 FD FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x34
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0c0h]
        mov dword ptr [ebp - 24h], ecx
        push 15h
        ; Exact mapped bytes 8B 0D BC 07 96 58: mov ecx, dword ptr [0x589607bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4E 13 FD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x13
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 4F 27 FD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x27
        __asm _emit 0xfd
        __asm _emit 0xff
        mov byte ptr [ebp - 1], 0
        mov byte ptr [ebp - 2], 0
        mov eax, dword ptr [ebp - 8]
        movzx ecx, word ptr [eax + 16ch]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 12: je 0x584b380e
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes 74 02: je 0x584b3804
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 14: jmp 0x584b3818
        __asm _emit 0xeb
        __asm _emit 0x14
        mov byte ptr [ebp - 1], 10h
        mov byte ptr [ebp - 2], 11h
        ; Exact mapped bytes EB 0F: jmp 0x584b381d
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov byte ptr [ebp - 1], 0eh
        mov byte ptr [ebp - 2], 0fh
        ; Exact mapped bytes EB 05: jmp 0x584b381d
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 A7 00 00 00: jmp 0x584b38c4
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax + 1e8h]
        mov dword ptr [ebp - 2ch], edx
        movzx eax, byte ptr [ebp - 1]
        push eax
        ; Exact mapped bytes 8B 0D BC 07 96 58: mov ecx, dword ptr [0x589607bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DE 12 FD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x12
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 DF 26 FD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x26
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax + 1e8h]
        mov dword ptr [ebp - 30h], edx
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 70 26 FD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x26
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax + 1e8h]
        mov dword ptr [ebp - 38h], edx
        movzx eax, byte ptr [ebp - 2]
        push eax
        ; Exact mapped bytes 8B 0D BC 07 96 58: mov ecx, dword ptr [0x589607bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8B 12 FD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x12
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 8C 26 FD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x26
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx + 1e8h]
        mov dword ptr [ebp - 3ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 1D 26 FD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x26
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
