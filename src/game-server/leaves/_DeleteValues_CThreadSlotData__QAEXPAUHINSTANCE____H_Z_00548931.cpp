// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00548931 .. +0x8B bytes.
extern "C" __declspec(naked) void _DeleteValues_CThreadSlotData__QAEXPAUHINSTANCE____H_Z_00548931() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        add eax, 1ch
        push eax
        ; Exact mapped bytes FF 15 20 24 5E 00: call dword ptr [0x5e2420]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 27: jne 0x548974
        __asm _emit 0x75
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 15 24 23 5E 00: call dword ptr [0x5e2324]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 10: je 0x548972
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 7A FE FF FF: call 0x5487ec
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 35: jmp 0x5489a9
        __asm _emit 0xeb
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 14h
        ; Exact mapped bytes E8 51 05 00 00: call 0x548ed0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 21: je 0x5489a9
        __asm _emit 0x74
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 4B FE FF FF: call 0x5487ec
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB D9: jmp 0x548982
        __asm _emit 0xeb
        __asm _emit 0xd9
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1ch
        push ecx
        ; Exact mapped bytes FF 15 24 24 5E 00: call dword ptr [0x5e2424]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
