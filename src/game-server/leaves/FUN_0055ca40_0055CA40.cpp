// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055CA40 .. +0xFD bytes.
extern "C" __declspec(naked) void FUN_0055ca40_0055CA40() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57f6d6h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 8
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax], 589bf8h
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 0a8h]
        push edx
        ; Exact mapped bytes E8 12 2A FF FF: call 0x54f48f
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x2a
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x55ca8f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        cmp edx, dword ptr [ecx + 8ch]
        ; Exact mapped bytes 7D 3A: jge 0x55cad7
        __asm _emit 0x7d
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 10h]
        imul eax, eax, 24h
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 88h]
        mov eax, dword ptr [edx + eax + 14h]
        push eax
        ; Exact mapped bytes E8 CA E1 F4 FF: call 0x4aac80
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xe1
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, ecx, 24h
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 88h]
        mov ecx, dword ptr [eax + ecx + 18h]
        push ecx
        ; Exact mapped bytes E8 AE E1 F4 FF: call 0x4aac80
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xe1
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes EB AF: jmp 0x55ca86
        __asm _emit 0xeb
        __asm _emit 0xaf
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 88h]
        push eax
        ; Exact mapped bytes E8 9A E1 F4 FF: call 0x4aac80
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xe1
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 84h], 0
        ; Exact mapped bytes 74 25: je 0x55cb1a
        __asm _emit 0x74
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 84h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 84h]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 84h], 0
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 C9: jne 0x55cae9
        __asm _emit 0x75
        __asm _emit 0xc9
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 81 CF FF FF: call 0x559ab0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
