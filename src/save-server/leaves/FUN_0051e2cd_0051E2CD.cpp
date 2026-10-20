// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051E2CD .. +0xC8 bytes.
extern "C" __declspec(naked) void FUN_0051e2cd_0051E2CD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 EC 3E 01 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 26 43 01 00: call 0x53260d
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 C6 40 01 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1D 6A 01 00: call 0x534d22
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        sub edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp + 18h]
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 9F 40 01 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F6 69 01 00: call 0x534d22
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 D5 42 01 00: call 0x53260d
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        add edx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 10h]
        add eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 8]
        sub ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 63 40 01 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BA 69 01 00: call 0x534d22
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        sub edx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp + 18h]
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 3C 40 01 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 93 69 01 00: call 0x534d22
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
