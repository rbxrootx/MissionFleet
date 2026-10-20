// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00433455 .. +0x179 bytes.
extern "C" __declspec(naked) void FUN_00433455_00433455() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 18h], ecx
        mov esi, esp
        push 0
        push 80h
        push 3
        push 0
        push 1
        push 80000000h
        push 5b587ch
        ; Exact mapped bytes FF 15 F4 21 5E 00: call dword ptr [0x5e21f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 44 53 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x53
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 0F 84 F2 00 00 00: je 0x43359b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 40004h]
        mov dword ptr [ecx + 2ch], 0
        mov dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes EB 09: jmp 0x4334cb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0ah
        ; Exact mapped bytes 0F 8D B1 00 00 00: jge 0x433586
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ecx + edx*4 + 7ch]
        shl eax, 2
        mov dword ptr [ebp - 10h], eax
        mov esi, esp
        push 0
        lea ecx, [ebp - 4]
        push ecx
        push 4
        lea edx, [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 F0 21 5E 00: call dword ptr [0x5e21f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 D6 52 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x52
        __asm _emit 0x07
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea ecx, [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ecx + edx*4 + 2ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 F0 21 5E 00: call dword ptr [0x5e21f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 A8 52 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x52
        __asm _emit 0x07
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes 74 43: je 0x433581
        __asm _emit 0x74
        __asm _emit 0x43
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x433550
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 14h]
        cmp eax, dword ptr [ecx + edx*4 + 7ch]
        ; Exact mapped bytes 7D 1C: jge 0x433581
        __asm _emit 0x7d
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + eax*4 + 2ch]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + edx*4], 0f423fh
        ; Exact mapped bytes EB C6: jmp 0x433547
        __asm _emit 0xeb
        __asm _emit 0xc6
        ; Exact mapped bytes E9 3C FF FF FF: jmp 0x4334c2
        __asm _emit 0xe9
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, esp
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 EC 21 5E 00: call dword ptr [0x5e21ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 47 52 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x52
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 24: jmp 0x4335bf
        __asm _emit 0xeb
        __asm _emit 0x24
        push 0
        push 0
        push 5b5894h
        ; Exact mapped bytes E8 D8 A2 0D 00: call 0x50d881
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xa2
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 1D 00 00 00: call 0x4335ce
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 5b58b0h
        ; Exact mapped bytes E8 C2 A2 0D 00: call 0x50d881
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xa2
        __asm _emit 0x0d
        __asm _emit 0x00
        pop esi
        add esp, 18h
        cmp ebp, esp
        ; Exact mapped bytes E8 16 52 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x52
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
