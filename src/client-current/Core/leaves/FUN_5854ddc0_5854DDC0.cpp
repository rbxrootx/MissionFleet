// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5854DDC0 .. +0x91 bytes.
extern "C" __declspec(naked) void FUN_5854ddc0_5854DDC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes FF 15 B8 42 89 58: call dword ptr [0x588942b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 4]
        add eax, 54h
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 79 48 F5 FF: call 0x584a2660
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x48
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [eax], edx
        mov eax, dword ptr [ebp - 4]
        add eax, 5ch
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 5F 48 F5 FF: call 0x584a2660
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x48
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [eax], edx
        mov eax, dword ptr [ebp - 4]
        add eax, 54h
        mov dword ptr [ebp - 18h], eax
        lea ecx, [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 45 48 F5 FF: call 0x584a2660
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x48
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 4]
        add eax, 5ch
        mov dword ptr [ebp - 1ch], eax
        lea ecx, [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 2B 48 F5 FF: call 0x584a2660
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x48
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        xor ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx], ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
