// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044E1B0 .. +0x12F bytes.
extern "C" __declspec(naked) void FUN_0044e1b0_0044E1B0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57b188h
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
        cmp dword ptr [eax + 0ec4h], 0
        ; Exact mapped bytes 0F 85 B9 00 00 00: jne 0x44e2a9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 0ec8h], 1
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx + 10dch], 0
        push 1b1h
        push 5b7098h
        push 1a4h
        ; Exact mapped bytes E8 15 EE 09 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xee
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 17: je 0x44e248
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 0c7ch]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 7D 7C FC FF: call 0x415ec0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x7c
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x44e24f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 10h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0ec4h], ecx
        ; Exact mapped bytes 66 8B 55 0C: mov dx, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ecx + 0ec4h]
        ; Exact mapped bytes E8 2E A4 03 00: call 0x4886ad
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xa4
        __asm _emit 0x03
        __asm _emit 0x00
        mov esi, esp
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 18h]
        add eax, 0ecch
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 45 A5 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xa5
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 0fcch], edx
        ; Exact mapped bytes EB 1B: jmp 0x44e2c4
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax + 0ec8h], 0
        mov ecx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ecx + 0ec4h]
        ; Exact mapped bytes E8 D9 8D 03 00: call 0x48709d
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x8d
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
        ; Exact mapped bytes E8 07 A5 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xa5
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
