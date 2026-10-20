// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005466D0 .. +0xB7 bytes.
extern "C" __declspec(naked) void FUN_005466d0_005466D0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58eef9h
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
        push ecx
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 8C 06 F9 FF: call 0x4d6d80
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x06
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 3ch
        ; Exact mapped bytes E8 1A 01 00 00: call 0x546820
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 63b810h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 20h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 24h], 1
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 28h], 1
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 34h], 2
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 30h], 2710h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 38h], 1f40h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 2ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 1ch], 0
        push 33h
        push 67ad48h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 F1 3A F9 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x3a
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
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
