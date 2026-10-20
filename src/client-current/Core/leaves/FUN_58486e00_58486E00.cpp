// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58486E00 .. +0x6C bytes.
extern "C" __declspec(naked) void FUN_58486e00_58486E00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        lea eax, [ebp + 8]
        push eax
        ; Exact mapped bytes E8 71 04 00 00: call 0x58487280
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], eax
        lea ecx, [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 62 04 00 00: call 0x58487280
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        sub edx, dword ptr [ebp - 4]
        sar edx, 2
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
        ; Exact mapped bytes E8 5A 04 00 00: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 0B 00 00 00: call 0x58486e70
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov esp, ebp
        pop ebp
        ret
    }
}
