// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00431562 .. +0x77 bytes.
extern "C" __declspec(naked) void FUN_00431562_00431562() {
    __asm {
        push ebx
        push esi
        mov esi, 43de18h
        push edi
        push esi
        ; Exact mapped bytes FF 15 04 C2 43 00: call dword ptr [0x43c204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push esi
        mov edi, eax
        ; Exact mapped bytes FF 15 E0 C1 43 00: call dword ptr [0x43c1e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        mov ebx, eax
        test ebx, ebx
        ; Exact mapped bytes 74 53: je 0x4315d3
        __asm _emit 0x74
        __asm _emit 0x53
        push 43de00h
        push ebx
        xor esi, esi
        ; Exact mapped bytes FF 15 FC C1 43 00: call dword ptr [0x43c1fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 1B: jne 0x4315ad
        __asm _emit 0x75
        __asm _emit 0x1b
        mov eax, dword ptr [esp + 14h]
        mov edi, 3fc0h
        and eax, edi
        cmp eax, dword ptr [esp + 14h]
        ; Exact mapped bytes 75 27: jne 0x4315ca
        __asm _emit 0x75
        __asm _emit 0x27
        ; Exact mapped bytes FF 15 18 C0 43 00: call dword ptr [0x43c018]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        mov esi, edi
        ; Exact mapped bytes EB 1D: jmp 0x4315ca
        __asm _emit 0xeb
        __asm _emit 0x1d
        push dword ptr [esp + 10h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x4315ca
        __asm _emit 0x74
        __asm _emit 0x13
        mov esi, dword ptr [esp + 14h]
        test edi, edi
        ; Exact mapped bytes 75 0B: jne 0x4315ca
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes FF 15 18 C0 43 00: call dword ptr [0x43c018]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 CE C0 3F: or si, 0x3fc0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xce
        __asm _emit 0xc0
        __asm _emit 0x3f
        push ebx
        ; Exact mapped bytes FF 15 D8 C1 43 00: call dword ptr [0x43c1d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
