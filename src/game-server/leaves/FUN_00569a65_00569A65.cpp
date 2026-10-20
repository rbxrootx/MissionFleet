// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00569A65 .. +0xE1 bytes.
extern "C" __declspec(naked) void FUN_00569a65_00569A65() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        push 0a8h
        push 5d053ch
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 DC 16 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x16
        __asm _emit 0xf9
        __asm _emit 0xff
        push -1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 A3 63 F6 FF: call 0x4cfe32
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x63
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x569aa7
        __asm _emit 0x75
        __asm _emit 0x14
        push 0a9h
        push 5d053ch
        ; Exact mapped bytes E8 5E AF FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xaf
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x569aa7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D7: jne 0x569a84
        __asm _emit 0x75
        __asm _emit 0xd7
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 88h], 0
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x569b3d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 6B C8 FF FF: call 0x566330
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 88h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 04 C5 FF FF: call 0x565fdf
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xc5
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 92 BC 00 00 00: call dword ptr [edx + 0xbc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 39 74 FE FF: call 0x550f31
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x74
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 3C: je 0x569b3d
        __asm _emit 0x74
        __asm _emit 0x3c
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9A 7D 00 00: call 0x5718a5
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x7d
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        push 3
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9E 6C 00 00: call 0x5707ba
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 13: je 0x569b35
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov dword ptr [ebp - 0ch], 0
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E1: jne 0x569b1c
        __asm _emit 0x75
        __asm _emit 0xe1
        ; Exact mapped bytes EB AF: jmp 0x569aec
        __asm _emit 0xeb
        __asm _emit 0xaf
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
