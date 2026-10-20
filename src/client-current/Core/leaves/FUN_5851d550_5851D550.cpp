// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851D550 .. +0xA4 bytes.
extern "C" __declspec(naked) void FUN_5851d550_5851D550() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887e00dh
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
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8A A9 F6 FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xa9
        __asm _emit 0xf6
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 0eh]
        push ecx
        ; Exact mapped bytes E8 20 9D F6 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x9d
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 18h], eax
        mov dl, byte ptr [ebp - 0fh]
        mov byte ptr [ebp - 0dh], dl
        mov eax, dword ptr [ebp - 18h]
        push eax
        movzx ecx, byte ptr [ebp - 0dh]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 C3 BA F8 FF: call 0x584a9070
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xba
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 10h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3B 55 FE FF: call 0x58502b00
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x55
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 F8 FA FF FF: call 0x5851d0d0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 14h]
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
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
