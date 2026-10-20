// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857DA00 .. +0xA7 bytes.
extern "C" __declspec(naked) void FUN_5857da00_5857DA00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 24h], ecx
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 75 33: jne 0x5857da4c
        __asm _emit 0x75
        __asm _emit 0x33
        push 0
        push 2
        lea eax, [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        movzx edx, word ptr [ebp + 8]
        shl edx, 10h
        movzx eax, byte ptr [ebp + 0ch]
        shl eax, 8
        movzx ecx, byte ptr [ebp + 10h]
        or eax, ecx
        or edx, eax
        push edx
        push 80011004h
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 47 EF 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xef
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 4B: jmp 0x5857da97
        __asm _emit 0xeb
        __asm _emit 0x4b
        ; Exact mapped bytes 66 8B 55 18: mov dx, word ptr [ebp + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x18
        ; Exact mapped bytes 66 89 55 E0: mov word ptr [ebp - 0x20], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xe0
        push 18h
        mov eax, dword ptr [ebp + 1ch]
        push eax
        lea ecx, [ebp - 1eh]
        push ecx
        ; Exact mapped bytes E8 2D EE 2C 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xee
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        push 0
        push 1ah
        lea edx, [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        movzx ecx, word ptr [ebp + 8]
        shl ecx, 10h
        movzx edx, byte ptr [ebp + 0ch]
        shl edx, 8
        movzx eax, byte ptr [ebp + 10h]
        or edx, eax
        or ecx, edx
        push ecx
        push 80011004h
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 FA EE 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xee
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 AF 35 2B 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x35
        __asm _emit 0x2b
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
