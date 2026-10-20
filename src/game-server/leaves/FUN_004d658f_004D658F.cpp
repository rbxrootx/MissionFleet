// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D658F .. +0x9A bytes.
extern "C" __declspec(naked) void FUN_004d658f_004D658F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x4d65b8
        __asm _emit 0x75
        __asm _emit 0x14
        push 4cdh
        push 5c64b4h
        ; Exact mapped bytes E8 4D E4 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xe4
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d65b8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4d659b
        __asm _emit 0x75
        __asm _emit 0xdd
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4d65d8
        __asm _emit 0x75
        __asm _emit 0x14
        push 4ceh
        push 5c64b4h
        ; Exact mapped bytes E8 2D E4 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xe4
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d65d8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4d65be
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 30 B3 05 00: call 0x531916
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xb3
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4d65fe
        __asm _emit 0x75
        __asm _emit 0x14
        push 4cfh
        push 5c64b4h
        ; Exact mapped bytes E8 07 E4 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xe4
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d65fe
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x4d65de
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 40 9C 00 00: call 0x4e0250
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes E8 BE 26 FF FF: call 0x4c8cde
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x26
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
