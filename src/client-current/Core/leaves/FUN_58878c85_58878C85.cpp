// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58878C85 .. +0x8F bytes.
extern "C" __declspec(naked) void FUN_58878c85_58878C85() {
    __asm {
        push 10h
        push 588ed6f0h
        ; Exact mapped bytes E8 CF 9A FB FF: call 0x58832760
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x9a
        __asm _emit 0xfb
        __asm _emit 0xff
        mov esi, dword ptr [ebp + 18h]
        test esi, esi
        ; Exact mapped bytes 75 13: jne 0x58878cab
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes E8 D2 97 FE FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x97
        __asm _emit 0xfe
        __asm _emit 0xff
        push 16h
        pop esi
        mov dword ptr [eax], esi
        ; Exact mapped bytes E8 04 83 FD FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x83
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, esi
        ; Exact mapped bytes EB 59: jmp 0x58878d04
        __asm _emit 0xeb
        __asm _emit 0x59
        or dword ptr [esi], 0ffffffffh
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 E4: je 0x58878c98
        __asm _emit 0x74
        __asm _emit 0xe4
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 74 09: je 0x58878cc3
        __asm _emit 0x74
        __asm _emit 0x09
        test dword ptr [ebp + 14h], 0fffffe7fh
        ; Exact mapped bytes 75 D5: jne 0x58878c98
        __asm _emit 0x75
        __asm _emit 0xd5
        xor eax, eax
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 4], eax
        push dword ptr [ebp + 1ch]
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        push esi
        lea eax, [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 87 05 00 00: call 0x5887926e
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 1ch
        mov edi, eax
        mov dword ptr [ebp - 1ch], edi
        mov dword ptr [ebp - 4], 0fffffffeh
        ; Exact mapped bytes E8 1F 00 00 00: call 0x58878d1a
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test edi, edi
        ; Exact mapped bytes 74 03: je 0x58878d02
        __asm _emit 0x74
        __asm _emit 0x03
        or dword ptr [esi], 0ffffffffh
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
