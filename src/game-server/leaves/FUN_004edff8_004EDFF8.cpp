// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EDFF8 .. +0x13B bytes.
extern "C" __declspec(naked) void FUN_004edff8_004EDFF8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 14: jge 0x4ee01e
        __asm _emit 0x7d
        __asm _emit 0x14
        push 1dfh
        push 5c4bd4h
        ; Exact mapped bytes E8 E7 69 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x69
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ee01e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4ee004
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 8D 2E 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x2e
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [eax], 1
        ; Exact mapped bytes 7F 14: jg 0x4ee045
        __asm _emit 0x7f
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 80 2E 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x2e
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 0F 8E 97 00 00 00: jle 0x4ee0dc
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 6C 2E 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x2e
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 3B 05 C0 4B 5C 00: cmp eax, dword ptr [0x5c4bc0]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0xc0
        __asm _emit 0x4b
        __asm _emit 0x5c
        __asm _emit 0x00
        ; Exact mapped bytes 74 1F: je 0x4ee074
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 5C 2E 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x2e
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 7D 12: jge 0x4ee074
        __asm _emit 0x7d
        __asm _emit 0x12
        push 5c4c0ch
        push 5c4c4ch
        ; Exact mapped bytes E8 A4 1B FE FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x1b
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 3D 2E 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x2e
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 32 2E 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x2e
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 7D 06: jge 0x4ee09b
        __asm _emit 0x7d
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp + 8], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 72 F4 FF FF: call 0x4ed519
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 0A EF F9 FF: call 0x48cfc0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xef
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes E8 5E AF FB FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xaf
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 EC 2D 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x2d
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 86 F5 FF FF: call 0x4ed662
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D5 2D 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x2d
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [eax], 1
        ; Exact mapped bytes 7E 14: jle 0x4ee0fd
        __asm _emit 0x7e
        __asm _emit 0x14
        push 1f2h
        push 5c4bd4h
        ; Exact mapped bytes E8 08 69 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x69
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ee0fd
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D9: jne 0x4ee0dc
        __asm _emit 0x75
        __asm _emit 0xd9
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 75 14: jne 0x4ee11f
        __asm _emit 0x75
        __asm _emit 0x14
        push 1f5h
        push 5c4bd4h
        ; Exact mapped bytes E8 E6 68 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ee11f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DE: jne 0x4ee103
        __asm _emit 0x75
        __asm _emit 0xde
        mov eax, dword ptr [ebp - 0ch]
        mov eax, dword ptr [eax]
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
