// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588753F7 .. +0xA0 bytes.
extern "C" __declspec(naked) void FUN_588753f7_588753F7() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push esi
        ; Exact mapped bytes FF 15 78 41 89 58: call dword ptr [0x58894178]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x58875494
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push esi
        ; Exact mapped bytes E8 AA FF FF FF: call 0x588753c0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor ebx, ebx
        sub eax, esi
        push ebx
        push ebx
        push ebx
        push ebx
        sar eax, 1
        push eax
        push esi
        push ebx
        push ebx
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E8 BD A7 FF FF: call 0x5886fbe9
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xa7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 24h
        mov dword ptr [ebp - 4], eax
        test eax, eax
        ; Exact mapped bytes 75 0B: jne 0x58875441
        __asm _emit 0x75
        __asm _emit 0x0b
        push esi
        ; Exact mapped bytes FF 15 40 43 89 58: call dword ptr [0x58894340]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        xor eax, eax
        ; Exact mapped bytes EB 52: jmp 0x58875493
        __asm _emit 0xeb
        __asm _emit 0x52
        push edi
        push eax
        ; Exact mapped bytes E8 88 7A FF FF: call 0x5886ced0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        pop ecx
        push ebx
        test edi, edi
        ; Exact mapped bytes 75 11: jne 0x58875461
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes E8 BB 77 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push esi
        ; Exact mapped bytes FF 15 40 43 89 58: call dword ptr [0x58894340]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        xor eax, eax
        ; Exact mapped bytes EB 31: jmp 0x58875492
        __asm _emit 0xeb
        __asm _emit 0x31
        push ebx
        push dword ptr [ebp - 4]
        push edi
        push dword ptr [ebp - 8]
        push esi
        push ebx
        push ebx
        ; Exact mapped bytes E8 78 A7 FF FF: call 0x5886fbe9
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xa7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 20h
        test eax, eax
        ; Exact mapped bytes 75 08: jne 0x58875480
        __asm _emit 0x75
        __asm _emit 0x08
        push edi
        ; Exact mapped bytes E8 92 77 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 08: jmp 0x58875488
        __asm _emit 0xeb
        __asm _emit 0x08
        push ebx
        ; Exact mapped bytes E8 8A 77 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, edi
        pop ecx
        push esi
        ; Exact mapped bytes FF 15 40 43 89 58: call dword ptr [0x58894340]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, ebx
        pop edi
        pop ebx
        pop esi
        leave
        ret
    }
}
