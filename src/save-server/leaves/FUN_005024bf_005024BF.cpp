// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005024BF .. +0xEE bytes.
extern "C" __declspec(naked) void FUN_005024bf_005024BF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 F4 FC 02 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xfc
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 C8 FF 02 00: call 0x5324a3
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 64h]
        and ecx, 0a000h
        neg ecx
        sbb ecx, ecx
        neg ecx
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 86 DE FF FF: call 0x500386
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 3D 70 57 67 00 FF: cmp dword ptr [0x675770], -1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x70
        __asm _emit 0x57
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0xff
        ; Exact mapped bytes 75 14: jne 0x50251d
        __asm _emit 0x75
        __asm _emit 0x14
        push 4b9h
        push 675764h
        ; Exact mapped bytes E8 28 68 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50251d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x502500
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes 81 3D 70 57 67 00 47 00 04 00: cmp dword ptr [0x675770], 0x40047
        __asm _emit 0x81
        __asm _emit 0x3d
        __asm _emit 0x70
        __asm _emit 0x57
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 7D 1A: jge 0x502549
        __asm _emit 0x7d
        __asm _emit 0x1a
        cmp dword ptr [ebp - 0ch], 2
        ; Exact mapped bytes 7D 14: jge 0x502549
        __asm _emit 0x7d
        __asm _emit 0x14
        push 4bah
        push 675764h
        ; Exact mapped bytes E8 FC 67 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x67
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x502549
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D4: jne 0x502523
        __asm _emit 0x75
        __asm _emit 0xd4
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        add ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 4]
        add ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 4], ecx
        ; Exact mapped bytes 81 3D 70 57 67 00 47 00 04 00: cmp dword ptr [0x675770], 0x40047
        __asm _emit 0x81
        __asm _emit 0x3d
        __asm _emit 0x70
        __asm _emit 0x57
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 7D 0F: jge 0x502586
        __asm _emit 0x7d
        __asm _emit 0x0f
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 4]
        sub ecx, 2
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        add ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 0ch]
        add ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 0ch], ecx
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
