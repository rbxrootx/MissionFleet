// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883FC53 .. +0xC2 bytes.
extern "C" __declspec(naked) void FUN_5883fc53_5883FC53() {
    __asm {
        push ebp
        mov ebp, esp
        push -2
        push 588ecc18h
        push 5884ed90h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        push ecx
        sub esp, 10h
        push ebx
        push esi
        push edi
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor dword ptr [ebp - 8], eax
        xor eax, ebp
        push eax
        lea eax, [ebp - 10h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], esp
        mov dword ptr [ebp - 24h], ecx
        and dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 1ch], 145h
        ; Exact mapped bytes 0F B6 05 98 93 96 58: movzx eax, byte ptr [0x58969398]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x93
        __asm _emit 0x96
        __asm _emit 0x58
        cmp eax, 1
        ; Exact mapped bytes 75 0A: jne 0x5883fcac
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 148h
        ; Exact mapped bytes E9 A3 00 00 00: jmp 0x5883fd4f
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 06: je 0x5883fcb8
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 0A: jne 0x5883fcc2
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 146h
        ; Exact mapped bytes E9 8D 00 00 00: jmp 0x5883fd4f
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, 5896939ch
        ; Exact mapped bytes E8 6B FF FF FF: call 0x5883fc39
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        and dword ptr [ebp - 4], 0
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 7D 00 00 00: call 0x5883fd63
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 4], 0fffffffeh
        ; Exact mapped bytes EB 4E: jmp 0x5883fd40
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov eax, dword ptr [ebp - 14h]
        mov eax, dword ptr [eax]
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 14h]
        mov eax, dword ptr [eax]
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 20h], eax
        xor eax, eax
        inc eax
        ret
        mov esp, dword ptr [ebp - 18h]
        ; Exact mapped bytes C6 05 98 93 96 58 01: mov byte ptr [0x58969398], 1
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x93
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
    }
}
