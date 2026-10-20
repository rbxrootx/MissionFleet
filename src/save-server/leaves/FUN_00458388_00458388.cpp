// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00458388 .. +0xC9 bytes.
extern "C" __declspec(naked) void FUN_00458388_00458388() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 11: je 0x4583a5
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x4583aa
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 A3 00 00 00: jmp 0x45844d
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E7 46 0D 00: call 0x52ca99
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x46
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 1C: je 0x4583de
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 34h]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 0D: jne 0x4583de
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 C0 46 0D 00: call 0x52ca99
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x46
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB DE: jmp 0x4583bc
        __asm _emit 0xeb
        __asm _emit 0xde
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 02: jne 0x4583e6
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 67: jmp 0x45844d
        __asm _emit 0xeb
        __asm _emit 0x67
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 10h], 0
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1E: je 0x458418
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 48h]
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 0F: je 0x458418
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        ; Exact mapped bytes E8 9A 74 07 00: call 0x4cf8af
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 02: jne 0x458420
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 2D: jmp 0x45844d
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov edx, dword ptr [ebp + 0ch]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 16: je 0x45843e
        __asm _emit 0x74
        __asm _emit 0x16
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 12: je 0x458440
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 0B 46 0D 00: call 0x52ca45
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x46
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x458440
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 0D: jmp 0x45844d
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 64: call dword ptr [edx + 0x64]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x64
        mov esp, ebp
        pop ebp
        ret
    }
}
