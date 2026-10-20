// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053ECA0 .. +0x14C bytes.
extern "C" __declspec(naked) void FUN_0053eca0_0053ECA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes E8 B2 19 00 00: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [eax + 14h]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x53eccb
        __asm _emit 0x74
        __asm _emit 0x11
        push 20h
        push 672880h
        ; Exact mapped bytes E8 7A A0 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xa0
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53eccb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DB: jne 0x53ecac
        __asm _emit 0x75
        __asm _emit 0xdb
        ; Exact mapped bytes 83 3D 0C 6E 68 00 00: cmp dword ptr [0x686e0c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0A: je 0x53ece4
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 01 01 00 00: jmp 0x53ede5
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 686da8h
        ; Exact mapped bytes E8 C2 E9 FF FF: call 0x53d6b0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 0F 85 CE 00 00 00: jne 0x53edcc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ch], 4849c0h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10h], 484a30h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 14h], 484af0h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 18h], 484c70h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 1ch], 4851b0h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 20h], 4850a0h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 24h], 4854b0h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 28h], 484d40h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 2ch], 484e80h
        ; Exact mapped bytes E8 20 2D FF FF: call 0x531a7d
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x2d
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 51 0C: call dword ptr [ecx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 75 5A: jne 0x53edc2
        __asm _emit 0x75
        __asm _emit 0x5a
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 14h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 18h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 1ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 20h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 24h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 28h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 2ch], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 4], 1
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 14h], 0
        ; Exact mapped bytes 75 04: jne 0x53edd9
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 0C: jmp 0x53ede5
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes E8 9F 2C FF FF: call 0x531a7d
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x2c
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 51 14: call dword ptr [ecx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x14
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
