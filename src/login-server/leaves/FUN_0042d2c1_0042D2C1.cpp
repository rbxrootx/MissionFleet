// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042D2C1 .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_0042d2c1_0042D2C1() {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 10h], 0
        ; Exact mapped bytes 75 2F: jne 0x42d2f9
        __asm _emit 0x75
        __asm _emit 0x2f
        push 0ch
        lea eax, [esi + 14h]
        push dword ptr [esi + 18h]
        push eax
        ; Exact mapped bytes E8 F7 02 00 00: call 0x42d5cf
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 18h]
        add eax, 4
        lea edx, [ecx + ecx*2]
        dec ecx
        test ecx, ecx
        lea eax, [eax + edx*4 - 0ch]
        ; Exact mapped bytes 7C 0F: jl 0x42d2f9
        __asm _emit 0x7c
        __asm _emit 0x0f
        inc ecx
        mov edx, dword ptr [esi + 10h]
        mov dword ptr [eax], edx
        mov dword ptr [esi + 10h], eax
        sub eax, 0ch
        dec ecx
        ; Exact mapped bytes 75 F2: jne 0x42d2eb
        __asm _emit 0x75
        __asm _emit 0xf2
        mov eax, dword ptr [esi + 10h]
        mov ecx, dword ptr [eax]
        mov dword ptr [esi + 10h], ecx
        mov ecx, dword ptr [esp + 8]
        mov dword ptr [eax + 4], ecx
        mov ecx, dword ptr [esp + 0ch]
        mov dword ptr [eax], ecx
        inc dword ptr [esi + 0ch]
        and dword ptr [eax + 8], 0
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
