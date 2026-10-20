// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042D6E1 .. +0x4D bytes.
extern "C" __declspec(naked) void FUN_0042d6e1_0042D6E1() {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 10h], 0
        ; Exact mapped bytes 75 2F: jne 0x42d719
        __asm _emit 0x75
        __asm _emit 0x2f
        push 0ch
        lea eax, [esi + 14h]
        push dword ptr [esi + 18h]
        push eax
        ; Exact mapped bytes E8 D7 FE FF FF: call 0x42d5cf
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 18h]
        add eax, 4
        lea edx, [ecx + ecx*2]
        dec ecx
        test ecx, ecx
        lea eax, [eax + edx*4 - 0ch]
        ; Exact mapped bytes 7C 0F: jl 0x42d719
        __asm _emit 0x7c
        __asm _emit 0x0f
        inc ecx
        mov edx, dword ptr [esi + 10h]
        mov dword ptr [eax], edx
        mov dword ptr [esi + 10h], eax
        sub eax, 0ch
        dec ecx
        ; Exact mapped bytes 75 F2: jne 0x42d70b
        __asm _emit 0x75
        __asm _emit 0xf2
        mov eax, dword ptr [esi + 10h]
        mov ecx, dword ptr [eax]
        inc dword ptr [esi + 0ch]
        mov dword ptr [esi + 10h], ecx
        and dword ptr [eax + 4], 0
        and dword ptr [eax + 8], 0
        pop esi
        ret
    }
}
