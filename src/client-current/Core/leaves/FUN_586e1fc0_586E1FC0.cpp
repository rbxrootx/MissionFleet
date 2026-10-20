// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E1FC0 .. +0xCA bytes.
extern "C" __declspec(naked) void FUN_586e1fc0_586E1FC0() {
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
        push 588b26f0h
        ; Exact mapped bytes E8 05 00 E4 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x00
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
        shl eax, 1
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + eax + 110h]
        push edx
        lea eax, [ebp - 204h]
        push eax
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 2A E3 FF FF: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xe3
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
        ; Exact mapped bytes 75 45: jne 0x586e207a
        __asm _emit 0x75
        __asm _emit 0x45
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B0 CE E8 FF: call 0x5856eef0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xce
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 210h], eax
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + edx + 110h]
        mov dword ptr [ebp - 20ch], ecx
        mov edx, dword ptr [ebp - 20ch]
        push edx
        lea eax, [ebp - 204h]
        push eax
        mov ecx, dword ptr [ebp - 210h]
        ; Exact mapped bytes E8 57 34 0E 00: call 0x587c54d0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x34
        __asm _emit 0x0e
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 CC EF 14 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xef
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
