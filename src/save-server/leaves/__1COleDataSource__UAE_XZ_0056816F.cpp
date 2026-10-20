// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056816F .. +0x75 bytes.
extern "C" __declspec(naked) void __1COleDataSource__UAE_XZ_0056816F() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58efcch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 8
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax], 63b9b4h
        mov dword ptr [ebp - 4], 0
        mov ecx, 6871ech
        ; Exact mapped bytes E8 D9 16 00 00: call 0x569880
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14h]
        cmp edx, dword ptr [ecx + 8]
        ; Exact mapped bytes 75 0A: jne 0x5681bf
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 8], 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 1D 00 00 00: call 0x5681e4
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 05 EC F6 FF: call 0x4d6ddb
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xec
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
