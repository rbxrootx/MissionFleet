// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050276B .. +0xB8 bytes.
extern "C" __declspec(naked) void FUN_0050276b_0050276B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes 83 3D 70 57 67 00 FF: cmp dword ptr [0x675770], -1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x70
        __asm _emit 0x57
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0xff
        ; Exact mapped bytes 75 14: jne 0x50279b
        __asm _emit 0x75
        __asm _emit 0x14
        push 515h
        push 675764h
        ; Exact mapped bytes E8 AA 65 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x65
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50279b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x50277e
        __asm _emit 0x75
        __asm _emit 0xdd
        mov dword ptr [ebp - 0ch], 0
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
        ; Exact mapped bytes 7C 1F: jl 0x5027d3
        __asm _emit 0x7c
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 D2 3A FD FF: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x3a
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        push 0
        push 8800h
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 8C 3B FD FF: call 0x4d635c
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x3b
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 C7 CF FC FF: call 0x4cf7a2
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xcf
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 1A: je 0x5027fe
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 1D F4 02 00: call 0x531c0d
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xf4
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 13: je 0x502817
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 0ch]
        push edx
        push -10h
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 50 BF 68 00: call dword ptr [0x68bf50]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
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
