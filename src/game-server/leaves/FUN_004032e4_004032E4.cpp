// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004032E4 .. +0x9B bytes.
extern "C" __declspec(naked) void FUN_004032e4_004032E4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 8], 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 EF DF FF FF: call 0x401300
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 198h], 1
        ; Exact mapped bytes EB 0B: jmp 0x40332e
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B5 DF FF FF: call 0x4012e0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 17: je 0x40334b
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 198h], 1
        ; Exact mapped bytes 75 09: jne 0x403349
        __asm _emit 0x75
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB D8: jmp 0x403323
        __asm _emit 0xeb
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 1D 06 00 00: call 0x403970
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 75 15: jne 0x40336d
        __asm _emit 0x75
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 0d74h]
        ; Exact mapped bytes E8 5E 66 07 00: call 0x4799c4
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x66
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x40336f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 67 54 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x54
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
