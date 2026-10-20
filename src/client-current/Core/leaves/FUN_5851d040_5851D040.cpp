// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851D040 .. +0x88 bytes.
extern "C" __declspec(naked) void FUN_5851d040_5851D040() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 10h], 0
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 8B 79 F6 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x79
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 DF 64 FE FF: call 0x58503540
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x64
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        push eax
        ; Exact mapped bytes E8 46 A2 F6 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 98 65 FE FF: call 0x58503610
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x65
        __asm _emit 0xfe
        __asm _emit 0xff
        sub eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 73 06: jae 0x5851d086
        __asm _emit 0x73
        __asm _emit 0x06
        ; Exact mapped bytes E8 EB D4 F8 FF: call 0x584aa570
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xd4
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        mov cl, byte ptr [ebp - 2]
        mov byte ptr [ebp - 1], cl
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 EC 5C FE FF: call 0x58502d80
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x5c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        movzx ecx, byte ptr [ebp - 1]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 48 05 00 00: call 0x5851d600
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        or edx, 1
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
