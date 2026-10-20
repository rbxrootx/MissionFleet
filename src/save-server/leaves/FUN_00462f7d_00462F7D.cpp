// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00462F7D .. +0x5F bytes.
extern "C" __declspec(naked) void FUN_00462f7d_00462F7D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        sub eax, 30h
        mov dword ptr [ebp - 4], eax
        push 327h
        push 67ca48h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 C3 72 07 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x72
        __asm _emit 0x07
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 20h]
        ; Exact mapped bytes E8 11 5D 11 00: call 0x578cb9
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x5d
        __asm _emit 0x11
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x462fb3
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 80004005h
        ; Exact mapped bytes EB 23: jmp 0x462fd6
        __asm _emit 0xeb
        __asm _emit 0x23
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20h]
        add eax, 0d8h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20h]
        mov ecx, dword ptr [edx + 0d8h]
        push eax
        ; Exact mapped bytes FF 51 44: call dword ptr [ecx + 0x44]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x44
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
