// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58641ED0 .. +0x71 bytes.
extern "C" __declspec(naked) void FUN_58641ed0_58641ED0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        lea eax, [ebp + 8]
        push eax
        ; Exact mapped bytes E8 A1 53 E4 FF: call 0x58487280
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x53
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        lea ecx, [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 92 53 E4 FF: call 0x58487280
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x53
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        sub eax, dword ptr [ebp - 4]
        cdq
        mov ecx, 54h
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
        ; Exact mapped bytes E8 85 53 E4 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x53
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [eax]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 36 4F E4 FF: call 0x58486e70
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x4f
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 10h
        mov esp, ebp
        pop ebp
        ret
    }
}
