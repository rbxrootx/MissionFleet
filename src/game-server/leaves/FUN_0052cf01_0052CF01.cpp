// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052CF01 .. +0x11D bytes.
extern "C" __declspec(naked) void FUN_0052cf01_0052CF01() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57defeh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 30h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 3ch], ecx
        push 0ah
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 C4 A0 FB FF: call 0x4e6ff0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xa0
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 3ch]
        add ecx, 6ch
        ; Exact mapped bytes E8 50 5D 00 00: call 0x532c8e
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 54: je 0x52cf9b
        __asm _emit 0x74
        __asm _emit 0x54
        lea eax, [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        add ecx, 6ch
        ; Exact mapped bytes E8 5A 5D 00 00: call 0x532cb0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 30h], ecx
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 75 14: jne 0x52cf75
        __asm _emit 0x75
        __asm _emit 0x14
        push 627h
        push 5c8fcch
        ; Exact mapped bytes E8 90 7A 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x7a
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52cf75
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x52cf5b
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 30h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 92 D8 00 00 00: call dword ptr [edx + 0xd8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x52cf99
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 30h]
        push eax
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 B9 A3 FB FF: call 0x4e7352
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xa3
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes EB A6: jmp 0x52cf41
        __asm _emit 0xeb
        __asm _emit 0xa6
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 EB 5C 00 00: call 0x532c8e
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 52: je 0x52cffe
        __asm _emit 0x74
        __asm _emit 0x52
        lea ecx, [ebp - 2ch]
        push ecx
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 F8 5C 00 00: call 0x532cb0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 34h]
        cmp dword ptr [eax + 78h], 0
        ; Exact mapped bytes 74 2B: je 0x52cff1
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 74 7B FC FF: call 0x4f4b42
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x7b
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        push 632h
        push 5c8fcch
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        ; Exact mapped bytes E8 7C E1 FC FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xe1
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes FF 50 60: call dword ptr [eax + 0x60]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x60
        ; Exact mapped bytes EB 0B: jmp 0x52cffc
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 52 60: call dword ptr [edx + 0x60]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x60
        ; Exact mapped bytes EB A8: jmp 0x52cfa6
        __asm _emit 0xeb
        __asm _emit 0xa8
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 E7 A0 FB FF: call 0x4e70f4
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xa0
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
