// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00431295 .. +0xD2 bytes.
extern "C" __declspec(naked) void FUN_00431295_00431295() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push ebx
        push esi
        mov esi, dword ptr [ebp + 8]
        mov ebx, ecx
        test esi, esi
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes 0F 84 9A 00 00 00: je 0x43134b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes 8B 3D FC C4 43 00: mov edi, dword ptr [0x43c4fc]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xfc
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 0E: mov cx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0e
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x431344
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        inc esi
        inc esi
        ; Exact mapped bytes 66 8B 06: mov ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x06
        inc esi
        inc esi
        mov edx, dword ptr [esi]
        add esi, 4
        ; Exact mapped bytes 66 3D 34 12: cmp ax, 0x1234
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x12
        mov dword ptr [ebp + 8], edx
        ; Exact mapped bytes 74 1E: je 0x4312f7
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes 66 3D 01 04: cmp ax, 0x401
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x04
        ; Exact mapped bytes 75 07: jne 0x4312e6
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 180h
        ; Exact mapped bytes EB 38: jmp 0x43131e
        __asm _emit 0xeb
        __asm _emit 0x38
        ; Exact mapped bytes 66 3D 03 04: cmp ax, 0x403
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x03
        __asm _emit 0x04
        ; Exact mapped bytes 75 05: jne 0x4312f1
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, 143h
        ; Exact mapped bytes 66 3D 01 04: cmp ax, 0x401
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x04
        ; Exact mapped bytes 75 1B: jne 0x431312
        __asm _emit 0x75
        __asm _emit 0x1b
        or dword ptr [ebp - 24h], 0ffffffffh
        lea eax, [ebp - 28h]
        push eax
        push 0
        mov dword ptr [ebp - 28h], 1
        mov dword ptr [ebp - 20h], esi
        push 401h
        ; Exact mapped bytes EB 13: jmp 0x431325
        __asm _emit 0xeb
        __asm _emit 0x13
        ; Exact mapped bytes 66 3D 80 01: cmp ax, 0x180
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x80
        __asm _emit 0x01
        ; Exact mapped bytes 74 06: je 0x43131e
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 3D 43 01: cmp ax, 0x143
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x43
        __asm _emit 0x01
        ; Exact mapped bytes 75 19: jne 0x431337
        __asm _emit 0x75
        __asm _emit 0x19
        movzx eax, ax
        push esi
        push 0
        push eax
        movzx eax, cx
        push eax
        push dword ptr [ebx + 1ch]
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        cmp eax, -1
        ; Exact mapped bytes 75 04: jne 0x431337
        __asm _emit 0x75
        __asm _emit 0x04
        and dword ptr [ebp - 4], 0
        add esi, dword ptr [ebp + 8]
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 85 74 FF FF FF: jne 0x4312b8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 4], 0
        pop edi
        ; Exact mapped bytes 74 13: je 0x43135e
        __asm _emit 0x74
        __asm _emit 0x13
        xor eax, eax
        push eax
        push eax
        push eax
        push eax
        push 364h
        push dword ptr [ebx + 1ch]
        ; Exact mapped bytes E8 C4 F5 FF FF: call 0x430922
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
