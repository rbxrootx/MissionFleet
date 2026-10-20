// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587967F0 .. +0x6C bytes.
extern "C" __declspec(naked) void FUN_587967f0_587967F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        lea eax, [ebp + 8]
        push eax
        ; Exact mapped bytes E8 81 0A CF FF: call 0x58487280
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x0a
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        lea ecx, [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 72 0A CF FF: call 0x58487280
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x0a
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        sub edx, dword ptr [ebp - 4]
        sar edx, 3
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
        ; Exact mapped bytes E8 6A 0A CF FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x0a
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 6B 50 FF FF: call 0x5878b8c0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov esp, ebp
        pop ebp
        ret
    }
}
