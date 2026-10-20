// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584FC4C0 .. +0x90 bytes.
extern "C" __declspec(naked) void FUN_584fc4c0_584FC4C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes FF 15 F4 44 89 58: call dword ptr [0x588944f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        push 4
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 87 98 F8 FF: call 0x58485d60
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x98
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 254h], 0
        ; Exact mapped bytes 74 66: je 0x584fc54c
        __asm _emit 0x74
        __asm _emit 0x66
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 254h], 0
        push 100h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 40 90 2B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x90
        __asm _emit 0x2b
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 D0 70 94 58: mov edx, dword ptr [0x589470d0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0x70
        __asm _emit 0x94
        __asm _emit 0x58
        mov eax, dword ptr [edx]
        ; Exact mapped bytes 8B 0D D0 70 94 58: mov ecx, dword ptr [0x589470d0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x70
        __asm _emit 0x94
        __asm _emit 0x58
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 12 AC FD FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xac
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B3 00 1B 00: call 0x586ac5e0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x1b
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A2 11 12 00: call 0x5861d6e0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x11
        __asm _emit 0x12
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 45 26 00 00: call 0x584feb90
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
