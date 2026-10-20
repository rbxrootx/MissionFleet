// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58844CAA .. +0x105 bytes.
extern "C" __declspec(naked) void FUN_58844caa_58844CAA() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58892c8bh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        sub esp, 58h
        push ebx
        push esi
        push edi
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
        mov dword ptr [ebp - 10h], esp
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 5ch], eax
        push 1
        push 60h
        push 1
        ; Exact mapped bytes E8 5A 55 FF FF: call 0x5883a24a
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x55
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 0C: jne 0x58844d08
        __asm _emit 0x75
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp + 8], eax
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp + 0ch], eax
        and dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 60h], eax
        lea eax, [ebp + 8]
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 34h], eax
        push dword ptr [ebp - 30h]
        push 4
        ; Exact mapped bytes E8 4C 2C C4 FF: call 0x58487980
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x2c
        __asm _emit 0xc4
        __asm _emit 0xff
        pop ecx
        pop ecx
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 18: je 0x58844d57
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 38h], eax
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx]
        mov dword ptr [eax], ecx
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 04: jmp 0x58844d5b
        __asm _emit 0xeb
        __asm _emit 0x04
        and dword ptr [ebp - 3ch], 0
        mov eax, dword ptr [ebp - 14h]
        add eax, 4
        mov dword ptr [ebp - 48h], eax
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 40h], eax
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 64h], eax
        lea eax, [ebp + 0ch]
        mov dword ptr [ebp - 44h], eax
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 4ch], eax
        push dword ptr [ebp - 48h]
        push 4
        ; Exact mapped bytes E8 FA 2B C4 FF: call 0x58487980
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x2b
        __asm _emit 0xc4
        __asm _emit 0xff
        pop ecx
        pop ecx
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 18: je 0x58844da9
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 50h], eax
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 50h]
        mov ecx, dword ptr [ecx]
        mov dword ptr [eax], ecx
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 04: jmp 0x58844dad
        __asm _emit 0xeb
        __asm _emit 0x04
        and dword ptr [ebp - 54h], 0
        ; Exact mapped bytes EB 2A: jmp 0x58844dd9
        __asm _emit 0xeb
        __asm _emit 0x2a
    }
}
