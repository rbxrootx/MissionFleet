// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585869A0 .. +0x60 bytes.
extern "C" __declspec(naked) void FUN_585869a0_585869A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 4
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 4]
        add eax, 8
        mov dword ptr [ebp - 18h], eax
        lea ecx, [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 3D 15 F0 FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 37 27 F2 FF: call 0x584a9110
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x27
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 8]
        add eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx], eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
