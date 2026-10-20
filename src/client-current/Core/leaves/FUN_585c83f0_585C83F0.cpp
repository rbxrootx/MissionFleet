// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585C83F0 .. +0x6E bytes.
extern "C" __declspec(naked) void FUN_585c83f0_585C83F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 21ec0h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 21ebch], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 20f08h]
        ; Exact mapped bytes E8 E1 80 F0 FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x80
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B2 6A 0B 00: call 0x5867eee0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x6a
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D7 6A FA FF: call 0x5856ef10
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x6a
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 38 43 F2 FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E9 87 FA FF: call 0x58570c40
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
