// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E7200 .. +0x12E bytes.
extern "C" __declspec(naked) void FUN_586e7200_586E7200() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 7C 8A DC FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x8a
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C5 D7 D9 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xd7
        __asm _emit 0xd9
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 04: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        sub edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 0F 87 EE 00 00 00: ja 0x586e732a
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 24 85 30 73 6E 58: jmp dword ptr [eax*4 + 0x586e7330]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0x73
        __asm _emit 0x6e
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 184h], 5
        push 2
        push 1
        push 5
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CD 01 00 00: call 0x586e7430
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 C1 00 00 00: jmp 0x586e732a
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 184h], 4
        push 2
        push 1
        push 4
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AA 01 00 00: call 0x586e7430
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 9E 00 00 00: jmp 0x586e732a
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 184h], 3
        push 2
        push 1
        push 3
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 87 01 00 00: call 0x586e7430
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 7E: jmp 0x586e732a
        __asm _emit 0xeb
        __asm _emit 0x7e
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 184h], 2
        push 2
        push 1
        push 2
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 67 01 00 00: call 0x586e7430
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 5E: jmp 0x586e732a
        __asm _emit 0xeb
        __asm _emit 0x5e
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 184h], 0
        push 2
        push 1
        push 0
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 47 01 00 00: call 0x586e7430
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 3E: jmp 0x586e732a
        __asm _emit 0xeb
        __asm _emit 0x3e
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 184h], 1
        push 2
        push 1
        push 1
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 27 01 00 00: call 0x586e7430
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1E: jmp 0x586e732a
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 184h], 6
        push 2
        push 1
        push 6
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 07 01 00 00: call 0x586e7430
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
