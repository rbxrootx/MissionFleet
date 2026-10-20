// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58796C70 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_58796c70_58796C70() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 8
        ; Exact mapped bytes E8 01 0D CF FF: call 0x58487980
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x0d
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 22 06 CF FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x06
        __asm _emit 0xcf
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
