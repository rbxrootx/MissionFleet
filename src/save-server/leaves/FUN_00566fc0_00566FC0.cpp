// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00566FC0 .. +0xA1 bytes.
extern "C" __declspec(naked) void FUN_00566fc0_00566FC0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58ebc9h
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
        ; Exact mapped bytes E8 9C FD F6 FF: call 0x4d6d80
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xfd
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 34h
        ; Exact mapped bytes E8 1A 07 00 00: call 0x567710
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 63a7bch
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 1ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 20h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 28h], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [edx + 2ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 24h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [eax + 30h], ecx
        push 26h
        push 678f7ch
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 19 32 F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x32
        __asm _emit 0xf7
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
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
