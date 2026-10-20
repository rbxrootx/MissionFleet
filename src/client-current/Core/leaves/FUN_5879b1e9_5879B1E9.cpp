// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879B1E9 .. +0xB1 bytes.
extern "C" __declspec(naked) void FUN_5879b1e9_5879B1E9() {
    __asm {
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebx]
        xor esi, esi
        mov ecx, 4
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [edx + ebx + 0ch]
        add edx, ebx
        or eax, edi
        cmp dword ptr [edx + 38h], esi
        cmovne ecx, esi
        or ecx, eax
        mov eax, dword ptr [edx + 10h]
        and ecx, 17h
        mov dword ptr [edx + 0ch], ecx
        and eax, ecx
        ; Exact mapped bytes 75 41: jne 0x5879b25a
        __asm _emit 0x75
        __asm _emit 0x41
        ; Exact mapped bytes E8 7F 52 09 00: call 0x5883049d
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x52
        __asm _emit 0x09
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 75 08: jne 0x5879b22a
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 A6 E9 D6 FF: call 0x58509bd0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xe9
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 4], 3
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 4]
        mov ecx, dword ptr [eax + ecx + 38h]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x5879b246
        __asm _emit 0x74
        __asm _emit 0x05
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov eax, ebx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        test al, 4
        ; Exact mapped bytes 74 07: je 0x5879b265
        __asm _emit 0x74
        __asm _emit 0x07
        mov esi, 588a3c78h
        ; Exact mapped bytes EB 0F: jmp 0x5879b274
        __asm _emit 0xeb
        __asm _emit 0x0f
        test al, 2
        mov esi, 588a3c90h
        mov eax, 588a3ca8h
        cmove esi, eax
        lea eax, [ebp - 20h]
        push 1
        push eax
        ; Exact mapped bytes E8 E1 02 D7 FF: call 0x5850b560
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x02
        __asm _emit 0xd7
        __asm _emit 0xff
        add esp, 8
        lea ecx, [ebp - 3ch]
        push eax
        push esi
        ; Exact mapped bytes E8 34 B8 D6 FF: call 0x58506ac0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xb8
        __asm _emit 0xd6
        __asm _emit 0xff
        push 588e25ach
        lea eax, [ebp - 3ch]
        push eax
        ; Exact mapped bytes E8 4B 21 0B 00: call 0x5884d3e5
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x21
        __asm _emit 0x0b
        __asm _emit 0x00
    }
}
