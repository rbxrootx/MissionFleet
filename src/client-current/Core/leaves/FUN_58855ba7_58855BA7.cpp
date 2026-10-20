// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58855BA7 .. +0x85 bytes.
extern "C" __declspec(naked) void FUN_58855ba7_58855BA7() {
    __asm {
        mov edi, edi
        push esi
        mov esi, ecx
        push edi
        mov edx, dword ptr [esi + 10h]
        lea eax, [edx + 4]
        mov dword ptr [esi + 10h], eax
        mov edi, dword ptr [edx]
        ; Exact mapped bytes E8 42 86 01 00: call 0x5886e1ff
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 24: jne 0x58855be5
        __asm _emit 0x75
        __asm _emit 0x24
        mov eax, dword ptr [esi + 8]
        mov byte ptr [eax + 1ch], 1
        mov dword ptr [eax + 18h], 16h
        xor eax, eax
        push dword ptr [esi + 8]
        push eax
        push eax
        push eax
        push eax
        push eax
        ; Exact mapped bytes E8 50 B3 FF FF: call 0x58850f2e
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xb3
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        xor al, al
        ; Exact mapped bytes EB 44: jmp 0x58855c29
        __asm _emit 0xeb
        __asm _emit 0x44
        push dword ptr [esi + 28h]
        ; Exact mapped bytes E8 CA F9 FF FF: call 0x588555b7
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        sub eax, 1
        ; Exact mapped bytes 74 2B: je 0x58855c1e
        __asm _emit 0x74
        __asm _emit 0x2b
        sub eax, 1
        ; Exact mapped bytes 74 1D: je 0x58855c15
        __asm _emit 0x74
        __asm _emit 0x1d
        dec eax
        sub eax, 1
        ; Exact mapped bytes 74 10: je 0x58855c0e
        __asm _emit 0x74
        __asm _emit 0x10
        sub eax, 4
        ; Exact mapped bytes 75 BE: jne 0x58855bc1
        __asm _emit 0x75
        __asm _emit 0xbe
        mov eax, dword ptr [esi + 14h]
        cdq
        mov dword ptr [edi], eax
        mov dword ptr [edi + 4], edx
        ; Exact mapped bytes EB 15: jmp 0x58855c23
        __asm _emit 0xeb
        __asm _emit 0x15
        mov eax, dword ptr [esi + 14h]
        mov dword ptr [edi], eax
        ; Exact mapped bytes EB 0E: jmp 0x58855c23
        __asm _emit 0xeb
        __asm _emit 0x0e
        ; Exact mapped bytes 66 8B 46 14: mov ax, word ptr [esi + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x14
        ; Exact mapped bytes 66 89 07: mov word ptr [edi], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x07
        ; Exact mapped bytes EB 05: jmp 0x58855c23
        __asm _emit 0xeb
        __asm _emit 0x05
        mov al, byte ptr [esi + 14h]
        mov byte ptr [edi], al
        mov byte ptr [esi + 2ch], 1
        mov al, 1
        pop edi
        pop esi
        ret
    }
}
