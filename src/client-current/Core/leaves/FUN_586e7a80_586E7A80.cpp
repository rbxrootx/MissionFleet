// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E7A80 .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_586e7a80_586E7A80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 1E F8 D9 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xf8
        __asm _emit 0xd9
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes E8 0C F8 D9 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xf8
        __asm _emit 0xd9
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 DC 06 00 00: call 0x586e81a0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        add eax, 0ch
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
