// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C1880 .. +0x1A9 bytes.
extern "C" __declspec(naked) void FUN_587c1880_587C1880() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5889242ch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 14h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp + 2ch]
        push eax
        mov ecx, dword ptr [ebp + 28h]
        push ecx
        mov edx, dword ptr [ebp + 24h]
        push edx
        mov eax, dword ptr [ebp + 20h]
        push eax
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 9C 0B CC FF: call 0x58482470
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x0b
        __asm _emit 0xcc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588be300h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 24h]
        mov dword ptr [ecx + 70h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 28h]
        mov dword ptr [eax + 74h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 8ch], 100h
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 3B: jne 0x587c1944
        __asm _emit 0x75
        __asm _emit 0x3b
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8ch]
        add ecx, 1
        push ecx
        ; Exact mapped bytes E8 27 F7 06 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xf7
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [edx + 80h], eax
        mov ecx, 1
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 80h]
        mov byte ptr [edx + ecx], 0
        ; Exact mapped bytes EB 0C: jmp 0x587c1950
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 80h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 84h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 88h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 6ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 90h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 94h], 0
        push 58h
        ; Exact mapped bytes E8 6F F6 06 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xf6
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 1D: je 0x587c19c2
        __asm _emit 0x74
        __asm _emit 0x1d
        push 40h
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 53 4E CC FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x4e
        __asm _emit 0xcc
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x587c19c9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 98h], edx
        push 0ffffff38h
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 98h]
        ; Exact mapped bytes E8 BE 3B FF FF: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x3b
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 98h]
        ; Exact mapped bytes E8 DE 43 CC FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x43
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes FF 15 10 43 89 58: call dword ptr [0x58894310]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 66 A3 8C 5F 96 58: mov word ptr [0x58965f8c], ax
        __asm _emit 0x66
        __asm _emit 0xa3
        __asm _emit 0x8c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 28 00: ret 0x28
        __asm _emit 0xc2
        __asm _emit 0x28
        __asm _emit 0x00
    }
}
