// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58701970 .. +0x124 bytes.
extern "C" __declspec(naked) void FUN_58701970_58701970() {
    __asm {
        push ebx
        mov ebx, esp
        sub esp, 8
        and esp, 0fffffff8h
        add esp, 4
        push ebp
        mov ebp, dword ptr [ebx + 4]
        mov dword ptr [esp + 4], ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 160h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 12ch]
        ; Exact mapped bytes E8 5A 30 D8 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x30
        __asm _emit 0xd8
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 20h], ecx
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 EF 26 F2 FF: call 0x586240b0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x26
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 160h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 160h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 0a4h]
        cmp edx, 8
        ; Exact mapped bytes 74 0F: je 0x587019fa
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 0a4h]
        cmp ecx, 9
        ; Exact mapped bytes 75 56: jne 0x58701a50
        __asm _emit 0x75
        __asm _emit 0x56
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58701a0c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [eax + 0a0h]
        ; Exact mapped bytes 7D 34: jge 0x58701a4e
        __asm _emit 0x7d
        __asm _emit 0x34
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 9B 4F D8 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x4f
        __asm _emit 0xd8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 84 B5 D8 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xb5
        __asm _emit 0xd8
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 1B: jne 0x58701a4c
        __asm _emit 0x75
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 164h]
        mov dword ptr [ebp - 14h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 45 45 D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x45
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB B5: jmp 0x58701a03
        __asm _emit 0xeb
        __asm _emit 0xb5
        ; Exact mapped bytes EB 3D: jmp 0x58701a8d
        __asm _emit 0xeb
        __asm _emit 0x3d
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58701a62
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 0ch]
        cmp ecx, dword ptr [eax + 0a0h]
        ; Exact mapped bytes 7D 1D: jge 0x58701a8d
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 164h]
        mov dword ptr [ebp - 18h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 06 45 D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x45
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CC: jmp 0x58701a59
        __asm _emit 0xeb
        __asm _emit 0xcc
        mov esp, ebp
        pop ebp
        mov esp, ebx
        pop ebx
        ret
    }
}
