// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58491450 .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_58491450_58491450() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 4E 5E FF FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x5e
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes E8 3C 5E FF FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x5e
        __asm _emit 0xff
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
        ; Exact mapped bytes E8 5C 04 00 00: call 0x584918f0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        add eax, 8
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
