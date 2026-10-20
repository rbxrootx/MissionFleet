// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58746D60 .. +0x12C bytes.
extern "C" __declspec(naked) void FUN_58746d60_58746D60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 11 01 00 00: jne 0x58746e84
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 68h]
        ; Exact mapped bytes 75 19: jne 0x58746d97
        __asm _emit 0x75
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5ch]
        mov dword ptr [ebp - 8], eax
        push 14h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 3F 66 E2 FF: call 0x5856d3d0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x66
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 ED 00 00 00: jmp 0x58746e84
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes 75 19: jne 0x58746dbb
        __asm _emit 0x75
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ch]
        mov dword ptr [ebp - 0ch], ecx
        push 14h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 7B 65 E2 FF: call 0x5856d330
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x65
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 C9 00 00 00: jmp 0x58746e84
        __asm _emit 0xe9
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + edx + 70h]
        ; Exact mapped bytes 75 10: jne 0x58746ddf
        __asm _emit 0x75
        __asm _emit 0x10
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 07 0D 00 00: call 0x58747ae0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 A5 00 00 00: jmp 0x58746e84
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + eax + 70h]
        ; Exact mapped bytes 75 10: jne 0x58746e03
        __asm _emit 0x75
        __asm _emit 0x10
        push 3
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E3 0C 00 00: call 0x58747ae0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 81 00 00 00: jmp 0x58746e84
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        shl eax, 2
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + eax + 70h]
        ; Exact mapped bytes 75 0D: jne 0x58746e24
        __asm _emit 0x75
        __asm _emit 0x0d
        push 4
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BF 0C 00 00: call 0x58747ae0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 60: jmp 0x58746e84
        __asm _emit 0xeb
        __asm _emit 0x60
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + ecx + 70h]
        ; Exact mapped bytes 75 0D: jne 0x58746e45
        __asm _emit 0x75
        __asm _emit 0x0d
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9E 0C 00 00: call 0x58747ae0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 3F: jmp 0x58746e84
        __asm _emit 0xeb
        __asm _emit 0x3f
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + ecx + 70h]
        ; Exact mapped bytes 75 0D: jne 0x58746e65
        __asm _emit 0x75
        __asm _emit 0x0d
        push 2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7E 0C 00 00: call 0x58747ae0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1F: jmp 0x58746e84
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov ecx, 4
        imul edx, ecx, 5
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + edx + 70h]
        ; Exact mapped bytes 75 0B: jne 0x58746e84
        __asm _emit 0x75
        __asm _emit 0x0b
        push 5
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5D 0C 00 00: call 0x58747ae0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
