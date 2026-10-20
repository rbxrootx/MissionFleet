// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878C990 .. +0x15C bytes.
extern "C" __declspec(naked) void FUN_5878c990_5878C990() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58890f0ch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 24h
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
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 37 A6 FF FF: call 0x58787010
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xa6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b691ch
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0c0h], 0
        push 58h
        ; Exact mapped bytes E8 07 46 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x46
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 20: je 0x5878ca2d
        __asm _emit 0x74
        __asm _emit 0x20
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 46h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 E8 9D CF FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x5878ca34
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 1ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [eax + 0c0h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0c0h]
        mov dword ptr [ebp - 20h], eax
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 F0 2A D1 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x2a
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0ach]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 6
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 B5 8C 02 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0b0h]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 6
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 9A 8C 02 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0b8h]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 8dh
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 7D 8C 02 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0b4h]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 8dh
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 60 8C 02 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x00
        nop
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
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
