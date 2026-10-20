// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58507120 .. +0x8C bytes.
extern "C" __declspec(naked) void FUN_58507120_58507120() {
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
        push eax
        ; Exact mapped bytes E8 16 96 32 00: call 0x58830765
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x96
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 2ch
        ; Exact mapped bytes E8 D3 FC FF FF: call 0x58506e30
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 24h
        ; Exact mapped bytes E8 C8 FC FF FF: call 0x58506e30
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1ch
        ; Exact mapped bytes E8 BD FC FF FF: call 0x58506e30
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 14h
        ; Exact mapped bytes E8 B2 FC FF FF: call 0x58506e30
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0ch
        ; Exact mapped bytes E8 A7 FC FF FF: call 0x58506e30
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 4
        ; Exact mapped bytes E8 9C FC FF FF: call 0x58506e30
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E2 92 32 00: call 0x5883047e
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x92
        __asm _emit 0x32
        __asm _emit 0x00
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
