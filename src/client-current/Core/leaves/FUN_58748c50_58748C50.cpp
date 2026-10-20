// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58748C50 .. +0xF0 bytes.
extern "C" __declspec(naked) void FUN_58748c50_58748C50() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888f5adh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 8
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
        mov eax, dword ptr [ebp + 2ch]
        push eax
        mov ecx, dword ptr [ebp + 28h]
        push ecx
        mov edx, dword ptr [ebp + 24h]
        push edx
        mov eax, dword ptr [ebp + 20h]
        push eax
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        push 0
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 0A 97 D3 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x97
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b4e30h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [ecx + 70h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 18h]
        mov dword ptr [eax + 74h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 1ch]
        mov dword ptr [edx + 78h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 20h]
        mov dword ptr [ecx + 7ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 88h], 0
        push 100h
        ; Exact mapped bytes E8 51 83 0E 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x83
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 84h], edx
        mov eax, 1
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 84h]
        mov byte ptr [ecx + eax], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 80h], 3
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
        ; Exact mapped bytes C2 28 00: ret 0x28
        __asm _emit 0xc2
        __asm _emit 0x28
        __asm _emit 0x00
    }
}
