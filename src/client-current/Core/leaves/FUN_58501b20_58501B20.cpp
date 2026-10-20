// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58501B20 .. +0x77 bytes.
extern "C" __declspec(naked) void FUN_58501b20_58501B20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D9 63 F8 FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x63
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 73 57 F8 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x57
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp - 3]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D1 19 00 00: call 0x58503520
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov dl, byte ptr [ebp - 4]
        mov byte ptr [ebp - 1], dl
        movzx eax, byte ptr [ebp - 1]
        mov byte ptr [ebp - 2], al
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        lea edx, [ebp - 5]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        movzx ecx, byte ptr [ebp - 2]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 68 F4 FF FF: call 0x58500fe0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 5F 0D 00 00: call 0x585028e0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 03 10 00 00: call 0x58502b90
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 0ch]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
