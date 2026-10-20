// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584913A0 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_584913a0_584913A0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 03 5F FF FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x5f
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 8
        ; Exact mapped bytes E8 C8 65 FF FF: call 0x58487980
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x65
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 E9 5E FF FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x5e
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx], edx
        mov dword ptr [ecx + 4], eax
        mov esp, ebp
        pop ebp
        ret
    }
}
