// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005412AA .. +0x7E bytes.
extern "C" __declspec(naked) void FUN_005412aa_005412AA() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        and eax, 40ffffh
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 14: je 0x5412d7
        __asm _emit 0x74
        __asm _emit 0x14
        push 86h
        push 6756ach
        ; Exact mapped bytes E8 6E 7A FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x7a
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5412d7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D9: jne 0x5412b6
        __asm _emit 0x75
        __asm _emit 0xd9
        mov edx, dword ptr [ebp + 8]
        and edx, 10h
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 27 59 F7 FF: call 0x4b6c13
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x59
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 64h]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 28: je 0x54131f
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 64h]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 64h], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 90 DC 00 00 00: call dword ptr [eax + 0xdc]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
