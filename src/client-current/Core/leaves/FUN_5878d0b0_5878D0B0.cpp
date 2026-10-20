// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878D0B0 .. +0x85 bytes.
extern "C" __declspec(naked) void FUN_5878d0b0_5878D0B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax], 588b694ch
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5878d0d4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 4E: jge 0x5878d128
        __asm _emit 0x7d
        __asm _emit 0x4e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + edx*4 + 60h], 0
        ; Exact mapped bytes 74 3F: je 0x5878d126
        __asm _emit 0x74
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 60h]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 17: je 0x5878d111
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 10h], eax
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 F0: call dword ptr [ebp - 0x10]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf0
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 07: jmp 0x5878d118
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + ecx*4 + 60h], 0
        ; Exact mapped bytes EB A3: jmp 0x5878d0cb
        __asm _emit 0xeb
        __asm _emit 0xa3
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 80 87 02 00: call 0x587b58b0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x87
        __asm _emit 0x02
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
