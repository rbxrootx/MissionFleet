// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878C7A0 .. +0xB9 bytes.
extern "C" __declspec(naked) void FUN_5878c7a0_5878C7A0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887fb90h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 18h
        push esi
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
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 5F FC FF FF: call 0x5878c430
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 75 FC FF FF: call 0x5878c450
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [eax]
        lea eax, [ecx + edx - 1]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D2 AC CF FF: call 0x584874c0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xac
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 63 F8 FF FF: call 0x5878c060
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A8 F8 FF FF: call 0x5878c0b0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes E8 F8 A6 CF FF: call 0x58486f10
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xa6
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 2D FC FF FF: call 0x5878c450
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        sub edx, 1
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 75 0E: jne 0x5878c849
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 ED FB FF FF: call 0x5878c430
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 0
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
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
