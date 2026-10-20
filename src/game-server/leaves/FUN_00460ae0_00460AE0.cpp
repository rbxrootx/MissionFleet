// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00460AE0 .. +0x8C bytes.
extern "C" __declspec(naked) void FUN_00460ae0_00460AE0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FA EF FF FF: call 0x45faf0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 581bb8h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 10h], ecx
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [eax + 14h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [eax + 18h], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 28h], 0
        mov dword ptr [edx + 2ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 1ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 20h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 24h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 40h], 0
        mov eax, dword ptr [ebp - 4]
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 7A 7C 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x7c
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
