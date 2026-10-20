// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B6870 .. +0x6A bytes.
extern "C" __declspec(naked) void FUN_587b6870_587B6870() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588bdc7ch
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 74 21: je 0x587b68ac
        __asm _emit 0x74
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        mov dword ptr [ebp - 8], eax
        push 24h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 95 A7 07 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xa7
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 14h], 0
        ; Exact mapped bytes 74 21: je 0x587b68d6
        __asm _emit 0x74
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 14h]
        mov dword ptr [ebp - 0ch], edx
        push 4
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 6B A7 07 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xa7
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 14h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
