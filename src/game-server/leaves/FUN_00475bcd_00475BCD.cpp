// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00475BCD .. +0xA3 bytes.
extern "C" __declspec(naked) void FUN_00475bcd_00475BCD() {
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
        ; Exact mapped bytes E8 83 0C 00 00: call 0x476880
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 8], edx
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 4
        ; Exact mapped bytes E8 5F 0B 00 00: call 0x476770
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 56 0E 00 00: call 0x476a70
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x475c27
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 39: jmp 0x475c60
        __asm _emit 0xeb
        __asm _emit 0x39
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 C1 0D 00 00: call 0x4769f0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 23: je 0x475c5e
        __asm _emit 0x74
        __asm _emit 0x23
        mov edx, dword ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4F E9 FF FF: call 0x4745a6
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x475c60
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add esp, 14h
        cmp ebp, esp
        ; Exact mapped bytes E8 76 2B 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x2b
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
