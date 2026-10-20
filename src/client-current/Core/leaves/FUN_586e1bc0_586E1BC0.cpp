// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E1BC0 .. +0xCC bytes.
extern "C" __declspec(naked) void FUN_586e1bc0_586E1BC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 210h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 208h], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 588b2644h
        ; Exact mapped bytes E8 05 04 E4 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x04
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 4
        push eax
        lea edx, [ebp - 204h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + eax + 110h]
        push edx
        lea eax, [ebp - 204h]
        push eax
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 29 E7 FF FF: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 0D 10 06 96 58: cmp ecx, dword ptr [0x58960610]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 46: jne 0x586e1c7c
        __asm _emit 0x75
        __asm _emit 0x46
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AF D2 E8 FF: call 0x5856eef0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xd2
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 210h], eax
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + edx + 110h]
        mov dword ptr [ebp - 20ch], ecx
        mov edx, dword ptr [ebp - 20ch]
        push edx
        lea eax, [ebp - 204h]
        push eax
        mov ecx, dword ptr [ebp - 210h]
        ; Exact mapped bytes E8 55 38 0E 00: call 0x587c54d0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x38
        __asm _emit 0x0e
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 CA F3 14 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xf3
        __asm _emit 0x14
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
