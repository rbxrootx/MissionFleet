// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044F693 .. +0xB3 bytes.
extern "C" __declspec(naked) void FUN_0044f693_0044F693() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57b35eh
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
        sub esp, 10h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 1ch], ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 46 FD FF FF: call 0x44f410
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 440h
        ; Exact mapped bytes E8 BD DF 00 00: call 0x45d6a0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 450h
        ; Exact mapped bytes E8 A7 DF 00 00: call 0x45d6a0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        lea edx, [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 460h
        ; Exact mapped bytes E8 91 DF 00 00: call 0x45d6a0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 3
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [eax], 5819d4h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 AE 00 00 00: call 0x44f7d2
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 1ch
        cmp ebp, esp
        ; Exact mapped bytes E8 9E 90 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x90
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
