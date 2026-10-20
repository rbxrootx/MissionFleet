// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048B8E2 .. +0xA2 bytes.
extern "C" __declspec(naked) void FUN_0048b8e2_0048B8E2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 1ch], ecx
        push 10h
        push 0
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 5D DA 01 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 18h], 10h
        lea ecx, [ebp - 18h]
        push ecx
        lea edx, [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 B3 0A 00 00: call 0x48c3e0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 3A: je 0x48b970
        __asm _emit 0x74
        __asm _emit 0x3a
        mov esi, esp
        ; Exact mapped bytes 66 8B 45 F2: mov ax, word ptr [ebp - 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf2
        push eax
        ; Exact mapped bytes FF 15 30 29 5E 00: call dword ptr [0x5e2930]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 96 CE 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xce
        __asm _emit 0x01
        __asm _emit 0x00
        and eax, 0ffffh
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], eax
        mov esi, esp
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 4C 29 5E 00: call dword ptr [0x5e294c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 79 CE 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xce
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8D 21 06 00: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x21
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        pop esi
        add esp, 1ch
        cmp ebp, esp
        ; Exact mapped bytes E8 62 CE 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xce
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
