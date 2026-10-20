// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049BCE3 .. +0x85 bytes.
extern "C" __declspec(naked) void FUN_0049bce3_0049BCE3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 02: jne 0x49bcf1
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 73: jmp 0x49bd64
        __asm _emit 0xeb
        __asm _emit 0x73
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 8], 0
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 2B: je 0x49bd36
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 34h]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 1C: jne 0x49bd36
        __asm _emit 0x75
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 38h]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 0D: jne 0x49bd36
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 08 13 0A 00: call 0x53d039
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x13
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB CF: jmp 0x49bd05
        __asm _emit 0xeb
        __asm _emit 0xcf
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 06: je 0x49bd42
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 02: je 0x49bd44
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 20: jmp 0x49bd64
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
        ; Exact mapped bytes E8 DC 0D 0A 00: call 0x53cb33
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 08: je 0x49bd64
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 17 37 05 00: call 0x4ef47b
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x37
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
