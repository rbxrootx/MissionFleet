// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005579EA .. +0xD3 bytes.
extern "C" __declspec(naked) void FUN_005579ea_005579EA() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 1e8h
        push 67c630h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 57 28 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x28
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x557a26
        __asm _emit 0x75
        __asm _emit 0x14
        push 1e9h
        push 67c630h
        ; Exact mapped bytes E8 1F 13 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x13
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x557a26
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x557a09
        __asm _emit 0x75
        __asm _emit 0xdd
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 20h]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 20h]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 40: call dword ptr [ecx + 0x40]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x40
        push eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 90 D0 00 00 00: call dword ptr [eax + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x557a6f
        __asm _emit 0x75
        __asm _emit 0x14
        push 1edh
        push 67c630h
        ; Exact mapped bytes E8 D6 12 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x12
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x557a6f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x557a55
        __asm _emit 0x75
        __asm _emit 0xe0
        push -1
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 80 B9 F4 FF: call 0x4a3400
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xb9
        __asm _emit 0xf4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x557a98
        __asm _emit 0x75
        __asm _emit 0x14
        push 1eeh
        push 67c630h
        ; Exact mapped bytes E8 AD 12 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x12
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x557a98
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D7: jne 0x557a75
        __asm _emit 0x75
        __asm _emit 0xd7
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 4E 51 F7 FF: call 0x4ccbf8
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x51
        __asm _emit 0xf7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 18 C3 68 00: call dword ptr [0x68c318]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
