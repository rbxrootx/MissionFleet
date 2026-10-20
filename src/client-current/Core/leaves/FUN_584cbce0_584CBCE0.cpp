// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584CBCE0 .. +0x1DC bytes.
extern "C" __declspec(naked) void FUN_584cbce0_584CBCE0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887f09ch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 18h
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
        movzx eax, word ptr [ebp + 20h]
        push eax
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 7B 22 2F 00: call 0x587bdfa0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x22
        __asm _emit 0x2f
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx], 5889864ch
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 50h], 1
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 58h], 2
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 5ch], 3b9aca00h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 60h], 2
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 68h], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [edx + 84h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 1ch]
        mov dword ptr [ecx + 88h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 28h]
        mov dword ptr [eax + 80h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 8ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 90h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 70h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 74h], 2
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 78h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 6ch], 10h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 7ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 9ch], 1
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 98h], 0
        push 58h
        ; Exact mapped bytes E8 0B 52 36 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x52
        __asm _emit 0x36
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 25: je 0x584cbe2e
        __asm _emit 0x74
        __asm _emit 0x25
        push -1
        mov edx, dword ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 98h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 E7 A9 FB FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xa9
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x584cbe35
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 1ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [edx + 94h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 94h]
        mov dword ptr [ebp - 20h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 4C 97 2E 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x97
        __asm _emit 0x2e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 94h]
        mov dword ptr [ebp - 24h], ecx
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 D6 36 FD FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x36
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0a0h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0a4h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0a8h], 0
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
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
