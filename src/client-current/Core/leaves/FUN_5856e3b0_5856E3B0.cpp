// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5856E3B0 .. +0xC1 bytes.
extern "C" __declspec(naked) void FUN_5856e3b0_5856E3B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp + 1ch]
        mov byte ptr [eax], 0
        mov ecx, dword ptr [ebp + 18h]
        mov dword ptr [ecx], 0
        mov edx, dword ptr [ebp + 14h]
        push edx
        push 0f003fh
        push 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 20 40 89 58: call dword ptr [0x58894020]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 22: je 0x5856e407
        __asm _emit 0x74
        __asm _emit 0x22
        push 0
        mov edx, dword ptr [ebp + 14h]
        push edx
        push 0
        push 0f003fh
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 40 40 89 58: call dword ptr [0x58894040]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov dword ptr [ebp - 8], 4
        mov dword ptr [ebp - 4], 4
        lea edx, [ebp - 4]
        push edx
        mov eax, dword ptr [ebp + 18h]
        push eax
        lea ecx, [ebp - 8]
        push ecx
        push 0
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 15 24 40 89 58: call dword ptr [0x58894024]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 06: jne 0x5856e43d
        __asm _emit 0x75
        __asm _emit 0x06
        mov edx, dword ptr [ebp + 1ch]
        mov byte ptr [edx], 1
        mov dword ptr [ebp - 0ch], 1
        push 4
        lea eax, [ebp - 0ch]
        push eax
        push 4
        push 0
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 15 34 40 89 58: call dword ptr [0x58894034]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 15 64 40 89 58: call dword ptr [0x58894064]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
