// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050B82A .. +0x10D bytes.
extern "C" __declspec(naked) void FUN_0050b82a_0050B82A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 208h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 204h]
        push ecx
        ; Exact mapped bytes E8 53 41 FF FF: call 0x4ff99f
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xff
        lea edx, [ebp - 204h]
        push edx
        mov ecx, dword ptr [ebp - 208h]
        add ecx, 20h
        ; Exact mapped bytes E8 9C 22 FE FF: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x22
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 208h]
        add ecx, 20h
        ; Exact mapped bytes E8 1D 57 02 00: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x57
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x50b887
        __asm _emit 0x74
        __asm _emit 0x14
        push 0d7h
        push 5cba5ch
        ; Exact mapped bytes E8 7E 91 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x91
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50b887
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D4: jne 0x50b861
        __asm _emit 0x75
        __asm _emit 0xd4
        mov ecx, dword ptr [ebp - 208h]
        mov dword ptr [ecx + 4ch], 0
        push 0d9h
        push 5cba5ch
        mov edx, dword ptr [ebp - 208h]
        push edx
        ; Exact mapped bytes E8 B0 F8 FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xf8
        __asm _emit 0xfe
        __asm _emit 0xff
        push 100h
        lea eax, [ebp - 100h]
        push eax
        lea ecx, [ebp - 204h]
        push ecx
        ; Exact mapped bytes E8 B7 46 FF FF: call 0x4fff7f
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 18: jne 0x50b8e4
        __asm _emit 0x75
        __asm _emit 0x18
        lea edx, [ebp - 100h]
        push edx
        mov eax, dword ptr [ebp - 208h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes FF 52 58: call dword ptr [edx + 0x58]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x58
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 2E: je 0x50b918
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp - 208h]
        add ecx, 20h
        ; Exact mapped bytes E8 B2 56 02 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x56
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 02 9C 02 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x9c
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 20ch], eax
        mov eax, dword ptr [ebp - 20ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 20ch]
        ; Exact mapped bytes FF 92 88 00 00 00: call dword ptr [edx + 0x88]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0e4h
        push 5cba5ch
        mov eax, dword ptr [ebp - 208h]
        push eax
        ; Exact mapped bytes E8 32 F8 FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xf8
        __asm _emit 0xfe
        __asm _emit 0xff
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
