// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58501AE0 .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_58501ae0_58501AE0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 C3 57 F8 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x57
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 B2 57 F8 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x57
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        lea eax, [ebp - 4]
        push eax
        ; Exact mapped bytes E8 9F 57 F8 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x57
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov esp, ebp
        pop ebp
        ret
    }
}
