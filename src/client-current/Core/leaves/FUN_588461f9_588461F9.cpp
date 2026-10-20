// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588461F9 .. +0x27A bytes.
extern "C" __declspec(naked) void FUN_588461f9_588461F9() {
    __asm {
        or dword ptr [ebp - 4], 0ffffffffh
        ; Exact mapped bytes EB 04: jmp 0x58846203
        __asm _emit 0xeb
        __asm _emit 0x04
        or dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 60h], eax
        mov eax, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 64h], eax
        mov eax, dword ptr [ebp - 64h]
        add eax, 4
        mov dword ptr [ebp - 70h], eax
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 68h], eax
        mov eax, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 6ch], eax
        mov eax, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 74h], eax
        mov eax, dword ptr [ebp - 70h]
        mov ecx, dword ptr [ebp - 74h]
        mov eax, dword ptr [eax]
        sub eax, dword ptr [ecx]
        sar eax, 2
        mov dword ptr [ebp - 0f4h], eax
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 78h], eax
        mov eax, dword ptr [ebp - 78h]
        mov dword ptr [ebp - 7ch], eax
        mov eax, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 80h], eax
        mov eax, dword ptr [ebp - 80h]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 0F 84 4F 01 00 00: je 0x588463aa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 84h], eax
        mov eax, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 88h], eax
        mov eax, dword ptr [ebp - 88h]
        add eax, 4
        mov dword ptr [ebp - 94h], eax
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 8ch], eax
        mov eax, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 90h], eax
        mov eax, dword ptr [ebp - 90h]
        mov dword ptr [ebp - 98h], eax
        mov eax, dword ptr [ebp - 94h]
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 0a4h], eax
        mov eax, dword ptr [ebp - 98h]
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 0a0h], eax
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 9ch], eax
        mov eax, dword ptr [ebp - 9ch]
        mov dword ptr [ebp - 110h], eax
        mov eax, dword ptr [ebp - 0a0h]
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 09: jmp 0x588462e5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 1ch]
        add eax, 4
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 1ch]
        cmp eax, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes 74 02: je 0x588462f2
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB EA: jmp 0x588462dc
        __asm _emit 0xeb
        __asm _emit 0xea
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 0a8h], eax
        mov eax, dword ptr [ebp - 0a8h]
        mov dword ptr [ebp - 0ach], eax
        mov eax, dword ptr [ebp - 0ach]
        add eax, 8
        mov dword ptr [ebp - 0c4h], eax
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 0b0h], eax
        mov eax, dword ptr [ebp - 0b0h]
        mov dword ptr [ebp - 0b4h], eax
        mov eax, dword ptr [ebp - 0b4h]
        mov dword ptr [ebp - 0c8h], eax
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 0b8h], eax
        mov eax, dword ptr [ebp - 0b8h]
        mov dword ptr [ebp - 0bch], eax
        mov eax, dword ptr [ebp - 0bch]
        mov dword ptr [ebp - 0cch], eax
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 0c0h], eax
        mov eax, dword ptr [ebp - 0c0h]
        mov dword ptr [ebp - 114h], eax
        mov eax, dword ptr [ebp - 0c4h]
        mov ecx, dword ptr [ebp - 0c8h]
        mov eax, dword ptr [eax]
        sub eax, dword ptr [ecx]
        sar eax, 2
        mov dword ptr [ebp - 0d0h], eax
        mov eax, dword ptr [ebp - 0cch]
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 0d4h], eax
        push 4
        push dword ptr [ebp - 0d0h]
        push dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 05 3F FF FF: call 0x5883a2ac
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x3f
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 0d8h], eax
        mov eax, dword ptr [ebp - 0d8h]
        mov dword ptr [ebp - 0dch], eax
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 66 1B C4 FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x1b
        __asm _emit 0xc4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 0e0h], eax
        mov eax, dword ptr [ebp - 0e0h]
        mov dword ptr [ebp - 0e4h], eax
        mov eax, dword ptr [ebp - 0e4h]
        add eax, 8
        mov dword ptr [ebp - 0e8h], eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 18h]
        lea eax, [ecx + eax*4]
        mov ecx, dword ptr [ebp - 0e8h]
        mov dword ptr [ecx], eax
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 0ech], eax
        mov eax, dword ptr [ebp - 0ech]
        mov dword ptr [ebp - 0f0h], eax
        mov eax, dword ptr [ebp - 0f0h]
        add eax, 4
        mov dword ptr [ebp - 0f8h], eax
        mov eax, dword ptr [ebp - 0f4h]
        mov ecx, dword ptr [ebp - 18h]
        lea eax, [ecx + eax*4]
        mov ecx, dword ptr [ebp - 0f8h]
        mov dword ptr [ecx], eax
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 0fch], eax
        mov eax, dword ptr [ebp - 0fch]
        mov dword ptr [ebp - 100h], eax
        mov eax, dword ptr [ebp - 100h]
        mov dword ptr [ebp - 104h], eax
        mov eax, dword ptr [ebp - 104h]
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [eax], ecx
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
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
    }
}
