// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00471950 .. +0x9B bytes.
extern "C" __declspec(naked) void __ioterm_00471950() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x471968
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 40h
        ; Exact mapped bytes 7D 79: jge 0x4719e7
        __asm _emit 0x7d
        __asm _emit 0x79
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx*4 + 6889a0h], 0
        ; Exact mapped bytes 74 67: je 0x4719e2
        __asm _emit 0x74
        __asm _emit 0x67
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx*4 + 6889a0h]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 09: jmp 0x471993
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 24h
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx*4 + 6889a0h]
        add eax, 480h
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 73 18: jae 0x4719bf
        __asm _emit 0x73
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 74 0D: je 0x4719bd
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 4]
        add edx, 0ch
        push edx
        ; Exact mapped bytes FF 15 70 B9 68 00: call dword ptr [0x68b970]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB CB: jmp 0x47198a
        __asm _emit 0xeb
        __asm _emit 0xcb
        push 2
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax*4 + 6889a0h]
        push ecx
        ; Exact mapped bytes E8 8F 59 FF FF: call 0x467360
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x59
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx*4 + 6889a0h], 0
        ; Exact mapped bytes E9 78 FF FF FF: jmp 0x47195f
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
