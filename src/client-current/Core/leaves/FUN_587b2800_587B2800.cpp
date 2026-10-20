// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B2800 .. +0x124 bytes.
extern "C" __declspec(naked) void FUN_587b2800_587B2800() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        mov dword ptr [ebp - 0ch], edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F0 0D D5 FF: call 0x58503610
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x0d
        __asm _emit 0xd5
        __asm _emit 0xff
        sub eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 73 06: jae 0x587b282e
        __asm _emit 0x73
        __asm _emit 0x06
        ; Exact mapped bytes E8 43 7D CF FF: call 0x584aa570
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x7d
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 0ch]
        add eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 14h]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C4 B5 D6 FF: call 0x5851de10
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xb5
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B9 56 CD FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x56
        __asm _emit 0xcd
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        lea ecx, [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes E8 09 EA D4 FF: call 0x58501270
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xea
        __asm _emit 0xd4
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BB 56 CD FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x56
        __asm _emit 0xcd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax + 10h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [edx + 14h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 20 4A CD FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x4a
        __asm _emit 0xcd
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 1ch], 7
        ; Exact mapped bytes 76 4F: jbe 0x587b28eb
        __asm _emit 0x76
        __asm _emit 0x4f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes E8 F3 49 CD FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x49
        __asm _emit 0xcd
        __asm _emit 0xff
        add esp, 4
        push eax
        mov eax, dword ptr [ebp - 28h]
        push eax
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 73 06 00 00: call 0x587b2f40
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes E8 32 D1 D1 FF: call 0x584cfa10
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xd1
        __asm _emit 0xd1
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], edx
        ; Exact mapped bytes EB 30: jmp 0x587b291b
        __asm _emit 0xeb
        __asm _emit 0x30
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 28h]
        push edx
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 35 06 00 00: call 0x587b2f40
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 A8 44 CD FF: call 0x58486dc0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x44
        __asm _emit 0xcd
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
