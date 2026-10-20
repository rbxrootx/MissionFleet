// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E1E40 .. +0x164 bytes.
extern "C" __declspec(naked) void FUN_586e1e40_586E1E40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 214h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 20ch], ecx
        movzx eax, word ptr [ebp + 0ch]
        mov dword ptr [ebp - 208h], eax
        mov ecx, dword ptr [ebp - 208h]
        sub ecx, 1
        mov dword ptr [ebp - 208h], ecx
        cmp dword ptr [ebp - 208h], 3
        ; Exact mapped bytes 0F 87 9B 00 00 00: ja 0x586e1f1a
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 208h]
        ; Exact mapped bytes FF 24 95 A4 1F 6E 58: jmp dword ptr [edx*4 + 0x586e1fa4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xa4
        __asm _emit 0x1f
        __asm _emit 0x6e
        __asm _emit 0x58
        mov eax, dword ptr [ebp + 8]
        push eax
        push 588b2664h
        ; Exact mapped bytes E8 56 01 E4 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 4
        push eax
        lea ecx, [ebp - 204h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        ; Exact mapped bytes EB 6A: jmp 0x586e1f1a
        __asm _emit 0xeb
        __asm _emit 0x6a
        mov edx, dword ptr [ebp + 8]
        push edx
        push 588b2684h
        ; Exact mapped bytes E8 32 01 E4 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 4
        push eax
        lea eax, [ebp - 204h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        ; Exact mapped bytes EB 46: jmp 0x586e1f1a
        __asm _emit 0xeb
        __asm _emit 0x46
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 588b26a4h
        ; Exact mapped bytes E8 0E 01 E4 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x01
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
        add esp, 0ch
        ; Exact mapped bytes EB 22: jmp 0x586e1f1a
        __asm _emit 0xeb
        __asm _emit 0x22
        mov eax, dword ptr [ebp + 8]
        push eax
        push 588b26c8h
        ; Exact mapped bytes E8 EA 00 E4 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 4
        push eax
        lea ecx, [ebp - 204h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 20ch]
        mov ecx, dword ptr [eax + edx + 110h]
        push ecx
        lea edx, [ebp - 204h]
        push edx
        mov ecx, dword ptr [ebp - 20ch]
        ; Exact mapped bytes E8 0F E4 FF FF: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes A1 EC 90 94 58: mov eax, dword ptr [0x589490ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 05 10 06 96 58: cmp eax, dword ptr [0x58960610]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 45: jne 0x586e1f94
        __asm _emit 0x75
        __asm _emit 0x45
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 96 CF E8 FF: call 0x5856eef0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xcf
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 214h], eax
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 20ch]
        mov eax, dword ptr [edx + ecx + 110h]
        mov dword ptr [ebp - 210h], eax
        mov ecx, dword ptr [ebp - 210h]
        push ecx
        lea edx, [ebp - 204h]
        push edx
        mov ecx, dword ptr [ebp - 214h]
        ; Exact mapped bytes E8 3D 35 0E 00: call 0x587c54d0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x35
        __asm _emit 0x0e
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 B2 F0 14 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xf0
        __asm _emit 0x14
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
