// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586F83D0 .. +0xAF bytes.
extern "C" __declspec(naked) void FUN_586f83d0_586F83D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push esi
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586f83ec
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 1fh
        ; Exact mapped bytes 7D 65: jge 0x586f8457
        __asm _emit 0x7d
        __asm _emit 0x65
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 1cch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D8 F2 FF FF: call 0x586f76e0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 44: jne 0x586f8451
        __asm _emit 0x75
        __asm _emit 0x44
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x586f841f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 1fh
        ; Exact mapped bytes 7D 2A: jge 0x586f844f
        __asm _emit 0x7d
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 74 20: je 0x586f844d
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        mov esi, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx + eax*4 + 1cch]
        cmp eax, dword ptr [esi + edx*4 + 1cch]
        ; Exact mapped bytes 75 04: jne 0x586f844d
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 2D: jmp 0x586f847a
        __asm _emit 0xeb
        __asm _emit 0x2d
        ; Exact mapped bytes EB C7: jmp 0x586f8416
        __asm _emit 0xeb
        __asm _emit 0xc7
        ; Exact mapped bytes EB 04: jmp 0x586f8455
        __asm _emit 0xeb
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 25: jmp 0x586f847a
        __asm _emit 0xeb
        __asm _emit 0x25
        ; Exact mapped bytes EB 8C: jmp 0x586f83e3
        __asm _emit 0xeb
        __asm _emit 0x8c
        push 7ch
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1cch
        push ecx
        mov edx, dword ptr [ebp - 8]
        add edx, 150h
        push edx
        ; Exact mapped bytes E8 1E 44 15 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x44
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 0ch
        mov eax, 1
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
