// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C02D0 .. +0x10F bytes.
extern "C" __declspec(naked) void FUN_587c02d0_587C02D0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588923adh
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
        mov eax, dword ptr [ebp + 28h]
        push eax
        mov ecx, dword ptr [ebp + 24h]
        push ecx
        mov edx, dword ptr [ebp + 20h]
        push edx
        mov eax, dword ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 4E 21 CC FF: call 0x58482470
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x21
        __asm _emit 0xcc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588be2b8h
        ; Exact mapped bytes 8B 0D 7C 5F 96 58: mov ecx, dword ptr [0x58965f7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        add ecx, 1
        ; Exact mapped bytes 89 0D 7C 5F 96 58: mov dword ptr [0x58965f7c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes A1 7C 5F 96 58: mov eax, dword ptr [0x58965f7c]
        __asm _emit 0xa1
        __asm _emit 0x7c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [edx + 6ch], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 6ch
        push ecx
        mov ecx, 58965f80h
        ; Exact mapped bytes E8 C3 7E CC FF: call 0x58488220
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x7e
        __asm _emit 0xcc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 20h]
        mov dword ptr [edx + 70h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 24h]
        mov dword ptr [ecx + 74h], edx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 7ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 80h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 84h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 88h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 8ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 90h], 0ffffh
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 78h], 0
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
        ; Exact mapped bytes C2 24 00: ret 0x24
        __asm _emit 0xc2
        __asm _emit 0x24
        __asm _emit 0x00
    }
}
