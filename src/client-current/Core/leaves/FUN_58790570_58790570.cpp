// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58790570 .. +0xA3 bytes.
extern "C" __declspec(naked) void FUN_58790570_58790570() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        movzx eax, word ptr [ebp + 8]
        test eax, eax
        ; Exact mapped bytes 7F 05: jg 0x58790586
        __asm _emit 0x7f
        __asm _emit 0x05
        ; Exact mapped bytes E9 87 00 00 00: jmp 0x5879060d
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EF 43 CF FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x43
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x587905a6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        movzx edx, word ptr [ebp + 8]
        cmp dword ptr [ebp - 4], edx
        ; Exact mapped bytes 7D 3D: jge 0x587905ec
        __asm _emit 0x7d
        __asm _emit 0x3d
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 1F: je 0x587905d4
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 03 44 CF FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 0ch]
        cmp eax, dword ptr [edx + ecx*4]
        ; Exact mapped bytes 75 0C: jne 0x587905d4
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1D CF E8 FF: call 0x5861d4f0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xcf
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + eax*4]
        push edx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B7 0A FF FF: call 0x587810a0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x0a
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB B1: jmp 0x5879059d
        __asm _emit 0xeb
        __asm _emit 0xb1
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 39 6B D4 FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x6b
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 52 B4 F1 FF: call 0x586aba50
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xb4
        __asm _emit 0xf1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 0a8h]
        ; Exact mapped bytes E8 04 3E F9 FF: call 0x58724410
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x3e
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
