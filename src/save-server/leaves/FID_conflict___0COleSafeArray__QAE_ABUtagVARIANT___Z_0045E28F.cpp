// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045E28F .. +0x41 bytes.
extern "C" __declspec(naked) void FID_conflict___0COleSafeArray__QAE_ABUtagVARIANT___Z_0045E28F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 8F 0E 00 00: call 0x45f12e
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 80 01 00 00: call 0x45e42b
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4D DA 0E 00: call 0x54bd00
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xda
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 14h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 57 DA 0E 00: call 0x54bd18
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xda
        __asm _emit 0x0e
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
