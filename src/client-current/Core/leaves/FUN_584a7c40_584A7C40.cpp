// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A7C40 .. +0x6C bytes.
extern "C" __declspec(naked) void FUN_584a7c40_584A7C40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 5E F6 FD FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xf6
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        ; Exact mapped bytes E8 4C F6 FD FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xf6
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        ; Exact mapped bytes E8 3B F6 FD FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xf6
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 2A F6 FD FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xf6
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 1E 01 00 00: call 0x584a7dc0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
