// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851FA20 .. +0x6D bytes.
extern "C" __declspec(naked) void FUN_5851fa20_5851FA20() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887e060h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588a41ech
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 4ch], 0
        ; Exact mapped bytes 74 09: je 0x5851fa61
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 00 0E 00 00: call 0x58520860
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 10h]
        movzx eax, byte ptr [edx + 48h]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x5851fa75
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 BC 0E 00 00: call 0x58520930
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D3 74 FE FF: call 0x58506f50
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x74
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ret
    }
}
