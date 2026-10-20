// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885699E .. +0x8F bytes.
extern "C" __declspec(naked) void FUN_5885699e_5885699E() {
    __asm {
        push 0ch
        push 588ed0e0h
        ; Exact mapped bytes E8 B6 BD FD FF: call 0x58832760
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xbd
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 32: je 0x588569e2
        __asm _emit 0x74
        __asm _emit 0x32
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 2C: je 0x588569e2
        __asm _emit 0x74
        __asm _emit 0x2c
        mov esi, dword ptr [ebp + 18h]
        test esi, esi
        ; Exact mapped bytes 75 37: jne 0x588569f4
        __asm _emit 0x75
        __asm _emit 0x37
        cmp dword ptr [ebp + 0ch], -1
        ; Exact mapped bytes 74 0F: je 0x588569d2
        __asm _emit 0x74
        __asm _emit 0x0f
        push dword ptr [ebp + 0ch]
        push esi
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 41 64 FF FF: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes E8 98 BA 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 C9 A5 FF FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xa5
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
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
        and dword ptr [ebp - 1ch], 0
        push esi
        ; Exact mapped bytes E8 04 33 00 00: call 0x58859d02
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        and dword ptr [ebp - 4], 0
        push esi
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 98 FD FF FF: call 0x588567ad
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        mov edi, eax
        mov dword ptr [ebp - 1ch], edi
        mov dword ptr [ebp - 4], 0fffffffeh
        ; Exact mapped bytes E8 0A 00 00 00: call 0x58856a33
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, edi
        ; Exact mapped bytes EB B7: jmp 0x588569e4
        __asm _emit 0xeb
        __asm _emit 0xb7
    }
}
