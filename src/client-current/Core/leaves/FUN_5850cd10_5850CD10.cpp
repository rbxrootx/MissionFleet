// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850CD10 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_5850cd10_5850CD10() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 90 A5 F7 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xa5
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 7D A5 F7 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xa5
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        mov dl, byte ptr [eax]
        mov byte ptr [ecx + 4], dl
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
