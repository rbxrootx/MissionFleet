// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052A308 .. +0xD4 bytes.
extern "C" __declspec(naked) void FUN_0052a308_0052A308() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 4], 201h
        ; Exact mapped bytes 74 0C: je 0x52a329
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 4], 0a1h
        ; Exact mapped bytes 75 0B: jne 0x52a334
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 F9 CB FD FF: call 0x506f2d
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xcb
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 47 8C FC FF: call 0x4f2f87
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x8c
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x52a34e
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 88 00 00 00: jmp 0x52a3d6
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 68h], 0
        ; Exact mapped bytes 74 20: je 0x52a377
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 68h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 68h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 5C: call dword ptr [edx + 0x5c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x5c
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x52a377
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 5F: jmp 0x52a3d6
        __asm _emit 0xeb
        __asm _emit 0x5f
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 4], 100h
        ; Exact mapped bytes 72 51: jb 0x52a3d4
        __asm _emit 0x72
        __asm _emit 0x51
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 4], 108h
        ; Exact mapped bytes 77 45: ja 0x52a3d4
        __asm _emit 0x77
        __asm _emit 0x45
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 90 F0 00 00 00: call dword ptr [eax + 0xf0]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 22: je 0x52a3c8
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 4C 25 5E 00: call dword ptr [0x5e254c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x52a3c8
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes EB 07: jmp 0x52a3cf
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes EB 02: jmp 0x52a3d6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
