// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047B0A0 .. +0xA6 bytes.
extern "C" __declspec(naked) void FUN_0047b0a0_0047B0A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 8], -1
        ; Exact mapped bytes 75 4D: jne 0x47b10a
        __asm _emit 0x75
        __asm _emit 0x4d
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x47b0cf
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 4]
        ; Exact mapped bytes 7D 2E: jge 0x47b108
        __asm _emit 0x7d
        __asm _emit 0x2e
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 10h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx*4], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 14h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx*4], 0
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AA FB FF FF: call 0x47acb0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB BE: jmp 0x47b0c6
        __asm _emit 0xeb
        __asm _emit 0xbe
        ; Exact mapped bytes EB 2C: jmp 0x47b136
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 10h]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + eax*4], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 14h]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + eax*4], 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 7A FB FF FF: call 0x47acb0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 A0 D6 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xd6
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
