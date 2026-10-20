// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851D1D0 .. +0x11C bytes.
extern "C" __declspec(naked) void FUN_5851d1d0_5851D1D0() {
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
        ; Exact mapped bytes E8 20 64 FE FF: call 0x58503610
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x64
        __asm _emit 0xfe
        __asm _emit 0xff
        sub eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 73 06: jae 0x5851d1fe
        __asm _emit 0x73
        __asm _emit 0x06
        ; Exact mapped bytes E8 73 D3 F8 FF: call 0x584aa570
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xd3
        __asm _emit 0xf8
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
        ; Exact mapped bytes E8 F4 0B 00 00: call 0x5851de10
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E9 AC F6 FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xac
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        lea ecx, [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes E8 39 40 FE FF: call 0x58501270
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x40
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EB AC F6 FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xac
        __asm _emit 0xf6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax + 10h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [edx + 14h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 50 A0 F6 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xa0
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 1ch], 7
        ; Exact mapped bytes 76 4B: jbe 0x5851d2b7
        __asm _emit 0x76
        __asm _emit 0x4b
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes E8 27 A0 F6 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xa0
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        push eax
        mov edx, dword ptr [ebp - 28h]
        push edx
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 17 09 00 00: call 0x5851dbb0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes E8 66 27 FB FF: call 0x584cfa10
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x27
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB 2C: jmp 0x5851d2e3
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 28h]
        push eax
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 DD 08 00 00: call 0x5851dbb0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 E0 9A F6 FF: call 0x58486dc0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x9a
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
