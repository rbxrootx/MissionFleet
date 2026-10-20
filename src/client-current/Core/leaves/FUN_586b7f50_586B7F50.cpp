// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586B7F50 .. +0xC1 bytes.
extern "C" __declspec(naked) void FUN_586b7f50_586B7F50() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888b8adh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 18h
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
        mov dword ptr [ebp - 14h], ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 90 FF DC FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xff
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        xor eax, eax
        mov byte ptr [ebp - 0dh], al
        lea ecx, [ebp - 0dh]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        lea ecx, [ebp - 0eh]
        ; Exact mapped bytes E8 7C A3 DE FF: call 0x584a2320
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xa3
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 4C: je 0x586b7ff7
        __asm _emit 0x74
        __asm _emit 0x4c
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 49 09 01 00: call 0x586c8900
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 D9 05 00 00: call 0x586b85b0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx + 4], eax
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 0A 3A 00 00: call 0x586bba00
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        lea ecx, [ebp - 0eh]
        ; Exact mapped bytes E8 31 FF DC FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xff
        __asm _emit 0xdc
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
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
