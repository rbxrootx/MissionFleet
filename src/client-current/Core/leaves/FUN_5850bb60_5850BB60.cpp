// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850BB60 .. +0xBF bytes.
extern "C" __declspec(naked) void FUN_5850bb60_5850BB60() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58880acdh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        sub esp, 2ch
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
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 18h], 0
        mov eax, dword ptr [ebp - 14h]
        push eax
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 AE B0 FF FF: call 0x58506c50
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xb0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 CF BB FF FF: call 0x58507780
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 75 0E: jne 0x5850bbc6
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 18h]
        or edx, 4
        mov dword ptr [ebp - 18h], edx
        ; Exact mapped bytes E9 8A 00 00 00: jmp 0x5850bc50
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 14h]
        add edx, dword ptr [ecx + 4]
        mov ecx, edx
        ; Exact mapped bytes E8 04 01 00 00: call 0x5850bce0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        movzx eax, byte ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 84 07 00 00: call 0x5850c370
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 24h], ecx
        ; Exact mapped bytes E8 F6 EB F9 FF: call 0x584aa7f0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xeb
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 A6 F3 FF FF: call 0x5850afb0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 09: je 0x5850bc1d
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        or edx, 4
        mov dword ptr [ebp - 18h], edx
        ; Exact mapped bytes EB 21: jmp 0x5850bc40
        __asm _emit 0xeb
        __asm _emit 0x21
    }
}
