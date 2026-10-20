// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00475F02 .. +0x9C bytes.
extern "C" __declspec(naked) void FUN_00475f02_00475F02() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp - 0ch]
        push ecx
        lea edx, [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 4
        ; Exact mapped bytes E8 45 09 00 00: call 0x476880
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 4], eax
        lea ecx, [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 4
        ; Exact mapped bytes E8 21 08 00 00: call 0x476770
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 18 0B 00 00: call 0x476a70
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x475f65
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 29: jmp 0x475f8e
        __asm _emit 0xeb
        __asm _emit 0x29
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 83 0A 00 00: call 0x4769f0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 13: je 0x475f8c
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 84h], ecx
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x475f8e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add esp, 18h
        cmp ebp, esp
        ; Exact mapped bytes E8 48 28 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x28
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
