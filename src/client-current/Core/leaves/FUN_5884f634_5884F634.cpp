// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884F634 .. +0x92 bytes.
extern "C" __declspec(naked) void FUN_5884f634_5884F634() {
    __asm {
        ; Exact mapped bytes 83 3D F0 72 90 58 FF: cmp dword ptr [0x589072f0], -1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf0
        __asm _emit 0x72
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0xff
        ; Exact mapped bytes 75 03: jne 0x5884f640
        __asm _emit 0x75
        __asm _emit 0x03
        xor eax, eax
        ret
        push ebx
        push edi
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes FF 35 F0 72 90 58: push dword ptr [0x589072f0]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0xf0
        __asm _emit 0x72
        __asm _emit 0x90
        __asm _emit 0x58
        mov edi, eax
        ; Exact mapped bytes E8 2E 14 00 00: call 0x58850a83
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, eax
        pop ecx
        cmp ebx, -1
        ; Exact mapped bytes 74 17: je 0x5884f674
        __asm _emit 0x74
        __asm _emit 0x17
        test ebx, ebx
        ; Exact mapped bytes 75 59: jne 0x5884f6ba
        __asm _emit 0x75
        __asm _emit 0x59
        push -1
        ; Exact mapped bytes FF 35 F0 72 90 58: push dword ptr [0x589072f0]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0xf0
        __asm _emit 0x72
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes E8 50 14 00 00: call 0x58850abe
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x5884f678
        __asm _emit 0x75
        __asm _emit 0x04
        xor ebx, ebx
        ; Exact mapped bytes EB 42: jmp 0x5884f6ba
        __asm _emit 0xeb
        __asm _emit 0x42
        push esi
        push 28h
        push 1
        ; Exact mapped bytes E8 6E 9F 00 00: call 0x588595f0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        pop ecx
        pop ecx
        test esi, esi
        ; Exact mapped bytes 74 12: je 0x5884f69c
        __asm _emit 0x74
        __asm _emit 0x12
        push esi
        ; Exact mapped bytes FF 35 F0 72 90 58: push dword ptr [0x589072f0]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0xf0
        __asm _emit 0x72
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes E8 28 14 00 00: call 0x58850abe
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x5884f6ae
        __asm _emit 0x75
        __asm _emit 0x12
        xor ebx, ebx
        push ebx
        ; Exact mapped bytes FF 35 F0 72 90 58: push dword ptr [0x589072f0]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0xf0
        __asm _emit 0x72
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes E8 14 14 00 00: call 0x58850abe
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        ; Exact mapped bytes EB 04: jmp 0x5884f6b2
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ebx, esi
        xor esi, esi
        push esi
        ; Exact mapped bytes E8 48 9F 00 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop esi
        push edi
        ; Exact mapped bytes FF 15 0C 44 89 58: call dword ptr [0x5889440c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        pop edi
        mov eax, ebx
        pop ebx
        ret
    }
}
