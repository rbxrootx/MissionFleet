// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044E2DF .. +0x14B bytes.
extern "C" __declspec(naked) void FUN_0044e2df_0044E2DF() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57b1a9h
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
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 0db0h], 0
        ; Exact mapped bytes 0F 85 D5 00 00 00: jne 0x44e3f4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 0ca8h], 1
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx + 10dch], 0
        push 1c7h
        push 5b7098h
        push 1ach
        ; Exact mapped bytes E8 E6 EC 09 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xec
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 17: je 0x44e377
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 0c7ch]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 FE 84 FE FF: call 0x436870
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x44e37e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 10h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0db0h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 0c7ch]
        mov ecx, dword ptr [eax + 40cc0h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 0db0h]
        mov dword ptr [ecx + 4], eax
        ; Exact mapped bytes 66 8B 4D 0C: mov cx, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 0db0h]
        ; Exact mapped bytes E8 E4 A2 03 00: call 0x4886ad
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xa2
        __asm _emit 0x03
        __asm _emit 0x00
        mov esi, esp
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        add edx, 0cach
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 FA A3 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xa3
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 0dach], ecx
        ; Exact mapped bytes EB 1B: jmp 0x44e40f
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx + 0ca8h], 0
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 0db0h]
        ; Exact mapped bytes E8 8E 8C 03 00: call 0x48709d
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x8c
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        add esp, 1ch
        cmp ebp, esp
        ; Exact mapped bytes E8 BC A3 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xa3
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
