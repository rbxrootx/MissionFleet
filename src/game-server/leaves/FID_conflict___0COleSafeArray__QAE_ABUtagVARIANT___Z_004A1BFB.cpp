// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A1BFB .. +0x41 bytes.
extern "C" __declspec(naked) void FID_conflict___0COleSafeArray__QAE_ABUtagVARIANT___Z_004A1BFB() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 11 0F 00 00: call 0x4a2b1c
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 56 01 00 00: call 0x4a1d6d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 71 B6 0A 00: call 0x54d290
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xb6
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 14h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7B B6 0A 00: call 0x54d2a8
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xb6
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10h], eax
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
