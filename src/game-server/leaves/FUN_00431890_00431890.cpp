// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00431890 .. +0x26C bytes.
extern "C" __declspec(naked) void FUN_00431890_00431890() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push edi
        push ecx
        lea edi, [ebp - 28h]
        mov ecx, 0ah
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 8]
        imul eax, eax, 370h
        lea ecx, [ecx + eax + 16c04h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 1C 82 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x82
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 07: jne 0x4318e0
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 0B 02 00 00: jmp 0x431aeb
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 8]
        imul edx, edx, 370h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + edx + 16be4h]
        cmp edx, dword ptr [ecx + 54h]
        ; Exact mapped bytes 72 07: jb 0x43190b
        __asm _emit 0x72
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 E0 01 00 00: jmp 0x431aeb
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 8]
        imul eax, eax, 370h
        mov edx, dword ptr [ebp - 8]
        mov edx, dword ptr [edx + 54h]
        sub edx, dword ptr [ecx + eax + 16be4h]
        mov dword ptr [ebp - 0ch], edx
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 8]
        imul eax, eax, 370h
        cmp dword ptr [ecx + eax + 16be4h], 0
        ; Exact mapped bytes 75 7C: jne 0x4319d2
        __asm _emit 0x75
        __asm _emit 0x7c
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 5ch]
        mov dword ptr [ebp - 18h], edx
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes DF 6D E8: fild qword ptr [ebp - 0x18]
        __asm _emit 0xdf
        __asm _emit 0x6d
        __asm _emit 0xe8
        sub esp, 8
        ; Exact mapped bytes DD 1C 24: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x24
        ; Exact mapped bytes E8 10 80 07 00: call 0x4a9984
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DC 35 28 11 58 00: fdiv qword ptr [0x581128]
        __asm _emit 0xdc
        __asm _emit 0x35
        __asm _emit 0x28
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes DC 0D 20 11 58 00: fmul qword ptr [0x581120]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes DA 4D F4: fimul dword ptr [ebp - 0xc]
        __asm _emit 0xda
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes E8 71 7B 07 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x7b
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 5ch]
        mov dword ptr [ebp - 20h], ecx
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes DF 6D E0: fild qword ptr [ebp - 0x20]
        __asm _emit 0xdf
        __asm _emit 0x6d
        __asm _emit 0xe0
        sub esp, 8
        ; Exact mapped bytes DD 1C 24: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x24
        ; Exact mapped bytes E8 D8 7F 07 00: call 0x4a9984
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x7f
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DC 35 28 11 58 00: fdiv qword ptr [0x581128]
        __asm _emit 0xdc
        __asm _emit 0x35
        __asm _emit 0x28
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes DC 0D 20 11 58 00: fmul qword ptr [0x581120]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes DA 4D F4: fimul dword ptr [ebp - 0xc]
        __asm _emit 0xda
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes E8 39 7B 07 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x7b
        __asm _emit 0x07
        __asm _emit 0x00
        cdq
        sub eax, edx
        sar eax, 1
        mov edx, dword ptr [ebp - 4]
        add edx, eax
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB 3D: jmp 0x431a0f
        __asm _emit 0xeb
        __asm _emit 0x3d
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 5ch]
        mov dword ptr [ebp - 28h], ecx
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes DF 6D D8: fild qword ptr [ebp - 0x28]
        __asm _emit 0xdf
        __asm _emit 0x6d
        __asm _emit 0xd8
        sub esp, 8
        ; Exact mapped bytes DD 1C 24: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x24
        ; Exact mapped bytes E8 94 7F 07 00: call 0x4a9984
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x7f
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DC 35 28 11 58 00: fdiv qword ptr [0x581128]
        __asm _emit 0xdc
        __asm _emit 0x35
        __asm _emit 0x28
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes DC 0D 20 11 58 00: fmul qword ptr [0x581120]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes DA 4D F4: fimul dword ptr [ebp - 0xc]
        __asm _emit 0xda
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes E8 F5 7A 07 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x7a
        __asm _emit 0x07
        __asm _emit 0x00
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7E 0B: jle 0x431a20
        __asm _emit 0x7e
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 4]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [eax + 18h]
        sub ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov dword ptr [eax + 18h], ecx
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 54h]
        shl edx, 10h
        or edx, dword ptr [ebp - 4]
        push edx
        push 2c0000h
        push 80021004h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D2 57 05 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x57
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 8]
        imul eax, eax, 370h
        mov edx, dword ptr [ebp - 8]
        mov edx, dword ptr [edx + 54h]
        mov dword ptr [ecx + eax + 16be4h], edx
        push 1
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 40008h]
        mov ecx, dword ptr [edx + 40ca8h]
        ; Exact mapped bytes E8 19 0C 05 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x0c
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        shl ecx, 10h
        or ecx, 2
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 40008h]
        mov ecx, dword ptr [ecx + 40ca8h]
        ; Exact mapped bytes E8 F4 0B 05 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x0b
        __asm _emit 0x05
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 54h]
        shl eax, 10h
        or eax, dword ptr [ebp - 4]
        push eax
        push 2c0000h
        push 80021004h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4C 57 05 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x57
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, 1
        pop edi
        add esp, 28h
        cmp ebp, esp
        ; Exact mapped bytes E8 EA 6C 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x6c
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
