// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004213CC .. +0x11E bytes.
extern "C" __declspec(naked) void FUN_004213cc_004213CC() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov eax, 0cccccccch
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E8 0F 84 08 00: call 0x4a9800
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x00
        cdq
        mov ecx, 4e20h
        idiv ecx
        mov dword ptr [ebp - 10h], edx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes D9 05 74 10 58 00: fld dword ptr [0x581074]
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0x74
        __asm _emit 0x10
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes D8 24 88: fsub dword ptr [eax + ecx*4]
        __asm _emit 0xd8
        __asm _emit 0x24
        __asm _emit 0x88
        sub esp, 8
        ; Exact mapped bytes DD 1C 24: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x24
        ; Exact mapped bytes E8 DB 87 08 00: call 0x4a9bf4
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x87
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DC 0D 60 11 58 00: fmul qword ptr [0x581160]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x60
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        sub esp, 8
        ; Exact mapped bytes DD 1C 24: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x24
        ; Exact mapped bytes E8 57 85 08 00: call 0x4a9984
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DD 5D E8: fstp qword ptr [ebp - 0x18]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xe8
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes D9 44 88 04: fld dword ptr [eax + ecx*4 + 4]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x88
        __asm _emit 0x04
        ; Exact mapped bytes DC 0D 58 11 58 00: fmul qword ptr [0x581158]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        sub esp, 8
        ; Exact mapped bytes DD 1C 24: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x24
        ; Exact mapped bytes E8 F3 86 08 00: call 0x4a9b44
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DC 4D E8: fmul qword ptr [ebp - 0x18]
        __asm _emit 0xdc
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes D9 55 F4: fst dword ptr [ebp - 0xc]
        __asm _emit 0xd9
        __asm _emit 0x55
        __asm _emit 0xf4
        ; Exact mapped bytes DC 05 50 11 58 00: fadd qword ptr [0x581150]
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x50
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes D9 5D F4: fstp dword ptr [ebp - 0xc]
        __asm _emit 0xd9
        __asm _emit 0x5d
        __asm _emit 0xf4
        mov eax, dword ptr [ebp + 10h]
        cdq
        sub eax, edx
        sar eax, 1
        imul eax, eax, 0fh
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes DB 45 E4: fild dword ptr [ebp - 0x1c]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes D8 4D F4: fmul dword ptr [ebp - 0xc]
        __asm _emit 0xd8
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes D9 55 F4: fst dword ptr [ebp - 0xc]
        __asm _emit 0xd9
        __asm _emit 0x55
        __asm _emit 0xf4
        ; Exact mapped bytes E8 7D 80 08 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x80
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, eax
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 72 10: jb 0x4214b6
        __asm _emit 0x72
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [ebp + 10h]
        cmp dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 77 05: ja 0x4214b6
        __asm _emit 0x77
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 24: jmp 0x4214da
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes E8 45 83 08 00: call 0x4a9800
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x83
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        imul ecx, ecx, 3e8h
        cdq
        idiv ecx
        mov eax, edx
        cdq
        mov ecx, 3e8h
        idiv ecx
        add eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        add esp, 1ch
        cmp ebp, esp
        ; Exact mapped bytes E8 FC 72 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x72
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
