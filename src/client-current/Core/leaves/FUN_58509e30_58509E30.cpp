// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58509E30 .. +0xAD bytes.
extern "C" __declspec(naked) void FUN_58509e30_58509E30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3ch]
        and ecx, 1
        ; Exact mapped bytes 74 62: je 0x58509ea6
        __asm _emit 0x74
        __asm _emit 0x62
        mov edx, dword ptr [ebp - 4]
        add edx, 40h
        mov dword ptr [ebp - 14h], edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EB 1B 00 00: call 0x5850ba40
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x58509e66
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FF 10 00 00: call 0x5850af60
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 0B: jmp 0x58509e71
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D2 10 00 00: call 0x5850af40
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A7 10 00 00: call 0x5850af20
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        sub ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 97 10 00 00: call 0x5850af20
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 61 9F F9 FF: call 0x584a3df0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x9f
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 8B 08 FA FF: call 0x584aa730
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x08
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BC 23 00 00: call 0x5850c270
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 30 24 00 00: call 0x5850c2f0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 38h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3ch]
        and eax, 0fffffffeh
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 3ch], eax
        mov esp, ebp
        pop ebp
        ret
    }
}
