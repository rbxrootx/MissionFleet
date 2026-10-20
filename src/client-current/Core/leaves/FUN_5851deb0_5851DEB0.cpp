// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851DEB0 .. +0x4A bytes.
extern "C" __declspec(naked) void FUN_5851deb0_5851DEB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 7E 56 FE FF: call 0x58503540
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x56
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        mov dword ptr [ebp - 0ch], edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 27 4C FE FF: call 0x58502b00
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x4c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 FF F3 FF FF: call 0x5851d2f0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
