// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585B8E40 .. +0x131 bytes.
extern "C" __declspec(naked) void FUN_585b8e40_585B8E40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 504h], 0
        ; Exact mapped bytes 75 7D: jne 0x585b8ed2
        __asm _emit 0x75
        __asm _emit 0x7d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4d8h]
        mov dword ptr [ebp - 10h], edx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 75 D0 EC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xd0
        __asm _emit 0xec
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4dch]
        mov dword ptr [ebp - 14h], ecx
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 5F D0 EC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xd0
        __asm _emit 0xec
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4e0h]
        mov dword ptr [ebp - 18h], eax
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F9 D0 EC FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xd0
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585b8eaa
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 5
        ; Exact mapped bytes 7D 1D: jge 0x585b8ecd
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 4e4h]
        mov dword ptr [ebp - 1ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 16 D0 EC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xd0
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x585b8ea1
        __asm _emit 0xeb
        __asm _emit 0xd4
        ; Exact mapped bytes E9 9B 00 00 00: jmp 0x585b8f6d
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4d8h]
        mov dword ptr [ebp - 20h], eax
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 F8 CF EC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xcf
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4dch]
        mov dword ptr [ebp - 24h], edx
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 E2 CF EC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xcf
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 83 3D 90 75 94 58 00: cmp dword ptr [0x58947590], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x90
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 19: jne 0x585b8f21
        __asm _emit 0x75
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4e0h]
        mov dword ptr [ebp - 28h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 72 D0 EC FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xd0
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 17: jmp 0x585b8f38
        __asm _emit 0xeb
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4e0h]
        mov dword ptr [ebp - 2ch], eax
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 59 D0 EC FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xd0
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x585b8f4a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 5
        ; Exact mapped bytes 7D 1D: jge 0x585b8f6d
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 4e4h]
        mov dword ptr [ebp - 30h], ecx
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 76 CF EC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xcf
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x585b8f41
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov esp, ebp
        pop ebp
        ret
    }
}
