// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851D4E0 .. +0x69 bytes.
extern "C" __declspec(naked) void FUN_5851d4e0_5851D4E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 19 AA F6 FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xaa
        __asm _emit 0xf6
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 B3 9D F6 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x9d
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        mov cl, byte ptr [ebp - 3]
        mov byte ptr [ebp - 1], cl
        mov edx, dword ptr [ebp - 0ch]
        push edx
        movzx eax, byte ptr [ebp - 1]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 56 BB F8 FF: call 0x584a9070
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xbb
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 14h], ecx
        xor edx, edx
        mov byte ptr [ebp - 2], dl
        lea eax, [ebp - 2]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 9E A8 F6 FF: call 0x58487dd0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xa8
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C1 09 00 00: call 0x5851df00
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
