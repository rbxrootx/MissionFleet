// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585000C0 .. +0x7A bytes.
extern "C" __declspec(naked) void FUN_585000c0_585000C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 28h], ecx
        ; Exact mapped bytes E8 83 AD 33 00: call 0x5883ae5b
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xad
        __asm _emit 0x33
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 18h]
        mov dword ptr [ebp - 24h], edx
        lea eax, [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 55 DC: call dword ptr [ebp - 0x24]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xdc
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 48 5C FC FF: call 0x584c5d40
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x5c
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 02 A5 33 00: call 0x5883a600
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xa5
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 37 5C FC FF: call 0x584c5d40
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x5c
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 F1 A4 33 00: call 0x5883a600
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xa4
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 8F A3 33 00: call 0x5883a4aa
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xa3
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 0A 9C FA FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x9c
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 1C 0F 33 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x0f
        __asm _emit 0x33
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
