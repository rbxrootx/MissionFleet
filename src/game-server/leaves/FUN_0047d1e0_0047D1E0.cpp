// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047D1E0 .. +0xD1 bytes.
extern "C" __declspec(naked) void FUN_0047d1e0_0047D1E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push esi
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 09 05 00 00: call 0x47d710
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 AD 04 00 00: call 0x47d6c0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [eax]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 CB 03 00 00: call 0x47d5f0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 90 04 00 00: call 0x47d6c0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [eax], esi
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 82 04 00 00: call 0x47d6c0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 71 04 00 00: call 0x47d6c0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 56 04 00 00: call 0x47d6b0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [eax], edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 61 04 00 00: call 0x47d6d0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 75 08 00 00: call 0x47daf0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 8]
        add eax, 1
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 8], eax
        mov edx, dword ptr [ebp - 4]
        push edx
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 9A 04 00 00: call 0x47d730
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx], eax
        mov eax, dword ptr [ebp + 8]
        pop esi
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 35 B5 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xb5
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
