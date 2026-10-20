// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857E720 .. +0x86 bytes.
extern "C" __declspec(naked) void FUN_5857e720_5857E720() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        shl eax, 10h
        or eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 06: je 0x5857e741
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 10h], 3
        ; Exact mapped bytes 75 2B: jne 0x5857e76c
        __asm _emit 0x75
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 134h], 20000000h
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        push 80010017h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 27 E2 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xe2
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 34: jmp 0x5857e7a0
        __asm _emit 0xeb
        __asm _emit 0x34
        ; Exact mapped bytes E8 CF B9 F2 FF: call 0x584aa140
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xb9
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 78 BB F2 FF: call 0x584aa2f0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xbb
        __asm _emit 0xf2
        __asm _emit 0xff
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        push 80010017h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FD E1 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xe1
        __asm _emit 0x2a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 134h], 0
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
