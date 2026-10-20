// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00516431 .. +0x3C bytes.
extern "C" __declspec(naked) void _OnMouseActivate_CControlBar__QAEHPAVCWnd__II_Z_00516431() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1B 7D 01 00: call 0x52e15b
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x7d
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x51645a
        __asm _emit 0x75
        __asm _emit 0x16
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E2 77 02 00: call 0x53dc3a
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x77
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 0D: jmp 0x516467
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3F E9 FD FF: call 0x4f4da1
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, 3
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
