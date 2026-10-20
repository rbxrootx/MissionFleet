// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882D920 .. +0xCC bytes.
extern "C" __declspec(naked) void FUN_5882d920_5882D920() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5889260dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        push 0
        push 0
        push 0
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 24 E6 F8 FF: call 0x587bbf80
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xe6
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588be014h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ecx + 60h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [eax + 64h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 58h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 5ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 68h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 6ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 74h], 0
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C0 E6 F8 FF: call 0x587bc090
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xe6
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
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
        pop ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
