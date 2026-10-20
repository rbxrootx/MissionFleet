// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58784CF0 .. +0x185 bytes.
extern "C" __declspec(naked) void FUN_58784cf0_58784CF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 64h], 0
        ; Exact mapped bytes 75 2C: jne 0x58784d2e
        __asm _emit 0x75
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 7ch]
        mov dword ptr [ebp - 8], edx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 CB 11 D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x11
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        mov dword ptr [ebp - 0ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 B5 11 D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x11
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2A: jmp 0x58784d58
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 10h], eax
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 9F 11 D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x11
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 80h]
        mov dword ptr [ebp - 14h], edx
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 89 11 D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x11
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        add ecx, 68h
        ; Exact mapped bytes E8 DD 34 D0 FF: call 0x58488240
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x34
        __asm _emit 0xd0
        __asm _emit 0xff
        sub eax, 1
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 64h], eax
        ; Exact mapped bytes 74 0F: je 0x58784d7d
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        add ecx, 68h
        ; Exact mapped bytes E8 C7 34 D0 FF: call 0x58488240
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x34
        __asm _emit 0xd0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 2F: jne 0x58784dac
        __asm _emit 0x75
        __asm _emit 0x2f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 84h]
        mov dword ptr [ebp - 18h], eax
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 4D 11 D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x11
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 1ch], edx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 37 11 D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x11
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2D: jmp 0x58784dd9
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 84h]
        mov dword ptr [ebp - 20h], ecx
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 1E 11 D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x11
        __asm _emit 0xd0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 24h], eax
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 08 11 D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x11
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        add ecx, 68h
        ; Exact mapped bytes E8 5C 34 D0 FF: call 0x58488240
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x34
        __asm _emit 0xd0
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 77 2F: ja 0x58784e18
        __asm _emit 0x77
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 28h], edx
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 91 11 D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x11
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8ch]
        mov dword ptr [ebp - 2ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 7B 11 D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x11
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 59: jmp 0x58784e71
        __asm _emit 0xeb
        __asm _emit 0x59
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 30h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 62 11 D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x11
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 34h], edx
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 0C A7 D1 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xa7
        __asm _emit 0xd1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8ch]
        mov dword ptr [ebp - 38h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 36 11 D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x11
        __asm _emit 0xd0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8ch]
        mov dword ptr [ebp - 3ch], eax
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 E0 A6 D1 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xa6
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
