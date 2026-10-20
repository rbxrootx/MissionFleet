// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588F4620 .. +0x91 bytes.
extern "C" __declspec(naked) void FUN_588f4620() {
    __asm {
        ; Exact mapped bytes 66 83 7C 24 10 00: cmp word ptr [esp + 0x10], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        push ebx
        push esi
        push edi
        mov ebx, ecx
        ; Exact mapped bytes 74 2C: je 0x588f4659
        __asm _emit 0x74
        __asm _emit 0x2c
        mov edi, dword ptr [esp + 14h]
        test edi, edi
        ; Exact mapped bytes 7E 7A: jle 0x588f46af
        __asm _emit 0x7e
        __asm _emit 0x7a
        mov esi, dword ptr [esp + 10h]
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        mov ecx, ebx
        ; Exact mapped bytes E8 A8 FD FF FF: call 0x588f43f0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, 180h
        sub edi, 1
        ; Exact mapped bytes 75 ED: jne 0x588f4640
        __asm _emit 0x75
        __asm _emit 0xed
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 4]
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x588f4678
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [esp + 18h]
        mov edx, dword ptr [eax + 48h]
        shr edx, 0ah
        cmp edx, ecx
        ; Exact mapped bytes 74 47: je 0x588f46b5
        __asm _emit 0x74
        __asm _emit 0x47
        mov eax, dword ptr [eax + 0ce4h]
        test eax, eax
        ; Exact mapped bytes 75 EC: jne 0x588f4664
        __asm _emit 0x75
        __asm _emit 0xec
        xor ebx, ebx
        mov edi, dword ptr [esp + 14h]
        test edi, edi
        ; Exact mapped bytes 7E 2D: jle 0x588f46af
        __asm _emit 0x7e
        __asm _emit 0x2d
        mov esi, dword ptr [esp + 10h]
        ; Exact mapped bytes EB 08: jmp 0x588f4690
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        movzx eax, word ptr [esi + 0eh]
        shr eax, 0ch
        mov ecx, dword ptr [ebx + eax*4 + 9a4h]
        push esi
        ; Exact mapped bytes E8 8C 96 E8 FF: call 0x5877dd30
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x96
        __asm _emit 0xe8
        __asm _emit 0xff
        add esi, 180h
        sub edi, 1
        ; Exact mapped bytes 75 E1: jne 0x588f4690
        __asm _emit 0x75
        __asm _emit 0xe1
        pop edi
        pop esi
    }
}
