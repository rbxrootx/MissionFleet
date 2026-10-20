// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A4BF3 .. +0x187 bytes.
extern "C" __declspec(naked) void FUN_004a4bf3_004A4BF3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        push 42h
        push 5d01fch
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 51 65 05 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x65
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 18h], 0
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        push -3
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 22: jne 0x4a4c5e
        __asm _emit 0x75
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 18h], 0
        ; Exact mapped bytes 74 11: je 0x4a4c56
        __asm _emit 0x74
        __asm _emit 0x11
        push 4ch
        push 5d01fch
        ; Exact mapped bytes E8 AF FD 08 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xfd
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a4c56
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4a4c3c
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes EB 1D: jmp 0x4a4c7b
        __asm _emit 0xeb
        __asm _emit 0x1d
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        push -1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 84 98 00 00 00: je 0x4a4d1d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 18h], 0
        ; Exact mapped bytes 0F 85 8B 00 00 00: jne 0x4a4d1d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        lea ecx, [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 09: jne 0x4a4cc7
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 18h], 0
        ; Exact mapped bytes 74 24: je 0x4a4ceb
        __asm _emit 0x74
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 2ch]
        mov eax, dword ptr [edx + eax*8 + 4]
        or al, 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 2ch]
        mov dword ptr [ecx + edx*8 + 4], eax
        ; Exact mapped bytes EB 22: jmp 0x4a4d0d
        __asm _emit 0xeb
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 2ch]
        mov eax, dword ptr [edx + eax*8 + 4]
        and al, 0feh
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 2ch]
        mov dword ptr [ecx + edx*8 + 4], eax
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        ; Exact mapped bytes EB 51: jmp 0x4a4d6e
        __asm _emit 0xeb
        __asm _emit 0x51
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 18h], 0
        ; Exact mapped bytes 74 25: je 0x4a4d4b
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 2ch]
        mov edx, dword ptr [ecx + edx*8 + 4]
        or edx, 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        mov eax, dword ptr [ebp - 10h]
        mov eax, dword ptr [eax + 2ch]
        mov dword ptr [eax + ecx*8 + 4], edx
        ; Exact mapped bytes EB 23: jmp 0x4a4d6e
        __asm _emit 0xeb
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 2ch]
        mov edx, dword ptr [ecx + edx*8 + 4]
        and edx, 0fffffffeh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        mov eax, dword ptr [ebp - 10h]
        mov eax, dword ptr [eax + 2ch]
        mov dword ptr [eax + ecx*8 + 4], edx
        mov eax, dword ptr [ebp - 4]
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
