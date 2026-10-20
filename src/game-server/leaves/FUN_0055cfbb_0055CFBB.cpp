// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055CFBB .. +0x1E7 bytes.
extern "C" __declspec(naked) void FUN_0055cfbb_0055CFBB() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10ch], ecx
        push 100h
        lea eax, [ebp - 100h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 5E DC F9 FF: call 0x4fac40
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xdc
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x55cfeb
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 D8 75 FA FF: call 0x5045c3
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x75
        __asm _emit 0xfa
        __asm _emit 0xff
        push 0ah
        lea edx, [ebp - 100h]
        push edx
        ; Exact mapped bytes E8 E7 FF F2 FF: call 0x48cfe0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 108h], eax
        cmp dword ptr [ebp - 108h], 0
        ; Exact mapped bytes 75 14: jne 0x55d01f
        __asm _emit 0x75
        __asm _emit 0x14
        push 526h
        push 5cebe0h
        ; Exact mapped bytes E8 E6 79 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x79
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55d01f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x55d002
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 108h]
        mov byte ptr [ecx], 0
        mov edx, dword ptr [ebp - 108h]
        add edx, 1
        mov dword ptr [ebp - 108h], edx
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [eax + 8ch]
        add ecx, 1
        imul ecx, ecx, 24h
        push ecx
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [edx + 88h]
        push eax
        ; Exact mapped bytes E8 3E D6 F4 FF: call 0x4aa6a0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xd6
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 10ch]
        mov dword ptr [ecx + 88h], eax
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [edx + 8ch]
        imul eax, eax, 24h
        mov ecx, dword ptr [ebp - 10ch]
        mov edx, dword ptr [ecx + 88h]
        add edx, eax
        mov dword ptr [ebp - 104h], edx
        mov eax, dword ptr [ebp - 104h]
        ; Exact mapped bytes 66 8B 4D 08: mov cx, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 08: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 104h]
        mov dword ptr [edx + 8], 1
        mov eax, dword ptr [ebp - 104h]
        mov dword ptr [eax + 4], 0
        mov ecx, dword ptr [ebp - 104h]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 10h], edx
        mov eax, dword ptr [ebp - 104h]
        mov dword ptr [eax + 0ch], 0ffffffffh
        lea ecx, [ebp - 100h]
        push ecx
        ; Exact mapped bytes E8 40 33 F5 FF: call 0x4b0420
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x33
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 104h]
        mov dword ptr [edx + 14h], eax
        mov eax, dword ptr [ebp - 108h]
        push eax
        ; Exact mapped bytes E8 28 33 F5 FF: call 0x4b0420
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x33
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 104h]
        mov dword ptr [ecx + 18h], eax
        mov edx, dword ptr [ebp - 104h]
        mov dword ptr [edx + 1ch], 200h
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 15: je 0x55d12c
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 104h]
        mov ecx, dword ptr [eax + 1ch]
        or ch, 8
        mov edx, dword ptr [ebp - 104h]
        mov dword ptr [edx + 1ch], ecx
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 74 23: je 0x55d155
        __asm _emit 0x74
        __asm _emit 0x23
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 AB FD FF FF: call 0x55ceec
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 104h]
        mov edx, dword ptr [ecx + 1ch]
        or edx, eax
        mov eax, dword ptr [ebp - 104h]
        mov dword ptr [eax + 1ch], edx
        mov ecx, dword ptr [ebp - 104h]
        cmp dword ptr [ecx + 1ch], 200h
        ; Exact mapped bytes 75 0D: jne 0x55d171
        __asm _emit 0x75
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 104h]
        mov dword ptr [edx + 1ch], 0
        mov eax, dword ptr [ebp - 104h]
        mov dword ptr [eax + 20h], 0
        mov ecx, dword ptr [ebp - 10ch]
        mov edx, dword ptr [ecx + 8ch]
        add edx, 1
        mov eax, dword ptr [ebp - 10ch]
        mov dword ptr [eax + 8ch], edx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
