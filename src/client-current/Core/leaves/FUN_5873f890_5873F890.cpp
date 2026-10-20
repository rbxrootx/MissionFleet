// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5873F890 .. +0x14F bytes.
extern "C" __declspec(naked) void FUN_5873f890_5873F890() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 34 01 00 00: jne 0x5873f9d7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 68h]
        ; Exact mapped bytes 75 19: jne 0x5873f8c7
        __asm _emit 0x75
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5ch]
        mov dword ptr [ebp - 8], eax
        push 14h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 0F DB E2 FF: call 0x5856d3d0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 10 01 00 00: jmp 0x5873f9d7
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes 75 19: jne 0x5873f8eb
        __asm _emit 0x75
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ch]
        mov dword ptr [ebp - 0ch], ecx
        push 14h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 4B DA E2 FF: call 0x5856d330
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xda
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 EC 00 00 00: jmp 0x5873f9d7
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + eax + 7ch]
        ; Exact mapped bytes 75 10: jne 0x5873f90f
        __asm _emit 0x75
        __asm _emit 0x10
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 47 07 00 00: call 0x58740050
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 C8 00 00 00: jmp 0x5873f9d7
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + eax + 7ch]
        ; Exact mapped bytes 75 10: jne 0x5873f933
        __asm _emit 0x75
        __asm _emit 0x10
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 23 07 00 00: call 0x58740050
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 A4 00 00 00: jmp 0x5873f9d7
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + eax + 7ch]
        ; Exact mapped bytes 75 10: jne 0x5873f956
        __asm _emit 0x75
        __asm _emit 0x10
        push 2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 00 07 00 00: call 0x58740050
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 81 00 00 00: jmp 0x5873f9d7
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + ecx + 7ch]
        ; Exact mapped bytes 75 0D: jne 0x5873f977
        __asm _emit 0x75
        __asm _emit 0x0d
        push 3
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DC 06 00 00: call 0x58740050
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 60: jmp 0x5873f9d7
        __asm _emit 0xeb
        __asm _emit 0x60
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + edx + 70h]
        ; Exact mapped bytes 75 0D: jne 0x5873f998
        __asm _emit 0x75
        __asm _emit 0x0d
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AB 05 00 00: call 0x5873ff40
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 3F: jmp 0x5873f9d7
        __asm _emit 0xeb
        __asm _emit 0x3f
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + edx + 70h]
        ; Exact mapped bytes 75 0D: jne 0x5873f9b9
        __asm _emit 0x75
        __asm _emit 0x0d
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8A 05 00 00: call 0x5873ff40
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1E: jmp 0x5873f9d7
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + edx + 70h]
        ; Exact mapped bytes 75 0B: jne 0x5873f9d7
        __asm _emit 0x75
        __asm _emit 0x0b
        push 2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6A 05 00 00: call 0x5873ff40
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x05
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
