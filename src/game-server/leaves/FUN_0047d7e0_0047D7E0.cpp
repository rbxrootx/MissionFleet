// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047D7E0 .. +0x89 bytes.
extern "C" __declspec(naked) void FUN_0047d7e0_0047D7E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 AA F9 FF FF: call 0x47d1b0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 75 4A: jne 0x47d859
        __asm _emit 0x75
        __asm _emit 0x4a
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 D5 F3 FF FF: call 0x47cbf0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        push ecx
        lea edx, [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 76 F3 FF FF: call 0x47cba0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D3 00 00 00: call 0x47d910
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [edx + 8]
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 8], ecx
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 8], 0
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 7D AF 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xaf
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
