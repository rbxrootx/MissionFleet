// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045F3A0 .. +0xB0 bytes.
extern "C" __declspec(naked) void FUN_0045f3a0_0045F3A0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1A F8 FF FF: call 0x45ebd0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 581af4h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov dword ptr [ecx + 18h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        mov dword ptr [ecx + 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [edx]
        mov dword ptr [ecx + 10h], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ecx]
        cdq
        push 0
        push 0ea60h
        push edx
        push eax
        ; Exact mapped bytes E8 01 D0 04 00: call 0x4ac400
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xd0
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 20h], eax
        mov dword ptr [ecx + 24h], edx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 28h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 2ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 30h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 14h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 80h], 0
        mov eax, dword ptr [ebp - 4]
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 96 93 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x93
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
