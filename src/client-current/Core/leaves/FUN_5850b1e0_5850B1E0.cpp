// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850B1E0 .. +0x97 bytes.
extern "C" __declspec(naked) void FUN_5850b1e0_5850B1E0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58880a9dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        sub esp, 20h
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
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 14h]
        add edx, dword ptr [ecx + 4]
        mov ecx, edx
        ; Exact mapped bytes E8 BF 0A 00 00: call 0x5850bce0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 0F 84 A7 00 00 00: je 0x5850b2d5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        push eax
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 16 BA FF FF: call 0x58506c50
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 37 C5 FF FF: call 0x58507780
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xc5
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 75: je 0x5850b2c5
        __asm _emit 0x74
        __asm _emit 0x75
        mov dword ptr [ebp - 18h], 0
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 1D 08 00 00: call 0x5850ba80
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], -1
        ; Exact mapped bytes 75 09: jne 0x5850b275
        __asm _emit 0x75
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        or edx, 4
        mov dword ptr [ebp - 18h], edx
        ; Exact mapped bytes EB 21: jmp 0x5850b298
        __asm _emit 0xeb
        __asm _emit 0x21
    }
}
