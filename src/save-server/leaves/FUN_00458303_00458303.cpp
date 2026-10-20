// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00458303 .. +0x85 bytes.
extern "C" __declspec(naked) void FUN_00458303_00458303() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 02: jne 0x458311
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 73: jmp 0x458384
        __asm _emit 0xeb
        __asm _emit 0x73
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 8], 0
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 2B: je 0x458356
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 34h]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 1C: jne 0x458356
        __asm _emit 0x75
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 38h]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 0D: jne 0x458356
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 48 47 0D 00: call 0x52ca99
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x47
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB CF: jmp 0x458325
        __asm _emit 0xeb
        __asm _emit 0xcf
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 06: je 0x458362
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 02: je 0x458364
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 20: jmp 0x458384
        __asm _emit 0xeb
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 90 B4 00 00 00: call dword ptr [eax + 0xb4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 1C 42 0D 00: call 0x52c593
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x42
        __asm _emit 0x0d
        __asm _emit 0x00
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 08: je 0x458384
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 87 E5 07 00: call 0x4d690b
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xe5
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
