// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045E680 .. +0x93 bytes.
extern "C" __declspec(naked) void FUN_0045e680_0045E680() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        shl eax, 2
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 CA 01 00 00: call 0x45e870
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        shr ecx, 2
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 20h]
        add edx, 4
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        ; Exact mapped bytes E8 C4 02 00 00: call 0x45e990
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 28h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 24h]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 BB 01 00 00: call 0x45e8a0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + 24h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 28h], eax
        mov ecx, dword ptr [ebp + 8]
        shr ecx, 2
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*4]
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 D3 A0 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xa0
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
