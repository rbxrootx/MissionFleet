// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5854DB20 .. +0xA3 bytes.
extern "C" __declspec(naked) void FUN_5854db20_5854DB20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 5ch
        ; Exact mapped bytes E8 2C 03 00 00: call 0x5854de60
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x5854db3f
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 7E: jmp 0x5854dbbd
        __asm _emit 0xeb
        __asm _emit 0x7e
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 B9 FD FF FF: call 0x5854d900
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        add ecx, 5ch
        mov dword ptr [ebp - 0ch], ecx
        lea edx, [ebp + 8]
        push edx
        lea eax, [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 3F 5C F5 FF: call 0x584a37a0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x5c
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 5ch
        mov dword ptr [ebp - 10h], edx
        lea eax, [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F5 5B F5 FF: call 0x584a3770
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x5b
        __asm _emit 0xf5
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 6C 4A F5 FF: call 0x584a25f0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x4a
        __asm _emit 0xf5
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x5854db8f
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 2E: jmp 0x5854dbbd
        __asm _emit 0xeb
        __asm _emit 0x2e
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 29 4B F5 FF: call 0x584a26c0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x4b
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 4]
        add eax, 54h
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 AE 4A F5 FF: call 0x584a2660
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x4a
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 18h]
        xor eax, dword ptr [ebp - 1ch]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
