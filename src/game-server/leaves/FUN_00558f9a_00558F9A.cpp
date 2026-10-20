// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00558F9A .. +0xD3 bytes.
extern "C" __declspec(naked) void FUN_00558f9a_00558F9A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 1e8h
        push 5cfe58h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 A7 21 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x21
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x558fd6
        __asm _emit 0x75
        __asm _emit 0x14
        push 1e9h
        push 5cfe58h
        ; Exact mapped bytes E8 2F BA FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xba
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x558fd6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x558fb9
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
        ; Exact mapped bytes 75 14: jne 0x55901f
        __asm _emit 0x75
        __asm _emit 0x14
        push 1edh
        push 5cfe58h
        ; Exact mapped bytes E8 E6 B9 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xb9
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55901f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x559005
        __asm _emit 0x75
        __asm _emit 0xe0
        push -1
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 C0 6D F7 FF: call 0x4cfdf0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x6d
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x559048
        __asm _emit 0x75
        __asm _emit 0x14
        push 1eeh
        push 5cfe58h
        ; Exact mapped bytes E8 BD B9 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xb9
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x559048
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D7: jne 0x559025
        __asm _emit 0x75
        __asm _emit 0xd7
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 FE 4A F9 FF: call 0x4edb58
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x4a
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 84 2A 5E 00: call dword ptr [0x5e2a84]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0x5e
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
