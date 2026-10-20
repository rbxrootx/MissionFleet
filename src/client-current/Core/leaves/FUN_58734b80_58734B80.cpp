// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58734B80 .. +0x7E bytes.
extern "C" __declspec(naked) void FUN_58734b80_58734B80() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        movzx eax, word ptr [ebp + 20h]
        push eax
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E8 FD 07 00: call 0x587b4990
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588b474ch
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 50h], edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 54h
        ; Exact mapped bytes E8 0B 29 D5 FF: call 0x584874d0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x29
        __asm _emit 0xd5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 60h
        ; Exact mapped bytes E8 A0 FD D6 FF: call 0x584a4970
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xfd
        __asm _emit 0xd6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 64h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 68h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 6ch], 0
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 70h], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
