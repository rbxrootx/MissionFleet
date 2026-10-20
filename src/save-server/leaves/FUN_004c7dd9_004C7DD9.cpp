// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C7DD9 .. +0xB1 bytes.
extern "C" __declspec(naked) void FUN_004c7dd9_004C7DD9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 AA 25 01 00: call 0x4da398
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        push 674850h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        push 674848h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 44 0A 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 89 0C 06 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 36 0A 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x0a
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FB DE 05 00: call 0x525d18
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xde
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 56: jle 0x4c7e77
        __asm _emit 0x7e
        __asm _emit 0x56
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C1 F7 05 00: call 0x5275ea
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xf7
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 45: je 0x4c7e77
        __asm _emit 0x74
        __asm _emit 0x45
        lea eax, [ebp - 4]
        push eax
        lea ecx, [ebp - 8]
        push ecx
        lea edx, [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 21 FE FF FF: call 0x4c7c67
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        push eax
        push 674860h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        push 67485ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EB 09 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x09
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 BD 0C 06 00: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 DD 09 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x09
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 AF 0C 06 00: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB B5: jmp 0x4c7e2c
        __asm _emit 0xeb
        __asm _emit 0xb5
        push 674868h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C7 09 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x09
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
