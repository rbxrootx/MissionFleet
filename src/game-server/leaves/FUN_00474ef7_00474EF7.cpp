// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00474EF7 .. +0xA1 bytes.
extern "C" __declspec(naked) void FUN_00474ef7_00474EF7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 14h], ecx
        lea eax, [ebp + 8]
        push eax
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 4
        ; Exact mapped bytes E8 59 19 00 00: call 0x476880
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 8], edx
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 4
        ; Exact mapped bytes E8 35 18 00 00: call 0x476770
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 2C 1B 00 00: call 0x476a70
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x474f51
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 37: jmp 0x474f88
        __asm _emit 0xeb
        __asm _emit 0x37
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 97 1A 00 00: call 0x4769f0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 21: je 0x474f86
        __asm _emit 0x74
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        mov dword ptr [edx + 84h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 50h], ecx
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x474f88
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add esp, 14h
        cmp ebp, esp
        ; Exact mapped bytes E8 4E 38 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x38
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
