// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885875E .. +0x6E bytes.
extern "C" __declspec(naked) void FUN_5885875e_5885875E() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 238h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push ebx
        mov ebx, dword ptr [ebp + 0ch]
        push esi
        push edi
        ; Exact mapped bytes E8 AA FE FF FF: call 0x58858628
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 238h], eax
        lea eax, [ebp - 234h]
        push eax
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 27 FC FF FF: call 0x588583ba
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        or esi, 0ffffffffh
        pop ecx
        pop ecx
        cmp edi, esi
        ; Exact mapped bytes 74 1D: je 0x588587bb
        __asm _emit 0x74
        __asm _emit 0x1d
        push dword ptr [ebp - 238h]
        lea eax, [ebp - 234h]
        push ebx
        push eax
        ; Exact mapped bytes E8 9F FD FF FF: call 0x58858550
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test al, al
        cmove edi, esi
        mov esi, edi
        mov ecx, dword ptr [ebp - 4]
        mov eax, esi
        pop edi
        pop esi
        xor ecx, ebp
        pop ebx
        ; Exact mapped bytes E8 86 88 FD FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0xfd
        __asm _emit 0xff
        leave
        ret
    }
}
