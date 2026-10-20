// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045018F .. +0x123 bytes.
extern "C" __declspec(naked) void FUN_0045018f_0045018F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 75 14: jne 0x4501b8
        __asm _emit 0x75
        __asm _emit 0x14
        push 4b4h
        push 67702ch
        ; Exact mapped bytes E8 8D 8B 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4501b8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x45019b
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 4ch], 0
        ; Exact mapped bytes 75 14: jne 0x4501db
        __asm _emit 0x75
        __asm _emit 0x14
        push 4b5h
        push 67702ch
        ; Exact mapped bytes E8 6A 8B 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4501db
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4501be
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 2ch
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ecx + 4]
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 2ch
        ; Exact mapped bytes E8 36 22 0E 00: call 0x532455
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x22
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 BF D8 FF FF: call 0x44dae6
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 61: je 0x45028c
        __asm _emit 0x74
        __asm _emit 0x61
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 2ch
        ; Exact mapped bytes E8 90 20 0E 00: call 0x5322c6
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        add edx, eax
        push edx
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 2ch
        ; Exact mapped bytes E8 69 20 0E 00: call 0x5322b0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x20
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        add ecx, eax
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 2ch
        ; Exact mapped bytes E8 F5 21 0E 00: call 0x532455
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x21
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 2ch
        ; Exact mapped bytes E8 57 21 0E 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x21
        __asm _emit 0x0e
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 2ch
        ; Exact mapped bytes E8 4B 21 0E 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x21
        __asm _emit 0x0e
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 50h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 50h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 1C: call dword ptr [eax + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x1c
        ; Exact mapped bytes EB 1D: jmp 0x4502a9
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 2ch
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ch], eax
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
