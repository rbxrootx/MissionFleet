// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850AA70 .. +0x81 bytes.
extern "C" __declspec(naked) void FUN_5850aa70_5850AA70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 50h], ecx
        mov eax, dword ptr [ebp + 20h]
        push eax
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes E8 7D D1 F7 FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xd1
        __asm _emit 0xf7
        __asm _emit 0xff
        push eax
        push 588a3dcch
        lea edx, [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 50h]
        push eax
        ; Exact mapped bytes E8 1A E8 FF FF: call 0x585092c0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        push eax
        push 40h
        lea ecx, [ebp - 4ch]
        push ecx
        ; Exact mapped bytes E8 EB 20 00 00: call 0x5850cba0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        push eax
        lea edx, [ebp - 4ch]
        push edx
        movzx eax, byte ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 50h]
        push edx
        ; Exact mapped bytes E8 05 EC FF FF: call 0x585096e0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 20h
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 65 65 32 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x65
        __asm _emit 0x32
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
