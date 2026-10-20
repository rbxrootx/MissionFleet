// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588645D0 .. +0x64 bytes.
extern "C" __declspec(naked) void FUN_588645d0_588645D0() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ebx
        push esi
        mov esi, dword ptr [ebp + 8]
        push edi
        test esi, esi
        ; Exact mapped bytes 74 3F: je 0x5886461e
        __asm _emit 0x74
        __asm _emit 0x3f
        mov eax, esi
        lea edx, [eax + 2]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        add eax, 2
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 F5: jne 0x588645e4
        __asm _emit 0x75
        __asm _emit 0xf5
        sub eax, edx
        sar eax, 1
        lea ebx, [eax + 1]
        lea eax, [ebx + ebx]
        push eax
        ; Exact mapped bytes E8 11 50 FF FF: call 0x58859610
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        add esp, 4
        test edi, edi
        ; Exact mapped bytes 74 16: je 0x5886461e
        __asm _emit 0x74
        __asm _emit 0x16
        push esi
        push ebx
        push edi
        ; Exact mapped bytes E8 70 29 00 00: call 0x58866f80
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x58864625
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        pop ebp
        ret
        push 0
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 A5 C9 FE FF: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xc9
        __asm _emit 0xfe
        __asm _emit 0xff
    }
}
