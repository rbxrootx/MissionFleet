// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586B8020 .. +0x71 bytes.
extern "C" __declspec(naked) void FUN_586b8020_586B8020() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        lea eax, [ebp + 8]
        push eax
        ; Exact mapped bytes E8 51 F2 DC FF: call 0x58487280
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xf2
        __asm _emit 0xdc
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        lea ecx, [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 42 F2 DC FF: call 0x58487280
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xf2
        __asm _emit 0xdc
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        sub eax, dword ptr [ebp - 4]
        cdq
        mov ecx, 22h
        idiv ecx
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        sub ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        lea ecx, [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 35 F2 DC FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xf2
        __asm _emit 0xdc
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [eax]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 E6 ED DC FF: call 0x58486e70
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xed
        __asm _emit 0xdc
        __asm _emit 0xff
        add esp, 10h
        mov esp, ebp
        pop ebp
        ret
    }
}
