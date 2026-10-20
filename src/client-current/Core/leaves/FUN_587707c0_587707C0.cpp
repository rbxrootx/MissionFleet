// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587707C0 .. +0x9F bytes.
extern "C" __declspec(naked) void FUN_587707c0_587707C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 18h], ecx
        lea edx, [ebp - 1ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4F EC D2 FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xec
        __asm _emit 0xd2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5e84h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 67 18 DC FF: call 0x58532060
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x18
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5e84h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 7F D6 E2 FF: call 0x5859de90
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xd6
        __asm _emit 0xe2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5e84h]
        mov dword ptr [ebp - 10h], ecx
        lea edx, [ebp - 1ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A7 C6 D3 FF: call 0x584aced0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xc6
        __asm _emit 0xd3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5e84h]
        mov dword ptr [ebp - 14h], ecx
        lea edx, [ebp - 1ch]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 2F E0 FF FF: call 0x5876e870
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        push 8
        lea eax, [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 5ea0h
        push ecx
        ; Exact mapped bytes E8 3A C0 0D 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xc0
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 0ch
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
