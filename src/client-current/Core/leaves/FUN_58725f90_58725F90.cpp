// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58725F90 .. +0x142 bytes.
extern "C" __declspec(naked) void FUN_58725f90_58725F90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push esi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 25 01 00 00: jne 0x587260c9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 94h]
        ; Exact mapped bytes 75 66: jne 0x58726018
        __asm _emit 0x75
        __asm _emit 0x66
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 3d0h], 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov dl, byte ptr [ecx + 0aeh]
        mov byte ptr [eax + 0adh], dl
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58725fe3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 64h
        ; Exact mapped bytes 7D 1C: jge 0x58726005
        __asm _emit 0x7d
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        mov eax, dword ptr [esi + eax*4 + 240h]
        mov dword ptr [edx + ecx*4 + 0b0h], eax
        ; Exact mapped bytes EB D5: jmp 0x58725fda
        __asm _emit 0xeb
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 B1 00 00 00: jmp 0x587260c9
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 98h]
        ; Exact mapped bytes 75 20: jne 0x58726046
        __asm _emit 0x75
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 3d0h], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 83 00 00 00: jmp 0x587260c9
        __asm _emit 0xe9
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 9ch]
        ; Exact mapped bytes 75 0B: jne 0x5872605f
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D4 19 00 00: call 0x58727a30
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 6A: jmp 0x587260c9
        __asm _emit 0xeb
        __asm _emit 0x6a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 0a0h]
        ; Exact mapped bytes 75 0B: jne 0x58726078
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FB 18 00 00: call 0x58727970
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 51: jmp 0x587260c9
        __asm _emit 0xeb
        __asm _emit 0x51
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 0a4h]
        ; Exact mapped bytes 75 43: jne 0x587260c9
        __asm _emit 0x75
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 30h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 10h], eax
        push 0
        push 0f230h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 F0: call dword ptr [ebp - 0x10]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 3d0h], 2
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        xor eax, eax
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
