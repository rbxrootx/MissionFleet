// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00452B16 .. +0x23F bytes.
extern "C" __declspec(naked) void FUN_00452b16_00452B16() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57b4b5h
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
        sub esp, 24h
        push esi
        push edi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 30h], eax
        mov dword ptr [ebp - 2ch], eax
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 30h], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 A3 E3 0D 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xe3
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 4]
        push eax
        push 5b8010h
        lea ecx, [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 CE BD 07 00: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xbd
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 14h
        push 5b8028h
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 440h
        ; Exact mapped bytes E8 6C AB 00 00: call 0x45d710
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 FE E3 0D 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xe3
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 440h
        ; Exact mapped bytes E8 85 AB 00 00: call 0x45d740
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 0
        push 80h
        push 4
        push 0
        push 1
        push 40000000h
        push 0
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 440h
        ; Exact mapped bytes E8 91 AB 00 00: call 0x45d770
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 F4 21 5E 00: call dword ptr [0x5e21f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 F3 5B 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x5b
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], -1
        ; Exact mapped bytes 0F 84 29 01 00 00: je 0x452d23
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 0ah
        push 0dh
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 80h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 55h
        push ecx
        mov edx, dword ptr [ebp - 14h]
        add edx, 3ch
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 7ch]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 78h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 2ch
        push ecx
        mov edx, dword ptr [ebp - 14h]
        add edx, 1ch
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 18h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 14h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 10h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 4]
        push edx
        push 5b8040h
        push 5d7d0ch
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 44h
        cmp esi, esp
        ; Exact mapped bytes E8 68 5B 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x5b
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 2
        push 0
        push 0
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes FF 15 FC 21 5E 00: call dword ptr [0x5e21fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 4F 5B 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x5b
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea ecx, [ebp - 1ch]
        push ecx
        mov edi, esp
        push 5d7d0ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp edi, esp
        ; Exact mapped bytes E8 33 5B 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x5b
        __asm _emit 0x05
        __asm _emit 0x00
        push eax
        push 5d7d0ch
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes FF 15 F8 21 5E 00: call dword ptr [0x5e21f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 1C 5B 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x5b
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x452cce
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 18: jne 0x452ce6
        __asm _emit 0x75
        __asm _emit 0x18
        mov byte ptr [ebp - 20h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 6B AB 09 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xab
        __asm _emit 0x09
        __asm _emit 0x00
        mov al, byte ptr [ebp - 20h]
        ; Exact mapped bytes EB 53: jmp 0x452d39
        __asm _emit 0xeb
        __asm _emit 0x53
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        ; Exact mapped bytes E8 14 A7 09 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xa7
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov esi, esp
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes FF 15 EC 21 5E 00: call dword ptr [0x5e21ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 D5 5A 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x5a
        __asm _emit 0x05
        __asm _emit 0x00
        mov byte ptr [ebp - 28h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 2E AB 09 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xab
        __asm _emit 0x09
        __asm _emit 0x00
        mov al, byte ptr [ebp - 28h]
        ; Exact mapped bytes EB 16: jmp 0x452d39
        __asm _emit 0xeb
        __asm _emit 0x16
        mov byte ptr [ebp - 2ch], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 16 AB 09 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xab
        __asm _emit 0x09
        __asm _emit 0x00
        mov al, byte ptr [ebp - 2ch]
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
        add esp, 30h
        cmp ebp, esp
        ; Exact mapped bytes E8 91 5A 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x5a
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
