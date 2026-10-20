// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5870CDE0 .. +0x6C bytes.
extern "C" __declspec(naked) void FUN_5870cde0_5870CDE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 18h], ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 35 38 D9 FF: call 0x584a0630
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x38
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 6A 38 D9 FF: call 0x584a0670
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x38
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 3F 38 D9 FF: call 0x584a0650
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x38
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F4 37 D9 FF: call 0x584a0610
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x37
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [eax + 0ch], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 0A 42 12 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x42
        __asm _emit 0x12
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
