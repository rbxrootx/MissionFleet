// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005610C0 .. +0xA1 bytes.
extern "C" __declspec(naked) void FUN_005610c0_005610C0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57f0e9h
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
        ; Exact mapped bytes E8 FC 6B F9 FF: call 0x4f7ce0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x6b
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 34h
        ; Exact mapped bytes E8 1A 07 00 00: call 0x561810
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588194h
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
        push 5cc7a4h
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 19 A0 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xa0
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
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
