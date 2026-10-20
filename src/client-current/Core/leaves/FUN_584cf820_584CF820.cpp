// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584CF820 .. +0x71 bytes.
extern "C" __declspec(naked) void FUN_584cf820_584CF820() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        push 3ch
        push 0
        lea eax, [ebp - 40h]
        push eax
        ; Exact mapped bytes E8 DD D5 37 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xd5
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 40h], 3ch
        mov dword ptr [ebp - 3ch], 40h
        mov dword ptr [ebp - 38h], 0
        mov dword ptr [ebp - 34h], 0
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 30h], ecx
        mov dword ptr [ebp - 2ch], 0
        mov dword ptr [ebp - 24h], 5
        mov dword ptr [ebp - 20h], 0
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 28h], edx
        lea eax, [ebp - 40h]
        push eax
        ; Exact mapped bytes FF 15 28 44 89 58: call dword ptr [0x58894428]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
