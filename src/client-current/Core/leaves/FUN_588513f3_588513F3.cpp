// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588513F3 .. +0x8E bytes.
extern "C" __declspec(naked) void FUN_588513f3_588513F3() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 8]
        test esi, esi
        ; Exact mapped bytes 75 23: jne 0x58851423
        __asm _emit 0x75
        __asm _emit 0x23
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov byte ptr [eax + 1ch], 1
        mov dword ptr [eax + 18h], 16h
        xor eax, eax
        push eax
        push eax
        push eax
        push eax
        push eax
        ; Exact mapped bytes E8 13 FB FF FF: call 0x58850f2e
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 5B: jmp 0x5885147e
        __asm _emit 0xeb
        __asm _emit 0x5b
        mov eax, dword ptr [esi + 0ch]
        push edi
        or edi, 0ffffffffh
        nop
        shr eax, 0dh
        test al, 1
        ; Exact mapped bytes 74 42: je 0x58851474
        __asm _emit 0x74
        __asm _emit 0x42
        push dword ptr [ebp + 0ch]
        push esi
        ; Exact mapped bytes E8 27 8B 00 00: call 0x58859f62
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        mov edi, eax
        ; Exact mapped bytes E8 3E BA 01 00: call 0x5886ce81
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xba
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        push dword ptr [ebp + 0ch]
        push esi
        ; Exact mapped bytes E8 07 B8 01 00: call 0x5886cc56
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        push eax
        ; Exact mapped bytes E8 B8 B8 01 00: call 0x5886cd0e
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        pop ecx
        test eax, eax
        ; Exact mapped bytes 79 05: jns 0x58851461
        __asm _emit 0x79
        __asm _emit 0x05
        or edi, 0ffffffffh
        ; Exact mapped bytes EB 13: jmp 0x58851474
        __asm _emit 0xeb
        __asm _emit 0x13
        cmp dword ptr [esi + 1ch], 0
        ; Exact mapped bytes 74 0D: je 0x58851474
        __asm _emit 0x74
        __asm _emit 0x0d
        push dword ptr [esi + 1ch]
        ; Exact mapped bytes E8 A1 B7 01 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xb7
        __asm _emit 0x01
        __asm _emit 0x00
        and dword ptr [esi + 1ch], 0
        pop ecx
        push esi
        ; Exact mapped bytes E8 AF B2 01 00: call 0x5886c729
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xb2
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        ret
    }
}
