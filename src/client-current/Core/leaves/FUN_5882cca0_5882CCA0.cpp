// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882CCA0 .. +0x44 bytes.
extern "C" __declspec(naked) void FUN_5882cca0_5882CCA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 48 45 89 58: call dword ptr [0x58894548]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, -1
        ; Exact mapped bytes 74 09: je 0x5882ccd4
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x5882ccdb
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
