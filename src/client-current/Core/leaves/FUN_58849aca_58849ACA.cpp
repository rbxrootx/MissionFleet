// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58849ACA .. +0x96 bytes.
extern "C" __declspec(naked) void FUN_58849aca_58849ACA() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 8]
        push esi
        mov esi, dword ptr [ebp + 0ch]
        push edi
        mov edi, dword ptr [ebp + 10h]
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x58849af3
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 10000h
        ; Exact mapped bytes EB 58: jmp 0x58849b4b
        __asm _emit 0xeb
        __asm _emit 0x58
        cmp dword ptr [eax], 2
        ; Exact mapped bytes 74 07: je 0x58849aff
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 80000h
        ; Exact mapped bytes EB 4C: jmp 0x58849b4b
        __asm _emit 0xeb
        __asm _emit 0x4c
        cmp dword ptr [ebp + 18h], 2
        push ebx
        mov ebx, dword ptr [eax + 4]
        ; Exact mapped bytes 75 32: jne 0x58849b3b
        __asm _emit 0x75
        __asm _emit 0x32
        push 208h
        lea eax, [ebp - 20ch]
        push 0
        push eax
        ; Exact mapped bytes E8 F4 32 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 20ch]
        push esi
        push eax
        ; Exact mapped bytes E8 77 FF 00 00: call 0x58859aa0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        lea eax, [ebp - 20ch]
        push 2
        push dword ptr [ebp + 14h]
        push edi
        push eax
        ; Exact mapped bytes EB 08: jmp 0x58849b43
        __asm _emit 0xeb
        __asm _emit 0x08
        push dword ptr [ebp + 18h]
        push dword ptr [ebp + 14h]
        push edi
        push esi
        mov ecx, ebx
        ; Exact mapped bytes E8 5C F4 FF FF: call 0x58848fa6
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        pop ebx
        mov ecx, dword ptr [ebp - 4]
        pop edi
        xor ecx, ebp
        ; Exact mapped bytes A3 90 95 96 58: mov dword ptr [0x58969590], eax
        __asm _emit 0xa3
        __asm _emit 0x90
        __asm _emit 0x95
        __asm _emit 0x96
        __asm _emit 0x58
        pop esi
        ; Exact mapped bytes E8 F4 74 FE FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x74
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
