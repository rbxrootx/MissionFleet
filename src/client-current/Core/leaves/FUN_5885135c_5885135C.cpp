// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885135C .. +0x89 bytes.
extern "C" __declspec(naked) void FUN_5885135c_5885135C() {
    __asm {
        push 10h
        push 588ed0a0h
        ; Exact mapped bytes E8 F8 13 FE FF: call 0x58832760
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x13
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, dword ptr [ebp + 8]
        mov dword ptr [ebp - 20h], esi
        test esi, esi
        ; Exact mapped bytes 75 23: jne 0x58851395
        __asm _emit 0x75
        __asm _emit 0x23
        mov eax, dword ptr [ebp + 0ch]
        mov byte ptr [eax + 1ch], 1
        mov dword ptr [eax + 18h], 16h
        push eax
        xor edi, edi
        push edi
        push edi
        push edi
        push edi
        push edi
        ; Exact mapped bytes E8 A1 FB FF FF: call 0x58850f2e
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 40: jmp 0x588513d5
        __asm _emit 0xeb
        __asm _emit 0x40
        mov eax, dword ptr [esi + 0ch]
        nop
        shr eax, 0ch
        push esi
        test al, 1
        ; Exact mapped bytes 74 08: je 0x588513a9
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes E8 83 B3 01 00: call 0x5886c729
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xb3
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        ; Exact mapped bytes EB E7: jmp 0x58851390
        __asm _emit 0xeb
        __asm _emit 0xe7
        xor edi, edi
        mov dword ptr [ebp - 1ch], edi
        ; Exact mapped bytes E8 4F 89 00 00: call 0x58859d02
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov dword ptr [ebp - 4], edi
        push dword ptr [ebp + 0ch]
        push esi
        ; Exact mapped bytes E8 33 00 00 00: call 0x588513f3
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        mov edi, eax
        mov dword ptr [ebp - 1ch], edi
        mov dword ptr [ebp - 4], 0fffffffeh
        ; Exact mapped bytes E8 18 00 00 00: call 0x588513eb
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, edi
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
