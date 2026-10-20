// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58570CA0 .. +0x6B bytes.
extern "C" __declspec(naked) void FUN_58570ca0_58570CA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        lea eax, [ebp + 8]
        push eax
        ; Exact mapped bytes E8 D1 65 F1 FF: call 0x58487280
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x65
        __asm _emit 0xf1
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        lea ecx, [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 C2 65 F1 FF: call 0x58487280
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x65
        __asm _emit 0xf1
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        sub edx, dword ptr [ebp - 4]
        sar edx, 1
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        sub edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        lea edx, [ebp + 10h]
        push edx
        ; Exact mapped bytes E8 BB 65 F1 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x65
        __asm _emit 0xf1
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 6C 61 F1 FF: call 0x58486e70
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x61
        __asm _emit 0xf1
        __asm _emit 0xff
        add esp, 10h
        mov esp, ebp
        pop ebp
        ret
    }
}
