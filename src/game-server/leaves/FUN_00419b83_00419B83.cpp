// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00419B83 .. +0x47 bytes.
extern "C" __declspec(naked) void FUN_00419b83_00419B83() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov esi, esp
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 14h
        push ecx
        ; Exact mapped bytes FF 15 64 24 5E 00: call dword ptr [0x5e2464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 34 EC 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xec
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x419bb7
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x419bb9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop esi
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 1C EC 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xec
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
