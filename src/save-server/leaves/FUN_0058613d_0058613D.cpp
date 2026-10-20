// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0058613D .. +0x12E bytes.
extern "C" __declspec(naked) void FUN_0058613d_0058613D() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58fbc8h
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
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1ch
        ; Exact mapped bytes E8 9E EB F9 FF: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xeb
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 24h
        ; Exact mapped bytes E8 4C C0 FA FF: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xc0
        __asm _emit 0xfa
        __asm _emit 0xff
        push 0a4h
        ; Exact mapped bytes E8 0B 5F F4 FF: call 0x4cc090
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x5f
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 16: je 0x5861a8
        __asm _emit 0x74
        __asm _emit 0x16
        push 0
        push 40004h
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 8D FB F1 FF: call 0x4a5d30
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xfb
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5861af
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 10h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 5ch]
        cmp dword ptr [edx + 10h], 0
        ; Exact mapped bytes 74 14: je 0x5861e3
        __asm _emit 0x74
        __asm _emit 0x14
        push 160h
        push 67d0d8h
        ; Exact mapped bytes E8 62 2B FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x2b
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5861e3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x5861c1
        __asm _emit 0x75
        __asm _emit 0xd8
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 5E 22 FA FF: call 0x528451
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x22
        __asm _emit 0xfa
        __asm _emit 0xff
        push 0ffffh
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 6E 22 FA FF: call 0x52846e
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x22
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 14h], 1
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx + 20h], 0
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax + 8], 0
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 0ch], 0
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx + 4], 0
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax + 10h], 1
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 38h], 0
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx + 34h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 18h]
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
