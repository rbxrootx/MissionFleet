// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FF71C .. +0xDF bytes.
extern "C" __declspec(naked) void FUN_004ff71c_004FF71C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 8]
        push eax
        push 5cb7b0h
        push 80000000h
        ; Exact mapped bytes FF 15 18 1E 5E 00: call dword ptr [0x5e1e18]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 A6 00 00 00: jne 0x4ff7f2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        lea ecx, [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 18 1E 5E 00: call dword ptr [0x5e1e18]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 7F: jne 0x4ff7e8
        __asm _emit 0x75
        __asm _emit 0x7f
        mov dword ptr [ebp - 10h], 0
        lea ecx, [ebp - 10h]
        push ecx
        push 5cb7b8h
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 18 1E 5E 00: call dword ptr [0x5e1e18]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 57: jne 0x4ff7de
        __asm _emit 0x75
        __asm _emit 0x57
        push 104h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 64 E8 FE FF: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 20h], 104h
        lea eax, [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        lea edx, [ebp - 1ch]
        push edx
        push 0
        push 5deb98h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 08 1E 5E 00: call dword ptr [0x5e1e08]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        push -1
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 6B E9 FE FF: call 0x4ee133
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0xff
        xor ecx, ecx
        cmp dword ptr [ebp - 18h], 0
        sete cl
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes FF 15 FC 1D 5E 00: call dword ptr [0x5e1dfc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x1d
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 FC 1D 5E 00: call dword ptr [0x5e1dfc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x1d
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 FC 1D 5E 00: call dword ptr [0x5e1dfc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x1d
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
