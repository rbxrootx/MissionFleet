// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00532947 .. +0x46 bytes.
extern "C" __declspec(naked) void FID_conflict___ICRect__QBE_AV0_ABUtagRECT___Z_00532947() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 6F F8 FF FF: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        lea edx, [ebp - 10h]
        push edx
        ; Exact mapped bytes FF 15 60 BF 68 00: call dword ptr [0x68bf60]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [eax + 0ch], edx
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
