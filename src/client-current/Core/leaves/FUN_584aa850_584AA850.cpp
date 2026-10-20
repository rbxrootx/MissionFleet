// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584AA850 .. +0x60 bytes.
extern "C" __declspec(naked) void FUN_584aa850_584AA850() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AF D6 FD FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xd6
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 89 FF FF FF: call 0x584aa7f0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], 10h
        lea eax, [ebp - 8]
        push eax
        lea ecx, [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 9F F0 FF FF: call 0x584a9920
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        sub eax, 1
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes E8 F9 C9 FD FF: call 0x58487290
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xc9
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        lea ecx, [ebp - 14h]
        push ecx
        lea edx, [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 29 CB FD FF: call 0x584873d0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xcb
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [eax]
        mov esp, ebp
        pop ebp
        ret
    }
}
