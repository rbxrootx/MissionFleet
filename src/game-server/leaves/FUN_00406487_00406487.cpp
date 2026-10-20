// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00406487 .. +0x153 bytes.
extern "C" __declspec(naked) void FUN_00406487_00406487() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + 10h], 30h
        ; Exact mapped bytes 73 07: jae 0x4064b5
        __asm _emit 0x73
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 14 01 00 00: jmp 0x4065c9
        __asm _emit 0xe9
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 23 45 00 00: call 0x40a9e0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 150h
        mov esi, esp
        push edx
        push 5a0520h
        mov eax, dword ptr [ebp - 14h]
        add eax, 8
        push eax
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 F5 22 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x22
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 18h
        mov dword ptr [ebp - 0ch], 4
        mov ecx, dword ptr [ebp - 4]
        add ecx, 18h
        mov esi, esp
        push ecx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 D1 22 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x22
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        lea edx, [ebp - 8]
        push edx
        lea eax, [ebp - 0ch]
        push eax
        lea ecx, [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 9D D2 FF FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 27: je 0x406551
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 4]
        add edx, 18h
        mov esi, esp
        push edx
        push 5a0524h
        mov eax, dword ptr [ebp - 14h]
        add eax, 20h
        push eax
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 91 22 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x22
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 07: jmp 0x406558
        __asm _emit 0xeb
        __asm _emit 0x07
        mov ecx, dword ptr [ebp - 14h]
        mov byte ptr [ecx + 20h], 0
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 10h]
        sub eax, 30h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 30h
        push ecx
        mov edx, dword ptr [ebp - 14h]
        add edx, 5ch
        push edx
        ; Exact mapped bytes E8 AB 2A 0A 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x2a
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 10h]
        mov edx, dword ptr [ebp - 14h]
        mov byte ptr [edx + ecx + 2bh], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 464h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [edx + 468h], eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 4A 3F 00 00: call 0x40a4f0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x4065b8
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 09 07 00 00: call 0x406cbf
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0C: jmp 0x4065c4
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 16 00 00 00: call 0x4065da
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        pop esi
        add esp, 14h
        cmp ebp, esp
        ; Exact mapped bytes E8 0C 22 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x22
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
