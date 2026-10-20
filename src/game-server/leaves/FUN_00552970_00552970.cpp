// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00552970 .. +0x193 bytes.
extern "C" __declspec(naked) void FUN_00552970_00552970() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57f939h
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
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A1 FC FF FF: call 0x552638
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 68h
        ; Exact mapped bytes E8 77 56 00 00: call 0x558020
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x56
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 6ch
        ; Exact mapped bytes E8 8C 56 00 00: call 0x558040
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x56
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 70h
        ; Exact mapped bytes E8 A1 56 00 00: call 0x558060
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x56
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 58a35ch
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 10: je 0x5529de
        __asm _emit 0x74
        __asm _emit 0x10
        push 1eh
        push 5cfa08h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 82 87 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x87
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 20h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 24h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 3ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 34h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 38h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 30h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 54h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 5ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 60h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 4ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov byte ptr [eax + 41h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 2ch], 1
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 28h], 0
        mov eax, dword ptr [ebp - 10h]
        mov byte ptr [eax + 40h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 50h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 64h], 0
        mov eax, dword ptr [ebp - 10h]
        mov byte ptr [eax + 44h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 42h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 48h], 0
        mov eax, dword ptr [ebp - 10h]
        mov byte ptr [eax + 43h], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 12: je 0x552aaf
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 90 C4 00 00 00: call dword ptr [eax + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 1ch]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 11: je 0x552acb
        __asm _emit 0x74
        __asm _emit 0x11
        push 3bh
        push 5cfa08h
        ; Exact mapped bytes E8 3A 1F FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x1f
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x552acb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DE: jne 0x552aaf
        __asm _emit 0x75
        __asm _emit 0xde
        push 3ch
        push 5cfa08h
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 7F 86 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x86
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes E8 80 B7 FD FF: call 0x52e266
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xb7
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
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
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
