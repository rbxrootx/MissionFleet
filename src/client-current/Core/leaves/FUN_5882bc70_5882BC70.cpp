// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882BC70 .. +0x107 bytes.
extern "C" __declspec(naked) void FUN_5882bc70_5882BC70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588be790h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], 0ffffffffh
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 8], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 14h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 18h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 24h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 28h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 20h], 40000h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20h]
        push edx
        ; Exact mapped bytes E8 5A 53 00 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x53
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 1ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 2ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 30h], 0
        ; Exact mapped bytes FF 15 B8 42 89 58: call dword ptr [0x588942b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 34h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax + 38h], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 3ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 48h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4ch], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 44h], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 40h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 5ch], 0
        push 3dh
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D3 05 00 00: call 0x5882c340
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
