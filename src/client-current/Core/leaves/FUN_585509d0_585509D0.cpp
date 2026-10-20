// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585509D0 .. +0xB2 bytes.
extern "C" __declspec(naked) void FUN_585509d0_585509D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax], 588a9388h
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x585509f4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 20h
        ; Exact mapped bytes 0F 8D 80 00 00 00: jge 0x58550a7e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + edx*4 + 8], 0
        ; Exact mapped bytes 74 6E: je 0x58550a79
        __asm _emit 0x74
        __asm _emit 0x6e
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 8]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 40: je 0x58550a64
        __asm _emit 0x74
        __asm _emit 0x40
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx - 4], 0
        ; Exact mapped bytes 74 17: je 0x58550a44
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 18h], edx
        push 3
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 E8: call dword ptr [ebp - 0x18]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe8
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 18: jmp 0x58550a5c
        __asm _emit 0xeb
        __asm _emit 0x18
        push 4
        mov eax, dword ptr [ebp - 10h]
        sub eax, 4
        push eax
        ; Exact mapped bytes E8 32 11 2E 00: call 0x58831b84
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x11
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 14h], 0
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes EB 07: jmp 0x58550a6b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + edx*4 + 8], 0
        ; Exact mapped bytes E9 6D FF FF FF: jmp 0x585509eb
        __asm _emit 0xe9
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
