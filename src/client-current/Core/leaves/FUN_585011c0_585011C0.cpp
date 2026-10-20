// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585011C0 .. +0x88 bytes.
extern "C" __declspec(naked) void FUN_585011c0_585011C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 DA 95 FA FF: call 0x584aa7b0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x95
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 4
        push eax
        ; Exact mapped bytes E8 D1 60 F8 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x60
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 F3 37 F8 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x37
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 58 96 FA FF: call 0x584aa850
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x96
        __asm _emit 0xfa
        __asm _emit 0xff
        sub eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 73 06: jae 0x58501206
        __asm _emit 0x73
        __asm _emit 0x06
        ; Exact mapped bytes E8 6B 93 FA FF: call 0x584aa570
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x93
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        mov cl, byte ptr [ebp - 2]
        mov byte ptr [ebp - 1], cl
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 2C 4B FC FF: call 0x584c5d40
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x4b
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        movzx ecx, byte ptr [ebp - 1]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 38 5F FC FF: call 0x584c7170
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x5f
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        or edx, 1
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
