// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005509D0 .. +0x15C bytes.
extern "C" __declspec(naked) void FUN_005509d0_005509D0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57f855h
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
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 47 A8 FB FF: call 0x50b240
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xa8
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        push 0ah
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 50h
        ; Exact mapped bytes E8 F3 72 F9 FF: call 0x4e7d00
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x72
        __asm _emit 0xf9
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax], 58a1c4h
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 28h
        ; Exact mapped bytes E8 5C 21 FE FF: call 0x532b81
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x21
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x550a3a
        __asm _emit 0x75
        __asm _emit 0x11
        push 1dh
        push 5cf7b8h
        ; Exact mapped bytes E8 CB 3F FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x3f
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x550a3a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x550a1a
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 50h
        ; Exact mapped bytes E8 BF 24 FE FF: call 0x532f0a
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x550a60
        __asm _emit 0x75
        __asm _emit 0x11
        push 1eh
        push 5cf7b8h
        ; Exact mapped bytes E8 A5 3F FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x3f
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x550a60
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x550a40
        __asm _emit 0x75
        __asm _emit 0xda
        mov dword ptr [ebp - 10h], 0
        lea eax, [ebp - 10h]
        push eax
        push 1
        ; Exact mapped bytes FF 15 DC 29 5E 00: call dword ptr [0x5e29dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x550aa1
        __asm _emit 0x74
        __asm _emit 0x24
        push 5cf824h
        push 5cf858h
        ; Exact mapped bytes E8 89 F1 F7 FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xf1
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 8
        push 5cf85ch
        push 5cf888h
        ; Exact mapped bytes E8 77 F1 F7 FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xf1
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 8
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 13: je 0x550aba
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov dword ptr [ebp - 10h], 0
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E1: jne 0x550aa1
        __asm _emit 0x75
        __asm _emit 0xe1
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 6ch], 1
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 70h], 0
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 80h], 1
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 7ch], 1
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 78h], 0
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 84h], 0
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 74h], 0
        ; Exact mapped bytes E8 55 D7 FD FF: call 0x52e266
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xd7
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
